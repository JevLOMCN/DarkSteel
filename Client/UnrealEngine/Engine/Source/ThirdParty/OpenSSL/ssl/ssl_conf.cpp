// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 46

// FUN_14f6958c0 @ 14f6958c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6958c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffffd;
  }
  *(undefined8 *)(param_1 + 0xa0) = 6;
  *(undefined ***)(param_1 + 0x98) = &PTR_s_Peer_153488c70;
  uVar1 = CONF_parse_list(param_2,0x2c,1,FUN_14f697210,param_1);
  return uVar1;
}

// FUN_14f695920 @ 14f695920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f695920(byte *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  plVar2 = (longlong *)0x0;
  iVar4 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar4 = SSL_CTX_use_certificate_chain_file();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar4 = SSL_use_certificate_chain_file(*(longlong *)(param_1 + 0x20),param_2);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  if (((0 < iVar4) && (plVar2 != (longlong *)0x0)) && ((*param_1 & 0x40) != 0)) {
    lVar1 = ((*plVar2 - (longlong)plVar2) + -0x20) / 0x28;
    CRYPTO_free(*(undefined8 *)(param_1 + lVar1 * 8 + 0x30),"ssl\\ssl_conf.c",0x1b6);
    lVar3 = CRYPTO_strdup(param_2,"ssl\\ssl_conf.c",0x1b7);
    *(longlong *)(param_1 + lVar1 * 8 + 0x30) = lVar3;
    if (lVar3 == 0) {
      iVar4 = 0;
    }
  }
  return 0 < iVar4;
}

// FUN_14f695a20 @ 14f695a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f695a20(byte *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if ((*param_1 & 0x20) == 0) {
    return 0xfffffffe;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = SSL_CTX_use_PrivateKey_file(*(longlong *)(param_1 + 0x18),param_2,1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_use_PrivateKey_file(*(longlong *)(param_1 + 0x20),param_2,1);
  }
  return (ulonglong)(0 < iVar1);
}

// FUN_14f695aa0 @ 14f695aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f695aa0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = SSL_CTX_use_serverinfo_file();
  }
  return 0 < iVar1;
}

// FUN_14f695ae0 @ 14f695ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f695ae0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return true;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if (*(longlong *)(lVar3 + 0x1c8) == 0) {
    lVar2 = X509_STORE_new();
    *(longlong *)(lVar3 + 0x1c8) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = X509_STORE_load_locations(*(undefined8 *)(lVar3 + 0x1c8),0,param_2);
  return 0 < iVar1;
}

// FUN_14f695b80 @ 14f695b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f695b80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return true;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if (*(longlong *)(lVar3 + 0x1c8) == 0) {
    lVar2 = X509_STORE_new();
    *(longlong *)(lVar3 + 0x1c8) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = X509_STORE_load_locations(*(undefined8 *)(lVar3 + 0x1c8),param_2,0);
  return 0 < iVar1;
}

// FUN_14f695c20 @ 14f695c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f695c20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return true;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if (*(longlong *)(lVar3 + 0x1d0) == 0) {
    lVar2 = X509_STORE_new();
    *(longlong *)(lVar3 + 0x1d0) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = X509_STORE_load_locations(*(undefined8 *)(lVar3 + 0x1d0),0,param_2);
  return 0 < iVar1;
}

// FUN_14f695cc0 @ 14f695cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f695cc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return true;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if (*(longlong *)(lVar3 + 0x1d0) == 0) {
    lVar2 = X509_STORE_new();
    *(longlong *)(lVar3 + 0x1d0) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = X509_STORE_load_locations(*(undefined8 *)(lVar3 + 0x1d0),param_2,0);
  return 0 < iVar1;
}

// FUN_14f695d60 @ 14f695d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f695d60(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = OPENSSL_sk_new_null();
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  uVar1 = SSL_add_file_cert_subjects_to_stack(*(longlong *)(param_1 + 0xa8),param_2);
  return uVar1;
}

