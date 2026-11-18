// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// FUN_14f774610 @ 14f774610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f774610(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  X509V3_add_value_int("Require Explicit Policy",*param_2,local_res18);
  X509V3_add_value_int("Inhibit Policy Mapping",param_2[1],local_res18);
  return local_res18[0];
}

// FUN_14f774660 @ 14f774660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f774660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *_Str1;
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  
  plVar2 = (longlong *)ASN1_item_new(&DAT_1534d93f0);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x22,0x92,0x41,"crypto\\x509v3\\v3_pcons.c",0x40);
    return (longlong *)0x0;
  }
  iVar5 = 0;
  iVar1 = OPENSSL_sk_num(param_3);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_3,iVar5);
      _Str1 = (char *)puVar3[1];
      iVar1 = strcmp(_Str1,"requireExplicitPolicy");
      plVar4 = plVar2;
      if (iVar1 != 0) {
        iVar1 = strcmp(_Str1,"inhibitPolicyMapping");
        if (iVar1 != 0) {
          ERR_put_error(0x22,0x92,0x6a,"crypto\\x509v3\\v3_pcons.c",0x4c);
          ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
          goto LAB_14f774765;
        }
        plVar4 = plVar2 + 1;
      }
      iVar1 = X509V3_get_value_int(puVar3,plVar4);
      if (iVar1 == 0) goto LAB_14f774765;
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(param_3);
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    } while (iVar5 < iVar1);
  }
  if ((plVar2[1] == 0) && (*plVar2 == 0)) {
    ERR_put_error(0x22,0x92,0x97,"crypto\\x509v3\\v3_pcons.c",CONCAT44(uVar6,0x53));
LAB_14f774765:
    ASN1_item_free(plVar2,&DAT_1534d93f0);
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}

// POLICY_CONSTRAINTS_free @ 14f774810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void POLICY_CONSTRAINTS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534d93f0);
  return;
}

// POLICY_CONSTRAINTS_new @ 14f774840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void POLICY_CONSTRAINTS_new(void)

{
  ASN1_item_new(&DAT_1534d93f0);
  return;
}

// FUN_14f774870 @ 14f774870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774870(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f774890 @ 14f774890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774890(void)

{
  OPENSSL_sk_value();
  return;
}

