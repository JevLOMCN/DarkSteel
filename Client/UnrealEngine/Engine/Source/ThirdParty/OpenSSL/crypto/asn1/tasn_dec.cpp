// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 16

// ASN1_item_d2i @ 14f6f1a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
ASN1_item_d2i(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x14f6f1a7d;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_60 = local_40;
  local_58 = 0;
  local_68 = 0;
  puVar3 = &local_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = param_1;
  }
  local_70 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_78 = 0xffffffff;
  iVar1 = FUN_14f6f2a30(puVar3,param_2,param_3,param_4);
  if (iVar1 < 1) {
    ASN1_item_ex_free(puVar3,param_4);
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar3;
  }
  return uVar2;
}

// ASN1_item_ex_d2i @ 14f6f1b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ASN1_item_ex_d2i(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                          undefined8 param_4)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14f6f2a30();
  if ((int)uVar1 < 1) {
    ASN1_item_ex_free(param_1,param_4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

// ASN1_tag2bit @ 14f6f1ba0

undefined4 ASN1_tag2bit(uint param_1)

{
  if (param_1 < 0x1f) {
    return *(undefined4 *)(&DAT_1534b0ed0 + (longlong)(int)param_1 * 4);
  }
  return 0;
}

// FUN_14f6f1bf0 @ 14f6f1bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6f1bf0(int *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
             longlong *param_6,int param_7,int param_8,int param_9,char param_10,char *param_11)

{
  longlong *plVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  int local_38 [2];
  longlong local_30;
  
  pcVar3 = param_11;
  iVar2 = param_7;
  plVar1 = param_6;
  local_30 = *param_6;
  iVar8 = (int)local_30;
  if ((param_11 == (char *)0x0) || (*param_11 == '\0')) {
    uVar4 = ASN1_get_object(&local_30,&param_6,local_38,&param_11,param_7);
    if (pcVar3 != (char *)0x0) {
      *(uint *)(pcVar3 + 4) = uVar4;
      iVar5 = (int)local_30 - iVar8;
      *(int *)(pcVar3 + 8) = (int)param_6;
      *(int *)(pcVar3 + 0x10) = (int)param_11;
      *(int *)(pcVar3 + 0xc) = local_38[0];
      *(int *)(pcVar3 + 0x14) = iVar5;
      *pcVar3 = '\x01';
      if (((uVar4 & 0x81) == 0) && (iVar2 < iVar5 + (int)param_6)) {
        ERR_put_error(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x469);
        *pcVar3 = '\0';
        return 0;
      }
    }
  }
  else {
    param_6._0_4_ = *(int *)(param_11 + 8);
    local_30 = local_30 + *(int *)(param_11 + 0x14);
    local_38[0] = *(int *)(param_11 + 0xc);
    uVar4 = *(uint *)(param_11 + 4);
    param_11._0_4_ = *(int *)(param_11 + 0x10);
  }
  bVar7 = (byte)uVar4;
  if ((char)bVar7 < '\0') {
    ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
    }
    uVar6 = 0;
  }
  else {
    if (-1 < param_8) {
      if ((param_8 != local_38[0]) || (param_9 != (int)param_11)) {
        if (param_10 != '\0') {
          return 0xffffffff;
        }
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
        ERR_put_error(0xd,0x68,0xa8,"crypto\\asn1\\tasn_dec.c",0x47d);
        return 0;
      }
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
      }
    }
    if ((uVar4 & 1) != 0) {
      param_6._0_4_ = (iVar8 - (int)local_30) + iVar2;
    }
    if (param_4 != (byte *)0x0) {
      *param_4 = bVar7 & 1;
    }
    if (param_5 != (byte *)0x0) {
      *param_5 = bVar7 & 0x20;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = (int)param_6;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = (char)(int)param_11;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_38[0];
    }
    *plVar1 = local_30;
    uVar6 = 1;
  }
  return uVar6;
}

