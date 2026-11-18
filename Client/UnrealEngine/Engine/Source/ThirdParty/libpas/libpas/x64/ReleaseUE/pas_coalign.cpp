// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_coalign_one_sided @ 140da62a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_coalign_result * __cdecl
pas_coalign_one_sided
          (pas_coalign_result *__return_storage_ptr__,ulong64 param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  pas_coalign_result *ppVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  undefined1 auStack_68 [32];
  pas_extended_gcd_result local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((longlong)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((longlong)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((longlong)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_1 | param_2) >> 0x20 == 0) {
    uVar6 = (param_1 & 0xffffffff) % (param_2 & 0xffffffff);
  }
  else {
    uVar6 = param_1 % param_2;
  }
  pas_extended_gcd(&local_48,param_2,param_3);
  if (local_48.result < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar3 = param_3 * param_2;
  if ((uVar3 | local_48.result) >> 0x20 == 0) {
    uVar3 = (uVar3 & 0xffffffff) / (local_48.result & 0xffffffffU);
    if ((uVar6 | local_48.result) >> 0x20 != 0) goto LAB_140da634d;
LAB_140da637a:
    uVar4 = (uVar6 & 0xffffffff) / (local_48.result & 0xffffffffU);
    uVar6 = (uVar6 & 0xffffffff) % (local_48.result & 0xffffffffU);
  }
  else {
    uVar3 = uVar3 / (ulonglong)local_48.result;
    if ((uVar6 | local_48.result) >> 0x20 == 0) goto LAB_140da637a;
LAB_140da634d:
    uVar4 = uVar6 / (ulonglong)local_48.result;
    uVar6 = uVar6 % (ulonglong)local_48.result;
  }
  if (uVar6 == 0) {
    if ((uVar3 | param_3) >> 0x20 == 0) {
      uVar6 = (uVar3 & 0xffffffff) / (param_3 & 0xffffffff);
      if (uVar6 == 0) goto LAB_140da63cf;
    }
    else {
      uVar6 = uVar3 / param_3;
      if ((longlong)uVar6 < 1) {
LAB_140da63cf:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    uVar4 = uVar4 * local_48.right_bezout_coefficient;
    if ((uVar4 | uVar6) >> 0x20 == 0) {
      uVar4 = (uVar4 & 0xffffffff) % (uVar6 & 0xffffffff);
    }
    else {
      uVar4 = (longlong)uVar4 % (longlong)uVar6;
    }
    uVar4 = ((longlong)uVar4 >> 0x3f & uVar6) + uVar4;
    if ((longlong)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar6 <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = uVar4 * param_3;
    if ((longlong)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar6 = ~uVar4 + uVar3 + param_1;
    if ((uVar6 | uVar3) >> 0x20 == 0) {
      uVar3 = (uVar6 & 0xffffffff) % (uVar3 & 0xffffffff);
    }
    else {
      uVar3 = uVar6 % uVar3;
    }
    uVar7 = (uVar6 - uVar3) + uVar4;
    if ((uVar7 | param_3) >> 0x20 == 0) {
      uVar6 = (uVar7 & 0xffffffff) % (param_3 & 0xffffffff);
    }
    else {
      uVar6 = uVar7 % param_3;
    }
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar6 = uVar7 - param_1;
    if ((uVar6 | param_2) >> 0x20 == 0) {
      uVar6 = (uVar6 & 0xffffffff) % (param_2 & 0xffffffff);
    }
    else {
      uVar6 = uVar6 % param_2;
    }
    bVar2 = true;
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    bVar2 = false;
    uVar7 = 0;
  }
  __return_storage_ptr__->has_result = bVar2;
  __return_storage_ptr__->result = uVar7;
  if ((local_30 ^ (ulonglong)auStack_68) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    ppVar5 = (pas_coalign_result *)(*pcVar1)();
    return ppVar5;
  }
  return __return_storage_ptr__;
}

// pas_coalign @ 140da64d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_coalign_result * __cdecl
pas_coalign(pas_coalign_result *__return_storage_ptr__,ulong64 param_1,ulong64 param_2,
           ulong64 param_3,ulong64 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  pas_coalign_result *ppVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  undefined1 auStack_68 [32];
  pas_coalign_result local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar5 = param_3;
  uVar6 = param_4;
  if (param_1 < param_3) {
    uVar5 = param_1;
    uVar6 = param_2;
    param_2 = param_4;
    param_1 = param_3;
  }
  pas_coalign_one_sided(&local_48,param_1 - uVar5,param_2,uVar6);
  if (((local_48.has_result & 1U) == 0) ||
     (uVar4 = local_48.result + uVar5, CARRY8(local_48.result,uVar5))) {
    __return_storage_ptr__->has_result = false;
    uVar4 = 0;
  }
  else {
    uVar2 = uVar4 - param_1;
    if ((uVar2 | param_2) >> 0x20 == 0) {
      uVar2 = (uVar2 & 0xffffffff) % (param_2 & 0xffffffff);
    }
    else {
      uVar2 = uVar2 % param_2;
    }
    if (uVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = uVar4 - uVar5;
    if ((uVar2 | uVar6) >> 0x20 == 0) {
      uVar2 = (uVar2 & 0xffffffff) % (uVar6 & 0xffffffff);
    }
    else {
      uVar2 = uVar2 % uVar6;
    }
    if (uVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    __return_storage_ptr__->has_result = local_48.has_result;
    *(undefined4 *)&__return_storage_ptr__->field_0x1 = local_48._1_4_;
    *(uint *)&__return_storage_ptr__->field_0x4 = CONCAT31(local_48._5_3_,local_48._4_1_);
  }
  __return_storage_ptr__->result = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar3 = (pas_coalign_result *)(*pcVar1)();
  return ppVar3;
}

