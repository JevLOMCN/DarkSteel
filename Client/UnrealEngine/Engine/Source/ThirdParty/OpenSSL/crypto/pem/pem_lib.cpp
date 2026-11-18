// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 24

// PEM_ASN1_read @ 14f6e5c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PEM_ASN1_read(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f6e5c40;
  uVar1 = BIO_s_file();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ERR_put_error(9,0x66,7,"crypto\\pem\\pem_lib.c",CONCAT44(uVar3,0x71),uVar4);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar2,0x6a,0,param_3);
    uVar1 = PEM_ASN1_read_bio(param_1,param_2,lVar2,param_4,param_5,param_6);
    BIO_free(lVar2);
  }
  return uVar1;
}

// PEM_ASN1_write @ 14f6e5cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
PEM_ASN1_write(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
              undefined8 param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar4;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar4 = 0x14f6e5d10;
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    ERR_put_error(9,0x68,7,"crypto\\pem\\pem_lib.c",CONCAT44(uVar1,0x12a));
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar3,0x6a,0,param_3);
    uVar1 = PEM_ASN1_write_bio(param_1,param_2,lVar3,param_4,param_5,param_6,param_7,param_8,param_9
                               ,uVar4);
    BIO_free(lVar3);
  }
  return uVar1;
}

// PEM_ASN1_write_bio @ 14f6e5df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong PEM_ASN1_write_bio(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                            longlong param_5,char *param_6,int param_7,code *param_8,
                            undefined8 param_9)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar9;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  undefined4 local_510;
  undefined1 *local_508;
  undefined8 local_500;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  undefined8 local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  ulonglong local_4c8;
  code *local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8 [16];
  undefined1 local_498 [64];
  char local_458 [1024];
  ulonglong local_58 [2];
  undefined8 uStack_48;
  longlong lVar5;
  ulonglong uVar8;
  
  uStack_48 = 0x14f6e5e0f;
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_538;
  uVar8 = 0;
  uVar7 = 0;
  local_4c0 = param_8;
  uVar9 = 0;
  local_4e8 = param_9;
  local_4d8 = 0;
  local_4f0 = 0;
  local_4f8 = 0;
  local_4f4 = 0;
  local_4e0 = 0;
  local_4d0 = param_4;
  local_4b8 = param_2;
  local_4b0 = param_3;
  if (param_5 == 0) {
LAB_14f6e5f12:
    uVar6 = local_4d0;
    local_4f0 = (*param_1)(local_4d0,0);
    if (local_4f0 < 1) {
      local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x150);
      ERR_put_error(9,0x69,0xd,"crypto\\pem\\pem_lib.c");
      local_4f0 = 0;
      uVar7 = uVar8;
    }
    else {
      uVar9 = CRYPTO_malloc(local_4f0 + 0x14,"crypto\\pem\\pem_lib.c",0x156);
      if (uVar9 == 0) {
        local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x158);
        ERR_put_error(9,0x69,0x41,"crypto\\pem\\pem_lib.c");
        uVar7 = uVar8;
      }
      else {
        local_4c8 = uVar9;
        local_4f8 = (*param_1)(uVar6,&local_4c8);
        if (param_5 == 0) {
          local_458[0] = '\0';
        }
        else {
          if (param_6 == (char *)0x0) {
            if (local_4c0 == (code *)0x0) {
              param_7 = PEM_def_callback();
            }
            else {
              param_7 = (*local_4c0)(local_458,0x400,1,local_4e8);
            }
            if (param_7 < 1) {
              local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x165);
              ERR_put_error(9,0x69,0x6f,"crypto\\pem\\pem_lib.c");
              goto LAB_14f6e616c;
            }
            param_6 = local_458;
          }
          uVar1 = EVP_CIPHER_iv_length(param_5);
          iVar2 = RAND_bytes(local_4a8,uVar1);
          if (iVar2 < 1) goto LAB_14f6e616c;
          uVar6 = EVP_md5();
          local_500 = 0;
          local_508 = local_498;
          local_510 = 1;
          local_518 = (undefined1 *)CONCAT44(local_518._4_4_,param_7);
          iVar2 = EVP_BytesToKey(param_5,uVar6,local_4a8,param_6);
          if (iVar2 == 0) goto LAB_14f6e616c;
          if (param_6 == local_458) {
            OPENSSL_cleanse(local_458,0x400);
          }
          local_458[0] = '\0';
          lVar3 = -1;
          do {
            lVar4 = lVar3;
            lVar3 = lVar4 + 1;
          } while (local_458[lVar4 + 1] != '\0');
          BIO_snprintf(local_458 + lVar4 + 1,(longlong)local_58 - (longlong)(local_458 + lVar4 + 1),
                       "Proc-Type: 4,%s\n","ENCRYPTED");
          uVar1 = EVP_CIPHER_iv_length(param_5);
          PEM_dek_info(local_458,local_4e0,uVar1,local_4a8);
          lVar3 = EVP_CIPHER_CTX_new();
          local_4d8 = lVar3;
          if (lVar3 == 0) goto LAB_14f6e616c;
          local_518 = local_4a8;
          iVar2 = EVP_EncryptInit_ex(lVar3,param_5,0,local_498);
          if (iVar2 == 0) goto LAB_14f6e616c;
          local_518 = (undefined1 *)CONCAT44(local_518._4_4_,local_4f8);
          iVar2 = EVP_EncryptUpdate(lVar3,uVar9,&local_4f4,uVar9);
          if ((iVar2 == 0) ||
             (iVar2 = EVP_EncryptFinal_ex(lVar3,(longlong)local_4f4 + uVar9,&local_4f8), iVar2 == 0)
             ) goto LAB_14f6e616c;
          local_4f8 = local_4f8 + local_4f4;
        }
        local_518 = (undefined1 *)CONCAT44(local_518._4_4_,local_4f8);
        local_4f8 = PEM_write_bio(local_4b0,local_4b8,local_458,uVar9);
        uVar7 = (ulonglong)(0 < local_4f8);
      }
    }
  }
  else {
    uVar1 = EVP_CIPHER_nid(param_5);
    lVar3 = OBJ_nid2sn(uVar1);
    local_4e0 = lVar3;
    if (((lVar3 != 0) && (iVar2 = EVP_CIPHER_iv_length(param_5), iVar2 != 0)) &&
       (iVar2 = EVP_CIPHER_iv_length(param_5), iVar2 < 0x11)) {
      iVar2 = EVP_CIPHER_iv_length(param_5);
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (*(char *)(lVar3 + lVar4) != '\0');
      if ((ulonglong)(lVar5 + 0x25 + (longlong)(iVar2 * 2)) < 0x401) goto LAB_14f6e5f12;
    }
    local_518 = (undefined1 *)CONCAT44(local_518._4_4_,0x14a);
    ERR_put_error(9,0x69,0x71,"crypto\\pem\\pem_lib.c");
    uVar7 = uVar8;
    uVar9 = uVar8;
  }
