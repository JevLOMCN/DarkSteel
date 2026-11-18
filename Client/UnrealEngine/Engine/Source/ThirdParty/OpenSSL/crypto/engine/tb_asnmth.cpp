// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// ENGINE_get_pkey_asn1_meth @ 14f750e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_get_pkey_asn1_meth(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  ERR_put_error(0x26,0xc1,0x65,"crypto\\engine\\tb_asnmth.c",0x59);
  return 0;
}

// ENGINE_get_pkey_asn1_meth_engine @ 14f750e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_pkey_asn1_meth_engine(undefined4 param_1)

{
  engine_table_select(&DAT_1553e2fc0,param_1);
  return;
}

// ENGINE_get_pkey_asn1_meth_str @ 14f750ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_get_pkey_asn1_meth_str(longlong param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  longlong local_res8;
  longlong local_res20;
  
  if (*(code **)(param_1 + 0x50) == (code *)0x0) {
    return 0;
  }
  if (param_3 == 0xffffffff) {
    cVar1 = *param_2;
    pcVar5 = param_2;
    for (param_3 = 0; (cVar1 != '\0' && (param_3 < 0x80000000)); param_3 = param_3 + 1) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    param_3 = param_3 & 0x7fffffff;
  }
  iVar2 = (**(code **)(param_1 + 0x50))(param_1,0,&local_res20,0);
  lVar7 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(param_1 + 0x50))(param_1,&local_res8,0,*(undefined4 *)(local_res20 + lVar7 * 4));
      if (local_res8 != 0) {
        pcVar5 = *(char **)(local_res8 + 0x10);
        cVar1 = *pcVar5;
        pcVar6 = pcVar5;
        for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
        }
        if (((uVar3 & 0x7fffffff) == param_3) &&
           (iVar4 = _strnicmp(pcVar5,param_2,(longlong)(int)param_3), iVar4 == 0)) {
          return local_res8;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar2);
  }
  return 0;
}

// ENGINE_get_pkey_asn1_meths @ 14f750fb0

undefined8 ENGINE_get_pkey_asn1_meths(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}

// ENGINE_pkey_asn1_find_str @ 14f750fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_pkey_asn1_find_str(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  _local_10 = CONCAT44(1,param_3);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = param_2;
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = do_engine_lock_init_ossl_ret_;
  }
  if (iVar2 == 0) {
    ERR_put_error(0x26,0xc5,0x41,"crypto\\engine\\tb_asnmth.c",0xc4);
    return 0;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  engine_table_doall(DAT_1553e2fc0,FUN_14f751330,&local_28);
  if (local_28 != 0) {
    *(int *)(local_28 + 0x9c) = *(int *)(local_28 + 0x9c) + 1;
  }
  *param_1 = local_28;
  CRYPTO_THREAD_unlock(global_engine_lock);
  return uStack_20;
}

// ENGINE_register_all_pkey_asn1_meths @ 14f751090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_register_all_pkey_asn1_meths(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8;
  ulonglong uVar3;
  
  uVar3 = 0x14f75109c;
  for (lVar2 = ENGINE_get_first(); lVar2 != 0; lVar2 = ENGINE_get_next(lVar2)) {
    if ((*(code **)(lVar2 + 0x50) != (code *)0x0) &&
       (iVar1 = (**(code **)(lVar2 + 0x50))(lVar2,0,&local_res8,0), 0 < iVar1)) {
      uVar3 = uVar3 & 0xffffffff00000000;
      engine_table_register(&DAT_1553e2fc0,FUN_14f751300,lVar2,local_res8,iVar1,uVar3);
    }
  }
  return;
}

// ENGINE_register_pkey_asn1_meths @ 14f751120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_pkey_asn1_meths(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x14f75112c;
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_1553e2fc0,FUN_14f751300,param_1,local_res8[0],iVar1,
                         uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}

// ENGINE_set_default_pkey_asn1_meths @ 14f751190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_pkey_asn1_meths(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = engine_table_register
                        (&DAT_1553e2fc0,FUN_14f751300,param_1,local_res8[0],iVar1,CONCAT44(uVar3,1))
      ;
      return uVar2;
    }
  }
  return 1;
}

// ENGINE_unregister_pkey_asn1_meths @ 14f751210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_unregister_pkey_asn1_meths(undefined8 param_1)

{
  engine_table_unregister(&DAT_1553e2fc0,param_1);
  return;
}

// engine_pkey_asn1_meths_free @ 14f751270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_pkey_asn1_meths_free(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,&local_res8,0);
    lVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = (**(code **)(param_1 + 0x50))
                          (param_1,&local_res10,0,*(undefined4 *)(local_res8 + lVar3 * 4));
        if (iVar2 != 0) {
          EVP_PKEY_asn1_free(local_res10);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  return;
}

// FUN_14f751300 @ 14f751300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f751300(void)

{
  engine_table_cleanup(&DAT_1553e2fc0);
  return;
}

// FUN_14f751330 @ 14f751330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f751330(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  longlong local_res20;
  
  if (param_4[1] == 0) {
    iVar5 = 0;
    iVar2 = OPENSSL_sk_num(param_2);
    if (0 < iVar2) {
      do {
        lVar3 = OPENSSL_sk_value(param_2,iVar5);
        (**(code **)(lVar3 + 0x50))(lVar3,&local_res20,0,param_1);
        if (local_res20 != 0) {
          _Str1 = *(char **)(local_res20 + 0x10);
          cVar1 = *_Str1;
          pcVar6 = _Str1;
          for (uVar4 = 0; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
          }
          if (((uVar4 & 0x7fffffff) == *(uint *)(param_4 + 3)) &&
             (iVar2 = _strnicmp(_Str1,(char *)param_4[2],(longlong)(int)*(uint *)(param_4 + 3)),
             iVar2 == 0)) {
            param_4[1] = local_res20;
            *param_4 = lVar3;
            return;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(param_2);
      } while (iVar5 < iVar2);
    }
  }
  return;
}

// FUN_14f751410 @ 14f751410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f751410(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f751430 @ 14f751430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f751430(void)

{
  OPENSSL_sk_value();
  return;
}