// FUN_14f695dc0 @ 14f695dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f695dc0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = OPENSSL_sk_new_null();
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  uVar1 = SSL_add_file_cert_subjects_to_stack(*(longlong *)(param_1 + 0xa8),param_2);
  return uVar1;
}

// FUN_14f695e20 @ 14f695e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f695e20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = OPENSSL_sk_new_null();
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  uVar1 = SSL_add_dir_cert_subjects_to_stack(*(longlong *)(param_1 + 0xa8),param_2);
  return uVar1;
}

// FUN_14f695e80 @ 14f695e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f695e80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = OPENSSL_sk_new_null();
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  uVar1 = SSL_add_dir_cert_subjects_to_stack(*(longlong *)(param_1 + 0xa8),param_2);
  return uVar1;
}

// FUN_14f695ee0 @ 14f695ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f695ee0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = 0;
  if ((*(longlong *)(param_1 + 0x18) == 0) && (*(longlong *)(param_1 + 0x20) == 0)) {
    bVar1 = true;
  }
  else {
    uVar4 = BIO_s_file();
    lVar5 = BIO_new(uVar4);
    lVar6 = 0;
    if (lVar5 != 0) {
      iVar2 = BIO_ctrl(lVar5,0x6c,3,param_2);
      lVar6 = 0;
      if (0 < iVar2) {
        lVar6 = PEM_read_bio_DHparams(lVar5,0,0,0);
        if (lVar6 != 0) {
          iVar3 = 0;
          if (*(longlong *)(param_1 + 0x18) != 0) {
            iVar3 = SSL_CTX_ctrl(*(longlong *)(param_1 + 0x18),3,0,lVar6);
          }
          if (*(longlong *)(param_1 + 0x20) != 0) {
            iVar3 = SSL_ctrl(*(longlong *)(param_1 + 0x20),3,0,lVar6);
          }
        }
      }
    }
    DH_free(lVar6);
    BIO_free(lVar5);
    bVar1 = 0 < iVar3;
  }
  return bVar1;
}

// FUN_14f695fe0 @ 14f695fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f695fe0(longlong param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  iVar1 = atoi(param_2);
  if (-1 < iVar1) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar2 = SSL_CTX_set_block_padding(*(longlong *)(param_1 + 0x18),(longlong)iVar1);
      uVar3 = (ulonglong)uVar2;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar3 = SSL_set_block_padding(*(longlong *)(param_1 + 0x20),(longlong)iVar1);
      return uVar3;
    }
  }
  return uVar3;
}

// FUN_14f696060 @ 14f696060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f696060(longlong param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  iVar1 = atoi(param_2);
  if (-1 < iVar1) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar2 = SSL_CTX_set_num_tickets(*(longlong *)(param_1 + 0x18),(longlong)iVar1);
      uVar3 = (ulonglong)uVar2;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar3 = SSL_set_num_tickets(*(longlong *)(param_1 + 0x20),(longlong)iVar1);
      return uVar3;
    }
  }
  return uVar3;
}

// FUN_14f6960e0 @ 14f6960e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6960e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_ctrl(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = SSL_CTX_ctrl(*(undefined8 *)(param_1 + 0x18),0x62,0,param_2,0x14f6960ea);
  return 0 < iVar1;
}

// FUN_14f696140 @ 14f696140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f696140(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_ctrl(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = SSL_CTX_ctrl(*(undefined8 *)(param_1 + 0x18),0x66,0,param_2,0x14f69614a);
  return 0 < iVar1;
}

// FUN_14f6961a0 @ 14f6961a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6961a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_ctrl(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = SSL_CTX_ctrl(*(undefined8 *)(param_1 + 0x18),0x5c,0,param_2,0x14f6961aa);
  return 0 < iVar1;
}

