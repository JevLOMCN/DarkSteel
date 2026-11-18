// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// RC2_ofb64_encrypt @ 14f73f890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RC2_ofb64_encrypt(byte *param_1,longlong param_2,int param_3,undefined8 param_4,uint *param_5,
                      uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_74;
  undefined8 local_70;
  uint *local_68;
  uint *local_60;
  byte local_58 [4];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f73f8ad;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar1 = param_5 + 1;
  uVar3 = *param_6;
  iVar7 = 0;
  local_60 = param_5;
  uVar6 = *param_5;
  local_68 = param_6;
  uVar2 = *puVar1;
  local_58[0] = (byte)*param_5;
  local_58[1] = *(undefined1 *)((longlong)param_5 + 1);
  local_58[2] = *(undefined1 *)((longlong)param_5 + 2);
  local_58[3] = *(undefined1 *)((longlong)param_5 + 3);
  local_53 = *(undefined1 *)((longlong)param_5 + 5);
  local_52 = *(undefined1 *)((longlong)param_5 + 6);
  local_54 = (char)*puVar1;
  local_51 = *(undefined1 *)((longlong)param_5 + 7);
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    uVar4 = (ushort)*puVar1 & 0xff;
    uVar5 = (uint3)*param_5 & 0xff;
    local_78 = uVar6;
    local_74 = uVar2;
    local_70 = param_4;
    do {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        RC2_encrypt(&local_78,param_4);
        uVar5 = local_78 & 0xff;
        uVar4 = local_74 & 0xff;
        local_58[1] = (char)(local_78 >> 8);
        local_58[2] = (char)(local_78 >> 0x10);
        local_58[3] = (char)(local_78 >> 0x18);
        local_53 = (char)(local_74 >> 8);
        local_52 = (char)(local_74 >> 0x10);
        local_51 = (char)(local_74 >> 0x18);
        iVar7 = iVar7 + 1;
        local_58[0] = (byte)local_78;
        local_54 = (undefined1)local_74;
        uVar6 = local_78;
        uVar2 = local_74;
      }
      param_1[param_2] = local_58[(int)uVar3] ^ *param_1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 + 1 & 7;
    } while (param_3 != 0);
    param_6 = local_68;
    if (iVar7 != 0) {
      *(char *)local_60 = (char)uVar5;
      *(undefined1 *)((longlong)param_5 + 1) = (char)(uVar6 >> 8);
      *(char *)((longlong)param_5 + 2) = (char)(uVar6 >> 0x10);
      *(char *)((longlong)param_5 + 3) = (char)(uVar6 >> 0x18);
      *(char *)(param_5 + 1) = (char)uVar4;
      *(char *)((longlong)param_5 + 5) = (char)(uVar2 >> 8);
      *(char *)((longlong)param_5 + 6) = (char)(uVar2 >> 0x10);
      *(char *)((longlong)param_5 + 7) = (char)(uVar2 >> 0x18);
    }
  }
  *param_6 = uVar3;
  return;
}

