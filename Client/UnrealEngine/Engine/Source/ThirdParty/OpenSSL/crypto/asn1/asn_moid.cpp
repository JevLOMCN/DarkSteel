// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// ASN1_add_oid_module @ 14f720390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_add_oid_module(void)

{
  CONF_module_add("oid_section",FUN_14f720570,&DAT_14f720560);
  return;
}

// FUN_14f7203d0 @ 14f7203d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f7203d0(char *param_1,void *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  void *_Dst;
  void *pvVar5;
  bool bVar6;
  
  _Dst = (void *)0x0;
  pcVar4 = strrchr(param_1,0x2c);
  pvVar5 = param_2;
  if (pcVar4 == (char *)0x0) {
LAB_14f720515:
    iVar3 = OBJ_create(param_1,param_2,pvVar5);
    CRYPTO_free(_Dst,"crypto\\asn1\\asn_moid.c",0x61);
    bVar6 = iVar3 != 0;
  }
  else {
    if (pcVar4[1] != '\0') {
      iVar3 = ossl_ctype_check((int)pcVar4[1],8);
      pcVar2 = pcVar4;
      while (pcVar2 = pcVar2 + 1, iVar3 != 0) {
        iVar3 = ossl_ctype_check((int)pcVar2[1],8);
      }
      iVar3 = ossl_ctype_check((int)*param_1,8);
      while (iVar3 != 0) {
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        iVar3 = ossl_ctype_check((int)*pcVar1,8);
      }
      iVar3 = ossl_ctype_check((int)pcVar4[-1],8);
      while (pcVar4 = pcVar4 + -1, iVar3 != 0) {
        if (pcVar4 == param_1) goto LAB_14f7204fc;
        iVar3 = ossl_ctype_check((int)pcVar4[-1],8);
      }
      pcVar4 = pcVar4 + (1 - (longlong)param_1);
      _Dst = (void *)CRYPTO_malloc(pcVar4 + 1,"crypto\\asn1\\asn_moid.c",0x56);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_1,(size_t)pcVar4);
        pcVar4[(longlong)_Dst] = '\0';
        param_1 = pcVar2;
        pvVar5 = _Dst;
        goto LAB_14f720515;
      }
      ERR_put_error(0xd,0x7c,0x41,"crypto\\asn1\\asn_moid.c",0x57);
    }
LAB_14f7204fc:
    bVar6 = false;
  }
  return bVar6;
}

// FUN_14f720570 @ 14f720570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f720570(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  void *_Dst;
  char *_Str;
  void *pvVar9;
  int iVar10;
  
  uVar5 = CONF_imodule_get_value();
  lVar6 = NCONF_get_section(param_2,uVar5);
  if (lVar6 == 0) {
    ERR_put_error(0xd,0xae,0xac,"crypto\\asn1\\asn_moid.c",0x20);
    return 0;
  }
  iVar10 = 0;
  iVar4 = OPENSSL_sk_num(lVar6);
  if (0 < iVar4) {
    do {
      lVar7 = OPENSSL_sk_value(lVar6,iVar10);
      _Dst = (void *)0x0;
      _Str = *(char **)(lVar7 + 0x10);
      pvVar2 = *(void **)(lVar7 + 8);
      pcVar8 = strrchr(_Str,0x2c);
      pvVar9 = pvVar2;
      if (pcVar8 != (char *)0x0) {
        if (pcVar8[1] == '\0') goto LAB_14f72078e;
        iVar4 = ossl_ctype_check((int)pcVar8[1],8);
        pcVar3 = pcVar8;
        while (pcVar3 = pcVar3 + 1, iVar4 != 0) {
          iVar4 = ossl_ctype_check((int)pcVar3[1],8);
        }
        iVar4 = ossl_ctype_check((int)*_Str,8);
        while (iVar4 != 0) {
          pcVar1 = _Str + 1;
          _Str = _Str + 1;
          iVar4 = ossl_ctype_check((int)*pcVar1,8);
        }
        iVar4 = ossl_ctype_check((int)pcVar8[-1],8);
        while (pcVar8 = pcVar8 + -1, iVar4 != 0) {
          if (pcVar8 == _Str) goto LAB_14f72078e;
          iVar4 = ossl_ctype_check((int)pcVar8[-1],8);
        }
        pcVar8 = pcVar8 + (1 - (longlong)_Str);
        _Dst = (void *)CRYPTO_malloc(pcVar8 + 1,"crypto\\asn1\\asn_moid.c",0x56);
        if (_Dst == (void *)0x0) {
          ERR_put_error(0xd,0x7c,0x41,"crypto\\asn1\\asn_moid.c",0x57);
          goto LAB_14f72078e;
        }
        memcpy(_Dst,_Str,(size_t)pcVar8);
        pcVar8[(longlong)_Dst] = '\0';
        _Str = pcVar3;
        pvVar9 = _Dst;
      }
      iVar4 = OBJ_create(_Str,pvVar2,pvVar9);
      CRYPTO_free(_Dst,"crypto\\asn1\\asn_moid.c",0x61);
      if (iVar4 == 0) {
LAB_14f72078e:
        ERR_put_error(0xd,0xae,0xab,"crypto\\asn1\\asn_moid.c",0x26);
        return 0;
      }
      iVar10 = iVar10 + 1;
      iVar4 = OPENSSL_sk_num(lVar6);
    } while (iVar10 < iVar4);
  }
  return 1;
}

// FUN_14f7207c0 @ 14f7207c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7207c0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7207e0 @ 14f7207e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7207e0(void)

{
  OPENSSL_sk_value();
  return;
}

