// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// DSA_generate_key @ 14f7a4420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_generate_key(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x50) + 0x58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f7a443e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_14f7a4450();
  return;
}

// FUN_14f7a4450 @ 14f7a4450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7a4450(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  lVar2 = BN_CTX_new();
  lVar3 = lVar6;
  lVar4 = lVar6;
  lVar7 = lVar6;
  if ((lVar2 != 0) &&
     ((lVar3 = *(longlong *)(param_1 + 0x28), lVar4 = 0, lVar3 != 0 ||
      (lVar3 = BN_secure_new(), lVar3 != 0)))) {
    do {
      iVar1 = BN_priv_rand_range(lVar3,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 == 0) goto LAB_14f7a453b;
      iVar1 = BN_is_zero(lVar3);
    } while (iVar1 != 0);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (((lVar4 != 0) || (lVar4 = BN_new(), lVar7 = 0, lVar4 != 0)) &&
       (lVar5 = BN_new(), lVar7 = lVar6, lVar5 != 0)) {
      BN_with_flags(lVar5,lVar3,4);
      iVar1 = BN_mod_exp(lVar4,*(undefined8 *)(param_1 + 0x18),lVar5,*(undefined8 *)(param_1 + 8),
                         lVar2);
      if (iVar1 == 0) {
        BN_free(lVar5);
      }
      else {
        BN_free(lVar5);
        *(longlong *)(param_1 + 0x28) = lVar3;
        lVar7 = 1;
        *(longlong *)(param_1 + 0x20) = lVar4;
      }
    }
  }
LAB_14f7a453b:
  if (lVar4 != *(longlong *)(param_1 + 0x20)) {
    BN_free(lVar4);
  }
  if (lVar3 != *(longlong *)(param_1 + 0x28)) {
    BN_free(lVar3);
  }
  BN_CTX_free(lVar2);
  return lVar7;
}

