// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 26

// FUN_14f78d560 @ 14f78d560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78d560(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 3) {
    lVar1 = *param_2;
    EVP_PKEY_free(*(undefined8 *)(lVar1 + 0x40));
    X509_free(*(undefined8 *)(lVar1 + 0x38));
    EVP_MD_CTX_free(*(undefined8 *)(lVar1 + 0x48));
  }
  return 1;
}

// FUN_14f78d5f0 @ 14f78d5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78d5f0(int param_1,longlong *param_2)

{
  if (param_1 == 3) {
    EVP_PKEY_free(*(undefined8 *)(*param_2 + 0x10));
  }
  return 1;
}

// FUN_14f78d630 @ 14f78d630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78d630(int param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (param_1 != 1) {
    if (param_1 == 3) {
      EVP_PKEY_CTX_free(*(undefined8 *)(lVar1 + 0x28));
      EVP_CIPHER_CTX_free(*(undefined8 *)(lVar1 + 0x30));
    }
    return 1;
  }
  lVar2 = EVP_CIPHER_CTX_new();
  *(longlong *)(lVar1 + 0x30) = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  EVP_CIPHER_CTX_set_flags(lVar2,1);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return 1;
}

// FUN_14f78d6d0 @ 14f78d6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78d6d0(int param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == 2) {
    piVar2 = (int *)*param_2;
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      lVar3 = *(longlong *)(piVar2 + 2);
      EVP_PKEY_free(*(undefined8 *)(lVar3 + 0x28));
      X509_free(*(undefined8 *)(lVar3 + 0x20));
      EVP_PKEY_CTX_free(*(undefined8 *)(lVar3 + 0x30));
      return 1;
    }
    if (iVar1 == 2) {
      uVar4 = 0xd2;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      uVar4 = 0xd5;
    }
    CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(piVar2 + 2) + 0x20),
                      *(undefined8 *)(*(longlong *)(piVar2 + 2) + 0x28),"crypto\\cms\\cms_asn1.c",
                      uVar4,0x14f78d6da);
  }
  return 1;
}

// FUN_14f78d780 @ 14f78d780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f78d780(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    return 1;
  }
  uVar1 = *param_2;
  if (param_1 == 10) {
    iVar2 = CMS_stream(param_4 + 2,uVar1);
    if (iVar2 < 1) {
      return 0;
    }
LAB_14f78d7e0:
    lVar3 = CMS_dataInit(uVar1,*param_4);
    param_4[1] = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
  }
  else {
    if (param_1 != 0xb) {
      if (param_1 == 0xc) goto LAB_14f78d7e0;
      if (param_1 != 0xd) {
        return 1;
      }
    }
    iVar2 = CMS_dataFinal(uVar1,param_4[1]);
    if (0 < iVar2) {
      return 1;
    }
  }
  return 0;
}

// CMS_SignerInfo_it @ 14f78d830

undefined * CMS_SignerInfo_it(void)

{
  return &DAT_1534dc3b0;
}

// CMS_IssuerAndSerialNumber_it @ 14f78d840

undefined * CMS_IssuerAndSerialNumber_it(void)

{
  return &DAT_1534dd7a0;
}

// CMS_RecipientInfo_it @ 14f78d850

undefined * CMS_RecipientInfo_it(void)

{
  return &DAT_1534dce60;
}

// CMS_PasswordRecipientInfo_it @ 14f78d860

undefined * CMS_PasswordRecipientInfo_it(void)

{
  return &DAT_1534dcd20;
}

// CMS_CertificateChoices_it @ 14f78d870

undefined * CMS_CertificateChoices_it(void)

{
  return &DAT_1534dd8e0;
}

// CMS_DigestedData_it @ 14f78d880

undefined * CMS_DigestedData_it(void)

{
  return &DAT_1534dcfe0;
}

// CMS_EncryptedData_it @ 14f78d890

undefined * CMS_EncryptedData_it(void)

{
  return &DAT_1534dd070;
}

// CMS_EnvelopedData_it @ 14f78d8a0

undefined * CMS_EnvelopedData_it(void)

{
  return &DAT_1534dcf30;
}

// CMS_KEKRecipientInfo_it @ 14f78d8b0

undefined * CMS_KEKRecipientInfo_it(void)

{
  return &DAT_1534dcc70;
}

// CMS_KeyAgreeRecipientInfo_it @ 14f78d8c0

undefined * CMS_KeyAgreeRecipientInfo_it(void)

{
  return &DAT_1534dcb30;
}

// CMS_KeyTransRecipientInfo_it @ 14f78d8d0

undefined * CMS_KeyTransRecipientInfo_it(void)

{
  return &DAT_1534dc730;
}

// CMS_OriginatorPublicKey_it @ 14f78d8e0

undefined * CMS_OriginatorPublicKey_it(void)

{
  return &DAT_1534dc980;
}

// CMS_OtherKeyAttribute_it @ 14f78d8f0

undefined * CMS_OtherKeyAttribute_it(void)

{
  return &DAT_1534dc7a0;
}

// CMS_RecipientEncryptedKey_it @ 14f78d900

undefined * CMS_RecipientEncryptedKey_it(void)

{
  return &DAT_1534dc910;
}

// CMS_RecipientKeyIdentifier_it @ 14f78d910

undefined * CMS_RecipientKeyIdentifier_it(void)

{
  return &DAT_1534dc830;
}

// CMS_RevocationInfoChoice_it @ 14f78d920

undefined * CMS_RevocationInfoChoice_it(void)

{
  return &DAT_1534dc490;
}

// CMS_SignedData_it @ 14f78d930

undefined * CMS_SignedData_it(void)

{
  return &DAT_1534dc580;
}

// CMS_Attributes_Sign_it @ 14f78d980

undefined * CMS_Attributes_Sign_it(void)

{
  return &DAT_1534dd4a0;
}

// CMS_Attributes_Verify_it @ 14f78d990

undefined * CMS_Attributes_Verify_it(void)

{
  return &DAT_1534dd4f0;
}

// CMS_ContentInfo_it @ 14f78d9a0

undefined * CMS_ContentInfo_it(void)

{
  return &DAT_1534dd450;
}

// CMS_SharedInfo_encode @ 14f78d9d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_SharedInfo_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22;
  undefined1 local_res23;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 *local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f78d9da;
  param_4 = param_4 << 3;
  local_res20 = (undefined1)((uint)param_4 >> 0x18);
  local_res21 = (undefined1)((uint)param_4 >> 0x10);
  local_res22 = (undefined1)((uint)param_4 >> 8);
  local_30 = &local_res20;
  local_10 = &local_38;
  local_res23 = (undefined1)param_4;
  local_38 = 4;
  local_34 = 4;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_3;
  ASN1_item_i2d(&local_20,param_1,&DAT_1534dd730);
  return;
}

