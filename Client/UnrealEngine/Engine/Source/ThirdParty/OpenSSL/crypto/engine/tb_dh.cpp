// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// ENGINE_get_DH @ 14f75e4e0

undefined8 ENGINE_get_DH(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}

// ENGINE_get_default_DH @ 14f75e4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_default_DH(void)

{
  engine_table_select(&DAT_1553e2fc8,1);
  return;
}

// ENGINE_register_DH @ 14f75e520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_DH(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = engine_table_register
                      (&DAT_1553e2fc8,FUN_14f75e6a0,param_1,&DAT_1534c2a2c,1,0,0x14f75e52a);
    return uVar1;
  }
  return 1;
}

// ENGINE_register_all_DH @ 14f75e580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_register_all_DH(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0x14f75e58c;
  for (lVar1 = ENGINE_get_first(); lVar1 != 0; lVar1 = ENGINE_get_next(lVar1)) {
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      uVar2 = uVar2 & 0xffffffff00000000;
      engine_table_register(&DAT_1553e2fc8,FUN_14f75e6a0,lVar1,&DAT_1534c2a2c,1,uVar2);
    }
  }
  return;
}

// ENGINE_set_DH @ 14f75e600

undefined8 ENGINE_set_DH(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}

// ENGINE_set_default_DH @ 14f75e610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_DH(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = engine_table_register
                      (&DAT_1553e2fc8,FUN_14f75e6a0,param_1,&DAT_1534c2a2c,1,1,0x14f75e61a);
    return uVar1;
  }
  return 1;
}

// ENGINE_unregister_DH @ 14f75e670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_unregister_DH(undefined8 param_1)

{
  engine_table_unregister(&DAT_1553e2fc8,param_1);
  return;
}

// FUN_14f75e6a0 @ 14f75e6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f75e6a0(void)

{
  engine_table_cleanup(&DAT_1553e2fc8);
  return;
}

