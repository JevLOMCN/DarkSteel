// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// PBE2PARAM_free @ 14f7bef90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PBE2PARAM_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534ea8e0);
  return;
}

// PBE2PARAM_it @ 14f7befc0

undefined * PBE2PARAM_it(void)

{
  return &DAT_1534ea8e0;
}

// PBE2PARAM_new @ 14f7befd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PBE2PARAM_new(void)

{
  ASN1_item_new(&DAT_1534ea8e0);
  return;
}

// PBKDF2PARAM_free @ 14f7bf000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PBKDF2PARAM_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534ea990);
  return;
}

// PBKDF2PARAM_it @ 14f7bf030

undefined * PBKDF2PARAM_it(void)

{
  return &DAT_1534ea990;
}

// PBKDF2PARAM_new @ 14f7bf040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PBKDF2PARAM_new(void)

{
  ASN1_item_new(&DAT_1534ea990);
  return;
}

// PKCS5_pbe2_set @ 14f7bf070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS5_pbe2_set(void)

{
  PKCS5_pbe2_set_iv();
  return;
}

// PKCS5_pbe2_set_iv @ 14f7bf0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
PKCS5_pbe2_set_iv(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 void *param_5,int param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  int local_78 [2];
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f7bf0b7;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)0x0;
  local_78[0] = param_6;
  local_70 = param_4;
  local_68 = param_3;
  iVar2 = EVP_CIPHER_type();
  plVar8 = plVar9;
  if (iVar2 == 0) {
    local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0x35);
    uVar6 = 0x6c;
    plVar5 = plVar9;
  }
  else {
    plVar5 = (longlong *)ASN1_item_new(&DAT_1534ea8e0);
    if (plVar5 != (longlong *)0x0) {
      puVar1 = (undefined8 *)plVar5[1];
      uVar6 = OBJ_nid2obj(iVar2);
      *puVar1 = uVar6;
      lVar7 = ASN1_TYPE_new();
      puVar1[1] = lVar7;
      plVar8 = (longlong *)0x0;
      if (lVar7 != 0) {
        iVar3 = EVP_CIPHER_iv_length(param_1);
        if (iVar3 != 0) {
          iVar3 = EVP_CIPHER_iv_length(param_1);
          if (param_5 == (void *)0x0) {
            iVar3 = RAND_bytes(local_60,iVar3);
            plVar8 = plVar9;
            if (iVar3 < 1) goto LAB_14f7bf2be;
          }
          else {
            memcpy(local_60,param_5,(longlong)iVar3);
          }
        }
        plVar8 = (longlong *)EVP_CIPHER_CTX_new();
        if (plVar8 != (longlong *)0x0) {
          local_88 = local_60;
          local_80 = 0;
          iVar3 = EVP_CipherInit_ex(plVar8,param_1,0,0);
          if (iVar3 == 0) goto LAB_14f7bf2be;
          iVar3 = EVP_CIPHER_param_to_asn1(plVar8,puVar1[1]);
          if (iVar3 < 1) {
            local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0x52);
            uVar6 = 0x72;
            goto LAB_14f7bf2a8;
          }
          if ((local_78[0] == -1) && (iVar3 = EVP_CIPHER_CTX_ctrl(plVar8,7,0,local_78), iVar3 < 1))
          {
            ERR_clear_error();
            local_78[0] = 799;
          }
          EVP_CIPHER_CTX_free(plVar8);
          plVar8 = (longlong *)0x0;
          if (iVar2 == 0x25) {
            uVar4 = EVP_CIPHER_key_length(param_1);
          }
          else {
            uVar4 = 0xffffffff;
          }
          X509_ALGOR_free(*plVar5);
          local_88 = (undefined1 *)CONCAT44(local_88._4_4_,uVar4);
          lVar7 = PKCS5_pbkdf2_set(param_2,local_68,local_70,local_78[0]);
          *plVar5 = lVar7;
          plVar9 = (longlong *)0x0;
          if ((lVar7 != 0) && (plVar9 = (longlong *)X509_ALGOR_new(), plVar9 != (longlong *)0x0)) {
            lVar7 = OBJ_nid2obj(0xa1);
            *plVar9 = lVar7;
            lVar7 = ASN1_TYPE_pack_sequence(&DAT_1534ea8e0,plVar5,plVar9 + 1);
            if (lVar7 != 0) {
              ASN1_item_free(plVar5,&DAT_1534ea8e0);
              return plVar9;
            }
          }
        }
      }
    }
    local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0x84);
    uVar6 = 0x41;
  }
