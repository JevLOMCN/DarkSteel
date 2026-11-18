// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// ENGINE_add_conf_module @ 14f7211a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_add_conf_module(void)

{
  CONF_module_add("engines",FUN_14f721630,FUN_14f7215d0);
  return;
}

// FUN_14f7211e0 @ 14f7211e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_14f7211e0(char *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *_Str;
  char *pcVar9;
  uint uVar10;
  bool bVar12;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar14;
  undefined8 uVar13;
  char *pcVar11;
  
  local_res20[0] = -1;
  pcVar9 = (char *)0x0;
  bVar1 = false;
  pcVar3 = strchr(param_1,0x2e);
  if (pcVar3 != (char *)0x0) {
    param_1 = pcVar3 + 1;
  }
  lVar4 = NCONF_get_section(param_3,param_2);
  if (lVar4 == 0) {
    ERR_put_error(0x26,0xbc,0x95,"crypto\\engine\\eng_cnf.c",0x3d);
    return (char *)0x0;
  }
  iVar2 = OPENSSL_sk_num(lVar4);
  pcVar3 = pcVar9;
  pcVar11 = pcVar9;
  if (0 < iVar2) {
    do {
      pcVar5 = (char *)OPENSSL_sk_value(lVar4,pcVar11);
      _Str = *(char **)(pcVar5 + 8);
      pcVar6 = strchr(_Str,0x2e);
      if (pcVar6 != (char *)0x0) {
        _Str = pcVar6 + 1;
      }
      pcVar6 = *(char **)(pcVar5 + 0x10);
      iVar2 = strcmp(_Str,"engine_id");
      if (iVar2 != 0) {
        iVar2 = strcmp(_Str,"soft_load");
        if (iVar2 == 0) {
          bVar1 = true;
          pcVar6 = param_1;
        }
        else {
          iVar2 = strcmp(_Str,"dynamic_path");
          if (iVar2 == 0) {
            pcVar3 = (char *)ENGINE_by_id("dynamic");
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (pcVar3 == (char *)0x0) goto LAB_14f7214b8;
            iVar2 = ENGINE_ctrl_cmd_string(pcVar3,"SO_PATH",pcVar6,0);
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (iVar2 == 0) goto LAB_14f7214b8;
            iVar2 = ENGINE_ctrl_cmd_string(pcVar3,"LIST_ADD","2",0);
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (iVar2 == 0) goto LAB_14f7214b8;
            pcVar6 = (char *)0x0;
            _Str = "LOAD";
LAB_14f72146f:
            iVar2 = ENGINE_ctrl_cmd_string(pcVar3,_Str,pcVar6,0);
          }
          else {
            pcVar7 = pcVar9;
            if (pcVar3 == (char *)0x0) {
              pcVar3 = (char *)ENGINE_by_id(param_1);
              uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
              if (pcVar3 == (char *)0x0) {
                if (bVar1) {
                  ERR_clear_error();
                  return &DAT_00000001;
                }
                goto LAB_14f7214b8;
              }
            }
            do {
              pcVar8 = pcVar7;
              bVar12 = pcVar6[(longlong)pcVar8] == pcVar8[0x1534b6fd4];
              if (!bVar12) goto LAB_14f7213b9;
              pcVar7 = pcVar8 + 1;
            } while (pcVar8 + 1 != &DAT_00000006);
            bVar12 = pcVar6[(longlong)pcVar8] == pcVar8[0x1534b6fd4];
LAB_14f7213b9:
            pcVar7 = pcVar9;
            if (bVar12) {
              pcVar6 = pcVar9;
            }
            do {
              pcVar8 = pcVar7 + 1;
              if (_Str[(longlong)pcVar7] != pcVar7[0x1534b6fdc]) {
                iVar2 = strcmp(_Str,"default_algorithms");
                if (iVar2 != 0) goto LAB_14f72146f;
                iVar2 = ENGINE_set_default_string(pcVar3,pcVar6);
                goto LAB_14f72147a;
              }
              pcVar7 = pcVar8;
            } while (pcVar8 != &DAT_00000005);
            iVar2 = NCONF_get_number_e(param_3,param_2,&s_init,local_res20);
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (iVar2 == 0) goto LAB_14f7214b8;
            if (local_res20[0] != 1) {
              pcVar6 = param_1;
              if (local_res20[0] == 0) goto LAB_14f72147e;
              uVar13 = CONCAT44(uVar14,0x7a);
              ERR_put_error(0x26,0xbc,0x97,"crypto\\engine\\eng_cnf.c",uVar13);
              uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
              goto LAB_14f7214b8;
            }
            iVar2 = FUN_14f721560(pcVar3);
          }
LAB_14f72147a:
          uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          pcVar6 = param_1;
          if (iVar2 == 0) goto LAB_14f7214b8;
        }
      }
LAB_14f72147e:
      uVar10 = (int)pcVar11 + 1;
      pcVar11 = (char *)(ulonglong)uVar10;
      iVar2 = OPENSSL_sk_num(lVar4);
      uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      param_1 = pcVar6;
    } while ((int)uVar10 < iVar2);
    if (((pcVar3 != (char *)0x0) && (local_res20[0] == -1)) &&
       (iVar2 = FUN_14f721560(pcVar3), pcVar5 = pcVar9, iVar2 == 0)) {
LAB_14f7214b8:
      ERR_put_error(0x26,0xbc,0x66,"crypto\\engine\\eng_cnf.c",CONCAT44(uVar14,0x8d));
      if (pcVar5 != (char *)0x0) {
        ERR_add_error_data(6,"section=",*(undefined8 *)pcVar5,", name=",*(undefined8 *)(pcVar5 + 8),
                           ", value=",*(undefined8 *)(pcVar5 + 0x10));
      }
      goto LAB_14f721533;
    }
  }
  pcVar9 = &DAT_00000001;
