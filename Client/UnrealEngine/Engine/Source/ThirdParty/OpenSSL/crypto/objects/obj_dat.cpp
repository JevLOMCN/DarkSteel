// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 32

// OBJ_add_object @ 14f6c9700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 OBJ_add_object(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6c9710;
  local_38[4] = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar6 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  if ((DAT_1553e2ad8 == 0) &&
     (DAT_1553e2ad8 = OPENSSL_LH_new(FUN_14f6cabb0,FUN_14f6caac0), DAT_1553e2ad8 == 0)) {
    return 0;
  }
  plVar3 = (longlong *)OBJ_dup(param_1);
  if (plVar3 == (longlong *)0x0) goto LAB_14f6c9893;
  local_38[3] = CRYPTO_malloc(0x10,"crypto\\objects\\obj_dat.c",0xb9);
  if (local_38[3] != 0) {
    if ((*(int *)((longlong)plVar3 + 0x14) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      local_38[0] = CRYPTO_malloc(0x10,"crypto\\objects\\obj_dat.c",0xbc);
      if (local_38[0] == 0) goto LAB_14f6c9873;
    }
    if (*plVar3 != 0) {
      local_38[1] = CRYPTO_malloc(0x10,"crypto\\objects\\obj_dat.c",0xbf);
      if (local_38[1] == 0) goto LAB_14f6c9873;
    }
    if (plVar3[1] == 0) {
LAB_14f6c982a:
      plVar7 = local_38;
      do {
        lVar2 = DAT_1553e2ad8;
        piVar1 = (int *)*plVar7;
        if (piVar1 != (int *)0x0) {
          *piVar1 = (int)uVar6;
          *(longlong **)(piVar1 + 2) = plVar3;
          uVar4 = OPENSSL_LH_insert(lVar2);
          CRYPTO_free(uVar4,"crypto\\objects\\obj_dat.c",0xcb);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        plVar7 = plVar7 + 1;
      } while ((int)uVar5 < 4);
      *(uint *)(plVar3 + 4) = *(uint *)(plVar3 + 4) & 0xfffffff2;
      return (int)plVar3[2];
    }
    local_38[2] = CRYPTO_malloc(0x10,"crypto\\objects\\obj_dat.c",0xc2);
    if (local_38[2] != 0) goto LAB_14f6c982a;
  }
LAB_14f6c9873:
  local_48 = 0xd4;
  ERR_put_error(8,0x69,0x41,"crypto\\objects\\obj_dat.c");
LAB_14f6c9893:
  do {
    CRYPTO_free(local_38[uVar6],"crypto\\objects\\obj_dat.c",0xd7);
    uVar6 = uVar6 + 1;
  } while ((longlong)uVar6 < 4);
  ASN1_OBJECT_free(plVar3);
  return 0;
}

// OBJ_bsearch_ @ 14f6c98f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_bsearch_(void)

{
  OBJ_bsearch_ex_();
  return;
}

// OBJ_bsearch_ex_ @ 14f6c9920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OBJ_bsearch_ex_(undefined8 param_1,longlong param_2,int param_3,int param_4,code *param_5,
                        byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = 0;
  lVar5 = 0;
  if (param_3 == 0) {
    return 0;
  }
  iVar4 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (param_3 + iVar4) / 2;
      lVar5 = iVar1 * param_4 + param_2;
      iVar2 = (*param_5)(param_1,lVar5);
      iVar3 = iVar1;
      if (-1 < iVar2) {
        if (iVar2 < 1) break;
        iVar4 = iVar1 + 1;
        iVar3 = param_3;
      }
      param_3 = iVar3;
    } while (iVar4 < param_3);
    if (iVar2 != 0) {
      if ((param_6 & 1) != 0) {
        return lVar5;
      }
      return 0;
    }
  }
  if ((param_6 & 2) != 0) {
    if (0 < iVar1) {
      iVar4 = (iVar1 + -1) * param_4;
      do {
        iVar3 = (*param_5)(param_1,iVar4 + param_2);
        if (iVar3 != 0) break;
        iVar1 = iVar1 + -1;
        iVar4 = iVar4 - param_4;
      } while (0 < iVar1);
    }
    lVar5 = iVar1 * param_4 + param_2;
  }
  return lVar5;
}

