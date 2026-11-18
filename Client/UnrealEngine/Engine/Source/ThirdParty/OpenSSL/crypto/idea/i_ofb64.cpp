// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// IDEA_ofb64_encrypt @ 14f73ea20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void IDEA_ofb64_encrypt(byte *param_1,longlong param_2,int param_3,undefined8 param_4,byte *param_5,
                       uint *param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_74;
  undefined8 local_70;
  uint *local_68;
  byte *local_60;
  byte local_58 [4];
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f73ea3d;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_60 = param_5;
  iVar6 = 0;
  local_58[1] = param_5[1];
  uVar2 = *param_6;
  uVar4 = (uint)param_5[3];
  uVar5 = (uint)*param_5 << 0x18 | (uint)local_58[1] << 0x10 | (uint)param_5[2] << 8 | uVar4;
  local_68 = param_6;
  uVar1 = (uint)CONCAT11(param_5[6],param_5[7]);
  local_74 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | uVar1;
  uVar3 = (ulonglong)local_74;
  local_58[3] = param_5[3];
  local_58[0] = *param_5;
  local_58[2] = param_5[2];
  local_54 = param_5[4];
  local_53 = param_5[5];
  local_52 = param_5[6];
  local_51 = param_5[7];
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    uVar1 = uVar1 & 0xff;
    local_78 = uVar5;
    local_70 = param_4;
    do {
      param_3 = param_3 + -1;
      if (uVar2 == 0) {
        IDEA_encrypt(&local_78,param_4);
        uVar3 = (ulonglong)local_74;
        uVar4 = local_78 & 0xff;
        uVar1 = local_74 & 0xff;
        local_58[0] = (byte)(local_78 >> 0x18);
        local_58[1] = (byte)(local_78 >> 0x10);
        local_58[2] = (byte)(local_78 >> 8);
        local_54 = (byte)(local_74 >> 0x18);
        local_53 = (byte)(local_74 >> 0x10);
        local_52 = (byte)(local_74 >> 8);
        iVar6 = iVar6 + 1;
        local_58[3] = (byte)local_78;
        local_51 = (byte)local_74;
        uVar5 = local_78;
      }
      param_1[param_2] = local_58[(int)uVar2] ^ *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 + 1 & 7;
    } while (param_3 != 0);
    param_6 = local_68;
    if (iVar6 != 0) {
      *local_60 = (byte)(uVar5 >> 0x18);
      param_5[1] = (byte)(uVar5 >> 0x10);
      param_5[2] = (byte)(uVar5 >> 8);
      param_5[3] = (byte)uVar4;
      param_5[4] = (byte)(uVar3 >> 0x18);
      param_5[5] = (byte)(uVar3 >> 0x10);
      param_5[6] = (byte)(uVar3 >> 8);
      param_5[7] = (byte)uVar1;
    }
  }
  *param_6 = uVar2;
  return;
}

