// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// PKCS5_PBKDF2_HMAC @ 14f768f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
PKCS5_PBKDF2_HMAC(char *param_1,ulonglong param_2,undefined8 param_3,int param_4,int param_5,
                 undefined8 param_6,uint param_7,ulonglong *param_8)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  size_t _Size;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  int local_b4;
  int local_b0;
  undefined8 local_a8;
  ulonglong local_98 [8];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar4 = 1;
  uVar11 = param_2 & 0xffffffff;
  local_b4 = 1;
  local_b0 = param_4;
  local_a8 = param_3;
  uVar2 = EVP_MD_size(param_6);
  if ((-1 < (int)uVar2) && (lVar5 = HMAC_CTX_new(), lVar5 != 0)) {
    if (param_1 == (char *)0x0) {
      param_1 = "";
      uVar11 = 0;
    }
    else if ((int)param_2 == -1) {
      uVar11 = 0xffffffffffffffff;
      do {
        uVar11 = uVar11 + 1;
      } while (param_1[uVar11] != '\0');
    }
    local_c8 = 0;
    iVar3 = HMAC_Init_ex(lVar5,param_1,uVar11 & 0xffffffff,param_6);
    if ((iVar3 != 0) && (lVar6 = HMAC_CTX_new(), lVar6 != 0)) {
      while( true ) {
        if (param_7 == 0) {
          HMAC_CTX_free(lVar6);
          HMAC_CTX_free(lVar5);
          return 1;
        }
        local_b5 = (undefined1)iVar4;
        uVar10 = param_7;
        if ((int)uVar2 < (int)param_7) {
          uVar10 = uVar2;
        }
        local_b8 = (undefined1)((uint)iVar4 >> 0x18);
        local_b7 = (undefined1)((uint)iVar4 >> 0x10);
        local_b6 = (undefined1)((uint)iVar4 >> 8);
        iVar4 = HMAC_CTX_copy(lVar6,lVar5);
        if ((((iVar4 == 0) || (iVar4 = HMAC_Update(lVar6,local_a8,(longlong)local_b0), iVar4 == 0))
            || (iVar4 = HMAC_Update(lVar6,&local_b8,4), iVar4 == 0)) ||
           (iVar4 = HMAC_Final(lVar6,local_98,0), iVar4 == 0)) break;
        _Size = (size_t)(int)uVar10;
        memcpy(param_8,local_98,_Size);
        iVar4 = 1;
        if (1 < param_5) {
          do {
            iVar3 = HMAC_CTX_copy(lVar6,lVar5);
            if (((iVar3 == 0) || (iVar3 = HMAC_Update(lVar6,local_98), iVar3 == 0)) ||
               (iVar3 = HMAC_Final(lVar6,local_98), iVar3 == 0)) goto LAB_14f769244;
            lVar12 = 0;
            if (((0 < (int)uVar10) && (0x1f < uVar10)) &&
               (((ulonglong *)((longlong)local_98 + (longlong)(int)(uVar10 - 1)) < param_8 ||
                ((ulonglong *)((longlong)(int)(uVar10 - 1) + (longlong)param_8) < local_98)))) {
              uVar8 = uVar10 & 0x8000001f;
              if ((int)uVar8 < 0) {
                uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
              }
              puVar9 = param_8;
              do {
                lVar12 = lVar12 + 0x20;
                puVar1 = (ulonglong *)((longlong)local_98 + -(longlong)param_8 + (longlong)puVar9);
                uVar11 = puVar1[1];
                *puVar9 = *puVar1 ^ *puVar9;
                puVar9[1] = uVar11 ^ puVar9[1];
                puVar1 = (ulonglong *)
                         ((longlong)&local_a8 + -(longlong)param_8 + (longlong)(puVar9 + 4));
                uVar11 = puVar1[1];
                puVar9[2] = *puVar1 ^ puVar9[2];
                puVar9[3] = uVar11 ^ puVar9[3];
                puVar9 = puVar9 + 4;
              } while (lVar12 < (int)(uVar10 - uVar8));
            }
            if (lVar12 < (longlong)_Size) {
              pbVar7 = (byte *)(lVar12 + (longlong)param_8);
              lVar12 = _Size - lVar12;
              do {
                *pbVar7 = *pbVar7 ^ pbVar7[(longlong)local_98 - (longlong)param_8];
                pbVar7 = pbVar7 + 1;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_5);
        }
        param_8 = (ulonglong *)((longlong)param_8 + _Size);
        iVar4 = local_b4 + 1;
        param_7 = param_7 - uVar10;
        local_b4 = iVar4;
      }
LAB_14f769244:
      HMAC_CTX_free(lVar6);
      HMAC_CTX_free(lVar5);
      return 0;
    }
    HMAC_CTX_free(lVar5);
  }
  return 0;
}

// PKCS5_PBKDF2_HMAC_SHA1 @ 14f7692a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS5_PBKDF2_HMAC_SHA1
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = EVP_sha1();
  PKCS5_PBKDF2_HMAC(param_1,param_2,param_3,param_4,param_5,uVar1,param_6,param_7);
  return;
}