// FUN_14f696200 @ 14f696200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f696200(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_ctrl(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = SSL_CTX_ctrl(*(undefined8 *)(param_1 + 0x18),0x5c,0,param_2,0x14f69620a);
  return 0 < iVar1;
}

// FUN_14f696260 @ 14f696260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f696260(byte *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 1;
  if (((*param_1 & 2) != 0) &&
     ((iVar2 = _stricmp(param_2,"+automatic"), iVar2 == 0 ||
      (iVar2 = _stricmp(param_2,"automatic"), iVar2 == 0)))) {
    return true;
  }
  lVar3 = 0;
  if ((*param_1 & 1) == 0) {
LAB_14f6962f7:
    iVar2 = EC_curve_nist2nid(param_2);
    if (((iVar2 == 0) && (iVar2 = OBJ_sn2nid(param_2), iVar2 == 0)) ||
       (lVar3 = EC_KEY_new_by_curve_name(iVar2), lVar3 == 0)) {
      bVar1 = false;
    }
    else {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        if (*(longlong *)(param_1 + 0x20) != 0) {
          iVar5 = SSL_ctrl(*(longlong *)(param_1 + 0x20),4,0,lVar3);
        }
      }
      else {
        iVar5 = SSL_CTX_ctrl(*(longlong *)(param_1 + 0x18),4,0,lVar3);
      }
      EC_KEY_free(lVar3);
      bVar1 = 0 < iVar5;
    }
  }
  else {
    do {
      lVar4 = lVar3 + 1;
      if (param_2[lVar3] != (&s_auto)[lVar3]) goto LAB_14f6962f7;
      lVar3 = lVar4;
    } while (lVar4 != 5);
    bVar1 = true;
  }
  return bVar1;
}

// FUN_14f696390 @ 14f696390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f696390(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = SSL_CTX_set_cipher_list();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_set_cipher_list(*(longlong *)(param_1 + 0x20),param_2);
  }
  return 0 < iVar1;
}

// FUN_14f6963f0 @ 14f6963f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6963f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = SSL_CTX_set_ciphersuites();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = SSL_set_ciphersuites(*(longlong *)(param_1 + 0x20),param_2);
  }
  return 0 < iVar1;
}

// FUN_14f696450 @ 14f696450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f696450(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = 9;
  *(undefined ***)(param_1 + 0x98) = &PTR_s_ALL_1534893b0;
  CONF_parse_list(param_2,0x2c,1,FUN_14f697210,param_1);
  return;
}

// FUN_14f6964b0 @ 14f6964b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6964b0(longlong param_1,undefined8 param_2)

{
  FUN_14f696d10(param_1,param_2,*(undefined8 *)(param_1 + 0x88));
  return;
}

// FUN_14f6964e0 @ 14f6964e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6964e0(longlong param_1,undefined8 param_2)

{
  FUN_14f696d10(param_1,param_2,*(undefined8 *)(param_1 + 0x90));
  return;
}

// FUN_14f696510 @ 14f696510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f696510(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0xfffffffd;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0xf;
  *(undefined ***)(param_1 + 0x98) = &PTR_s_SessionTicket_153489510;
  uVar1 = CONF_parse_list(param_2,0x2c,1,FUN_14f697210,param_1);
  return uVar1;
}

// SSL_CONF_CTX_finish @ 14f696580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CONF_CTX_finish(byte *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_14f696601;
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if ((plVar5 != (longlong *)0x0) && ((*param_1 & 0x40) != 0)) {
    uVar3 = 0;
    pbVar4 = param_1 + 0x30;
    do {
      plVar5 = plVar5 + 5;
      if (((*(longlong *)pbVar4 != 0) && (*plVar5 == 0)) &&
         (iVar2 = FUN_14f695a20(param_1), iVar2 == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      pbVar4 = pbVar4 + 8;
    } while (uVar3 < 9);
  }
LAB_14f696601:
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        OPENSSL_sk_pop_free(lVar1,X509_NAME_free);
      }
      else {
        SSL_CTX_set0_CA_list(*(longlong *)(param_1 + 0x18),lVar1);
      }
    }
    else {
      SSL_set0_CA_list(*(longlong *)(param_1 + 0x20),lVar1);
    }
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
  }
  return 1;
}

