// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// CRYPTO_xts128_encrypt @ 14f72fb80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_xts128_encrypt
          (undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
          ulonglong param_5,int param_6)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f72fb94;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_5 < 0x10) {
    uVar4 = 0xffffffff;
  }
  else {
    local_58 = *param_2;
    uStack_50 = param_2[1];
    (*(code *)param_1[3])(&local_58,&local_58,param_1[1]);
    if ((param_6 == 0) && ((param_5 & 0xf) != 0)) {
      param_5 = param_5 - 0x10;
    }
    while (0xf < param_5) {
      local_68 = *param_3 ^ local_58;
      uStack_60 = param_3[1] ^ uStack_50;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      param_3 = param_3 + 2;
      *param_4 = local_68 ^ local_58;
      local_68 = local_68 ^ local_58;
      param_4[1] = uStack_60 ^ uStack_50;
      param_4 = param_4 + 2;
      uStack_60 = uStack_60 ^ uStack_50;
      param_5 = param_5 - 0x10;
      if (param_5 == 0) goto LAB_14f72fdc4;
      uVar5 = local_58 >> 0x3f;
      local_58 = (ulonglong)(uStack_50._4_4_ >> 0x1f & 0x87) ^ local_58 * 2;
      uStack_50 = uStack_50 * 2 | uVar5;
    }
    if (param_6 == 0) {
      local_48 = (ulonglong)((uint)((longlong)uStack_50 >> 0x3f) & 0x87) ^ local_58 * 2;
      uStack_40 = local_58 >> 0x3f | uStack_50 * 2;
      local_68 = *param_3 ^ local_48;
      uStack_60 = param_3[1] ^ uStack_40;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      uVar3 = 0;
      local_68 = local_48 ^ local_68;
      uStack_60 = uStack_40 ^ uStack_60;
      if (param_5 != 0) {
        uVar5 = 0;
        do {
          uVar1 = uVar3 + 0x10;
          uVar3 = uVar3 + 1;
          uVar2 = *(undefined1 *)((longlong)&local_68 + uVar5);
          *(undefined1 *)((longlong)&local_68 + uVar5) =
               *(undefined1 *)((ulonglong)uVar1 + (longlong)param_3);
          uVar5 = (ulonglong)uVar3;
          *(undefined1 *)((ulonglong)uVar1 + (longlong)param_4) = uVar2;
        } while (uVar5 < param_5);
      }
      local_68 = local_58 ^ local_68;
      uStack_60 = uStack_50 ^ uStack_60;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      *param_4 = local_58 ^ local_68;
      param_4[1] = uStack_50 ^ uStack_60;
    }
    else {
      uVar3 = 0;
      if (param_5 != 0) {
        uVar5 = 0;
        do {
          uVar2 = *(undefined1 *)(uVar5 + (longlong)param_3);
          uVar3 = uVar3 + 1;
          *(undefined1 *)(uVar5 + (longlong)param_4) = *(undefined1 *)((longlong)&local_68 + uVar5);
          *(undefined1 *)((longlong)&local_68 + uVar5) = uVar2;
          uVar5 = (ulonglong)uVar3;
        } while (uVar5 < param_5);
      }
      local_68 = local_58 ^ local_68;
      uStack_60 = uStack_50 ^ uStack_60;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      param_4[-2] = local_58 ^ local_68;
      param_4[-1] = uStack_50 ^ uStack_60;
    }
LAB_14f72fdc4:
    uVar4 = 0;
  }
  return uVar4;
}

