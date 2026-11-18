// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// ECDSA_do_sign @ 14f7a4580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_do_sign(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_3 + 0x60) != (code *)0x0) {
    uVar1 = (**(code **)(*param_3 + 0x60))(param_1,param_2,0,0,param_3);
    return uVar1;
  }
  ERR_put_error(0x10,0xfb,0x98,"crypto\\ec\\ecdsa_sign.c",0x19);
  return 0;
}

// ECDSA_do_sign_ex @ 14f7a45e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_do_sign_ex(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000028;
  
  if (*(code **)(*in_stack_00000028 + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f7a4602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_stack_00000028 + 0x60))();
    return uVar1;
  }
  ERR_put_error(0x10,0xfb,0x98,"crypto\\ec\\ecdsa_sign.c",0x19);
  return 0;
}

// ECDSA_sign @ 14f7a4640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_sign(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000030;
  
  if (*(code **)(*in_stack_00000030 + 0x50) != (code *)0x0) {
    uVar1 = (**(code **)(*in_stack_00000030 + 0x50))();
    return uVar1;
  }
  ERR_put_error(0x10,0xfe,0x98,"crypto\\ec\\ecdsa_sign.c",0x29);
  return 0;
}

// ECDSA_sign_ex @ 14f7a46c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_sign_ex(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000040;
  
  if (*(code **)(*in_stack_00000040 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f7a46e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_stack_00000040 + 0x50))();
    return uVar1;
  }
  ERR_put_error(0x10,0xfe,0x98,"crypto\\ec\\ecdsa_sign.c",0x29);
  return 0;
}

// ECDSA_sign_setup @ 14f7a4720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_sign_setup(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f7a473d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x58))();
    return uVar1;
  }
  ERR_put_error(0x10,0xf8,0x98,"crypto\\ec\\ecdsa_sign.c",0x32);
  return 0;
}

