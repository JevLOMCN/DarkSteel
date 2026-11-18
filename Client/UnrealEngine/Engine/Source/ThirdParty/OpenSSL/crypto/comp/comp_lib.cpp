// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// COMP_CTX_free @ 14f6c7b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void COMP_CTX_free(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
      (**(code **)(*param_1 + 0x18))();
    }
    CRYPTO_free(param_1,"crypto\\comp\\comp_lib.c",0x38);
  }
  return;
}

// COMP_CTX_get_method @ 14f6c7be0

undefined8 COMP_CTX_get_method(undefined8 *param_1)

{
  return *param_1;
}

// COMP_CTX_new @ 14f6c7c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * COMP_CTX_new(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6c7c20;
  plVar2 = (longlong *)CRYPTO_zalloc(0x20,"crypto\\comp\\comp_lib.c",0x16);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x29,0x67,0x41,"crypto\\comp\\comp_lib.c",0x17,uVar3);
    return (longlong *)0x0;
  }
  *plVar2 = param_1;
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))(plVar2);
    if (iVar1 == 0) {
      CRYPTO_free(plVar2,"crypto\\comp\\comp_lib.c",0x1c);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}

// COMP_compress_block @ 14f6c7cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 COMP_compress_block(longlong *param_1)

{
  undefined8 uVar1;
  int in_stack_00000028;
  
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))();
  if (0 < (int)uVar1) {
    *(int *)(param_1 + 1) = (int)param_1[1] + in_stack_00000028;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + (int)uVar1;
  }
  return uVar1;
}

// COMP_expand_block @ 14f6c7d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 COMP_expand_block(longlong *param_1)

{
  undefined8 uVar1;
  int in_stack_00000028;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if (0 < (int)uVar1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + in_stack_00000028;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (int)uVar1;
  }
  return uVar1;
}

// COMP_get_name @ 14f6c7d70

undefined8 COMP_get_name(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

// COMP_get_type @ 14f6c7d80

undefined4 COMP_get_type(undefined4 *param_1)

{
  return *param_1;
}

