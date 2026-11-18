// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// PKCS12_add_CSPName_asc @ 14f7cde10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool PKCS12_add_CSPName_asc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x10,0x1a1,0x1001,param_2,param_3);
  return lVar1 != 0;
}

// PKCS12_add_friendlyname_asc @ 14f7cde50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool PKCS12_add_friendlyname_asc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x10,0x9c,0x1001,param_2,param_3);
  return lVar1 != 0;
}

// PKCS12_add_friendlyname_uni @ 14f7cde90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool PKCS12_add_friendlyname_uni(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x10,0x9c,0x1002,param_2,param_3);
  return lVar1 != 0;
}

// PKCS12_add_friendlyname_utf8 @ 14f7cded0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool PKCS12_add_friendlyname_utf8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x10,0x9c,0x1000,param_2,param_3);
  return lVar1 != 0;
}

// PKCS12_add_localkeyid @ 14f7cdf10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool PKCS12_add_localkeyid(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x10,0x9d,4,param_2,param_3);
  return lVar1 != 0;
}

// PKCS12_get_attr_gen @ 14f7cdf50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_get_attr_gen(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = X509at_get_attr_by_NID(param_1,param_2,0xffffffff);
  uVar2 = X509at_get_attr(param_1,uVar1);
  X509_ATTRIBUTE_get0_type(uVar2,0);
  return;
}

// PKCS12_get_friendlyname @ 14f7cdf90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS12_get_friendlyname(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)PKCS12_SAFEBAG_get0_attr(param_1,0x9c,param_3,param_4,0x14f7cdf9a);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x1e)) {
    uVar2 = OPENSSL_uni2utf8(*(undefined8 *)(*(undefined4 **)(piVar1 + 2) + 2),
                             **(undefined4 **)(piVar1 + 2));
    return uVar2;
  }
  return 0;
}

// PKCS8_add_keyusage @ 14f7cdfd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS8_add_keyusage(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  PKCS8_pkey_add1_attr_by_NID(param_1,0x53,3,local_res10,1);
  return;
}