// PKCS5_v2_PBE_keyivgen @ 14f769320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
PKCS5_v2_PBE_keyivgen
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffffb8;
  code **ppcVar8;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar9;
  code *local_28;
  undefined8 uStack_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_20 = 0x14f769339;
  uVar4 = 0;
  uVar5 = PBE2PARAM_it();
  plVar6 = (longlong *)ASN1_TYPE_unpack_sequence(uVar5,param_4);
  if (plVar6 == (longlong *)0x0) {
    ERR_put_error(6,0x76,0x72,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0x96));
  }
  else {
    uVar1 = OBJ_obj2nid(*(undefined8 *)*plVar6);
    ppcVar8 = &local_28;
    iVar2 = EVP_PBE_find(2,uVar1,0,0,ppcVar8);
    uVar1 = (undefined4)((ulonglong)ppcVar8 >> 0x20);
    if (iVar2 == 0) {
      ERR_put_error(6,0x76,0x7c,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0x9e));
    }
    else {
      uVar3 = OBJ_obj2nid(*(undefined8 *)plVar6[1]);
      uVar5 = OBJ_nid2sn(uVar3);
      lVar7 = EVP_get_cipherbyname(uVar5);
      if (lVar7 == 0) {
        ERR_put_error(6,0x76,0x6b,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0xa9));
      }
      else {
        uVar1 = 0;
        iVar2 = EVP_CipherInit_ex(param_1,lVar7,0,0,0,CONCAT44(uVar9,param_7));
        if (iVar2 != 0) {
          iVar2 = EVP_CIPHER_asn1_to_param(param_1,*(undefined8 *)(plVar6[1] + 8));
          if (iVar2 < 0) {
            ERR_put_error(6,0x76,0x7a,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0xb1));
          }
          else {
            uVar4 = (*local_28)(param_1,param_2,param_3,*(undefined8 *)(*plVar6 + 8),0,0,param_7);
          }
        }
      }
    }
  }
  PBE2PARAM_free(plVar6);
  return uVar4;
}

// PKCS5_v2_PBKDF2_keyivgen @ 14f7694d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PKCS5_v2_PBKDF2_keyivgen
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  uint local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  puVar11 = (undefined8 *)0x0;
  local_a4 = param_3;
  lVar7 = EVP_CIPHER_CTX_cipher();
  if (lVar7 == 0) {
    local_c8 = CONCAT44(local_c8._4_4_,199);
    ERR_put_error(6,0xa4,0x83,"crypto\\evp\\p5_crpt2.c");
    puVar10 = puVar11;
    puVar9 = puVar11;
  }
  else {
    uVar2 = EVP_CIPHER_CTX_key_length(param_1);
    puVar10 = (undefined8 *)(ulonglong)uVar2;
    if (0x40 < uVar2) {
      OPENSSL_die("assertion failed: keylen <= sizeof(key)","crypto\\evp\\p5_crpt2.c",0xcb);
    }
    uVar8 = PBKDF2PARAM_it();
    puVar9 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar8,param_4);
    if (puVar9 == (undefined8 *)0x0) {
      local_c8 = CONCAT44(local_c8._4_4_,0xd2);
      ERR_put_error(6,0xa4,0x72,"crypto\\evp\\p5_crpt2.c");
    }
    else {
      uVar2 = EVP_CIPHER_CTX_key_length(param_1);
      puVar10 = (undefined8 *)(ulonglong)uVar2;
      if ((puVar9[2] == 0) || (uVar3 = ASN1_INTEGER_get(), uVar3 == uVar2)) {
        if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
          uVar4 = 0xa3;
        }
        else {
          uVar4 = OBJ_obj2nid(*(undefined8 *)puVar9[3]);
        }
        local_c8 = 0;
        iVar5 = EVP_PBE_find(1,uVar4,0,&local_a8);
        if (iVar5 == 0) {
          local_c8 = CONCAT44(local_c8._4_4_,0xe5);
          ERR_put_error(6,0xa4,0x7d,"crypto\\evp\\p5_crpt2.c");
          puVar11 = (undefined8 *)0x0;
        }
        else {
          uVar8 = OBJ_nid2sn(local_a8);
          lVar7 = EVP_get_digestbyname(uVar8);
          if (lVar7 == 0) {
            local_c8 = CONCAT44(local_c8._4_4_,0xeb);
            ERR_put_error(6,0xa4,0x7d,"crypto\\evp\\p5_crpt2.c");
          }
          else if (*(int *)*puVar9 == 4) {
            puVar1 = *(undefined4 **)((int *)*puVar9 + 2);
            uVar8 = *(undefined8 *)(puVar1 + 2);
            uVar4 = *puVar1;
            uVar6 = ASN1_INTEGER_get(puVar9[1]);
            local_b0 = local_98;
            local_c8 = CONCAT44(local_c8._4_4_,uVar6);
            local_c0 = lVar7;
            local_b8 = uVar2;
            iVar5 = PKCS5_PBKDF2_HMAC(param_2,local_a4,uVar8,uVar4);
            if (iVar5 != 0) {
              local_c0 = CONCAT44(local_c0._4_4_,param_7);
              local_c8 = 0;
              uVar2 = EVP_CipherInit_ex(param_1,0,0,local_98);
              puVar11 = (undefined8 *)(ulonglong)uVar2;
            }
          }
          else {
            local_c8 = CONCAT44(local_c8._4_4_,0xf0);
            ERR_put_error(6,0xa4,0x7e,"crypto\\evp\\p5_crpt2.c");
          }
        }
      }
      else {
        local_c8 = CONCAT44(local_c8._4_4_,0xdb);
        ERR_put_error(6,0xa4,0x7b,"crypto\\evp\\p5_crpt2.c");
      }
    }
  }
  OPENSSL_cleanse(local_98,puVar10);
  PBKDF2PARAM_free(puVar9);
  return puVar11;
}

