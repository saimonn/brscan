#include "brother_chreso.h"
#include "brother_bugchk.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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

void ChangeResoWrite(undefined8 param_1,undefined4 *param_2)
{
  *param_2 = 0;
  (*DAT_00208990)(param_1,param_2);
  return;
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
