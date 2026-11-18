// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// ASN1_item_ex_new @ 14f6f0da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_item_ex_new(undefined8 param_1,undefined8 param_2)

{
  FUN_14f6f0ee0(param_1,param_2,0);
  return;
}

// ASN1_item_new @ 14f6f0dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_item_new(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  iVar1 = FUN_14f6f0ee0(local_res10,param_1,0);
  uVar2 = 0;
  if (0 < iVar1) {
    uVar2 = local_res10[0];
  }
  return uVar2;
}

// FUN_14f6f0e00 @ 14f6f0e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f0e00(undefined8 *param_1,char *param_2)

{
  uint *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  
  uVar2 = (uint)*param_2;
  if (6 < uVar2) {
    return;
  }
  do {
    switch(switchD_1501dbc7b::caseD_1.e_magic +
           (&switchD_14f6f0e3d::switchdataD_14f6f0eb0)[(int)uVar2]) {
    case (char *)0x14f6f0e40:
      puVar1 = *(uint **)(param_2 + 8);
      if (puVar1 == (uint *)0x0) goto switchD_14f6f0e3d_caseD_4f6f0e8c;
      if ((*puVar1 & 0x306) != 0) goto switchD_14f6f0e3d_caseD_4f6f0e9e;
      param_2 = (char *)(**(code **)(puVar1 + 6))();
      uVar2 = (uint)*param_2;
      if (6 < uVar2) {
        return;
      }
      break;
    case (char *)0x14f6f0e6a:
      if ((*(longlong *)(param_2 + 0x18) != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 0x18) + 0x18),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f6f0e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1);
        return;
      }
    case (char *)0x14f6f0e9e:
switchD_14f6f0e3d_caseD_4f6f0e9e:
      *param_1 = 0;
LAB_14f6f0eaa:
      return;
    case (char *)0x14f6f0e8c:
switchD_14f6f0e3d_caseD_4f6f0e8c:
      FUN_14f6f11b0(param_1);
      return;
    case (char *)0x14f6f0ea5:
      goto LAB_14f6f0eaa;
    }
  } while( true );
}

// FUN_14f6f0ee0 @ 14f6f0ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6f0ee0(longlong *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6f0ef9;
  pcVar5 = (code *)0x0;
  lVar3 = *(longlong *)(param_2 + 0x18);
  if ((lVar3 == 0) || (pcVar6 = *(code **)(lVar3 + 0x18), *(code **)(lVar3 + 0x18) == (code *)0x0))
  {
    pcVar6 = pcVar5;
  }
  switch(*param_2) {
  case 0:
    if (*(longlong *)(param_2 + 8) == 0) goto LAB_14f6f0f6f;
    iVar1 = FUN_14f6f1410();
    break;
  case 1:
  case 6:
    if (pcVar6 != (code *)0x0) {
      iVar1 = (*pcVar6)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_14f6f1144;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar3 = CRYPTO_zalloc((longlong)*(int *)(param_2 + 0x20),"crypto\\asn1\\tasn_new.c",0x7a);
      *param_1 = lVar3;
      if (lVar3 == 0) goto LAB_14f6f10b5;
    }
    else {
      memset((void *)*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    }
    iVar1 = asn1_do_lock(param_1,0,param_2);
    if (iVar1 < 0) {
      if (param_3 == 0) {
        CRYPTO_free(*param_1,"crypto\\asn1\\tasn_new.c",0x81);
        *param_1 = 0;
      }
      goto LAB_14f6f10b5;
    }
    asn1_enc_init(param_1,param_2);
    lVar3 = *(longlong *)(param_2 + 8);
    if (0 < *(int *)(param_2 + 0x10)) {
      do {
        uVar2 = asn1_get_field_ptr(param_1,lVar3);
        iVar1 = FUN_14f6f1410(uVar2,lVar3);
        if (iVar1 == 0) {
          asn1_item_embed_free(param_1,param_2,param_3);
          goto LAB_14f6f10b5;
        }
        lVar3 = lVar3 + 0x20;
        uVar4 = (int)pcVar5 + 1;
        pcVar5 = (code *)(ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(param_2 + 0x10));
    }
    if (pcVar6 == (code *)0x0) {
      return 1;
    }
    iVar1 = (*pcVar6)(1,param_1,param_2);
    goto joined_r0x00014f6f1025;
  case 2:
    if (pcVar6 != (code *)0x0) {
      iVar1 = (*pcVar6)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_14f6f1144;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar3 = CRYPTO_zalloc((longlong)*(int *)(param_2 + 0x20),"crypto\\asn1\\tasn_new.c",0x61);
      *param_1 = lVar3;
      if (lVar3 == 0) goto LAB_14f6f10b5;
    }
    else {
      memset((void *)*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    }
    asn1_set_choice_selector(param_1,0xffffffff,param_2);
    if (pcVar6 == (code *)0x0) {
      return 1;
    }
    iVar1 = (*pcVar6)(1,param_1,param_2);
joined_r0x00014f6f1025:
    if (iVar1 != 0) {
      return 1;
    }
    asn1_item_embed_free(param_1,param_2,param_3);
LAB_14f6f1144:
    ERR_put_error(0xd,0x79,100,"crypto\\asn1\\tasn_new.c",0xa1);
    return 0;
  default:
    goto LAB_14f6f0f81;
  case 4:
    if (lVar3 == 0) {
      return 1;
    }
    if (*(code **)(lVar3 + 8) == (code *)0x0) {
      return 1;
    }
    iVar1 = (**(code **)(lVar3 + 8))(param_1,param_2);
    break;
  case 5:
LAB_14f6f0f6f:
    iVar1 = FUN_14f6f1210(param_1,param_2,param_3);
  }
  if (iVar1 == 0) {
LAB_14f6f10b5:
    ERR_put_error(0xd,0x79,0x41,"crypto\\asn1\\tasn_new.c",0x98,uVar7);
    return 0;
  }
LAB_14f6f0f81:
  return 1;
}

// FUN_14f6f11b0 @ 14f6f11b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f11b0(undefined8 *param_1,char *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != (char *)0x0) {
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if ((*param_2 != '\x05') && (*(int *)(param_2 + 4) == 1)) {
        *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
        return;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 0x18) + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6f11d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}

// FUN_14f6f1210 @ 14f6f1210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6f1210(longlong *param_1,char *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    if (param_3 == 0) {
      if (*(code **)(lVar4 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6f127b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0x10))();
        return uVar2;
      }
    }
    else if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
      (**(code **)(lVar4 + 0x20))();
      return 1;
    }
  }
  if (*param_2 == '\x05') {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == -4) {
      puVar5 = (undefined4 *)CRYPTO_malloc(0x10,"crypto\\asn1\\tasn_new.c",0x12e);
      if (puVar5 == (undefined4 *)0x0) {
        ERR_put_error(0xd,0x77,0x41,"crypto\\asn1\\tasn_new.c",0x12f);
        return 0;
      }
      *(undefined8 *)(puVar5 + 2) = 0;
      *puVar5 = 0xffffffff;
      *param_1 = (longlong)puVar5;
      goto LAB_14f6f13a7;
    }
    if (iVar1 == 1) {
      *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
      return 1;
    }
    if (iVar1 == 5) {
      *param_1 = 1;
      return 1;
    }
    if (iVar1 == 6) {
      lVar4 = OBJ_nid2obj(0);
      *param_1 = lVar4;
      return 1;
    }
  }
  if (param_3 == 0) {
    puVar3 = (undefined8 *)ASN1_STRING_type_new(iVar1);
    *param_1 = (longlong)puVar3;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(int *)((longlong)puVar3 + 4) = iVar1;
    *(undefined4 *)(puVar3 + 2) = 0x80;
  }
  if ((*param_2 == '\x05') && (puVar3 != (undefined8 *)0x0)) {
    *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 0x40;
  }
