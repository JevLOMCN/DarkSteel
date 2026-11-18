// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 17

// ASN1_generate_nconf @ 14f778450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_generate_nconf(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int local_res10 [6];
  undefined1 local_48 [56];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f77845c;
  puVar2 = (undefined1 *)0x0;
  if (param_2 != 0) {
    X509V3_set_nconf(local_48);
    puVar2 = local_48;
  }
  local_res10[0] = 0;
  uVar1 = FUN_14f779170(param_1,puVar2,0,local_res10);
  if (local_res10[0] != 0) {
    ERR_put_error(0xd,0xb2,local_res10[0],"crypto\\asn1\\asn1_gen.c",0x5e);
  }
  return uVar1;
}

// ASN1_generate_v3 @ 14f7784e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_generate_v3(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_res18 [4];
  undefined8 uVar2;
  
  uVar2 = 0x14f7784ec;
  local_res18[0] = 0;
  uVar1 = FUN_14f779170(param_1,param_2,0,local_res18);
  if (local_res18[0] != 0) {
    ERR_put_error(0xd,0xb2,local_res18[0],"crypto\\asn1\\asn1_gen.c",0x5e,uVar2);
  }
  return uVar1;
}

// ASN1_str2mask @ 14f778540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_str2mask(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  CONF_parse_list(param_1,0x7c,1,FUN_14f779490,param_2);
  return;
}

// FUN_14f778580 @ 14f778580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f778580(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *param_1;
  if ((iVar1 != -1) && (param_6 == 0)) {
    ERR_put_error(0xd,0xb0,0xb3,"crypto\\asn1\\asn1_gen.c",0x1d8,0x14f77858c);
    return 0;
  }
  iVar2 = param_1[0x6a];
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0x14) {
    ERR_put_error(0xd,0xb0,0xae,"crypto\\asn1\\asn1_gen.c",0x1dd,0x14f77858c);
    return 0;
  }
  param_1[0x6a] = iVar2 + 1;
  if (iVar1 == -1) {
    param_1[lVar3 * 5 + 6] = param_2;
    param_1[lVar3 * 5 + 7] = param_3;
  }
  else {
    param_1[lVar3 * 5 + 6] = iVar1;
    param_1[lVar3 * 5 + 7] = param_1[1];
    param_1[0] = -1;
    param_1[1] = -1;
  }
  param_1[lVar3 * 5 + 9] = param_5;
  param_1[lVar3 * 5 + 8] = param_4;
  return 1;
}

