// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// RSA_X931_hash_id @ 14f77f3c0

undefined8 RSA_X931_hash_id(int param_1)

{
  if (param_1 == 0x40) {
    return 0x33;
  }
  if (param_1 == 0x2a0) {
    return 0x34;
  }
  if (param_1 == 0x2a1) {
    return 0x36;
  }
  if (param_1 != 0x2a2) {
    return 0xffffffff;
  }
  return 0x35;
}

// RSA_padding_add_X931 @ 14f77f400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_padding_add_X931(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  undefined1 *_Dst;
  
  param_2 = param_2 - param_4;
  if (param_2 + -2 < 0) {
    ERR_put_error(4,0x7f,0x6e,"crypto\\rsa\\rsa_x931.c",0x1e,0x14f77f410);
    return 0xffffffff;
  }
  if (param_2 == 2) {
    *param_1 = 0x6a;
  }
  else {
    _Dst = param_1 + 1;
    *param_1 = 0x6b;
    param_1 = _Dst;
    if (1 < param_2 + -2) {
      memset(_Dst,0xbb,(longlong)(param_2 + -3));
      param_1 = _Dst + (param_2 + -3);
    }
    *param_1 = 0xba;
  }
  memcpy(param_1 + 1,param_3,(ulonglong)param_4);
  (param_1 + 1)[(int)param_4] = 0xcc;
  return 1;
}

// RSA_padding_check_X931 @ 14f77f4c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint RSA_padding_check_X931(void *param_1,undefined8 param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  char *_Src;
  uint uVar3;
  undefined4 uVar4;
  
  if ((param_5 != param_4) || (1 < (byte)(*param_3 + 0x96U))) {
    ERR_put_error(4,0x80,0x89,"crypto\\rsa\\rsa_x931.c",0x3d);
    return 0xffffffff;
  }
  _Src = param_3 + 1;
  if (*param_3 == 'k') {
    param_4 = param_4 + -3;
    iVar2 = 0;
    if (0 < param_4) {
      do {
        cVar1 = *_Src;
        _Src = _Src + 1;
        if (cVar1 == -0x46) break;
        if (cVar1 != -0x45) {
          uVar4 = 0x48;
          goto LAB_14f77f528;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
    }
    uVar3 = param_4 - iVar2;
    if (iVar2 == 0) {
      uVar4 = 0x50;
LAB_14f77f528:
      ERR_put_error(4,0x80,0x8a,"crypto\\rsa\\rsa_x931.c",uVar4);
      return 0xffffffff;
    }
  }
  else {
    uVar3 = param_4 - 2;
  }
  if (_Src[(int)uVar3] != -0x34) {
    ERR_put_error(4,0x80,0x8b,"crypto\\rsa\\rsa_x931.c",0x59);
    return 0xffffffff;
  }
  memcpy(param_1,_Src,(ulonglong)uVar3);
  return uVar3;
}