// FUN_14f6f1e20 @ 14f6f1e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f6f1e20(int *param_1,longlong *param_2,uint param_3,byte param_4,int param_5,int param_6,
             int param_7)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_34;
  int local_30;
  int local_2c;
  char *local_28;
  char *local_20;
  
  pcVar8 = (char *)*param_2;
  param_4 = param_4 & 1;
  uVar6 = (ulonglong)(int)param_3;
  if ((param_1 == (int *)0x0) && (param_4 == 0)) {
    *param_2 = (longlong)(pcVar8 + uVar6);
    return 1;
  }
  do {
    local_28 = pcVar8;
    if ((int)param_3 < 1) {
      if (param_4 == 0) {
LAB_14f6f20e2:
        *param_2 = (longlong)pcVar8;
        uVar9 = 1;
      }
      else {
        ERR_put_error(0xd,0x6a,0x89,"crypto\\asn1\\tasn_dec.c",0x41d);
LAB_14f6f2007:
        uVar9 = 0;
      }
      return uVar9;
    }
    iVar5 = (int)uVar6;
    if (((1 < iVar5) && (*pcVar8 == '\0')) && (pcVar8[1] == '\0')) {
      pcVar8 = pcVar8 + 2;
      if (param_4 == 0) {
        local_28 = pcVar8;
        ERR_put_error(0xd,0x6a,0x9f,"crypto\\asn1\\tasn_dec.c",0x403);
        return 0;
      }
      goto LAB_14f6f20e2;
    }
    local_20 = pcVar8;
    bVar2 = ASN1_get_object(&local_20,&local_34,&local_30,&local_2c,iVar5);
    if ((char)bVar2 < '\0') {
      uVar9 = 0x471;
      uVar7 = 0x66;
LAB_14f6f20a2:
      ERR_put_error(0xd,0x68,uVar7,"crypto\\asn1\\tasn_dec.c",uVar9);
      ERR_put_error(0xd,0x6a,0x3a,"crypto\\asn1\\tasn_dec.c",0x40c);
      return 0;
    }
    if ((-1 < param_5) && ((param_5 != local_30 || (param_6 != local_2c)))) {
      uVar9 = 0x47d;
      uVar7 = 0xa8;
      goto LAB_14f6f20a2;
    }
    if ((bVar2 & 1) != 0) {
      local_34 = ((int)pcVar8 - (int)local_20) + iVar5;
    }
    iVar3 = local_34;
    local_28 = local_20;
    if ((bVar2 & 0x20) == 0) {
      if (local_34 != 0) {
        if (param_1 != (int *)0x0) {
          iVar1 = *param_1;
          lVar4 = BUF_MEM_grow_clean(param_1,(longlong)(local_34 + iVar1));
          if (lVar4 == 0) {
            ERR_put_error(0xd,0x8c,0x41,"crypto\\asn1\\tasn_dec.c",0x42a);
            return 0;
          }
          memcpy((void *)((longlong)iVar1 + *(longlong *)(param_1 + 2)),local_28,(longlong)iVar3);
        }
        local_28 = local_28 + iVar3;
      }
    }
    else {
      if (4 < param_7) {
        ERR_put_error(0xd,0x6a,0xc5,"crypto\\asn1\\tasn_dec.c",0x413);
        return 0;
      }
      iVar3 = FUN_14f6f1e20(param_1,&local_28,local_34,bVar2 & 1,param_5,param_6,param_7 + 1);
      if (iVar3 == 0) goto LAB_14f6f2007;
    }
    param_3 = iVar5 + ((int)pcVar8 - (int)local_28);
    uVar6 = (ulonglong)param_3;
    pcVar8 = local_28;
  } while( true );
}

// FUN_14f6f2110 @ 14f6f2110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6f2110(longlong param_1,longlong *param_2,int param_3,char *param_4,uint param_5,
             undefined4 param_6,char param_7,char *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong *plVar10;
  char local_78;
  char local_77;
  char local_76 [2];
  int local_74;
  longlong local_70;
  uint local_68 [2];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  uVar6 = 0;
  uVar8 = 0;
  local_78 = '\0';
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uVar7 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    ERR_put_error(0xd,0x6c,0x7d,"crypto\\asn1\\tasn_dec.c",0x2a0);
    return 0;
  }
  if (*param_4 == '\x05') {
    uVar2 = param_5;
    param_5 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(param_4 + 4);
  }
  if (uVar2 == 0xfffffffc) {
    if (-1 < (int)param_5) {
      uVar8 = 0x2ae;
      uVar6 = 0x7f;
      goto LAB_14f6f2360;
    }
    if (param_7 != '\0') {
      uVar8 = 0x2b3;
      uVar6 = 0x7e;
      goto LAB_14f6f2360;
    }
    lVar4 = *param_2;
    if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
      local_60 = lVar4;
      uVar2 = ASN1_get_object(&local_60,&local_70,local_68,&local_74,param_3);
      if (param_8 == (char *)0x0) goto LAB_14f6f22b7;
      *(uint *)(param_8 + 4) = uVar2;
      iVar3 = (int)local_60 - (int)lVar4;
      *(int *)(param_8 + 8) = (int)local_70;
      *(int *)(param_8 + 0x10) = local_74;
      *(uint *)(param_8 + 0xc) = local_68[0];
      *(int *)(param_8 + 0x14) = iVar3;
      *param_8 = '\x01';
      if (((uVar2 & 0x81) != 0) || (iVar3 + (int)local_70 <= param_3)) goto LAB_14f6f22b7;
      ERR_put_error(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x469);
      *param_8 = '\0';
      uVar8 = 0x2ba;
    }
    else {
      local_74 = *(int *)(param_8 + 0x10);
      local_68[0] = *(uint *)(param_8 + 0xc);
      uVar2 = *(uint *)(param_8 + 4);
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_8 + 8));
      local_60 = *(int *)(param_8 + 0x14) + lVar4;
