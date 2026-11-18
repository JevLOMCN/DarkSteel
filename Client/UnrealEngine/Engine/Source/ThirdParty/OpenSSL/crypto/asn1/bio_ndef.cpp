// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// BIO_new_NDEF @ 14f7cb620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_new_NDEF(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res10;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7cb639;
  lVar1 = *(longlong *)(param_3 + 0x18);
  lVar7 = 0;
  local_res10 = param_2;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
    puVar3 = (undefined8 *)CRYPTO_zalloc(0x30,"crypto\\asn1\\bio_ndef.c",0x46);
    uVar4 = BIO_f_asn1();
    lVar5 = BIO_new(uVar4);
    if ((((puVar3 != (undefined8 *)0x0) && (lVar5 != 0)) &&
        (lVar6 = BIO_push(lVar5,param_1), lVar6 != 0)) &&
       (((iVar2 = BIO_asn1_set_prefix(lVar5,FUN_14f7cb7e0,FUN_14f7cb8c0), lVar7 = lVar5, 0 < iVar2
         && (iVar2 = BIO_asn1_set_suffix(lVar5,FUN_14f7cb950,FUN_14f7cba80), 0 < iVar2)) &&
        (iVar2 = BIO_ctrl(lVar5,0x99,0,puVar3), 0 < iVar2)))) {
      local_30 = 0;
      uStack_28 = 0;
      local_38 = lVar6;
      iVar2 = (**(code **)(lVar1 + 0x18))(10,&local_res10,param_3,&local_38);
      if (0 < iVar2) {
        *puVar3 = local_res10;
        puVar3[1] = param_3;
        puVar3[2] = local_30;
        puVar3[4] = uStack_28;
        puVar3[3] = lVar6;
        return local_30;
      }
      puVar3 = (undefined8 *)0x0;
    }
    BIO_pop(lVar7);
    BIO_free(lVar5);
    CRYPTO_free(puVar3,"crypto\\asn1\\bio_ndef.c",0x7d);
    return 0;
  }
  ERR_put_error(0xd,0xd0,0xca,"crypto\\asn1\\bio_ndef.c",0x43);
  return 0;
}

// FUN_14f7cb7e0 @ 14f7cb7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7cb7e0(undefined8 param_1,longlong *param_2,int *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong local_res20;
  undefined8 uVar3;
  
  uVar3 = 0x14f7cb7f0;
  if (param_4 == (longlong *)0x0) {
    return 0;
  }
  puVar1 = (undefined8 *)*param_4;
  iVar2 = ASN1_item_ndef_i2d(*puVar1,0,puVar1[1]);
  if (-1 < iVar2) {
    local_res20 = CRYPTO_malloc((longlong)iVar2,"crypto\\asn1\\bio_ndef.c",0x8f);
    if (local_res20 == 0) {
      ERR_put_error(0xd,0x7f,0x41,"crypto\\asn1\\bio_ndef.c",0x90,uVar3);
    }
    else {
      puVar1[5] = local_res20;
      *param_2 = local_res20;
      ASN1_item_ndef_i2d(*puVar1,&local_res20,puVar1[1]);
      if (*(longlong *)puVar1[4] != 0) {
        *param_3 = (int)*(longlong *)puVar1[4] - (int)*param_2;
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f7cb8c0 @ 14f7cb8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7cb8c0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,longlong *param_4)

{
  longlong lVar1;
  
  if (param_4 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = *param_4;
  if (lVar1 == 0) {
    return 0;
  }
  CRYPTO_free(*(undefined8 *)(lVar1 + 0x28),"crypto\\asn1\\bio_ndef.c",0xad);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *param_2 = 0;
  *param_3 = 0;
  return 1;
}

// FUN_14f7cb950 @ 14f7cb950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7cb950(undefined8 param_1,longlong *param_2,int *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong local_res20;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7cb960;
  if (param_4 == (longlong *)0x0) {
    return 0;
  }
  puVar1 = (undefined8 *)*param_4;
  local_20 = puVar1[2];
  local_28 = puVar1[3];
  local_18 = puVar1[4];
  iVar2 = (**(code **)(*(longlong *)(puVar1[1] + 0x18) + 0x18))(0xb,puVar1,puVar1[1],&local_28);
  if (0 < iVar2) {
    iVar2 = ASN1_item_ndef_i2d(*puVar1,0,puVar1[1]);
    local_res20 = CRYPTO_malloc((longlong)iVar2,"crypto\\asn1\\bio_ndef.c",0xd8);
    if (local_res20 == 0) {
      ERR_put_error(0xd,0x88,0x41,"crypto\\asn1\\bio_ndef.c",0xd9);
    }
    else {
      puVar1[5] = local_res20;
      *param_2 = local_res20;
      iVar2 = ASN1_item_ndef_i2d(*puVar1,&local_res20,puVar1[1]);
      if (*(longlong *)puVar1[4] != 0) {
        *param_2 = *(longlong *)puVar1[4];
        *param_3 = (iVar2 - *(int *)puVar1[4]) + *(int *)(puVar1 + 5);
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f7cba80 @ 14f7cba80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7cba80(void)

{
  undefined8 uVar1;
  undefined8 *in_R9;
  
  uVar1 = FUN_14f7cb8c0();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  CRYPTO_free(*in_R9,"crypto\\asn1\\bio_ndef.c",0xbb);
  *in_R9 = 0;
  return 1;
}

