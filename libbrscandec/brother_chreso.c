#include "brother_chreso.h"
#include "brother_bugchk.h"

#include <string.h>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint64_t DAT_002082a0;
uint64_t DAT_002083a0;
uint64_t DAT_002085a0;
uint64_t DAT_002086a0;
uint64_t DAT_002087a0;
void* _DAT_002088c8;
uint64_t _DAT_002088e0;
uint64_t _DAT_00208920;
uint32_t _DAT_00208928;
uint32_t _DAT_0020892c;
uint64_t _DAT_00208930;
uint64_t _DAT_00208938;
uint64_t _DAT_00208940;
uint64_t _DAT_00208950;
uint64_t _DAT_00208958;
uint32_t _DAT_00208984;
void* DAT_002088c0;
uint64_t DAT_002088c8;
uint64_t DAT_002088d0;
uint32_t DAT_002088d8;
uint32_t DAT_002088dc;
uint64_t DAT_002088e0;
long DAT_002088e8;
uint32_t DAT_00208920;
uint32_t DAT_00208924;
uint32_t DAT_00208928;
uint32_t DAT_0020892c;
uint64_t DAT_00208930;
uint64_t DAT_00208938;
uint64_t DAT_00208940;
uint64_t DAT_00208948;
uint64_t DAT_00208950;
uint64_t DAT_00208958;
uint64_t DAT_00208960;
uint64_t DAT_00208968;
uint32_t DAT_00208970;
uint32_t DAT_00208974;
uint32_t DAT_00208978;
uint32_t DAT_0020897c;
uint32_t DAT_00208980;
uint32_t DAT_00208984;
uint64_t DAT_00208988;
uint32_t DAT_002089c0;
uint32_t DAT_002089c4;
uint32_t DAT_002089c8;
uint32_t DAT_002089cc;
uint64_t DAT_002089d0;
uint64_t DAT_00208c40;
uint32_t DAT_00208c60;
uint32_t DAT_00208c64;
uint32_t DAT_00208c68;
uint32_t DAT_00208c6c;
uint32_t DAT_00208c70;
uint64_t DAT_00208ee0;

long (*DAT_00208990)(undefined8 param_1,undefined4 *param_2);
ulong (*DAT_00208998)(byte *param_1,undefined8 param_2,undefined *param_3);
ulong (*DAT_002089a0)(byte *param_1,undefined8 param_2,void *param_3,int param_4);
undefined8 (*DAT_002089a8)(float param_1,undefined *param_2);

void FUN_00102149(int param_1,int param_2,undefined4 *param_3)
{
  float fVar1 = (float)param_2 / (float)param_1;

  if (fVar1 == 1.00000000) {
    *param_3 = 1;
    return;
  }
  if (fVar1 == 2.00000000) {
    *param_3 = 2;
    return;
  }
  if (fVar1 == 3.00000000) {
    *param_3 = 3;
    return;
  }
  if (fVar1 == 4.00000000) {
    *param_3 = 4;
    return;
  }
  if (fVar1 == 0.50000000) {
    *param_3 = 5;
    return;
  }
  
  *param_3 = 0;
}

size_t FUN_001016e4(int *param_1,undefined4 *param_2)
{
  void *__dest;
  ulong uVar1;
  size_t local_20;
  
  local_20 = 0;
  if ((DAT_00208930 >> 10 & 1) == 0) {
    __dest = (void *)FUN_0010222c(param_1[10],*(long *)(param_1 + 6),0);
    memcpy(__dest,*(void **)(param_1 + 2),DAT_00208968);
    local_20 = DAT_00208968;
    *param_2 = 1;
  }
  else {
    __dest = (void *)FUN_0010222c(param_1[10],*(long *)(param_1 + 6),0);
    uVar1 = FUN_00104a67(*(void **)(param_1 + 2),*param_1,__dest);
    if ((int)uVar1 != 0) {
      local_20 = DAT_00208968;
      *param_2 = 1;
    }
  }
  return local_20;
}

size_t FUN_001017b1(int *param_1,undefined4 *param_2)
{
  void *__dest;
  ulong uVar1;
  size_t local_20;
  
  local_20 = 0;
  if ((DAT_00208930 >> 10 & 1) == 0) {
    __dest = (void *)FUN_0010222c(param_1[10],*(long *)(param_1 + 6),0);
    memcpy(__dest,*(void **)(param_1 + 2),DAT_00208968);
    local_20 = DAT_00208968;
    *param_2 = 1;
  }
  else {
    __dest = (void *)FUN_0010222c(param_1[10],*(long *)(param_1 + 6),0);
    uVar1 = FUN_00104c9e(*(void **)(param_1 + 2),*param_1,__dest);
    if ((int)uVar1 != 0) {
      local_20 = DAT_00208968;
      *param_2 = 1;
    }
  }
  return local_20;
}

size_t FUN_0010187e(int *param_1,undefined4 *param_2)
{
  void *__dest;
  ulong uVar1;
  size_t local_20;
  
  local_20 = 0;
  if ((DAT_00208930 >> 10 & 1) == 0) {
    __dest = (void *)FUN_0010222c(param_1[10],*(long *)(param_1 + 6),0);
    memcpy(__dest,*(void **)(param_1 + 2),DAT_00208968);
    local_20 = DAT_00208968;
    *param_2 = 1;
  }
  else {
    __dest = (void *)FUN_0010222c(param_1[10],*(long *)(param_1 + 6),0);
    uVar1 = FUN_00104ed0(*(void **)(param_1 + 2),*param_1,__dest);
    if ((int)uVar1 != 0) {
      local_20 = DAT_00208968;
      *param_2 = 1;
    }
  }
  return local_20;
}

long FUN_0010194b(long param_1,int *param_2)
{
  ushort uVar1;
  long lVar2;
  long local_28;
  
  uVar1 = DAT_00208988;
  local_28 = 0;
  DAT_00208988 = DAT_00208988 + 1;
  if ((_DAT_00208984 != 5) || ((uVar1 & 1) == 0)) {
    while (*param_2 < DAT_0020897c) {
      lVar2 = FUN_0010222c(*(int *)(param_1 + 0x28),*(long *)(param_1 + 0x18),*param_2);
      lVar2 = (*DAT_00208998)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar2);
      local_28 = local_28 + lVar2;
      *param_2 = *param_2 + 1;
    }
  }
  return local_28;
}

long FUN_001019e4(long param_1,int *param_2)
{
  long lVar1;
  float fVar2;
  float fVar3;
  int local_38;
  int local_34;
  float local_2c;
  long local_28;
  
  local_28 = 0;
  FUN_001044ca(*(void **)(param_1 + 8));
  if (2 < DAT_00208988) {
    fVar3 = (float)DAT_00208978;
    fVar2 = (float)DAT_0020897c;
    DAT_00208ee0 = 0;
    if ((int)((uint)DAT_00208988 - 3) % DAT_00208978 == 0) {
      local_2c = 1.00000000;
    }
    else {
      local_2c = 0.00000000;
      while (local_2c < (float)((int)((uint)DAT_00208988 - 3) % DAT_00208978)) {
        local_2c = local_2c + fVar3 / fVar2;
        DAT_00208ee0 = DAT_00208ee0 + 1;
      }
      local_2c = (local_2c + 1.00000000) - (float)((int)((uint)DAT_00208988 - 3) % DAT_00208978);
    }
    local_34 = 0;
    local_38 = 0;
    while (local_34 < DAT_0020897c) {
      if (((int)((uint)DAT_00208988 - 3) % DAT_00208978 <= (local_34 * DAT_00208978) / DAT_0020897c)
         && ((local_34 * DAT_00208978) / DAT_0020897c <
             (int)((uint)DAT_00208988 - 3) % DAT_00208978 + 1)) {
        local_38 = local_38 + 1;
      }
      local_34 = local_34 + 1;
    }
    local_34 = 0;
    while (local_34 < local_38) {
      FUN_0010222c(*(int *)(param_1 + 0x28),*(long *)(param_1 + 0x18),*param_2);
      undefined extra;
      lVar1 = (*DAT_002089a8)(local_2c, &extra);
      local_28 = local_28 + lVar1;
      local_34 = local_34 + 1;
      local_2c = local_2c + fVar3 / fVar2;
      DAT_00208ee0 = DAT_00208ee0 + 1;
      *param_2 = *param_2 + 1;
    }
  }
  return local_28;
}

long FUN_00101bd8(long param_1,int *param_2)
{
  ushort uVar1;
  long lVar2;
  long local_28;
  
  uVar1 = DAT_00208988;
  local_28 = 0;
  DAT_00208988 = DAT_00208988 + 1;
  if ((_DAT_00208984 != 5) || ((uVar1 & 1) == 0)) {
    while (*param_2 < DAT_0020897c) {
      lVar2 = FUN_0010222c(*(int *)(param_1 + 0x28),*(long *)(param_1 + 0x18),*param_2);
      if (DAT_00208970 == 1) {
        lVar2 = (*DAT_002089a0)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar2,1);
      }
      else {
        lVar2 = (*DAT_002089a0)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar2,
                                (ulong)DAT_00208970);
      }
      local_28 = local_28 + lVar2;
      *param_2 = *param_2 + 1;
    }
  }
  return local_28;
}

