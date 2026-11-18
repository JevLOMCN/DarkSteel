// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// SSL_CTX_config @ 14f67c680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_config(undefined8 param_1,undefined8 param_2)

{
  FUN_14f67c720(0,param_1,param_2,0);
  return;
}

// SSL_config @ 14f67c6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_config(undefined8 param_1,undefined8 param_2)

{
  FUN_14f67c720(param_1,0,param_2,0);
  return;
}

// ssl_ctx_system_config @ 14f67c6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_ctx_system_config(undefined8 param_1)

{
  FUN_14f67c720(0,param_1,0,1);
  return;
}

// FUN_14f67c720 @ 14f67c720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f67c720(longlong param_1,longlong *param_2,char *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong local_res8;
  char *local_res18;
  undefined8 uVar10;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f67c73b;
  uVar5 = 0;
  iVar3 = 0;
  iVar9 = 0;
  uVar7 = 0;
  local_res18 = param_3;
  if ((param_1 == 0) && (param_2 == (longlong *)0x0)) {
    ERR_put_error(0x14,0x187,0x43,"ssl\\ssl_mcnf.c",0x21);
    uVar7 = uVar5;
    iVar3 = iVar9;
  }
  else {
    if ((param_3 == (char *)0x0) && (local_res18 = "system_default", param_4 == 0)) {
      local_res18 = param_3;
    }
    iVar1 = conf_ssl_name_find(local_res18,&local_38);
    if (iVar1 == 0) {
      iVar3 = iVar9;
      if (param_4 == 0) {
        ERR_put_error(0x14,0x187,0x71,"ssl\\ssl_mcnf.c",0x29);
        ERR_add_error_data(2,"name=",local_res18);
      }
    }
    else {
      uVar4 = conf_ssl_get(local_38,&local_res18,&local_res8);
      uVar7 = SSL_CONF_CTX_new();
      if (uVar7 != 0) {
        uVar8 = 0x62;
        if (param_4 != 0) {
          uVar8 = 2;
        }
        if (param_1 == 0) {
          lVar6 = *param_2;
          SSL_CONF_CTX_set_ssl_ctx(uVar7,param_2);
        }
        else {
          lVar6 = *(longlong *)(param_1 + 8);
          SSL_CONF_CTX_set_ssl(uVar7,param_1);
        }
        uVar2 = uVar8 | 8;
        if (*(code **)(lVar6 + 0x28) == ssl_undefined_function) {
          uVar2 = uVar8;
        }
        uVar8 = uVar2 | 4;
        if (*(code **)(lVar6 + 0x30) == ssl_undefined_function) {
          uVar8 = uVar2;
        }
        SSL_CONF_CTX_set_flags(uVar7,uVar8);
        if (local_res8 != 0) {
          do {
            conf_ssl_get_cmd(uVar4,uVar5,&local_40,&local_48);
            iVar3 = SSL_CONF_cmd(uVar7,local_40,local_48);
            if (iVar3 < 1) {
              if (iVar3 == -2) {
                uVar10 = 0x48;
                uVar4 = 0x8b;
              }
              else {
                uVar10 = 0x4a;
                uVar4 = 0x180;
              }
              ERR_put_error(0x14,0x187,uVar4,"ssl\\ssl_mcnf.c",uVar10);
              ERR_add_error_data(6,"section=",local_res18,", cmd=",local_40,", arg=",local_48);
              goto LAB_14f67c8dc;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_res8);
        }
        iVar3 = SSL_CONF_CTX_finish(uVar7);
      }
    }
  }
LAB_14f67c8dc:
  SSL_CONF_CTX_free(uVar7);
  return 0 < iVar3;
}