// FUN_14f6c9a20 @ 14f6c9a20

uint * FUN_14f6c9a20(longlong *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar5 = (uint *)0x0;
  puVar6 = puVar5;
  if ((param_3 != 0) && (0 < param_3)) {
    puVar7 = puVar5;
    do {
      iVar2 = (param_3 + (int)puVar7) / 2;
      puVar6 = (uint *)(iVar2 * 4 + param_2);
      pbVar4 = *(byte **)(*param_1 + 8);
      do {
        bVar1 = *pbVar4;
        if (bVar1 != pbVar4[(longlong)(&PTR_s_undefined_15348fc18)[(ulonglong)*puVar6 * 5] -
                            (longlong)*(byte **)(*param_1 + 8)]) {
          uVar3 = -(uint)(bVar1 < pbVar4[(longlong)
                                         (&PTR_s_undefined_15348fc18)[(ulonglong)*puVar6 * 5] -
                                         (longlong)*(byte **)(*param_1 + 8)]) | 1;
          goto LAB_14f6c9aa9;
        }
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_14f6c9aa9:
      if (-1 < (int)uVar3) {
        if ((int)uVar3 < 1) break;
        puVar7 = (uint *)(ulonglong)(iVar2 + 1);
        iVar2 = param_3;
      }
      param_3 = iVar2;
    } while ((int)puVar7 < param_3);
    if (uVar3 != 0) {
      puVar6 = puVar5;
    }
  }
  return puVar6;
}

// FUN_14f6c9af0 @ 14f6c9af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * FUN_14f6c9af0(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  iVar6 = 0;
  if (param_3 == 0) {
    return (uint *)0x0;
  }
  puVar5 = (uint *)0x0;
  if (0 < param_3) {
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0x14);
    do {
      iVar3 = (param_3 + iVar6) / 2;
      puVar5 = (uint *)(iVar3 * 4 + param_2);
      iVar4 = iVar1 - *(int *)(&DAT_15348fc24 + (ulonglong)*puVar5 * 0x28);
      if (iVar4 == 0) {
        if (iVar1 == 0) {
          return puVar5;
        }
        iVar4 = memcmp(*(void **)(lVar2 + 0x18),
                       *(void **)(&DAT_15348fc28 + (ulonglong)*puVar5 * 0x28),(longlong)iVar1);
      }
      if (-1 < iVar4) {
        if (iVar4 < 1) break;
        iVar6 = iVar3 + 1;
        iVar3 = param_3;
      }
      param_3 = iVar3;
    } while (iVar6 < param_3);
    if (iVar4 != 0) {
      puVar5 = (uint *)0x0;
    }
  }
  return puVar5;
}

// FUN_14f6c9be0 @ 14f6c9be0

uint * FUN_14f6c9be0(undefined8 *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar5 = (uint *)0x0;
  puVar6 = puVar5;
  if ((param_3 != 0) && (0 < param_3)) {
    puVar7 = puVar5;
    do {
      iVar2 = (param_3 + (int)puVar7) / 2;
      puVar6 = (uint *)(iVar2 * 4 + param_2);
      pbVar4 = *(byte **)*param_1;
      do {
        bVar1 = *pbVar4;
        if (bVar1 != pbVar4[(longlong)(&PTR_s_UNDEF_15348fc10)[(ulonglong)*puVar6 * 5] -
                            (longlong)*(byte **)*param_1]) {
          uVar3 = -(uint)(bVar1 < pbVar4[(longlong)(&PTR_s_UNDEF_15348fc10)[(ulonglong)*puVar6 * 5]
                                         - (longlong)*(byte **)*param_1]) | 1;
          goto LAB_14f6c9c69;
        }
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_14f6c9c69:
      if (-1 < (int)uVar3) {
        if ((int)uVar3 < 1) break;
        puVar7 = (uint *)(ulonglong)(iVar2 + 1);
        iVar2 = param_3;
      }
      param_3 = iVar2;
    } while ((int)puVar7 < param_3);
    if (uVar3 != 0) {
      puVar6 = puVar5;
    }
  }
  return puVar6;
}

// OBJ_create @ 14f6c9cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 OBJ_create(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6c9cca;
  uVar2 = 0;
  if (((param_2 == 0) || (iVar1 = OBJ_sn2nid(param_2), iVar1 == 0)) &&
     ((param_3 == 0 || (iVar1 = OBJ_ln2nid(param_3), iVar1 == 0)))) {
    plVar3 = (longlong *)OBJ_txt2obj(param_1,1);
    if (plVar3 != (longlong *)0x0) {
      iVar1 = OBJ_obj2nid(plVar3);
      if (iVar1 == 0) {
        *(int *)(plVar3 + 2) = DAT_154df86b0;
        DAT_154df86b0 = DAT_154df86b0 + 1;
        *plVar3 = param_2;
        plVar3[1] = param_3;
        uVar2 = OBJ_add_object(plVar3);
        *plVar3 = 0;
        plVar3[1] = 0;
      }
      else {
        ERR_put_error(8,100,0x66,"crypto\\objects\\obj_dat.c",0x2c6,uVar4);
      }
      ASN1_OBJECT_free(plVar3);
      return uVar2;
    }
  }
  else {
    ERR_put_error(8,100,0x66,"crypto\\objects\\obj_dat.c",699,uVar4);
  }
  return 0;
}