long FUN_00101cba(long param_1,int *param_2)
{
  long lVar1;
  float fVar2;
  float fVar3;
  int local_38;
  int local_34;
  float local_2c;
  long local_28;
  
  local_28 = 0;
  FUN_00104654(*(void **)(param_1 + 8));
  if (2 < DAT_00208988) {
    fVar3 = (float)DAT_00208978;
    fVar2 = (float)DAT_0020897c;
    DAT_00208ee0 = 0;
    if ((int)((uint)DAT_00208988 - 3) % DAT_00208978 == 0) {
      local_2c = 1.00000000;
    }
    else {
      local_2c = 0.00000000;
      while (local_2c < (float)((int)((uint)DAT_00208988 - 3) % DAT_00208978)) {
        local_2c = local_2c + fVar3 / fVar2;
        DAT_00208ee0 = DAT_00208ee0 + 1;
      }
      local_2c = (local_2c + 1.00000000) - (float)((int)((uint)DAT_00208988 - 3) % DAT_00208978);
    }
    local_34 = 0;
    local_38 = 0;
    while (local_34 < DAT_0020897c) {
      if (((int)((uint)DAT_00208988 - 3) % DAT_00208978 <= (local_34 * DAT_00208978) / DAT_0020897c)
         && ((local_34 * DAT_00208978) / DAT_0020897c <
             (int)((uint)DAT_00208988 - 3) % DAT_00208978 + 1)) {
        local_38 = local_38 + 1;
      }
      local_34 = local_34 + 1;
    }
    local_34 = 0;
    while (local_34 < local_38) {
      FUN_0010222c(*(int *)(param_1 + 0x28),*(long *)(param_1 + 0x18),*param_2);
      undefined extra;
      lVar1 = (*DAT_002089a8)(local_2c, &extra);
      local_28 = local_28 + lVar1;
      local_34 = local_34 + 1;
      local_2c = local_2c + fVar3 / fVar2;
      DAT_00208ee0 = DAT_00208ee0 + 1;
      *param_2 = *param_2 + 1;
    }
  }
  return local_28;
}

long FUN_00101eae(int *param_1,int *param_2)
{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  int local_38;
  int local_34;
  float local_2c;
  long local_28;
  
  local_28 = 0;
  uVar1 = FUN_00104754(*(void **)(param_1 + 2),*param_1);
  if (((int)uVar1 != 0) && (2 < DAT_00208988)) {
    fVar4 = (float)DAT_00208978;
    fVar3 = (float)DAT_0020897c;
    DAT_00208ee0 = 0;
    if ((int)((uint)DAT_00208988 - 3) % DAT_00208978 == 0) {
      local_2c = 1.00000000;
    }
    else {
      local_2c = 0.00000000;
      while (local_2c < (float)((int)((uint)DAT_00208988 - 3) % DAT_00208978)) {
        local_2c = local_2c + fVar4 / fVar3;
        DAT_00208ee0 = DAT_00208ee0 + 1;
      }
      local_2c = (local_2c + 1.00000000) - (float)((int)((uint)DAT_00208988 - 3) % DAT_00208978);
    }
    local_34 = 0;
    local_38 = 0;
    while (local_34 < DAT_0020897c) {
      if (((int)((uint)DAT_00208988 - 3) % DAT_00208978 <= (local_34 * DAT_00208978) / DAT_0020897c)
         && ((local_34 * DAT_00208978) / DAT_0020897c <
             (int)((uint)DAT_00208988 - 3) % DAT_00208978 + 1)) {
        local_38 = local_38 + 1;
      }
      local_34 = local_34 + 1;
    }
    local_34 = 0;
    while (local_34 < local_38) {
      FUN_0010222c(param_1[10],*(long *)(param_1 + 6),*param_2);
      undefined extra;
      lVar2 = (*DAT_002089a8)(local_2c, &extra);
      local_28 = local_28 + lVar2;
      local_34 = local_34 + 1;
      local_2c = local_2c + fVar4 / fVar3;
      DAT_00208ee0 = DAT_00208ee0 + 1;
      *param_2 = *param_2 + 1;
    }
  }
  return local_28;
}

void FUN_001020b0(int param_1,int param_2,int *param_3,int *param_4)
{
  int iVar1;
  float fVar2;
  int local_24;
  
  local_24 = 1;
  while (1) {
    if (99 < local_24) {
      *param_3 = param_1;
      *param_4 = param_2;
      return;
    }
    fVar2 = ((float)local_24 * (float)param_2) / (float)param_1;
    iVar1 = (int)fVar2;
    if ((float)iVar1 == fVar2) break;
    local_24 = local_24 + 1;
  }
  *param_3 = local_24;
  *param_4 = iVar1;
  return;
}

ulong FUN_0010227a(undefined4 *param_1)
{
  uint local_14;
  
  if ((DAT_00208920 == _DAT_00208928) && (DAT_00208924 == _DAT_0020892c)) {
    if (_DAT_00208940 == 1) {
      DAT_00208990 = FUN_001016e4;
    }
    else {
      if (_DAT_00208940 == 3) {
        DAT_00208990 = FUN_001017b1;
      }
      else {
        DAT_00208990 = FUN_0010187e;
      }
    }
    *param_1 = 1;
  }
  else {
    if ((DAT_00208930 >> 8 & 1) == 0) {
      if ((DAT_00208930 >> 9 & 1) == 0) {
        if (DAT_0020897c * 2 < DAT_00208978) {
          local_14 = 0;
          goto LAB_00102609;
        }
        DAT_00208990 = FUN_00101eae;
        if (DAT_00208974 < DAT_00208970) {
          if (_DAT_00208940 == 1) {
            DAT_002089a8 = FUN_00103ccf;
          }
          else {
            if (_DAT_00208940 == 3) {
              DAT_002089a8 = FUN_00103de8;
            }
            else {
              DAT_002089a8 = FUN_00103f01;
            }
          }
          *param_1 = 4;
        }
        else {
          if (_DAT_00208940 == 1) {
            DAT_002089a8 = FUN_00103059;
          }
          else {
            if (_DAT_00208940 == 3) {
              DAT_002089a8 = FUN_001033a4;
            }
            else {
              DAT_002089a8 = FUN_001036ef;
            }
          }
          *param_1 = 3;
        }
      }
      else {
        if ((DAT_00208930 >> 4 & 1) == 0) {
          if (DAT_0020897c * 2 < DAT_00208978) {
            local_14 = 0;
            goto LAB_00102609;
          }
          DAT_00208990 = FUN_00101cba;
          if (DAT_00208974 < DAT_00208970) {
            DAT_002089a8 = FUN_00103bca;
            *param_1 = 4;
          }
          else {
            DAT_002089a8 = FUN_00102d59;
            *param_1 = 3;
          }
        }
        else {
          if ((DAT_00208980 == 0) || (_DAT_00208984 == 0)) {
            local_14 = 0;
            goto LAB_00102609;
          }
          DAT_00208990 = FUN_00101bd8;
          *param_1 = 2;
          if (DAT_00208980 - 2U < 3) {
            DAT_002089a0 = FUN_00104412;
          }
          else {
            DAT_002089a0 = FUN_00104399;
          }
        }
      }
    }
    else {
      if ((DAT_00208980 == 0) || (_DAT_00208984 == 0)) {
        if (DAT_0020897c * 2 < DAT_00208978) {
          local_14 = 0;
          goto LAB_00102609;
        }
        DAT_00208990 = FUN_001019e4;
        if (DAT_00208974 < DAT_00208970) {
          DAT_002089a8 = FUN_00103a7b;
          *param_1 = 4;
        }
        else {
          DAT_002089a8 = FUN_00102944;
          *param_1 = 3;
        }
      }
      else {
        DAT_00208990 = FUN_0010194b;
        *param_1 = 2;
        if (DAT_00208980 == 3) {
          DAT_00208998 = FUN_00104153;
        }
        else {
          if (DAT_00208980 < 4) {
            if (DAT_00208980 == 2) {
              DAT_00208998 = FUN_001040d6;
            }
            else {
LAB_00102360:
              DAT_00208998 = FUN_00104365;
            }
          }
          else {
            if (DAT_00208980 == 4) {
              DAT_00208998 = FUN_00104296;
            }
            else {
              if (DAT_00208980 != 5) goto LAB_00102360;
              DAT_00208998 = FUN_0010404d;
            }
          }
        }
      }
    }
  }
  local_14 = 1;
LAB_00102609:
  return (ulong)local_14;
}

ulong FUN_0010260e(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  float fVar4;
  float fVar5;
  uint local_30;
  int local_2c;
  
  fVar4 = (float)DAT_00208970;
  fVar1 = (float)DAT_00208974;
  fVar5 = (float)DAT_00208978;
  fVar2 = (float)DAT_0020897c;
  local_2c = 0;
  while (local_2c < DAT_00208974) {
    fVar3 = (float)local_2c * (fVar4 / fVar1);
    fVar3 = fVar3 - (float)(int)fVar3;
    if (0x1f < local_2c) {
      local_30 = 0;
      goto LAB_00102938;
    }
    *(float *)(&DAT_002089c0 + (long)local_2c * 0x14) = fVar3;
    FUN_00105413(fVar3 + 1.00000000);
    *(undefined4 *)(&DAT_002089c4 + (long)local_2c * 0x14) = extraout_XMM0_Da;
    FUN_00105413(fVar3);
    *(undefined4 *)(&DAT_002089c8 + (long)local_2c * 0x14) = extraout_XMM0_Da_00;
    FUN_00105413(1.00000000 - fVar3);
    *(undefined4 *)(&DAT_002089cc + (long)local_2c * 0x14) = extraout_XMM0_Da_01;
    FUN_00105413(2.00000000 - fVar3);
    *(undefined4 *)(&DAT_002089d0 + (long)local_2c * 0x14) = extraout_XMM0_Da_02;
    local_2c = local_2c + 1;
  }
  local_2c = 0;
  do {
    if (DAT_0020897c <= local_2c) {
      local_30 = 1;
LAB_00102938:
      return (ulong)local_30;
    }
    fVar1 = (float)local_2c * (fVar5 / fVar2);
    fVar1 = fVar1 - (float)(int)fVar1;
    if (0x1f < local_2c) {
      local_30 = 0;
      goto LAB_00102938;
    }
    *(float *)(&DAT_00208c60 + (long)local_2c * 0x14) = fVar1;
    FUN_00105413(fVar1 + 1.00000000);
    *(undefined4 *)(&DAT_00208c64 + (long)local_2c * 0x14) = extraout_XMM0_Da_03;
    FUN_00105413(fVar1);
    *(undefined4 *)(&DAT_00208c68 + (long)local_2c * 0x14) = extraout_XMM0_Da_04;
    FUN_00105413(1.00000000 - fVar1);
    *(undefined4 *)(&DAT_00208c6c + (long)local_2c * 0x14) = extraout_XMM0_Da_05;
    FUN_00105413(2.00000000 - fVar1);
    *(undefined4 *)(&DAT_00208c70 + (long)local_2c * 0x14) = extraout_XMM0_Da_06;
    local_2c = local_2c + 1;
  } while(1);
}

