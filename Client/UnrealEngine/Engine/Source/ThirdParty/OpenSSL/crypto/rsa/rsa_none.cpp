// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// RSA_padding_add_none @ 14f77f2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_padding_add_none(void *param_1,int param_2,void *param_3,uint param_4)

{
  if (param_2 < (int)param_4) {
    ERR_put_error(4,0x6b,0x6e,"crypto\\rsa\\rsa_none.c",0x12);
    return 0;
  }
  if ((int)param_4 < param_2) {
    ERR_put_error(4,0x6b,0x7a,"crypto\\rsa\\rsa_none.c",0x17);
    return 0;
  }
  memcpy(param_1,param_3,(ulonglong)param_4);
  return 1;
}

// RSA_padding_check_none @ 14f77f330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int RSA_padding_check_none(void *param_1,int param_2,void *param_3,int param_4)

{
  if (param_2 < param_4) {
    ERR_put_error(4,0x6f,0x6d,"crypto\\rsa\\rsa_none.c",0x24,0x14f77f34a);
    param_2 = -1;
  }
  else {
    memset(param_1,0,(longlong)(param_2 - param_4));
    memcpy((void *)(((longlong)param_2 - (longlong)param_4) + (longlong)param_1),param_3,
           (longlong)param_4);
  }
  return param_2;
}

