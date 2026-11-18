// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// ENGINE_get_DSA @ 14f763150

undefined8 ENGINE_get_DSA(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

// ENGINE_get_default_DSA @ 14f763160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_default_DSA(void)

{
  engine_table_select(&DAT_1553e2ff0,1);
  return;
}

// ENGINE_register_DSA @ 14f763190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_DSA(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = engine_table_register
                      (&DAT_1553e2ff0,FUN_14f763310,param_1,&DAT_1534c343c,1,0,0x14f76319a);
    return uVar1;
  }
  return 1;
}

// ENGINE_register_all_DSA @ 14f7631f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_register_all_DSA(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0x14f7631fc;
  for (lVar1 = ENGINE_get_first(); lVar1 != 0; lVar1 = ENGINE_get_next(lVar1)) {
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      uVar2 = uVar2 & 0xffffffff00000000;
      engine_table_register(&DAT_1553e2ff0,FUN_14f763310,lVar1,&DAT_1534c343c,1,uVar2);
    }
  }
  return;
}

// ENGINE_set_DSA @ 14f763270

undefined8 ENGINE_set_DSA(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}

// ENGINE_set_default_DSA @ 14f763280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_DSA(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = engine_table_register
                      (&DAT_1553e2ff0,FUN_14f763310,param_1,&DAT_1534c343c,1,1,0x14f76328a);
    return uVar1;
  }
  return 1;
}

// ENGINE_unregister_DSA @ 14f7632e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_unregister_DSA(undefined8 param_1)

{
  engine_table_unregister(&DAT_1553e2ff0,param_1);
  return;
}

// FUN_14f763310 @ 14f763310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f763310(void)

{
  engine_table_cleanup(&DAT_1553e2ff0);
  return;
}