undefined8 FUN_00102944(float param_1,long param_2)
{
  ulong uVar1;
  float fVar2;
  ulong local_50;
  int local_48;
  float local_38;
  float local_34;
  byte local_2d;
  int local_2c;
  long local_28;
  int local_20;
  int local_1c;
  byte *local_18;
  float local_c;
  
  fVar2 = (float)DAT_00208970 / (float)DAT_00208974;
  local_18 = (byte *)(param_2 + -1);
  local_2c = (int)(DAT_00208948 / (ulong)(long)DAT_00208974);
  local_c = param_1;
  if ((float)(int)param_1 == param_1) {
    local_1c = 0;
    local_28 = 0;
    local_34 = 0.00000000;
    while (local_1c < local_2c) {
      local_38 = local_34;
      local_20 = 0;
      while (local_20 < DAT_00208974) {
        if (local_20 == 0) {
          if (9223372036854775808.00000000 <= local_c) {
            local_48 = (int)(long)(local_c - 9223372036854775808.00000000);
          }
          else {
            local_48 = (int)(long)local_c;
          }
          if (9223372036854775808.00000000 <= local_38) {
            local_50 = (long)(local_38 - 9223372036854775808.00000000) ^ 0x8000000000000000;
          }
          else {
            local_50 = (ulong)local_38;
          }
          uVar1 = FUN_001050ff(local_50,local_48);
          local_2d = (byte)uVar1;
        }
        else {
          DAT_00208c40 = local_20;
          FUN_0010561d(local_38,local_c,&local_2d);
        }
        if ((local_20 + (int)local_28 & 7U) == 0) {
          local_18 = local_18 + 1;
          *local_18 = 0;
        }
        if (4 < local_2d) {
          *local_18 = (byte)(1 << (7 - ((char)local_20 + (char)local_28 & 7U) & 0x1f)) | *local_18;
        }
        local_20 = local_20 + 1;
        local_38 = local_38 + fVar2;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + DAT_00208974;
      local_34 = local_34 + (float)DAT_00208970;
    }
  }
  else {
    local_1c = 0;
    local_28 = 0;
    local_34 = 0.00000000;
    while (local_1c < local_2c) {
      local_38 = local_34;
      local_20 = 0;
      while (local_20 < DAT_00208974) {
        DAT_00208c40 = local_20;
        FUN_0010561d(local_38,local_c,&local_2d);
        if ((local_20 + (int)local_28 & 7U) == 0) {
          local_18 = local_18 + 1;
          *local_18 = 0;
        }
        if (4 < local_2d) {
          *local_18 = (byte)(1 << (7 - ((char)local_20 + (char)local_28 & 7U) & 0x1f)) | *local_18;
        }
        local_20 = local_20 + 1;
        local_38 = local_38 + fVar2;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + DAT_00208974;
      local_34 = local_34 + (float)DAT_00208970;
    }
  }
  local_34 = (float)(DAT_00208970 * local_2c);
  local_2c = (int)DAT_00208948 - local_2c * DAT_00208974;
  local_1c = 0;
  while (local_1c < local_2c) {
    DAT_00208c40 = local_1c;
    FUN_0010561d(local_34,local_c,&local_2d);
    if ((local_1c + (int)local_28 & 7U) == 0) {
      local_18 = local_18 + 1;
      *local_18 = 0;
    }
    if (4 < local_2d) {
      *local_18 = (byte)(1 << (7 - ((char)local_20 + (char)local_28 & 7U) & 0x1f)) | *local_18;
    }
    local_1c = local_1c + 1;
    local_34 = local_34 + fVar2;
  }
  return DAT_00208968;
}

undefined8 FUN_00102d59(float param_1,undefined *param_2)
{
  int iVar1;
  ulong uVar2;
  int iVar3;
  float fVar4;
  ulong local_40;
  int local_38;
  float local_2c;
  float local_28;
  int local_20;
  int local_1c;
  undefined *local_18;
  
  fVar4 = (float)DAT_00208970 / (float)DAT_00208974;
  iVar1 = (int)(DAT_00208948 / (ulong)(long)DAT_00208974);
  local_18 = param_2;
  if ((float)(int)param_1 == param_1) {
    local_1c = 0;
    local_28 = 0.00000000;
    while (local_1c < iVar1) {
      if (9223372036854775808.00000000 <= param_1) {
        local_38 = (int)(long)(param_1 - 9223372036854775808.00000000);
      }
      else {
        local_38 = (int)(long)param_1;
      }
      if (9223372036854775808.00000000 <= local_28) {
        local_40 = (long)(local_28 - 9223372036854775808.00000000) ^ 0x8000000000000000;
      }
      else {
        local_40 = (ulong)local_28;
      }
      uVar2 = FUN_001050ff(local_40,local_38);
      *local_18 = (char)uVar2;
      local_20 = 1;
      local_2c = local_28;
      while (1) {
        local_18 = local_18 + 1;
        local_2c = local_2c + fVar4;
        if (DAT_00208974 <= local_20) break;
        DAT_00208c40 = local_20;
        FUN_001056c7(local_2c,param_1,local_18);
        local_20 = local_20 + 1;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + (float)DAT_00208970;
    }
  }
  else {
    local_1c = 0;
    local_28 = 0.00000000;
    while (local_1c < iVar1) {
      local_2c = local_28;
      local_20 = 0;
      while (local_20 < DAT_00208974) {
        DAT_00208c40 = local_20;
        FUN_001056c7(local_2c,param_1,local_18);
        local_20 = local_20 + 1;
        local_2c = local_2c + fVar4;
        local_18 = local_18 + 1;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + (float)DAT_00208970;
    }
  }
  local_28 = (float)(DAT_00208970 * iVar1);
  iVar1 = iVar1 * DAT_00208974;
  iVar3 = (int)DAT_00208948;
  local_1c = 0;
  while (local_1c < iVar3 - iVar1) {
    DAT_00208c40 = local_1c;
    FUN_001056c7(local_28,param_1,local_18);
    local_1c = local_1c + 1;
    local_28 = local_28 + fVar4;
    local_18 = local_18 + 1;
  }
  return DAT_00208968;
}

undefined8 FUN_00103059(float param_1,undefined *param_2)
{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  ulong local_58;
  int local_50;
  float local_2c;
  float local_28;
  int local_20;
  int local_1c;
  undefined *local_18;
  
  fVar4 = (float)DAT_00208970 / (float)DAT_00208974;
  iVar2 = (int)(DAT_00208948 / (ulong)(long)DAT_00208974);
  local_18 = param_2;
  if ((float)(int)param_1 == param_1) {
    local_1c = 0;
    local_28 = 0.00000000;
    while (local_1c < iVar2) {
      if (9223372036854775808.00000000 <= param_1) {
        local_50 = (int)(long)(param_1 - 9223372036854775808.00000000);
      }
      else {
        local_50 = (int)(long)param_1;
      }
      if (9223372036854775808.00000000 <= local_28) {
        local_58 = (long)(local_28 - 9223372036854775808.00000000) ^ 0x8000000000000000;
      }
      else {
        local_58 = (ulong)local_28;
      }
      FUN_00105173(local_58,local_50,local_18,local_18 + 1,local_18 + 2);
      local_20 = 1;
      local_2c = local_28;
      puVar1 = local_18;
      while (1) {
        local_18 = puVar1 + 3;
        local_2c = local_2c + fVar4;
        if (DAT_00208974 <= local_20) break;
        DAT_00208c40 = local_20;
        FUN_00105771(local_2c,param_1,local_18,puVar1 + 4,puVar1 + 5);
        local_20 = local_20 + 1;
        puVar1 = local_18;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + (float)DAT_00208970;
    }
  }
  else {
    local_1c = 0;
    local_28 = 0.00000000;
    while (local_1c < iVar2) {
      local_2c = local_28;
      local_20 = 0;
      while (local_20 < DAT_00208974) {
        DAT_00208c40 = local_20;
        FUN_00105771(local_2c,param_1,local_18,local_18 + 1,local_18 + 2);
        local_20 = local_20 + 1;
        local_18 = local_18 + 3;
        local_2c = local_2c + fVar4;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + (float)DAT_00208970;
    }
  }
  local_28 = (float)(DAT_00208970 * iVar2);
  iVar2 = iVar2 * DAT_00208974;
  iVar3 = (int)DAT_00208948;
  local_1c = 0;
  while (local_1c < iVar3 - iVar2) {
    DAT_00208c40 = local_1c;
    FUN_00105771(local_28,param_1,local_18,local_18 + 1,local_18 + 2);
    local_1c = local_1c + 1;
    local_18 = local_18 + 3;
    local_28 = local_28 + fVar4;
  }
  return DAT_00208968;
}

undefined8 FUN_001033a4(float param_1,undefined *param_2)
{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  ulong local_58;
  int local_50;
  float local_2c;
  float local_28;
  int local_20;
  int local_1c;
  undefined *local_18;
  
  fVar4 = (float)DAT_00208970 / (float)DAT_00208974;
  iVar2 = (int)(DAT_00208948 / (ulong)(long)DAT_00208974);
  local_18 = param_2;
  if ((float)(int)param_1 == param_1) {
    local_1c = 0;
    local_28 = 0.00000000;
    while (local_1c < iVar2) {
      if (9223372036854775808.00000000 <= param_1) {
        local_50 = (int)(long)(param_1 - 9223372036854775808.00000000);
      }
      else {
        local_50 = (int)(long)param_1;
      }
      if (9223372036854775808.00000000 <= local_28) {
        local_58 = (long)(local_28 - 9223372036854775808.00000000) ^ 0x8000000000000000;
      }
      else {
        local_58 = (ulong)local_28;
      }
      FUN_00105173(local_58,local_50,local_18 + 2,local_18 + 1,local_18);
      local_20 = 1;
      local_2c = local_28;
      puVar1 = local_18;
      while (1) {
        local_18 = puVar1 + 3;
        local_2c = local_2c + fVar4;
        if (DAT_00208974 <= local_20) break;
        DAT_00208c40 = local_20;
        FUN_00105771(local_2c,param_1,puVar1 + 5,puVar1 + 4,local_18);
        local_20 = local_20 + 1;
        puVar1 = local_18;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + (float)DAT_00208970;
    }
  }
  else {
    local_1c = 0;
    local_28 = 0.00000000;
    while (local_1c < iVar2) {
      local_2c = local_28;
      local_20 = 0;
      while (local_20 < DAT_00208974) {
        DAT_00208c40 = local_20;
        FUN_00105771(local_2c,param_1,local_18 + 2,local_18 + 1,local_18);
        local_20 = local_20 + 1;
        local_18 = local_18 + 3;
        local_2c = local_2c + fVar4;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + (float)DAT_00208970;
    }
  }
  local_28 = (float)(DAT_00208970 * iVar2);
  iVar2 = iVar2 * DAT_00208974;
  iVar3 = (int)DAT_00208948;
  local_1c = 0;
  while (local_1c < iVar3 - iVar2) {
    DAT_00208c40 = local_1c;
    FUN_00105771(local_28,param_1,local_18 + 2,local_18 + 1,local_18);
    local_1c = local_1c + 1;
    local_18 = local_18 + 3;
    local_28 = local_28 + fVar4;
  }
  return DAT_00208968;
}

ulong FUN_001036ef(float param_1,undefined *param_2)
{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  ulong local_68;
  int local_60;
  float local_2c;
  float local_28;
  int local_20;
  int local_1c;
  undefined *local_18;
  
  fVar5 = (float)DAT_00208970 / (float)DAT_00208974;
  uVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_00208968) >> 0x40,0);
  uVar2 = uVar4 >> 1;
  uVar4 = uVar4 & 0xfffffffffffffffe;
  iVar1 = (int)(DAT_00208948 / (ulong)(long)DAT_00208974);
  local_18 = param_2;
  if ((float)(int)param_1 == param_1) {
    local_1c = 0;
    local_28 = 0.00000000;
    while (local_1c < iVar1) {
      if (9223372036854775808.00000000 <= param_1) {
        local_60 = (int)(long)(param_1 - 9223372036854775808.00000000);
      }
      else {
        local_60 = (int)(long)param_1;
      }
      if (9223372036854775808.00000000 <= local_28) {
        local_68 = (long)(local_28 - 9223372036854775808.00000000) ^ 0x8000000000000000;
      }
      else {
        local_68 = (ulong)local_28;
      }
      FUN_00105173(local_68,local_60,local_18,local_18 + uVar2,local_18 + uVar4);
      local_20 = 1;
      local_2c = local_28;
      while (1) {
        local_18 = local_18 + 1;
        local_2c = local_2c + fVar5;
        if (DAT_00208974 <= local_20) break;
        DAT_00208c40 = local_20;
        FUN_00105771(local_2c,param_1,local_18,local_18 + uVar2,local_18 + uVar4);
        local_20 = local_20 + 1;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + (float)DAT_00208970;
    }
  }
  else {
    local_1c = 0;
    local_28 = 0.00000000;
    while (local_1c < iVar1) {
      local_2c = local_28;
      local_20 = 0;
      while (local_20 < DAT_00208974) {
        DAT_00208c40 = local_20;
        FUN_00105771(local_2c,param_1,local_18,local_18 + uVar2,local_18 + uVar4);
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
        local_2c = local_2c + fVar5;
      }
      local_1c = local_1c + 1;
      local_28 = local_28 + (float)DAT_00208970;
    }
  }
  local_28 = (float)(DAT_00208970 * iVar1);
  iVar1 = iVar1 * DAT_00208974;
  iVar3 = (int)DAT_00208948;
  local_1c = 0;
  while (local_1c < iVar3 - iVar1) {
    DAT_00208c40 = local_1c;
    FUN_00105771(local_28,param_1,local_18,local_18 + uVar2,local_18 + uVar4);
    local_1c = local_1c + 1;
    local_18 = local_18 + 1;
    local_28 = local_28 + fVar5;
  }
  return DAT_00208968;
}

undefined8 FUN_00103a7b(float param_1,long param_2)
{
  byte local_39;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  ulong local_20;
  byte *local_18;
  float local_c;
  
  local_34 = (float)DAT_00208970 / (float)DAT_00208974;
  local_38 = (float)DAT_00208978 / (float)DAT_0020897c;
  local_24 = 0.00000000;
  local_2c = local_34 + 0.00000000;
  local_30 = param_1 + local_38;
  local_18 = (byte *)(param_2 + -1);
  local_20 = 0;
  local_28 = param_1;
  local_c = param_1;
  while (local_20 < DAT_00208948) {
    FUN_00105879(local_24,local_28,local_2c,local_30,&local_39);
    if ((local_20 & 7) == 0) {
      local_18 = local_18 + 1;
      *local_18 = 0;
    }
    if (4 < local_39) {
      *local_18 = (byte)(1 << (7 - ((byte)local_20 & 7) & 0x1f)) | *local_18;
    }
    local_20 = local_20 + 1;
    local_24 = local_24 + local_34;
    local_2c = local_2c + local_34;
  }
  return DAT_00208968;
}

undefined8 FUN_00103bca(float param_1,undefined *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_2c;
  float local_24;
  ulong local_20;
  undefined *local_18;
  
  fVar2 = (float)DAT_00208970 / (float)DAT_00208974;
  fVar3 = (float)DAT_00208978;
  fVar1 = (float)DAT_0020897c;
  local_24 = 0.00000000;
  local_2c = fVar2 + 0.00000000;
  local_20 = 0;
  local_18 = param_2;
  while (local_20 < DAT_00208948) {
    FUN_00105aa6(local_24,param_1,local_2c,param_1 + fVar3 / fVar1,local_18);
    local_20 = local_20 + 1;
    local_24 = local_24 + fVar2;
    local_2c = local_2c + fVar2;
    local_18 = local_18 + 1;
  }
  return DAT_00208968;
}

undefined8 FUN_00103ccf(float param_1,undefined *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_2c;
  float local_24;
  ulong local_20;
  undefined *local_18;
  
  fVar2 = (float)DAT_00208970 / (float)DAT_00208974;
  fVar3 = (float)DAT_00208978;
  fVar1 = (float)DAT_0020897c;
  local_24 = 0.00000000;
  local_2c = fVar2 + 0.00000000;
  local_20 = 0;
  local_18 = param_2;
  while (local_20 < DAT_00208948) {
    FUN_00105cd3(local_24,param_1,local_2c,param_1 + fVar3 / fVar1,local_18,local_18 + 1,
                 local_18 + 2);
    local_20 = local_20 + 1;
    local_24 = local_24 + fVar2;
    local_2c = local_2c + fVar2;
    local_18 = local_18 + 3;
  }
  return DAT_00208968;
}

undefined8 FUN_00103de8(float param_1,undefined *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_2c;
  float local_24;
  ulong local_20;
  undefined *local_18;
  
  fVar2 = (float)DAT_00208970 / (float)DAT_00208974;
  fVar3 = (float)DAT_00208978;
  fVar1 = (float)DAT_0020897c;
  local_24 = 0.00000000;
  local_2c = fVar2 + 0.00000000;
  local_20 = 0;
  local_18 = param_2;
  while (local_20 < DAT_00208948) {
    FUN_00105cd3(local_24,param_1,local_2c,param_1 + fVar3 / fVar1,local_18 + 2,local_18 + 1,
                 local_18);
    local_20 = local_20 + 1;
    local_24 = local_24 + fVar2;
    local_2c = local_2c + fVar2;
    local_18 = local_18 + 3;
  }
  return DAT_00208968;
}

ulong FUN_00103f01(float param_1,undefined *param_2)
{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_2c;
  float local_24;
  ulong local_20;
  undefined *local_18;
  
  fVar3 = (float)DAT_00208970 / (float)DAT_00208974;
  fVar4 = (float)DAT_00208978;
  fVar2 = (float)DAT_0020897c;
  uVar1 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_00208968) >> 0x40,0);
  local_24 = 0.00000000;
  local_2c = fVar3 + 0.00000000;
  local_20 = 0;
  local_18 = param_2;
  while (local_20 < DAT_00208948) {
    FUN_00105cd3(local_24,param_1,local_2c,param_1 + fVar4 / fVar2,local_18,local_18 + (uVar1 >> 1),
                 local_18 + (uVar1 & 0xfffffffffffffffe));
    local_20 = local_20 + 1;
    local_24 = local_24 + fVar3;
    local_2c = local_2c + fVar3;
    local_18 = local_18 + 1;
  }
  return DAT_00208968;
}

ulong FUN_0010404d(byte *param_1,ulong param_2,byte *param_3)
{
  ulong local_28;
  byte *local_20;
  byte *local_10;
  
  local_28 = 0;
  local_20 = param_3;
  local_10 = param_1;
  while ((local_28 < param_2 >> 1 && (local_28 < DAT_00208968))) {
    *local_20 = (&DAT_002082a0)[local_10[1]] | (&DAT_002082a0)[*local_10] << 4;
    local_20 = local_20 + 1;
    local_28 = local_28 + 1;
    local_10 = local_10 + 2;
  }
  return local_28;
}

ulong FUN_001040d6(byte *param_1,long param_2,undefined2 *param_3)
{
  undefined2 *local_30;
  ulong local_28;
  byte *local_10;
  
  local_28 = 0;
  local_30 = param_3;
  local_10 = param_1;
  while ((local_28 < (ulong)(param_2 * 2) && (local_28 < DAT_00208968))) {
    *local_30 = *(undefined2 *)(&DAT_002083a0 + (ulong)*local_10 * 2);
    local_30 = local_30 + 1;
    local_28 = local_28 + 2;
    local_10 = local_10 + 1;
  }
  return DAT_00208968;
}

ulong FUN_00104153(byte *param_1,undefined8 param_2,undefined *param_3)
{
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  undefined *local_20;
  byte *local_10;
  
  local_28 = 0;
  local_20 = param_3;
  local_10 = param_1;
  while (local_28 < SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_00208968) >> 0x41,0)) {
    *local_20 = (&DAT_002087a0)[*local_10];
    local_20[1] = (&DAT_002086a0)[*local_10];
    local_20[2] = (&DAT_002085a0)[*local_10];
    local_20 = local_20 + 3;
    local_28 = local_28 + 1;
    local_10 = local_10 + 1;
  }
  uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_00208968) >> 0x40,0);
  uVar3 = (uVar3 & 0xfffffffffffffffe) + (uVar3 >> 1);
  uVar2 = DAT_00208968 - uVar3;
  if (DAT_00208968 != uVar3) {
    *local_20 = (&DAT_002087a0)[*local_10];
    if (1 < uVar2) {
      local_20[1] = (&DAT_002086a0)[*local_10];
    }
  }
  return DAT_00208968;
}

ulong FUN_00104296(byte *param_1,long param_2,undefined2 *param_3)
{
  undefined2 uVar1;
  undefined2 *local_30;
  ulong local_28;
  byte *local_10;
  
  local_28 = 0;
  local_30 = param_3;
  local_10 = param_1;
  while ((local_28 < (ulong)(param_2 << 2) && (local_28 < DAT_00208968))) {
    uVar1 = *(undefined2 *)(&DAT_002083a0 + (ulong)*local_10 * 2);
    *local_30 = *(undefined2 *)(&DAT_002083a0 + (ulong)(byte)uVar1 * 2);
    local_30[1] = *(undefined2 *)(&DAT_002083a0 + (ulong)(byte)((ushort)uVar1 >> 8) * 2);
    local_30 = local_30 + 2;
    local_28 = local_28 + 4;
    local_10 = local_10 + 1;
  }
  return DAT_00208968;
}

ulong FUN_00104365(void *param_1,undefined8 param_2,void *param_3)
{
  memcpy(param_3,param_1,DAT_00208968);
  return DAT_00208968 & 0xffff;
}

ulong FUN_00104399(undefined *param_1,ulong param_2,undefined *param_3,int param_4)
{
  ulong local_30;
  undefined *local_20;
  undefined *local_10;
  
  local_30 = 0;
  local_20 = param_3;
  local_10 = param_1;
  while ((local_30 < param_2 / (ulong)(long)param_4 && (local_30 < DAT_00208968))) {
    *local_20 = *local_10;
    local_20 = local_20 + 1;
    local_30 = local_30 + 1;
    local_10 = local_10 + param_4;
  }
  return DAT_00208968;
}

ulong FUN_00104412(byte *param_1,undefined8 param_2,void *param_3,int param_4)
{
  ulong uVar1;
  ulong local_30;
  void *local_20;
  byte *local_10;
  
  uVar1 = DAT_00208968 / (ulong)(long)param_4;
  local_30 = 0;
  local_20 = param_3;
  local_10 = param_1;
  while (local_30 < uVar1) {
    memset(local_20,(uint)*local_10,(long)param_4);
    local_30 = local_30 + 1;
    local_10 = local_10 + 1;
    local_20 = (void *)((long)local_20 + (long)param_4);
  }
  if (DAT_00208968 % (long)param_4 != 0) {
    memset(local_20,(uint)*local_10,DAT_00208968 % (long)param_4);
  }
  return DAT_00208968;
}

ulong FUN_00105413(float param_1)
{
  float local_14;
  float local_10;
  
  local_10 = param_1;
  if (param_1 < 0.00000000) {
    local_10 = (float)((uint)param_1 ^ 0x80000000);
  }
  if ((local_10 < 0.00000000) || (1.00000000 <= local_10)) {
    if ((local_10 < 1.00000000) || (2.00000000 <= local_10)) {
      local_14 = 0.00000000;
    }
    else {
      local_14 = ((4.00000000 - local_10 * 8.00000000) + local_10 * 5.00000000 * local_10) -
                 local_10 * local_10 * local_10;
    }
  }
  else {
    local_14 = local_10 * local_10 * local_10 + (1.00000000 - (local_10 + local_10) * local_10);
  }
  return (ulong)(uint)local_14;
}

long FUN_0010222c(int param_1,long param_2,int param_3)
{
  long local_28;
  
  if (param_1 == 0) {
    local_28 = param_3 * DAT_00208968;
  }
  else {
    local_28 = -((param_3 + 1) * DAT_00208968);
  }
  local_28 = param_2 + local_28;
  return local_28;
}

ulong FUN_001044ca(void *param_1)
{
  int iVar1;
  short sVar2;
  ulong uVar3;
  ulong local_28;
  ulong local_20;
  int local_18;
  
  iVar1 = DAT_002088dc;
  DAT_002088dc = DAT_002088dc + 1;
  if (param_1 == (void *)0x0) {
    local_18 = iVar1 + -1;
    if (local_18 < 0) {
      local_18 = DAT_002088d8 + -1;
    }
    memcpy(*(void **)(&DAT_002088e8 + (long)iVar1 * 8),
           *(void **)(&DAT_002088e8 + (long)local_18 * 8),DAT_002088d0);
  }
  else {
    local_20 = 0;
    while (local_20 < DAT_00208960) {
      local_28 = 0;
      while (local_28 < 8) {
        if (((int)(uint)*(byte *)(local_20 + (long)param_1) >> (7U - (char)local_28 & 0x1f) & 1U) ==
            0) {
          *(undefined *)(local_20 * 8 + *(long *)(&DAT_002088e8 + (long)iVar1 * 8) + local_28) = 0;
        }
        else {
          *(undefined *)(local_20 * 8 + *(long *)(&DAT_002088e8 + (long)iVar1 * 8) + local_28) = 10;
        }
        local_28 = local_28 + 1;
      }
      local_20 = local_20 + 1;
    }
  }
  sVar2 = DAT_00208988;
  DAT_00208988 = DAT_00208988 + 1;
  if (sVar2 == 0) {
    memcpy(*(void **)(&DAT_002088e0 + (long)DAT_002088d8 * 8),param_1,DAT_002088d0);
  }
  uVar3 = (ulong)DAT_002088dc;
  if (DAT_002088d8 <= (int)DAT_002088dc) {
    DAT_002088dc = 0;
  }
  return uVar3;
}

ulong FUN_00104654(void *param_1)
{
  int iVar1;
  short sVar2;
  ulong uVar3;
  int local_18;
  
  iVar1 = DAT_002088dc;
  DAT_002088dc = DAT_002088dc + 1;
  if (param_1 == (void *)0x0) {
    local_18 = iVar1 + -1;
    if (local_18 < 0) {
      local_18 = DAT_002088d8 + -1;
    }
    memcpy(*(void **)(&DAT_002088e8 + (long)iVar1 * 8),
           *(void **)(&DAT_002088e8 + (long)local_18 * 8),DAT_002088d0);
  }
  else {
    memcpy(*(void **)(&DAT_002088e8 + (long)iVar1 * 8),param_1,DAT_002088d0);
  }
  sVar2 = DAT_00208988;
  DAT_00208988 = DAT_00208988 + 1;
  if (sVar2 == 0) {
    memcpy(*(void **)(&DAT_002088e0 + (long)DAT_002088d8 * 8),param_1,DAT_002088d0);
  }
  uVar3 = (ulong)DAT_002088dc;
  if (DAT_002088d8 <= (int)DAT_002088dc) {
    DAT_002088dc = 0;
  }
  return uVar3;
}

ulong FUN_00104a67(void *param_1,int param_2,void *param_3)
{
  BOOL bVar1;
  ulong uVar2;
  ulong local_28;
  
  uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_00208960) >> 0x41,0);
  if (param_2 == 3) {
    _DAT_002088e0 = _DAT_002088e0 + 1;
    local_28 = 0;
    while (local_28 < uVar2) {
      *(undefined *)((long)param_3 + local_28 * 3 + 1) = *(undefined *)(local_28 + (long)param_1);
      local_28 = local_28 + 1;
    }
    goto LAB_00104c78;
  }
  if (param_2 < 4) {
    if (param_2 == 2) {
      _DAT_002088e0 = _DAT_002088e0 + 1;
      local_28 = 0;
      while (local_28 < uVar2) {
        *(undefined *)(local_28 * 3 + (long)param_3) = *(undefined *)(local_28 + (long)param_1);
        local_28 = local_28 + 1;
      }
      goto LAB_00104c78;
    }
  }
  else {
    if (param_2 == 4) {
      _DAT_002088e0 = _DAT_002088e0 + 1;
      local_28 = 0;
      while (local_28 < uVar2) {
        *(undefined *)((long)param_3 + local_28 * 3 + 2) = *(undefined *)(local_28 + (long)param_1);
        local_28 = local_28 + 1;
      }
      goto LAB_00104c78;
    }
    if (param_2 == 5) {
      _DAT_002088e0 = _DAT_002088e0 + 3;
      memcpy(param_3,param_1,DAT_00208960);
      goto LAB_00104c78;
    }
  }
  _DAT_002088e0 = _DAT_002088e0 + 3;
  local_28 = 0;
  while (local_28 < uVar2) {
    *(undefined *)(local_28 * 3 + (long)param_3) = *(undefined *)((long)param_1 + local_28 * 3 + 2);
    *(undefined *)((long)param_3 + local_28 * 3 + 1) =
         *(undefined *)((long)param_1 + local_28 * 3 + 1);
    *(undefined *)((long)param_3 + local_28 * 3 + 2) = *(undefined *)(local_28 * 3 + (long)param_1);
    local_28 = local_28 + 1;
  }
