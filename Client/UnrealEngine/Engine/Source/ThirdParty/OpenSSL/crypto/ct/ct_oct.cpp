// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// d2i_SCT_LIST @ 14f6d0660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_SCT_LIST(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong local_res10;
  int *local_res20;
  
  local_res10 = *param_2;
  local_res20 = (int *)0x0;
  lVar1 = d2i_ASN1_OCTET_STRING(&local_res20,&local_res10,param_3);
  if (lVar1 == 0) {
    return 0;
  }
  local_res10 = *(longlong *)(local_res20 + 2);
  lVar1 = o2i_SCT_LIST(param_1,&local_res10,(longlong)*local_res20);
  if (lVar1 != 0) {
    *param_2 = *param_2 + (longlong)param_3;
  }
  ASN1_OCTET_STRING_free(local_res20);
  return lVar1;
}

// i2d_SCT_LIST @ 14f6d0710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 i2d_SCT_LIST(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int local_28 [2];
  undefined8 local_20 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6d071c;
  local_20[0] = 0;
  local_28[0] = i2o_SCT_LIST(param_1,local_20);
  if (local_28[0] == -1) {
    return 0xffffffff;
  }
  uVar1 = i2d_ASN1_OCTET_STRING(local_28,param_2);
  CRYPTO_free(local_20[0],"crypto\\ct\\ct_oct.c",0x195);
  return uVar1;
}

// i2o_SCT @ 14f6d0780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2o_SCT(int *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *local_res18 [2];
  undefined8 uVar10;
  
  uVar10 = 0x14f6d0798;
  iVar5 = SCT_is_complete();
  if (iVar5 == 0) {
    ERR_put_error(0x32,0x6b,0x6a,"crypto\\ct\\ct_oct.c",0xce,uVar10);
    puVar6 = (undefined1 *)0x0;
LAB_14f6d08a0:
    CRYPTO_free(puVar6,"crypto\\ct\\ct_oct.c",0xfd);
    uVar9 = 0xffffffff;
  }
  else {
    if (*param_1 == 0) {
      uVar9 = *(longlong *)(param_1 + 0xe) + 0x2f + *(longlong *)(param_1 + 0x14);
    }
    else {
      uVar9 = *(ulonglong *)(param_1 + 4);
    }
    if (param_2 != (longlong *)0x0) {
      puVar7 = (undefined1 *)*param_2;
      if (puVar7 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)CRYPTO_malloc(uVar9,"crypto\\ct\\ct_oct.c",0xe3);
        puVar7 = puVar6;
        puVar8 = puVar6;
        if (puVar6 == (undefined1 *)0x0) {
          ERR_put_error(0x32,0x6b,0x41,"crypto\\ct\\ct_oct.c",0xe5,uVar10);
          goto LAB_14f6d08a0;
        }
      }
      else {
        puVar6 = puVar7 + uVar9;
        puVar8 = (undefined1 *)0x0;
      }
      *param_2 = (longlong)puVar6;
      if (*param_1 == 0) {
        *puVar7 = (char)*param_1;
        puVar1 = *(undefined4 **)(param_1 + 6);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *(undefined4 *)(puVar7 + 1) = *puVar1;
        *(undefined4 *)(puVar7 + 5) = uVar2;
        *(undefined4 *)(puVar7 + 9) = uVar3;
        *(undefined4 *)(puVar7 + 0xd) = uVar4;
        uVar10 = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(puVar7 + 0x11) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(puVar7 + 0x19) = uVar10;
        puVar7[0x21] = *(undefined1 *)((longlong)param_1 + 0x2f);
        puVar7[0x22] = *(undefined1 *)((longlong)param_1 + 0x2e);
        puVar7[0x23] = *(undefined1 *)((longlong)param_1 + 0x2d);
        puVar7[0x24] = (char)param_1[0xb];
        puVar7[0x25] = *(undefined1 *)((longlong)param_1 + 0x2b);
        puVar7[0x26] = *(undefined1 *)((longlong)param_1 + 0x2a);
        puVar7[0x27] = *(undefined1 *)((longlong)param_1 + 0x29);
        puVar7[0x28] = (char)param_1[10];
        puVar7[0x29] = *(undefined1 *)((longlong)param_1 + 0x39);
        puVar7[0x2a] = (char)param_1[0xe];
        puVar7 = puVar7 + 0x2b;
        local_res18[0] = puVar7;
        if (*(size_t *)(param_1 + 0xe) != 0) {
          memcpy(puVar7,*(void **)(param_1 + 0xc),*(size_t *)(param_1 + 0xe));
          local_res18[0] = puVar7 + *(longlong *)(param_1 + 0xe);
        }
        iVar5 = i2o_SCT_signature(param_1,local_res18);
        puVar6 = puVar8;
        if (iVar5 < 1) goto LAB_14f6d08a0;
      }
      else {
        memcpy(puVar7,*(void **)(param_1 + 2),uVar9);
      }
    }
    uVar9 = uVar9 & 0xffffffff;
  }
  return uVar9;
}