// SSL_CONF_CTX_free @ 14f696680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CONF_CTX_free(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    lVar2 = 9;
    do {
      CRYPTO_free(*puVar1,"ssl\\ssl_conf.c",0x3a0);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"ssl\\ssl_conf.c",0x3a1);
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0xa8),X509_NAME_free);
    CRYPTO_free(param_1,"ssl\\ssl_conf.c",0x3a3);
  }
  return;
}

// SSL_CONF_CTX_new @ 14f696730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CONF_CTX_new(void)

{
  CRYPTO_zalloc(0xb0,"ssl\\ssl_conf.c",0x375);
  return;
}

// SSL_CONF_CTX_set1_prefix @ 14f696760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CONF_CTX_set1_prefix(longlong param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  uVar3 = 0;
  pcVar2 = pcVar4;
  if ((param_2 != 0) &&
     (pcVar2 = (char *)CRYPTO_strdup(param_2,"ssl\\ssl_conf.c",0x3b7), pcVar2 == (char *)0x0)) {
    return 0;
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 8),"ssl\\ssl_conf.c",0x3bb);
  *(char **)(param_1 + 8) = pcVar2;
  if (pcVar2 == (char *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    cVar1 = *pcVar2;
    while ((cVar1 != '\0' && (uVar3 = (uint)pcVar4, uVar3 < 0x80000000))) {
      pcVar2 = pcVar2 + 1;
      uVar3 = uVar3 + 1;
      cVar1 = *pcVar2;
      pcVar4 = (char *)(ulonglong)uVar3;
    }
    *(ulonglong *)(param_1 + 0x10) = (ulonglong)(uVar3 & 0x7fffffff);
  }
  return 1;
}

// SSL_CONF_CTX_set_flags @ 14f696820

uint SSL_CONF_CTX_set_flags(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | param_2;
  return *param_1;
}

// SSL_CONF_CTX_set_ssl @ 14f696830

void SSL_CONF_CTX_set_ssl(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x28) = param_2 + 0x5cc;
    *(longlong *)(param_1 + 0x88) = param_2 + 0x5d4;
    *(longlong *)(param_1 + 0x90) = param_2 + 0x5d8;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_2 + 0x488) + 0x1c;
    *(longlong *)(param_1 + 0x80) = param_2 + 0x558;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

// SSL_CONF_CTX_set_ssl_ctx @ 14f6968b0

void SSL_CONF_CTX_set_ssl_ctx(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x28) = param_2 + 0x120;
    *(longlong *)(param_1 + 0x88) = param_2 + 0x128;
    *(longlong *)(param_1 + 0x90) = param_2 + 300;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_2 + 0x138) + 0x1c;
    *(longlong *)(param_1 + 0x80) = param_2 + 0x158;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

// SSL_CONF_cmd @ 14f696930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CONF_cmd(byte *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong local_res10 [3];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f696945;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    ERR_put_error(0x14,0x14e,0x181,"ssl\\ssl_conf.c",CONCAT44(uVar3,0x323),0x14f696945);
    return 0;
  }
  iVar1 = FUN_14f696fe0(param_1,local_res10);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14f696ef0(param_1,local_res10[0]);
    if (puVar2 == (undefined8 *)0x0) {
      if ((*param_1 & 0x10) != 0) {
        ERR_put_error(0x14,0x14e,0x182,"ssl\\ssl_conf.c",CONCAT44(uVar3,0x340),uVar4);
        ERR_add_error_data(2,"cmd=",local_res10[0]);
      }
    }
    else {
      if (*(short *)((longlong)puVar2 + 0x1a) == 4) {
        uVar4 = FUN_14f696bd0(param_1,puVar2);
        return uVar4;
      }
      if (param_3 == 0) {
        return 0xfffffffd;
      }
      iVar1 = (*(code *)*puVar2)(param_1,param_3);
      if (0 < iVar1) {
        return 2;
      }
      if (iVar1 != -2) {
        if ((*param_1 & 0x10) != 0) {
          ERR_put_error(0x14,0x14e,0x180,"ssl\\ssl_conf.c",CONCAT44(uVar3,0x339),uVar4);
          ERR_add_error_data(4,"cmd=",local_res10[0],", value=",param_3);
        }
        return 0;
      }
    }
  }
  return 0xfffffffe;
}