LAB_14f6f22b7:
      if (-1 < (char)uVar2) {
        uVar2 = local_68[0];
        if ((char)local_74 != '\0') {
          uVar2 = 0xfffffffd;
        }
        goto LAB_14f6f22f7;
      }
      ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
      if (param_8 != (char *)0x0) {
        *param_8 = '\0';
      }
      uVar8 = 0x2ba;
    }
  }
  else {
LAB_14f6f22f7:
    local_70 = *param_2;
    uVar1 = uVar2;
    if (param_5 != 0xffffffff) {
      uVar7 = param_6;
      uVar1 = param_5;
    }
    plVar10 = &local_70;
    pcVar9 = &local_77;
    iVar3 = FUN_14f6f1bf0(&local_74,0,0,local_76,pcVar9,plVar10,param_3,uVar1,uVar7,param_7,param_8)
    ;
    uVar7 = (undefined4)((ulonglong)pcVar9 >> 0x20);
    if (iVar3 != 0) {
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      if (uVar2 - 0x10 < 2) {
        if (uVar2 == 0xfffffffd) goto LAB_14f6f2475;
        if (local_77 == '\0') {
          ERR_put_error(0xd,0x6c,0x9c,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar7,0x2db));
          return 0;
        }
LAB_14f6f247d:
        lVar4 = *param_2;
        if (local_76[0] == '\0') {
          iVar3 = ((int)local_70 - (int)lVar4) + local_74;
          lVar5 = local_70 + local_74;
        }
        else {
          iVar3 = FUN_14f6f28c0(&local_70,local_74);
          if (iVar3 == 0) goto LAB_14f6f2510;
          iVar3 = (int)local_70 - (int)lVar4;
          lVar5 = local_70;
        }
      }
      else {
        if (uVar2 == 0xfffffffd) {
LAB_14f6f2475:
          if (param_8 != (char *)0x0) {
            *param_8 = '\0';
          }
          goto LAB_14f6f247d;
        }
        if (local_77 == '\0') {
          lVar5 = local_70 + local_74;
          lVar4 = local_70;
          iVar3 = local_74;
        }
        else {
          if ((uVar2 < 0xb) && ((0x466U >> (uVar2 & 0x1f) & 1) != 0)) {
            ERR_put_error(0xd,0x6c,0xc3,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar7,0x2ed));
            return 0;
          }
          uVar8 = CONCAT44(uVar7,0xffffffff);
          local_78 = '\x01';
          iVar3 = FUN_14f6f1e20(&local_58,&local_70,local_74,local_76[0],uVar8,
                                (ulonglong)plVar10 & 0xffffffff00000000,0);
          uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
          uVar8 = uVar6;
          if (iVar3 == 0) goto LAB_14f6f2510;
          iVar3 = (int)local_58;
          lVar5 = (longlong)(int)local_58;
          lVar4 = BUF_MEM_grow_clean(&local_58,(longlong)((int)local_58 + 1));
          if (lVar4 == 0) {
            ERR_put_error(0xd,0x6c,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar7,0x2ff));
            goto LAB_14f6f2510;
          }
          *(undefined1 *)(lVar5 + local_50) = 0;
          lVar5 = local_70;
          lVar4 = local_50;
        }
      }
      iVar3 = FUN_14f6f2570(param_1,lVar4,iVar3,uVar2,&local_78,param_4);
      uVar8 = uVar6;
      if (iVar3 != 0) {
        *param_2 = lVar5;
        uVar8 = 1;
      }
LAB_14f6f2510:
      if (local_78 == '\0') {
        return uVar8;
      }
      CRYPTO_free(local_50,"crypto\\asn1\\tasn_dec.c",0x313);
      return uVar8;
    }
    uVar8 = CONCAT44(uVar7,0x2c9);
  }
  uVar6 = 0x3a;
LAB_14f6f2360:
  ERR_put_error(0xd,0x6c,uVar6,"crypto\\asn1\\tasn_dec.c",uVar8);
  return 0;
}

// FUN_14f6f2570 @ 14f6f2570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 *
FUN_14f6f2570(uint *param_1,byte *param_2,uint param_3,uint param_4,char *param_5,longlong param_6)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte *local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar10 = 0x14f6f258c;
  puVar8 = (uint *)0x0;
  local_res10 = param_2;
  if ((*(longlong *)(param_6 + 0x18) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_6 + 0x18) + 0x28), pcVar1 != (code *)0x0)) {
    puVar3 = (undefined1 *)(*pcVar1)();
    return puVar3;
  }
  puVar7 = param_1;
  puVar4 = puVar8;
  if (*(int *)(param_6 + 4) == -4) {
    puVar4 = *(uint **)param_1;
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)ASN1_TYPE_new();
      if (puVar4 == (uint *)0x0) goto LAB_14f6f286d;
      *(uint **)param_1 = puVar4;
    }
    if (param_4 != *puVar4) {
      ASN1_TYPE_set(puVar4,param_4,0);
    }
    puVar7 = puVar4 + 2;
    puVar8 = param_1;
  }
  switch(param_4) {
  case 1:
    if (param_3 == 1) {
      *puVar7 = (uint)*local_res10;
      break;
    }
    ERR_put_error(0xd,0xcc,0x6a,"crypto\\asn1\\tasn_dec.c",0x345,uVar10);
    goto LAB_14f6f286d;
  case 2:
  case 10:
    lVar5 = c2i_ASN1_INTEGER(puVar7,&local_res10,param_3);
    if (lVar5 == 0) goto LAB_14f6f286d;
    *(uint *)(*(longlong *)puVar7 + 4) = *(uint *)(*(longlong *)puVar7 + 4) & 0x100 | param_4;
    break;
  case 3:
    lVar5 = c2i_ASN1_BIT_STRING(puVar7,&local_res10,param_3);
    goto LAB_14f6f2662;
  default:
    if (param_4 == 0x1e) {
      if ((param_3 & 1) != 0) {
        ERR_put_error(0xd,0xcc,0xd6,"crypto\\asn1\\tasn_dec.c",0x36f,uVar10);
        goto LAB_14f6f286d;
      }
    }
    else if ((param_4 == 0x1c) && ((param_3 & 3) != 0)) {
      ERR_put_error(0xd,0xcc,0xd7,"crypto\\asn1\\tasn_dec.c",0x374,uVar10);
      goto LAB_14f6f286d;
    }
    puVar6 = *(uint **)puVar7;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)ASN1_STRING_type_new(param_4);
      if (puVar6 == (uint *)0x0) {
        ERR_put_error(0xd,0xcc,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar9,0x37b));
        goto LAB_14f6f286d;
      }
      *(uint **)puVar7 = puVar6;
    }
    else {
      puVar6[1] = param_4;
    }
    if (*param_5 == '\0') {
      iVar2 = ASN1_STRING_set(puVar6,local_res10,param_3);
      if (iVar2 == 0) {
        ERR_put_error(0xd,0xcc,0x41,"crypto\\asn1\\tasn_dec.c",CONCAT44(uVar9,0x38b));
        ASN1_STRING_free(puVar6);
        puVar7[0] = 0;
        puVar7[1] = 0;
        goto LAB_14f6f286d;
      }
    }
    else {
      CRYPTO_free(*(undefined8 *)(puVar6 + 2),"crypto\\asn1\\tasn_dec.c",0x385);
      *(byte **)(puVar6 + 2) = local_res10;
      *puVar6 = param_3;
      *param_5 = '\0';
    }
    break;
  case 5:
    if (param_3 != 0) {
      ERR_put_error(0xd,0xcc,0x90,"crypto\\asn1\\tasn_dec.c",0x33d,uVar10);
      goto LAB_14f6f286d;
    }
    puVar7[0] = 1;
    puVar7[1] = 0;
    break;
  case 6:
    lVar5 = c2i_ASN1_OBJECT(puVar7,&local_res10,param_3);