// FUN_14f778660 @ 14f778660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f778660(char *param_1,int param_2,int *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  char *_Str1;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_res8 [2];
  undefined4 local_res18 [4];
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f778676;
  iVar5 = 0;
  _Str1 = (char *)0x0;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  iVar3 = 0;
  pcVar2 = param_1;
  if (0 < param_2) {
    do {
      if (*pcVar2 == ':') {
        _Str1 = pcVar2 + 1;
        iVar5 = ((int)param_1 - (int)_Str1) + param_2;
        param_2 = (int)pcVar2 - (int)param_1;
        break;
      }
      pcVar2 = pcVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  uVar1 = FUN_14f778b40(param_1,param_2);
  if (uVar1 == 0xffffffff) {
    ERR_put_error(0xd,0xb1,0xc2,"crypto\\asn1\\asn1_gen.c",0x10a,uVar7);
    ERR_add_error_data(2,"tag=",param_1);
    return 0xffffffff;
  }
  if ((uVar1 >> 0x10 & 1) == 0) {
    param_3[2] = uVar1;
    *(char **)(param_3 + 4) = _Str1;
    if ((_Str1 == (char *)0x0) && (param_1[param_2] != '\0')) {
      ERR_put_error(0xd,0xb1,0xbd,"crypto\\asn1\\asn1_gen.c",0x115,uVar7);
      return 0xffffffff;
    }
    return 0;
  }
  switch(uVar1) {
  case 0x10001:
    if (*param_3 != -1) {
      ERR_put_error(0xd,0xb1,0xb5,"crypto\\asn1\\asn1_gen.c",0x120,uVar7);
      return 0xffffffff;
    }
    iVar5 = FUN_14f779540(_Str1,iVar5,param_3,param_3 + 1);
    if (iVar5 != 0) {
      return 1;
    }
    return 0xffffffff;
  case 0x10002:
    iVar5 = FUN_14f779540(_Str1,iVar5,local_res18,local_res8);
    if (iVar5 == 0) {
      return 0xffffffff;
    }
    uVar7 = 0;
    break;
  default:
    goto switchD_14f77879b_caseD_10003;
  case 0x10004:
    uVar4 = 0;
    uVar7 = 1;
    uVar6 = 1;
    local_res8[0] = 0;
    local_res18[0] = 3;
    goto LAB_14f77883c;
  case 0x10005:
    uVar4 = 0;
    uVar7 = 1;
    local_res8[0] = 0;
    local_res18[0] = 4;
    goto LAB_14f778837;
  case 0x10006:
    local_res8[0] = 0;
    uVar7 = 1;
    local_res18[0] = 0x10;
    break;
  case 0x10007:
    local_res8[0] = 0;
    uVar7 = 1;
    local_res18[0] = 0x11;
    break;
  case 0x10008:
    if (_Str1 == (char *)0x0) {
      uVar6 = 0x145;
    }
    else {
      iVar5 = strncmp(_Str1,"ASCII",5);
      if (iVar5 == 0) {
        param_3[3] = 1;
        return 1;
      }
      iVar5 = strncmp(_Str1,"UTF8",4);
      if (iVar5 == 0) {
        param_3[3] = 2;
        return 1;
      }
      iVar5 = strncmp(_Str1,"HEX",3);
      if (iVar5 == 0) {
        param_3[3] = 3;
        return 1;
      }
      iVar5 = strncmp(_Str1,"BITLIST",7);
      if (iVar5 == 0) {
        param_3[3] = 4;
        return 1;
      }
      uVar6 = 0x151;
    }
    ERR_put_error(0xd,0xb1,0xa0,"crypto\\asn1\\asn1_gen.c",uVar6,uVar7);
    return 0xffffffff;
  }
  uVar4 = 1;
LAB_14f778837:
  uVar6 = 0;
LAB_14f77883c:
  iVar5 = FUN_14f778580(param_3,local_res18[0],local_res8[0],uVar4,uVar6,uVar7);
  if (iVar5 == 0) {
    return 0xffffffff;
  }
switchD_14f77879b_caseD_10003:
  return 1;
}

// FUN_14f7789c0 @ 14f7789c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_14f7789c0(int param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  int *piVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  int *piVar7;
  
  uStack_30 = 0x14f7789e2;
  piVar7 = (int *)0x0;
  piVar8 = (int *)0x0;
  local_38 = 0;
  lVar2 = OPENSSL_sk_new_null();
  piVar3 = piVar7;
  piVar5 = piVar7;
  if (lVar2 != 0) {
    piVar5 = piVar8;
    if (param_2 != 0) {
      piVar3 = (int *)0x0;
      if ((param_3 == 0) ||
         (piVar3 = (int *)X509V3_get_section(param_3,param_2), piVar3 == (int *)0x0))
      goto LAB_14f778ae1;
      iVar1 = OPENSSL_sk_num(piVar3);
      if (0 < iVar1) {
        do {
          lVar4 = OPENSSL_sk_value(piVar3,piVar7);
          lVar4 = FUN_14f779170(*(undefined8 *)(lVar4 + 0x10),param_3,param_4 + 1,param_5);
          if ((lVar4 == 0) || (iVar1 = OPENSSL_sk_push(lVar2,lVar4), iVar1 == 0))
          goto LAB_14f778ae1;
          uVar6 = (int)piVar7 + 1;
          piVar7 = (int *)(ulonglong)uVar6;
          iVar1 = OPENSSL_sk_num(piVar3);
        } while ((int)uVar6 < iVar1);
      }
    }
    if (param_1 == 0x11) {
      iVar1 = i2d_ASN1_SET_ANY();
    }
    else {
      iVar1 = i2d_ASN1_SEQUENCE_ANY(lVar2,&local_38);
    }
    if ((-1 < iVar1) && (piVar5 = (int *)ASN1_TYPE_new(), piVar5 != (int *)0x0)) {
      lVar4 = ASN1_STRING_type_new(param_1);
      *(longlong *)(piVar5 + 2) = lVar4;
      if (lVar4 != 0) {
        *piVar5 = param_1;
        *(undefined8 *)(lVar4 + 8) = local_38;
        **(int **)(piVar5 + 2) = iVar1;
        local_38 = 0;
      }
    }
  }
LAB_14f778ae1:
  CRYPTO_free(local_38,"crypto\\asn1\\asn1_gen.c",0x1ca);
  OPENSSL_sk_pop_free(lVar2,ASN1_TYPE_free);
  X509V3_section_free(param_3,piVar3);
  return piVar5;
}

