// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// SCT_LIST_print @ 14f7c18a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_LIST_print(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                   longlong param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  
  iVar1 = OPENSSL_sk_num();
  iVar6 = 0;
  if (0 < iVar1) {
    iVar7 = param_3 + 4;
    iVar8 = param_3 + 0x10;
    do {
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      piVar3 = (int *)OPENSSL_sk_value(param_1,iVar6);
      lVar4 = 0;
      if (param_5 != 0) {
        lVar4 = CTLOG_STORE_get0_log_by_id
                          (param_5,*(undefined8 *)(piVar3 + 6),*(undefined8 *)(piVar3 + 8));
      }
      BIO_printf(param_2,"%*sSigned Certificate Timestamp:",param_3,"");
      BIO_printf(param_2,"\n%*sVersion   : ",iVar7,"");
      if (*piVar3 == 0) {
        BIO_printf(param_2,"v1 (0x0)");
        if (lVar4 != 0) {
          uVar5 = CTLOG_get0_name(lVar4);
          BIO_printf(param_2,"\n%*sLog       : %s",iVar7,"",uVar5);
          uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
        }
        BIO_printf(param_2,"\n%*sLog ID    : ",iVar7,"");
        uVar5 = CONCAT44(uVar9,piVar3[8]);
        BIO_hex_string(param_2,iVar8,0x10,*(undefined8 *)(piVar3 + 6),uVar5);
        uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
        BIO_printf(param_2,"\n%*sTimestamp : ",iVar7,"");
        FUN_14f7c1ee0(*(undefined8 *)(piVar3 + 10),param_2);
        BIO_printf(param_2,"\n%*sExtensions: ",iVar7,"");
        if (*(longlong *)(piVar3 + 0xe) == 0) {
          BIO_printf(param_2,&s_none);
        }
        else {
          uVar5 = CONCAT44(uVar9,piVar3[0xe]);
          BIO_hex_string(param_2,iVar8,0x10,*(undefined8 *)(piVar3 + 0xc),uVar5);
          uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
        }
        BIO_printf(param_2,"\n%*sSignature : ",iVar7,"");
        iVar2 = SCT_get_signature_nid(piVar3);
        if (iVar2 == 0) {
          BIO_printf(param_2,"%02X%02X",(char)piVar3[0x10],*(undefined1 *)((longlong)piVar3 + 0x41))
          ;
        }
        else {
          uVar5 = OBJ_nid2ln(iVar2);
          BIO_printf(param_2,"%s",uVar5);
        }
        BIO_printf(param_2,"\n%*s            ",iVar7,"");
        iVar2 = piVar3[0x14];
        uVar5 = *(undefined8 *)(piVar3 + 0x12);
      }
      else {
        BIO_printf(param_2,"unknown\n%*s",iVar8,"");
        iVar2 = piVar3[4];
        uVar5 = *(undefined8 *)(piVar3 + 2);
      }
      in_stack_ffffffffffffffa8 = CONCAT44(uVar9,iVar2);
      BIO_hex_string(param_2,iVar8,0x10,uVar5,in_stack_ffffffffffffffa8);
      iVar2 = OPENSSL_sk_num(param_1);
      if (iVar6 < iVar2 + -1) {
        BIO_printf(param_2,"%s",param_4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return;
}

// SCT_print @ 14f7c1b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_print(int *param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  lVar2 = 0;
  if (param_4 != 0) {
    lVar2 = CTLOG_STORE_get0_log_by_id
                      (param_4,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 8));
  }
  BIO_printf(param_2,"%*sSigned Certificate Timestamp:",param_3,"");
  iVar4 = param_3 + 4;
  BIO_printf(param_2,"\n%*sVersion   : ",iVar4,"");
  if (*param_1 == 0) {
    BIO_printf(param_2,"v1 (0x0)");
    if (lVar2 != 0) {
      uVar3 = CTLOG_get0_name(lVar2);
      BIO_printf(param_2,"\n%*sLog       : %s",iVar4,"",uVar3);
      uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    BIO_printf(param_2,"\n%*sLog ID    : ",iVar4,"");
    uVar3 = CONCAT44(uVar5,param_1[8]);
    BIO_hex_string(param_2,param_3 + 0x10,0x10,*(undefined8 *)(param_1 + 6),uVar3);
    uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
    BIO_printf(param_2,"\n%*sTimestamp : ",iVar4,"");
    FUN_14f7c1ee0(*(undefined8 *)(param_1 + 10),param_2);
    BIO_printf(param_2,"\n%*sExtensions: ",iVar4,"");
    if (*(longlong *)(param_1 + 0xe) == 0) {
      BIO_printf(param_2,&s_none);
    }
    else {
      uVar3 = CONCAT44(uVar5,param_1[0xe]);
      BIO_hex_string(param_2,param_3 + 0x10,0x10,*(undefined8 *)(param_1 + 0xc),uVar3);
      uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    BIO_printf(param_2,"\n%*sSignature : ",iVar4,"");
    iVar1 = SCT_get_signature_nid(param_1);
    if (iVar1 == 0) {
      BIO_printf(param_2,"%02X%02X",(char)param_1[0x10],*(undefined1 *)((longlong)param_1 + 0x41));
    }
    else {
      uVar3 = OBJ_nid2ln(iVar1);
      BIO_printf(param_2,"%s",uVar3);
    }
    BIO_printf(param_2,"\n%*s            ",iVar4,"");
    iVar4 = param_1[0x14];
    uVar3 = *(undefined8 *)(param_1 + 0x12);
  }
  else {
    BIO_printf(param_2,"unknown\n%*s",param_3 + 0x10,"");
    iVar4 = param_1[4];
    uVar3 = *(undefined8 *)(param_1 + 2);
  }
  BIO_hex_string(param_2,param_3 + 0x10,0x10,uVar3,CONCAT44(uVar5,iVar4));
  return;
}

// FUN_14f7c1d90 @ 14f7c1d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c1d90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = SCT_get_signature_nid();
  if (iVar1 == 0) {
    BIO_printf(param_2,"%02X%02X",*(undefined1 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x41));
    return;
  }
  uVar2 = OBJ_nid2ln(iVar1);
  BIO_printf(param_2,"%s",uVar2);
  return;
}

// SCT_validation_status_string @ 14f7c1e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * SCT_validation_status_string(void)

{
  undefined4 uVar1;
  
  uVar1 = SCT_get_validation_status();
  switch(uVar1) {
  case 0:
    return "not set";
  case 1:
    return "unknown log";
  case 2:
    return "valid";
  case 3:
    return "invalid";
  case 4:
    return "unverified";
  case 5:
    return "unknown version";
  default:
    return "unknown status";
  }
}

// FUN_14f7c1ea0 @ 14f7c1ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c1ea0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7c1ec0 @ 14f7c1ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c1ec0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7c1ee0 @ 14f7c1ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f7c1ee0(ulonglong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  int local_48;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar5 = ASN1_GENERALIZEDTIME_new();
  if (lVar5 != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    lVar8 = SUB168(ZEXT816(0x8daea1d7f4cf721b) * auVar1,8);
    uVar9 = (param_1 - lVar8 >> 1) + lVar8 >> 0x1a;
    uVar7 = param_1 + uVar9 * -86400000;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    lVar8 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar2,8);
    ASN1_GENERALIZEDTIME_adj(lVar5,0,uVar9,lVar8 + (uVar7 - lVar8 >> 1) >> 9);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    lVar8 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar3,8);
    uVar6 = ASN1_STRING_get0_data(lVar5);
    local_48 = (int)param_1 + (int)((param_1 - lVar8 >> 1) + lVar8 >> 9) * -1000;
    BIO_snprintf(local_38,0x14,"%.14s.%03dZ",uVar6);
    iVar4 = ASN1_GENERALIZEDTIME_set_string(lVar5,local_38);
    if (iVar4 != 0) {
      ASN1_GENERALIZEDTIME_print(param_2,lVar5);
    }
    ASN1_GENERALIZEDTIME_free(lVar5);
  }
  return;
}

