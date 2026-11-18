// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 40

// FUN_14f7cbad0 @ 14f7cbad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f7cbad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar4;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f7cbaf0;
  uVar2 = BIO_f_base64();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    ERR_put_error(0xd,0xd2,0x41,"crypto\\asn1\\asn_mime.c",CONCAT44(uVar1,0x69));
    uVar1 = 0;
  }
  else {
    uVar2 = BIO_push(lVar3,param_1);
    uVar1 = i2d_ASN1_bio_stream(uVar2,param_2,param_3,param_4,param_5,uVar4);
    BIO_ctrl(uVar2,0xb,0);
    BIO_pop(uVar2);
    BIO_free(lVar3);
  }
  return uVar1;
}

// PEM_write_bio_ASN1_stream @ 14f7cbbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
PEM_write_bio_ASN1_stream
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7cbbcb;
  BIO_printf(param_1,"-----BEGIN %s-----\n",param_5);
  uVar1 = FUN_14f7cbad0(param_1,param_2,param_3,param_4,param_6,uVar2);
  BIO_printf(param_1,"-----END %s-----\n",param_5);
  return uVar1;
}

// SMIME_crlf_copy @ 14f7cbc40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool SMIME_crlf_copy(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_468 [31];
  char acStack_449 [1025];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_468;
  uVar4 = BIO_f_buffer();
  lVar5 = BIO_new(uVar4);
  bVar2 = false;
  if (lVar5 != 0) {
    uVar4 = BIO_push(lVar5,param_2);
    uVar10 = 0;
    if ((char)param_3 < '\0') {
      iVar3 = BIO_read(param_1,acStack_449 + 1,0x400);
      while (0 < iVar3) {
        BIO_write(uVar4,acStack_449 + 1,iVar3);
        iVar3 = BIO_read(param_1,acStack_449 + 1,0x400);
      }
    }
    else {
      if ((param_3 & 1) != 0) {
        BIO_printf(uVar4,"Content-Type: text/plain\r\n\r\n");
      }
      iVar3 = BIO_gets(param_1,acStack_449 + 1,0x400);
      if (0 < iVar3) {
        uVar8 = uVar10;
        do {
          pcVar6 = acStack_449 + iVar3;
          uVar7 = uVar10;
          for (; 0 < iVar3; iVar3 = iVar3 + -1) {
            cVar1 = *pcVar6;
            if (cVar1 == '\n') {
              uVar7 = 1;
            }
            else if (((((int)uVar7 == 0) || ((param_3 & 0x80000) == 0)) || (cVar1 != ' ')) &&
                    (cVar1 != '\r')) break;
            pcVar6 = pcVar6 + -1;
          }
          if (iVar3 == 0) {
            if ((param_3 & 0x80000) == 0) goto LAB_14f7cbdce;
            uVar8 = (ulonglong)((int)uVar8 + 1);
          }
          else {
            uVar9 = uVar8;
            if (((param_3 & 0x80000) != 0) && (uVar9 = uVar10, 0 < (int)uVar8)) {
              do {
                BIO_write(uVar4,&s___,2);
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            BIO_write(uVar4,acStack_449 + 1,iVar3);
            uVar8 = uVar9;
LAB_14f7cbdce:
            if ((char)uVar7 != '\0') {
              BIO_write(uVar4,&s___,2);
            }
          }
          iVar3 = BIO_gets(param_1,acStack_449 + 1,0x400);
        } while (0 < iVar3);
      }
    }
    iVar3 = BIO_ctrl(uVar4,0xb,0);
    BIO_pop(uVar4);
    BIO_free(lVar5);
    bVar2 = 0 < iVar3;
  }
  return bVar2;
}

// SMIME_read_ASN1 @ 14f7cbe90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SMIME_read_ASN1(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_res10;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f7cbea2;
  local_res10 = 0;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  lVar4 = FUN_14f7cd3f0();
  if (lVar4 == 0) {
    ERR_put_error(0xd,0xd4,0xcf,"crypto\\asn1\\asn_mime.c",0x188);
    return 0;
  }
  local_48 = "content-type";
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = OPENSSL_sk_find(lVar4,&local_48);
  lVar5 = OPENSSL_sk_value(lVar4,uVar2);
  if ((lVar5 == 0) || (pcVar1 = *(char **)(lVar5 + 8), pcVar1 == (char *)0x0)) {
    OPENSSL_sk_pop_free(lVar4,FUN_14f7cd100);
    uVar8 = 0xd1;
    uVar2 = 399;
  }
  else {
    iVar3 = strcmp(pcVar1,"multipart/signed");
    if (iVar3 == 0) {
      local_58 = "boundary";
      local_50 = 0;
      uVar2 = OPENSSL_sk_find(*(undefined8 *)(lVar5 + 0x10),&local_58);
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar5 + 0x10),uVar2);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
        iVar3 = FUN_14f7cd790(param_1,*(longlong *)(lVar5 + 8),&local_res10);
        OPENSSL_sk_pop_free(lVar4,FUN_14f7cd100);
        uVar8 = local_res10;
        if ((iVar3 == 0) || (iVar3 = OPENSSL_sk_num(local_res10), iVar3 != 2)) {
          ERR_put_error(0xd,0xd4,0xd2,"crypto\\asn1\\asn_mime.c",0x1a0);
          OPENSSL_sk_pop_free(uVar8,BIO_vfree);
          return 0;
        }
        uVar6 = OPENSSL_sk_value(uVar8,1);
        lVar4 = FUN_14f7cd3f0(uVar6);
        if (lVar4 == 0) {
          ERR_put_error(0xd,0xd4,0xd0,"crypto\\asn1\\asn_mime.c",0x1a9);
          OPENSSL_sk_pop_free(uVar8,BIO_vfree);
          return 0;
        }
        local_48 = "content-type";
        local_40 = 0;
        uStack_38 = 0;
        uVar2 = OPENSSL_sk_find(lVar4,&local_48);
        lVar5 = OPENSSL_sk_value(lVar4,uVar2);
        if ((lVar5 != 0) && (pcVar1 = *(char **)(lVar5 + 8), pcVar1 != (char *)0x0)) {
          iVar3 = strcmp(pcVar1,"application/x-pkcs7-signature");
          if ((iVar3 != 0) && (iVar3 = strcmp(pcVar1,"application/pkcs7-signature"), iVar3 != 0)) {
            ERR_put_error(0xd,0xd4,0xd5,"crypto\\asn1\\asn_mime.c",0x1ba);
            ERR_add_error_data(2,"type: ",*(undefined8 *)(lVar5 + 8));
            OPENSSL_sk_pop_free(lVar4,FUN_14f7cd100);
            OPENSSL_sk_pop_free(uVar8,BIO_vfree);
            return 0;
          }
          OPENSSL_sk_pop_free(lVar4,FUN_14f7cd100);
          lVar4 = FUN_14f7ccc80(uVar6,param_3);
          if (lVar4 == 0) {
            ERR_put_error(0xd,0xd4,0xcc,"crypto\\asn1\\asn_mime.c",0x1c3);
            OPENSSL_sk_pop_free(uVar8,BIO_vfree);
            return 0;
          }
          if (param_2 == (undefined8 *)0x0) {
            OPENSSL_sk_pop_free(uVar8,BIO_vfree);
            return lVar4;
          }
          uVar7 = OPENSSL_sk_value(uVar8,0);
          *param_2 = uVar7;
          BIO_free(uVar6);
          OPENSSL_sk_free(uVar8);
          return lVar4;
        }
        OPENSSL_sk_pop_free(lVar4,FUN_14f7cd100);
        ERR_put_error(0xd,0xd4,0xd4,"crypto\\asn1\\asn_mime.c",0x1b3);
        OPENSSL_sk_pop_free(uVar8,BIO_vfree);
        return 0;
      }
      OPENSSL_sk_pop_free(lVar4,FUN_14f7cd100);
      uVar8 = 0xd3;
      uVar2 = 0x19a;
    }
    else {
      iVar3 = strcmp(pcVar1,"application/x-pkcs7-mime");
      if ((iVar3 != 0) && (iVar3 = strcmp(pcVar1,"application/pkcs7-mime"), iVar3 != 0)) {
        ERR_put_error(0xd,0xd4,0xcd,"crypto\\asn1\\asn_mime.c",0x1d5);
        ERR_add_error_data(2,"type: ",*(undefined8 *)(lVar5 + 8));
        OPENSSL_sk_pop_free(lVar4,FUN_14f7cd100);
        return 0;
      }
      OPENSSL_sk_pop_free(lVar4,FUN_14f7cd100);
      lVar4 = FUN_14f7ccc80(param_1,param_3);
      if (lVar4 != 0) {
        return lVar4;
      }
      uVar2 = 0x1de;
      uVar8 = 0xcb;
    }
  }
  ERR_put_error(0xd,0xd4,uVar8,"crypto\\asn1\\asn_mime.c",uVar2);
  return 0;
}