// i2o_SCT_LIST @ 14f6d0930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2o_SCT_LIST(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 local_res18;
  undefined1 *local_res20;
  
  puVar8 = (undefined1 *)0x0;
  bVar1 = false;
  if (param_2 != (longlong *)0x0) {
    if (*param_2 == 0) {
      iVar2 = i2o_SCT_LIST(param_1,0);
      if (iVar2 == -1) {
        ERR_put_error(0x32,0x6c,0x69,"crypto\\ct\\ct_oct.c",0x14a);
        return 0xffffffff;
      }
      lVar4 = CRYPTO_malloc((longlong)iVar2,"crypto\\ct\\ct_oct.c",0x14d);
      *param_2 = lVar4;
      if (lVar4 == 0) {
        ERR_put_error(0x32,0x6c,0x41,"crypto\\ct\\ct_oct.c",0x14e);
        return 0xffffffff;
      }
      bVar1 = true;
    }
    puVar8 = (undefined1 *)(*param_2 + 2);
  }
  iVar2 = 0;
  local_res18 = (undefined1 *)((ulonglong)local_res18._4_4_ << 0x20);
  uVar7 = 2;
  iVar3 = OPENSSL_sk_num(param_1);
  if (0 < iVar3) {
    do {
      if (param_2 == (longlong *)0x0) {
        piVar6 = (int *)OPENSSL_sk_value(param_1,iVar2);
        iVar2 = SCT_is_complete(piVar6);
        if (iVar2 == 0) {
          ERR_put_error(0x32,0x6b,0x6a,"crypto\\ct\\ct_oct.c",0xce);
          CRYPTO_free(0,"crypto\\ct\\ct_oct.c",0xfd);
          goto LAB_14f6d0b3a;
        }
        if (*piVar6 == 0) {
          iVar3 = (int)*(undefined8 *)(piVar6 + 0xe) + 0x2f + (int)*(undefined8 *)(piVar6 + 0x14);
        }
        else {
          iVar3 = (int)*(undefined8 *)(piVar6 + 4);
        }
        if (iVar3 == -1) goto LAB_14f6d0b3a;
        iVar2 = (int)local_res18;
      }
      else {
        local_res18 = puVar8 + 2;
        local_res20 = puVar8;
        uVar5 = OPENSSL_sk_value(param_1,iVar2);
        iVar3 = i2o_SCT(uVar5,&local_res18);
        if (iVar3 == -1) goto LAB_14f6d0b3a;
        *local_res20 = (char)((uint)iVar3 >> 8);
        local_res20[1] = (char)iVar3;
        puVar8 = local_res18;
      }
      iVar2 = iVar2 + 1;
      uVar7 = uVar7 + (longlong)(iVar3 + 2);
      local_res18 = (undefined1 *)CONCAT44(local_res18._4_4_,iVar2);
      iVar3 = OPENSSL_sk_num(param_1);
    } while (iVar2 < iVar3);
    if (0xffff < uVar7) {
LAB_14f6d0b3a:
      if (bVar1) {
        CRYPTO_free(*param_2,"crypto\\ct\\ct_oct.c",0x172);
        *param_2 = 0;
      }
      return 0xffffffff;
    }
  }
  if (param_2 != (longlong *)0x0) {
    puVar8 = (undefined1 *)*param_2;
    *puVar8 = (char)(uVar7 - 2 >> 8);
    puVar8[1] = (char)uVar7 + -2;
    if (!bVar1) {
      *param_2 = *param_2 + uVar7;
    }
  }
  return uVar7 & 0xffffffff;
}