// OBJ_create_objects @ 14f6c9dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int OBJ_create_objects(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_248 [32];
  char local_228 [512];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14f6c9dd8;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_248;
  iVar4 = 0;
  pcVar5 = (char *)0x0;
  iVar1 = BIO_gets(param_1,local_228,0x200);
  do {
    if (iVar1 < 1) {
      return iVar4;
    }
    if (0x1ff < (ulonglong)(longlong)(iVar1 + -1)) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_228[iVar1 + -1] = '\0';
    iVar1 = ossl_ctype_check((int)local_228[0],7);
    if (iVar1 == 0) {
      return iVar4;
    }
    for (pcVar2 = local_228;
        (iVar1 = ossl_ctype_check((int)*pcVar2,4), iVar1 != 0 || (*pcVar2 == '.'));
        pcVar2 = pcVar2 + 1) {
    }
    if (*pcVar2 == '\0') {
LAB_14f6c9f04:
      pcVar3 = (char *)0x0;
    }
    else {
      *pcVar2 = '\0';
      iVar1 = ossl_ctype_check((int)pcVar2[1],8);
      while (pcVar3 = pcVar2 + 1, iVar1 != 0) {
        iVar1 = ossl_ctype_check((int)pcVar2[2],8);
        pcVar2 = pcVar3;
      }
      pcVar2 = pcVar3;
      if (*pcVar3 == '\0') goto LAB_14f6c9f04;
      do {
        iVar1 = ossl_ctype_check((int)*pcVar2,8);
        if (iVar1 != 0) break;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      if (*pcVar2 == '\0') {
        pcVar5 = (char *)0x0;
      }
      else {
        *pcVar2 = '\0';
        iVar1 = ossl_ctype_check((int)pcVar2[1],8);
        while (pcVar2 = pcVar2 + 1, iVar1 != 0) {
          iVar1 = ossl_ctype_check((int)pcVar2[1],8);
        }
        pcVar5 = (char *)0x0;
        if (*pcVar2 != '\0') {
          pcVar5 = pcVar2;
        }
      }
    }
    if (local_228[0] == '\0') {
      return iVar4;
    }
    iVar1 = OBJ_create(local_228,pcVar3,pcVar5);
    if (iVar1 == 0) {
      return iVar4;
    }
    iVar4 = iVar4 + 1;
    iVar1 = BIO_gets(param_1,local_228,0x200);
  } while( true );
}

// OBJ_get0_data @ 14f6c9f80

undefined8 OBJ_get0_data(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x18);
}

// OBJ_length @ 14f6c9fa0

longlong OBJ_length(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return (longlong)*(int *)(param_1 + 0x14);
}