// SSL_CONF_cmd_argv @ 14f696ab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_CONF_cmd_argv(uint *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((param_2 == (int *)0x0) || ((*param_2 != 0 && (0 < *param_2)))) {
    lVar1 = *(longlong *)*param_3;
    if (lVar1 != 0) {
      if ((param_2 == (int *)0x0) || (1 < *param_2)) {
        lVar4 = ((longlong *)*param_3)[1];
      }
      else {
        lVar4 = 0;
      }
      *param_1 = *param_1 & 0xfffffffd;
      *param_1 = *param_1 | 1;
      uVar3 = SSL_CONF_cmd(param_1,lVar1,lVar4);
      iVar2 = (int)uVar3;
      if (iVar2 < 1) {
        if (iVar2 == -2) {
          return 0;
        }
        uVar3 = uVar3 & 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0xffffffff;
        }
      }
      else {
        *param_3 = *param_3 + (longlong)iVar2 * 8;
        if (param_2 != (int *)0x0) {
          *param_2 = *param_2 - iVar2;
          return uVar3;
        }
      }
      return uVar3;
    }
  }
  return 0;
}

// SSL_CONF_cmd_value_type @ 14f696b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 SSL_CONF_cmd_value_type(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  iVar1 = FUN_14f696fe0(param_1,local_res10);
  if (iVar1 != 0) {
    lVar2 = FUN_14f696ef0(param_1,local_res10[0]);
    if (lVar2 != 0) {
      return *(undefined2 *)(lVar2 + 0x1a);
    }
  }
  return 0;
}

// FUN_14f696bd0 @ 14f696bd0

undefined8 FUN_14f696bd0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = param_2 + -0x153488d00 >> 5;
  if (0x15 < uVar2) {
    return 0;
  }
  puVar1 = *(uint **)(param_1 + 0x28);
  if (puVar1 != (uint *)0x0) {
    uVar3 = *(uint *)(&DAT_153489304 + uVar2 * 8) & 0xf00;
    if (uVar3 != 0) {
      if (uVar3 == 0x100) {
        puVar1 = *(uint **)(param_1 + 0x78);
      }
      else {
        if (uVar3 != 0x200) {
          return 1;
        }
        puVar1 = *(uint **)(param_1 + 0x80);
      }
    }
    if ((~*(uint *)(&DAT_153489304 + uVar2 * 8) & 1) != 0) {
      *puVar1 = *puVar1 | *(uint *)(&DAT_153489300 + uVar2 * 8);
      return 1;
    }
    *puVar1 = *puVar1 & ~*(uint *)(&DAT_153489300 + uVar2 * 8);
  }
  return 1;
}

// FUN_14f696c50 @ 14f696c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f696c50(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return true;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  lVar3 = 0x1c8;
  if (param_4 != 0) {
    lVar3 = 0x1d0;
  }
  plVar4 = (longlong *)(lVar3 + lVar2);
  if (*plVar4 == 0) {
    lVar2 = X509_STORE_new();
    *plVar4 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = X509_STORE_load_locations(*plVar4,param_2,param_3);
  return 0 < iVar1;
}