LAB_00104c78:
  bVar1 = 2 < _DAT_002088e0;
  if (bVar1) {
    _DAT_002088e0 = 0;
    DAT_00208988 = DAT_00208988 + 1;
  }
  return (ulong)bVar1;
}

ulong FUN_00104c9e(void *param_1,int param_2,void *param_3)
{
  BOOL bVar1;
  ulong uVar2;
  ulong local_28;
  
  uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_00208960) >> 0x41,0);
  if (param_2 == 3) {
    _DAT_002088e0 = _DAT_002088e0 + 1;
    local_28 = 0;
    while (local_28 < uVar2) {
      *(undefined *)((long)param_3 + local_28 * 3 + 1) = *(undefined *)(local_28 + (long)param_1);
      local_28 = local_28 + 1;
    }
    goto LAB_00104eaa;
  }
  if (param_2 < 4) {
    if (param_2 == 2) {
      _DAT_002088e0 = _DAT_002088e0 + 1;
      local_28 = 0;
      while (local_28 < uVar2) {
        *(undefined *)((long)param_3 + local_28 * 3 + 2) = *(undefined *)(local_28 + (long)param_1);
        local_28 = local_28 + 1;
      }
      goto LAB_00104eaa;
    }
  }
  else {
    if (param_2 == 4) {
      _DAT_002088e0 = _DAT_002088e0 + 1;
      local_28 = 0;
      while (local_28 < uVar2) {
        *(undefined *)(local_28 * 3 + (long)param_3) = *(undefined *)(local_28 + (long)param_1);
        local_28 = local_28 + 1;
      }
      goto LAB_00104eaa;
    }
    if (param_2 == 5) {
      _DAT_002088e0 = _DAT_002088e0 + 3;
      local_28 = 0;
      while (local_28 < uVar2) {
        *(undefined *)(local_28 * 3 + (long)param_3) =
             *(undefined *)((long)param_1 + local_28 * 3 + 2);
        *(undefined *)((long)param_3 + local_28 * 3 + 1) =
             *(undefined *)((long)param_1 + local_28 * 3 + 1);
        *(undefined *)((long)param_3 + local_28 * 3 + 2) =
             *(undefined *)(local_28 * 3 + (long)param_1);
        local_28 = local_28 + 1;
      }
      goto LAB_00104eaa;
    }
  }
  _DAT_002088e0 = _DAT_002088e0 + 3;
  memcpy(param_3,param_1,DAT_00208960);
