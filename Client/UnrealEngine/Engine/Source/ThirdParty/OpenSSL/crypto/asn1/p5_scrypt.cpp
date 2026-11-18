// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// PKCS5_pbe2_set_scrypt @ 14f769770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
PKCS5_pbe2_set_scrypt
          (longlong param_1,undefined8 param_2,int param_3,void *param_4,undefined1 *param_5,
          undefined1 *param_6,undefined1 *param_7)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f769787;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_d8;
  plVar10 = (longlong *)0x0;
  local_78 = param_6;
  plVar7 = (longlong *)0x0;
  local_80 = param_7;
  plVar8 = (longlong *)0x0;
  local_70 = param_5;
  local_88 = param_3;
  local_68 = param_2;
  if (param_1 == 0) {
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x34);
    uVar9 = 0x43;
    plVar6 = plVar10;
    plVar8 = plVar10;
  }
  else {
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = param_7;
    local_b0 = param_6;
    local_b8 = param_5;
    iVar2 = EVP_PBE_scrypt(0,0,0,0);
    plVar6 = plVar7;
    if (iVar2 == 0) {
      local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x3a);
      uVar9 = 0xe3;
    }
    else {
      iVar2 = EVP_CIPHER_type(param_1);
      if (iVar2 == 0) {
        local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x41);
        uVar9 = 0x6c;
      }
      else {
        plVar8 = (longlong *)PBE2PARAM_new();
        plVar6 = plVar10;
        if (plVar8 != (longlong *)0x0) {
          puVar1 = (undefined8 *)plVar8[1];
          uVar4 = OBJ_nid2obj(iVar2);
          *puVar1 = uVar4;
          lVar5 = ASN1_TYPE_new();
          puVar1[1] = lVar5;
          plVar6 = plVar7;
          if (lVar5 != 0) {
            iVar3 = EVP_CIPHER_iv_length(param_1);
            if (iVar3 != 0) {
              iVar3 = EVP_CIPHER_iv_length(param_1);
              if (param_4 == (void *)0x0) {
                iVar3 = RAND_bytes(local_60,iVar3);
                plVar6 = plVar10;
                if (iVar3 < 1) goto LAB_14f7699db;
              }
              else {
                memcpy(local_60,param_4,(longlong)iVar3);
              }
            }
            plVar6 = (longlong *)EVP_CIPHER_CTX_new();
            if (plVar6 != (longlong *)0x0) {
              local_b8 = local_60;
              local_b0 = (undefined1 *)((ulonglong)local_b0 & 0xffffffff00000000);
              iVar3 = EVP_CipherInit_ex(plVar6,param_1,0,0);
              if (iVar3 == 0) goto LAB_14f7699db;
              iVar3 = EVP_CIPHER_param_to_asn1(plVar6,puVar1[1]);
              if (iVar3 < 1) {
                local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x62);
                uVar9 = 0x72;
                plVar10 = (longlong *)0x0;
                goto LAB_14f7699c5;
              }
              EVP_CIPHER_CTX_free(plVar6);
              plVar6 = (longlong *)0x0;
              if (iVar2 == 0x25) {
                iVar2 = EVP_CIPHER_key_length(param_1);
                plVar10 = (longlong *)(longlong)iVar2;
              }
              X509_ALGOR_free(*plVar8);
              local_b0 = local_80;
              local_b8 = local_78;
              lVar5 = FUN_14f769d30(local_68,(longlong)local_88,plVar10,local_70);
              *plVar8 = lVar5;
              plVar10 = (longlong *)0x0;
              if ((lVar5 != 0) &&
                 (plVar10 = (longlong *)X509_ALGOR_new(), plVar10 != (longlong *)0x0)) {
                lVar5 = OBJ_nid2obj(0xa1);
                *plVar10 = lVar5;
                uVar4 = PBE2PARAM_it();
                lVar5 = ASN1_TYPE_pack_sequence(uVar4,plVar8,plVar10 + 1);
                if (lVar5 != 0) {
                  PBE2PARAM_free(plVar8);
                  return plVar10;
                }
              }
            }
          }
        }
        local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x8a);
        uVar9 = 0x41;
      }
    }
  }
LAB_14f7699c5:
  ERR_put_error(0xd,0xe7,uVar9,"crypto\\asn1\\p5_scrypt.c");
LAB_14f7699db:
  PBE2PARAM_free(plVar8);
  X509_ALGOR_free(plVar10);
  EVP_CIPHER_CTX_free(plVar6);
  return (longlong *)0x0;
}