LAB_14f6e616c:
  OPENSSL_cleanse(local_498,0x40);
  OPENSSL_cleanse(local_4a8,0x10);
  EVP_CIPHER_CTX_free(local_4d8);
  OPENSSL_cleanse(local_458,0x400);
  CRYPTO_clear_free(uVar9,local_4f0,"crypto\\pem\\pem_lib.c",0x194);
  return uVar7;
}

// PEM_bytes_read_bio @ 14f6e61f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_bytes_read_bio(void)

{
  FUN_14f6e79c0();
  return;
}

// PEM_bytes_read_bio_secmem @ 14f6e6240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_bytes_read_bio_secmem(void)

{
  FUN_14f6e79c0();
  return;
}

// PEM_def_callback @ 14f6e6290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong PEM_def_callback(void *param_1,uint param_2,int param_3,void *param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6e62a5;
  if (param_4 != (void *)0x0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)((longlong)param_4 + lVar4) != '\0');
    uVar3 = (uint)lVar4;
    if ((int)param_2 < (int)(uint)lVar4) {
      uVar3 = param_2;
    }
    memcpy(param_1,param_4,(longlong)(int)uVar3);
    return (ulonglong)uVar3;
  }
  pcVar2 = (char *)EVP_get_pw_prompt();
  pcVar6 = "Enter PEM pass phrase:";
  if (pcVar2 != (char *)0x0) {
    pcVar6 = pcVar2;
  }
  iVar1 = EVP_read_pw_string_min
                    (param_1,-(param_3 != 0) & 4,(ulonglong)param_2,pcVar6,param_3,uVar7);
  if (iVar1 != 0) {
    ERR_put_error(9,100,0x6d,"crypto\\pem\\pem_lib.c",0x3b);
    memset(param_1,0,(ulonglong)param_2);
    return 0xffffffffffffffff;
  }
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(char *)((longlong)param_1 + uVar5) != '\0');
  return uVar5 & 0xffffffff;
}

// PEM_dek_info @ 14f6e6390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_dek_info(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  int iVar4;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  lVar2 = lVar2 + param_1;
  iVar4 = ((int)param_1 - (int)lVar2) + 0x400;
  iVar1 = BIO_snprintf(lVar2,(longlong)iVar4,"DEK-Info: %s,",param_2);
  if (0 < iVar1) {
    iVar4 = iVar4 - iVar1;
    puVar3 = (undefined2 *)(lVar2 + iVar1);
    lVar2 = 0;
    if (0 < (longlong)param_3) {
      do {
        iVar1 = BIO_snprintf(puVar3,(longlong)iVar4,"%02X",*(undefined1 *)(lVar2 + param_4));
        if (iVar1 < 1) {
          return;
        }
        iVar4 = iVar4 - iVar1;
        lVar2 = lVar2 + 1;
        puVar3 = (undefined2 *)((longlong)puVar3 + (longlong)iVar1);
      } while (lVar2 < param_3);
    }
    if (1 < iVar4) {
      *puVar3 = 10;
    }
  }
  return;
}