// OBJ_ln2nid @ 14f6c9fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 OBJ_ln2nid(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [8];
  byte *local_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6c9fcc;
  if (DAT_1553e2ad8 != 0) {
    local_40 = local_38;
    local_48[0] = 2;
    local_30 = param_1;
    lVar4 = OPENSSL_LH_retrieve(DAT_1553e2ad8,local_48);
    param_1 = local_30;
    if (lVar4 != 0) {
      return *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x10);
    }
  }
  iVar7 = 0;
  iVar8 = 0x4a2;
  do {
    iVar2 = (iVar8 + iVar7) / 2;
    puVar6 = (uint *)(&DAT_15349c960 + iVar2 * 4);
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar5;
      if (bVar1 != pbVar5[(longlong)(&PTR_s_undefined_15348fc18)[(ulonglong)*puVar6 * 5] -
                          (longlong)param_1]) {
        uVar3 = -(uint)(bVar1 < pbVar5[(longlong)
                                       (&PTR_s_undefined_15348fc18)[(ulonglong)*puVar6 * 5] -
                                       (longlong)param_1]) | 1;
        goto LAB_14f6ca089;
      }
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_14f6ca089:
    if (-1 < (int)uVar3) {
      if ((int)uVar3 < 1) break;
      iVar7 = iVar2 + 1;
      iVar2 = iVar8;
    }
    iVar8 = iVar2;
  } while (iVar7 < iVar8);
  if ((uVar3 == 0) && (puVar6 != (uint *)0x0)) {
    return *(undefined4 *)(&DAT_15348fc20 + (ulonglong)*puVar6 * 0x28);
  }
  return 0;
}

// OBJ_nid2ln @ 14f6ca110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * OBJ_nid2ln(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6ca11a;
  if (param_1 < 0x4ab) {
    if ((param_1 == 0) || (*(int *)(&DAT_15348fc20 + (longlong)(int)param_1 * 0x28) != 0)) {
      return (&PTR_s_undefined_15348fc18)[(longlong)(int)param_1 * 5];
    }
    uVar2 = 0x11a;
  }
  else {
    if (DAT_1553e2ad8 == 0) {
      return (undefined *)0x0;
    }
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = OPENSSL_LH_retrieve(DAT_1553e2ad8,local_48);
    if (lVar1 != 0) {
      return *(undefined **)(*(longlong *)(lVar1 + 8) + 8);
    }
    uVar2 = 0x128;
  }
  ERR_put_error(8,0x66,0x65,"crypto\\objects\\obj_dat.c",uVar2);
  return (undefined *)0x0;
}

// OBJ_nid2obj @ 14f6ca1d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined ** OBJ_nid2obj(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6ca1da;
  if (param_1 < 0x4ab) {
    if ((param_1 == 0) || (*(int *)(&DAT_15348fc20 + (longlong)(int)param_1 * 0x28) != 0)) {
      return &PTR_s_UNDEF_15348fc10 + (longlong)(int)param_1 * 5;
    }
    uVar2 = 0xe3;
  }
  else if (DAT_1553e2ad8 == 0) {
    uVar2 = 0xe8;
  }
  else {
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = OPENSSL_LH_retrieve(DAT_1553e2ad8,local_48);
    if (lVar1 != 0) {
      return *(undefined ***)(lVar1 + 8);
    }
    uVar2 = 0xf2;
  }
  ERR_put_error(8,0x67,0x65,"crypto\\objects\\obj_dat.c",uVar2);
  return (undefined **)0x0;
}

// OBJ_nid2sn @ 14f6ca290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * OBJ_nid2sn(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  uint local_28;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6ca29a;
  if (param_1 < 0x4ab) {
    if ((param_1 == 0) || (*(int *)(&DAT_15348fc20 + (longlong)(int)param_1 * 0x28) != 0)) {
      return (&PTR_s_UNDEF_15348fc10)[(longlong)(int)param_1 * 5];
    }
    uVar2 = 0xff;
  }
  else {
    if (DAT_1553e2ad8 == 0) {
      return (undefined *)0x0;
    }
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = param_1;
    lVar1 = OPENSSL_LH_retrieve(DAT_1553e2ad8,local_48);
    if (lVar1 != 0) {
      return (undefined *)**(undefined8 **)(lVar1 + 8);
    }
    uVar2 = 0x10d;
  }
  ERR_put_error(8,0x68,0x65,"crypto\\objects\\obj_dat.c",uVar2);
  return (undefined *)0x0;
}