// FUN_14f778b40 @ 14f778b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f778b40(char *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = (ulonglong)param_2;
  if (param_2 == 0xffffffff) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (param_1[uVar2] != '\0');
  }
  uVar3 = 0;
  DAT_1553e3020 = &PTR_s_BOOL_1534d98e0;
  do {
    if ((int)uVar2 == *(int *)(DAT_1553e3020 + 1)) {
      iVar1 = strncmp(*DAT_1553e3020,param_1,(longlong)(int)uVar2);
      if (iVar1 == 0) {
        return *(undefined4 *)((longlong)DAT_1553e3020 + 0xc);
      }
    }
    DAT_1553e3020 = DAT_1553e3020 + 2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x31);
  return 0xffffffff;
}

// FUN_14f778be0 @ 14f778be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_14f778be0(char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_res20 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar8;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 uStack_20;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_20 = 0x14f778bf3;
  piVar3 = (int *)ASN1_TYPE_new();
  if (piVar3 == (int *)0x0) {
    ERR_put_error(0xd,0xb3,0x41,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x24b));
    return (int *)0x0;
  }
  pcVar5 = "";
  if (param_1 != (char *)0x0) {
    pcVar5 = param_1;
  }
  switch(param_3) {
  case 1:
    if (param_2 != 1) {
      ERR_put_error(0xd,0xb3,0xbe,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x25d));
      goto LAB_14f77901b;
    }
    local_30 = 0;
    local_38 = 0;
    local_28 = pcVar5;
    iVar2 = X509V3_get_value_bool(&local_38,piVar3 + 2);
    if (iVar2 != 0) goto LAB_14f778f7c;
    uVar8 = 0x264;
    uVar7 = 0xb0;
    break;
  case 2:
  case 10:
    if (param_2 != 1) {
      ERR_put_error(0xd,0xb3,0xb9,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x26c));
      goto LAB_14f77901b;
    }
    lVar4 = s2i_ASN1_INTEGER(0,pcVar5);
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 != 0) goto LAB_14f778f7c;
    uVar8 = 0x271;
    uVar7 = 0xb4;
    break;
  case 3:
  case 4:
    lVar4 = ASN1_STRING_new();
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 == 0) {
      ERR_put_error(0xd,0xb3,0x41,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x2b4));
      goto LAB_14f77901b;
    }
    if (param_2 == 3) {
      lVar4 = OPENSSL_hexstr2buf(pcVar5,local_res20);
      if (lVar4 != 0) {
        *(longlong *)(*(longlong *)(piVar3 + 2) + 8) = lVar4;
        **(undefined4 **)(piVar3 + 2) = local_res20[0];
        *(int *)(*(longlong *)(piVar3 + 2) + 4) = param_3;
LAB_14f778f67:
        if (param_3 == 3) {
          *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) =
               *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) & 0xfffffff0;
          *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) =
               *(uint *)(*(longlong *)(piVar3 + 2) + 0x10) | 8;
        }
