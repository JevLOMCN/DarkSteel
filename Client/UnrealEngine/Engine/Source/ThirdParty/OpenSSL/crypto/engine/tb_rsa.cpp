// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// ENGINE_get_RSA @ 14f725c60

undefined8 ENGINE_get_RSA(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}

// ENGINE_get_default_RSA @ 14f725c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_default_RSA(void)

{
  engine_table_select(&DAT_1553e2f08,1);
  return;
}

// ENGINE_register_RSA @ 14f725ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_RSA(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = engine_table_register
                      (&DAT_1553e2f08,FUN_14f725e20,param_1,&DAT_1534b7170,1,0,0x14f725caa);
    return uVar1;
  }
  return 1;
}

// ENGINE_register_all_RSA @ 14f725d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_register_all_RSA(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0x14f725d0c;
  for (lVar1 = ENGINE_get_first(); lVar1 != 0; lVar1 = ENGINE_get_next(lVar1)) {
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      uVar2 = uVar2 & 0xffffffff00000000;
      engine_table_register(&DAT_1553e2f08,FUN_14f725e20,lVar1,&DAT_1534b7170,1,uVar2);
    }
  }
  return;
}

// ENGINE_set_RSA @ 14f725d80

undefined8 ENGINE_set_RSA(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}

// ENGINE_set_default_RSA @ 14f725d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_RSA(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = engine_table_register
                      (&DAT_1553e2f08,FUN_14f725e20,param_1,&DAT_1534b7170,1,1,0x14f725d9a);
    return uVar1;
  }
  return 1;
}

// ENGINE_unregister_RSA @ 14f725df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_unregister_RSA(undefined8 param_1)

{
  engine_table_unregister(&DAT_1553e2f08,param_1);
  return;
}

// FUN_14f725e20 @ 14f725e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f725e20(void)

{
  engine_table_cleanup(&DAT_1553e2f08);
  return;
}

