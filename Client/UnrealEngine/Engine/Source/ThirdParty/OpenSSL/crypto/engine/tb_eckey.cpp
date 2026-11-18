// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// ENGINE_get_EC @ 14f763340

undefined8 ENGINE_get_EC(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}

// ENGINE_get_default_EC @ 14f763350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_default_EC(void)

{
  engine_table_select(&DAT_1553e2ff8,1);
  return;
}

// ENGINE_register_EC @ 14f763380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_EC(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = engine_table_register
                      (&DAT_1553e2ff8,FUN_14f763500,param_1,&DAT_1534c3440,1,0,0x14f76338a);
    return uVar1;
  }
  return 1;
}

// ENGINE_register_all_EC @ 14f7633e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_register_all_EC(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0x14f7633ec;
  for (lVar1 = ENGINE_get_first(); lVar1 != 0; lVar1 = ENGINE_get_next(lVar1)) {
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      uVar2 = uVar2 & 0xffffffff00000000;
      engine_table_register(&DAT_1553e2ff8,FUN_14f763500,lVar1,&DAT_1534c3440,1,uVar2);
    }
  }
  return;
}

// ENGINE_set_EC @ 14f763460

undefined8 ENGINE_set_EC(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}

// ENGINE_set_default_EC @ 14f763470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_EC(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = engine_table_register
                      (&DAT_1553e2ff8,FUN_14f763500,param_1,&DAT_1534c3440,1,1,0x14f76347a);
    return uVar1;
  }
  return 1;
}

// ENGINE_unregister_EC @ 14f7634d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_unregister_EC(undefined8 param_1)

{
  engine_table_unregister(&DAT_1553e2ff8,param_1);
  return;
}

// FUN_14f763500 @ 14f763500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f763500(void)

{
  engine_table_cleanup(&DAT_1553e2ff8);
  return;
}