LAB_14f778f7c:
        *piVar3 = param_3;
        return piVar3;
      }
      uVar8 = 0x2ba;
      uVar7 = 0xb2;
    }
    else {
      if (param_2 == 1) {
        ASN1_STRING_set(lVar4,pcVar5,0xffffffff);
        goto LAB_14f778f67;
      }
      if ((param_2 != 4) || (param_3 != 3)) {
        ERR_put_error(0xd,0xb3,0xaf,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x2cc));
        goto LAB_14f77901b;
      }
      iVar2 = CONF_parse_list(pcVar5,0x2c,1,FUN_14f779080,lVar4);
      if (iVar2 != 0) goto LAB_14f778f7c;
      uVar8 = 0x2c6;
      uVar7 = 0xbc;
    }
    break;
  case 5:
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      ERR_put_error(0xd,0xb3,0xb6,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x256));
      goto LAB_14f77901b;
    }
    goto LAB_14f778f7c;
  case 6:
    if (param_2 != 1) {
      ERR_put_error(0xd,0xb3,0xbf,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x278));
      goto LAB_14f77901b;
    }
    lVar4 = OBJ_txt2obj(pcVar5,0);
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 != 0) goto LAB_14f778f7c;
    uVar8 = 0x27c;
    uVar7 = 0xb7;
    break;
  default:
    uVar8 = CONCAT44(uVar7,0x2d9);
    uVar7 = 0xc4;
    break;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    if (param_2 == 1) {
      uVar6 = 0x1001;
    }
    else {
      if (param_2 != 2) {
        ERR_put_error(0xd,0xb3,0xb1,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x2a5));
        goto LAB_14f77901b;
      }
      uVar6 = 0x1000;
    }
    uVar1 = ASN1_tag2bit(param_3);
    iVar2 = ASN1_mbstring_copy(piVar3 + 2,pcVar5,0xffffffff,uVar6,CONCAT44(uVar7,uVar1));
    if (0 < iVar2) goto LAB_14f778f7c;
    uVar8 = 0x2ab;
    uVar7 = 0x41;
    break;
  case 0x17:
  case 0x18:
    if (param_2 != 1) {
      ERR_put_error(0xd,0xb3,0xc1,"crypto\\asn1\\asn1_gen.c",CONCAT44(uVar7,0x284));
      goto LAB_14f77901b;
    }
    lVar4 = ASN1_STRING_new();
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 == 0) {
      uVar8 = 0x288;
      uVar7 = 0x41;
    }
    else {
      iVar2 = ASN1_STRING_set(lVar4,pcVar5,0xffffffff);
      if (iVar2 == 0) {
        uVar8 = 0x28c;
        uVar7 = 0x41;
      }
      else {
        *(int *)(*(longlong *)(piVar3 + 2) + 4) = param_3;
        iVar2 = ASN1_TIME_check(*(undefined8 *)(piVar3 + 2));
        if (iVar2 != 0) goto LAB_14f778f7c;
        uVar8 = 0x291;
        uVar7 = 0xb8;
      }
    }
  }
  ERR_put_error(0xd,0xb3,uVar7,"crypto\\asn1\\asn1_gen.c",uVar8);
  ERR_add_error_data(2,"string=",pcVar5);
LAB_14f77901b:
  ASN1_TYPE_free(piVar3);
  return (int *)0x0;
}

