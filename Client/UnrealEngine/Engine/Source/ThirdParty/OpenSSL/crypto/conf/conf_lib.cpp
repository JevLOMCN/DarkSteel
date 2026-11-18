// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 26

// CONF_dump_bio @ 14f71ec80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CONF_dump_bio(undefined8 param_1,undefined8 param_2)

{
  longlong local_28 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71ec90;
  if (DAT_1553e2ed8 == 0) {
    DAT_1553e2ed8 = NCONF_default();
  }
  (**(code **)(DAT_1553e2ed8 + 0x10))(local_28);
  local_18 = param_1;
  (**(code **)(local_28[0] + 0x30))(local_28,param_2);
  return;
}

// CONF_dump_fp @ 14f71ece0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 CONF_dump_fp(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_28 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71ecf0;
  lVar2 = BIO_new_fp(param_2,0);
  if (lVar2 == 0) {
    ERR_put_error(0xe,0x68,7,"crypto\\conf\\conf_lib.c",0x99);
    return 0;
  }
  if (DAT_1553e2ed8 == 0) {
    DAT_1553e2ed8 = NCONF_default();
  }
  (**(code **)(DAT_1553e2ed8 + 0x10))(local_28);
  local_18 = param_1;
  uVar1 = (**(code **)(local_28[0] + 0x30))(local_28,lVar2);
  BIO_free(lVar2);
  return uVar1;
}

// CONF_free @ 14f71ed90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CONF_free(undefined8 param_1)

{
  longlong local_28 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71ed9c;
  if (DAT_1553e2ed8 == 0) {
    DAT_1553e2ed8 = NCONF_default();
  }
  (**(code **)(DAT_1553e2ed8 + 0x10))(local_28);
  local_18 = param_1;
  (**(code **)(local_28[0] + 0x20))(local_28);
  return;
}

// CONF_get_number @ 14f71ede0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 CONF_get_number(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_res8 [2];
  undefined1 local_28 [16];
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71edfa;
  local_res8[0] = 0;
  ERR_set_mark();
  if (param_1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    if (DAT_1553e2ed8 == 0) {
      DAT_1553e2ed8 = NCONF_default();
    }
    (**(code **)(DAT_1553e2ed8 + 0x10))(local_28);
    puVar2 = local_28;
    local_18 = param_1;
  }
  iVar1 = NCONF_get_number_e(puVar2,param_2,param_3,local_res8);
  ERR_pop_to_mark();
  if (iVar1 == 0) {
    local_res8[0] = 0;
  }
  return local_res8[0];
}

// CONF_get_section @ 14f71ee80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CONF_get_section(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71ee90;
  if (param_1 != 0) {
    if (DAT_1553e2ed8 == 0) {
      DAT_1553e2ed8 = NCONF_default();
    }
    (**(code **)(DAT_1553e2ed8 + 0x10))(local_28);
    local_18 = param_1;
    if (param_2 != 0) {
      uVar1 = _CONF_get_section_values(local_28,param_2);
      return uVar1;
    }
    ERR_put_error(0xe,0x6c,0x6b,"crypto\\conf\\conf_lib.c",0xfa);
  }
  return 0;
}

// CONF_get_string @ 14f71ef20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CONF_get_string(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 local_28 [16];
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71ef35;
  if (param_1 == 0) {
    lVar1 = _CONF_get_string();
    if (lVar1 == 0) {
      ERR_put_error(0xe,0x6d,0x6a,"crypto\\conf\\conf_lib.c",0x10e);
      return 0;
    }
  }
  else {
    if (DAT_1553e2ed8 == 0) {
      DAT_1553e2ed8 = NCONF_default();
    }
    (**(code **)(DAT_1553e2ed8 + 0x10))(local_28);
    local_18 = param_1;
    lVar1 = NCONF_get_string(local_28,param_2,param_3);
  }
  return lVar1;
}

// CONF_load @ 14f71efd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CONF_load(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f71efe5;
  lVar1 = BIO_new_file(param_2,"rb");
  if (lVar1 == 0) {
    ERR_put_error(0xe,100,2,"crypto\\conf\\conf_lib.c",0x39,uVar2);
    return 0;
  }
  uVar2 = CONF_load_bio(param_1,lVar1,param_3);
  BIO_free(lVar1);
  return uVar2;
}

// CONF_load_bio @ 14f71f070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CONF_load_bio(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_28 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71f085;
  if (DAT_1553e2ed8 == 0) {
    DAT_1553e2ed8 = NCONF_default();
  }
  (**(code **)(DAT_1553e2ed8 + 0x10))(local_28);
  local_18 = param_1;
  iVar1 = (**(code **)(local_28[0] + 0x28))(local_28,param_2,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_18;
  }
  return uVar2;
}

// CONF_load_fp @ 14f71f0f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CONF_load_fp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f71f105;
  lVar1 = BIO_new_fp(param_2,0);
  if (lVar1 == 0) {
    ERR_put_error(0xe,0x67,7,"crypto\\conf\\conf_lib.c",0x4a,uVar2);
    return 0;
  }
  uVar2 = CONF_load_bio(param_1,lVar1,param_3);
  BIO_free(lVar1);
  return uVar2;
}

// CONF_set_nconf @ 14f71f1b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CONF_set_nconf(longlong param_1,undefined8 param_2)

