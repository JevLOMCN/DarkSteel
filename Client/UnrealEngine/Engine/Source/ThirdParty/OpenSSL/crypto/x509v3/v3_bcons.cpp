// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f735f80 @ 14f735f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f735f80(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  X509V3_add_value_bool(&s_CA,*param_2,local_res18);
  X509V3_add_value_int("pathlen",*(undefined8 *)(param_2 + 2),local_res18);
  return local_res18[0];
}

// FUN_14f735fd0 @ 14f735fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f735fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar3 = ASN1_item_new(&DAT_1534bac90);
  if (lVar3 == 0) {
    ERR_put_error(0x22,0x66,0x41,"crypto\\x509v3\\v3_bcons.c",0x3f);
    return 0;
  }
  iVar7 = 0;
  iVar2 = OPENSSL_sk_num(param_3);
  if (0 < iVar2) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_3,iVar7);
      pcVar1 = (char *)puVar4[1];
      if (((*pcVar1 == s_CA) && (pcVar1[1] == DAT_153161081)) && (pcVar1[2] == DAT_153161082)) {
        iVar2 = X509V3_get_value_bool(puVar4,lVar3);
      }
      else {
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (pcVar1[lVar5] != "pathlen"[lVar5]) {
            ERR_put_error(0x22,0x66,0x6a,"crypto\\x509v3\\v3_bcons.c",0x4b);
            ERR_add_error_data(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
            goto LAB_14f736150;
          }
          lVar5 = lVar6;
        } while (lVar6 != 8);
        iVar2 = X509V3_get_value_int(puVar4,lVar3 + 8);
      }
      if (iVar2 == 0) {
LAB_14f736150:
        ASN1_item_free(lVar3,&DAT_1534bac90);
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar2 = OPENSSL_sk_num(param_3);
    } while (iVar7 < iVar2);
  }
  return lVar3;
}

// BASIC_CONSTRAINTS_free @ 14f736180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BASIC_CONSTRAINTS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534bac90);
  return;
}

// BASIC_CONSTRAINTS_new @ 14f7361b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BASIC_CONSTRAINTS_new(void)

{
  ASN1_item_new(&DAT_1534bac90);
  return;
}

// d2i_BASIC_CONSTRAINTS @ 14f7361e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_BASIC_CONSTRAINTS(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_BASIC_CONSTRAINTS @ 14f736210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_BASIC_CONSTRAINTS(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534bac90);
  return;
}

// FUN_14f736240 @ 14f736240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f736240(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f736260 @ 14f736260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f736260(void)

{
  OPENSSL_sk_value();
  return;
}