LAB_14f7bf2a8:
  ERR_put_error(0xd,0xa7,uVar6,"crypto\\asn1\\p5_pbev2.c");
LAB_14f7bf2be:
  EVP_CIPHER_CTX_free(plVar8);
  ASN1_item_free(plVar5,&DAT_1534ea8e0);
  X509_ALGOR_free(plVar9);
  return (longlong *)0x0;
}

// PKCS5_pbkdf2_set @ 14f7bf310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * PKCS5_pbkdf2_set(int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  void *_Dst;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f7bf332;
  puVar6 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x0;
  plVar2 = (longlong *)ASN1_item_new(&DAT_1534ea990);
  if ((plVar2 != (longlong *)0x0) && (piVar3 = (int *)ASN1_OCTET_STRING_new(), piVar3 != (int *)0x0)
     ) {
    iVar1 = 8;
    if (param_3 != 0) {
      iVar1 = param_3;
    }
    *(int **)(*plVar2 + 8) = piVar3;
    *(undefined4 *)*plVar2 = 4;
    _Dst = (void *)CRYPTO_malloc((longlong)iVar1,"crypto\\asn1\\p5_pbev2.c",0xa6);
    *(void **)(piVar3 + 2) = _Dst;
    if (_Dst != (void *)0x0) {
      *piVar3 = iVar1;
      puVar6 = puVar7;
      if (param_2 == (void *)0x0) {
        iVar1 = RAND_bytes(_Dst,iVar1);
        if (iVar1 < 1) goto LAB_14f7bf498;
      }
      else {
        memcpy(_Dst,param_2,(longlong)iVar1);
      }
      iVar1 = 0x800;
      if (0 < param_1) {
        iVar1 = param_1;
      }
      iVar1 = ASN1_INTEGER_set(plVar2[1],iVar1);
      if (iVar1 != 0) {
        if (0 < param_5) {
          lVar4 = ASN1_INTEGER_new();
          plVar2[2] = lVar4;
          if ((lVar4 == 0) || (iVar1 = ASN1_INTEGER_set(lVar4,param_5), iVar1 == 0))
          goto LAB_14f7bf498;
        }
        if ((0 < param_4) && (param_4 != 0xa3)) {
          lVar4 = X509_ALGOR_new();
          plVar2[3] = lVar4;
          if (lVar4 == 0) goto LAB_14f7bf498;
          uVar5 = OBJ_nid2obj(param_4);
          X509_ALGOR_set0(plVar2[3],uVar5,5);
        }
        puVar6 = (undefined8 *)X509_ALGOR_new();
        if (puVar6 != (undefined8 *)0x0) {
          uVar5 = OBJ_nid2obj(0x45);
          *puVar6 = uVar5;
          lVar4 = ASN1_TYPE_pack_sequence(&DAT_1534ea990,plVar2,puVar6 + 1);
          if (lVar4 != 0) {
            ASN1_item_free(plVar2,&DAT_1534ea990);
            return puVar6;
          }
        }
      }
    }
  }
LAB_14f7bf498:
  ERR_put_error(0xd,0xdb,0x41,"crypto\\asn1\\p5_pbev2.c",0xd9,uVar8);
  ASN1_item_free(plVar2,&DAT_1534ea990);
  X509_ALGOR_free(puVar6);
  return (undefined8 *)0x0;
}

// d2i_PBE2PARAM @ 14f7bf500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PBE2PARAM(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_PBKDF2PARAM @ 14f7bf530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PBKDF2PARAM(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_PBE2PARAM @ 14f7bf560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PBE2PARAM(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534ea8e0);
  return;
}

// i2d_PBKDF2PARAM @ 14f7bf590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PBKDF2PARAM(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534ea990);
  return;
}