// PEM_do_header @ 14f6e6460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int PEM_do_header(longlong *param_1,longlong param_2,int *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_4c8 [32];
  longlong *local_4a8;
  undefined4 local_4a0;
  undefined1 *local_498;
  undefined8 local_490;
  int local_488 [4];
  undefined1 local_478 [64];
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  local_488[0] = *param_3;
  if (*param_1 == 0) {
    return 1;
  }
  if (param_4 == (code *)0x0) {
    iVar1 = PEM_def_callback();
  }
  else {
    iVar1 = (*param_4)(local_438,0x400,0,param_5);
  }
  if (iVar1 < 0) {
    local_4a8 = (longlong *)CONCAT44(local_4a8._4_4_,0x1b2);
    ERR_put_error(9,0x6a,0x68,"crypto\\pem\\pem_lib.c");
    return 0;
  }
  uVar3 = EVP_md5();
  local_490 = 0;
  local_498 = local_478;
  local_4a0 = 1;
  local_4a8 = (longlong *)CONCAT44(local_4a8._4_4_,iVar1);
  iVar1 = EVP_BytesToKey(*param_1,uVar3,param_1 + 1,local_438);
  if ((iVar1 == 0) || (lVar4 = EVP_CIPHER_CTX_new(), lVar4 == 0)) {
    return 0;
  }
  local_4a8 = param_1 + 1;
  iVar2 = EVP_DecryptInit_ex(lVar4,*param_1,0,local_478);
  iVar1 = 0;
  if (iVar2 != 0) {
    local_4a8 = (longlong *)CONCAT44(local_4a8._4_4_,local_488[0]);
    iVar2 = EVP_DecryptUpdate(lVar4,param_2,local_488,param_2);
    iVar1 = 0;
    if (iVar2 != 0) {
      *param_3 = local_488[0];
      iVar1 = EVP_DecryptFinal_ex(lVar4,local_488[0] + param_2,local_488);
      if (iVar1 != 0) {
        *param_3 = *param_3 + local_488[0];
        goto LAB_14f6e65e5;
      }
    }
  }
  local_4a8 = (longlong *)CONCAT44(local_4a8._4_4_,0x1cd);
  ERR_put_error(9,0x6a,0x65,"crypto\\pem\\pem_lib.c");
LAB_14f6e65e5:
  EVP_CIPHER_CTX_free(lVar4);
  OPENSSL_cleanse(local_438,0x400);
  OPENSSL_cleanse(local_478,0x40);
  return iVar1;
}

// PEM_get_EVP_CIPHER_INFO @ 14f6e6650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool PEM_get_EVP_CIPHER_INFO(char *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *local_res8;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f6e6664;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (*param_1 == '\n')) {
    return true;
  }
  iVar2 = strncmp(param_1,"Proc-Type:",10);
  if (iVar2 != 0) {
    ERR_put_error(9,0x6b,0x6b,"crypto\\pem\\pem_lib.c",0x1f0,uVar9);
    return false;
  }
  sVar3 = strspn(param_1 + 10," \t");
  pcVar5 = param_1 + 10 + sVar3;
  if (*pcVar5 == '4') {
    pcVar6 = pcVar5 + 2;
    if (pcVar5[1] != ',') {
      return false;
    }
    sVar3 = strspn(pcVar6," \t");
    iVar2 = strncmp(pcVar6 + sVar3,"ENCRYPTED",9);
    if (iVar2 == 0) {
      pcVar5 = pcVar6 + sVar3 + 9;
      sVar3 = strspn(pcVar5," \t\r\n");
      if (sVar3 != 0) {
        sVar3 = strspn(pcVar5," \t\r");
        pcVar5 = pcVar5 + sVar3;
        if (*pcVar5 != '\n') {
          ERR_put_error(9,0x6b,0x70,"crypto\\pem\\pem_lib.c",0x203);
          return false;
        }
        iVar2 = strncmp(pcVar5 + 1,"DEK-Info:",9);
        if (iVar2 == 0) {
          sVar3 = strspn(pcVar5 + 10," \t");
          pcVar5 = pcVar5 + 10 + sVar3;
          sVar3 = strcspn(pcVar5," \t,");
          pcVar6 = pcVar5 + sVar3;
          cVar1 = *pcVar6;
          *pcVar6 = '\0';
          lVar4 = EVP_get_cipherbyname(pcVar5);
          *param_2 = lVar4;
          *pcVar6 = cVar1;
          sVar3 = strspn(pcVar6," \t");
          pcVar6 = pcVar6 + sVar3;
          local_res8 = pcVar6;
          if (lVar4 == 0) {
            uVar8 = 0x21f;
            uVar7 = 0x72;
          }
          else {
            iVar2 = EVP_CIPHER_iv_length(lVar4);
            if ((iVar2 < 1) ||
               (cVar1 = *pcVar6, pcVar6 = pcVar6 + 1, local_res8 = pcVar6, cVar1 == ',')) {
              if ((iVar2 != 0) || (*pcVar6 != ',')) {
                uVar7 = EVP_CIPHER_iv_length(lVar4);
                iVar2 = FUN_14f6e78f0(&local_res8,param_2 + 1,uVar7);
                return iVar2 != 0;
              }
              uVar8 = 0x227;
              uVar7 = 0x82;
            }
            else {
              uVar8 = 0x224;
              uVar7 = 0x81;
            }
          }
          ERR_put_error(9,0x6b,uVar7,"crypto\\pem\\pem_lib.c",uVar8);
          return false;
        }
        ERR_put_error(9,0x6b,0x69,"crypto\\pem\\pem_lib.c",0x20c);
        return false;
      }
    }
    ERR_put_error(9,0x6b,0x6a,"crypto\\pem\\pem_lib.c",0x1fd);
    return false;
  }
  return false;
}

// PEM_proc_type @ 14f6e6940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_proc_type(longlong param_1,int param_2)

{
  longlong lVar1;
  char *pcVar2;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_1 + lVar1) != '\0');
  if (param_2 == 10) {
    pcVar2 = "ENCRYPTED";
  }
  else if (param_2 == 0x1e) {
    pcVar2 = "MIC-CLEAR";
  }
  else {
    pcVar2 = "MIC-ONLY";
    if (param_2 != 0x14) {
      pcVar2 = "BAD-TYPE";
    }
  }
  BIO_snprintf(lVar1 + param_1,(param_1 - (lVar1 + param_1)) + 0x400,"Proc-Type: 4,%s\n",pcVar2);
  return;
}

