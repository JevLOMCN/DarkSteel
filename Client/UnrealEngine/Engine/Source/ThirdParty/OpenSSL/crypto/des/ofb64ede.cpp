// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// DES_ede3_ofb64_encrypt @ 14f73d3b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void DES_ede3_ofb64_encrypt
               (byte *param_1,longlong param_2,int param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined4 *param_7,uint *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  uint *local_60;
  undefined4 *local_58;
  byte local_50 [4];
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar4 = 0;
  local_78 = param_5;
  local_68 = (undefined1 *)((longlong)param_7 + 1);
  uVar1 = *param_8;
  local_58 = param_7;
  uVar2 = *param_7;
  local_70 = param_6;
  local_60 = param_8;
  uVar3 = param_7[1];
  local_50[1] = (char)((ushort)*(undefined2 *)param_7 >> 8);
  local_50[2] = *(undefined1 *)((longlong)param_7 + 2);
  local_50[3] = *(undefined1 *)((longlong)param_7 + 3);
  local_4b = *(undefined1 *)((longlong)param_7 + 5);
  local_4a = *(undefined1 *)((longlong)param_7 + 6);
  local_50[0] = (byte)*(undefined2 *)param_7;
  local_4c = *(undefined1 *)(param_7 + 1);
  local_49 = *(undefined1 *)((longlong)param_7 + 7);
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    local_88 = uVar2;
    local_84 = uVar3;
    local_80 = param_4;
    do {
      param_3 = param_3 + -1;
      if (uVar1 == 0) {
        DES_encrypt3(&local_88,param_4,param_5,param_6);
        local_50[0] = (byte)local_88;
        local_50[1] = (char)((uint)local_88 >> 8);
        local_50[2] = (char)((uint)local_88 >> 0x10);
        local_50[3] = (char)((uint)local_88 >> 0x18);
        local_4c = (char)local_84;
        local_4b = (char)((uint)local_84 >> 8);
        local_4a = (char)((uint)local_84 >> 0x10);
        local_49 = (char)((uint)local_84 >> 0x18);
        iVar4 = iVar4 + 1;
        param_6 = local_70;
        uVar2 = local_88;
        uVar3 = local_84;
      }
      param_1[param_2] = local_50[(int)uVar1] ^ *param_1;
      param_1 = param_1 + 1;
      uVar1 = uVar1 + 1 & 7;
    } while (param_3 != 0);
    param_8 = local_60;
    if (iVar4 != 0) {
      *(char *)local_58 = (char)uVar2;
      *local_68 = (char)((uint)uVar2 >> 8);
      local_68[1] = (char)((uint)uVar2 >> 0x10);
      local_68[2] = (char)((uint)uVar2 >> 0x18);
      local_68[3] = (char)uVar3;
      local_68[4] = (char)((uint)uVar3 >> 8);
      local_68[5] = (char)((uint)uVar3 >> 0x10);
      local_68[6] = (char)((uint)uVar3 >> 0x18);
    }
  }
  *param_8 = uVar1;
  return;
}