// PKCS5_v2_scrypt_keyivgen @ 14f769a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PKCS5_v2_scrypt_keyivgen
          (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x14f769a33;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  puVar5 = (undefined8 *)0x0;
  lVar3 = EVP_CIPHER_CTX_cipher();
  if (lVar3 == 0) {
    local_d8 = CONCAT44(local_d8._4_4_,0xe0);
    ERR_put_error(6,0xb4,0x83,"crypto\\asn1\\p5_scrypt.c");
    puVar4 = puVar5;
    goto LAB_14f769c28;
  }
  puVar4 = (undefined8 *)ASN1_TYPE_unpack_sequence(&DAT_1534d85d0,param_4);
  if (puVar4 == (undefined8 *)0x0) {
    local_d8 = CONCAT44(local_d8._4_4_,0xe9);
    ERR_put_error(6,0xb4,0x72,"crypto\\asn1\\p5_scrypt.c");
    goto LAB_14f769c28;
  }
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  lVar3 = (longlong)iVar1;
  if (puVar4[4] == 0) {
LAB_14f769aff:
    iVar1 = ASN1_INTEGER_get_uint64(&local_98,puVar4[1]);
    if (iVar1 == 0) {
LAB_14f769bf2:
      local_d8 = CONCAT44(local_d8._4_4_,0x100);
      uVar6 = 0xab;
      goto LAB_14f769c00;
    }
    iVar1 = ASN1_INTEGER_get_uint64(&local_a0,puVar4[2]);
    if (iVar1 == 0) goto LAB_14f769bf2;
    iVar1 = ASN1_INTEGER_get_uint64(&local_a8,puVar4[3]);
    if (iVar1 == 0) goto LAB_14f769bf2;
    local_b0 = 0;
    local_b8 = (undefined1 *)0x0;
    local_c0 = 0;
    local_c8 = local_a8;
    local_d0 = local_a0;
    local_d8 = local_98;
    iVar1 = EVP_PBE_scrypt(0,0,0,0);
    if (iVar1 == 0) goto LAB_14f769bf2;
    local_b8 = local_88;
    local_c0 = 0;
    local_c8 = local_a8;
    local_d0 = local_a0;
    local_d8 = local_98;
    local_b0 = lVar3;
    iVar1 = EVP_PBE_scrypt(param_2,(longlong)param_3,*(undefined8 *)((int *)*puVar4 + 2),
                           (longlong)*(int *)*puVar4);
    if (iVar1 != 0) {
      local_d0 = CONCAT44(local_d0._4_4_,param_7);
      local_d8 = 0;
      uVar2 = EVP_CipherInit_ex(param_1,0,0,local_88);
      puVar5 = (undefined8 *)(ulonglong)uVar2;
    }
  }
  else {
    iVar1 = ASN1_INTEGER_get_uint64(&local_90);
    if ((iVar1 != 0) && (local_90 == lVar3)) goto LAB_14f769aff;
    local_d8 = CONCAT44(local_d8._4_4_,0xf6);
    uVar6 = 0x7b;
LAB_14f769c00:
    ERR_put_error(6,0xb4,uVar6,"crypto\\asn1\\p5_scrypt.c");
  }
  if (lVar3 != 0) {
    OPENSSL_cleanse(local_88,lVar3);
  }
LAB_14f769c28:
  ASN1_item_free(puVar4,&DAT_1534d85d0);
  return puVar5;
}

// SCRYPT_PARAMS_free @ 14f769c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCRYPT_PARAMS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534d85d0);
  return;
}

// SCRYPT_PARAMS_new @ 14f769ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCRYPT_PARAMS_new(void)

{
  ASN1_item_new(&DAT_1534d85d0);
  return;
}

// d2i_SCRYPT_PARAMS @ 14f769cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_SCRYPT_PARAMS(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_SCRYPT_PARAMS @ 14f769d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_SCRYPT_PARAMS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534d85d0);
  return;
}

// FUN_14f769d30 @ 14f769d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
FUN_14f769d30(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f769d4e;
  puVar4 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)0x0;
  plVar2 = (longlong *)ASN1_item_new(&DAT_1534d85d0);
  if (plVar2 != (longlong *)0x0) {
    if (param_2 == 0) {
      param_2 = 8;
    }
    iVar1 = ASN1_STRING_set(*plVar2,param_1,param_2 & 0xffffffff);
    if (iVar1 != 0) {
      if ((param_1 == 0) &&
         (iVar1 = RAND_bytes(*(undefined8 *)(*plVar2 + 8),param_2 & 0xffffffff), iVar1 < 1))
      goto LAB_14f769e76;
      iVar1 = ASN1_INTEGER_set_uint64(plVar2[1],param_4);
      if ((iVar1 != 0) &&
         ((iVar1 = ASN1_INTEGER_set_uint64(plVar2[2],param_5), puVar4 = puVar6, iVar1 != 0 &&
          (iVar1 = ASN1_INTEGER_set_uint64(plVar2[3],param_6), iVar1 != 0)))) {
        if (param_3 != 0) {
          lVar3 = ASN1_INTEGER_new();
          plVar2[4] = lVar3;
          if ((lVar3 == 0) || (iVar1 = ASN1_INTEGER_set_int64(lVar3,param_3), iVar1 == 0))
          goto LAB_14f769e54;
        }
        puVar4 = (undefined8 *)X509_ALGOR_new();
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = OBJ_nid2obj(0x3cd);
          *puVar4 = uVar5;
          lVar3 = ASN1_TYPE_pack_sequence(&DAT_1534d85d0,plVar2,puVar4 + 1);
          if (lVar3 != 0) {
            ASN1_item_free(plVar2,&DAT_1534d85d0);
            return puVar4;
          }
        }
      }
    }
  }
LAB_14f769e54:
  ERR_put_error(0xd,0xe8,0x41,"crypto\\asn1\\p5_scrypt.c",0xcd,uVar7);
LAB_14f769e76:
  ASN1_item_free(plVar2,&DAT_1534d85d0);
  X509_ALGOR_free(puVar4);
  return (undefined8 *)0x0;
}