// PEM_read @ 14f6e69c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
PEM_read(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
        undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar4;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f6e69e0;
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    ERR_put_error(9,0x6c,7,"crypto\\pem\\pem_lib.c",CONCAT44(uVar1,0x2a0),uVar4);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar3,0x6a,0,param_1);
    uVar1 = PEM_read_bio_ex(lVar3,param_2,param_3,param_4,param_5,2);
    BIO_free(lVar3);
  }
  return uVar1;
}

// PEM_read_bio @ 14f6e6a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio(void)

{
  PEM_read_bio_ex();
  return;
}

// PEM_read_bio_ex @ 14f6e6ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong PEM_read_bio_ex(undefined8 param_1,ulonglong *param_2,longlong *param_3,longlong *param_4,
                         uint *param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res20;
  undefined4 uVar11;
  int local_68 [2];
  uint *local_60;
  ulonglong local_58;
  ulonglong local_50 [2];
  
  uVar1 = param_6;
  local_50[1] = 0x14f6e6ae8;
  uVar9 = 0;
  local_50[0] = 0;
  *param_5 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  if (((byte)param_6 & 6) == 6) {
    uVar11 = 0x392;
    uVar3 = 7;
    uVar4 = uVar9;
    uVar5 = uVar9;
  }
  else {
    if ((param_6 & 1) == 0) {
      uVar3 = BIO_s_mem();
    }
    else {
      uVar3 = BIO_s_secmem();
    }
    uVar4 = BIO_new(uVar3);
    local_res20 = uVar4;
    uVar5 = BIO_new(uVar3);
    local_58 = uVar5;
    if ((uVar4 != 0) && (uVar5 != 0)) {
      iVar2 = FUN_14f6e7710(param_1,local_50,uVar1);
      uVar10 = local_50[0];
      uVar6 = 0;
      if ((iVar2 != 0) &&
         (iVar2 = FUN_14f6e7440(param_1,&local_res20,&local_58,local_50[0],uVar1), uVar5 = local_58,
         uVar4 = local_res20, uVar6 = uVar9, iVar2 != 0)) {
        BIO_ctrl(local_58,0x73,0,&local_60);
        param_6 = *local_60;
        uVar4 = local_res20;
        uVar6 = 0;
        if (param_6 != 0) {
          uVar6 = EVP_ENCODE_CTX_new();
          if (uVar6 == 0) {
            ERR_put_error(9,0x91,0x41,"crypto\\pem\\pem_lib.c",0x3ac);
            uVar4 = local_res20;
          }
          else {
            EVP_DecodeInit(uVar6);
            iVar2 = EVP_DecodeUpdate(uVar6,*(longlong *)(local_60 + 2),&param_6,
                                     *(longlong *)(local_60 + 2),param_6);
            uVar9 = 0;
            if ((iVar2 < 0) ||
               (iVar2 = EVP_DecodeFinal(uVar6,(longlong)(int)param_6 + *(longlong *)(local_60 + 2),
                                        local_68), uVar4 = local_res20, iVar2 < 0)) {
              ERR_put_error(9,0x91,100,"crypto\\pem\\pem_lib.c",0x3b5);
              uVar4 = local_res20;
            }
            else {
              param_6 = param_6 + local_68[0];
              *(longlong *)local_60 = (longlong)(int)param_6;
              iVar2 = BIO_ctrl(local_res20,3,0);
              local_res20 = CONCAT44(local_res20._4_4_,iVar2);
              lVar7 = FUN_14f6e7d60(iVar2 + 1,uVar1);
              *param_3 = lVar7;
              lVar8 = FUN_14f6e7d60(param_6,uVar1);
              *param_4 = lVar8;
              lVar7 = *param_3;
              if ((lVar7 == 0) || (lVar8 == 0)) {
                FUN_14f6e7d10(lVar7,uVar1,0);
                *param_3 = 0;
                FUN_14f6e7d10(*param_4,uVar1,0);
                *param_4 = 0;
              }
              else {
                BIO_read(uVar4,lVar7,local_res20 & 0xffffffff);
                *(undefined1 *)((longlong)(int)local_res20 + *param_3) = 0;
                BIO_read(uVar5,*param_4,param_6);
                *param_5 = param_6;
                *param_2 = uVar10;
                uVar10 = 0;
                uVar9 = 1;
              }
            }
          }
        }
      }
      goto LAB_14f6e6d6e;
    }
    uVar11 = 0x39a;
    uVar3 = 0x41;
  }
  ERR_put_error(9,0x91,uVar3,"crypto\\pem\\pem_lib.c",uVar11);
  uVar6 = uVar9;
  uVar10 = uVar9;
LAB_14f6e6d6e:
  EVP_ENCODE_CTX_free(uVar6);
  if ((uVar1 & 1) == 0) {
    CRYPTO_free(uVar10,"crypto\\pem\\pem_lib.c",0xdf);
  }
  else {
    CRYPTO_secure_clear_free(uVar10,0,"crypto\\pem\\pem_lib.c",0xdd);
  }
  BIO_free(uVar4);
  BIO_free(uVar5);
  return uVar9;
}

// PEM_write @ 14f6e6dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
PEM_write(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6e6df0;
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    ERR_put_error(9,0x71,7,"crypto\\pem\\pem_lib.c",0x250);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar3,0x6a,0,param_1);
    uVar1 = PEM_write_bio(lVar3,param_2,param_3,param_4,param_5,uVar4);
    BIO_free(lVar3);
  }
  return uVar1;
}

