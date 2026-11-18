// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// ENGINE_register_all_complete @ 14f6fc290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_all_complete(void)

{
  longlong lVar1;
  
  for (lVar1 = ENGINE_get_first(); lVar1 != 0; lVar1 = ENGINE_get_next(lVar1)) {
    if ((*(byte *)(lVar1 + 0x98) & 8) == 0) {
      ENGINE_register_ciphers(lVar1);
      ENGINE_register_digests(lVar1);
      ENGINE_register_RSA(lVar1);
      ENGINE_register_DSA(lVar1);
      ENGINE_register_DH(lVar1);
      ENGINE_register_EC(lVar1);
      ENGINE_register_RAND(lVar1);
      ENGINE_register_pkey_meths(lVar1);
      ENGINE_register_pkey_asn1_meths(lVar1);
    }
  }
  return 1;
}

// ENGINE_register_complete @ 14f6fc330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_complete(undefined8 param_1)

{
  ENGINE_register_ciphers();
  ENGINE_register_digests(param_1);
  ENGINE_register_RSA(param_1);
  ENGINE_register_DSA(param_1);
  ENGINE_register_DH(param_1);
  ENGINE_register_EC(param_1);
  ENGINE_register_RAND(param_1);
  ENGINE_register_pkey_meths(param_1);
  ENGINE_register_pkey_asn1_meths(param_1);
  return 1;
}

// ENGINE_set_default @ 14f6fc3a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if (((param_2 & 0x40) != 0) && (iVar1 = ENGINE_set_default_ciphers(), iVar1 == 0)) {
    return 0;
  }
  if (((char)param_2 < '\0') && (iVar1 = ENGINE_set_default_digests(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 1) != 0) && (iVar1 = ENGINE_set_default_RSA(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 2) != 0) && (iVar1 = ENGINE_set_default_DSA(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 4) != 0) && (iVar1 = ENGINE_set_default_DH(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 >> 0xb & 1) != 0) && (iVar1 = ENGINE_set_default_EC(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 8) != 0) && (iVar1 = ENGINE_set_default_RAND(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 >> 9 & 1) != 0) && (iVar1 = ENGINE_set_default_pkey_meths(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 >> 10 & 1) != 0) &&
     (iVar1 = ENGINE_set_default_pkey_asn1_meths(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

// ENGINE_set_default_string @ 14f6fc480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_string(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  iVar1 = CONF_parse_list(param_2,0x2c,1,FUN_14f6fc530,local_res18,0x14f6fc490);
  if (iVar1 == 0) {
    ERR_put_error(0x26,0xbd,0x96,"crypto\\engine\\eng_fat.c",0x56);
    ERR_add_error_data(2,"str=",param_2);
    return 0;
  }
  uVar2 = ENGINE_set_default(param_1,local_res18[0]);
  return uVar2;
}

// FUN_14f6fc530 @ 14f6fc530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fc530(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  size_t _MaxCount;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  _MaxCount = (size_t)param_2;
  iVar1 = strncmp(param_1,"ALL",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0xffff;
    return 1;
  }
  iVar1 = strncmp(param_1,"RSA",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 1;
    return 1;
  }
  iVar1 = strncmp(param_1,"DSA",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 2;
    return 1;
  }
  iVar1 = strncmp(param_1,"DH",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 4;
    return 1;
  }
  iVar1 = strncmp(param_1,"EC",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x800;
    return 1;
  }
  iVar1 = strncmp(param_1,"RAND",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 8;
    return 1;
  }
  iVar1 = strncmp(param_1,"CIPHERS",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x40;
    return 1;
  }
  iVar1 = strncmp(param_1,"DIGESTS",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x80;
    return 1;
  }
  iVar1 = strncmp(param_1,"PKEY",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x600;
    return 1;
  }
  iVar1 = strncmp(param_1,"PKEY_CRYPTO",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x200;
    return 1;
  }
  iVar1 = strncmp(param_1,"PKEY_ASN1",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x400;
    return 1;
  }
  return 0;
}