LAB_14f6f2662:
    if (lVar5 == 0) {
LAB_14f6f286d:
      ASN1_TYPE_free(puVar4);
      if (puVar8 != (uint *)0x0) {
        puVar8[0] = 0;
        puVar8[1] = 0;
      }
      return (undefined1 *)0x0;
    }
  }
  if ((puVar4 != (uint *)0x0) && (param_4 == 5)) {
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  return &DAT_00000001;
}

// FUN_14f6f28c0 @ 14f6f28c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6f28c0(longlong *param_1,int param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int local_res8 [6];
  undefined1 local_res20 [8];
  undefined4 uVar9;
  undefined1 local_38 [8];
  char *local_30;
  
  pcVar3 = (char *)*param_1;
  uVar7 = (ulonglong)param_2;
  if (param_3 == '\0') {
    *param_1 = (longlong)(pcVar3 + uVar7);
    return 1;
  }
  iVar4 = 1;
  if (0 < param_2) {
    do {
      iVar5 = (int)uVar7;
      if (((iVar5 < 2) || (*pcVar3 != '\0')) || (pcVar3[1] != '\0')) {
        local_30 = pcVar3;
        bVar1 = ASN1_get_object(&local_30,local_res8,local_38,local_res20,iVar5);
        if ((char)bVar1 < '\0') {
          ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
          uVar8 = 0x3a;
          uVar9 = 0x3c5;
          goto LAB_14f6f29f1;
        }
        iVar2 = (int)pcVar3;
        if ((bVar1 & 1) != 0) {
          local_res8[0] = (iVar2 - (int)local_30) + iVar5;
        }
        if ((bVar1 & 1) == 0) {
          pcVar3 = local_30 + local_res8[0];
        }
        else {
          if (iVar4 == -1) {
            uVar9 = 0x3ca;
            uVar8 = 0x3a;
            goto LAB_14f6f29f1;
          }
          iVar4 = iVar4 + 1;
          pcVar3 = local_30;
        }
        uVar6 = iVar5 + (iVar2 - (int)pcVar3);
      }
      else {
        pcVar3 = pcVar3 + 2;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_14f6f2999;
        uVar6 = iVar5 - 2;
      }
      uVar7 = (ulonglong)uVar6;
    } while (0 < (int)uVar6);
    if (iVar4 == 0) {
LAB_14f6f2999:
      *param_1 = (longlong)pcVar3;
      return 1;
    }
  }
  uVar9 = 0x3d4;
  uVar8 = 0x89;
LAB_14f6f29f1:
  ERR_put_error(0xd,0xbe,uVar8,"crypto\\asn1\\tasn_dec.c",uVar9);
  return 0;
}

