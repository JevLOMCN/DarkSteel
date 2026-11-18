// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// conf_add_ssl_module @ 14f6f4800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void conf_add_ssl_module(void)

{
  CONF_module_add("ssl_conf",FUN_14f6f4aa0,FUN_14f6f4960);
  return;
}

// conf_ssl_get @ 14f6f4840

undefined8 conf_ssl_get(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(DAT_1553e2b70 + param_1 * 0x18);
  *param_2 = *puVar1;
  *param_3 = puVar1[2];
  return puVar1[1];
}

// conf_ssl_get_cmd @ 14f6f4870

void conf_ssl_get_cmd(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_3 = *(undefined8 *)(param_1 + param_2 * 0x10);
  *param_4 = *(undefined8 *)(param_1 + 8 + param_2 * 0x10);
  return;
}

// conf_ssl_name_find @ 14f6f4890

undefined8 conf_ssl_name_find(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if ((param_1 != 0) && (uVar5 = 0, puVar6 = DAT_1553e2b70, DAT_1553e2b78 != 0)) {
    do {
      pcVar3 = (char *)*puVar6;
      lVar4 = param_1 - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar4];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        *param_2 = uVar5;
        return 1;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar5 < DAT_1553e2b78);
  }
  return 0;
}

// FUN_14f6f4920 @ 14f6f4920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f4920(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6f4940 @ 14f6f4940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f4940(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6f4960 @ 14f6f4960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f4960(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (DAT_1553e2b70 != 0) {
    uVar3 = 0;
    if (DAT_1553e2b78 != 0) {
      lVar5 = 0;
      do {
        lVar1 = DAT_1553e2b70;
        CRYPTO_free(*(undefined8 *)(lVar5 + DAT_1553e2b70),"crypto\\conf\\conf_ssl.c",0x31);
        uVar4 = 0;
        if (*(longlong *)(lVar5 + 0x10 + lVar1) != 0) {
          lVar2 = 0;
          do {
            CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar5 + 8 + lVar1) + lVar2),
                        "crypto\\conf\\conf_ssl.c",0x33);
            CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar5 + 8 + lVar1) + 8 + lVar2),
                        "crypto\\conf\\conf_ssl.c",0x34);
            uVar4 = uVar4 + 1;
            lVar2 = lVar2 + 0x10;
          } while (uVar4 < *(ulonglong *)(lVar5 + 0x10 + lVar1));
        }
        CRYPTO_free(*(undefined8 *)(lVar5 + 8 + lVar1),"crypto\\conf\\conf_ssl.c",0x36);
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar3 < DAT_1553e2b78);
    }
    CRYPTO_free(DAT_1553e2b70,"crypto\\conf\\conf_ssl.c",0x38);
    DAT_1553e2b70 = 0;
    DAT_1553e2b78 = 0;
  }
  return;
}

// FUN_14f6f4aa0 @ 14f6f4aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6f4aa0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong local_res18;
  undefined8 uVar14;
  
  uVar4 = CONF_imodule_get_value();
  lVar5 = NCONF_get_section(param_2,uVar4);
  iVar3 = OPENSSL_sk_num(lVar5);
  if (iVar3 < 1) {
    if (lVar5 == 0) {
      uVar14 = 0x48;
      uVar12 = 0x78;
    }
    else {
      uVar14 = 0x4a;
      uVar12 = 0x77;
    }
    ERR_put_error(0xe,0x7b,uVar12,"crypto\\conf\\conf_ssl.c",uVar14);
    ERR_add_error_data(2,"section=",uVar4);
  }
  else {
    iVar3 = OPENSSL_sk_num(lVar5);
    uVar10 = (ulonglong)iVar3;
    FUN_14f6f4960(param_1);
    DAT_1553e2b70 = CRYPTO_zalloc(uVar10 * 0x18,"crypto\\conf\\conf_ssl.c",0x50);
    if (DAT_1553e2b70 != 0) {
      uVar13 = 0;
      DAT_1553e2b78 = uVar10;
      if (uVar10 != 0) {
        local_res18 = 0;
        do {
          plVar1 = (longlong *)(local_res18 + DAT_1553e2b70);
          lVar6 = OPENSSL_sk_value(lVar5,uVar13 & 0xffffffff);
          lVar7 = NCONF_get_section(param_2,*(undefined8 *)(lVar6 + 0x10));
          iVar3 = OPENSSL_sk_num(lVar7);
          if (iVar3 < 1) {
            if (lVar7 == 0) {
              uVar14 = 0x5c;
              uVar4 = 0x76;
            }
            else {
              uVar14 = 0x5f;
              uVar4 = 0x75;
            }
            ERR_put_error(0xe,0x7b,uVar4,"crypto\\conf\\conf_ssl.c",uVar14);
            ERR_add_error_data(4,"name=",*(undefined8 *)(lVar6 + 8),", value=",
                               *(undefined8 *)(lVar6 + 0x10));
            goto LAB_14f6f4b39;
          }
          lVar6 = CRYPTO_strdup(*(undefined8 *)(lVar6 + 8),"crypto\\conf\\conf_ssl.c",99);
          *plVar1 = lVar6;
          if (lVar6 == 0) goto LAB_14f6f4b39;
          iVar3 = OPENSSL_sk_num(lVar7);
          uVar10 = (ulonglong)iVar3;
          lVar6 = CRYPTO_zalloc(uVar10 << 4,"crypto\\conf\\conf_ssl.c",0x67);
          plVar1[1] = lVar6;
          if (lVar6 == 0) goto LAB_14f6f4b39;
          uVar11 = 0;
          plVar1[2] = uVar10;
          if (uVar10 != 0) {
            lVar6 = 0;
            do {
              lVar8 = OPENSSL_sk_value(lVar7,uVar11 & 0xffffffff);
              lVar2 = plVar1[1];
              pcVar9 = strchr(*(char **)(lVar8 + 8),0x2e);
              if (pcVar9 == (char *)0x0) {
                pcVar9 = *(char **)(lVar8 + 8);
              }
              else {
                pcVar9 = pcVar9 + 1;
              }
              uVar4 = CRYPTO_strdup(pcVar9,"crypto\\conf\\conf_ssl.c",0x76);
              *(undefined8 *)(lVar2 + lVar6) = uVar4;
              lVar8 = CRYPTO_strdup(*(undefined8 *)(lVar8 + 0x10),"crypto\\conf\\conf_ssl.c",0x77);
              *(longlong *)(lVar2 + 8 + lVar6) = lVar8;
              if ((*(longlong *)(lVar2 + lVar6) == 0) || (lVar8 == 0)) goto LAB_14f6f4b39;
              uVar11 = uVar11 + 1;
              lVar6 = lVar6 + 0x10;
            } while (uVar11 < uVar10);
          }
          uVar13 = uVar13 + 1;
          local_res18 = local_res18 + 0x18;
        } while (uVar13 < DAT_1553e2b78);
      }
      return 1;
    }
  }
LAB_14f6f4b39:
  FUN_14f6f4960(param_1);
  return 0;
}