// FUN_14f779080 @ 14f779080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f779080(char *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  char *local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x14f779095;
  if (param_1 != (char *)0x0) {
    uVar1 = strtoul(param_1,&local_res8,10);
    if (((local_res8 == (char *)0x0) || (*local_res8 == '\0')) || (local_res8 == param_1 + param_2))
    {
      if (-1 < (int)uVar1) {
        iVar2 = ASN1_BIT_STRING_set_bit(param_3,uVar1,1);
        if (iVar2 == 0) {
          ERR_put_error(0xd,0xb4,0x41,"crypto\\asn1\\asn1_gen.c",0x2f7,uVar3);
          return 0;
        }
        return 1;
      }
      ERR_put_error(0xd,0xb4,0xbb,"crypto\\asn1\\asn1_gen.c",0x2f3,uVar3);
    }
  }
  return 0;
}

// FUN_14f779170 @ 14f779170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14f779170(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined4 local_228 [2];
  undefined1 *local_220;
  void *local_218;
  void *local_210;
  undefined1 local_208 [4];
  undefined1 local_204 [4];
  undefined1 *local_200;
  undefined8 local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1d0 [96];
  int local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f77918d;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  puVar6 = (undefined1 *)0x0;
  local_1f8 = 0xffffffffffffffff;
  local_218 = (void *)0x0;
  local_228[0] = 0;
  local_1ec = 1;
  local_238 = &local_1f8;
  local_50 = 0;
  iVar1 = CONF_parse_list(param_1,0x2c,1,FUN_14f778660);
  if (iVar1 != 0) {
    *(undefined4 *)param_4 = 0xc2;
    return (undefined1 *)0x0;
  }
  if (local_1f0 - 0x10U < 2) {
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0xc0;
      return (undefined1 *)0x0;
    }
    if (0x31 < param_3) {
      *(undefined4 *)param_4 = 0xb5;
      return (undefined1 *)0x0;
    }
    local_238 = param_4;
    puVar4 = (undefined1 *)FUN_14f7789c0(local_1f0,local_1e8,param_2,param_3);
  }
  else {
    puVar4 = (undefined1 *)FUN_14f778be0(local_1e8,local_1ec,local_1f0);
  }
  if (puVar4 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  if (((int)local_1f8 == -1) && (local_50 == 0)) {
    return puVar4;
  }
  iVar2 = i2d_ASN1_TYPE(puVar4,&local_218);
  ASN1_TYPE_free(puVar4);
  local_210 = local_218;
  puVar4 = puVar6;
  iVar1 = iVar2;
  if ((int)local_1f8 != -1) {
    local_238 = (undefined8 *)CONCAT44(local_238._4_4_,iVar2);
    uVar3 = ASN1_get_object(&local_210,local_228,local_204,local_208);
    puVar5 = puVar6;
    if ((char)uVar3 < '\0') goto LAB_14f77942e;
    iVar2 = iVar2 + ((int)local_218 - (int)local_210);
    if ((uVar3 & 1) == 0) {
      iVar1 = ASN1_object_size(0,local_228[0],local_1f8 & 0xffffffff);
      puVar4 = (undefined1 *)(ulonglong)(uVar3 & 0x20);
    }
    else {
      local_228[0] = 0;
      iVar1 = ASN1_object_size(0,0,local_1f8 & 0xffffffff);
      puVar4 = &DAT_00000002;
    }
  }
  puVar7 = (undefined4 *)((longlong)&local_1f8 + (longlong)local_50 * 0x14 + 4);
  puVar5 = puVar6;
  if (0 < local_50) {
    do {
      puVar7[4] = iVar1 + puVar7[3];
      iVar1 = ASN1_object_size(0,iVar1 + puVar7[3],*puVar7);
      uVar3 = (int)puVar5 + 1;
      puVar7 = puVar7 + -5;
      puVar5 = (undefined1 *)(ulonglong)uVar3;
    } while ((int)uVar3 < local_50);
  }
  puVar5 = (undefined1 *)CRYPTO_malloc((longlong)iVar1,"crypto\\asn1\\asn1_gen.c",0xc3);
  if (puVar5 != (undefined1 *)0x0) {
    local_220 = puVar5;
    if (0 < local_50) {
      puVar7 = local_1d0;
      do {
        local_238 = (undefined8 *)CONCAT44(local_238._4_4_,puVar7[-3]);
        ASN1_put_object(&local_220,puVar7[-2],*puVar7,puVar7[-4]);
        if (puVar7[-1] != 0) {
          *local_220 = 0;
          local_220 = local_220 + 1;
        }
        uVar3 = (int)puVar6 + 1;
        puVar6 = (undefined1 *)(ulonglong)uVar3;
        puVar7 = puVar7 + 5;
      } while ((int)uVar3 < local_50);
    }
    if ((int)local_1f8 != -1) {
      if ((local_1f8._4_4_ == 0) && ((int)local_1f8 - 0x10U < 2)) {
        puVar4 = &DAT_00000020;
      }
      local_238 = (undefined8 *)CONCAT44(local_238._4_4_,local_1f8._4_4_);
      ASN1_put_object(&local_220,puVar4,local_228[0]);
    }
    memcpy(local_220,local_210,(longlong)iVar2);
    local_200 = puVar5;
    puVar6 = (undefined1 *)d2i_ASN1_TYPE(0,&local_200,iVar1);
  }
LAB_14f77942e:
  CRYPTO_free(local_218,"crypto\\asn1\\asn1_gen.c",0xe9);
  CRYPTO_free(puVar5,"crypto\\asn1\\asn1_gen.c",0xea);
  return puVar6;
}

