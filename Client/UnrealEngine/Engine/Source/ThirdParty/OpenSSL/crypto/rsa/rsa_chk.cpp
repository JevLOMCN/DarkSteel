// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// RSA_check_key @ 14f79bce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_check_key(undefined8 param_1)

{
  RSA_check_key_ex(param_1,0);
  return;
}

// RSA_check_key_ex @ 14f79bd00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint RSA_check_key_ex(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar15;
  
  iVar1 = 0;
  if ((((*(longlong *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) ||
      (*(longlong *)(param_1 + 0x18) == 0)) ||
     ((*(longlong *)(param_1 + 0x20) == 0 || (*(longlong *)(param_1 + 0x28) == 0)))) {
    uVar15 = 0x1c;
    uVar14 = 0x93;
    goto LAB_14f79c400;
  }
  if (*(int *)(param_1 + 4) == 1) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
    if (0 < iVar1) {
      uVar2 = BN_num_bits(*(undefined8 *)(param_1 + 0x18));
      iVar3 = rsa_multip_cap(uVar2);
      if (iVar1 + 2 <= iVar3) goto LAB_14f79bd93;
    }
    uVar15 = 0x25;
    uVar14 = 0xa7;
LAB_14f79c400:
    ERR_put_error(4,0xa0,uVar14,"crypto\\rsa\\rsa_chk.c",uVar15);
    return 0;
  }
LAB_14f79bd93:
  lVar5 = BN_new();
  lVar6 = BN_new();
  lVar7 = BN_new();
  lVar8 = BN_new();
  lVar9 = BN_new();
  lVar10 = BN_CTX_new();
  if (((lVar5 == 0) || (lVar6 == 0)) ||
     ((lVar7 == 0 || (((lVar8 == 0 || (lVar9 == 0)) || (lVar10 == 0)))))) {
    uVar13 = 0xffffffff;
    ERR_put_error(4,0xa0,0x41,"crypto\\rsa\\rsa_chk.c",0x33);
    goto LAB_14f79c396;
  }
  iVar3 = BN_is_one(*(undefined8 *)(param_1 + 0x20));
  if (iVar3 != 0) {
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x39);
    ERR_put_error(4,0xa0,0x65,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  uVar13 = (uint)(iVar3 == 0);
  iVar3 = BN_is_odd(*(undefined8 *)(param_1 + 0x20));
  if (iVar3 == 0) {
    uVar13 = 0;
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x3d);
    ERR_put_error(4,0xa0,0x65,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  iVar3 = BN_is_prime_ex(*(undefined8 *)(param_1 + 0x30),0,0,param_2);
  if (iVar3 != 1) {
    uVar13 = 0;
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x43);
    ERR_put_error(4,0xa0,0x80,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  iVar3 = BN_is_prime_ex(*(undefined8 *)(param_1 + 0x38),0,0,param_2);
  if (iVar3 != 1) {
    uVar13 = 0;
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x49);
    ERR_put_error(4,0xa0,0x81,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar11 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar3);
      iVar4 = BN_is_prime_ex(*puVar11,0,0,param_2);
      if (iVar4 != 1) {
        uVar13 = 0;
        in_stack_ffffffffffffffb8 =
             CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x51);
        ERR_put_error(4,0xa0,0xaa,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = BN_mul(lVar5,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar10);
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (iVar3 != 0) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        puVar11 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar3);
        iVar4 = BN_mul(lVar5,lVar5,*puVar11,lVar10);
        uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
        if (iVar4 == 0) goto LAB_14f79bf60;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    iVar3 = BN_cmp(lVar5,*(undefined8 *)(param_1 + 0x18));
    if (iVar3 != 0) {
      uVar13 = 0;
      if (iVar1 == 0) {
        uVar15 = CONCAT44(uVar2,0x67);
        uVar14 = 0x7f;
      }
      else {
        uVar15 = CONCAT44(uVar2,0x65);
        uVar14 = 0xac;
      }
      ERR_put_error(4,0xa0,uVar14,"crypto\\rsa\\rsa_chk.c",uVar15);
    }
    uVar14 = BN_value_one();
    iVar3 = BN_sub(lVar5,*(undefined8 *)(param_1 + 0x30),uVar14);
    if (iVar3 != 0) {
      uVar14 = BN_value_one();
      iVar3 = BN_sub(lVar6,*(undefined8 *)(param_1 + 0x38),uVar14);
      if (((iVar3 != 0) && (iVar3 = BN_mul(lVar8,lVar5,lVar6,lVar10), iVar3 != 0)) &&
         (iVar3 = BN_gcd(lVar9,lVar5,lVar6,lVar10), iVar3 != 0)) {
        iVar3 = 0;
        if (0 < iVar1) {
          do {
            puVar11 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar3);
            uVar14 = BN_value_one();
            iVar4 = BN_sub(lVar7,*puVar11,uVar14);
            if (((iVar4 == 0) || (iVar4 = BN_mul(lVar8,lVar8,lVar7,lVar10), iVar4 == 0)) ||
               (iVar4 = BN_gcd(lVar9,lVar9,lVar7,lVar10), iVar4 == 0)) goto LAB_14f79bf60;
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
        iVar3 = BN_div(lVar7,0,lVar8,lVar9,lVar10);
        if (iVar3 != 0) {
          lVar12 = lVar10;
          iVar3 = BN_mod_mul(lVar5,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
                             lVar7,lVar10);
          uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
          if (iVar3 != 0) {
            iVar3 = BN_is_one(lVar5);
            if (iVar3 == 0) {
              uVar13 = 0;
              ERR_put_error(4,0xa0,0x7b,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0x97));
            }
            if (((*(longlong *)(param_1 + 0x40) == 0) || (*(longlong *)(param_1 + 0x48) == 0)) ||
               (*(longlong *)(param_1 + 0x50) == 0)) {
LAB_14f79c294:
              iVar3 = 0;
              if (0 < iVar1) {
                do {
                  puVar11 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar3);
                  uVar14 = BN_value_one();
                  iVar4 = BN_sub(lVar5,*puVar11,uVar14);
                  if (iVar4 == 0) goto LAB_14f79bf60;
                  lVar12 = lVar10;
                  iVar4 = BN_div(0,lVar6,*(undefined8 *)(param_1 + 0x28),lVar5,lVar10);
                  uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
                  if (iVar4 == 0) goto LAB_14f79bf60;
                  iVar4 = BN_cmp(lVar6,puVar11[1]);
                  if (iVar4 != 0) {
                    uVar13 = 0;
                    uVar14 = CONCAT44(uVar2,0xcf);
                    ERR_put_error(4,0xa0,0xa9,"crypto\\rsa\\rsa_chk.c",uVar14);
                    uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
                  }
                  lVar12 = BN_mod_inverse(lVar5,puVar11[3],*puVar11,lVar10);
                  if (lVar12 == 0) goto LAB_14f79bf60;
                  iVar4 = BN_cmp(lVar5,puVar11[2]);
                  if (iVar4 != 0) {
                    uVar13 = 0;
                    ERR_put_error(4,0xa0,0xa8,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0xd8));
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar1);
              }
              goto LAB_14f79c396;
            }
            uVar14 = BN_value_one();
            iVar3 = BN_sub(lVar5,*(undefined8 *)(param_1 + 0x30),uVar14);
            if (iVar3 != 0) {
              lVar12 = lVar10;
              iVar3 = BN_div(0,lVar6,*(undefined8 *)(param_1 + 0x28),lVar5,lVar10);
              uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
              if (iVar3 != 0) {
                iVar3 = BN_cmp(lVar6,*(undefined8 *)(param_1 + 0x40));
                if (iVar3 != 0) {
                  uVar13 = 0;
                  ERR_put_error(4,0xa0,0x7c,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0xa6));
                }
                uVar14 = BN_value_one();
                iVar3 = BN_sub(lVar5,*(undefined8 *)(param_1 + 0x38),uVar14);
                if (iVar3 != 0) {
                  lVar12 = lVar10;
                  iVar3 = BN_div(0,lVar6,*(undefined8 *)(param_1 + 0x28),lVar5,lVar10);
                  uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
                  if (iVar3 != 0) {
                    iVar3 = BN_cmp(lVar6,*(undefined8 *)(param_1 + 0x48));
                    if (iVar3 != 0) {
                      uVar13 = 0;
                      uVar14 = CONCAT44(uVar2,0xb4);
                      ERR_put_error(4,0xa0,0x7d,"crypto\\rsa\\rsa_chk.c",uVar14);
                      uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
                    }
                    lVar12 = BN_mod_inverse(lVar5,*(undefined8 *)(param_1 + 0x38),
                                            *(undefined8 *)(param_1 + 0x30),lVar10);
                    if (lVar12 != 0) {
                      iVar3 = BN_cmp(lVar5,*(undefined8 *)(param_1 + 0x50));
                      if (iVar3 != 0) {
                        uVar13 = 0;
                        ERR_put_error(4,0xa0,0x7e,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0xbe));
                      }
                      goto LAB_14f79c294;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14f79bf60:
  uVar13 = 0xffffffff;
LAB_14f79c396:
  BN_free(lVar5);
  BN_free(lVar6);
  BN_free(lVar7);
  BN_free(lVar8);
  BN_free(lVar9);
  BN_CTX_free(lVar10);
  return uVar13;
}

// FUN_14f79c430 @ 14f79c430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f79c430(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f79c450 @ 14f79c450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f79c450(void)

{
  OPENSSL_sk_value();
  return;
}

