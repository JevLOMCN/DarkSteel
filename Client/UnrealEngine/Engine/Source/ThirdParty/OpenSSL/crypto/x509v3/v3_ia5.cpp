// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// i2s_ASN1_IA5STRING @ 14f781fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * i2s_ASN1_IA5STRING(undefined8 param_1,int *param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x14f781fcc;
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    _Dst = (void *)CRYPTO_malloc((longlong)(*param_2 + 1),"crypto\\x509v3\\v3_ia5.c",0x22);
    if (_Dst == (void *)0x0) {
      ERR_put_error(0x22,0x95,0x41,"crypto\\x509v3\\v3_ia5.c",0x23,uVar1);
      return (void *)0x0;
    }
    memcpy(_Dst,*(void **)(param_2 + 2),(longlong)*param_2);
    *(undefined1 *)((longlong)*param_2 + (longlong)_Dst) = 0;
    return _Dst;
  }
  return (void *)0x0;
}

// s2i_ASN1_IA5STRING @ 14f782060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong s2i_ASN1_IA5STRING(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f78206c;
  if (param_3 == 0) {
    ERR_put_error(0x22,100,0x6b,"crypto\\x509v3\\v3_ia5.c",0x31,0x14f78206c);
    return 0;
  }
  lVar2 = ASN1_IA5STRING_new();
  if (lVar2 == 0) {
    ERR_put_error(0x22,100,0x41,"crypto\\x509v3\\v3_ia5.c",0x3f,uVar4);
    return 0;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_3 + lVar3) != '\0');
  iVar1 = ASN1_STRING_set(lVar2,param_3);
  if (iVar1 == 0) {
    ASN1_IA5STRING_free(lVar2);
    return 0;
  }
  return lVar2;
}