// FUN_14f696d10 @ 14f696d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f696d10(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 == (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x598);
  }
  uVar7 = 0;
  ppuVar8 = &PTR_s_None_153489490;
  do {
    pcVar4 = *ppuVar8;
    lVar6 = param_2 - (longlong)pcVar4;
    do {
      cVar1 = *pcVar4;
      cVar2 = pcVar4[lVar6];
      if (cVar1 != cVar2) break;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      if (*(int *)(&UNK_153489498 + uVar7 * 0x10) < 0) {
        return 0;
      }
      uVar5 = ssl_set_version_bound
                        (*(undefined4 *)*puVar3,*(int *)(&UNK_153489498 + uVar7 * 0x10),param_3);
      return uVar5;
    }
    uVar7 = uVar7 + 1;
    ppuVar8 = ppuVar8 + 2;
    if (7 < uVar7) {
      return 0;
    }
  } while( true );
}

// FUN_14f696df0 @ 14f696df0

undefined4 FUN_14f696df0(longlong param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  
  ppuVar6 = &PTR_s_None_153489490;
  uVar5 = 0;
  do {
    pcVar3 = *ppuVar6;
    lVar4 = param_1 - (longlong)pcVar3;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[lVar4];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      return *(undefined4 *)(&UNK_153489498 + uVar5 * 0x10);
    }
    uVar5 = uVar5 + 1;
    ppuVar6 = ppuVar6 + 2;
    if (7 < uVar5) {
      return 0xffffffff;
    }
  } while( true );
}

// FUN_14f696e70 @ 14f696e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f696e70(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f696e90 @ 14f696e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f696e90(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f696ef0 @ 14f696ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_14f696ef0(uint *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_2 == (char *)0x0) {
    return (undefined *)0x0;
  }
  puVar7 = &DAT_153488d00;
  uVar8 = 0;
  do {
    uVar3 = *(ushort *)(puVar7 + 0x18);
    uVar4 = *param_1;
    if (((((uVar3 & 8) == 0) || ((uVar4 & 8) != 0)) && (((uVar3 & 4) == 0 || ((uVar4 & 4) != 0))))
       && (((uVar3 & 0x20) == 0 || ((uVar4 & 0x20) != 0)))) {
      if (((uVar4 & 1) != 0) && (pcVar6 = *(char **)(puVar7 + 0x10), pcVar6 != (char *)0x0)) {
        lVar9 = (longlong)param_2 - (longlong)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar9];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          return puVar7;
        }
      }
      if ((((uVar4 & 2) != 0) && (*(char **)(puVar7 + 8) != (char *)0x0)) &&
         (iVar5 = _stricmp(*(char **)(puVar7 + 8),param_2), iVar5 == 0)) {
        return puVar7;
      }
    }
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 0x20;
    if (0x2f < uVar8) {
      return (undefined *)0x0;
    }
  } while( true );
}

// FUN_14f696fe0 @ 14f696fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f696fe0(byte *param_1,longlong *param_2)

{
  char cVar1;
  char *_Str1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  if ((param_2 != (longlong *)0x0) && (_Str1 = (char *)*param_2, _Str1 != (char *)0x0)) {
    if (*(char **)(param_1 + 8) == (char *)0x0) {
      if ((*param_1 & 1) != 0) {
        if (*_Str1 != '-') {
          return 0;
        }
        if (_Str1[1] == '\0') {
          return 0;
        }
        *param_2 = (longlong)(_Str1 + 1);
      }
      return 1;
    }
    cVar1 = *_Str1;
    pcVar4 = _Str1;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    if (((*(ulonglong *)(param_1 + 0x10) < (ulonglong)(uVar2 & 0x7fffffff)) &&
        (((*param_1 & 1) == 0 ||
         (iVar3 = strncmp(_Str1,*(char **)(param_1 + 8),*(ulonglong *)(param_1 + 0x10)), iVar3 == 0)
         ))) && (((*param_1 & 2) == 0 ||
                 (iVar3 = _strnicmp((char *)*param_2,*(char **)(param_1 + 8),
                                    *(size_t *)(param_1 + 0x10)), iVar3 == 0)))) {
      *param_2 = *param_2 + *(longlong *)(param_1 + 0x10);
      return 1;
    }
  }
  return 0;
}

