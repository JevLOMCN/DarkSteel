// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// ENGINE_get_digest @ 14f722720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_get_digest(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  ERR_put_error(0x26,0xba,0x93,"crypto\\engine\\tb_digest.c",0x4a);
  return 0;
}

// ENGINE_get_digest_engine @ 14f722780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_digest_engine(undefined4 param_1)

{
  engine_table_select(&DAT_1553e2ef0,param_1);
  return;
}

// ENGINE_register_all_digests @ 14f7227c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_register_all_digests(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8;
  ulonglong uVar3;
  
  uVar3 = 0x14f7227cc;
  for (lVar2 = ENGINE_get_first(); lVar2 != 0; lVar2 = ENGINE_get_next(lVar2)) {
    if ((*(code **)(lVar2 + 0x40) != (code *)0x0) &&
       (iVar1 = (**(code **)(lVar2 + 0x40))(lVar2,0,&local_res8,0), 0 < iVar1)) {
      uVar3 = uVar3 & 0xffffffff00000000;
      engine_table_register(&DAT_1553e2ef0,FUN_14f722970,lVar2,local_res8,iVar1,uVar3);
    }
  }
  return;
}

// ENGINE_register_digests @ 14f722850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_digests(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x14f72285c;
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_1553e2ef0,FUN_14f722970,param_1,local_res8[0],iVar1,
                         uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}

// ENGINE_set_default_digests @ 14f7228c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_digests(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_1553e2ef0,FUN_14f722970,param_1,local_res8[0],iVar1,CONCAT44(uVar3,1))
      ;
      return uVar2;
    }
  }
  return 1;
}

// ENGINE_set_digests @ 14f722930

undefined8 ENGINE_set_digests(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}

// ENGINE_unregister_digests @ 14f722940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_unregister_digests(undefined8 param_1)

{
  engine_table_unregister(&DAT_1553e2ef0,param_1);
  return;
}

// FUN_14f722970 @ 14f722970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f722970(void)

{
  engine_table_cleanup(&DAT_1553e2ef0);
  return;
}

