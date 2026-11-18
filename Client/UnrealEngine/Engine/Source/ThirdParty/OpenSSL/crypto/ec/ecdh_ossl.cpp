// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// ecdh_simple_compute_key @ 14f7a0000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 *
ecdh_simple_compute_key
          (undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *_Dst;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  puVar12 = (undefined1 *)0x0;
  puVar8 = (undefined1 *)0x0;
  _Dst = (undefined1 *)0x0;
  lVar3 = BN_CTX_new();
  puVar7 = puVar12;
  puVar9 = puVar12;
  if (lVar3 == 0) goto LAB_14f7a02b2;
  BN_CTX_start(lVar3);
  lVar4 = BN_CTX_get(lVar3);
  if (lVar4 == 0) {
    ERR_put_error(0x10,0x101,0x41,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x37));
    goto LAB_14f7a02b2;
  }
  lVar5 = EC_KEY_get0_private_key(param_4);
  if (lVar5 == 0) {
    ERR_put_error(0x10,0x101,0x7d,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x3d));
    goto LAB_14f7a02b2;
  }
  uVar6 = EC_KEY_get0_group(param_4);
  uVar1 = EC_KEY_get_flags(param_4);
  if (((uVar1 >> 0xc & 1) == 0) ||
     ((iVar2 = EC_GROUP_get_cofactor(uVar6,lVar4,0), iVar2 != 0 &&
      (iVar2 = BN_mul(lVar4,lVar4,lVar5,lVar3), lVar5 = lVar4, iVar2 != 0)))) {
    puVar8 = (undefined1 *)EC_POINT_new(uVar6);
    if (puVar8 != (undefined1 *)0x0) {
      iVar2 = EC_POINT_mul(uVar6,puVar8,0,param_3,lVar5,lVar3);
      puVar9 = puVar8;
      if (iVar2 == 0) {
        uVar6 = 0x52;
      }
      else {
        lVar5 = lVar3;
        iVar2 = EC_POINT_get_affine_coordinates(uVar6,puVar8,lVar4,0,lVar3);
        uVar13 = (undefined4)((ulonglong)lVar5 >> 0x20);
        if (iVar2 != 0) {
          iVar2 = EC_GROUP_get_degree(uVar6);
          uVar11 = (ulonglong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
          iVar2 = BN_num_bits(lVar4);
          uVar10 = (ulonglong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
          if (uVar11 < uVar10) {
            ERR_put_error(0x10,0x101,0x44,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x5e));
            puVar7 = _Dst;
            goto LAB_14f7a02b2;
          }
          _Dst = (undefined1 *)CRYPTO_malloc(uVar11,"crypto\\ec\\ecdh_ossl.c",0x61);
          if (_Dst != (undefined1 *)0x0) {
            memset(_Dst,0,uVar11 - uVar10);
            iVar2 = BN_bn2bin(lVar4,_Dst + (uVar11 - uVar10));
            if (uVar10 == (longlong)iVar2) {
              *param_1 = _Dst;
              puVar7 = (undefined1 *)0x0;
              puVar12 = &DAT_00000001;
              *param_2 = uVar11;
            }
            else {
              ERR_put_error(0x10,0x101,3,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x68));
              puVar7 = _Dst;
              puVar12 = (undefined1 *)0x0;
            }
            goto LAB_14f7a02b2;
          }
          uVar6 = CONCAT44(uVar13,0x62);
          goto LAB_14f7a0220;
        }
        uVar6 = CONCAT44(uVar13,0x57);
      }
      ERR_put_error(0x10,0x101,0x9b,"crypto\\ec\\ecdh_ossl.c",uVar6);
      goto LAB_14f7a02b2;
    }
    uVar6 = CONCAT44(uVar13,0x4d);
    _Dst = puVar12;
  }
  else {
    uVar6 = CONCAT44(uVar13,0x46);
  }
LAB_14f7a0220:
  ERR_put_error(0x10,0x101,0x41,"crypto\\ec\\ecdh_ossl.c",uVar6);
  puVar7 = _Dst;
  puVar9 = puVar8;
LAB_14f7a02b2:
  EC_POINT_clear_free(puVar9);
  BN_CTX_end(lVar3);
  BN_CTX_free(lVar3);
  CRYPTO_free(puVar7,"crypto\\ec\\ecdh_ossl.c",0x76);
  return puVar12;
}

// ossl_ecdh_compute_key @ 14f7a0300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_ecdh_compute_key(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong in_R9;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(in_R9 + 0x18) + 0x180);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_put_error(0x10,0xf7,0xa0,"crypto\\ec\\ecdh_ossl.c",0x1a);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f7a034b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