LAB_00104eaa:
  bVar1 = 2 < _DAT_002088e0;
  if (bVar1) {
    _DAT_002088e0 = 0;
    DAT_00208988 = DAT_00208988 + 1;
  }
  return (ulong)bVar1;
}

ulong FUN_00104ed0(void *param_1,int param_2,void *param_3)
{
  BOOL bVar1;
  ulong __n;
  ulong uVar2;
  ulong local_28;
  
  uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_00208960) >> 0x40,0);
  __n = uVar2 >> 1;
  if (param_2 == 3) {
    _DAT_002088e0 = _DAT_002088e0 + 1;
    memcpy((void *)((long)param_3 + __n),param_1,__n);
    goto LAB_001050d9;
  }
  if (param_2 < 4) {
    if (param_2 == 2) {
      _DAT_002088e0 = _DAT_002088e0 + 1;
      memcpy(param_3,param_1,__n);
      goto LAB_001050d9;
    }
  }
  else {
    if (param_2 == 4) {
      _DAT_002088e0 = _DAT_002088e0 + 1;
      memcpy((void *)((uVar2 & 0xfffffffffffffffe) + (long)param_3),param_1,__n);
      goto LAB_001050d9;
    }
    if (param_2 == 5) {
      _DAT_002088e0 = _DAT_002088e0 + 3;
      local_28 = 0;
      while (local_28 < __n) {
        *(undefined *)((long)param_3 + local_28) = *(undefined *)(local_28 * 3 + (long)param_1);
        *(undefined *)((long)param_3 + local_28 + __n) =
             *(undefined *)((long)param_1 + local_28 * 3 + 1);
        *(undefined *)((long)param_3 + local_28 + (uVar2 & 0xfffffffffffffffe)) =
             *(undefined *)((long)param_1 + local_28 * 3 + 2);
        local_28 = local_28 + 1;
      }
      goto LAB_001050d9;
    }
  }
  _DAT_002088e0 = _DAT_002088e0 + 3;
  local_28 = 0;
  while (local_28 < __n) {
    *(undefined *)((long)param_3 + local_28) = *(undefined *)((long)param_1 + local_28 * 3 + 2);
    *(undefined *)((long)param_3 + local_28 + __n) =
         *(undefined *)((long)param_1 + local_28 * 3 + 1);
    *(undefined *)((long)param_3 + local_28 + (uVar2 & 0xfffffffffffffffe)) =
         *(undefined *)(local_28 * 3 + (long)param_1);
    local_28 = local_28 + 1;
  }