// FUN_14f6f2a30 @ 14f6f2a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6f2a30(longlong *param_1,longlong *param_2,ulonglong param_3,undefined1 *param_4,int param_5,
             uint param_6,char param_7,char *param_8,int param_9)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  char *pcVar14;
  code *pcVar15;
  longlong lVar16;
  bool bVar17;
  undefined4 local_res8 [2];
  longlong *local_res10;
  int local_res18 [2];
  uint local_res20 [2];
  undefined8 uVar18;
  ulonglong in_stack_ffffffffffffff50;
  uint in_stack_ffffffffffffff58;
  char local_78 [8];
  char *local_70;
  code *local_68;
  longlong local_60;
  char *local_58;
  
  iVar6 = (int)param_3;
  lVar16 = *(longlong *)(param_4 + 0x18);
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  iVar11 = 0;
  if ((lVar16 == 0) || (local_68 = *(code **)(lVar16 + 0x18), local_68 == (code *)0x0)) {
    local_68 = (code *)0x0;
  }
  pcVar15 = local_68;
  param_9 = param_9 + 1;
  local_res10 = param_2;
  local_res18[0] = iVar6;
  if (param_9 < 0x1f) {
    uVar10 = 0;
    switch(*param_4) {
    case 0:
      if (*(longlong *)(param_4 + 8) == 0) {
        uVar7 = FUN_14f6f2110(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar7;
      }
      if ((param_5 == -1) && (param_7 == '\0')) {
        uVar7 = FUN_14f6f32b0(param_1);
        return uVar7;
      }
      uVar7 = 0xaf;
      uVar12 = 0xaa;
      break;
    case 1:
    case 6:
      local_70 = (char *)*param_2;
      if (param_5 != -1) {
        uVar10 = param_6;
      }
      iVar5 = 0x10;
      if (param_5 != -1) {
        iVar5 = param_5;
      }
      iVar5 = FUN_14f6f1bf0(local_res18,0,0,local_res8,local_78,&local_70,iVar6,iVar5,uVar10,param_7
                            ,param_8);
      pcVar13 = local_70;
      if (iVar5 == 0) {
        uVar7 = 0x135;
        uVar12 = 0x3a;
      }
      else {
        if (iVar5 == -1) {
          return 0xffffffff;
        }
        if ((lVar16 == 0) || ((*(byte *)(lVar16 + 8) & 4) == 0)) {
          local_res20[0] = CONCAT31(local_res20[0]._1_3_,(char)local_res8[0]);
          iVar6 = local_res18[0];
        }
        else {
          local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
          iVar6 = (iVar6 - (int)local_70) + (int)*local_res10;
        }
        if (local_78[0] == '\0') {
          uVar7 = 0x141;
          uVar12 = 0x95;
        }
        else if ((*param_1 == 0) && (iVar5 = ASN1_item_ex_new(param_1,param_4), iVar5 == 0)) {
          uVar7 = 0x146;
          uVar12 = 0x3a;
        }
        else {
          if ((pcVar15 != (code *)0x0) && (iVar5 = (*pcVar15)(4,param_1,param_4), iVar5 == 0))
          goto LAB_14f6f3226;
          puVar9 = *(uint **)(param_4 + 8);
          iVar5 = iVar11;
          if (0 < *(int *)(param_4 + 0x10)) {
            do {
              if (((*puVar9 & 0x300) != 0) &&
                 (local_60 = asn1_do_adb(param_1,puVar9,0), local_60 != 0)) {
                uVar7 = asn1_get_field_ptr(param_1,local_60);
                asn1_template_free(uVar7,local_60);
              }
              iVar5 = iVar5 + 1;
              puVar9 = puVar9 + 8;
            } while (iVar5 < *(int *)(param_4 + 0x10));
          }
          lVar16 = *(longlong *)(param_4 + 8);
          pcVar14 = pcVar13;
          if (0 < *(int *)(param_4 + 0x10)) {
            do {
              pbVar8 = (byte *)asn1_do_adb(param_1,lVar16,1);
              if (pbVar8 == (byte *)0x0) goto LAB_14f6f3248;
              local_60 = asn1_get_field_ptr(param_1,pbVar8);
              pcVar14 = pcVar13;
              if (iVar6 == 0) break;
              local_58 = pcVar13;
              if (((1 < iVar6) && (*pcVar13 == '\0')) && (pcVar13[1] == '\0')) {
                pcVar14 = pcVar13 + 2;
                if ((char)local_res8[0] == '\0') {
                  uVar7 = 0x168;
                  uVar12 = 0x9f;
                  goto LAB_14f6f3234;
                }
                iVar6 = iVar6 + ((int)pcVar13 - (int)pcVar14);
                goto LAB_14f6f30eb;
              }
              if (iVar11 == *(int *)(param_4 + 0x10) + -1) {
                bVar3 = 0;
              }
              else {
                bVar3 = *pbVar8 & 1;
              }
              iVar5 = FUN_14f6f32b0(local_60,&local_70,iVar6,pbVar8,bVar3,param_8,param_9);
              pcVar13 = local_70;
              if (iVar5 == 0) goto LAB_14f6f31fa;
              if (iVar5 == -1) {
                asn1_template_free(local_60,pbVar8);
              }
              else {
                iVar6 = iVar6 + ((int)local_58 - (int)local_70);
              }
              iVar11 = iVar11 + 1;
              lVar16 = lVar16 + 0x20;
              pcVar14 = pcVar13;
            } while (iVar11 < *(int *)(param_4 + 0x10));
          }
          if ((char)local_res8[0] != '\0') {
            if (((iVar6 < 2) || (*pcVar14 != '\0')) || (pcVar14[1] != '\0')) {
              uVar7 = 400;
              uVar12 = 0x89;
              break;
            }
            pcVar14 = pcVar14 + 2;
          }
LAB_14f6f30eb:
          if (((char)local_res20[0] != '\0') || (iVar6 == 0)) {
            if (iVar11 < *(int *)(param_4 + 0x10)) {
LAB_14f6f3150:
              pbVar8 = (byte *)asn1_do_adb(param_1,lVar16,1);
              if (pbVar8 != (byte *)0x0) {
                if ((*pbVar8 & 1) != 0) goto code_r0x00014f6f3172;
                uVar18 = 0x1a9;
                uVar7 = 0x79;
LAB_14f6f31e6:
                ERR_put_error(0xd,0x78,uVar7,"crypto\\asn1\\tasn_dec.c",uVar18);
LAB_14f6f31fa:
                if (pbVar8 != (byte *)0x0) {
                  ERR_add_error_data(4,"Field=",*(undefined8 *)(pbVar8 + 0x10),", Type=",
                                     *(undefined8 *)(param_4 + 0x28));
                  return 0;
                }
              }
              goto LAB_14f6f3248;
            }
LAB_14f6f3193:
            plVar1 = local_res10;
            iVar6 = asn1_enc_save(param_1,*local_res10,(int)pcVar14 - (int)*local_res10,param_4);
            if ((iVar6 != 0) &&
               ((local_68 == (code *)0x0 || (iVar6 = (*local_68)(5,param_1,param_4), iVar6 != 0))))
            {
              *plVar1 = (longlong)pcVar14;
              return 1;
            }
            goto LAB_14f6f3226;
          }
          uVar7 = 0x195;
          uVar12 = 0x94;
        }
      }
      break;
    case 2:
      if (param_5 == -1) {
        if ((local_68 == (code *)0x0) || (iVar6 = (*local_68)(4,param_1,param_4), iVar6 != 0)) {
          if (*param_1 == 0) {
            iVar6 = ASN1_item_ex_new(param_1,param_4);
            if (iVar6 == 0) {
              uVar7 = 0xf9;
              uVar12 = 0x3a;
              break;
            }
          }
          else {
            iVar6 = asn1_get_choice_selector();
            if ((-1 < iVar6) && (iVar6 < *(int *)(param_4 + 0x10))) {
              lVar16 = (longlong)iVar6 * 0x20 + *(longlong *)(param_4 + 8);
              uVar7 = asn1_get_field_ptr(param_1,lVar16);
              asn1_template_free(uVar7,lVar16);
              asn1_set_choice_selector(param_1,0xffffffff,param_4);
            }
          }
          local_70 = (char *)*param_2;
          pbVar8 = *(byte **)(param_4 + 8);
          bVar17 = *(int *)(param_4 + 0x10) == 0;
          if (0 < *(int *)(param_4 + 0x10)) {
            do {
              uVar7 = asn1_get_field_ptr(param_1,pbVar8);
              iVar6 = FUN_14f6f32b0(uVar7,&local_70,param_3 & 0xffffffff,pbVar8,1,param_8,param_9);
              if (iVar6 != -1) {
                if (iVar6 < 1) {
                  asn1_template_free(uVar7,pbVar8);
                  uVar7 = 0x3a;
                  uVar18 = 0x110;
                  goto LAB_14f6f31e6;
                }
                break;
              }
              iVar11 = iVar11 + 1;
              pbVar8 = pbVar8 + 0x20;
            } while (iVar11 < *(int *)(param_4 + 0x10));
            bVar17 = iVar11 == *(int *)(param_4 + 0x10);
            param_2 = local_res10;
            pcVar15 = local_68;
          }
          if (bVar17) {
            if (param_7 != '\0') {
              ASN1_item_ex_free(param_1,param_4);
              return 0xffffffff;
            }
            uVar7 = 0x11c;
            uVar12 = 0x8f;
            break;
          }
          asn1_set_choice_selector(param_1,iVar11,param_4);
          if ((pcVar15 == (code *)0x0) || (iVar6 = (*pcVar15)(5,param_1,param_4), iVar6 != 0)) {
            *param_2 = (longlong)local_70;
            return 1;
          }
        }
LAB_14f6f3226:
        uVar7 = 0x1b9;
        uVar12 = 100;
      }
      else {
        uVar7 = 0xe9;
        uVar12 = 0xe6;
      }
      break;
    default:
      goto LAB_14f6f325f;
    case 4:
      uVar7 = (**(code **)(lVar16 + 0x20))
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar7;
    case 5:
      if (param_5 == -1) {
        pcVar15 = (code *)*param_2;
        if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
          local_68 = pcVar15;
          uVar4 = ASN1_get_object(&local_68,&local_70,local_res20,local_res8,param_3 & 0xffffffff);
          cVar2 = (char)uVar4;
          if (param_8 == (char *)0x0) goto LAB_14f6f2c2c;
          *(uint *)(param_8 + 4) = uVar4;
          iVar11 = (int)local_68 - (int)pcVar15;
          *(int *)(param_8 + 8) = (int)local_70;
          *(undefined4 *)(param_8 + 0x10) = local_res8[0];
          *(uint *)(param_8 + 0xc) = local_res20[0];
          *(int *)(param_8 + 0x14) = iVar11;
          *param_8 = '\x01';
          if (((uVar4 & 0x81) != 0) || (iVar11 + (int)local_70 <= iVar6)) goto LAB_14f6f2c2c;
          ERR_put_error(0xd,0x68,0x9b,"crypto\\asn1\\tasn_dec.c",0x469);
LAB_14f6f2c56:
          *param_8 = '\0';
        }
        else {
          local_res8[0] = *(undefined4 *)(param_8 + 0x10);
          local_res20[0] = *(uint *)(param_8 + 0xc);
          cVar2 = (char)*(undefined4 *)(param_8 + 4);
          local_70 = (char *)CONCAT44(local_70._4_4_,*(undefined4 *)(param_8 + 8));
          local_68 = pcVar15 + *(int *)(param_8 + 0x14);
LAB_14f6f2c2c:
          if (-1 < cVar2) {
            if ((char)local_res8[0] == '\0') {
              if (local_res20[0] < 0x1f) {
                uVar10 = *(uint *)(&DAT_1534b0ed0 + (longlong)(int)local_res20[0] * 4);
              }
              if ((*(uint *)(param_4 + 4) & uVar10) != 0) {
                uVar7 = FUN_14f6f2110(param_1,local_res10,param_3 & 0xffffffff,param_4,
                                      local_res20[0],in_stack_ffffffffffffff50 & 0xffffffff00000000,
                                      in_stack_ffffffffffffff58 & 0xffffff00,param_8);
                return uVar7;
              }
              if (param_7 != '\0') {
                return 0xffffffff;
              }
              uVar7 = 0xd9;
              uVar12 = 0x8c;
            }
            else {
              if (param_7 != '\0') {
                return 0xffffffff;
              }
              uVar7 = 0xd0;
              uVar12 = 0x8b;
            }
            break;
          }
          ERR_put_error(0xd,0x68,0x66,"crypto\\asn1\\tasn_dec.c",0x471);
          if (param_8 != (char *)0x0) goto LAB_14f6f2c56;
        }
        uVar7 = 199;
        uVar12 = 0x3a;
      }
      else {
        uVar7 = 0xbe;
        uVar12 = 0xe6;
      }
    }
  }
  else {
    uVar7 = 0xa0;
    uVar12 = 0xc9;
  }