LAB_14f721533:
  ENGINE_free(pcVar3);
  return pcVar9;
}

// FUN_14f721560 @ 14f721560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f721560(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = ENGINE_init();
  if (iVar1 == 0) {
    return 0;
  }
  if (((DAT_1553e2ee8 != 0) || (DAT_1553e2ee8 = OPENSSL_sk_new_null(), DAT_1553e2ee8 != 0)) &&
     (iVar1 = OPENSSL_sk_push(DAT_1553e2ee8,param_1), iVar1 != 0)) {
    return 1;
  }
  ENGINE_finish(param_1);
  return 0;
}

// FUN_14f7215d0 @ 14f7215d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7215d0(void)

{
  longlong lVar1;
  
  lVar1 = OPENSSL_sk_pop(DAT_1553e2ee8);
  while (lVar1 != 0) {
    ENGINE_finish(lVar1);
    lVar1 = OPENSSL_sk_pop(DAT_1553e2ee8);
  }
  OPENSSL_sk_free(DAT_1553e2ee8);
  DAT_1553e2ee8 = 0;
  return;
}

// FUN_14f721630 @ 14f721630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014f7218b4) */

undefined8 FUN_14f721630(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  ulonglong uVar15;
  char *_Str;
  bool bVar16;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar17;
  int local_58;
  ulonglong uVar14;
  
  uVar3 = CONF_imodule_get_value();
  lVar4 = NCONF_get_section(param_2,uVar3);
  if (lVar4 == 0) {
    ERR_put_error(0x26,0xbb,0x94,"crypto\\engine\\eng_cnf.c",0xa5);
    return 0;
  }
  local_58 = 0;
  iVar2 = OPENSSL_sk_num(lVar4);
  if (0 < iVar2) {
    do {
      uVar14 = 0;
      lVar5 = OPENSSL_sk_value(lVar4,local_58);
      bVar1 = false;
      _Str = *(char **)(lVar5 + 8);
      uVar3 = *(undefined8 *)(lVar5 + 0x10);
      pcVar6 = strchr(_Str,0x2e);
      if (pcVar6 != (char *)0x0) {
        _Str = pcVar6 + 1;
      }
      lVar5 = NCONF_get_section(param_2,uVar3);
      if (lVar5 == 0) {
        ERR_put_error(0x26,0xbc,0x95,"crypto\\engine\\eng_cnf.c",0x3d);
        return 0;
      }
      iVar2 = OPENSSL_sk_num(lVar5);
      uVar9 = uVar14;
      uVar15 = uVar14;
      if (iVar2 < 1) {
LAB_14f7219f8:
        bVar1 = true;
      }
      else {
        do {
          puVar7 = (undefined8 *)OPENSSL_sk_value(lVar5,uVar14);
          pcVar6 = (char *)puVar7[1];
          pcVar8 = strchr(pcVar6,0x2e);
          if (pcVar8 != (char *)0x0) {
            pcVar6 = pcVar8 + 1;
          }
          pcVar8 = (char *)puVar7[2];
          iVar2 = strcmp(pcVar6,"engine_id");
          if (iVar2 != 0) {
            iVar2 = strcmp(pcVar6,"soft_load");
            if (iVar2 == 0) {
              uVar15 = 1;
              pcVar8 = _Str;
            }
            else {
              iVar2 = strcmp(pcVar6,"dynamic_path");
              if (iVar2 == 0) {
                uVar9 = ENGINE_by_id("dynamic");
                uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
                if (uVar9 == 0) goto LAB_14f72198a;
                iVar2 = ENGINE_ctrl_cmd_string(uVar9,"SO_PATH",pcVar8);
                uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
                if (iVar2 == 0) goto LAB_14f72198a;
                iVar2 = ENGINE_ctrl_cmd_string(uVar9,"LIST_ADD","2");
                uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
                if (iVar2 == 0) goto LAB_14f72198a;
                pcVar8 = (char *)0x0;
                pcVar6 = "LOAD";
LAB_14f72190f:
                iVar2 = ENGINE_ctrl_cmd_string(uVar9,pcVar6,pcVar8);
              }
              else {
                if (uVar9 == 0) {
                  uVar9 = ENGINE_by_id(_Str);
                  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
                  if (uVar9 == 0) {
                    if ((int)uVar15 == 0) goto LAB_14f72198a;
                    ERR_clear_error();
                    goto LAB_14f721a15;
                  }
                }
                uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
                pcVar11 = (char *)0x0;
                pcVar12 = pcVar11;
                do {
                  pcVar10 = pcVar12;
                  bVar16 = pcVar8[(longlong)pcVar10] == pcVar10[0x1534b6fd4];
                  if (!bVar16) goto LAB_14f72185a;
                  pcVar12 = pcVar10 + 1;
                } while (pcVar10 + 1 != &DAT_00000006);
                bVar16 = pcVar8[(longlong)pcVar10] == pcVar10[0x1534b6fd4];
LAB_14f72185a:
                if (bVar16) {
                  pcVar8 = pcVar11;
                }
                while (pcVar12 = pcVar11 + 1, pcVar6[(longlong)pcVar11] == pcVar11[0x1534b6fdc]) {
                  pcVar11 = pcVar12;
                  if (pcVar12 == &DAT_00000005) {
                    iVar2 = NCONF_get_number_e(param_2,uVar3,&s_init);
                    if (iVar2 != 0) {
                      uVar3 = CONCAT44(uVar17,0x7a);
                      ERR_put_error(0x26,0xbc,0x97,"crypto\\engine\\eng_cnf.c",uVar3);
                      uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
                    }
                    goto LAB_14f72198a;
                  }
                }
                iVar2 = strcmp(pcVar6,"default_algorithms");
                if (iVar2 != 0) goto LAB_14f72190f;
                iVar2 = ENGINE_set_default_string(uVar9,pcVar8);
              }
              uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
              pcVar8 = _Str;
              if (iVar2 == 0) goto LAB_14f72198a;
            }
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          iVar2 = OPENSSL_sk_num(lVar5);
          _Str = pcVar8;
        } while ((int)uVar13 < iVar2);
        if (uVar9 == 0) goto LAB_14f7219f8;
        iVar2 = ENGINE_init(uVar9);
        uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
        if (iVar2 != 0) {
          if (DAT_1553e2ee8 == 0) {
            DAT_1553e2ee8 = OPENSSL_sk_new_null();
            uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
            if (DAT_1553e2ee8 != 0) goto LAB_14f721970;
          }
          else {
LAB_14f721970:
            iVar2 = OPENSSL_sk_push(DAT_1553e2ee8,uVar9);
            uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
            if (iVar2 != 0) goto LAB_14f7219f8;
          }
          ENGINE_finish(uVar9);
        }
        puVar7 = (undefined8 *)0x0;
LAB_14f72198a:
        in_stack_ffffffffffffff88 = CONCAT44(uVar17,0x8d);
        ERR_put_error(0x26,0xbc,0x66,"crypto\\engine\\eng_cnf.c",in_stack_ffffffffffffff88);
        if (puVar7 != (undefined8 *)0x0) {
          in_stack_ffffffffffffff88 = puVar7[1];
          ERR_add_error_data(6,"section=",*puVar7,", name=",in_stack_ffffffffffffff88,", value=",
                             puVar7[2]);
        }
      }
      ENGINE_free(uVar9);
      if (!bVar1) {
        return 0;
      }
LAB_14f721a15:
      local_58 = local_58 + 1;
      iVar2 = OPENSSL_sk_num(lVar4);
    } while (local_58 < iVar2);
  }
  return 1;
}

// FUN_14f721aa0 @ 14f721aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f721aa0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f721ac0 @ 14f721ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f721ac0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f721ae0 @ 14f721ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f721ae0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f721b00 @ 14f721b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f721b00(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f721b20 @ 14f721b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f721b20(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f721b40 @ 14f721b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f721b40(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f721b60 @ 14f721b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_14f721b60(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strchr(param_1,0x2e);
  if (pcVar1 != (char *)0x0) {
    return pcVar1 + 1;
  }
  return param_1;
}