LAB_001050d9:
  bVar1 = 2 < _DAT_002088e0;
  if (bVar1) {
    _DAT_002088e0 = 0;
    DAT_00208988 = DAT_00208988 + 1;
  }
  return (ulong)bVar1;
}

ulong FUN_001050ff(ulong param_1,int param_2)
{
  int local_1c;
  ulong local_10;
  
  local_10 = param_1;
  if (DAT_002088d0 <= param_1) {
    local_10 = DAT_002088d0 - 1;
  }
  local_1c = param_2 + DAT_002088dc;
  if (DAT_002088d8 <= local_1c) {
    local_1c = local_1c - DAT_002088d8;
  }
  return (ulong)*(byte *)(local_10 + *(long *)(&DAT_002088e8 + (long)local_1c * 8));
}

void FUN_00105173(ulong param_1,int param_2,undefined *param_3,undefined *param_4,undefined *param_5)
{
  long lVar1;
  int local_34;
  ulong local_10;
  
  local_10 = param_1;
  if (SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_002088d0) >> 0x41,0) <= param_1) {
    local_10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_002088d0) >> 0x41,0) - 1;
  }
  local_34 = param_2 + DAT_002088dc;
  if (DAT_002088d8 <= local_34) {
    local_34 = local_34 - DAT_002088d8;
  }
  lVar1 = *(long *)(&DAT_002088e8 + (long)local_34 * 8);
  *param_3 = *(undefined *)(local_10 + lVar1);
  *param_4 = *(undefined *)
              (SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_002088d0) >> 0x41,0) + lVar1 +
              local_10);
  *param_5 = *(undefined *)
              (SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_002088d0 * 2) >> 0x41,0) + lVar1 +
              local_10);
  return;
}

void FUN_0010561d(float param_1,float param_2,undefined *param_3)
{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float local_88 [19];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined *local_28;
  float local_20;
  float local_1c;
  
  local_2c = (int)param_1;
  local_30 = (int)param_2;
  local_38 = 0;
  local_34 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_1c = param_1;
  while (puVar1 = local_28, local_38 < 4) {
    local_3c = 0;
    while (local_3c < 4) {
      lVar3 = (long)local_34;
      uVar2 = FUN_001050ff((long)(local_38 + local_2c + -1),local_3c);
      local_88[lVar3] = (float)(int)(short)((ushort)uVar2 & 0xff);
      local_34 = local_34 + 1;
      local_3c = local_3c + 1;
    }
    local_38 = local_38 + 1;
  }
  uVar2 = FUN_0010553d((long)local_88);
  *puVar1 = (char)uVar2;
  return;
}

void FUN_001056c7(float param_1,float param_2,undefined *param_3)
{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float local_88 [19];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined *local_28;
  float local_20;
  float local_1c;
  
  local_2c = (int)param_1;
  local_30 = (int)param_2;
  local_38 = 0;
  local_34 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_1c = param_1;
  while (puVar1 = local_28, local_38 < 4) {
    local_3c = 0;
    while (local_3c < 4) {
      lVar3 = (long)local_34;
      uVar2 = FUN_001050ff((long)(local_38 + local_2c + -1),local_3c);
      local_88[lVar3] = (float)(int)(short)((ushort)uVar2 & 0xff);
      local_34 = local_34 + 1;
      local_3c = local_3c + 1;
    }
    local_38 = local_38 + 1;
  }
  uVar2 = FUN_0010553d((long)local_88);
  *puVar1 = (char)uVar2;
  return;
}

void FUN_00105771(float param_1,float param_2,undefined *param_3,undefined *param_4,
                 undefined *param_5)
{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  float local_118 [16];
  float local_d8 [16];
  float local_98 [19];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  float local_20;
  float local_1c;
  
  local_3c = (int)param_1;
  local_40 = (int)param_2;
  local_48 = 0;
  local_44 = 0;
  local_38 = param_5;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_1c = param_1;
  while (puVar1 = local_28, local_48 < 4) {
    local_4c = 0;
    while (local_4c < 4) {
      FUN_00105279((long)(local_48 + local_3c + -1),local_4c,local_98 + local_44,local_d8 + local_44
                   ,local_118 + local_44);
      local_44 = local_44 + 1;
      local_4c = local_4c + 1;
    }
    local_48 = local_48 + 1;
  }
  uVar3 = FUN_0010553d((long)local_98);
  puVar2 = local_30;
  *puVar1 = (char)uVar3;
  uVar3 = FUN_0010553d((long)local_d8);
  puVar1 = local_38;
  *puVar2 = (char)uVar3;
  uVar3 = FUN_0010553d((long)local_118);
  *puVar1 = (char)uVar3;
  return;
}