LAB_14f6f3234:
  ERR_put_error(0xd,0x78,uVar12,"crypto\\asn1\\tasn_dec.c",uVar7);
LAB_14f6f3248:
  ERR_add_error_data(2,"Type=",*(undefined8 *)(param_4 + 0x28));
LAB_14f6f325f:
  return 0;
code_r0x00014f6f3172:
  uVar7 = asn1_get_field_ptr(param_1,pbVar8);
  asn1_template_free(uVar7,pbVar8);
  lVar16 = lVar16 + 0x20;
  iVar11 = iVar11 + 1;
  if (*(int *)(param_4 + 0x10) <= iVar11) goto LAB_14f6f3193;
  goto LAB_14f6f3150;
}

// FUN_14f6f32b0 @ 14f6f32b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6f32b0(longlong param_1,undefined8 *param_2,undefined4 param_3,uint *param_4,
             undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_res8 [8];
  char *pcVar5;
  char local_28 [4];
  int local_24;
  char *local_20;
  
  if (param_1 == 0) {
    return 0;
  }
  local_20 = (char *)*param_2;
  if ((*param_4 & 0x10) == 0) {
    uVar3 = FUN_14f6f34a0(param_1);
    return uVar3;
  }
  pcVar5 = local_res8;
  iVar2 = FUN_14f6f1bf0(&local_24,0,0,local_28,pcVar5,&local_20,param_3,param_4[1],*param_4 & 0xc0,
                        param_5,param_6);
  pcVar1 = local_20;
  if (iVar2 == 0) {
    uVar3 = 0x1e4;
  }
  else {
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    if (local_res8[0] == '\0') {
      uVar3 = 0x1ea;
      uVar4 = 0x78;
      goto LAB_14f6f339c;
    }
    iVar2 = FUN_14f6f34a0(param_1,&local_20,local_24,param_4,(ulonglong)pcVar5 & 0xffffffffffffff00,
                          param_6,param_7);
    if (iVar2 != 0) {
      local_24 = local_24 + ((int)pcVar1 - (int)local_20);
      if (local_28[0] == '\0') {
        if (local_24 == 0) goto LAB_14f6f342c;
        uVar3 = 0x201;
        uVar4 = 0x77;
      }
      else {
        if (((1 < local_24) && (*local_20 == '\0')) && (local_20[1] == '\0')) {
          local_20 = local_20 + 2;
LAB_14f6f342c:
          *param_2 = local_20;
          return 1;
        }
        uVar3 = 0x1f8;
        uVar4 = 0x89;
      }
      goto LAB_14f6f339c;
    }
    uVar3 = 0x1f0;
  }
  uVar4 = 0x3a;
