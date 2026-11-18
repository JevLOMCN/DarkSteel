// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// ENGINE_get_pkey_meth @ 14f7232b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_get_pkey_meth(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  ERR_put_error(0x26,0xc0,0x65,"crypto\\engine\\tb_pkmeth.c",0x4c);
  return 0;
}

// ENGINE_get_pkey_meth_engine @ 14f723310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_pkey_meth_engine(undefined4 param_1)

{
  engine_table_select(&DAT_1553e2ef8,param_1);
  return;
}

// ENGINE_register_all_pkey_meths @ 14f723350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_register_all_pkey_meths(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8;
  ulonglong uVar3;
  
  uVar3 = 0x14f72335c;
  for (lVar2 = ENGINE_get_first(); lVar2 != 0; lVar2 = ENGINE_get_next(lVar2)) {
    if ((*(code **)(lVar2 + 0x48) != (code *)0x0) &&
       (iVar1 = (**(code **)(lVar2 + 0x48))(lVar2,0,&local_res8,0), 0 < iVar1)) {
      uVar3 = uVar3 & 0xffffffff00000000;
      engine_table_register(&DAT_1553e2ef8,FUN_14f723590,lVar2,local_res8,iVar1,uVar3);
    }
  }
  return;
}

// ENGINE_register_pkey_meths @ 14f7233e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_pkey_meths(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x14f7233ec;
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_1553e2ef8,FUN_14f723590,param_1,local_res8[0],iVar1,
                         uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}

// ENGINE_set_default_pkey_meths @ 14f723450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_pkey_meths(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_1553e2ef8,FUN_14f723590,param_1,local_res8[0],iVar1,CONCAT44(uVar3,1))
      ;
      return uVar2;
    }
  }
  return 1;
}

// ENGINE_unregister_pkey_meths @ 14f7234d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_unregister_pkey_meths(undefined8 param_1)

{
  engine_table_unregister(&DAT_1553e2ef8,param_1);
  return;
}

// engine_pkey_meths_free @ 14f723500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_pkey_meths_free(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,&local_res8,0);
    lVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = (**(code **)(param_1 + 0x48))
                          (param_1,&local_res10,0,*(undefined4 *)(local_res8 + lVar3 * 4));
        if (iVar2 != 0) {
          EVP_PKEY_meth_free(local_res10);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  return;
}

// FUN_14f723590 @ 14f723590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f723590(void)

{
  engine_table_cleanup(&DAT_1553e2ef8);
  return;
}

