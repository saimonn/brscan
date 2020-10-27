#include "brother_scandec.h"
#include "brother_bugchk.h"
#include "brother_chreso.h"

#include <string.h>

static HANDLE DAT_00208f00;
static HANDLE DAT_00208f08;
static HANDLE DAT_00208f10;
static byte* DAT_00208f18;
static long malloc_size;
void* bugchk;
void* DAT_00208ef0;

static byte* FUN_001063f3(SCANDEC_WRITE *param_1,size_t *param_2);
static byte* FUN_00106751(SCANDEC_WRITE *param_1,size_t *param_2);
byte* (*DAT_00208f20)(SCANDEC_WRITE *param_1,size_t *param_2);

BOOL ScanDecOpen(SCANDEC_OPEN *param_1)
{
  ulong uVar1;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 *local_10;

  if ((param_1->nColorType >> 8 & 1) == 0) {
    if ((param_1->nColorType >> 9 & 1) == 0) {
      malloc_size = param_1->nOutDataKind * 3;
    }
    else {
      malloc_size = param_1->nOutDataKind;
    }
  }
  else {
    malloc_size = param_1->nOutDataKind;
  }
  local_10 = (undefined4 *)param_1;
  bugchk = bugchk_malloc(malloc_size, __FILE__, __LINE__);
  if (bugchk == 0x0) {
    local_5c = 0;
  }
  else {
    local_58 = *local_10;
    local_54 = local_10[1];
    local_50 = local_10[2];
    local_4c = local_10[3];
    local_48 = local_10[4];
    local_40 = *(undefined8 *)(local_10 + 6);
    local_38 = local_10[8];
    local_34 = local_10[9];
    uVar1 = ChangeResoInit((undefined8 *)&local_58);
    if ((int)uVar1 == 0) {
      bugchk_free(bugchk, __FILE__, __LINE__);
      bugchk = (undefined8 *)0x0;
      local_5c = 0;
    }
    else {
      *(undefined8 *)(local_10 + 10) = local_30;
      *(undefined8 *)(local_10 + 0xc) = local_28;
      *(undefined8 *)(local_10 + 0xe) = local_20;
      DAT_00208f00 = 0;
      DAT_00208f08 = 0;
      DAT_00208f10 = 0;
      DAT_00208f18 = 0;
      DAT_00208f20 = FUN_001063f3;
      local_5c = 1;
    }
  }
  return (ulong)local_5c;
}

BOOL ScanDecClose(void)
{ 
  if (bugchk != 0) {
    bugchk_free(bugchk, __FILE__, __LINE__);
    bugchk = 0;
  }
  ChangeResoClose();
  return 1;
}

DWORD ScanDecPageEnd(SCANDEC_WRITE *param_1, INT *param_2)
{
  long lVar1;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 *local_18;
  long local_10;

  local_58[0] = param_1->dwLineDataSize;
  local_50 = 0;
  local_48 = 0;
  local_40 = *(undefined8 *)(param_1 + 0x18);
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_30 = *(undefined4 *)(param_1 + 0x28);
  *param_2 = 0;
  local_18 = param_2;
  local_10 = (long)param_1;
  lVar1 = ChangeResoWriteEnd(local_58,param_2);
  if (DAT_00208f08 != 0) {
    DAT_00208f08 = 0;
  }
  if (DAT_00208f18 != 0) {
    DAT_00208f18 = 0;
  }
  DAT_00208ef0 = 0;
  return lVar1;
}

BOOL ScanDecPageStart(void)
{
  DAT_00208ef0 = bugchk;
  if (!bugchk) return 0;

  if ((DAT_00208f00 == 0) || (DAT_00208f08 = DAT_00208f00, DAT_00208f00 != 0)) {
    DAT_00208f20 = FUN_001063f3;
    if (DAT_00208f10 != 0) {
      DAT_00208f18 = DAT_00208f10;
      if ((DAT_00208f10 == 0) && (DAT_00208ef0 = 0, DAT_00208f08 != 0)) {
        DAT_00208f08 = 0;
      }
      DAT_00208f20 = FUN_00106751;
    }
    if (ChangeResoWriteStart() == 0) {
      DAT_00208ef0 = 0;
      if (DAT_00208f08 != 0) {
        DAT_00208f08 = 0;
      }
      if (DAT_00208f18 != 0) {
        DAT_00208f18 = 0;
      }
      return 0;
    }
    return 1;
  }

  DAT_00208ef0 = 0;
  return 0;
}

