#ifndef BROTHER_BUGCHK_H
#define BROTHER_BUGCHK_H

#include <stdio.h>

void* bugchk_malloc(size_t size, const char* filename, int line);

void bugchk_free(void* ptr, const char* filename, int line);

#endif // BROTHER_BUGCHK_H