// PEM_write_bio @ 14f6e6e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong PEM_write_bio(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                       int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int local_48 [2];
  longlong local_40;
  
  local_40 = 0x14f6e6eb4;
  uVar6 = 0;
  uVar11 = 0;
  uVar8 = 0;
  local_40 = EVP_ENCODE_CTX_new();
  uVar9 = 7;
  uVar3 = uVar6;
  if (local_40 == 0) {
    lVar5 = local_40;
    uVar9 = 0x41;
  }
  else {
    EVP_EncodeInit(local_40);
    uVar4 = 0xffffffffffffffff;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
    } while (*(char *)(uVar7 + param_2) != '\0');
    iVar1 = BIO_write(param_1,"-----BEGIN ",0xb);
    uVar10 = uVar9;
    if (iVar1 == 0xb) {
      iVar1 = BIO_write(param_1,param_2,uVar7 & 0xffffffff);
      uVar3 = uVar8;
      if ((iVar1 == (int)uVar7) && (iVar1 = BIO_write(param_1,"-----\n",6), iVar1 == 6)) {
        if (param_3 != 0) {
          do {
            uVar4 = uVar4 + 1;
          } while (*(char *)(param_3 + uVar4) != '\0');
          if ((0 < (int)uVar4) &&
             ((iVar1 = BIO_write(param_1,param_3,uVar4 & 0xffffffff), iVar1 != (int)uVar4 ||
              (iVar1 = BIO_write(param_1,"\n",1), iVar1 != 1)))) goto LAB_14f6e70be;
        }
        uVar3 = CRYPTO_malloc(0x2000,"crypto\\pem\\pem_lib.c",0x276);
        uVar8 = uVar6;
        lVar5 = local_40;
        if (uVar3 != 0) {
          for (; local_40 = lVar5, 0 < param_5; param_5 = param_5 - iVar1) {
            iVar1 = param_5;
            if (0x1400 < param_5) {
              iVar1 = 0x1400;
            }
            iVar2 = EVP_EncodeUpdate(lVar5,uVar3,local_48,(int)uVar6 + param_4,iVar1);
            uVar10 = 7;
            if ((iVar2 == 0) ||
               ((local_48[0] != 0 &&
                (iVar2 = BIO_write(param_1,uVar3,local_48[0]), iVar2 != local_48[0]))))
            goto LAB_14f6e70be;
            uVar11 = (int)uVar8 + local_48[0];
            uVar6 = (ulonglong)(uint)((int)uVar6 + iVar1);
            uVar8 = (ulonglong)uVar11;
            lVar5 = local_40;
          }
          EVP_EncodeFinal(lVar5,uVar3,local_48);
          if ((((local_48[0] < 1) || (iVar1 = BIO_write(param_1,uVar3), iVar1 == local_48[0])) &&
              (iVar1 = BIO_write(param_1,"-----END ",9), iVar1 == 9)) &&
             ((iVar1 = BIO_write(param_1,param_2,uVar7 & 0xffffffff), iVar1 == (int)uVar7 &&
              (iVar1 = BIO_write(param_1,"-----\n",6), iVar1 == 6)))) {
            uVar6 = (ulonglong)(uVar11 + local_48[0]);
            if (uVar11 + local_48[0] != 0) goto LAB_14f6e70e2;
          }
          else {
            uVar6 = 0;
          }
          goto LAB_14f6e70c3;
        }
        uVar10 = 0x41;
      }
    }
LAB_14f6e70be:
    uVar6 = 0;
    lVar5 = local_40;
    uVar9 = uVar10;
  }
LAB_14f6e70c3:
  ERR_put_error(9,0x72,uVar9,"crypto\\pem\\pem_lib.c",0x292);
LAB_14f6e70e2:
  EVP_ENCODE_CTX_free(lVar5);
  CRYPTO_clear_free(uVar3,0x2000,"crypto\\pem\\pem_lib.c",0x294);
  return uVar6;
}