void ScanDecSetTblHandle(HANDLE param_1, HANDLE param_2)
{
  DAT_00208f00 = param_1;
  DAT_00208f10 = param_2;
  return;
}

DWORD ScanDecWrite(SCANDEC_WRITE *param_1, INT * param_2)
{
  undefined8 uVar1;
  undefined4 local_58 [2];
  byte *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28 [2];
  undefined4 *local_18;
  long local_10;
  
  local_18 = param_2;
  local_10 = (long)param_1;
  local_50 = (*DAT_00208f20)(param_1,local_28);
  local_58[0] = *(undefined4 *)(local_10 + 4);
  local_48 = local_28[0];
  local_40 = *(undefined8 *)(local_10 + 0x18);
  local_38 = *(undefined8 *)(local_10 + 0x20);
  local_30 = *(undefined4 *)(local_10 + 0x28);
  *local_18 = 0;
  uVar1 = ChangeResoWrite(local_58,local_18);
  return uVar1;
}

byte * FUN_001063f3(SCANDEC_WRITE *param_1,size_t *param_2)
{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  byte *pbVar4;
  size_t local_48;
  size_t local_40;
  char local_32;
  byte *local_30;
  byte *local_28;
  CHAR *local_20;

  local_20 = param_1->pLineData;
  local_40 = param_1->dwLineDataSize;
  *param_2 = 0;
  pbVar4 = DAT_00208ef0;
  if (param_1->nInDataComp == 1) {
    memset(DAT_00208ef0,0,malloc_size);
    local_28 = DAT_00208ef0;
    *param_2 = malloc_size;
  }
  else {
    if (param_1->nInDataComp == 3) {
      local_30 = DAT_00208ef0;
      local_28 = DAT_00208ef0;
      local_48 = malloc_size;
      if (DAT_00208f08 == 0) {
        do {
          if (local_48 == 0) {
            return pbVar4;
          }
          sVar2 = local_40 - 1;
          if (sVar2 == 0) {
            return pbVar4;
          }
          bVar1 = *local_20;
          pbVar3 = local_20 + 1;
          if ((char)bVar1 < '\0') {
            if (bVar1 != 0x80) {
              local_32 = '\x01' - bVar1;
              bVar1 = *pbVar3;
              while ((local_32 != '\0' && (local_48 != 0))) {
                *local_30 = bVar1;
                local_30 = local_30 + 1;
                local_32 = local_32 + -1;
                local_48 = local_48 - 1;
                *param_2 = *param_2 + 1;
              }
              sVar2 = local_40 - 2;
              pbVar3 = local_20 + 2;
            }
          }
          else {
            local_32 = bVar1 + 1;
            local_40 = sVar2;
            local_20 = pbVar3;
            while (((sVar2 = local_40, pbVar3 = local_20, local_32 != '\0' && (local_48 != 0)) &&
                   (local_40 != 0))) {
              *local_30 = *local_20;
              local_30 = local_30 + 1;
              local_32 = local_32 + -1;
              local_48 = local_48 - 1;
              local_40 = local_40 - 1;
              *param_2 = *param_2 + 1;
              local_20 = local_20 + 1;
            }
          }
          local_20 = pbVar3;
          local_40 = sVar2;
        } while (local_40 != 0);
      }
      else {
        do {
          if (local_48 == 0) {
            return pbVar4;
          }
          sVar2 = local_40 - 1;
          if (sVar2 == 0) {
            return pbVar4;
          }
          bVar1 = *local_20;
          pbVar3 = local_20 + 1;
          if ((char)bVar1 < '\0') {
            if (bVar1 != 0x80) {
              local_32 = '\x01' - bVar1;
              bVar1 = *pbVar3;
              while ((local_32 != '\0' && (local_48 != 0))) {
                *local_30 = *(byte *)((ulong)bVar1 + DAT_00208f08);
                local_30 = local_30 + 1;
                local_32 = local_32 + -1;
                local_48 = local_48 - 1;
                *param_2 = *param_2 + 1;
              }
              sVar2 = local_40 - 2;
              pbVar3 = local_20 + 2;
            }
          }
          else {
            local_32 = bVar1 + 1;
            local_40 = sVar2;
            local_20 = pbVar3;
            while (((sVar2 = local_40, pbVar3 = local_20, local_32 != '\0' && (local_48 != 0)) &&
                   (local_40 != 0))) {
              bVar1 = *local_20;
              local_20 = local_20 + 1;
              *local_30 = *(byte *)((ulong)bVar1 + DAT_00208f08);
              local_30 = local_30 + 1;
              local_32 = local_32 + -1;
              local_48 = local_48 - 1;
              local_40 = local_40 - 1;
              *param_2 = *param_2 + 1;
            }
          }
          local_20 = pbVar3;
          local_40 = sVar2;
        } while (local_40 != 0);
      }
    }
    else {
      if (DAT_00208f08 == 0) {
        *param_2 = local_40;
        local_28 = local_20;
      }
      else {
        local_30 = DAT_00208ef0;
        local_28 = DAT_00208ef0;
        local_48 = malloc_size;
        while ((local_48 != 0 && (local_40 != 0))) {
          bVar1 = *local_20;
          local_20 = local_20 + 1;
          *local_30 = *(byte *)((ulong)bVar1 + DAT_00208f08);
          local_30 = local_30 + 1;
          local_48 = local_48 - 1;
          local_40 = local_40 - 1;
          *param_2 = *param_2 + 1;
        }
      }
    }
  }
  return local_28;
}

