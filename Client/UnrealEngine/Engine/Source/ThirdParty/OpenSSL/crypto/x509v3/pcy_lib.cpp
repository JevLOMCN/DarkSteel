// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// X509_policy_level_get0_node @ 14f76aa70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_policy_level_get0_node(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if ((int)param_2 == 0) {
      return *(longlong *)(param_1 + 0x10);
    }
    param_2 = (ulonglong)((int)param_2 - 1);
  }
  lVar1 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),param_2);
  return lVar1;
}

// X509_policy_level_node_count @ 14f76aab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint X509_policy_level_node_count(longlong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar3 = *(longlong *)(param_1 + 0x10) != 0;
  uVar2 = (uint)bVar3;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = OPENSSL_sk_num();
    uVar2 = (uint)bVar3 + iVar1;
  }
  return uVar2;
}

// X509_policy_tree_get0_user_policies @ 14f76abb0

undefined8 X509_policy_tree_get0_user_policies(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
  return *(undefined8 *)(param_1 + 0x20);
}

// FUN_14f76abf0 @ 14f76abf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76abf0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f76ac10 @ 14f76ac10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76ac10(void)

{
  OPENSSL_sk_value();
  return;
}

