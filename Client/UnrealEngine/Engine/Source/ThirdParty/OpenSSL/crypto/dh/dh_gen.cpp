// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// DH_generate_parameters_ex @ 14f7a2440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_generate_parameters_ex(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x78) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f7a245e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_14f7a2470();
  return;
}

// FUN_14f7a2470 @ 14f7a2470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7a2470(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar8 = 0x14f7a2494;
  lVar2 = BN_CTX_new();
  if (lVar2 != 0) {
    BN_CTX_start(lVar2);
    uVar3 = BN_CTX_get(lVar2);
    lVar4 = BN_CTX_get(lVar2);
    if (lVar4 != 0) {
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar5 = BN_new();
        *(longlong *)(param_1 + 8) = lVar5;
        if (lVar5 == 0) goto LAB_14f7a25ec;
      }
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = BN_new();
        *(longlong *)(param_1 + 0x10) = lVar5;
        if (lVar5 == 0) goto LAB_14f7a25ec;
      }
      if (param_3 < 2) {
        uVar3 = CONCAT44(uVar7,0x54);
        ERR_put_error(5,0x6a,0x65,"crypto\\dh\\dh_gen.c",uVar3);
        uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      else if (param_3 == 2) {
        iVar1 = BN_set_word(uVar3,0x18);
        if (iVar1 != 0) {
          iVar1 = BN_set_word(lVar4,0xb);
          goto joined_r0x00014f7a25a3;
        }
      }
      else if (param_3 == 5) {
        iVar1 = BN_set_word(uVar3,0x3c);
        if (iVar1 != 0) {
          iVar1 = BN_set_word(lVar4,0x17);
joined_r0x00014f7a25a3:
          if (iVar1 != 0) {
            uVar6 = 1;
            uVar8 = param_4;
            iVar1 = BN_generate_prime_ex(*(undefined8 *)(param_1 + 8),param_2,1,uVar3,lVar4,param_4)
            ;
            uVar7 = (undefined4)((ulonglong)lVar4 >> 0x20);
            if (((iVar1 != 0) && (iVar1 = BN_GENCB_call(param_4,3,0), iVar1 != 0)) &&
               (iVar1 = BN_set_word(*(undefined8 *)(param_1 + 0x10),(longlong)param_3), iVar1 != 0))
            goto LAB_14f7a260e;
          }
        }
      }
      else {
        iVar1 = BN_set_word(uVar3,0xc);
        if (iVar1 != 0) {
          iVar1 = BN_set_word(lVar4,0xb);
          goto joined_r0x00014f7a25a3;
        }
      }
    }
  }
LAB_14f7a25ec:
  ERR_put_error(5,0x6a,3,"crypto\\dh\\dh_gen.c",CONCAT44(uVar7,0x79),uVar8);
  uVar6 = 0;
LAB_14f7a260e:
  BN_CTX_end(lVar2);
  BN_CTX_free(lVar2);
  return uVar6;
}

