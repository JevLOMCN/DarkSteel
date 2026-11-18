// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// FUN_14f782f80 @ 14f782f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f782f80(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  BIO_printf(param_3,"%*sPath Length Constraint: ",param_4,"");
  if (*param_2 == 0) {
    BIO_printf(param_3,"infinite");
  }
  else {
    i2a_ASN1_INTEGER();
  }
  BIO_puts(param_3,"\n");
  BIO_printf(param_3,"%*sPolicy Language: ",param_4,"");
  i2a_ASN1_OBJECT(param_3,*(undefined8 *)param_2[1]);
  BIO_puts(param_3,"\n");
  puVar1 = *(undefined4 **)(param_2[1] + 8);
  if ((puVar1 != (undefined4 *)0x0) && (*(longlong *)(puVar1 + 2) != 0)) {
    BIO_printf(param_3,"%*sPolicy Text: %.*s\n",param_4,"",*puVar1,*(longlong *)(puVar1 + 2));
  }
  return 1;
}

// FUN_14f783080 @ 14f783080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f783080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar13;
  longlong local_38;
  longlong local_30;
  
  puVar12 = (undefined8 *)0x0;
  local_38 = 0;
  local_res20 = 0;
  local_30 = 0;
  uVar4 = X509V3_parse_list(param_3);
  iVar2 = OPENSSL_sk_num(uVar4);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  puVar8 = puVar12;
  if (iVar2 < 1) {
LAB_14f783299:
    uVar7 = CONCAT44(uVar11,0x124);
    uVar11 = 0x9a;
  }
  else {
    do {
      puVar5 = (undefined8 *)OPENSSL_sk_value(uVar4,puVar8);
      pcVar1 = (char *)puVar5[1];
      if (pcVar1 == (char *)0x0) {
LAB_14f78323c:
        uVar13 = 0x103;
        uVar7 = 0x99;
LAB_14f78324a:
        ERR_put_error(0x22,0x9b,uVar7,"crypto\\x509v3\\v3_pci.c",uVar13);
LAB_14f78325e:
        ERR_add_error_data(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
        goto LAB_14f7832bb;
      }
      if (*pcVar1 != '@') {
        if (puVar5[2] == 0) goto LAB_14f78323c;
        if (*pcVar1 == '@') goto LAB_14f783104;
        iVar2 = FUN_14f783320(puVar5,&local_38,&local_res20,&local_30);
        if (iVar2 != 0) goto LAB_14f783192;
        goto LAB_14f78325e;
      }
LAB_14f783104:
      iVar2 = 1;
      lVar6 = X509V3_get_section(param_2,pcVar1 + 1);
      puVar9 = puVar12;
      if (lVar6 == 0) {
        uVar13 = 0x10d;
        uVar7 = 0x87;
        goto LAB_14f78324a;
      }
      do {
        iVar3 = OPENSSL_sk_num(lVar6);
        if (iVar3 <= (int)puVar9) break;
        uVar7 = OPENSSL_sk_value(lVar6,puVar9);
        iVar2 = FUN_14f783320(uVar7,&local_38,&local_res20,&local_30);
        puVar9 = (undefined8 *)(ulonglong)((int)puVar9 + 1);
      } while (iVar2 != 0);
      X509V3_section_free(param_2,lVar6);
      if (iVar2 == 0) goto LAB_14f7832bb;
LAB_14f783192:
      uVar10 = (int)puVar8 + 1;
      puVar8 = (undefined8 *)(ulonglong)uVar10;
      iVar2 = OPENSSL_sk_num(uVar4);
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    } while ((int)uVar10 < iVar2);
    if (local_38 == 0) goto LAB_14f783299;
    iVar2 = OBJ_obj2nid();
    if (((iVar2 - 0x299U & 0xfffffffd) == 0) && (local_30 != 0)) {
      uVar7 = CONCAT44(uVar11,0x12a);
      uVar11 = 0x9f;
    }
    else {
      puVar8 = (undefined8 *)PROXY_CERT_INFO_EXTENSION_new();
      if (puVar8 != (undefined8 *)0x0) {
        *(longlong *)puVar8[1] = local_38;
        *(longlong *)(puVar8[1] + 8) = local_30;
        *puVar8 = local_res20;
        local_res20 = 0;
        goto LAB_14f7832ee;
      }
      uVar7 = CONCAT44(uVar11,0x130);
      uVar11 = 0x41;
    }
  }
  ERR_put_error(0x22,0x9b,uVar11,"crypto\\x509v3\\v3_pci.c",uVar7);
LAB_14f7832bb:
  ASN1_OBJECT_free(local_38);
  ASN1_INTEGER_free(local_res20);
  local_res20 = 0;
  ASN1_OCTET_STRING_free(local_30);
  PROXY_CERT_INFO_EXTENSION_free(0);
  puVar8 = puVar12;
LAB_14f7832ee:
  OPENSSL_sk_pop_free(uVar4,X509V3_conf_free);
  return puVar8;
}

