// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// ENGINE_get_RAND @ 14f7237d0

undefined8 ENGINE_get_RAND(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}

// ENGINE_get_default_RAND @ 14f7237e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_default_RAND(void)

{
  engine_table_select(&DAT_1553e2f00,1);
  return;
}

// ENGINE_register_RAND @ 14f723810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_RAND(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = engine_table_register
                      (&DAT_1553e2f00,FUN_14f723990,param_1,&DAT_1534b7124,1,0,0x14f72381a);
    return uVar1;
  }
  return 1;
}

// ENGINE_register_all_RAND @ 14f723870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_register_all_RAND(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0x14f72387c;
  for (lVar1 = ENGINE_get_first(); lVar1 != 0; lVar1 = ENGINE_get_next(lVar1)) {
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      uVar2 = uVar2 & 0xffffffff00000000;
      engine_table_register(&DAT_1553e2f00,FUN_14f723990,lVar1,&DAT_1534b7124,1,uVar2);
    }
  }
  return;
}

// ENGINE_set_RAND @ 14f7238f0

undefined8 ENGINE_set_RAND(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}

// ENGINE_set_default_RAND @ 14f723900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_RAND(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = engine_table_register
                      (&DAT_1553e2f00,FUN_14f723990,param_1,&DAT_1534b7124,1,1,0x14f72390a);
    return uVar1;
  }
  return 1;
}

// ENGINE_unregister_RAND @ 14f723960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_unregister_RAND(undefined8 param_1)

{
  engine_table_unregister(&DAT_1553e2f00,param_1);
  return;
}

// FUN_14f723990 @ 14f723990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f723990(void)

{
  engine_table_cleanup(&DAT_1553e2f00);
  return;
}