// SMIME_text @ 14f7cc330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool SMIME_text(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_1078 [32];
  undefined4 local_1058;
  char *local_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  undefined1 local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7cc33e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1078;
  lVar3 = FUN_14f7cd3f0();
  if (lVar3 == 0) {
    local_1058 = 0x221;
    ERR_put_error(0xd,0xd5,0xcf,"crypto\\asn1\\asn_mime.c");
  }
  else {
    local_1048 = "content-type";
    local_1040 = 0;
    uStack_1038 = 0;
    uVar1 = OPENSSL_sk_find(lVar3,&local_1048);
    lVar4 = OPENSSL_sk_value(lVar3,uVar1);
    if ((lVar4 == 0) || (*(char **)(lVar4 + 8) == (char *)0x0)) {
      local_1058 = 0x226;
      ERR_put_error(0xd,0xd5,0xce,"crypto\\asn1\\asn_mime.c");
    }
    else {
      iVar2 = strcmp(*(char **)(lVar4 + 8),"text/plain");
      if (iVar2 == 0) {
        OPENSSL_sk_pop_free(lVar3,FUN_14f7cd100);
        iVar2 = BIO_read(param_1,local_1028,0x1000);
        while (0 < iVar2) {
          BIO_write(param_2,local_1028,iVar2);
          iVar2 = BIO_read(param_1,local_1028,0x1000);
        }
        return -1 < iVar2;
      }
      local_1058 = 0x22b;
      ERR_put_error(0xd,0xd5,0xcd,"crypto\\asn1\\asn_mime.c");
      ERR_add_error_data(2,"type: ",*(undefined8 *)(lVar4 + 8));
    }
    OPENSSL_sk_pop_free(lVar3,FUN_14f7cd100);
  }
  return false;
}