LAB_14f6f339c:
  ERR_put_error(0xd,0x84,uVar4,"crypto\\asn1\\tasn_dec.c",uVar3);
  return 0;
}

// FUN_14f6f34a0 @ 14f6f34a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_14f6f34a0(longlong *******param_1,undefined8 *param_2,uint param_3,uint *param_4,
             undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  char *pcVar2;
  longlong *******ppppppplVar3;
  int iVar4;
  longlong ******pppppplVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *******ppppppplVar9;
  char local_res8 [8];
  undefined8 *local_res10;
  uint local_res18 [2];
  undefined8 in_stack_ffffffffffffff68;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffff70;
  char **ppcVar12;
  char *local_58;
  undefined8 local_50;
  longlong *******local_48 [2];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  if (param_1 == (longlong *******)0x0) {
    return 0;
  }
  uVar1 = *param_4;
  local_58 = (char *)*param_2;
  ppppppplVar9 = (longlong *******)local_48;
  ppppppplVar3 = param_1;
  if ((uVar1 & 0x1000) == 0) {
    ppppppplVar9 = param_1;
    ppppppplVar3 = local_48[0];
  }
  local_48[0] = ppppppplVar3;
  local_res10 = param_2;
  local_res18[0] = param_3;
  if ((uVar1 & 6) == 0) {
    if ((uVar1 & 8) == 0) {
      uVar10 = (**(code **)(param_4 + 6))();
      iVar4 = FUN_14f6f2a30(ppppppplVar9,&local_58,param_3,uVar10,CONCAT44(uVar11,0xffffffff),
                            (ulonglong)uVar8 << 0x20,param_5,param_6,param_7);
      if (iVar4 != 0) goto LAB_14f6f380d;
      uVar6 = 0x286;
    }
    else {
      uVar10 = (**(code **)(param_4 + 6))();
      iVar4 = FUN_14f6f2a30(ppppppplVar9,&local_58,param_3,uVar10,CONCAT44(uVar11,param_4[1]),
                            CONCAT44(uVar8,uVar1) & 0xffffffff000000c0,param_5,param_6,param_7);
      if (iVar4 != 0) {
LAB_14f6f380d:
        if (iVar4 == -1) {
          return 0xffffffff;
        }
LAB_14f6f381b:
        *local_res10 = local_58;
        return 1;
      }
      uVar6 = 0x27d;
    }
    uVar10 = 0x3a;
  }
  else {
    uVar8 = 0;
    if ((uVar1 & 8) == 0) {
      uVar7 = (uVar1 & 2 | 0x20) >> 1;
    }
    else {
      uVar7 = param_4[1];
      uVar8 = uVar1 & 0xc0;
    }
    ppcVar12 = &local_58;
    uVar10 = 0;
    iVar4 = FUN_14f6f1bf0(local_res18,0,0,local_res8,0,ppcVar12,param_3,uVar7,uVar8,param_5,param_6)
    ;
    if (iVar4 == 0) {
      ERR_put_error(0xd,0x83,0x3a,"crypto\\asn1\\tasn_dec.c",0x23c);
      return 0;
    }
    if (iVar4 == -1) {
      return 0xffffffff;
    }
    pppppplVar5 = *ppppppplVar9;
    if (pppppplVar5 == (longlong ******)0x0) {
      pppppplVar5 = (longlong ******)OPENSSL_sk_new_null();
      *ppppppplVar9 = pppppplVar5;
    }
    else {
      iVar4 = OPENSSL_sk_num(pppppplVar5);
      while (0 < iVar4) {
        local_50 = OPENSSL_sk_pop(pppppplVar5);
        uVar6 = (**(code **)(param_4 + 6))();
        ASN1_item_ex_free(&local_50,uVar6);
        iVar4 = OPENSSL_sk_num(pppppplVar5);
      }
    }
    uVar8 = local_res18[0];
    pcVar2 = local_58;
    if (*ppppppplVar9 == (longlong ******)0x0) {
      uVar6 = 0x24f;
      uVar10 = 0x41;
    }
    else {
      while( true ) {
        local_58 = pcVar2;
        if ((int)uVar8 < 1) {
          if (local_res8[0] == '\0') goto LAB_14f6f381b;
          uVar6 = 0x274;
          uVar10 = 0x89;
          goto LAB_14f6f37f5;
        }
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if (((1 < (int)uVar8) && (*pcVar2 == '\0')) && (pcVar2[1] == '\0')) break;
        local_50 = 0;
        uVar6 = (**(code **)(param_4 + 6))();
        param_3 = param_3 & 0xffffff00;
        ppcVar12 = (char **)((ulonglong)ppcVar12 & 0xffffffff00000000);
        uVar10 = CONCAT44(uVar11,0xffffffff);
        iVar4 = FUN_14f6f2a30(&local_50,&local_58,uVar8,uVar6,uVar10,ppcVar12,param_3,param_6,
                              param_7);
        if (iVar4 == 0) {
          ERR_put_error(0xd,0x83,0x3a,"crypto\\asn1\\tasn_dec.c",0x267);
          uVar10 = (**(code **)(param_4 + 6))();
          ASN1_item_free(local_50,uVar10);
          return 0;
        }
        uVar8 = uVar8 + ((int)pcVar2 - (int)local_58);
        iVar4 = OPENSSL_sk_push(*ppppppplVar9,local_50);
        pcVar2 = local_58;
        if (iVar4 == 0) {
          ERR_put_error(0xd,0x83,0x41,"crypto\\asn1\\tasn_dec.c",0x26e);
          uVar10 = (**(code **)(param_4 + 6))();
          ASN1_item_free(local_50,uVar10);
          return 0;
        }
      }
      local_58 = pcVar2 + 2;
      if (local_res8[0] != '\0') goto LAB_14f6f381b;
      uVar6 = CONCAT44(uVar11,0x25b);
      uVar10 = 0x9f;
    }
  }
LAB_14f6f37f5:
  ERR_put_error(0xd,0x83,uVar10,"crypto\\asn1\\tasn_dec.c",uVar6);
  return 0;
}

// FUN_14f6f3860 @ 14f6f3860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6f3860(int *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6f387b;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    lVar2 = BUF_MEM_grow_clean(param_1,(longlong)(iVar1 + param_3));
    if (lVar2 == 0) {
      ERR_put_error(0xd,0x8c,0x41,"crypto\\asn1\\tasn_dec.c",0x42a,uVar3);
      return 0;
    }
    memcpy((void *)((longlong)iVar1 + *(longlong *)(param_1 + 2)),(void *)*param_2,(longlong)param_3
          );
  }
  *param_2 = *param_2 + (longlong)param_3;
  return 1;
}

// FUN_14f6f3900 @ 14f6f3900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f3900(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6f3920 @ 14f6f3920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f3920(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6f3940 @ 14f6f3940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f3940(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f6f3960 @ 14f6f3960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6f3960(void)

{
  OPENSSL_sk_push();
  return;
}

