// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// ASN1_TYPE_cmp @ 14f6f0af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_TYPE_cmp(int *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (iVar1 = *param_1, iVar1 != *param_2))
  {
    return 0xffffffff;
  }
  if (iVar1 == 1) {
    return (ulonglong)(uint)(param_1[2] - param_2[2]);
  }
  if (iVar1 != 5) {
    if (iVar1 != 6) {
      uVar2 = ASN1_STRING_cmp();
      return uVar2;
    }
    uVar2 = OBJ_cmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    return uVar2;
  }
  return 0;
}

// ASN1_TYPE_get @ 14f6f0b60

int ASN1_TYPE_get(int *param_1)

{
  if (((*param_1 - 1U & 0xfffffffb) != 0) && (*(longlong *)(param_1 + 2) == 0)) {
    return 0;
  }
  return *param_1;
}

// ASN1_TYPE_pack_sequence @ 14f6f0b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * ASN1_TYPE_pack_sequence(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int *local_res20;
  
  lVar1 = ASN1_item_pack(param_2,param_1,0);
  if (lVar1 == 0) {
    return (int *)0x0;
  }
  if ((param_3 == (undefined8 *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) {
    piVar2 = (int *)ASN1_TYPE_new();
    if (piVar2 == (int *)0x0) {
      ASN1_OCTET_STRING_free(lVar1);
      return (int *)0x0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = piVar2;
    }
  }
  local_res20 = piVar2;
  if (((*piVar2 - 1U & 0xfffffffb) != 0) && (*(longlong *)(piVar2 + 2) != 0)) {
    asn1_primitive_free(&local_res20,0,0);
  }
  *local_res20 = 0x10;
  *(longlong *)(local_res20 + 2) = lVar1;
  return piVar2;
}

// ASN1_TYPE_set @ 14f6f0c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_TYPE_set(int *param_1,int param_2,longlong param_3)

{
  int *local_res8;
  
  local_res8 = param_1;
  if (((*param_1 - 1U & 0xfffffffb) != 0) && (*(longlong *)(param_1 + 2) != 0)) {
    asn1_primitive_free(&local_res8,0,0);
  }
  *local_res8 = param_2;
  if (param_2 == 1) {
    local_res8[2] = -(uint)(param_3 != 0) & 0xff;
    return;
  }
  *(longlong *)(local_res8 + 2) = param_3;
  return;
}

// ASN1_TYPE_set1 @ 14f6f0ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TYPE_set1(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  if ((param_3 != 0) && ((int)param_2 != 1)) {
    if ((int)param_2 == 6) {
      param_3 = OBJ_dup();
      if (param_3 == 0) {
        return 0;
      }
      param_2 = 6;
    }
    else {
      param_3 = ASN1_STRING_dup(param_3);
      param_2 = param_2 & 0xffffffff;
      if (param_3 == 0) {
        return 0;
      }
    }
  }
  ASN1_TYPE_set(param_1,param_2,param_3);
  return 1;
}

// ASN1_TYPE_unpack_sequence @ 14f6f0d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TYPE_unpack_sequence(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((param_2 != (int *)0x0) && (*param_2 == 0x10)) && (*(longlong *)(param_2 + 2) != 0)) {
    uVar1 = ASN1_item_unpack(*(longlong *)(param_2 + 2),param_1);
    return uVar1;
  }
  return 0;
}

