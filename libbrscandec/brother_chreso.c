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
uint64_t DAT_002088e8;
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
  uint local_10;
  int local_c;
  
  DAT_002088dc = 0;
  _DAT_002088e0 = 0;
  DAT_00208988 = 0;
  if (DAT_002088c0 != 0) {
    _DAT_002088c8 = DAT_002088c0;
    if (DAT_002088c0 == 0) {
      local_10 = 0;
      goto LAB_001015ee;
    }
    local_c = 0;
    while (local_c < DAT_002088d8) {
      *(long *)(&DAT_002088e8 + (long)local_c * 8) = local_c * DAT_002088d0 + _DAT_002088c8;
      local_c = local_c + 1;
    }
  }
  local_10 = 1;
LAB_001015ee:
  return (ulong)local_10;
}

long ChangeResoWriteEnd(undefined8 param_1,undefined4 *param_2)
{
  long lVar1;
  int local_24;
  long local_20;
  
  local_20 = 0;
  *param_2 = 0;
  if ((_DAT_002088c8 != 0) && (2 < DAT_00208988)) {
    local_24 = 0;
    while (local_24 < 2) {
      lVar1 = (*DAT_00208990)(param_1,param_2);
      local_20 = local_20 + lVar1;
      local_24 = local_24 + 1;
    }
    _DAT_002088c8 = 0;
  }
  return local_20;
}