// i2o_SCT_signature @ 14f6d0b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2o_SCT_signature(int *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6d0b9b;
  iVar1 = SCT_signature_is_complete();
  if (iVar1 == 0) {
    uVar6 = 0x9f;
    uVar5 = 0x6b;
  }
  else {
    if (*param_1 == 0) {
      uVar4 = *(longlong *)(param_1 + 0x14) + 4;
      if (param_2 != (longlong *)0x0) {
        puVar3 = (undefined1 *)*param_2;
        if (puVar3 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)CRYPTO_malloc(uVar4,"crypto\\ct\\ct_oct.c",0xb4);
          puVar3 = puVar2;
          if (puVar2 == (undefined1 *)0x0) {
            uVar6 = 0xb6;
            uVar5 = 0x41;
            goto LAB_14f6d0c60;
          }
        }
        else {
          puVar2 = puVar3 + uVar4;
        }
        *param_2 = (longlong)puVar2;
        *puVar3 = (char)param_1[0x10];
        puVar3[1] = *(undefined1 *)((longlong)param_1 + 0x41);
        puVar3[2] = *(undefined1 *)((longlong)param_1 + 0x51);
        puVar3[3] = (char)param_1[0x14];
        memcpy(puVar3 + 4,*(void **)(param_1 + 0x12),*(size_t *)(param_1 + 0x14));
      }
      return uVar4 & 0xffffffff;
    }
    uVar6 = 0xa4;
    uVar5 = 0x67;
  }
LAB_14f6d0c60:
  ERR_put_error(0x32,0x6d,uVar5,"crypto\\ct\\ct_oct.c",uVar6,uVar7);
  CRYPTO_free(0,"crypto\\ct\\ct_oct.c",0xc4);
  return 0xffffffff;
}

// o2i_SCT @ 14f6d0ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * o2i_SCT(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  byte *local_res18;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6d0cbe;
  puVar5 = (uint *)0x0;
  if (param_3 - 1 < 0xffff) {
    puVar5 = (uint *)SCT_new();
    if (puVar5 == (uint *)0x0) goto LAB_14f6d0e92;
    pbVar2 = (byte *)*param_2;
    bVar1 = *pbVar2;
    *puVar5 = (uint)bVar1;
    if (bVar1 != 0) {
      lVar4 = CRYPTO_memdup(pbVar2,param_3,"crypto\\ct\\ct_oct.c",0x87);
      *(longlong *)(puVar5 + 2) = lVar4;
      if (lVar4 != 0) {
        *(ulonglong *)(puVar5 + 4) = param_3;
        *param_2 = (longlong)(pbVar2 + param_3);
LAB_14f6d0e5c:
        if (param_1 == (longlong *)0x0) {
          return puVar5;
        }
        SCT_free(*param_1);
        *param_1 = (longlong)puVar5;
        return puVar5;
      }
      goto LAB_14f6d0e92;
    }
    if (param_3 < 0x2b) {
      uVar7 = 99;
    }
    else {
      lVar4 = CRYPTO_memdup(pbVar2 + 1,0x20,"crypto\\ct\\ct_oct.c");
      *(longlong *)(puVar5 + 6) = lVar4;
      if (lVar4 == 0) goto LAB_14f6d0e92;
      puVar5[8] = 0x20;
      puVar5[9] = 0;
      *(ulonglong *)(puVar5 + 10) = (ulonglong)pbVar2[0x21] << 0x38;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x22] << 0x30;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x23] << 0x28;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x24] << 0x20;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x25] << 0x18;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x26] << 0x10;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x27] << 8;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x28];
      uVar6 = (ulonglong)CONCAT11(pbVar2[0x29],pbVar2[0x2a]);
      if (param_3 - 0x2b < uVar6) {
        uVar7 = 0x72;
      }
      else {
        if (uVar6 != 0) {
          lVar4 = CRYPTO_memdup(pbVar2 + 0x2b,uVar6,"crypto\\ct\\ct_oct.c",0x76);
          *(longlong *)(puVar5 + 0xc) = lVar4;
          if (lVar4 == 0) goto LAB_14f6d0e92;
        }
        lVar4 = (param_3 - 0x2b) - uVar6;
        *(ulonglong *)(puVar5 + 0xe) = uVar6;
        local_res18 = pbVar2 + 0x2b + uVar6;
        iVar3 = o2i_SCT_signature(puVar5,&local_res18,lVar4);
        if (0 < iVar3) {
          *param_2 = (longlong)(local_res18 + (lVar4 - iVar3));
          goto LAB_14f6d0e5c;
        }
        uVar7 = 0x80;
      }
    }
  }
  else {
    uVar7 = 0x4c;
  }
  ERR_put_error(0x32,0x6e,0x68,"crypto\\ct\\ct_oct.c",uVar7,uVar8);
