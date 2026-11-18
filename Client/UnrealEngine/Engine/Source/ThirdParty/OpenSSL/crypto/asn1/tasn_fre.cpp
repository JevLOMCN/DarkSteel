// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// ASN1_item_ex_free @ 14f6f1550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_item_ex_free(undefined8 param_1,undefined8 param_2)

{
  asn1_item_embed_free(param_1,param_2,0);
  return;
}

// ASN1_item_free @ 14f6f1570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_item_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  asn1_item_embed_free(local_res8,param_2,0,param_4,0x14f6f157f);
  return;
}

// asn1_item_embed_free @ 14f6f15a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void asn1_item_embed_free(longlong *param_1,char *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar6 = *(longlong *)(param_2 + 0x18);
  if ((*param_2 != '\0') && (*param_1 == 0)) {
    return;
  }
  if ((lVar6 == 0) || (pcVar4 = *(code **)(lVar6 + 0x18), pcVar4 == (code *)0x0)) {
    pcVar4 = (code *)0x0;
  }
  switch(*param_2) {
  case '\0':
    if (*(longlong *)(param_2 + 8) == 0) {
      asn1_primitive_free(param_1,param_2,param_3);
    }
    else {
      asn1_template_free();
    }
    break;
  case '\x01':
  case '\x06':
    iVar1 = asn1_do_lock(param_1,0xffffffff,param_2);
    if ((iVar1 == 0) &&
       ((pcVar4 == (code *)0x0 || (iVar1 = (*pcVar4)(2,param_1,param_2,0), iVar1 != 2)))) {
      asn1_enc_free(param_1,param_2);
      iVar1 = 0;
      lVar6 = (longlong)*(int *)(param_2 + 0x10) * 0x20 + *(longlong *)(param_2 + 8);
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          lVar6 = lVar6 + -0x20;
          lVar2 = asn1_do_adb(param_1,lVar6,0);
          if (lVar2 != 0) {
            uVar3 = asn1_get_field_ptr(param_1,lVar2);
            asn1_template_free(uVar3,lVar2);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_2 + 0x10));
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(3,param_1,param_2);
      }
      if (param_3 == 0) {
        uVar5 = 0x73;
LAB_14f6f17af:
        CRYPTO_free(*param_1,"crypto\\asn1\\tasn_fre.c",uVar5);
        *param_1 = 0;
      }
    }
    break;
  case '\x02':
    if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(2,param_1,param_2), iVar1 != 2)) {
      iVar1 = asn1_get_choice_selector(param_1,param_2);
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x10))) {
        lVar6 = (longlong)iVar1 * 0x20 + *(longlong *)(param_2 + 8);
        uVar3 = asn1_get_field_ptr(param_1,lVar6);
        asn1_template_free(uVar3,lVar6);
      }
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(3,param_1,param_2);
      }
      if (param_3 == 0) {
        uVar5 = 0x4b;
        goto LAB_14f6f17af;
      }
    }
    break;
  case '\x03':
    break;
  case '\x04':
    if ((lVar6 != 0) && (*(code **)(lVar6 + 0x10) != (code *)0x0)) {
      (**(code **)(lVar6 + 0x10))(param_1,param_2);
    }
    break;
  case '\x05':
    asn1_primitive_free(param_1,param_2,param_3);
    break;
  default:
    goto switchD_14f6f1611_default;
  }
switchD_14f6f1611_default:
  return;
}

// asn1_primitive_free @ 14f6f1800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void asn1_primitive_free(longlong *param_1,char *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    iVar2 = *(int *)*param_1;
    param_1 = (longlong *)((int *)*param_1 + 2);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (param_3 == 0) {
      if ((lVar1 != 0) && (*(code **)(lVar1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6f184c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))();
        return;
      }
    }
    else if ((lVar1 != 0) && (*(code **)(lVar1 + 0x20) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6f1836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x20))();
      return;
    }
    if (*param_2 == '\x05') {
      if (*param_1 == 0) {
        return;
      }
      asn1_string_embed_free(*param_1,param_3);
      *param_1 = 0;
      return;
    }
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 == 1) goto LAB_14f6f1893;
  }
  if (*param_1 == 0) {
    return;
  }
LAB_14f6f1893:
  if (iVar2 == -4) {
    asn1_primitive_free(param_1,0,0);
    CRYPTO_free(*param_1,"crypto\\asn1\\tasn_fre.c",200);
  }
  else {
    if (iVar2 == 1) {
      if (param_2 != (char *)0x0) {
        *(int *)param_1 = *(int *)(param_2 + 0x20);
        return;
      }
      *(int *)param_1 = -1;
      return;
    }
    if (iVar2 != 5) {
      if (iVar2 != 6) {
        asn1_string_embed_free(*param_1,param_3);
        *param_1 = 0;
        return;
      }
      ASN1_OBJECT_free(*param_1);
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 0;
  return;
}

// asn1_template_free @ 14f6f1930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void asn1_template_free(undefined8 ***param_1,uint *param_2)

{
  undefined8 **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_res10;
  undefined8 local_res18;
  
  uVar5 = *param_2 & 0x1000;
  if (uVar5 != 0) {
    local_res10 = param_1;
  }
  pppuVar6 = &local_res10;
  if (uVar5 == 0) {
    pppuVar6 = param_1;
  }
  if ((*param_2 & 6) != 0) {
    iVar4 = 0;
    ppuVar1 = *pppuVar6;
    iVar2 = OPENSSL_sk_num(ppuVar1);
    if (0 < iVar2) {
      do {
        local_res18 = OPENSSL_sk_value(ppuVar1,iVar4);
        uVar3 = (**(code **)(param_2 + 6))();
        asn1_item_embed_free(&local_res18,uVar3,uVar5);
        iVar4 = iVar4 + 1;
        iVar2 = OPENSSL_sk_num(ppuVar1);
      } while (iVar4 < iVar2);
    }
    OPENSSL_sk_free(ppuVar1);
    *pppuVar6 = (undefined8 **)0x0;
    return;
  }
  uVar3 = (**(code **)(param_2 + 6))();
  asn1_item_embed_free(pppuVar6,uVar3,uVar5);
  return;
}

// FUN_14f6f1a10 @ 14f6f1a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f1a10(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6f1a30 @ 14f6f1a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f1a30(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6f1a50 @ 14f6f1a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f1a50(void)

{
  OPENSSL_sk_value();
  return;
}