{
  if (DAT_1553e2ed8 == 0) {
    DAT_1553e2ed8 = NCONF_default();
  }
  (**(code **)(DAT_1553e2ed8 + 0x10))(param_1);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

// NCONF_dump_bio @ 14f71f200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 NCONF_dump_bio(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0xe,0x69,0x69,"crypto\\conf\\conf_lib.c",0x158);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f71f23f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}

// NCONF_dump_fp @ 14f71f250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 NCONF_dump_fp(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f71f260;
  lVar2 = BIO_new_fp(param_2,0);
  if (lVar2 == 0) {
    ERR_put_error(0xe,0x6a,7,"crypto\\conf\\conf_lib.c",0x14c,uVar3);
    return 0;
  }
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0xe,0x69,0x69,"crypto\\conf\\conf_lib.c",0x158,uVar3);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1,lVar2);
  }
  BIO_free(lVar2);
  return uVar1;
}

// NCONF_free @ 14f71f300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NCONF_free(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return;
}

// NCONF_free_data @ 14f71f330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NCONF_free_data(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x20))();
  }
  return;
}

// NCONF_get_number_e @ 14f71f360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 NCONF_get_number_e(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f71f374;
  pcVar6 = FUN_14f71f8c0;
  if (param_4 == (int *)0x0) {
    ERR_put_error(0xe,0x70,0x43,"crypto\\conf\\conf_lib.c",0x129,0x14f71f374);
    return 0;
  }
  puVar4 = (undefined1 *)NCONF_get_string();
  uVar5 = 0;
  if (puVar4 != (undefined1 *)0x0) {
    pcVar8 = (code *)&LAB_14f71f8f0;
    if (param_1 != (longlong *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x38);
      if (pcVar2 != (code *)0x0) {
        pcVar6 = pcVar2;
      }
      pcVar2 = *(code **)(*param_1 + 0x40);
      if (pcVar2 != (code *)0x0) {
        pcVar8 = pcVar2;
      }
    }
    iVar7 = 0;
    iVar3 = (*pcVar6)(param_1,*puVar4);
    while (iVar3 != 0) {
      iVar3 = (*pcVar8)(param_1,*puVar4);
      if ((0x7fffffff - iVar3) / 10 < iVar7) {
        ERR_put_error(0xe,0x70,0x79,"crypto\\conf\\conf_lib.c",0x13c,uVar9);
        return 0;
      }
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
      iVar7 = iVar3 + iVar7 * 10;
      iVar3 = (*pcVar6)(param_1,*puVar1);
    }
    *param_4 = iVar7;
    uVar5 = 1;
  }
  return uVar5;
}

// NCONF_get_section @ 14f71f490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 NCONF_get_section(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    ERR_put_error(0xe,0x6c,0x69,"crypto\\conf\\conf_lib.c",0xf5);
    return 0;
  }
  if (param_2 == 0) {
    ERR_put_error(0xe,0x6c,0x6b,"crypto\\conf\\conf_lib.c",0xfa);
    return 0;
  }
  uVar1 = _CONF_get_section_values();
  return uVar1;
}

// NCONF_get_string @ 14f71f510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong NCONF_get_string(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = 0x14f71f525;
  lVar1 = _CONF_get_string();
  if (lVar1 == 0) {
    if (param_1 == 0) {
      ERR_put_error(0xe,0x6d,0x6a,"crypto\\conf\\conf_lib.c",CONCAT44(uVar2,0x10e),uVar3);
      return 0;
    }
    ERR_put_error(0xe,0x6d,0x6c,"crypto\\conf\\conf_lib.c",CONCAT44(uVar2,0x111),uVar3);
    ERR_add_error_data(4,"group=",param_2," name=",param_3);
    lVar1 = 0;
  }
  return lVar1;
}

// NCONF_load @ 14f71f5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 NCONF_load(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0xe,0x71,0x69,"crypto\\conf\\conf_lib.c",0xd2);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f71f5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}

// NCONF_load_bio @ 14f71f610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 NCONF_load_bio(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0xe,0x6e,0x69,"crypto\\conf\\conf_lib.c",0xeb);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f71f64e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}

// NCONF_load_fp @ 14f71f660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 NCONF_load_fp(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f71f675;
  lVar2 = BIO_new_fp(param_2,0);
  if (lVar2 == 0) {
    ERR_put_error(0xe,0x72,7,"crypto\\conf\\conf_lib.c",0xdf,uVar3);
    return 0;
  }
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0xe,0x6e,0x69,"crypto\\conf\\conf_lib.c",0xeb,uVar3);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,lVar2,param_3);
  }
  BIO_free(lVar2);
  return uVar1;
}

// NCONF_new @ 14f71f720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong NCONF_new(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    param_1 = NCONF_default();
  }
  lVar1 = (**(code **)(param_1 + 8))(param_1);
  if (lVar1 == 0) {
    ERR_put_error(0xe,0x6f,0x41,"crypto\\conf\\conf_lib.c",0xba);
    lVar1 = 0;
  }
  return lVar1;
}

// OPENSSL_INIT_free @ 14f71f770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_INIT_free(undefined8 *param_1)

{
  free((void *)*param_1);
  free((void *)param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00014f71f79d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}

// OPENSSL_INIT_new @ 14f71f7b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_INIT_new(void)

{
  undefined8 *puVar1;
  
  puVar1 = malloc(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 2) = 0x32;
  return;
}

// OPENSSL_INIT_set_config_appname @ 14f71f7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_INIT_set_config_appname(longlong param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar1 = _strdup(param_2);
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
  }
  free(*(void **)(param_1 + 8));
  *(char **)(param_1 + 8) = pcVar1;
  return 1;
}

// OPENSSL_INIT_set_config_filename @ 14f71f860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_INIT_set_config_filename(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar1 = _strdup(param_2);
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
  }
  free((void *)*param_1);
  *param_1 = pcVar1;
  return 1;
}

// FUN_14f71f8c0 @ 14f71f8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71f8c0(undefined8 param_1,char param_2)

{
  ossl_ctype_check((int)param_2,4);
  return;
}