// FUN_14f6e7130 @ 14f6e7130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6e7130(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_res18;
  
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    cVar2 = pcVar4[(longlong)param_2 - (longlong)param_1];
    if (cVar1 != cVar2) break;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if (cVar1 != cVar2) {
    iVar3 = strcmp(param_2,"ANY PRIVATE KEY");
    if (iVar3 != 0) {
      iVar3 = strcmp(param_2,"PARAMETERS");
      if (iVar3 == 0) {
        iVar3 = pem_check_suffix(param_1,"PARAMETERS");
        if ((0 < iVar3) && (lVar5 = EVP_PKEY_asn1_find_str(&local_res18,param_1,iVar3), lVar5 != 0))
        {
          lVar5 = *(longlong *)(lVar5 + 0x70);
          ENGINE_finish(local_res18);
          return (uint)(lVar5 != 0);
        }
        return 0;
      }
      iVar3 = strcmp(param_1,"X9.42 DH PARAMETERS");
      if (((((iVar3 != 0) || (iVar3 = strcmp(param_2,"DH PARAMETERS"), iVar3 != 0)) &&
           ((iVar3 = strcmp(param_1,"X509 CERTIFICATE"), iVar3 != 0 ||
            (iVar3 = strcmp(param_2,"CERTIFICATE"), iVar3 != 0)))) &&
          (((iVar3 = strcmp(param_1,"NEW CERTIFICATE REQUEST"), iVar3 != 0 ||
            (iVar3 = strcmp(param_2,"CERTIFICATE REQUEST"), iVar3 != 0)) &&
           ((iVar3 = strcmp(param_1,"CERTIFICATE"), iVar3 != 0 ||
            (iVar3 = strcmp(param_2,"TRUSTED CERTIFICATE"), iVar3 != 0)))))) &&
         ((iVar3 = strcmp(param_1,"X509 CERTIFICATE"), iVar3 != 0 ||
          (iVar3 = strcmp(param_2,"TRUSTED CERTIFICATE"), iVar3 != 0)))) {
        iVar3 = strcmp(param_1,"CERTIFICATE");
        lVar8 = 0;
        lVar5 = lVar8;
        if (iVar3 == 0) {
          while (lVar7 = lVar5, param_2[lVar7] == (&s_PKCS7)[lVar7]) {
            lVar5 = lVar7 + 1;
            if (lVar7 + 1 == 6) {
              return (int)lVar7 - 4;
            }
          }
        }
        iVar3 = strcmp(param_1,"PKCS #7 SIGNED DATA");
        lVar5 = lVar8;
        if (iVar3 == 0) {
          while (lVar7 = lVar5, param_2[lVar7] == (&s_PKCS7)[lVar7]) {
            lVar5 = lVar7 + 1;
            if (lVar7 + 1 == 6) {
              return (int)lVar7 - 4;
            }
          }
        }
        iVar3 = strcmp(param_1,"CERTIFICATE");
        lVar5 = lVar8;
        lVar7 = lVar8;
        if (iVar3 == 0) {
          while (lVar6 = lVar7, param_2[lVar6] == (&s_CMS)[lVar6]) {
            lVar7 = lVar6 + 1;
            if (lVar6 + 1 == 4) {
              return (int)lVar6 - 2;
            }
          }
        }
        do {
          lVar7 = lVar5 + 1;
          if (param_1[lVar5] != (&s_PKCS7)[lVar5]) {
            return 0;
          }
          lVar5 = lVar7;
        } while (lVar7 != 6);
        do {
          lVar5 = lVar8;
          if (param_2[lVar5] != (&s_CMS)[lVar5]) {
            return 0;
          }
          lVar8 = lVar5 + 1;
        } while (lVar5 + 1 != 4);
        return (int)lVar5 - 2;
      }
      return 1;
    }
    iVar3 = strcmp(param_1,"ENCRYPTED PRIVATE KEY");
    if (((iVar3 != 0) && (iVar3 = strcmp(param_1,"PRIVATE KEY"), iVar3 != 0)) &&
       ((iVar3 = pem_check_suffix(param_1,"PRIVATE KEY"), iVar3 < 1 ||
        ((lVar5 = EVP_PKEY_asn1_find_str(0,param_1,iVar3), lVar5 == 0 ||
         (*(longlong *)(lVar5 + 0xb8) == 0)))))) {
      return 0;
    }
  }
  return 1;
}

// FUN_14f6e7440 @ 14f6e7440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f6e7440(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *_Str1;
  void *pvVar7;
  size_t _MaxCount;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  uVar11 = 0;
  uVar10 = *param_2;
  bVar3 = false;
  iVar8 = 0;
  if ((param_5 & 1) == 0) {
    _Str1 = (char *)CRYPTO_malloc(0x100,"crypto\\pem\\pem_lib.c",0xe5);
  }
  else {
    _Str1 = (char *)CRYPTO_secure_malloc(0x100,"crypto\\pem\\pem_lib.c",0xe4);
  }
  bVar1 = false;
  if (_Str1 == (char *)0x0) {
    ERR_put_error(9,0x8f,0x41,"crypto\\pem\\pem_lib.c",0x324);
    return 0;
  }
LAB_14f6e74f2:
  do {
    iVar5 = BIO_gets(param_1,_Str1,0xff);
    if (iVar5 < 1) {
      uVar11 = 0x32c;
LAB_14f6e769c:
      ERR_put_error(9,0x8f,0x66,"crypto\\pem\\pem_lib.c",uVar11);
      uVar11 = 0;
LAB_14f6e76b6:
      if ((param_5 & 1) == 0) {
        CRYPTO_free(_Str1,"crypto\\pem\\pem_lib.c",0xdf);
      }
      else {
        CRYPTO_secure_clear_free(_Str1,0x100,"crypto\\pem\\pem_lib.c");
      }
      return uVar11;
    }
    if ((iVar5 != 0xfe) || (bVar2 = true, _Str1[0xfd] == '\n')) {
      bVar2 = false;
    }
    if ((iVar8 == 0) && (pvVar7 = memchr(_Str1,0x3a,(longlong)iVar5), pvVar7 != (void *)0x0)) {
      iVar8 = 1;
    }
    iVar6 = strncmp(_Str1,"-----END ",9);
    if ((iVar6 == 0) || (uVar9 = 0xffffffff, iVar8 == 1)) {
      uVar9 = 0xfffffffb;
    }
    iVar5 = FUN_14f6e7da0(_Str1,iVar5,uVar9 & param_5);
    if (*_Str1 == '\n') break;
    iVar6 = strncmp(_Str1,"-----END ",9);
    if (iVar6 == 0) {
      _MaxCount = 0xffffffffffffffff;
      do {
        _MaxCount = _MaxCount + 1;
      } while (param_4[_MaxCount] != '\0');
      iVar5 = strncmp(_Str1 + 9,param_4,_MaxCount);
      if ((iVar5 == 0) && (iVar5 = strncmp(_Str1 + 9 + _MaxCount,"-----\n",6), iVar5 == 0)) {
        if (iVar8 == 0) {
          *param_2 = *param_3;
          *param_3 = uVar10;
        }
        uVar11 = 1;
        goto LAB_14f6e76b6;
      }
      uVar11 = 0x358;
      goto LAB_14f6e769c;
    }
    if (bVar3) {
      uVar11 = 0x362;
      goto LAB_14f6e769c;
    }
    iVar6 = BIO_puts(uVar10,_Str1);
    if (iVar6 < 0) goto LAB_14f6e76b6;
    bVar1 = bVar2;
    if (iVar8 == 2) {
      if (0x41 < iVar5) goto LAB_14f6e76b6;
      if (iVar5 < 0x41) {
        bVar3 = true;
      }
    }
  } while( true );
  bVar4 = !bVar1;
  bVar1 = bVar2;
  if (bVar4) {
    if (iVar8 == 2) {
      uVar11 = 0x349;
      goto LAB_14f6e769c;
    }
    iVar8 = 2;
    uVar10 = *param_3;
  }
  goto LAB_14f6e74f2;
}

