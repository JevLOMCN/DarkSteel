// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// CRYPTO_memdup @ 14f6c6eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * CRYPTO_memdup(void *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x14f6c6ec0;
  if ((param_1 != (void *)0x0) && (param_2 < 0x7fffffff)) {
    _Dst = (void *)CRYPTO_malloc(param_2,param_3,param_4);
    if (_Dst == (void *)0x0) {
      ERR_put_error(0xf,0x73,0x41,"crypto\\o_str.c",0x42,uVar1);
      return (void *)0x0;
    }
    memcpy(_Dst,param_1,param_2);
    return _Dst;
  }
  return (void *)0x0;
}

// CRYPTO_strdup @ 14f6c6f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CRYPTO_strdup(char *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar4 = param_1;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    lVar3 = CRYPTO_malloc((uVar2 & 0x7fffffff) + 1);
    if (lVar3 != 0) {
      lVar5 = lVar3 - (longlong)param_1;
      do {
        cVar1 = *param_1;
        param_1[lVar5] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
    return lVar3;
  }
  return 0;
}

// CRYPTO_strndup @ 14f6c6fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * CRYPTO_strndup(char *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  void *_Dst;
  size_t _Size;
  
  pcVar1 = param_1;
  if (param_1 == (char *)0x0) {
    return (void *)0x0;
  }
  for (; (param_2 != 0 && (param_2 = param_2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
  }
  _Size = (longlong)pcVar1 - (longlong)param_1;
  _Dst = (void *)CRYPTO_malloc(_Size + 1,param_3,param_4);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = 0;
  }
  return _Dst;
}

// OPENSSL_buf2hexstr @ 14f6c7060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * OPENSSL_buf2hexstr(byte *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6c7070;
  uVar3 = (ulonglong)param_2;
  if (param_2 == 0) {
    pcVar1 = (char *)CRYPTO_zalloc(1,"crypto\\o_str.c",200);
    return pcVar1;
  }
  pcVar1 = (char *)CRYPTO_malloc((longlong)(int)(param_2 * 3),"crypto\\o_str.c",0xcb);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    if (0 < (int)param_2) {
      do {
        *pcVar2 = "0123456789ABCDEF"[*param_1 >> 4];
        pcVar2[1] = "0123456789ABCDEF"[*param_1 & 0xf];
        pcVar2[2] = ':';
        pcVar2 = pcVar2 + 3;
        uVar3 = uVar3 - 1;
        param_1 = param_1 + 1;
      } while (uVar3 != 0);
    }
    pcVar2[-1] = '\0';
    return pcVar1;
  }
  ERR_put_error(0xf,0x75,0x41,"crypto\\o_str.c",0xcc,uVar4);
  return (char *)0x0;
}

// OPENSSL_hexchar2int @ 14f6c7140

undefined8 OPENSSL_hexchar2int(undefined1 param_1)

{
  switch(param_1) {
  case 0x30:
    return 0;
  case 0x31:
    return 1;
  case 0x32:
    return 2;
  case 0x33:
    return 3;
  case 0x34:
    return 4;
  case 0x35:
    return 5;
  case 0x36:
    return 6;
  case 0x37:
    return 7;
  case 0x38:
    return 8;
  case 0x39:
    return 9;
  default:
    return 0xffffffff;
  case 0x41:
  case 0x61:
    return 10;
  case 0x42:
  case 0x62:
    return 0xb;
  case 0x43:
  case 99:
    return 0xc;
  case 0x44:
  case 100:
    return 0xd;
  case 0x45:
  case 0x65:
    return 0xe;
  case 0x46:
  case 0x66:
    return 0xf;
  }
}

// OPENSSL_hexstr2buf @ 14f6c7250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * OPENSSL_hexstr2buf(char *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f6c7260;
  cVar1 = *param_1;
  pcVar7 = param_1;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  pbVar6 = (byte *)CRYPTO_malloc(uVar3 >> 1 & 0x3fffffff,"crypto\\o_str.c",0x9c);
  if (pbVar6 == (byte *)0x0) {
    ERR_put_error(0xf,0x76,0x41,"crypto\\o_str.c",0x9d,uVar9);
    return (byte *)0x0;
  }
  cVar1 = *param_1;
  pbVar8 = pbVar6;
  do {
    if (cVar1 == '\0') {
      if (param_2 != (int *)0x0) {
        *param_2 = (int)pbVar8 - (int)pbVar6;
      }
      return pbVar6;
    }
    cVar1 = *param_1;
    pcVar7 = param_1 + 1;
    if (cVar1 != ':') {
      cVar2 = *pcVar7;
      pcVar7 = param_1 + 2;
      if (cVar2 == '\0') {
        ERR_put_error(0xf,0x76,0x67,"crypto\\o_str.c",0xa7,uVar9);
        CRYPTO_free(pbVar6,"crypto\\o_str.c",0xa8);
        return (byte *)0x0;
      }
      iVar4 = OPENSSL_hexchar2int();
      iVar5 = OPENSSL_hexchar2int(cVar1);
      if ((iVar4 < 0) || (iVar5 < 0)) {
        CRYPTO_free(pbVar6,"crypto\\o_str.c",0xae);
        ERR_put_error(0xf,0x76,0x66,"crypto\\o_str.c",0xaf);
        return (byte *)0x0;
      }
      *pbVar8 = (char)iVar5 << 4 | (byte)iVar4;
      pbVar8 = pbVar8 + 1;
    }
    cVar1 = *pcVar7;
    param_1 = pcVar7;
  } while( true );
}

// OPENSSL_strlcat @ 14f6c7420

longlong OPENSSL_strlcat(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = uVar4;
  for (; (uVar2 = uVar4, param_3 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    uVar5 = uVar5 + 1;
    param_3 = param_3 - 1;
  }
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_3 = param_3 - 1;
    uVar2 = uVar2 + 1;
  }
  if (param_3 != 0) {
    *param_1 = '\0';
  }
  cVar1 = *param_2;
  while ((cVar1 != '\0' && (uVar3 = (uint)uVar4, uVar3 < 0x80000000))) {
    param_2 = param_2 + 1;
    uVar3 = uVar3 + 1;
    cVar1 = *param_2;
    uVar4 = (ulonglong)uVar3;
  }
  return (uVar3 & 0x7fffffff) + uVar2 + uVar5;
}

// OPENSSL_strlcpy @ 14f6c74b0

longlong OPENSSL_strlcpy(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = 0;
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    lVar3 = lVar3 + 1;
    param_3 = param_3 - 1;
  }
  if (param_3 != 0) {
    *param_1 = '\0';
  }
  cVar1 = *param_2;
  for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  }
  return (ulonglong)(uVar2 & 0x7fffffff) + lVar3;
}

// OPENSSL_strnlen @ 14f6c7510

longlong OPENSSL_strnlen(char *param_1,longlong param_2)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; (param_2 != 0 && (param_2 = param_2 + -1, *pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
  }
  return (longlong)pcVar1 - (longlong)param_1;
}

// openssl_strerror_r @ 14f6c7570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool openssl_strerror_r(int param_1,char *param_2,size_t param_3)

{
  errno_t eVar1;
  
  eVar1 = strerror_s(param_2,param_3,param_1);
  return eVar1 == 0;
}

