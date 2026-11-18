// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_extended_gcd @ 140dacb50

pas_extended_gcd_result * __cdecl
pas_extended_gcd(pas_extended_gcd_result *__return_storage_ptr__,long64 param_1,long64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = 1;
  if (param_1 == 1) {
    param_2 = 0;
    param_1 = 1;
  }
  else if (param_2 != 0) {
    if (param_2 == 1) {
      lVar7 = 0;
      param_1 = param_2;
    }
    else {
      uVar4 = param_1;
      uVar5 = param_2;
      lVar1 = 1;
      lVar6 = 0;
      lVar2 = 0;
      lVar8 = 1;
      do {
        lVar7 = lVar2;
        param_2 = lVar1;
        param_1 = uVar5;
        if ((uVar4 | param_1) >> 0x20 == 0) {
          uVar3 = (uVar4 & 0xffffffff) / (param_1 & 0xffffffffU);
          uVar5 = (uVar4 & 0xffffffff) % (param_1 & 0xffffffffU);
        }
        else {
          uVar3 = (longlong)uVar4 / param_1;
          uVar5 = (longlong)uVar4 % param_1;
        }
        uVar4 = param_1;
        lVar1 = lVar6 - uVar3 * param_2;
        lVar6 = param_2;
        lVar2 = lVar8 - uVar3 * lVar7;
        lVar8 = lVar7;
      } while (uVar5 != 0);
    }
  }
  __return_storage_ptr__->left_bezout_coefficient = lVar7;
  __return_storage_ptr__->right_bezout_coefficient = param_2;
  __return_storage_ptr__->result = param_1;
  return __return_storage_ptr__;
}