undefined * FUN_00106751(SCANDEC_WRITE *param_1,size_t *param_2)
{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte local_62;
  byte *local_60;
  byte *local_58;
  size_t local_50;
  DWORD local_48;
  char local_3a;
  undefined *local_38;
  undefined *local_30;
  CHAR *local_28;

  local_28 = param_1->pLineData;
  local_48 = param_1->dwLineDataSize;
  local_58 = DAT_00208f18;
  local_60 = DAT_00208f18 + local_48;
  *param_2 = 0;
  puVar5 = DAT_00208ef0;
  if (param_1->nInDataComp == 1) {
    memset(DAT_00208ef0,0,malloc_size);
    local_30 = DAT_00208ef0;
    *param_2 = malloc_size;
  }
  else {
    if (param_1->nInDataComp == 3) {
      local_38 = DAT_00208ef0;
      local_30 = DAT_00208ef0;
      local_50 = malloc_size;
      if (DAT_00208f08 == 0) {
        do {
          if (local_50 == 0) {
            return puVar5;
          }
          lVar3 = local_48 + -1;
          if (lVar3 == 0) {
            return puVar5;
          }
          bVar2 = *local_28;
          pbVar4 = local_28 + 1;
          if ((char)bVar2 < '\0') {
            if (bVar2 != 0x80) {
              local_3a = '\x01' - bVar2;
              bVar2 = *pbVar4;
              while ((local_3a != '\0' && (local_50 != 0))) {
                local_62 = *local_60;
                local_60 = local_60 + 1;
                if (local_62 < bVar2) {
                  local_62 = bVar2 - local_62;
                }
                bVar1 = *local_58;
                local_58 = local_58 + 1;
                if (local_62 < bVar1) {
                  *local_38 = (char)((int)((uint)local_62 * 0x100 - (uint)local_62) /
                                    (int)(uint)bVar1);
                }
                else {
                  *local_38 = 0xff;
                }
                local_38 = local_38 + 1;
                local_3a = local_3a + -1;
                local_50 = local_50 - 1;
                *param_2 = *param_2 + 1;
              }
              lVar3 = local_48 + -2;
              pbVar4 = local_28 + 2;
            }
          }
          else {
            local_3a = bVar2 + 1;
            local_48 = lVar3;
            local_28 = pbVar4;
            while (((lVar3 = local_48, pbVar4 = local_28, local_3a != '\0' && (local_50 != 0)) &&
                   (local_48 != 0))) {
              bVar2 = *local_28;
              local_28 = local_28 + 1;
              local_62 = *local_60;
              local_60 = local_60 + 1;
              if (local_62 < bVar2) {
                local_62 = bVar2 - local_62;
              }
              bVar2 = *local_58;
              local_58 = local_58 + 1;
              if (local_62 < bVar2) {
                *local_38 = (char)((int)((uint)local_62 * 0x100 - (uint)local_62) / (int)(uint)bVar2
                                  );
              }
              else {
                *local_38 = 0xff;
              }
              local_38 = local_38 + 1;
              local_3a = local_3a + -1;
              local_50 = local_50 - 1;
              local_48 = local_48 + -1;
              *param_2 = *param_2 + 1;
            }
          }
          local_28 = pbVar4;
          local_48 = lVar3;
        } while (local_48 != 0);
      }
      else {
        do {
          if (local_50 == 0) {
            return puVar5;
          }
          lVar3 = local_48 + -1;
          if (lVar3 == 0) {
            return puVar5;
          }
          bVar2 = *local_28;
          pbVar4 = local_28 + 1;
          if ((char)bVar2 < '\0') {
            if (bVar2 != 0x80) {
              local_3a = '\x01' - bVar2;
              bVar2 = *pbVar4;
              while ((local_3a != '\0' && (local_50 != 0))) {
                local_62 = *local_60;
                local_60 = local_60 + 1;
                if (local_62 < bVar2) {
                  local_62 = bVar2 - local_62;
                }
                bVar1 = *local_58;
                local_58 = local_58 + 1;
                if (local_62 < bVar1) {
                  *local_38 = *(undefined *)
                               ((int)((uint)local_62 * 0x100 - (uint)local_62) / (int)(uint)bVar1 +
                               DAT_00208f08);
                }
                else {
                  *local_38 = *(undefined *)(DAT_00208f08 + 0xff);
                }
                local_38 = local_38 + 1;
                local_3a = local_3a + -1;
                local_50 = local_50 - 1;
                *param_2 = *param_2 + 1;
              }
              lVar3 = local_48 + -2;
              pbVar4 = local_28 + 2;
            }
          }
          else {
            local_3a = bVar2 + 1;
            local_48 = lVar3;
            local_28 = pbVar4;
            while (((lVar3 = local_48, pbVar4 = local_28, local_3a != '\0' && (local_50 != 0)) &&
                   (local_48 != 0))) {
              bVar2 = *local_28;
              local_28 = local_28 + 1;
              local_62 = *local_60;
              local_60 = local_60 + 1;
              if (local_62 < bVar2) {
                local_62 = bVar2 - local_62;
              }
              bVar2 = *local_58;
              local_58 = local_58 + 1;
              if (local_62 < bVar2) {
                *local_38 = *(undefined *)
                             ((int)((uint)local_62 * 0x100 - (uint)local_62) / (int)(uint)bVar2 +
                             DAT_00208f08);
              }
              else {
                *local_38 = *(undefined *)(DAT_00208f08 + 0xff);
              }
              local_38 = local_38 + 1;
              local_3a = local_3a + -1;
              local_50 = local_50 - 1;
              local_48 = local_48 + -1;
              *param_2 = *param_2 + 1;
            }
          }
          local_28 = pbVar4;
          local_48 = lVar3;
        } while (local_48 != 0);
      }
    }
    else {
      if (DAT_00208f08 == 0) {
        local_38 = DAT_00208ef0;
        local_30 = DAT_00208ef0;
        local_50 = malloc_size;
        while ((local_50 != 0 && (local_48 != 0))) {
          bVar2 = *local_28;
          local_28 = local_28 + 1;
          local_62 = *local_60;
          local_60 = local_60 + 1;
          if (local_62 < bVar2) {
            local_62 = bVar2 - local_62;
          }
          bVar2 = *local_58;
          local_58 = local_58 + 1;
          if (local_62 < bVar2) {
            *local_38 = (char)((int)((uint)local_62 * 0x100 - (uint)local_62) / (int)(uint)bVar2);
          }
          else {
            *local_38 = 0xff;
          }
          local_38 = local_38 + 1;
          local_50 = local_50 - 1;
          local_48 = local_48 + -1;
          *param_2 = *param_2 + 1;
        }
      }
      else {
        local_38 = DAT_00208ef0;
        local_30 = DAT_00208ef0;
        local_50 = malloc_size;
        while ((local_50 != 0 && (local_48 != 0))) {
          bVar2 = *local_28;
          local_28 = local_28 + 1;
          local_62 = *local_60;
          local_60 = local_60 + 1;
          if (local_62 < bVar2) {
            local_62 = bVar2 - local_62;
          }
          bVar2 = *local_58;
          local_58 = local_58 + 1;
          if (local_62 < bVar2) {
            *local_38 = *(undefined *)
                         ((int)((uint)local_62 * 0x100 - (uint)local_62) / (int)(uint)bVar2 +
                         DAT_00208f08);
          }
          else {
            *local_38 = *(undefined *)(DAT_00208f08 + 0xff);
          }
          local_38 = local_38 + 1;
          local_50 = local_50 - 1;
          local_48 = local_48 + -1;
          *param_2 = *param_2 + 1;
        }
      }
    }
  }
  return local_30;
}

