// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// ASN1_item_ex_i2d @ 14f6f3980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_item_ex_i2d(longlong *param_1,longlong param_2,char *param_3,ulonglong param_4,
                          uint param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  code *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint local_res18 [2];
  undefined4 uVar12;
  uint local_38;
  int local_34;
  undefined8 local_30;
  code *pcVar8;
  
  lVar10 = *(longlong *)(param_3 + 0x18);
  pcVar8 = (code *)0x0;
  local_34 = 1;
  uVar11 = param_4 & 0xffffffff;
  if ((*param_3 != '\0') && (*param_1 == 0)) {
    return 0;
  }
  pcVar9 = pcVar8;
  if ((lVar10 != 0) && (pcVar9 = (code *)0x0, *(code **)(lVar10 + 0x18) != (code *)0x0)) {
    pcVar9 = *(code **)(lVar10 + 0x18);
  }
  local_38 = param_5;
  iVar2 = (int)param_4;
  switch(*param_3) {
  case '\0':
    lVar10 = *(longlong *)(param_3 + 8);
    if (lVar10 == 0) {
      uVar11 = FUN_14f6f3f70(param_1,param_2,param_3);
      return uVar11;
    }
    break;
  case '\x02':
    if (iVar2 != -1) {
      uVar12 = 0x7a;
      goto LAB_14f6f3a6f;
    }
    if ((pcVar9 != (code *)0x0) && (iVar2 = (*pcVar9)(6,param_1,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = asn1_get_choice_selector(param_1,param_3);
    if ((iVar2 < 0) || (*(int *)(param_3 + 0x10) <= iVar2)) {
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(7,param_1,param_3);
        return 0;
      }
      return 0;
    }
    lVar10 = (longlong)iVar2 * 0x20 + *(longlong *)(param_3 + 8);
    param_1 = (longlong *)asn1_get_field_ptr(param_1,lVar10);
    param_4 = 0xffffffff;
    break;
  default:
    return 0;
  case '\x04':
    uVar11 = (**(code **)(lVar10 + 0x28))(param_1,param_2,param_3,param_4,param_5);
    return uVar11;
  case '\x05':
    if (iVar2 == -1) {
      uVar11 = FUN_14f6f3f70(param_1,param_2,param_3,0xffffffff,param_5);
      return uVar11;
    }
    uVar12 = 0x6f;
LAB_14f6f3a6f:
    ERR_put_error(0xd,0x90,0xe6,"crypto\\asn1\\tasn_enc.c",uVar12);
    return 0xffffffff;
  case '\x06':
    local_34 = 1;
    if ((param_5 >> 0xb & 1) != 0) {
      local_34 = 2;
    }
  case '\x01':
    iVar1 = asn1_enc_restore(local_res18,param_2,param_1,param_3);
    if (iVar1 < 0) {
      return 0;
    }
    if (0 < iVar1) {
      return (ulonglong)local_res18[0];
    }
    local_res18[0] = 0;
    if (iVar2 == -1) {
      local_38 = param_5 & 0xffffff3f;
      uVar11 = 0x10;
    }
    pcVar6 = pcVar8;
    if (pcVar9 != (code *)0x0) {
      iVar2 = (*pcVar9)(6,param_1,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      pcVar6 = (code *)(ulonglong)local_res18[0];
    }
    lVar10 = *(longlong *)(param_3 + 8);
    if (0 < *(int *)(param_3 + 0x10)) {
      do {
        lVar3 = asn1_do_adb(param_1,lVar10,1);
        if (lVar3 == 0) {
          return 0;
        }
        uVar4 = asn1_get_field_ptr(param_1,lVar3);
        iVar2 = FUN_14f6f4420(uVar4,0,lVar3,0xffffffff,local_38);
        if ((iVar2 == -1) || ((int)(0x7fffffff - local_res18[0]) < iVar2)) {
          return 0xffffffff;
        }
        local_res18[0] = local_res18[0] + iVar2;
        pcVar6 = (code *)(ulonglong)local_res18[0];
        lVar10 = lVar10 + 0x20;
        uVar7 = (int)pcVar8 + 1;
        pcVar8 = (code *)(ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_3 + 0x10));
    }
    iVar2 = 0;
    uVar5 = ASN1_object_size(local_34,pcVar6,uVar11);
    local_30 = CONCAT44(1,(int)uVar5);
    if (param_2 == 0) {
      return uVar5;
    }
    if ((int)uVar5 == -1) {
      return uVar5;
    }
    ASN1_put_object(param_2,local_34,local_res18[0],uVar11,local_38);
    lVar10 = *(longlong *)(param_3 + 8);
    if (0 < *(int *)(param_3 + 0x10)) {
      do {
        lVar3 = asn1_do_adb(param_1,lVar10,1);
        if (lVar3 == 0) {
          return 0;
        }
        uVar4 = asn1_get_field_ptr(param_1,lVar3);
        FUN_14f6f4420(uVar4,param_2,lVar3,0xffffffff,local_38);
        lVar10 = lVar10 + 0x20;
        iVar2 = iVar2 + 1;
        uVar5 = local_30;
      } while (iVar2 < *(int *)(param_3 + 0x10));
    }
    if (local_34 == 2) {
      ASN1_put_eoc(param_2);
    }
    if (pcVar9 == (code *)0x0) {
      return uVar5 & 0xffffffff;
    }
    iVar2 = (*pcVar9)(7,param_1,param_3);
    if (iVar2 != 0) {
      return uVar5 & 0xffffffff;
    }
    return 0;
  }
  uVar11 = FUN_14f6f4420(param_1,param_2,lVar10,param_4,param_5);
  return uVar11;
}

// ASN1_item_i2d @ 14f6f3d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_item_i2d(void)

{
  FUN_14f6f4070();
  return;
}

// ASN1_item_ndef_i2d @ 14f6f3d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_item_ndef_i2d(void)

{
  FUN_14f6f4070();
  return;
}

// FUN_14f6f3da0 @ 14f6f3da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6f3da0(longlong *param_1,void *param_2,undefined4 *param_3,char *param_4)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *_Src;
  void **ppvVar7;
  void *local_res10 [2];
  undefined1 local_res20 [8];
  
  local_res10[0] = param_2;
  if ((*(longlong *)(param_4 + 0x18) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(param_4 + 0x18) + 0x30), pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (((*param_4 != '\0') || (*(int *)(param_4 + 4) != 1)) && (*param_1 == 0)) {
    return 0xffffffff;
  }
  if (*param_4 == '\x05') {
    uVar5 = *(undefined4 *)(*param_1 + 4);
    *param_3 = uVar5;
  }
  else if (*(int *)(param_4 + 4) == -4) {
    uVar5 = *(undefined4 *)*param_1;
    param_1 = (longlong *)((undefined4 *)*param_1 + 2);
    *param_3 = uVar5;
  }
  else {
    uVar5 = *param_3;
  }
  switch(uVar5) {
  case 1:
    iVar1 = (int)*param_1;
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    if (*(int *)(param_4 + 4) != -4) {
      if (iVar1 == 0) {
        if (*(int *)(param_4 + 0x20) == 0) {
          return 0xffffffff;
        }
      }
      else if (0 < *(int *)(param_4 + 0x20)) {
        return 0xffffffff;
      }
    }
    local_res20[0] = (undefined1)iVar1;
    _Src = local_res20;
    uVar6 = 1;
    break;
  case 2:
  case 10:
    ppvVar7 = local_res10;
    if (param_2 == (void *)0x0) {
      ppvVar7 = (void **)0x0;
    }
    uVar4 = i2c_ASN1_INTEGER(*param_1,ppvVar7);
    return uVar4;
  case 3:
    ppvVar7 = local_res10;
    if (param_2 == (void *)0x0) {
      ppvVar7 = (void **)0x0;
    }
    uVar4 = i2c_ASN1_BIT_STRING(*param_1,ppvVar7);
    return uVar4;
  default:
    puVar3 = (uint *)*param_1;
    if ((*(int *)(param_4 + 0x20) == 0x800) && ((puVar3[4] & 0x10) != 0)) {
      if (param_2 != (void *)0x0) {
        *(void **)(puVar3 + 2) = param_2;
        *puVar3 = 0;
      }
      return 0xfffffffe;
    }
    _Src = *(undefined1 **)(puVar3 + 2);
    uVar6 = *puVar3;
    break;
  case 5:
    _Src = (undefined1 *)0x0;
    uVar6 = 0;
    break;
  case 6:
    _Src = *(undefined1 **)(*param_1 + 0x18);
    uVar6 = *(uint *)(*param_1 + 0x14);
    if (_Src == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    if (uVar6 == 0) {
      return 0xffffffff;
    }
  }
  if ((param_2 != (void *)0x0) && (uVar6 != 0)) {
    memcpy(param_2,_Src,(longlong)(int)uVar6);
  }
  return (ulonglong)uVar6;
}

// FUN_14f6f3f70 @ 14f6f3f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6f3f70(undefined8 param_1,longlong *param_2,longlong param_3,int param_4,
                       undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int local_res18 [4];
  undefined8 uVar5;
  
  uVar5 = 0x14f6f3f8c;
  local_res18[0] = *(int *)(param_3 + 4);
  iVar4 = 0;
  uVar2 = FUN_14f6f3da0(param_1,0,local_res18,param_3);
  uVar3 = (ulonglong)uVar2;
  if ((local_res18[0] - 0x10U < 2) || (local_res18[0] == -3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (uVar2 == 0xffffffff) {
    uVar3 = 0;
  }
  else {
    if (uVar2 == 0xfffffffe) {
      uVar3 = 0;
      iVar4 = 2;
    }
    if (param_4 == -1) {
      param_4 = local_res18[0];
    }
    if (param_2 != (longlong *)0x0) {
      if (bVar1) {
        ASN1_put_object(param_2,iVar4,uVar3,param_4,param_5,uVar5);
      }
      FUN_14f6f3da0(param_1,*param_2,local_res18,param_3);
      if (iVar4 == 0) {
        *param_2 = *param_2 + (longlong)(int)uVar3;
      }
      else {
        ASN1_put_eoc(param_2);
      }
    }
    if (bVar1) {
      uVar3 = ASN1_object_size(iVar4,uVar3,param_4);
    }
  }
  return uVar3;
}

// FUN_14f6f4070 @ 14f6f4070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6f4070(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x14f6f4082;
  local_res8 = param_1;
  if ((param_2 != (longlong *)0x0) && (*param_2 == 0)) {
    uVar1 = ASN1_item_ex_i2d(&local_res8,0,param_3,0xffffffff,param_4,0x14f6f4082);
    if ((int)uVar1 < 1) {
      return (ulonglong)uVar1;
    }
    lVar2 = CRYPTO_malloc((longlong)(int)uVar1,"crypto\\asn1\\tasn_enc.c",0x40);
    if (lVar2 == 0) {
      ERR_put_error(0xd,0x76,0x41,"crypto\\asn1\\tasn_enc.c",0x41);
      uVar3 = 0xffffffff;
    }
    else {
      local_res10 = lVar2;
      ASN1_item_ex_i2d(&local_res8,&local_res10,param_3,0xffffffff,param_4,uVar4);
      uVar3 = (ulonglong)uVar1;
      *param_2 = lVar2;
    }
    return uVar3;
  }
  uVar3 = ASN1_item_ex_i2d(&local_res8,param_2,param_3,0xffffffff,param_4,0x14f6f4082);
  return uVar3;
}

// FUN_14f6f4170 @ 14f6f4170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6f4170(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4,int param_5,
             undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Base;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f6f4181;
  iVar6 = 0;
  local_48 = (void *)0x0;
  if ((param_5 != 0) && (iVar1 = OPENSSL_sk_num(), 1 < iVar1)) {
    iVar1 = OPENSSL_sk_num(param_1);
    _Base = (void *)CRYPTO_malloc((longlong)iVar1 * 0x18,"crypto\\asn1\\tasn_enc.c",400);
    uVar5 = 0;
    if (_Base != (void *)0x0) {
      pvVar4 = (void *)CRYPTO_malloc((longlong)param_3,"crypto\\asn1\\tasn_enc.c",0x193);
      local_38 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        CRYPTO_free(_Base,"crypto\\asn1\\tasn_enc.c",0x195);
        uVar5 = 0;
      }
      else {
        local_48 = pvVar4;
        iVar1 = OPENSSL_sk_num(param_1);
        if (0 < iVar1) {
          puVar8 = (undefined8 *)((longlong)_Base + 0x10);
          iVar1 = iVar6;
          do {
            local_40 = OPENSSL_sk_value(param_1,iVar1);
            puVar8[-2] = local_48;
            uVar2 = ASN1_item_ex_i2d(&local_40,&local_48,param_4,0xffffffff,param_6);
            *(undefined4 *)(puVar8 + -1) = uVar2;
            *puVar8 = local_40;
            iVar1 = iVar1 + 1;
            iVar3 = OPENSSL_sk_num(param_1);
            puVar8 = puVar8 + 3;
            pvVar4 = local_38;
          } while (iVar1 < iVar3);
        }
        iVar1 = OPENSSL_sk_num(param_1);
        qsort(_Base,(longlong)iVar1,0x18,FUN_14f6f4750);
        local_48 = (void *)*param_2;
        iVar1 = OPENSSL_sk_num(param_1);
        if (0 < iVar1) {
          piVar7 = (int *)((longlong)_Base + 8);
          iVar1 = iVar6;
          do {
            memcpy(local_48,*(void **)(piVar7 + -2),(longlong)*piVar7);
            iVar3 = *piVar7;
            piVar7 = piVar7 + 6;
            local_48 = (void *)((longlong)local_48 + (longlong)iVar3);
            iVar1 = iVar1 + 1;
            iVar3 = OPENSSL_sk_num(param_1);
          } while (iVar1 < iVar3);
        }
        *param_2 = (longlong)local_48;
        if ((param_5 == 2) && (iVar1 = OPENSSL_sk_num(param_1), 0 < iVar1)) {
          puVar8 = (undefined8 *)((longlong)_Base + 0x10);
          do {
            OPENSSL_sk_set(param_1,iVar6,*puVar8);
            puVar8 = puVar8 + 3;
            iVar6 = iVar6 + 1;
            iVar1 = OPENSSL_sk_num(param_1);
          } while (iVar6 < iVar1);
        }
        CRYPTO_free(_Base,"crypto\\asn1\\tasn_enc.c",0x1ba);
        CRYPTO_free(pvVar4,"crypto\\asn1\\tasn_enc.c",0x1bb);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  iVar1 = OPENSSL_sk_num(param_1);
  if (0 < iVar1) {
    do {
      local_40 = OPENSSL_sk_value(param_1,iVar6);
      ASN1_item_ex_i2d(&local_40,param_2,param_4,0xffffffff,param_6);
      iVar6 = iVar6 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar6 < iVar1);
  }
  return 1;
}

// FUN_14f6f4420 @ 14f6f4420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14f6f4420(longlong *******param_1,longlong param_2,uint *param_3,uint param_4,
                       uint param_5)

{
  longlong ******pppppplVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *******ppppppplVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  uint local_54;
  uint local_50;
  longlong *******local_38;
  undefined8 local_30;
  
  local_30 = 0x14f6f4441;
  uVar12 = *param_3;
  if ((uVar12 & 0x1000) != 0) {
    local_38 = param_1;
  }
  ppppppplVar10 = (longlong *******)&local_38;
  if ((uVar12 & 0x1000) == 0) {
    ppppppplVar10 = param_1;
  }
  iVar9 = 0;
  uVar11 = 0;
  if ((uVar12 & 0x18) == 0) {
    if (param_4 == 0xffffffff) {
      param_4 = 0xffffffff;
    }
    else {
      uVar11 = param_5 & 0xc0;
    }
  }
  else {
    if (param_4 != 0xffffffff) {
      return 0xffffffff;
    }
    param_4 = param_3[1];
    uVar11 = uVar12 & 0xc0;
  }
  param_5 = param_5 & 0xffffff3f;
  bVar14 = ((uVar12 & param_5) >> 0xb & 1) != 0;
  cVar13 = bVar14 + '\x01';
  if ((uVar12 & 6) == 0) {
    if ((uVar12 & 0x10) == 0) {
      uVar5 = (**(code **)(param_3 + 6))();
      uVar6 = ASN1_item_ex_i2d(ppppppplVar10,param_2,uVar5,param_4,uVar11 | param_5);
      return uVar6;
    }
    uVar5 = (**(code **)(param_3 + 6))();
    iVar9 = ASN1_item_ex_i2d(ppppppplVar10,0,uVar5,0xffffffff,param_5);
    if (iVar9 != 0) {
      uVar12 = ASN1_object_size(cVar13,iVar9,param_4);
      uVar6 = (ulonglong)uVar12;
      if (param_2 == 0) {
        return uVar6;
      }
      if (uVar12 != 0xffffffff) {
        ASN1_put_object(param_2,cVar13,iVar9,param_4,uVar11);
        uVar5 = (**(code **)(param_3 + 6))();
        ASN1_item_ex_i2d(ppppppplVar10,param_2,uVar5,0xffffffff,param_5);
        if (bVar14) {
          ASN1_put_eoc(param_2);
          return uVar6;
        }
        return uVar6;
      }
      return 0xffffffff;
    }
  }
  else {
    pppppplVar1 = *ppppppplVar10;
    if (pppppplVar1 != (longlong ******)0x0) {
      if ((uVar12 & 2) == 0) {
        cVar7 = '\0';
      }
      else {
        cVar7 = ((uVar12 & 4) != 0) + '\x01';
      }
      if ((param_4 == 0xffffffff) || (local_54 = param_4, local_50 = uVar11, (uVar12 & 0x10) != 0))
      {
        local_50 = 0;
        local_54 = (cVar7 != '\0') + 0x10;
      }
      iVar2 = OPENSSL_sk_num(pppppplVar1);
      iVar8 = iVar9;
      if (0 < iVar2) {
        do {
          local_30 = OPENSSL_sk_value(pppppplVar1,iVar9);
          uVar5 = (**(code **)(param_3 + 6))();
          iVar2 = ASN1_item_ex_i2d(&local_30,0,uVar5,0xffffffff,param_5);
          if (iVar2 == -1) {
            return 0xffffffff;
          }
          if (0x7fffffff - iVar2 < iVar8) {
            return 0xffffffff;
          }
          iVar8 = iVar8 + iVar2;
          iVar9 = iVar9 + 1;
          iVar2 = OPENSSL_sk_num(pppppplVar1);
        } while (iVar9 < iVar2);
      }
      uVar3 = ASN1_object_size(cVar13,iVar8,local_54);
      if (uVar3 == 0xffffffff) {
        return 0xffffffff;
      }
      uVar12 = uVar12 & 0x10;
      uVar4 = uVar3;
      if (uVar12 != 0) {
        uVar4 = ASN1_object_size(cVar13,uVar3,param_4);
      }
      uVar6 = (ulonglong)uVar4;
      if (param_2 != 0) {
        if (uVar4 == 0xffffffff) {
          return 0xffffffff;
        }
        if (uVar12 != 0) {
          ASN1_put_object(param_2,cVar13,uVar3,param_4,uVar11);
        }
        ASN1_put_object(param_2,cVar13,iVar8,local_54,local_50);
        uVar5 = (**(code **)(param_3 + 6))();
        FUN_14f6f4170(pppppplVar1,param_2,iVar8,uVar5,cVar7,param_5);
        if (bVar14) {
          ASN1_put_eoc(param_2);
          if (uVar12 != 0) {
            ASN1_put_eoc(param_2);
            return uVar6;
          }
          return uVar6;
        }
        return uVar6;
      }
      return uVar6;
    }
  }
  return 0;
}

// FUN_14f6f4750 @ 14f6f4750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6f4750(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  iVar3 = memcmp((void *)*param_1,(void *)*param_2,(longlong)iVar3);
  if (iVar3 == 0) {
    iVar3 = iVar1 - iVar2;
  }
  return iVar3;
}

// FUN_14f6f47a0 @ 14f6f47a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f47a0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6f47c0 @ 14f6f47c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f47c0(void)

{
  OPENSSL_sk_set();
  return;
}

// FUN_14f6f47e0 @ 14f6f47e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f47e0(void)

{
  OPENSSL_sk_value();
  return;
}

