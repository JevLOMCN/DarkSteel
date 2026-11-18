// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 23

// X509_SIG_INFO_set @ 14f6b3780

void X509_SIG_INFO_set(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// X509_get0_extensions @ 14f6b37a0

undefined8 X509_get0_extensions(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}

// X509_get0_notAfter @ 14f6b37b0

undefined8 X509_get0_notAfter(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}

// X509_get0_notBefore @ 14f6b37c0

undefined8 X509_get0_notBefore(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}

// X509_get0_tbs_sigalg @ 14f6b37d0

longlong X509_get0_tbs_sigalg(longlong param_1)

{
  return param_1 + 0x20;
}

// X509_get0_uids @ 14f6b37e0

void X509_get0_uids(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x58);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x60);
  }
  return;
}

// X509_get_X509_PUBKEY @ 14f6b3800

undefined8 X509_get_X509_PUBKEY(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}

// X509_get_signature_info @ 14f6b3810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint X509_get_signature_info
               (longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  X509_check_purpose(param_1,0xffffffff);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xa8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xac);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xb0);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0xb4);
  }
  return *(uint *)(param_1 + 0xb4) & 1;
}

// X509_get_signature_type @ 14f6b38b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_signature_type(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x80));
  EVP_PKEY_type(uVar1);
  return;
}

// X509_get_version @ 14f6b38e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_version(undefined8 *param_1)

{
  ASN1_INTEGER_get(*param_1);
  return;
}

// X509_getm_notAfter @ 14f6b3900

undefined8 X509_getm_notAfter(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}

// X509_getm_notBefore @ 14f6b3910

undefined8 X509_getm_notBefore(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}

// X509_set1_notAfter @ 14f6b3920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_set1_notAfter(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return false;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != param_2) {
    lVar1 = ASN1_STRING_dup(param_2);
    if (lVar1 != 0) {
      ASN1_TIME_free(*(undefined8 *)(param_1 + 0x40));
      *(longlong *)(param_1 + 0x40) = lVar1;
    }
  }
  return lVar1 != 0;
}

// X509_set1_notBefore @ 14f6b3990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_set1_notBefore(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return false;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != param_2) {
    lVar1 = ASN1_STRING_dup(param_2);
    if (lVar1 != 0) {
      ASN1_TIME_free(*(undefined8 *)(param_1 + 0x38));
      *(longlong *)(param_1 + 0x38) = lVar1;
    }
  }
  return lVar1 != 0;
}

// X509_set_issuer_name @ 14f6b3a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_set_issuer_name(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_NAME_set(param_1 + 0x30);
  return uVar1;
}

// X509_set_pubkey @ 14f6b3a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_set_pubkey(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_PUBKEY_set(param_1 + 0x50);
  return uVar1;
}

// X509_set_serialNumber @ 14f6b3a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_set_serialNumber(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 + 8 != param_2) {
    uVar1 = ASN1_STRING_copy();
    return uVar1;
  }
  return 1;
}

// X509_set_subject_name @ 14f6b3aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_set_subject_name(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_NAME_set(param_1 + 0x48);
  return uVar1;
}

// X509_set_version @ 14f6b3ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_set_version(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    if (*param_1 == 0) {
      lVar1 = ASN1_INTEGER_new();
      *param_1 = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    uVar2 = ASN1_INTEGER_set(*param_1,param_2);
    return uVar2;
  }
  ASN1_INTEGER_free(*param_1);
  *param_1 = 0;
  return 1;
}

// X509_up_ref @ 14f6b3b50

bool X509_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xb8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}

// x509_init_sig_info @ 14f6b3b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void x509_init_sig_info(longlong param_1)

{
  FUN_14f6b3c10(param_1 + 0xa8,param_1 + 0x80,param_1 + 0x90);
  return;
}

// x509_set1_time @ 14f6b3bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool x509_set1_time(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_2) {
    lVar1 = ASN1_STRING_dup(param_2);
    if (lVar1 != 0) {
      ASN1_TIME_free(*param_1);
      *param_1 = lVar1;
    }
  }
  return lVar1 != 0;
}

// FUN_14f6b3c10 @ 14f6b3c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6b3c10(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  param_1[2] = -1;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  uVar1 = OBJ_obj2nid(*param_2);
  iVar2 = OBJ_find_sigid_algs(uVar1,local_res8,local_res10);
  if (iVar2 != 0) {
    if (local_res10[0] != 0) {
      param_1[1] = local_res10[0];
      if (local_res8[0] == 0) {
        lVar3 = EVP_PKEY_asn1_find(0);
        if ((lVar3 != 0) && (*(code **)(lVar3 + 0xd8) != (code *)0x0)) {
          iVar2 = (**(code **)(lVar3 + 0xd8))(param_1,param_2,param_3);
          if (iVar2 != 0) {
            param_1[3] = param_1[3] | 1;
            return;
          }
        }
      }
      else {
        param_1[3] = param_1[3] | 1;
        *param_1 = local_res8[0];
        uVar4 = OBJ_nid2sn();
        lVar3 = EVP_get_digestbyname(uVar4);
        if (lVar3 != 0) {
          iVar2 = EVP_MD_size(lVar3);
          param_1[2] = iVar2 << 2;
          if ((local_res8[0] == 0x40) || (local_res8[0] - 0x2a0U < 3)) {
            param_1[3] = param_1[3] | 2;
          }
        }
      }
    }
  }
  return;
}