// OBJ_obj2nid @ 14f6ca350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int OBJ_obj2nid(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 local_38 [2];
  longlong local_30;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    iVar5 = 0;
    if (DAT_1553e2ad8 != 0) {
      local_38[0] = 0;
      local_30 = param_1;
      lVar4 = OPENSSL_LH_retrieve(DAT_1553e2ad8,local_38);
      if (lVar4 != 0) {
        return *(int *)(*(longlong *)(lVar4 + 8) + 0x10);
      }
    }
    iVar6 = 0x42f;
    iVar1 = *(int *)(param_1 + 0x14);
    do {
      iVar2 = (iVar6 + iVar5) / 2;
      puVar7 = (uint *)(&DAT_15349dbf0 + iVar2 * 4);
      iVar3 = iVar1 - *(int *)(&DAT_15348fc24 + (ulonglong)*puVar7 * 0x28);
      if (iVar3 == 0) {
        if (iVar1 == 0) goto LAB_14f6ca444;
        iVar3 = memcmp(*(void **)(param_1 + 0x18),
                       *(void **)(&DAT_15348fc28 + (ulonglong)*puVar7 * 0x28),(longlong)iVar1);
      }
      if (-1 < iVar3) {
        if (iVar3 < 1) break;
        iVar5 = iVar2 + 1;
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
    } while (iVar5 < iVar6);
    if (iVar3 == 0) {
LAB_14f6ca444:
      if (puVar7 != (uint *)0x0) {
        return *(int *)(&DAT_15348fc20 + (ulonglong)*puVar7 * 0x28);
      }
    }
    iVar5 = 0;
  }
  return iVar5;
}