// FUN_14f783320 @ 14f783320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f783320(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char *_Str1;
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_898 [32];
  undefined8 local_878;
  char *local_870;
  undefined8 local_868;
  int local_858 [4];
  undefined1 local_848 [2048];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f783335;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_898;
  _Str1 = (char *)param_1[1];
  lVar5 = 0;
  bVar1 = false;
  iVar2 = strcmp(_Str1,"language");
  lVar4 = lVar5;
  if (iVar2 == 0) {
    if (*param_2 == 0) {
      lVar4 = OBJ_txt2obj(param_1[2],0);
      *param_2 = lVar4;
      if (lVar4 != 0) {
        return 1;
      }
      local_878 = CONCAT44(local_878._4_4_,0x65);
      uVar8 = 0x6e;
    }
    else {
      local_878 = CONCAT44(local_878._4_4_,0x5f);
      uVar8 = 0x9b;
    }
  }
  else {
    do {
      lVar6 = lVar4 + 1;
      lVar7 = lVar5;
      if (_Str1[lVar4] != "pathlen"[lVar4]) goto LAB_14f783470;
      lVar4 = lVar6;
    } while (lVar6 != 8);
    if (*param_3 == 0) {
      iVar2 = X509V3_get_value_int(param_1,param_3);
      if (iVar2 != 0) {
        return 1;
      }
      local_878 = CONCAT44(local_878._4_4_,0x72);
      uVar8 = 0x9c;
    }
    else {
      local_878 = CONCAT44(local_878._4_4_,0x6c);
      uVar8 = 0x9d;
    }
  }
LAB_14f78338a:
  ERR_put_error(0x22,0x96,uVar8,"crypto\\x509v3\\v3_pci.c");
  local_868 = param_1[2];
  local_870 = ",value:";
  local_878 = param_1[1];
  ERR_add_error_data(6,"section:",*param_1,",name:");
  return 0;