// FUN_14f6970c0 @ 14f6970c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6970c0(uint *param_1,undefined8 *param_2,char *param_3,int param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((*param_1 & *(uint *)((longlong)param_2 + 0xc) & 0xc) == 0) {
    return 0;
  }
  if (param_4 == -1) {
    pcVar5 = (char *)*param_2;
    lVar8 = (longlong)param_3 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[lVar8];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_2 + 1) != param_4) {
      return 0;
    }
    iVar4 = _strnicmp((char *)*param_2,param_3,(longlong)param_4);
    if (iVar4 != 0) {
      return 0;
    }
  }
  puVar6 = *(uint **)(param_1 + 10);
  if (puVar6 != (uint *)0x0) {
    uVar3 = param_5 ^ 1;
    if ((*(uint *)((longlong)param_2 + 0xc) & 1) == 0) {
      uVar3 = param_5;
    }
    uVar7 = *(uint *)((longlong)param_2 + 0xc) & 0xf00;
    if (uVar7 != 0) {
      if (uVar7 == 0x100) {
        puVar6 = *(uint **)(param_1 + 0x1e);
      }
      else {
        if (uVar7 != 0x200) {
          return 1;
        }
        puVar6 = *(uint **)(param_1 + 0x20);
      }
    }
    if (uVar3 != 0) {
      *puVar6 = *puVar6 | *(uint *)(param_2 + 2);
      return 1;
    }
    *puVar6 = *puVar6 & ~*(uint *)(param_2 + 2);
  }
  return 1;
}

// FUN_14f697210 @ 14f697210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f697210(char *param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint *puVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  
  bVar3 = true;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar8 = 0;
  if (param_2 != -1) {
    if (*param_1 != '+') {
      if (*param_1 != '-') goto LAB_14f69726d;
      bVar3 = false;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
LAB_14f69726d:
  puVar7 = *(undefined8 **)(param_3 + 0x26);
  if (*(longlong *)(param_3 + 0x28) != 0) {
    do {
      if ((*(uint *)((longlong)puVar7 + 0xc) & *param_3 & 0xc) != 0) {
        if (param_2 == -1) {
          pbVar4 = (byte *)*puVar7;
          lVar10 = (longlong)param_1 - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar10;
            iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
        else {
          if (*(int *)(puVar7 + 1) != param_2) goto LAB_14f6972cf;
          iVar6 = _strnicmp((char *)*puVar7,param_1,(longlong)param_2);
        }
        if (iVar6 == 0) {
          puVar5 = *(uint **)(param_3 + 10);
          if (puVar5 != (uint *)0x0) {
            bVar2 = (bool)(bVar3 ^ 1);
            if ((*(uint *)((longlong)puVar7 + 0xc) & 1) == 0) {
              bVar2 = bVar3;
            }
            uVar9 = *(uint *)((longlong)puVar7 + 0xc) & 0xf00;
            if (uVar9 != 0) {
              if (uVar9 == 0x100) {
                puVar5 = *(uint **)(param_3 + 0x1e);
              }
              else {
                if (uVar9 != 0x200) {
                  return 1;
                }
                puVar5 = *(uint **)(param_3 + 0x20);
              }
            }
            if (bVar2) {
              *puVar5 = *puVar5 | *(uint *)(puVar7 + 2);
              return 1;
            }
            *puVar5 = *puVar5 & ~*(uint *)(puVar7 + 2);
          }
          return 1;
        }
      }
LAB_14f6972cf:
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 3;
    } while (uVar8 < *(ulonglong *)(param_3 + 0x28));
  }
  return 0;
}