// OBJ_obj2txt @ 14f6ca490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong OBJ_obj2txt(char *param_1,int param_2,longlong param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [32];
  uint local_78;
  int local_74;
  int local_70;
  char local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar12 = 0;
  uVar14 = (ulonglong)param_2;
  local_78 = 0;
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    *param_1 = '\0';
  }
  if ((param_3 == 0) || (*(longlong *)(param_3 + 0x18) == 0)) {
    return 0;
  }
  if (((param_4 == 0) && (iVar3 = OBJ_obj2nid(), iVar3 != 0)) &&
     ((lVar4 = OBJ_nid2ln(iVar3), lVar4 != 0 || (lVar4 = OBJ_nid2sn(), lVar4 != 0)))) {
    if (param_1 != (char *)0x0) {
      OPENSSL_strlcpy(param_1,lVar4,uVar14);
    }
    uVar12 = 0xffffffffffffffff;
    do {
      uVar12 = uVar12 + 1;
    } while (*(char *)(lVar4 + uVar12) != '\0');
  }
  else {
    lVar4 = 0;
    pbVar13 = *(byte **)(param_3 + 0x18);
    local_70 = 1;
    if (0 < *(int *)(param_3 + 0x14)) {
      uVar12 = 0xffffffffffffffff;
      local_74 = *(int *)(param_3 + 0x14);
      do {
        uVar11 = 0;
        bVar2 = false;
        while( true ) {
          bVar1 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          local_74 = local_74 + -1;
          if ((local_74 == 0) && ((char)bVar1 < '\0')) goto LAB_14f6ca7a1;
          if (bVar2) {
            iVar3 = BN_add_word(lVar4,bVar1 & 0x7f);
            if (iVar3 == 0) goto LAB_14f6ca7a1;
          }
          else {
            uVar11 = (ulonglong)((uint)uVar11 | bVar1 & 0x7f);
          }
          uVar10 = (uint)uVar11;
          if (-1 < (char)bVar1) break;
          if (bVar2) {
LAB_14f6ca60a:
            iVar3 = BN_lshift(lVar4,lVar4,7);
            if (iVar3 == 0) goto LAB_14f6ca7a1;
          }
          else {
            if (0x1ffffff < uVar10) {
              if (((lVar4 != 0) || (lVar4 = BN_new(), lVar4 != 0)) &&
                 (iVar3 = BN_set_word(lVar4,uVar11), iVar3 != 0)) {
                bVar2 = true;
                goto LAB_14f6ca60a;
              }
              goto LAB_14f6ca7a1;
            }
            uVar11 = (ulonglong)(uVar10 << 7);
          }
        }
        if (local_70 != 0) {
          local_70 = 0;
          if (uVar10 < 0x50) {
            uVar7 = uVar11 / 0x28;
            uVar11 = (ulonglong)(uVar10 + (int)uVar7 * -0x28);
          }
          else {
            uVar7 = 2;
            if (bVar2) {
              iVar3 = BN_sub_word(lVar4,0x50);
              if (iVar3 == 0) goto LAB_14f6ca7a1;
            }
            else {
              uVar11 = (ulonglong)(uVar10 - 0x50);
            }
          }
          if ((param_1 != (char *)0x0) && (1 < (int)uVar14)) {
            *param_1 = (char)uVar7 + '0';
            param_1 = param_1 + 1;
            uVar14 = (ulonglong)((int)uVar14 - 1);
            *param_1 = '\0';
          }
          local_78 = local_78 + 1;
        }
        iVar3 = (int)uVar14;
        if (bVar2) {
          lVar5 = BN_bn2dec(lVar4);
          if (lVar5 == 0) goto LAB_14f6ca7a1;
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(char *)(lVar5 + lVar8) != '\0');
          iVar6 = (int)lVar8;
          if (param_1 != (char *)0x0) {
            if (1 < iVar3) {
              *param_1 = '.';
              param_1 = param_1 + 1;
              iVar3 = iVar3 + -1;
              *param_1 = '\0';
            }
            OPENSSL_strlcpy(param_1,lVar5,(longlong)iVar3);
            if (iVar3 < iVar6) {
              param_1 = param_1 + iVar3;
              uVar14 = 0;
            }
            else {
              param_1 = param_1 + iVar6;
              uVar14 = (ulonglong)(uint)(iVar3 - iVar6);
            }
          }
          local_78 = local_78 + 1 + iVar6;
          CRYPTO_free(lVar5,"crypto\\objects\\obj_dat.c",0x1f8);
        }
        else {
          BIO_snprintf(local_68,0x1a,".%lu",uVar11);
          lVar5 = -1;
          do {
            lVar9 = lVar5 + 1;
            lVar8 = lVar5 + 1;
            lVar5 = lVar9;
          } while (local_68[lVar8] != '\0');
          iVar6 = (int)lVar9;
          if ((param_1 != (char *)0x0) && (0 < iVar3)) {
            OPENSSL_strlcpy(param_1,local_68,(longlong)iVar3);
            if (iVar3 < iVar6) {
              param_1 = param_1 + iVar3;
              uVar14 = 0;
            }
            else {
              param_1 = param_1 + iVar6;
              uVar14 = (ulonglong)(uint)(iVar3 - iVar6);
            }
          }
          local_78 = local_78 + iVar6;
        }
      } while (0 < local_74);
      uVar12 = (ulonglong)local_78;
    }
LAB_14f6ca7a1:
    BN_free(lVar4);
  }
  return uVar12 & 0xffffffff;
}

// OBJ_sn2nid @ 14f6ca7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 OBJ_sn2nid(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_48 [2];
  byte **local_40;
  byte *local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6ca7fc;
  if (DAT_1553e2ad8 != 0) {
    local_40 = local_38;
    local_48[0] = 1;
    local_38[0] = param_1;
    lVar4 = OPENSSL_LH_retrieve(DAT_1553e2ad8,local_48);
    param_1 = local_38[0];
    if (lVar4 != 0) {
      return *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x10);
    }
  }
  iVar7 = 0;
  iVar8 = 0x4a2;
  do {
    iVar2 = (iVar8 + iVar7) / 2;
    puVar6 = (uint *)(&DAT_15349b6d0 + iVar2 * 4);
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar5;
      if (bVar1 != pbVar5[(longlong)(&PTR_s_UNDEF_15348fc10)[(ulonglong)*puVar6 * 5] -
                          (longlong)param_1]) {
        uVar3 = -(uint)(bVar1 < pbVar5[(longlong)(&PTR_s_UNDEF_15348fc10)[(ulonglong)*puVar6 * 5] -
                                       (longlong)param_1]) | 1;
        goto LAB_14f6ca8b9;
      }
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_14f6ca8b9:
    if (-1 < (int)uVar3) {
      if ((int)uVar3 < 1) break;
      iVar7 = iVar2 + 1;
      iVar2 = iVar8;
    }
    iVar8 = iVar2;
  } while (iVar7 < iVar8);
  if ((uVar3 == 0) && (puVar6 != (uint *)0x0)) {
    return *(undefined4 *)(&DAT_15348fc20 + (ulonglong)*puVar6 * 0x28);
  }
  return 0;
}

