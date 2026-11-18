// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// SSL_CTX_set_tlsext_use_srtp @ 14f6a3b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_tlsext_use_srtp(longlong param_1,undefined8 param_2)

{
  FUN_14f6a3d40(param_2,param_1 + 0x370);
  return;
}

// SSL_get_srtp_profiles @ 14f6a3b70

longlong SSL_get_srtp_profiles(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(longlong *)(param_1 + 0x770), lVar1 == 0 &&
      ((*(longlong *)(param_1 + 0x598) == 0 ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x370), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}

// SSL_set_tlsext_use_srtp @ 14f6a3bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_tlsext_use_srtp(longlong param_1,undefined8 param_2)

{
  FUN_14f6a3d40(param_2,param_1 + 0x770);
  return;
}

// FUN_14f6a3c10 @ 14f6a3c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a3c10(char *param_1,undefined8 *param_2,size_t param_3)

{
  char cVar1;
  char *_Str1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined **ppuVar5;
  char *pcVar6;
  
  ppuVar5 = &PTR_s_SRTP_AES128_CM_SHA1_80_154df8040;
  puVar2 = PTR_s_SRTP_AES128_CM_SHA1_80_154df8040;
  while( true ) {
    if (puVar2 == (undefined *)0x0) {
      return 1;
    }
    _Str1 = *ppuVar5;
    cVar1 = *_Str1;
    pcVar6 = _Str1;
    for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    if ((param_3 == (uVar3 & 0x7fffffff)) && (iVar4 = strncmp(_Str1,param_1,param_3), iVar4 == 0))
    break;
    ppuVar5 = ppuVar5 + 2;
    puVar2 = *ppuVar5;
  }
  *param_2 = ppuVar5;
  return 0;
}

// FUN_14f6a3cc0 @ 14f6a3cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a3cc0(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f6a3ce0 @ 14f6a3ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a3ce0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6a3d00 @ 14f6a3d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a3d00(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6a3d20 @ 14f6a3d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a3d20(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6a3d40 @ 14f6a3d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6a3d40(char *param_1,longlong *param_2)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined **ppuVar9;
  size_t _MaxCount;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar11 = 0x14f6a3d50;
  lVar5 = OPENSSL_sk_new_null();
  if (lVar5 == 0) {
    ERR_put_error(0x14,0x135,0x16a,"ssl\\d1_srtp.c",0x48,uVar11);
    return 1;
  }
  while( true ) {
    pcVar6 = strchr(param_1,0x3a);
    if (pcVar6 == (char *)0x0) {
      cVar1 = *param_1;
      pcVar7 = param_1;
      for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      _MaxCount = (size_t)(uVar3 & 0x7fffffff);
    }
    else {
      _MaxCount = (longlong)pcVar6 - (longlong)param_1;
    }
    ppuVar9 = &PTR_s_SRTP_AES128_CM_SHA1_80_154df8040;
    puVar2 = PTR_s_SRTP_AES128_CM_SHA1_80_154df8040;
    while( true ) {
      if (puVar2 == (undefined *)0x0) {
        uVar10 = 0x5e;
        uVar11 = 0x16c;
        goto LAB_14f6a3e54;
      }
      pcVar7 = *ppuVar9;
      cVar1 = *pcVar7;
      pcVar8 = pcVar7;
      for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      }
      if ((_MaxCount == (uVar3 & 0x7fffffff)) &&
         (iVar4 = strncmp(pcVar7,param_1,_MaxCount), iVar4 == 0)) break;
      ppuVar9 = ppuVar9 + 2;
      puVar2 = *ppuVar9;
    }
    iVar4 = OPENSSL_sk_find(lVar5,ppuVar9);
    if (-1 < iVar4) break;
    iVar4 = OPENSSL_sk_push(lVar5,ppuVar9);
    if (iVar4 == 0) {
      uVar10 = 0x59;
      uVar11 = 0x16a;
      goto LAB_14f6a3e54;
    }
    if (pcVar6 == (char *)0x0) {
      OPENSSL_sk_free(*param_2);
      *param_2 = lVar5;
      return 0;
    }
    param_1 = pcVar6 + 1;
  }
  uVar10 = 0x53;
  uVar11 = 0x161;
LAB_14f6a3e54:
  ERR_put_error(0x14,0x135,uVar11,"ssl\\d1_srtp.c",uVar10);
  OPENSSL_sk_free(lVar5);
  return 1;
}