// FUN_14f779490 @ 14f779490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f779490(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != (char *)0x0) {
    if (param_2 == 3) {
      iVar1 = strncmp(param_1,"DIR",3);
      if (iVar1 == 0) {
        *param_3 = *param_3 | 0x2906;
        return 1;
      }
    }
    uVar2 = FUN_14f778b40(param_1,param_2);
    if ((uVar2 != 0) && ((uVar2 >> 0x10 & 1) == 0)) {
      uVar2 = ASN1_tag2bit(uVar2);
      if (uVar2 != 0) {
        *param_3 = *param_3 | uVar2;
        return 1;
      }
    }
  }
  return 0;
}

// FUN_14f779540 @ 14f779540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f779540(char *param_1,int param_2,ulong *param_3,undefined4 *param_4)

{
  ulong uVar1;
  char local_res8 [8];
  char *local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f77955b;
  if ((param_1 == (char *)0x0) ||
     (((uVar1 = strtoul(param_1,&local_18,10), local_18 != (char *)0x0 && (*local_18 != '\0')) &&
      (param_1 + param_2 < local_18)))) {
    return 0;
  }
  if ((int)uVar1 < 0) {
    ERR_put_error(0xd,0xb6,0xbb,"crypto\\asn1\\asn1_gen.c",0x168);
    return 0;
  }
  *param_3 = uVar1;
  if ((local_18 != (char *)0x0) && (param_2 + ((int)param_1 - (int)local_18) != 0)) {
    local_res8[0] = *local_18;
    if (local_res8[0] == 'A') {
      *param_4 = 0x40;
      return 1;
    }
    if (local_res8[0] != 'C') {
      if (local_res8[0] == 'P') {
        *param_4 = 0xc0;
        return 1;
      }
      if (local_res8[0] == 'U') {
        *param_4 = 0;
        return 1;
      }
      local_res8[1] = 0;
      ERR_put_error(0xd,0xb6,0xba,"crypto\\asn1\\asn1_gen.c",0x187);
      ERR_add_error_data(2,"Char=",local_res8);
      return 0;
    }
  }
  *param_4 = 0x80;
  return 1;
}

// FUN_14f779670 @ 14f779670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f779670(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f779690 @ 14f779690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f779690(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7796b0 @ 14f7796b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7796b0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7796d0 @ 14f7796d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7796d0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7796f0 @ 14f7796f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7796f0(void)

{
  OPENSSL_sk_value();
  return;
}