// FUN_14f6e7710 @ 14f6e7710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e7710(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  void *_Dst;
  uint uVar3;
  size_t _Size;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6e772f;
  uVar5 = 0;
  uVar3 = param_3 & 1;
  if (uVar3 == 0) {
    _Str1 = (char *)CRYPTO_malloc(0x100,"crypto\\pem\\pem_lib.c",0xe5);
  }
  else {
    _Str1 = (char *)CRYPTO_secure_malloc(0x100,"crypto\\pem\\pem_lib.c",0xe4);
  }
  if (_Str1 == (char *)0x0) {
    ERR_put_error(9,0x90,0x41,"crypto\\pem\\pem_lib.c",0x2e1,uVar7);
    uVar5 = 0;
  }
  else {
    do {
      iVar1 = BIO_gets(param_1,_Str1,0xff);
      if (iVar1 < 1) {
        uVar6 = 0x2e9;
        uVar4 = 0x6c;
        goto LAB_14f6e787a;
      }
      iVar1 = FUN_14f6e7da0(_Str1,iVar1,param_3 & 0xfffffffb);
      iVar2 = strncmp(_Str1,"-----BEGIN ",0xb);
    } while (((iVar2 != 0) || (iVar1 < 6)) ||
            (iVar2 = strncmp(_Str1 + (longlong)iVar1 + -6,"-----\n",6), iVar2 != 0));
    _Size = (size_t)(iVar1 + -0x10);
    _Str1[iVar1 + -6] = '\0';
    if (uVar3 == 0) {
      _Dst = (void *)CRYPTO_malloc(_Size,"crypto\\pem\\pem_lib.c",0xe5);
    }
    else {
      _Dst = (void *)CRYPTO_secure_malloc(_Size,"crypto\\pem\\pem_lib.c",0xe4);
    }
    *param_2 = _Dst;
    if (_Dst == (void *)0x0) {
      uVar6 = 0x2f8;
      uVar4 = 0x41;
LAB_14f6e787a:
      ERR_put_error(9,0x90,uVar4,"crypto\\pem\\pem_lib.c",uVar6);
    }
    else {
      memcpy(_Dst,_Str1 + 0xb,_Size);
      uVar5 = 1;
    }
    if (uVar3 == 0) {
      CRYPTO_free(_Str1,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      CRYPTO_secure_clear_free(_Str1,0x100,"crypto\\pem\\pem_lib.c");
    }
  }
  return uVar5;
}