ulong FUN_00105879(float param_1,float param_2,float param_3,float param_4,undefined *param_5)
{
  ulong uVar1;
  float fVar2;
  float fVar3;
  int64_t auVar4;
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_38 = (int)param_2;
  local_2c = (int)param_3;
  local_30 = (int)param_4;
  if ((float)local_2c != param_3) {
    local_2c = local_2c + 1;
  }
  if ((float)local_30 != param_4) {
    local_30 = local_30 + 1;
  }
  local_50 = 0.00000000;
  local_4c = 0.00000000;
  while (local_38 < local_30) {
    local_3c = param_2;
    if (param_2 <= (float)local_38) {
      local_3c = (float)local_38;
    }
    local_40 = param_4;
    if ((float)(local_38 + 1) <= param_4) {
      local_40 = (float)(local_38 + 1);
    }
    fVar2 = local_40 - local_3c;
    local_34 = (int)param_1;
    while (local_34 < local_2c) {
      uVar1 = FUN_001050ff((long)local_34,local_38);
      local_3c = param_1;
      if (param_1 <= (float)local_34) {
        local_3c = (float)local_34;
      }
      local_40 = param_3;
      if ((float)(local_34 + 1) <= param_3) {
        local_40 = (float)(local_34 + 1);
      }
      fVar3 = (local_40 - local_3c) * fVar2;
      local_50 = local_50 + fVar3;
      local_4c = local_4c + (float)(int)(short)(ushort)(byte)uVar1 * fVar3;
      local_34 = local_34 + 1;
    }
    local_38 = local_38 + 1;
  }
  if (local_50 != 0.00000000) {
    auVar4 = movlpd(ZEXT416((uint)(local_4c / local_50)),0x3fe0000000000000);
    *param_5 = (char)(int)(SUB168(auVar4,0) + (double)(local_4c / local_50));
  }
  return (ulong)(local_50 != 0.00000000);
}

ulong FUN_00105aa6(float param_1,float param_2,float param_3,float param_4,undefined *param_5)
{
  ulong uVar1;
  float fVar2;
  float fVar3;
  int64_t auVar4;
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_38 = (int)param_2;
  local_2c = (int)param_3;
  local_30 = (int)param_4;
  if ((float)local_2c != param_3) {
    local_2c = local_2c + 1;
  }
  if ((float)local_30 != param_4) {
    local_30 = local_30 + 1;
  }
  local_50 = 0.00000000;
  local_4c = 0.00000000;
  while (local_38 < local_30) {
    local_3c = param_2;
    if (param_2 <= (float)local_38) {
      local_3c = (float)local_38;
    }
    local_40 = param_4;
    if ((float)(local_38 + 1) <= param_4) {
      local_40 = (float)(local_38 + 1);
    }
    fVar2 = local_40 - local_3c;
    local_34 = (int)param_1;
    while (local_34 < local_2c) {
      uVar1 = FUN_001050ff((long)local_34,local_38);
      local_3c = param_1;
      if (param_1 <= (float)local_34) {
        local_3c = (float)local_34;
      }
      local_40 = param_3;
      if ((float)(local_34 + 1) <= param_3) {
        local_40 = (float)(local_34 + 1);
      }
      fVar3 = (local_40 - local_3c) * fVar2;
      local_50 = local_50 + fVar3;
      local_4c = local_4c + (float)(int)(short)(ushort)(byte)uVar1 * fVar3;
      local_34 = local_34 + 1;
    }
    local_38 = local_38 + 1;
  }
  if (local_50 != 0.00000000) {
    auVar4 = movlpd(ZEXT416((uint)(local_4c / local_50)),0x3fe0000000000000);
    *param_5 = (char)(int)(SUB168(auVar4,0) + (double)(local_4c / local_50));
  }
  return (ulong)(local_50 != 0.00000000);
}

ulong FUN_00105cd3(float param_1,float param_2,float param_3,float param_4,undefined *param_5,
                  undefined *param_6,undefined *param_7)
{
  double dVar1;
  int64_t auVar2;
  byte local_6f;
  byte local_6e;
  byte local_6d;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_34 = (int)param_1;
  local_48 = (int)param_2;
  local_3c = (int)param_3;
  local_40 = (int)param_4;
  if ((float)local_3c != param_3) {
    local_3c = local_3c + 1;
  }
  if ((float)local_40 != param_4) {
    local_40 = local_40 + 1;
  }
  local_68 = 0.00000000;
  local_64 = 0.00000000;
  local_60 = 0.00000000;
  local_5c = 0.00000000;
  local_38 = local_48;
  local_30 = param_7;
  local_28 = param_6;
  local_20 = param_5;
  local_18 = param_4;
  local_14 = param_3;
  local_10 = param_2;
  local_c = param_1;
  while (local_48 < local_40) {
    local_4c = (float)local_48;
    local_50 = (float)(local_48 + 1);
    if (local_4c < local_10) {
      local_4c = local_10;
    }
    if (local_18 < local_50) {
      local_50 = local_18;
    }
    local_54 = local_50 - local_4c;
    local_44 = local_34;
    while (local_44 < local_3c) {
      FUN_00105173((long)local_44,local_48,&local_6d,&local_6e,&local_6f);
      local_4c = (float)local_44;
      local_50 = (float)(local_44 + 1);
      if (local_4c < local_c) {
        local_4c = local_c;
      }
      if (local_14 < local_50) {
        local_50 = local_14;
      }
      local_58 = local_50 - local_4c;
      local_6c = local_58 * local_54;
      local_68 = local_68 + local_6c;
      local_5c = local_5c + (float)(int)(short)(ushort)local_6d * local_6c;
      local_60 = local_60 + (float)(int)(short)(ushort)local_6e * local_6c;
      local_64 = local_64 + (float)(int)(short)(ushort)local_6f * local_6c;
      local_44 = local_44 + 1;
    }
    local_48 = local_48 + 1;
  }
  if (local_68 != 0.00000000) {
    auVar2 = movlpd(ZEXT416((uint)(local_64 / local_68)),0x3fe0000000000000);
    dVar1 = SUB168(auVar2,0) + (double)(local_5c / local_68);
    *local_20 = (char)(int)dVar1;
    auVar2 = movlpd(CONCAT88(SUB168(auVar2 >> 0x40,0),dVar1),0x3fe0000000000000);
    dVar1 = SUB168(auVar2,0) + (double)(local_60 / local_68);
    *local_28 = (char)(int)dVar1;
    auVar2 = movlpd(CONCAT88(SUB168(auVar2 >> 0x40,0),dVar1),0x3fe0000000000000);
    *local_30 = (char)(int)(SUB168(auVar2,0) + (double)(local_64 / local_68));
  }
  return (ulong)(local_68 != 0.00000000);
}

ulong FUN_00104754(void *param_1,int param_2)
{
  short sVar1;
  ulong __n;
  ulong uVar2;
  uint local_34;
  int local_30;
  void *local_28;
  ulong local_20;
  
  local_34 = 0;
  uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_002088d0) >> 0x40,0);
  __n = uVar2 >> 1;
  if (param_1 == (void *)0x0) {
    local_30 = DAT_002088dc + -1;
    if (local_30 < 0) {
      local_30 = DAT_002088d8 + -1;
    }
    memmove(*(void **)(&DAT_002088e8 + (long)DAT_002088dc * 8),
            *(void **)(&DAT_002088e8 + (long)local_30 * 8),DAT_002088d0);
    _DAT_002088e0 = _DAT_002088e0 + 3;
  }
  else {
    local_28 = *(void **)(&DAT_002088e8 + (long)DAT_002088dc * 8);
    if (param_2 == 3) {
      _DAT_002088e0 = _DAT_002088e0 + 1;
      memmove((void *)((long)local_28 + __n),param_1,__n);
    }
    else {
      if (param_2 < 4) {
        if (param_2 == 2) {
          _DAT_002088e0 = _DAT_002088e0 + 1;
          memmove(local_28,param_1,__n);
          goto LAB_001049eb;
        }
      }
      else {
        if (param_2 == 4) {
          _DAT_002088e0 = _DAT_002088e0 + 1;
          memmove((void *)((uVar2 & 0xfffffffffffffffe) + (long)local_28),param_1,__n);
          goto LAB_001049eb;
        }
        if (param_2 == 5) {
          _DAT_002088e0 = _DAT_002088e0 + 3;
          local_20 = 0;
          while (local_20 < __n) {
            *(undefined *)((long)local_28 + local_20) = *(undefined *)(local_20 * 3 + (long)param_1)
            ;
            *(undefined *)((long)local_28 + local_20 + __n) =
                 *(undefined *)((long)param_1 + local_20 * 3 + 1);
            *(undefined *)((long)local_28 + local_20 + (uVar2 & 0xfffffffffffffffe)) =
                 *(undefined *)((long)param_1 + local_20 * 3 + 2);
            local_20 = local_20 + 1;
          }
          goto LAB_001049eb;
        }
      }
      _DAT_002088e0 = _DAT_002088e0 + 3;
      local_20 = 0;
      while (local_20 < __n) {
        *(undefined *)((long)local_28 + local_20) = *(undefined *)((long)param_1 + local_20 * 3 + 2)
        ;
        *(undefined *)((long)local_28 + local_20 + __n) =
             *(undefined *)((long)param_1 + local_20 * 3 + 1);
        *(undefined *)((long)local_28 + local_20 + (uVar2 & 0xfffffffffffffffe)) =
             *(undefined *)(local_20 * 3 + (long)param_1);
        local_20 = local_20 + 1;
      }
    }
  }