// OBJ_txt2nid @ 14f6ca920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 OBJ_txt2nid(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = OBJ_txt2obj(param_1,0);
  uVar1 = OBJ_obj2nid(uVar2);
  ASN1_OBJECT_free(uVar2);
  return uVar1;
}

// OBJ_txt2obj @ 14f6ca970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OBJ_txt2obj(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res18;
  longlong local_res20;
  
  if (param_2 == 0) {
    iVar1 = OBJ_sn2nid();
    if (iVar1 == 0) {
      iVar1 = OBJ_ln2nid(param_1);
      if (iVar1 == 0) goto LAB_14f6ca9a8;
    }
    uVar3 = OBJ_nid2obj(iVar1);
    return uVar3;
  }
LAB_14f6ca9a8:
  iVar1 = a2d_ASN1_OBJECT(0,0,param_1,0xffffffff);
  if (iVar1 < 1) {
    return 0;
  }
  iVar2 = ASN1_object_size(0,iVar1,6);
  if (iVar2 < 0) {
    return 0;
  }
  lVar4 = CRYPTO_malloc((longlong)iVar2,"crypto\\objects\\obj_dat.c",0x17c);
  if (lVar4 == 0) {
    ERR_put_error(8,0x6c,0x41,"crypto\\objects\\obj_dat.c",0x17d);
    uVar3 = 0;
  }
  else {
    local_res18 = lVar4;
    ASN1_put_object(&local_res18,0,iVar1,6,0);
    a2d_ASN1_OBJECT(local_res18,iVar1,param_1,0xffffffff);
    local_res20 = lVar4;
    uVar3 = d2i_ASN1_OBJECT(0,&local_res20,iVar2);
    CRYPTO_free(lVar4,"crypto\\objects\\obj_dat.c",0x189);
  }
  return uVar3;
}

// FUN_14f6caac0 @ 14f6caac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6caac0(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  byte *pbVar6;
  longlong lVar7;
  bool bVar8;
  
  iVar2 = *param_1;
  uVar5 = iVar2 - *param_2;
  if (uVar5 == 0) {
    puVar3 = *(undefined8 **)(param_1 + 2);
    plVar4 = *(longlong **)(param_2 + 2);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        pbVar6 = (byte *)*puVar3;
        if (pbVar6 == (byte *)0x0) {
          return 0xffffffff;
        }
        if (*plVar4 == 0) {
          return 1;
        }
        lVar7 = *plVar4 - (longlong)pbVar6;
        while( true ) {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < pbVar6[lVar7];
          if (bVar1 != pbVar6[lVar7]) break;
          pbVar6 = pbVar6 + 1;
          if (bVar1 == 0) {
            return 0;
          }
        }
LAB_14f6cab76:
        return -(uint)bVar8 | 1;
      }
      if (iVar2 == 2) {
        pbVar6 = (byte *)puVar3[1];
        if (pbVar6 == (byte *)0x0) {
          return 0xffffffff;
        }
        if (plVar4[1] == 0) {
          return 1;
        }
        lVar7 = plVar4[1] - (longlong)pbVar6;
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < pbVar6[lVar7];
          if (bVar1 != pbVar6[lVar7]) goto LAB_14f6cab76;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
      }
      else if (iVar2 == 3) {
        return *(int *)(puVar3 + 2) - (int)plVar4[2];
      }
      return 0;
    }
    uVar5 = *(int *)((longlong)puVar3 + 0x14) - *(int *)((longlong)plVar4 + 0x14);
    if (uVar5 == 0) {
      uVar5 = memcmp((void *)puVar3[3],(void *)plVar4[3],(longlong)*(int *)((longlong)puVar3 + 0x14)
                    );
      return uVar5;
    }
  }
  return uVar5;
}