// SMIME_write_ASN1 @ 14f7cc4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f7cc659) */
/* WARNING: Removing unreachable block (ram,0x00014f7cc660) */
/* WARNING: Removing unreachable block (ram,0x00014f7cc670) */
/* WARNING: Removing unreachable block (ram,0x00014f7cc673) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
SMIME_write_ASN1(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5,
                int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_c8 [32];
  char *local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68;
  ulonglong local_60;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f7cc4fa;
  local_60 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pcVar5 = "application/x-pkcs7-";
  pcVar4 = (char *)0x0;
  local_98 = param_8;
  pcVar3 = "\r\n";
  pcVar6 = "smime.p7m";
  if ((param_4 >> 10 & 1) == 0) {
    pcVar5 = "application/pkcs7-";
  }
  local_90 = param_7;
  if ((param_4 >> 0xb & 1) == 0) {
    pcVar3 = "\n";
  }
  if (((param_4 & 0x40) == 0) || (param_3 == 0)) {
    if (param_5 == 0x17) {
      pcVar4 = "enveloped-data";
    }
    else if (param_5 == 0x16) {
      if (param_6 == 0xcc) {
        pcVar4 = "signed-receipt";
      }
      else {
        iVar2 = OPENSSL_sk_num();
        pcVar4 = "signed-data";
        if (iVar2 < 0) {
          pcVar4 = "certs-only";
        }
      }
    }
    else if (param_5 == 0x312) {
      pcVar4 = "compressed-data";
      pcVar6 = "smime.p7z";
    }
    BIO_printf(param_1,"MIME-Version: 1.0%s",pcVar3);
    BIO_printf(param_1,"Content-Disposition: attachment;");
    BIO_printf(param_1," filename=\"%s\"%s",pcVar6,pcVar3);
    BIO_printf(param_1,"Content-Type: %smime;",pcVar5);
    if (pcVar4 != (char *)0x0) {
      BIO_printf(param_1," smime-type=%s;",pcVar4);
    }
    BIO_printf(param_1," name=\"%s\"%s",pcVar6,pcVar3);
    BIO_printf(param_1,"Content-Transfer-Encoding: base64%s%s",pcVar3,pcVar3);
    local_a8 = (char *)local_98;
    iVar2 = FUN_14f7cbad0(param_1,param_2,param_3,param_4);
    if (iVar2 != 0) {
      BIO_printf(param_1,"%s",pcVar3);
      return 1;
    }
  }
  else {
    iVar2 = RAND_bytes(local_88,0x20);
    if (0 < iVar2) {
      local_88[0] = __xmm_0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f & local_88[0];
      local_88[1] = UNK_151114551 & local_88[1];
      local_88[2] = UNK_151114552 & local_88[2];
      local_88[3] = UNK_151114553 & local_88[3];
      local_88[4] = UNK_151114554 & local_88[4];
      local_88[5] = UNK_151114555 & local_88[5];
      local_88[6] = UNK_151114556 & local_88[6];
      local_88[7] = UNK_151114557 & local_88[7];
      local_88[8] = UNK_151114558 & local_88[8];
      local_88[9] = UNK_151114559 & local_88[9];
      local_88[10] = UNK_15111455a & local_88[10];
      local_88[0xb] = UNK_15111455b & local_88[0xb];
      local_88[0xc] = UNK_15111455c & local_88[0xc];
      local_88[0xd] = UNK_15111455d & local_88[0xd];
      local_88[0xe] = UNK_15111455e & local_88[0xe];
      local_88[0xf] = UNK_15111455f & local_88[0xf];
      auVar9[0] = -((char)local_88[0] < __xmm_0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a);
      auVar9[1] = -((char)local_88[1] < UNK_151162d81);
      auVar9[2] = -((char)local_88[2] < UNK_151162d82);
      auVar9[3] = -((char)local_88[3] < UNK_151162d83);
      auVar9[4] = -((char)local_88[4] < UNK_151162d84);
      auVar9[5] = -((char)local_88[5] < UNK_151162d85);
      auVar9[6] = -((char)local_88[6] < UNK_151162d86);
      auVar9[7] = -((char)local_88[7] < UNK_151162d87);
      auVar9[8] = -((char)local_88[8] < UNK_151162d88);
      auVar9[9] = -((char)local_88[9] < UNK_151162d89);
      auVar9[10] = -((char)local_88[10] < UNK_151162d8a);
      auVar9[0xb] = -((char)local_88[0xb] < UNK_151162d8b);
      auVar9[0xc] = -((char)local_88[0xc] < UNK_151162d8c);
      auVar9[0xd] = -((char)local_88[0xd] < UNK_151162d8d);
      auVar9[0xe] = -((char)local_88[0xe] < UNK_151162d8e);
      auVar9[0xf] = -((char)local_88[0xf] < UNK_151162d8f);
      auVar7[0] = local_88[0] + __xmm_30303030303030303030303030303030;
      auVar7[1] = local_88[1] + UNK_1534f1dd1;
      auVar7[2] = local_88[2] + UNK_1534f1dd2;
      auVar7[3] = local_88[3] + UNK_1534f1dd3;
      auVar7[4] = local_88[4] + UNK_1534f1dd4;
      auVar7[5] = local_88[5] + UNK_1534f1dd5;
      auVar7[6] = local_88[6] + UNK_1534f1dd6;
      auVar7[7] = local_88[7] + UNK_1534f1dd7;
      auVar7[8] = local_88[8] + UNK_1534f1dd8;
      auVar7[9] = local_88[9] + UNK_1534f1dd9;
      auVar7[10] = local_88[10] + UNK_1534f1dda;
      auVar7[0xb] = local_88[0xb] + UNK_1534f1ddb;
      auVar7[0xc] = local_88[0xc] + UNK_1534f1ddc;
      auVar7[0xd] = local_88[0xd] + UNK_1534f1ddd;
      auVar7[0xe] = local_88[0xe] + UNK_1534f1dde;
      auVar7[0xf] = local_88[0xf] + UNK_1534f1ddf;
      auVar10[0] = local_88[0] + __xmm_37373737373737373737373737373737;
      auVar10[1] = local_88[1] + UNK_1534f1de1;
      auVar10[2] = local_88[2] + UNK_1534f1de2;
      auVar10[3] = local_88[3] + UNK_1534f1de3;
      auVar10[4] = local_88[4] + UNK_1534f1de4;
      auVar10[5] = local_88[5] + UNK_1534f1de5;
      auVar10[6] = local_88[6] + UNK_1534f1de6;
      auVar10[7] = local_88[7] + UNK_1534f1de7;
      auVar10[8] = local_88[8] + UNK_1534f1de8;
      auVar10[9] = local_88[9] + UNK_1534f1de9;
      auVar10[10] = local_88[10] + UNK_1534f1dea;
      auVar10[0xb] = local_88[0xb] + UNK_1534f1deb;
      auVar10[0xc] = local_88[0xc] + UNK_1534f1dec;
      auVar10[0xd] = local_88[0xd] + UNK_1534f1ded;
      auVar10[0xe] = local_88[0xe] + UNK_1534f1dee;
      auVar10[0xf] = local_88[0xf] + UNK_1534f1def;
      local_88 = ~(~auVar9 & ___xmm_ffffffffffffffffffffffffffffffff) & auVar7 |
                 auVar10 & ~auVar9 & ___xmm_ffffffffffffffffffffffffffffffff;
      local_78[0] = __xmm_0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f & local_78[0];
      local_78[1] = UNK_151114551 & local_78[1];
      local_78[2] = UNK_151114552 & local_78[2];
      local_78[3] = UNK_151114553 & local_78[3];
      local_78[4] = UNK_151114554 & local_78[4];
      local_78[5] = UNK_151114555 & local_78[5];
      local_78[6] = UNK_151114556 & local_78[6];
      local_78[7] = UNK_151114557 & local_78[7];
      local_78[8] = UNK_151114558 & local_78[8];
      local_78[9] = UNK_151114559 & local_78[9];
      local_78[10] = UNK_15111455a & local_78[10];
      local_78[0xb] = UNK_15111455b & local_78[0xb];
      local_78[0xc] = UNK_15111455c & local_78[0xc];
      local_78[0xd] = UNK_15111455d & local_78[0xd];
      local_78[0xe] = UNK_15111455e & local_78[0xe];
      local_78[0xf] = UNK_15111455f & local_78[0xf];
      auVar11[0] = -((char)local_78[0] < __xmm_0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a);
      auVar11[1] = -((char)local_78[1] < UNK_151162d81);
      auVar11[2] = -((char)local_78[2] < UNK_151162d82);
      auVar11[3] = -((char)local_78[3] < UNK_151162d83);
      auVar11[4] = -((char)local_78[4] < UNK_151162d84);
      auVar11[5] = -((char)local_78[5] < UNK_151162d85);
      auVar11[6] = -((char)local_78[6] < UNK_151162d86);
      auVar11[7] = -((char)local_78[7] < UNK_151162d87);
      auVar11[8] = -((char)local_78[8] < UNK_151162d88);
      auVar11[9] = -((char)local_78[9] < UNK_151162d89);
      auVar11[10] = -((char)local_78[10] < UNK_151162d8a);
      auVar11[0xb] = -((char)local_78[0xb] < UNK_151162d8b);
      auVar11[0xc] = -((char)local_78[0xc] < UNK_151162d8c);
      auVar11[0xd] = -((char)local_78[0xd] < UNK_151162d8d);
      auVar11[0xe] = -((char)local_78[0xe] < UNK_151162d8e);
      auVar11[0xf] = -((char)local_78[0xf] < UNK_151162d8f);
      auVar12[0] = local_78[0] + __xmm_37373737373737373737373737373737;
      auVar12[1] = local_78[1] + UNK_1534f1de1;
      auVar12[2] = local_78[2] + UNK_1534f1de2;
      auVar12[3] = local_78[3] + UNK_1534f1de3;
      auVar12[4] = local_78[4] + UNK_1534f1de4;
      auVar12[5] = local_78[5] + UNK_1534f1de5;
      auVar12[6] = local_78[6] + UNK_1534f1de6;
      auVar12[7] = local_78[7] + UNK_1534f1de7;
      auVar12[8] = local_78[8] + UNK_1534f1de8;
      auVar12[9] = local_78[9] + UNK_1534f1de9;
      auVar12[10] = local_78[10] + UNK_1534f1dea;
      auVar12[0xb] = local_78[0xb] + UNK_1534f1deb;
      auVar12[0xc] = local_78[0xc] + UNK_1534f1dec;
      auVar12[0xd] = local_78[0xd] + UNK_1534f1ded;
      auVar12[0xe] = local_78[0xe] + UNK_1534f1dee;
      auVar12[0xf] = local_78[0xf] + UNK_1534f1def;
      auVar8[0] = local_78[0] + __xmm_30303030303030303030303030303030;
      auVar8[1] = local_78[1] + UNK_1534f1dd1;
      auVar8[2] = local_78[2] + UNK_1534f1dd2;
      auVar8[3] = local_78[3] + UNK_1534f1dd3;
      auVar8[4] = local_78[4] + UNK_1534f1dd4;
      auVar8[5] = local_78[5] + UNK_1534f1dd5;
      auVar8[6] = local_78[6] + UNK_1534f1dd6;
      auVar8[7] = local_78[7] + UNK_1534f1dd7;
      auVar8[8] = local_78[8] + UNK_1534f1dd8;
      auVar8[9] = local_78[9] + UNK_1534f1dd9;
      auVar8[10] = local_78[10] + UNK_1534f1dda;
      auVar8[0xb] = local_78[0xb] + UNK_1534f1ddb;
      auVar8[0xc] = local_78[0xc] + UNK_1534f1ddc;
      auVar8[0xd] = local_78[0xd] + UNK_1534f1ddd;
      auVar8[0xe] = local_78[0xe] + UNK_1534f1dde;
      auVar8[0xf] = local_78[0xf] + UNK_1534f1ddf;
      local_78 = ~(~auVar11 & ___xmm_ffffffffffffffffffffffffffffffff) & auVar8 |
                 auVar12 & ~auVar11 & ___xmm_ffffffffffffffffffffffffffffffff;
      local_68 = 0;
      BIO_printf(param_1,"MIME-Version: 1.0%s",pcVar3);
      BIO_printf(param_1,"Content-Type: multipart/signed;");
      BIO_printf(param_1," protocol=\"%ssignature\";",pcVar5);
      BIO_puts(param_1," micalg=\"");
      FUN_14f7cca90(param_1,local_90);
      local_a8 = pcVar3;
      BIO_printf(param_1,"\"; boundary=\"----%s\"%s%s",local_88,pcVar3);
      BIO_printf(param_1,"This is an S/MIME signed message%s%s",pcVar3,pcVar3);
      BIO_printf(param_1,"------%s%s",local_88,pcVar3);
      uVar1 = local_98;
      local_a8 = (char *)local_98;
      iVar2 = FUN_14f7cc950(param_1,param_3,param_2,param_4);
      if (iVar2 != 0) {
        local_a8 = pcVar3;
        BIO_printf(param_1,"%s------%s%s",pcVar3,local_88);
        BIO_printf(param_1,"Content-Type: %ssignature;",pcVar5);
        BIO_printf(param_1," name=\"smime.p7s\"%s",pcVar3);
        BIO_printf(param_1,"Content-Transfer-Encoding: base64%s",pcVar3);
        BIO_printf(param_1,"Content-Disposition: attachment;");
        BIO_printf(param_1," filename=\"smime.p7s\"%s%s",pcVar3,pcVar3);
        local_a8 = (char *)uVar1;
        FUN_14f7cbad0(param_1,param_2,0,0);
        local_a8 = pcVar3;
        local_a0 = pcVar3;
        BIO_printf(param_1,"%s------%s--%s%s",pcVar3,local_88);
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f7cc950 @ 14f7cc950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7cc950(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res18;
  longlong local_38;
  longlong local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7cc973;
  bVar1 = true;
  lVar3 = *(longlong *)(param_5 + 0x18);
  local_res18 = param_3;
  if ((param_4 & 0x8040) == 0x40) {
    if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x18) == 0)) {
      ERR_put_error(0xd,0xd6,0xca,"crypto\\asn1\\asn_mime.c",0x154);
    }
    else {
      local_30 = 0;
      uStack_28 = 0;
      local_38 = param_1;
      iVar2 = (**(code **)(lVar3 + 0x18))(0xc,&local_res18,param_5,&local_38);
      if (0 < iVar2) {
        SMIME_crlf_copy(param_2,local_30,param_4);
        iVar2 = (**(code **)(lVar3 + 0x18))(0xd,&local_res18,param_5,&local_38);
        while (local_30 != param_1) {
          lVar3 = BIO_pop(local_30);
          BIO_free(local_30);
          local_30 = lVar3;
        }
        return 0 < iVar2;
      }
    }
    bVar1 = false;
  }
  else {
    SMIME_crlf_copy(param_2,param_1,param_4);
  }
  return bVar1;
}

// FUN_14f7cca90 @ 14f7cca90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7cca90(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_res18;
  
  bVar2 = false;
  bVar1 = false;
  iVar8 = 0;
  iVar3 = OPENSSL_sk_num(param_2);
  if (0 < iVar3) {
    do {
      if (bVar1) {
        BIO_write(param_1,",",1);
      }
      bVar1 = true;
      puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,iVar8);
      iVar3 = OBJ_obj2nid(*puVar5);
      uVar6 = OBJ_nid2sn(iVar3);
      lVar7 = EVP_get_digestbyname(uVar6);
      if ((lVar7 == 0) || (*(code **)(lVar7 + 0x40) == (code *)0x0)) {
LAB_14f7ccb64:
        if (iVar3 < 0x2a3) {
          if (iVar3 == 0x2a2) {
            BIO_puts(param_1,"sha-512");
          }
          else if (iVar3 == 4) {
            BIO_puts(param_1,"md5");
          }
          else if (iVar3 == 0x40) {
            BIO_puts(param_1,"sha1");
          }
          else if (iVar3 == 0x2a0) {
            BIO_puts(param_1,"sha-256");
          }
          else {
            if (iVar3 != 0x2a1) goto LAB_14f7ccbed;
            BIO_puts(param_1,"sha-384");
          }
        }
        else {
          if (iVar3 == 0x329) {
            BIO_puts(param_1,"gostr3411-94");
            return 0;
          }
          if (iVar3 == 0x3d6) {
            BIO_puts(param_1,"gostr3411-2012-256");
            return 0;
          }
          if (iVar3 == 0x3d7) {
            BIO_puts(param_1,"gostr3411-2012-512");
            return 0;
          }
LAB_14f7ccbed:
          if (bVar2) {
            bVar1 = false;
          }
          else {
            BIO_puts(param_1,"unknown");
            bVar2 = bVar1;
          }
        }
      }
      else {
        iVar4 = (**(code **)(lVar7 + 0x40))(0,2,0,&local_res18);
        if (iVar4 < 1) {
          if (iVar4 != -2) {
            return 0;
          }
          goto LAB_14f7ccb64;
        }
        BIO_puts(param_1,local_res18);
        CRYPTO_free(local_res18,"crypto\\asn1\\asn_mime.c");
      }
      iVar8 = iVar8 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
    } while (iVar8 < iVar3);
  }
  return 1;
}

// FUN_14f7ccc80 @ 14f7ccc80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7ccc80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7ccc95;
  uVar1 = BIO_f_base64();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ERR_put_error(0xd,0xd1,0x41,"crypto\\asn1\\asn_mime.c",0x89,uVar4);
    return 0;
  }
  uVar1 = BIO_push(lVar2,param_1);
  lVar3 = ASN1_item_d2i_bio(param_2,uVar1,0);
  if (lVar3 == 0) {
    ERR_put_error(0xd,0xd1,0x6e,"crypto\\asn1\\asn_mime.c",0x8f,uVar4);
  }
  BIO_ctrl(uVar1,0xb,0);
  BIO_pop(uVar1);
  BIO_free(lVar2);
  return lVar3;
}

// i2d_ASN1_bio_stream @ 14f7ccd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
i2d_ASN1_bio_stream(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                   undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7ccd8a;
  if ((param_4 >> 0xc & 1) == 0) {
    ASN1_item_i2d_bio(param_5,param_1,param_2);
  }
  else {
    lVar1 = BIO_new_NDEF(param_1,param_2,param_5);
    if (lVar1 == 0) {
      ERR_put_error(0xd,0xd3,0x41,"crypto\\asn1\\asn_mime.c",0x4b,uVar3);
      return 0;
    }
    SMIME_crlf_copy(param_3,lVar1,param_4);
    BIO_ctrl(lVar1,0xb,0);
    do {
      lVar2 = BIO_pop(lVar1);
      BIO_free(lVar1);
      lVar1 = lVar2;
    } while (lVar2 != param_1);
  }
  return 1;
}

// FUN_14f7cce40 @ 14f7cce40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f7cce40(char *param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = -1;
  uVar3 = (ulonglong)param_2;
  if (param_2 == 0xffffffff) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (param_1[uVar3] != '\0');
  }
  if (param_4 == -1) {
    do {
      lVar2 = lVar2 + 1;
    } while (param_3[lVar2] != '\0');
    param_4 = (int)lVar2;
  }
  if (param_4 + 2 <= (int)uVar3) {
    iVar1 = strncmp(param_1,"--",2);
    if (iVar1 == 0) {
      iVar1 = strncmp(param_1 + 2,param_3,(longlong)param_4);
      if (iVar1 == 0) {
        iVar1 = strncmp(param_1 + (longlong)param_4 + 2,"--",2);
        return 2 - (uint)(iVar1 != 0);
      }
    }
  }
  return 0;
}

// FUN_14f7ccf10 @ 14f7ccf10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7ccf10(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = (char *)0x0;
  pcVar3 = pcVar4;
  if (param_2 != 0) {
    pcVar3 = (char *)CRYPTO_strdup(param_2,"crypto\\asn1\\asn_mime.c",0x34a);
    pcVar5 = pcVar4;
    if (pcVar3 == (char *)0x0) goto LAB_14f7ccfe7;
    cVar1 = *pcVar3;
    pcVar5 = pcVar3;
    while (cVar1 != '\0') {
      cVar1 = ossl_tolower((int)*pcVar5);
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
  }
  if (((param_3 == 0) ||
      (pcVar4 = (char *)CRYPTO_strdup(param_3,"crypto\\asn1\\asn_mime.c",0x351),
      pcVar5 = (char *)0x0, pcVar4 != (char *)0x0)) &&
     (pcVar5 = (char *)CRYPTO_malloc(0x10,"crypto\\asn1\\asn_mime.c",0x356), pcVar5 != (char *)0x0))
  {
    *(char **)pcVar5 = pcVar3;
    *(char **)(pcVar5 + 8) = pcVar4;
    iVar2 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x10),pcVar5);
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_14f7ccfe7:
  CRYPTO_free(pcVar3,"crypto\\asn1\\asn_mime.c",0x35f);
  CRYPTO_free(pcVar4,"crypto\\asn1\\asn_mime.c",0x360);
  CRYPTO_free(pcVar5,"crypto\\asn1\\asn_mime.c",0x361);
  return 0;
}

// FUN_14f7cd0c0 @ 14f7cd0c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cd0c0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7cd0cc;
  local_20 = 0;
  uStack_18 = 0;
  local_28 = param_2;
  uVar1 = OPENSSL_sk_find(0,&local_28);
  OPENSSL_sk_value(param_1,uVar1);
  return;
}

// FUN_14f7cd100 @ 14f7cd100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cd100(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(*param_1,"crypto\\asn1\\asn_mime.c",0x394);
    CRYPTO_free(param_1[1],"crypto\\asn1\\asn_mime.c",0x395);
    if (param_1[2] != 0) {
      OPENSSL_sk_pop_free(param_1[2],FUN_14f7cd390);
    }
    CRYPTO_free(param_1,"crypto\\asn1\\asn_mime.c",0x398);
  }
  return;
}

// FUN_14f7cd180 @ 14f7cd180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_14f7cd180(longlong param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  
  pcVar4 = (char *)0x0;
  pcVar2 = pcVar4;
  if (param_1 != 0) {
    pcVar2 = (char *)CRYPTO_strdup(param_1,"crypto\\asn1\\asn_mime.c",0x329);
    if (pcVar2 == (char *)0x0) {
      return (char *)0x0;
    }
    cVar1 = *pcVar2;
    pcVar3 = pcVar2;
    while (cVar1 != '\0') {
      cVar1 = ossl_tolower((int)*pcVar3);
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  pcVar3 = pcVar4;
  if (param_2 != 0) {
    pcVar3 = (char *)CRYPTO_strdup(param_2,"crypto\\asn1\\asn_mime.c",0x32f);
    if (pcVar3 == (char *)0x0) goto LAB_14f7cd267;
    cVar1 = *pcVar3;
    pcVar4 = pcVar3;
    while (cVar1 != '\0') {
      cVar1 = ossl_tolower((int)*pcVar4);
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
  }
  pcVar4 = (char *)CRYPTO_malloc(0x18,"crypto\\asn1\\asn_mime.c",0x334);
  if (pcVar4 != (char *)0x0) {
    *(char **)pcVar4 = pcVar2;
    *(char **)(pcVar4 + 8) = pcVar3;
    lVar5 = OPENSSL_sk_new(&LAB_14f7cd2d0);
    *(longlong *)(pcVar4 + 0x10) = lVar5;
    if (lVar5 != 0) {
      return pcVar4;
    }
  }
LAB_14f7cd267:
  CRYPTO_free(pcVar2,"crypto\\asn1\\asn_mime.c",0x33e);
  CRYPTO_free(pcVar3,"crypto\\asn1\\asn_mime.c",0x33f);
  CRYPTO_free(pcVar4,"crypto\\asn1\\asn_mime.c",0x340);
  return (char *)0x0;
}

// FUN_14f7cd340 @ 14f7cd340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cd340(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = param_2;
  uVar1 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 0x10),&local_18);
  OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10),uVar1);
  return;
}

// FUN_14f7cd390 @ 14f7cd390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cd390(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"crypto\\asn1\\asn_mime.c",0x39d);
  CRYPTO_free(param_1[1],"crypto\\asn1\\asn_mime.c",0x39e);
  CRYPTO_free(param_1,"crypto\\asn1\\asn_mime.c",0x39f);
  return;
}

// FUN_14f7cd3f0 @ 14f7cd3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f7cd3f0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStack_458 [32];
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_458;
  puVar7 = (undefined8 *)0x0;
  lVar4 = OPENSSL_sk_new(&LAB_14f7cd050);
  if (lVar4 != 0) {
    iVar2 = BIO_gets(param_1,local_438,0x400);
    while (0 < iVar2) {
      if (puVar7 == (undefined8 *)0x0) {
LAB_14f7cd490:
        iVar2 = 1;
      }
      else {
        iVar3 = ossl_ctype_check((int)local_438[0],8);
        iVar2 = 3;
        if (iVar3 == 0) goto LAB_14f7cd490;
      }
      pcVar10 = local_438;
      uVar5 = 0;
      pcVar8 = local_438;
      cVar1 = local_438[0];
      while (((cVar1 != '\0' && (cVar1 != '\r')) && (cVar1 != '\n'))) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(iVar2) {
        case 2:
          if (cVar1 == ':') {
            iVar2 = 2;
LAB_14f7cd4f2:
            *pcVar10 = '\0';
            uVar5 = FUN_14f7cdcc0(pcVar8);
            pcVar8 = pcVar10 + 1;
          }
          break;
        case 3:
          if (cVar1 == ';') {
            *pcVar10 = '\0';
            uVar6 = FUN_14f7cdcc0(pcVar8);
            puVar7 = (undefined8 *)FUN_14f7cd180(uVar5,uVar6);
            if (puVar7 == (undefined8 *)0x0) goto LAB_14f7cd680;
            iVar2 = OPENSSL_sk_push(lVar4,puVar7);
            if (iVar2 == 0) goto LAB_14f7cd62b;
            uVar5 = 0;
            pcVar8 = pcVar10 + 1;
            iVar2 = 3;
          }
          else if (cVar1 == '(') {
            iVar2 = 6;
          }
          break;
        case 4:
          if (cVar1 == '=') {
            iVar2 = 4;
            goto LAB_14f7cd4f2;
          }
        }
        pcVar9 = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
        cVar1 = *pcVar9;
      }
      if (iVar2 == 2) {
        cVar1 = *pcVar8;
        while (cVar1 != '\0') {
          if (cVar1 == '\"') {
            pcVar9 = (char *)0x0;
            if (pcVar8[1] != '\0') {
              pcVar9 = pcVar8 + 1;
            }
            goto LAB_14f7cd5fd;
          }
          iVar2 = ossl_ctype_check((int)cVar1,8);
          pcVar9 = pcVar8;
          if (iVar2 == 0) goto LAB_14f7cd5fd;
          pcVar9 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar9;
        }
        pcVar9 = (char *)0x0;
LAB_14f7cd5fd:
        uVar6 = FUN_14f7cdc20(pcVar9);
        puVar7 = (undefined8 *)FUN_14f7cd180(uVar5,uVar6);
        if (puVar7 == (undefined8 *)0x0) {
LAB_14f7cd680:
          OPENSSL_sk_pop_free(lVar4,FUN_14f7cd100);
          return 0;
        }
        iVar2 = OPENSSL_sk_push(lVar4,puVar7);
        if (iVar2 == 0) {
LAB_14f7cd62b:
          CRYPTO_free(*puVar7,"crypto\\asn1\\asn_mime.c",0x394);
          CRYPTO_free(puVar7[1],"crypto\\asn1\\asn_mime.c",0x395);
          if (puVar7[2] != 0) {
            OPENSSL_sk_pop_free(puVar7[2],FUN_14f7cd390);
          }
          CRYPTO_free(puVar7,"crypto\\asn1\\asn_mime.c",0x398);
          goto LAB_14f7cd680;
        }
      }
      else if (iVar2 == 4) {
        cVar1 = *pcVar8;
        while (cVar1 != '\0') {
          if (cVar1 == '\"') {
            pcVar9 = (char *)0x0;
            if (pcVar8[1] != '\0') {
              pcVar9 = pcVar8 + 1;
            }
            goto LAB_14f7cd6d9;
          }
          iVar2 = ossl_ctype_check((int)cVar1,8);
          pcVar9 = pcVar8;
          if (iVar2 == 0) goto LAB_14f7cd6d9;
          pcVar9 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar9;
        }
        pcVar9 = (char *)0x0;
LAB_14f7cd6d9:
        uVar6 = FUN_14f7cdc20(pcVar9);
        FUN_14f7ccf10(puVar7,uVar5,uVar6);
      }
      if (pcVar10 == local_438) {
        return lVar4;
      }
      iVar2 = BIO_gets(param_1,local_438,0x400);
    }
  }
  return lVar4;
}

// FUN_14f7cd790 @ 14f7cd790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f7cd790(undefined8 param_1,char *param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar16;
  undefined1 auStack_478 [32];
  longlong local_458;
  undefined8 local_450;
  char local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong uVar11;
  
  uStack_40 = 0x14f7cd7aa;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_478;
  lVar9 = 0;
  uVar14 = 0xffffffffffffffff;
  do {
    uVar14 = uVar14 + 1;
  } while (param_2[uVar14] != '\0');
  cVar16 = '\0';
  bVar1 = true;
  local_450 = param_1;
  local_458 = OPENSSL_sk_new_null();
  *param_3 = local_458;
  if (local_458 != 0) {
    uVar5 = BIO_gets(param_1,local_448,0x400);
    bVar4 = false;
    while (0 < (int)uVar5) {
      uVar13 = (ulonglong)uVar5;
      uVar15 = uVar14 & 0xffffffff;
      uVar10 = uVar13;
      if (uVar5 == 0xffffffff) {
        uVar11 = 0xffffffffffffffff;
        do {
          uVar10 = uVar11 + 1;
          lVar3 = uVar11 + 1;
          uVar11 = uVar10;
        } while (local_448[lVar3] != '\0');
      }
      if ((int)uVar14 == -1) {
        uVar15 = 0xffffffffffffffff;
        do {
          uVar15 = uVar15 + 1;
        } while (param_2[uVar15] != '\0');
      }
      iVar7 = (int)uVar15;
      bVar2 = bVar4;
      if (((int)uVar10 < iVar7 + 2) || (iVar6 = strncmp(local_448,"--",2), iVar6 != 0)) {
LAB_14f7cd8b5:
        if (cVar16 != '\0') {
          bVar2 = false;
          pcVar12 = local_448 + (longlong)(int)uVar5 + -1;
          while (0 < (int)uVar5) {
            uVar5 = (uint)uVar13;
            if (*pcVar12 == '\n') {
              bVar2 = true;
            }
            else if (*pcVar12 != '\r') break;
            uVar5 = uVar5 - 1;
            uVar13 = (ulonglong)uVar5;
            pcVar12 = pcVar12 + -1;
          }
          if (bVar1) {
            bVar1 = false;
            if ((lVar9 != 0) && (iVar7 = OPENSSL_sk_push(local_458,lVar9), iVar7 == 0)) break;
            uVar8 = BIO_s_mem();
            lVar9 = BIO_new(uVar8);
            if (lVar9 == 0) {
              return 0;
            }
            BIO_ctrl(lVar9,0x82,0,0);
          }
          else if (bVar4) {
            BIO_write(lVar9,&s___,2);
          }
          if (uVar5 != 0) {
            BIO_write(lVar9,local_448,uVar5);
          }
        }
      }
      else {
        iVar6 = strncmp(local_448 + 2,param_2,(longlong)iVar7);
        if (iVar6 != 0) goto LAB_14f7cd8b5;
        iVar7 = strncmp(local_448 + (longlong)iVar7 + 2,"--",2);
        if (iVar7 == 0) {
          iVar7 = OPENSSL_sk_push(local_458,lVar9);
          if (iVar7 != 0) {
            return 1;
          }
          break;
        }
        bVar1 = true;
        cVar16 = cVar16 + '\x01';
      }
      uVar5 = BIO_gets(local_450,local_448);
      bVar4 = bVar2;
    }
    BIO_free(lVar9);
  }
  return 0;
}

// FUN_14f7cd9e0 @ 14f7cd9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cd9e0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f7cda00 @ 14f7cda00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cda00(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7cda20 @ 14f7cda20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cda20(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7cda40 @ 14f7cda40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cda40(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7cda60 @ 14f7cda60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cda60(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7cda80 @ 14f7cda80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cda80(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7cdaa0 @ 14f7cdaa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdaa0(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f7cdac0 @ 14f7cdac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdac0(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f7cdae0 @ 14f7cdae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdae0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7cdb00 @ 14f7cdb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdb00(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7cdb20 @ 14f7cdb20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdb20(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7cdb40 @ 14f7cdb40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdb40(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f7cdb60 @ 14f7cdb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdb60(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f7cdb80 @ 14f7cdb80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdb80(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7cdba0 @ 14f7cdba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdba0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7cdbc0 @ 14f7cdbc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdbc0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7cdbe0 @ 14f7cdbe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdbe0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7cdc00 @ 14f7cdc00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdc00(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7cdc20 @ 14f7cdc20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_14f7cdc20(char *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar4;
  longlong lVar3;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (param_1[lVar2] != '\0');
  pcVar4 = param_1 + lVar3;
  while( true ) {
    if (pcVar4 < param_1) {
      return (char *)0x0;
    }
    if (*pcVar4 == '\"') break;
    iVar1 = ossl_ctype_check((int)*pcVar4,8);
    if (iVar1 == 0) {
      return param_1;
    }
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + -1;
  }
  if (pcVar4 + -1 == param_1) {
    return (char *)0x0;
  }
  *pcVar4 = '\0';
  return param_1;
}

// FUN_14f7cdcc0 @ 14f7cdcc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7cdcc0(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (cVar1 == '\"') {
      pcVar3 = (char *)0x0;
      if (param_1[1] != '\0') {
        pcVar3 = param_1 + 1;
      }
      FUN_14f7cdc20(pcVar3);
      return;
    }
    iVar2 = ossl_ctype_check((int)cVar1,8);
    if (iVar2 == 0) goto LAB_14f7cdd02;
    pcVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar3;
  }
  param_1 = (char *)0x0;
LAB_14f7cdd02:
  FUN_14f7cdc20(param_1);
  return;
}

// FUN_14f7cdd90 @ 14f7cdd90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_14f7cdd90(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    if (cVar1 == '\"') break;
    iVar2 = ossl_ctype_check((int)cVar1,8);
    if (iVar2 == 0) {
      return param_1;
    }
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  pcVar3 = (char *)0x0;
  if (param_1[1] != '\0') {
    pcVar3 = param_1 + 1;
  }
  return pcVar3;
}