LAB_14f6d0e92:
  SCT_free(puVar5);
  return (uint *)0x0;
}

// o2i_SCT_LIST @ 14f6d0ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong o2i_SCT_LIST(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6d0ed1;
  if (0xfffd < param_3 - 2U) {
    ERR_put_error(0x32,0x6f,0x69,"crypto\\ct\\ct_oct.c",0x108,0x14f6d0ed1);
    return 0;
  }
  puVar1 = (undefined1 *)*param_2;
  uVar5 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
  *param_2 = (longlong)(puVar1 + 2);
  if (uVar5 != param_3 - 2U) {
    ERR_put_error(0x32,0x6f,0x69,"crypto\\ct\\ct_oct.c",0x10e,0x14f6d0ed1);
    return 0;
  }
  if ((param_1 == (longlong *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
    lVar4 = OPENSSL_sk_new_null();
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    lVar3 = OPENSSL_sk_pop(lVar4);
    while (lVar3 != 0) {
      SCT_free(lVar3);
      lVar3 = OPENSSL_sk_pop(lVar4);
    }
  }
  do {
    if (uVar5 == 0) {
      if (param_1 == (longlong *)0x0) {
        return lVar4;
      }
      if (*param_1 != 0) {
        return lVar4;
      }
      *param_1 = lVar4;
      return lVar4;
    }
    if (uVar5 < 2) {
      uVar7 = 0x123;
LAB_14f6d1049:
      ERR_put_error(0x32,0x6f,0x69,"crypto\\ct\\ct_oct.c",uVar7,uVar8);
      goto LAB_14f6d1062;
    }
    puVar1 = (undefined1 *)*param_2;
    uVar6 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    *param_2 = (longlong)(puVar1 + 2);
    if ((uVar6 == 0) || (uVar5 - 2 < uVar6)) {
      uVar7 = 0x12a;
      goto LAB_14f6d1049;
    }
    uVar5 = (uVar5 - 2) - uVar6;
    lVar3 = o2i_SCT(0,param_2);
    if (lVar3 == 0) goto LAB_14f6d1062;
    iVar2 = OPENSSL_sk_push(lVar4,lVar3);
  } while (iVar2 != 0);
  SCT_free(lVar3);
LAB_14f6d1062:
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    SCT_LIST_free(lVar4);
  }
  return 0;
}

// o2i_SCT_signature @ 14f6d10b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong o2i_SCT_signature(int *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6d10c0;
  if (*param_1 != 0) {
    ERR_put_error(0x32,0x70,0x67,"crypto\\ct\\ct_oct.c",0x1f,0x14f6d10c0);
    return 0xffffffff;
  }
  if (4 < param_3) {
    puVar1 = (undefined1 *)*param_2;
    *(undefined1 *)(param_1 + 0x10) = *puVar1;
    *(undefined1 *)((longlong)param_1 + 0x41) = puVar1[1];
    iVar2 = SCT_get_signature_nid();
    if (iVar2 == 0) {
      ERR_put_error(0x32,0x70,0x6b,"crypto\\ct\\ct_oct.c",0x33,uVar6);
      return 0xffffffff;
    }
    puVar3 = puVar1 + 4;
    uVar4 = (*param_2 - (longlong)puVar3) + param_3;
    uVar5 = (ulonglong)CONCAT11(puVar1[2],puVar1[3]);
    if (uVar4 < uVar5) {
      ERR_put_error(0x32,0x70,0x6b,"crypto\\ct\\ct_oct.c",0x3a,uVar6);
    }
    else {
      iVar2 = SCT_set1_signature(param_1,puVar3,uVar5);
      if (iVar2 == 1) {
        *param_2 = (longlong)(puVar3 + uVar5);
        return param_3 + (uVar5 - uVar4);
      }
    }
    return 0xffffffff;
  }
  ERR_put_error(0x32,0x70,0x6b,"crypto\\ct\\ct_oct.c",0x2a,0x14f6d10c0);
  return 0xffffffff;
}

// FUN_14f6d1210 @ 14f6d1210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1210(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6d1230 @ 14f6d1230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1230(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6d1250 @ 14f6d1250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1250(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f6d1270 @ 14f6d1270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1270(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6d1290 @ 14f6d1290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d1290(void)

{
  OPENSSL_sk_value();
  return;
}