// FUN_14f6cabb0 @ 14f6cabb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6cabb0(int *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 2);
  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar1 = *(uint *)((longlong)puVar2 + 0x14);
    uVar3 = uVar1 << 0x14;
    if (0 < (int)uVar1) {
      uVar6 = (ulonglong)uVar1;
      pbVar5 = (byte *)puVar2[3];
      iVar4 = 0;
      do {
        uVar3 = uVar3 ^ (uint)*pbVar5 << ((char)iVar4 + (char)(iVar4 / 0x18) * -0x18 & 0x1fU);
        uVar6 = uVar6 - 1;
        pbVar5 = pbVar5 + 1;
        iVar4 = iVar4 + 3;
      } while (uVar6 != 0);
    }
  }
  else if (iVar4 == 1) {
    uVar3 = OPENSSL_LH_strhash(*puVar2);
  }
  else if (iVar4 == 2) {
    uVar3 = OPENSSL_LH_strhash(puVar2[1]);
  }
  else {
    if (iVar4 != 3) {
      return 0;
    }
    uVar3 = *(uint *)(puVar2 + 2);
  }
  return *param_1 << 0x1e | uVar3 & 0x3fffffff;
}

// FUN_14f6caca0 @ 14f6caca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6caca0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ASN1_OBJECT_free(*(undefined8 *)(param_1 + 8));
  }
  CRYPTO_free(param_1,"crypto\\objects\\obj_dat.c",0x96);
  return;
}

// FUN_14f6cacf0 @ 14f6cacf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6cacf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_1553e2ad8 != 0) {
    return true;
  }
  DAT_1553e2ad8 = OPENSSL_LH_new(FUN_14f6cabb0,FUN_14f6caac0,param_3,param_4,0x14f6cacfa);
  return DAT_1553e2ad8 != 0;
}

// FUN_14f6cad40 @ 14f6cad40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cad40(void)

{
  OPENSSL_LH_doall();
  return;
}

// FUN_14f6cad60 @ 14f6cad60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cad60(void)

{
  OPENSSL_LH_free();
  return;
}

// FUN_14f6cad80 @ 14f6cad80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cad80(void)

{
  OPENSSL_LH_insert();
  return;
}

// FUN_14f6cada0 @ 14f6cada0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cada0(void)

{
  OPENSSL_LH_new();
  return;
}

// FUN_14f6cadc0 @ 14f6cadc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cadc0(void)

{
  OPENSSL_LH_retrieve();
  return;
}

// FUN_14f6cade0 @ 14f6cade0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cade0(void)

{
  OPENSSL_LH_set_down_load();
  return;
}

// obj_cleanup_int @ 14f6cae80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void obj_cleanup_int(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_1553e2ad8 != 0) {
    OPENSSL_LH_set_down_load(DAT_1553e2ad8,0,param_3,param_4,0x14f6cae8a);
    OPENSSL_LH_doall(DAT_1553e2ad8,&LAB_14f6cac70);
    OPENSSL_LH_doall(DAT_1553e2ad8,&LAB_14f6cac90);
    OPENSSL_LH_doall(DAT_1553e2ad8,FUN_14f6caca0);
    OPENSSL_LH_free(DAT_1553e2ad8);
    DAT_1553e2ad8 = 0;
  }
  return;
}

// FUN_14f6caf00 @ 14f6caf00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6caf00(longlong *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  if (iVar1 != *(int *)(&DAT_15348fc24 + (ulonglong)*param_2 * 0x28)) {
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  memcmp(*(void **)(*param_1 + 0x18),*(void **)(&DAT_15348fc28 + (ulonglong)*param_2 * 0x28),
         (longlong)iVar1);
  return;
}

// FUN_14f6caf60 @ 14f6caf60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6caf60(longlong *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  if (iVar1 != *(int *)(&DAT_15348fc24 + (ulonglong)*param_2 * 0x28)) {
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  memcmp(*(void **)(*param_1 + 0x18),*(void **)(&DAT_15348fc28 + (ulonglong)*param_2 * 0x28),
         (longlong)iVar1);
  return;
}