LAB_14f783470:
  do {
    lVar4 = lVar7 + 1;
    if (_Str1[lVar7] != "policy"[lVar7]) {
      return 1;
    }
    lVar7 = lVar4;
  } while (lVar4 != 7);
  if (*param_4 == 0) {
    lVar4 = ASN1_OCTET_STRING_new();
    *param_4 = lVar4;
    if (lVar4 == 0) {
      local_878 = CONCAT44(local_878._4_4_,0x7c);
      uVar8 = 0x41;
      goto LAB_14f78338a;
    }
    bVar1 = true;
  }
  iVar2 = strncmp((char *)param_1[2],"hex:",4);
  if (iVar2 == 0) {
    _Src = (void *)OPENSSL_hexstr2buf((char *)param_1[2] + 4,local_858);
    if (_Src == (void *)0x0) goto LAB_14f783851;
    lVar5 = CRYPTO_realloc(*(undefined8 *)((int *)*param_4 + 2),
                           (longlong)(*(int *)*param_4 + local_858[0] + 1),
                           "crypto\\x509v3\\v3_pci.c",0x8c);
    if (lVar5 != 0) {
      *(longlong *)(*param_4 + 8) = lVar5;
      memcpy((void *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)),_Src,
             (longlong)local_858[0]);
      *(int *)*param_4 = *(int *)*param_4 + local_858[0];
      *(undefined1 *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)) = 0;
      CRYPTO_free(_Src,"crypto\\x509v3\\v3_pci.c",0xa0);
      goto LAB_14f7837e2;
    }
    CRYPTO_free(_Src,"crypto\\x509v3\\v3_pci.c",0x94);
    CRYPTO_free(*(undefined8 *)(*param_4 + 8),"crypto\\x509v3\\v3_pci.c",0x99);
    uVar8 = 0x41;
    local_878 = CONCAT44(local_878._4_4_,0x9c);
    *(undefined8 *)(*param_4 + 8) = 0;
    *(undefined4 *)*param_4 = 0;
  }
  else {
    iVar2 = strncmp((char *)param_1[2],"file:",5);
    if (iVar2 == 0) {
      lVar4 = BIO_new_file((char *)param_1[2] + 5,&s_r);
      if (lVar4 == 0) {
        local_878 = CONCAT44(local_878._4_4_,0xa6);
        uVar8 = 0x20;
      }
      else {
        do {
          while( true ) {
            iVar2 = BIO_read(lVar4,local_848,0x800);
            if (iVar2 < 1) break;
            lVar5 = CRYPTO_realloc(*(undefined8 *)((int *)*param_4 + 2),
                                   (longlong)(*(int *)*param_4 + 1 + iVar2),
                                   "crypto\\x509v3\\v3_pci.c",0xb0);
            if (lVar5 == 0) {
              CRYPTO_free(*(undefined8 *)(*param_4 + 8),"crypto\\x509v3\\v3_pci.c",0xb3);
              local_878 = CONCAT44(local_878._4_4_,0xb7);
              *(undefined8 *)(*param_4 + 8) = 0;
              *(undefined4 *)*param_4 = 0;
              ERR_put_error(0x22,0x96,0x41,"crypto\\x509v3\\v3_pci.c");
              local_868 = param_1[2];
              local_870 = ",value:";
              local_878 = param_1[1];
              ERR_add_error_data(6,"section:",*param_1,",name:");
              BIO_free_all(lVar4);
              goto LAB_14f78388a;
            }
            *(longlong *)(*param_4 + 8) = lVar5;
            memcpy((void *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)),
                   local_848,(longlong)iVar2);
            *(int *)*param_4 = *(int *)*param_4 + iVar2;
            *(undefined1 *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)) = 0;
          }
          if (iVar2 != 0) break;
          iVar3 = BIO_test_flags(lVar4,8);
        } while (iVar3 != 0);
        BIO_free_all(lVar4);
        if (iVar2 < 0) {
          local_878 = CONCAT44(local_878._4_4_,0xc5);
          uVar8 = 0x20;
        }
        else {
LAB_14f7837e2:
          if (lVar5 != 0) {
            return 1;
          }
          local_878 = CONCAT44(local_878._4_4_,0xe6);
          uVar8 = 0x41;
        }
      }
    }
    else {
      iVar2 = strncmp((char *)param_1[2],"text:",5);
      if (iVar2 == 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_1[2] + 5 + lVar4) != '\0');
        local_858[0] = (int)lVar4;
        lVar5 = CRYPTO_realloc(*(undefined8 *)((int *)*param_4 + 2),
                               (longlong)(local_858[0] + *(int *)*param_4 + 1),
                               "crypto\\x509v3\\v3_pci.c",0xcc);
        if (lVar5 != 0) {
          *(longlong *)(*param_4 + 8) = lVar5;
          memcpy((void *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)),
                 (void *)(param_1[2] + 5),(longlong)local_858[0]);
          *(int *)*param_4 = *(int *)*param_4 + local_858[0];
          *(undefined1 *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)) = 0;
          goto LAB_14f7837e2;
        }
        CRYPTO_free(*(undefined8 *)(*param_4 + 8),"crypto\\x509v3\\v3_pci.c",0xd8);
        uVar8 = 0x41;
        local_878 = CONCAT44(local_878._4_4_,0xdb);
        *(undefined8 *)(*param_4 + 8) = 0;
        *(undefined4 *)*param_4 = 0;
      }
      else {
        local_878 = CONCAT44(local_878._4_4_,0xe1);
        uVar8 = 0x98;
      }
    }
  }
  ERR_put_error(0x22,0x96,uVar8,"crypto\\x509v3\\v3_pci.c");
LAB_14f783851:
  local_868 = param_1[2];
  local_870 = ",value:";
  local_878 = param_1[1];
  ERR_add_error_data(6,"section:",*param_1,",name:");
LAB_14f78388a:
  if (!bVar1) {
    return 0;
  }
  ASN1_OCTET_STRING_free(*param_4);
  *param_4 = 0;
  return 0;
}

// FUN_14f7838d0 @ 14f7838d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7838d0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7838f0 @ 14f7838f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7838f0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f783910 @ 14f783910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f783910(void)

{
  OPENSSL_sk_value();
  return;
}

