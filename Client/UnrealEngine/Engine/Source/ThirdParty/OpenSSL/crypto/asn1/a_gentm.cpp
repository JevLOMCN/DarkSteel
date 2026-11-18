// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// ASN1_GENERALIZEDTIME_adj @ 14f706750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ASN1_GENERALIZEDTIME_adj(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14f70675f;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_2;
  lVar2 = OPENSSL_gmtime(&local_68,local_60);
  if (lVar2 == 0) {
LAB_14f706796:
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) || (param_4 != 0)) {
      iVar1 = OPENSSL_gmtime_adj(lVar2,param_3,param_4);
      if (iVar1 == 0) goto LAB_14f706796;
    }
    uVar3 = asn1_time_from_tm(param_1,lVar2,0x18);
  }
  return uVar3;
}

// ASN1_GENERALIZEDTIME_check @ 14f7067e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_GENERALIZEDTIME_check(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) != 0x18) {
    return 0;
  }
  uVar1 = asn1_time_to_tm(0,param_1);
  return uVar1;
}

// ASN1_GENERALIZEDTIME_print @ 14f706810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_GENERALIZEDTIME_print(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) != 0x18) {
    return 0;
  }
  uVar1 = ASN1_TIME_print();
  return uVar1;
}

// ASN1_GENERALIZEDTIME_set @ 14f706840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_GENERALIZEDTIME_set(undefined8 param_1,undefined8 param_2)

{
  ASN1_GENERALIZEDTIME_adj(param_1,param_2,0,0);
  return;
}

// ASN1_GENERALIZEDTIME_set_string @ 14f706870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_GENERALIZEDTIME_set_string(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f70687c;
  local_24 = 0x18;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  local_28 = (undefined4)lVar2;
  local_18 = 0;
  local_20 = param_2;
  iVar1 = asn1_time_to_tm(0,&local_28);
  if (iVar1 != 0) {
    if ((param_1 != 0) && (iVar1 = ASN1_STRING_copy(param_1,&local_28), iVar1 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

// asn1_generalizedtime_to_tm @ 14f7068f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 asn1_generalizedtime_to_tm(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) != 0x18) {
    return 0;
  }
  uVar1 = asn1_time_to_tm();
  return uVar1;
}