LAB_001049eb:
  sVar1 = DAT_00208988;
  if (2 < _DAT_002088e0) {
    _DAT_002088e0 = 0;
    DAT_002088dc = DAT_002088dc + 1;
    DAT_00208988 = DAT_00208988 + 1;
    if (DAT_002088d8 <= DAT_002088dc) {
      DAT_002088dc = 0;
    }
    if (sVar1 == 0) {
      memmove(*(void **)(&DAT_002088e0 + (long)DAT_002088d8 * 8),local_28,DAT_002088d0);
    }
    local_34 = 1;
  }
  return (ulong)local_34;
}

void FUN_00105279(ulong param_1,int param_2,float *param_3,float *param_4,float *param_5)
{
  long lVar1;
  int local_34;
  ulong local_10;
  
  local_10 = param_1;
  if (SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_002088d0) >> 0x41,0) <= param_1) {
    local_10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_002088d0) >> 0x41,0) - 1;
  }
  local_34 = param_2 + DAT_002088dc;
  if (DAT_002088d8 <= local_34) {
    local_34 = local_34 - DAT_002088d8;
  }
  lVar1 = *(long *)(&DAT_002088e8 + (long)local_34 * 8);
  *param_3 = (float)(int)(short)(ushort)*(byte *)(local_10 + lVar1);
  *param_4 = (float)(int)(short)(ushort)*(byte *)(SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) *
                                                         ZEXT816(DAT_002088d0) >> 0x41,0) + lVar1 +
                                                 local_10);
  *param_5 = (float)(int)(short)(ushort)*(byte *)(SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) *
                                                         ZEXT816(DAT_002088d0 * 2) >> 0x41,0) +
                                                  lVar1 + local_10);
  return;
}

ulong FUN_0010553d(long param_1)
{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  uint local_4c;
  undefined4 local_38 [5];
  int local_24;
  long local_20;
  
  lVar1 = (long)DAT_00208c40;
  lVar2 = (long)DAT_00208ee0;
  local_24 = 0;
  local_20 = param_1;
  while (local_24 < 4) {
    lVar3 = (long)local_24;
    FUN_001053a0((long)(&DAT_00208c64 + lVar2 * 0x14),(long)local_24 * 0x10 + local_20);
    local_38[lVar3] = extraout_XMM0_Da;
    local_24 = local_24 + 1;
  }
  FUN_001053a0((long)local_38,(long)(&DAT_002089c4 + lVar1 * 0x14));
  local_4c = (uint)extraout_XMM0_Da_00;
  if ((int)local_4c < 0) {
    local_4c = 0;
  }
  else {
    if (0xff < (int)local_4c) {
      local_4c = 0xff;
    }
  }
  return (ulong)local_4c;
}

ulong FUN_001053a0(long param_1,long param_2)
{
  float local_20;
  int local_1c;
  
  local_20 = 0.00000000;
  local_1c = 0;
  while (local_1c < 4) {
    local_20 = local_20 +
               *(float *)((long)local_1c * 4 + param_1) * *(float *)((long)local_1c * 4 + param_2);
    local_1c = local_1c + 1;
  }
  return (ulong)(uint)local_20;
}

ulong ChangeResoInit(undefined8 *param_1)
{
  ulong uVar1;
  uint local_24;
  long local_20;
  int local_14;
  undefined8 *local_10;
  
  DAT_002088c0 = (undefined8 *)0x0;
  _DAT_002088c8 = 0;
  DAT_002088d8 = 0;
  local_10 = param_1;
  FUN_001020b0(*(int *)param_1,*(int *)(param_1 + 1),&DAT_00208970,&DAT_00208974);
  FUN_001020b0(*(int *)((long)local_10 + 4),*(int *)((long)local_10 + 0xc),&DAT_00208978,
               &DAT_0020897c);
  FUN_00102149(DAT_00208970,DAT_00208974,&DAT_00208980);
  FUN_00102149(DAT_00208978,DAT_0020897c,(undefined4 *)&DAT_00208984);
  if (*(int *)((long)local_10 + 0x24) == 0) {
    if ((*(uint *)(local_10 + 2) >> 10 & 1) == 0) {
      if ((*(uint *)(local_10 + 2) >> 9 & 1) == 0) {
        DAT_00208960 = local_10[3] + 7 >> 3;
        DAT_00208968 = ((long)DAT_00208974 * DAT_00208960) / (ulong)(long)DAT_00208970;
        local_10[6] = DAT_00208968;
        local_10[5] = DAT_00208968 << 3;
      }
      else {
        DAT_00208960 = local_10[3];
        DAT_00208968 = ((long)DAT_00208974 * DAT_00208960) / (ulong)(long)DAT_00208970;
        local_10[6] = DAT_00208968;
        local_10[5] = DAT_00208968;
      }
    }
    else {
      DAT_00208960 = local_10[3] * 3;
      DAT_00208968 = ((long)DAT_00208974 * DAT_00208960) / (ulong)(long)DAT_00208970;
      local_10[6] = DAT_00208968;
      local_10[5] = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_00208968) >> 0x41,0);
    }
  }
  else {
    if ((*(uint *)(local_10 + 2) >> 10 & 1) == 0) {
      if ((*(uint *)(local_10 + 2) >> 9 & 1) == 0) {
        DAT_00208968 = ((local_10[3] + 7 >> 3) * (long)DAT_00208974) / (ulong)(long)DAT_00208970 &
                       0xfffffffffffffffc;
        DAT_00208960 = ((long)DAT_00208970 * DAT_00208968) / (ulong)(long)DAT_00208974;
        local_10[6] = DAT_00208968;
        local_10[5] = DAT_00208968 << 3;
      }
      else {
        DAT_00208968 = (ulong)(local_10[3] * (long)DAT_00208974) / (ulong)(long)DAT_00208970 &
                       0xfffffffffffffffc;
        DAT_00208960 = ((long)DAT_00208970 * DAT_00208968) / (ulong)(long)DAT_00208974;
        local_10[6] = DAT_00208968;
        local_10[5] = DAT_00208968;
      }
    }
    else {
      DAT_00208968 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) *
                            ZEXT816((ulong)((long)DAT_00208974 * local_10[3] * 3) /
                                    (ulong)(long)DAT_00208970) >> 0x43,0) * 0xc;
      DAT_00208960 = ((long)DAT_00208970 * DAT_00208968) / (ulong)(long)DAT_00208974;
      local_10[6] = DAT_00208968;
      local_10[5] = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * ZEXT816(DAT_00208968) >> 0x41,0);
    }
  }
  _DAT_00208920 = *local_10;
  _DAT_00208928 = local_10[1];
  _DAT_00208930 = local_10[2];
  _DAT_00208938 = local_10[3];
  _DAT_00208940 = local_10[4];
  DAT_00208948 = local_10[5];
  _DAT_00208950 = local_10[6];
  _DAT_00208958 = local_10[7];
  uVar1 = FUN_0010227a(&local_14);
  if ((int)uVar1 == 0) {
    local_24 = 0;
  }
  else {
    local_20 = (long)((DAT_0020897c + DAT_00208978 + -1) / DAT_00208978) * DAT_00208968;
    if ((local_14 == 3) || (local_14 == 4)) {
      local_20 = local_20 * 2;
      DAT_002088d8 = 4;
      if ((*(uint *)(local_10 + 2) >> 8 & 1) == 0) {
        DAT_002088d0 = DAT_00208960;
      }
      else {
        DAT_002088d0 = local_10[3];
      }
    }
    if ((local_14 == 3) && (uVar1 = FUN_0010260e(), (int)uVar1 == 0)) {
      local_24 = 0;
    }
    else {
      if ((DAT_002088d8 == 0) ||
         (DAT_002088c0 = bugchk_malloc((long)DAT_002088d8 * DAT_002088d0, __FILE__, __LINE__),
         DAT_002088c0 != (undefined8 *)0x0)) {
        local_10[7] = local_20;
        _DAT_00208920 = *local_10;
        _DAT_00208928 = local_10[1];
        _DAT_00208930 = local_10[2];
        _DAT_00208938 = local_10[3];
        _DAT_00208940 = local_10[4];
        DAT_00208948 = local_10[5];
        _DAT_00208950 = local_10[6];
        _DAT_00208958 = local_10[7];
        local_24 = 1;
      }
      else {
        local_24 = 0;
      }
    }
  }
  return (ulong)local_24;
}

undefined8 ChangeResoClose(void)
{
  if (DAT_002088c0 != 0) {
    bugchk_free(DAT_002088c0, __FILE__, __LINE__);
    DAT_002088c0 = 0;
    DAT_002088d8 = 0;
  }
  return 1;
}

long ChangeResoWrite(undefined8 param_1,undefined4 *param_2)
{
  *param_2 = 0;
  return (*DAT_00208990)(param_1,param_2);
}

ulong ChangeResoWriteStart(void)
{
  DAT_002088dc = 0;
  _DAT_002088e0 = 0;
  DAT_00208988 = 0;
  if (DAT_002088c0 != 0) {
    _DAT_002088c8 = DAT_002088c0;
    if (DAT_002088c0 == 0) {
      return 0;
    }
    for (int i = 0; i < DAT_002088d8; i++)
      *(long *)(&DAT_002088e8 + (long)i * 8) = i * DAT_002088d0 + _DAT_002088c8;
  }
  return 1;
}

long ChangeResoWriteEnd(undefined8 param_1,undefined4 *param_2)
{
  long local_20;
  
  local_20 = 0;
  *param_2 = 0;
  if ((_DAT_002088c8 != 0) && (2 < DAT_00208988)) {
    for (int local_24 = 0; local_24 < 2; local_24++)
      local_20 += (*DAT_00208990)(param_1,param_2);
    _DAT_002088c8 = 0;
  }
  return local_20;
}
