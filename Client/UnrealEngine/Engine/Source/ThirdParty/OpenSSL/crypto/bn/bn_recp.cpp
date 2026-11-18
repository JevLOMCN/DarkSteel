// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// BN_RECP_CTX_free @ 14f785350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_RECP_CTX_free(longlong param_1)

{
  if (param_1 != 0) {
    BN_free();
    BN_free(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      CRYPTO_free(param_1,"crypto\\bn\\bn_recp.c",0x2a);
    }
  }
  return;
}

// BN_RECP_CTX_init @ 14f7853a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_RECP_CTX_init(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  bn_init();
  bn_init(param_1 + 3);
  return;
}

// BN_RECP_CTX_new @ 14f7853f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BN_RECP_CTX_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7853fc;
  lVar1 = CRYPTO_zalloc(0x40,"crypto\\bn\\bn_recp.c",0x18);
  if (lVar1 == 0) {
    ERR_put_error(3,0x96,0x41,"crypto\\bn\\bn_recp.c",0x19,uVar2);
    return 0;
  }
  bn_init(lVar1);
  bn_init(lVar1 + 0x18);
  *(undefined4 *)(lVar1 + 0x38) = 1;
  return lVar1;
}

// BN_RECP_CTX_set @ 14f785470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_RECP_CTX_set(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = BN_copy();
  if (lVar2 == 0) {
    return 0;
  }
  BN_set_word(param_1 + 0x18,0);
  uVar1 = BN_num_bits(param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return 1;
}

// BN_div_recp @ 14f7854e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_div_recp(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined4 uVar7;
  
  uVar6 = 0;
  uVar7 = 0;
  BN_CTX_start(param_5);
  if (param_1 == 0) {
    param_1 = BN_CTX_get(param_5);
  }
  if (param_2 == 0) {
    param_2 = BN_CTX_get(param_5);
  }
  uVar4 = BN_CTX_get(param_5);
  lVar5 = BN_CTX_get(param_5);
  uVar8 = uVar6;
  if (lVar5 != 0) {
    iVar1 = BN_ucmp(param_3,param_4);
    if (iVar1 < 0) {
      BN_set_word(param_1,0);
      lVar5 = BN_copy(param_2,param_3);
      if (lVar5 == 0) {
        BN_CTX_end(param_5);
        return 0;
      }
      BN_CTX_end(param_5);
      return 1;
    }
    iVar2 = BN_num_bits(param_3);
    iVar1 = *(int *)(param_4 + 0x30) * 2;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 != *(int *)(param_4 + 0x34)) {
      uVar3 = BN_reciprocal(param_4 + 0x18,param_4,iVar2,param_5);
      *(undefined4 *)(param_4 + 0x34) = uVar3;
    }
    if ((((*(int *)(param_4 + 0x34) != -1) &&
         (iVar1 = BN_rshift(uVar4,param_3,*(undefined4 *)(param_4 + 0x30)), uVar8 = uVar7,
         iVar1 != 0)) && (iVar1 = BN_mul(lVar5,uVar4,param_4 + 0x18,param_5), iVar1 != 0)) &&
       (iVar1 = BN_rshift(param_1,lVar5,iVar2 - *(int *)(param_4 + 0x30)), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      iVar1 = BN_mul(lVar5,param_4,param_1,param_5);
      if ((iVar1 != 0) && (iVar1 = BN_usub(param_2,param_3,lVar5), iVar1 != 0)) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        iVar2 = BN_ucmp(param_2,param_4);
        iVar1 = 0;
        while (-1 < iVar2) {
          if (2 < iVar1) {
            ERR_put_error(3,0x82,0x65,"crypto\\bn\\bn_recp.c",0x95);
            goto LAB_14f7856e9;
          }
          iVar2 = BN_usub(param_2,param_2,param_4);
          if ((iVar2 == 0) || (iVar2 = BN_add_word(param_1,1), iVar2 == 0)) goto LAB_14f7856e9;
          iVar2 = BN_ucmp(param_2,param_4);
          iVar1 = iVar1 + 1;
        }
        iVar1 = BN_is_zero(param_2);
        if (iVar1 == 0) {
          uVar6 = *(undefined4 *)(param_3 + 0x10);
        }
        *(undefined4 *)(param_2 + 0x10) = uVar6;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_3 + 0x10) ^ *(uint *)(param_4 + 0x10);
        uVar8 = 1;
      }
    }
  }
LAB_14f7856e9:
  BN_CTX_end(param_5);
  return uVar8;
}

// BN_mod_mul_reciprocal @ 14f785740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_mod_mul_reciprocal
          (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f785764;
  uVar2 = 0;
  BN_CTX_start(param_5);
  lVar3 = BN_CTX_get(param_5);
  if (lVar3 != 0) {
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = BN_sqr(lVar3,param_2,param_5);
      }
      else {
        iVar1 = BN_mul(lVar3,param_2,param_3,param_5);
      }
      uVar2 = 0;
      param_2 = lVar3;
      if (iVar1 == 0) goto LAB_14f7857dd;
    }
    uVar2 = BN_div_recp(0,param_1,param_2,param_4,param_5,uVar4);
  }
LAB_14f7857dd:
  BN_CTX_end(param_5);
  return uVar2;
}

// BN_reciprocal @ 14f785810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_reciprocal(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f78582e;
  BN_CTX_start(param_4);
  lVar2 = BN_CTX_get(param_4);
  uVar3 = 0xffffffff;
  if (lVar2 != 0) {
    iVar1 = BN_set_bit(lVar2,param_3);
    uVar3 = 0xffffffff;
    if (iVar1 != 0) {
      iVar1 = BN_div(param_1,0,lVar2,param_2,param_4,uVar4);
      uVar3 = 0xffffffff;
      if (iVar1 != 0) {
        uVar3 = param_3;
      }
    }
  }
  BN_CTX_end(param_4);
  return uVar3;
}