LAB_14f6f13a7:
  return (ulonglong)(*param_1 != 0);
}

// FUN_14f6f13d0 @ 14f6f13d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f13d0(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((*param_2 & 0x306) != 0) {
    *param_1 = 0;
    return;
  }
  uVar1 = (**(code **)(param_2 + 6))();
  FUN_14f6f0e00(param_1,uVar1);
  return;
}

// FUN_14f6f1410 @ 14f6f1410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6f1410(longlong ****param_1,uint *param_2)

{
  uint uVar1;
  longlong ****pppplVar2;
  undefined8 uVar3;
  longlong ***ppplVar4;
  longlong ****pppplVar5;
  longlong ***local_res10;
  undefined8 uVar6;
  
  uVar6 = 0x14f6f1425;
  uVar3 = (**(code **)(param_2 + 6))();
  uVar1 = *param_2;
  pppplVar5 = &local_res10;
  pppplVar2 = param_1;
  if ((uVar1 & 0x1000) == 0) {
    pppplVar5 = param_1;
    pppplVar2 = (longlong ****)local_res10;
  }
  local_res10 = (longlong ***)pppplVar2;
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 0x306) != 0) {
      *pppplVar5 = (longlong ***)0x0;
      return 1;
    }
    uVar3 = (**(code **)(param_2 + 6))();
    FUN_14f6f0e00(pppplVar5,uVar3);
    return 1;
  }
  if ((uVar1 & 0x300) == 0) {
    if ((uVar1 & 6) == 0) {
      uVar3 = FUN_14f6f0ee0(pppplVar5,uVar3,uVar1 & 0x1000);
      return uVar3;
    }
    ppplVar4 = (longlong ***)OPENSSL_sk_new_null();
    if (ppplVar4 == (longlong ***)0x0) {
      ERR_put_error(0xd,0x85,0x41,"crypto\\asn1\\tasn_new.c",0xe7,uVar6);
      return 0;
    }
  }
  else {
    ppplVar4 = (longlong ***)0x0;
  }
  *pppplVar5 = ppplVar4;
  return 1;
}

// FUN_14f6f1530 @ 14f6f1530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f1530(void)

{
  OPENSSL_sk_new_null();
  return;
}

