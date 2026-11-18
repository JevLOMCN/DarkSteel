// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// ECDSA_do_verify @ 14f7a4770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_do_verify(void)

{
  undefined8 uVar1;
  longlong *in_R9;
  
  if (*(code **)(*in_R9 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f7a478d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_R9 + 0x70))();
    return uVar1;
  }
  ERR_put_error(0x10,0xfc,0x98,"crypto\\ec\\ecdsa_vrf.c",0x19);
  return 0xffffffff;
}

// ECDSA_verify @ 14f7a47c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_verify(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000030;
  
  if (*(code **)(*in_stack_00000030 + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f7a47e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_stack_00000030 + 0x68))();
    return uVar1;
  }
  ERR_put_error(0x10,0xfd,0x98,"crypto\\ec\\ecdsa_vrf.c",0x29);
  return 0xffffffff;
}

