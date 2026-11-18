// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// FUN_14f783fc0 @ 14f783fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f783fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 local_res18;
  
  iVar5 = 0;
  local_res18 = param_3;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(param_2);
      iVar1 = ASN1_INTEGER_get(uVar2);
      uVar4 = 0;
      piVar3 = &DAT_154df9e08;
      do {
        if (iVar1 == *piVar3) {
          if (uVar4 < 2) {
            X509V3_add_value(0,(&PTR_s_status_request_154df9e10)[uVar4 * 2],&local_res18);
            goto LAB_14f784040;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 4;
      } while (uVar4 < 2);
      X509V3_add_value_int(0,uVar2,&local_res18);
LAB_14f784040:
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar5 < iVar1);
  }
  return local_res18;
}

// FUN_14f784090 @ 14f784090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f784090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  char *_Str1;
  undefined **ppuVar8;
  char *local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar9;
  
  lVar3 = OPENSSL_sk_new_null();
  if (lVar3 == 0) {
    ERR_put_error(0x22,0xa5,0x41,"crypto\\x509v3\\v3_tlsf.c",99);
    return 0;
  }
  iVar7 = 0;
  iVar1 = OPENSSL_sk_num(param_3);
  if (0 < iVar1) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_3,iVar7);
      _Str1 = (char *)puVar4[2];
      if (_Str1 == (char *)0x0) {
        _Str1 = (char *)puVar4[1];
      }
      uVar6 = 0;
      ppuVar8 = &PTR_s_status_request_154df9e10;
      do {
        iVar1 = _stricmp(_Str1,*ppuVar8);
        if (iVar1 == 0) {
          if (uVar6 < 2) {
            lVar2 = (&DAT_154df9e08)[uVar6 * 4];
            goto LAB_14f7841a8;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        ppuVar8 = ppuVar8 + 2;
      } while (uVar6 < 2);
      lVar2 = strtol(_Str1,&local_res20,10);
      if ((((*local_res20 != '\0') || (_Str1 == local_res20)) || (lVar2 < 0)) || (0xffff < lVar2)) {
        ERR_put_error(0x22,0xa5,0x8f,"crypto\\x509v3\\v3_tlsf.c",0x77);
        ERR_add_error_data(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
        goto LAB_14f7842ac;
      }
LAB_14f7841a8:
      lVar5 = ASN1_INTEGER_new();
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (lVar5 == 0) {
LAB_14f78422d:
        ERR_put_error(0x22,0xa5,0x41,"crypto\\x509v3\\v3_tlsf.c",CONCAT44(uVar9,0x80));
LAB_14f7842ac:
        OPENSSL_sk_pop_free(lVar3,ASN1_INTEGER_free);
        return 0;
      }
      iVar1 = ASN1_INTEGER_set(lVar5,lVar2);
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (iVar1 == 0) goto LAB_14f78422d;
      iVar1 = OPENSSL_sk_push(lVar3,lVar5);
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (iVar1 < 1) goto LAB_14f78422d;
      iVar7 = iVar7 + 1;
      iVar1 = OPENSSL_sk_num(param_3);
    } while (iVar7 < iVar1);
  }
  return lVar3;
}

// TLS_FEATURE_free @ 14f7842e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void TLS_FEATURE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534db718);
  return;
}

// TLS_FEATURE_new @ 14f784310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void TLS_FEATURE_new(void)

{
  ASN1_item_new(&DAT_1534db718);
  return;
}

// FUN_14f784340 @ 14f784340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f784340(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f784360 @ 14f784360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f784360(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f784380 @ 14f784380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f784380(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7843a0 @ 14f7843a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7843a0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7843c0 @ 14f7843c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7843c0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7843e0 @ 14f7843e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7843e0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f784400 @ 14f784400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f784400(void)

{
  OPENSSL_sk_value();
  return;
}