// FUN_14f6e78f0 @ 14f6e78f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e78f0(undefined8 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6e7910;
  puVar5 = (undefined1 *)*param_1;
  if (0 < param_3) {
    puVar7 = param_2;
    for (lVar4 = (longlong)param_3; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  uVar6 = 0;
  if (0 < param_3 * 2) {
    do {
      iVar1 = OPENSSL_hexchar2int(*puVar5);
      if (iVar1 < 0) {
        ERR_put_error(9,0x65,0x67,"crypto\\pem\\pem_lib.c",0x23d,uVar8);
        return 0;
      }
      puVar5 = puVar5 + 1;
      uVar2 = uVar6;
      if ((int)uVar6 < 0) {
        uVar2 = uVar6 + 1;
      }
      uVar3 = ~uVar6;
      uVar6 = uVar6 + 1;
      param_2[(int)uVar2 >> 1] = param_2[(int)uVar2 >> 1] | (char)iVar1 << (sbyte)((uVar3 & 1) << 2)
      ;
    } while ((int)uVar6 < param_3 * 2);
  }
  *param_1 = puVar5;
  return 1;
}

// FUN_14f6e79c0 @ 14f6e79c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14f6e79c0(undefined8 *param_1,uint *param_2,ulonglong *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint *param_7,uint param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  uint *local_c8;
  uint local_c0;
  uint local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  uint *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  uint *local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f6e79d7;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar5 = 0;
  local_98 = param_5;
  local_88 = param_6;
  local_90 = param_7;
  uVar6 = param_8 & 1;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b4 = 0;
  uVar8 = uVar5;
  local_80 = param_1;
  local_78 = param_2;
  while( true ) {
    uVar2 = local_a8;
    uVar1 = local_b0;
    if (uVar6 == 0) {
      CRYPTO_free(uVar5,"crypto\\pem\\pem_lib.c",0xdf);
      CRYPTO_free(uVar1,"crypto\\pem\\pem_lib.c",0xdf);
      CRYPTO_free(uVar2,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      CRYPTO_secure_clear_free(uVar5,0,"crypto\\pem\\pem_lib.c",0xdd);
      CRYPTO_secure_clear_free(uVar1,0,"crypto\\pem\\pem_lib.c",0xdd);
      CRYPTO_secure_clear_free(uVar2,(longlong)(int)uVar8,"crypto\\pem\\pem_lib.c",0xdd);
    }
    local_c8 = &local_b8;
    local_c0 = param_8;
    iVar3 = PEM_read_bio_ex(local_98,&local_a0,&local_b0,&local_a8);
    uVar5 = local_a0;
    if (iVar3 == 0) {
      uVar6 = ERR_peek_error();
      if ((uVar6 & 0xfff) == 0x6c) {
        ERR_add_error_data(2,"Expecting: ",param_4);
      }
      return 0;
    }
    iVar3 = FUN_14f6e7130(local_a0);
    uVar1 = local_b0;
    if (iVar3 != 0) break;
    uVar8 = (ulonglong)local_b8;
  }
  iVar4 = PEM_get_EVP_CIPHER_INFO(local_b0,local_70);
  uVar2 = local_a8;
  iVar3 = local_b4;
  if (iVar4 != 0) {
    local_c8 = local_90;
    iVar4 = PEM_do_header(local_70,local_a8,&local_b8,local_88);
    iVar3 = local_b4;
    if (iVar4 != 0) {
      *local_80 = uVar2;
      *local_78 = local_b8;
      if (param_3 != (ulonglong *)0x0) {
        *param_3 = uVar5;
      }
      iVar3 = 1;
      uVar7 = local_b8;
      if (param_3 != (ulonglong *)0x0) goto LAB_14f6e7bd2;
    }
  }
  uVar7 = local_b8;
  if (uVar6 == 0) {
    CRYPTO_free(uVar5,"crypto\\pem\\pem_lib.c",0xdf);
  }
  else {
    CRYPTO_secure_clear_free(uVar5,0,"crypto\\pem\\pem_lib.c",0xdd);
  }
LAB_14f6e7bd2:
  if (uVar6 == 0) {
    CRYPTO_free(uVar1,"crypto\\pem\\pem_lib.c",0xdf);
  }
  else {
    CRYPTO_secure_clear_free(uVar1,0,"crypto\\pem\\pem_lib.c",0xdd);
  }
  if (iVar3 == 0) {
    if (uVar6 == 0) {
      CRYPTO_free(uVar2,"crypto\\pem\\pem_lib.c",0xdf);
    }
    else {
      CRYPTO_secure_clear_free(uVar2,(longlong)(int)uVar7,"crypto\\pem\\pem_lib.c",0xdd);
      iVar3 = 0;
    }
  }
  return iVar3;
}

// pem_check_suffix @ 14f6e7c90

ulonglong pem_check_suffix(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar6;
  longlong lVar7;
  longlong lVar5;
  
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
    lVar4 = -1;
  } while (*(char *)(param_1 + lVar7) != '\0');
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  if ((int)lVar5 + 2 < (int)lVar7) {
    pcVar6 = (char *)(((longlong)(int)lVar7 - (longlong)(int)lVar4) + param_1);
    pcVar3 = pcVar6;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[param_2 - (longlong)pcVar6];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if ((cVar1 == cVar2) && (pcVar6[-1] == ' ')) {
      return (longlong)(pcVar6 + -1) - param_1 & 0xffffffff;
    }
  }
  return 0;
}

// FUN_14f6e7d10 @ 14f6e7d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e7d10(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  if ((param_2 & 1) != 0) {
    CRYPTO_secure_clear_free(param_1,param_3,"crypto\\pem\\pem_lib.c",0xdd);
    return;
  }
  CRYPTO_free(param_1,"crypto\\pem\\pem_lib.c",0xdf);
  return;
}

// FUN_14f6e7d60 @ 14f6e7d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e7d60(int param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    CRYPTO_secure_malloc((longlong)param_1,"crypto\\pem\\pem_lib.c",0xe4);
    return;
  }
  CRYPTO_malloc((longlong)param_1,"crypto\\pem\\pem_lib.c",0xe5);
  return;
}

// FUN_14f6e7da0 @ 14f6e7da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6e7da0(char *param_1,uint param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(int)param_2;
  if ((param_3 & 2) == 0) {
    iVar4 = 0;
    if ((param_3 & 4) == 0) {
      if (0 < (longlong)uVar5) {
        pcVar3 = param_1;
        do {
          cVar1 = *pcVar3;
          if ((cVar1 == '\n') || (cVar1 == '\r')) break;
          iVar2 = ossl_ctype_check((int)cVar1,0x40);
          if (iVar2 != 0) {
            *pcVar3 = ' ';
          }
          pcVar3 = pcVar3 + 1;
          iVar4 = iVar4 + 1;
        } while ((longlong)pcVar3 - (longlong)param_1 < (longlong)uVar5);
      }
    }
    else if (0 < (longlong)uVar5) {
      pcVar3 = param_1;
      do {
        iVar2 = ossl_ctype_check((int)*pcVar3,0x400);
        if (((iVar2 == 0) || (*pcVar3 == '\n')) || (*pcVar3 == '\r')) break;
        pcVar3 = pcVar3 + 1;
        iVar4 = iVar4 + 1;
      } while ((longlong)pcVar3 - (longlong)param_1 < (longlong)uVar5);
    }
  }
  else {
    if (-1 < (int)param_2) {
      pcVar3 = param_1 + uVar5;
      do {
        param_2 = (uint)uVar5;
        if (' ' < *pcVar3) break;
        pcVar3 = pcVar3 + -1;
        param_2 = param_2 - 1;
        uVar5 = (ulonglong)param_2;
      } while (-1 < (int)param_2);
    }
    iVar4 = param_2 + 1;
  }
  param_1[iVar4] = '\n';
  param_1[iVar4 + 1] = '\0';
  return iVar4 + 1;
}

