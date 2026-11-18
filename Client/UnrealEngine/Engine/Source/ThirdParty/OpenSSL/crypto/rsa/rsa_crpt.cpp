// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// RSA_bits @ 14f6bd770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_bits(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(param_1 + 0x18));
  return;
}

// RSA_blinding_off @ 14f6bd790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_blinding_off(longlong param_1)

{
  BN_BLINDING_free(*(undefined8 *)(param_1 + 0x98));
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffff7;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x80;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}

// RSA_blinding_on @ 14f6bd7d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_blinding_on(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    BN_BLINDING_free();
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffff7;
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x80;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  lVar1 = RSA_setup_blinding(param_1,param_2);
  *(longlong *)(param_1 + 0x98) = lVar1;
  if (lVar1 != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffff7f | 8;
    return 1;
  }
  return 0;
}

// RSA_flags @ 14f6bd860

undefined4 RSA_flags(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48);
}

// RSA_private_decrypt @ 14f6bd880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_private_decrypt(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x00014f6bd895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 0x20))();
  return;
}

// RSA_private_encrypt @ 14f6bd8a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_private_encrypt(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x00014f6bd8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 0x18))();
  return;
}

// RSA_public_decrypt @ 14f6bd8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_public_decrypt(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x00014f6bd8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 0x10))();
  return;
}

// RSA_public_encrypt @ 14f6bd8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_public_encrypt(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x00014f6bd8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 8))();
  return;
}

// RSA_setup_blinding @ 14f6bd900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong RSA_setup_blinding(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x14f6bd913;
  lVar4 = 0;
  lVar1 = param_2;
  if ((param_2 == 0) && (lVar1 = BN_CTX_new(), lVar1 == 0)) {
    return 0;
  }
  BN_CTX_start(lVar1);
  lVar2 = BN_CTX_get(lVar1);
  if (lVar2 == 0) {
    ERR_put_error(4,0x88,0x41,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar5,0x7e),uVar6);
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if ((lVar2 == 0) &&
       (lVar2 = FUN_14f6bdaf0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                              *(undefined8 *)(param_1 + 0x38),lVar1), lVar2 == 0)) {
      ERR_put_error(4,0x88,0x8c,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar5,0x85),uVar6);
    }
    else {
      lVar3 = BN_new();
      if (lVar3 == 0) {
        ERR_put_error(4,0x88,0x41,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar5,0x90));
      }
      else {
        BN_with_flags(lVar3,*(undefined8 *)(param_1 + 0x18),4);
        uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
        lVar4 = BN_BLINDING_create_param(0,lVar2,lVar3,lVar1,uVar6,*(undefined8 *)(param_1 + 0x78));
        uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
        BN_free(lVar3);
        if (lVar4 == 0) {
          ERR_put_error(4,0x88,3,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar5,0x9b));
        }
        else {
          BN_BLINDING_set_current_thread(lVar4);
        }
      }
    }
  }
  BN_CTX_end(lVar1);
  if (lVar1 != param_2) {
    BN_CTX_free(lVar1);
  }
  if (lVar2 != *(longlong *)(param_1 + 0x20)) {
    BN_free(lVar2);
  }
  return lVar4;
}

// RSA_size @ 14f6bdac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int RSA_size(longlong param_1)

{
  int iVar1;
  
  iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x18));
  return (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
}

// FUN_14f6bdaf0 @ 14f6bdaf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6bdaf0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    BN_CTX_start(param_4);
    uVar2 = BN_CTX_get(param_4);
    uVar3 = BN_CTX_get(param_4);
    lVar4 = BN_CTX_get(param_4);
    if (lVar4 != 0) {
      uVar5 = BN_value_one();
      iVar1 = BN_sub(uVar3,param_2,uVar5);
      if (iVar1 != 0) {
        uVar5 = BN_value_one();
        iVar1 = BN_sub(lVar4,param_3,uVar5);
        if (iVar1 != 0) {
          iVar1 = BN_mul(uVar2,uVar3,lVar4,param_4);
          uVar6 = 0;
          if (iVar1 != 0) {
            uVar6 = BN_mod_inverse(0,param_1,uVar2,param_4);
          }
        }
      }
    }
    BN_CTX_end(param_4);
    return uVar6;
  }
  return 0;
}

