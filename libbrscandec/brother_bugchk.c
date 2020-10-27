#include "brother_bugchk.h"
#include "brother_scandec.h"

#include <malloc.h>
#include <stdlib.h>

#define BUGCHK_GUARD ((void*)0x53545244)

static int nMallocCnt = 0;
static int nFreeCnt = 0;

void* bugchk_malloc(size_t size, const char* filename, int line)
{
  nMallocCnt++;
  void** result = (void**)malloc(size + 3 * sizeof(void*));
  if (result) {
    // Surround by check patterns and save the allocation length.
    result[0] = BUGCHK_GUARD;
    *(uint64_t*)&result[1] = size;
    *(void**)((char*)(result + 2) + size) = BUGCHK_GUARD;
    return (void*)(result + 2);
  }
  fprintf(stderr, "bugchk_malloc(size=%zu), can\'t allocate@%s(%d)\n", size, filename, line);
  abort();
}

void bugchk_free(void* ptr, const char* filename, int line)
{
  long *plVar1;

  nFreeCnt++;
  if (!ptr) {
    fprintf(stderr,"bugchk_free(ptr=%p)@%s(%d)\n", ptr, filename, line);
    fflush(stderr);
    abort();
  }

  if (*(long *)(ptr + -0x10) == 0x53545244) {
    uint64_t endMark = *(long *)(ptr + *(long *)(ptr + -8));
    if (endMark == 0x53545244) {
      return;
    }
    else {
      size_t size = *(long *)(ptr + -8);
      fprintf(stderr,"bugchk_free(ptr=%p), invalid end-mark=0x%lx, size=%zu@%s(%d)\n", ptr,
              endMark, size, filename, line);
    }
  }
  else {
    fprintf(stderr,"bugchk_free(ptr=%p), invalid begin-mark=0x%lx@%s(%d)\n", ptr,
            *(long *)(ptr + -0x10), filename, line);
  }

  fflush(stderr);
  abort();
}

