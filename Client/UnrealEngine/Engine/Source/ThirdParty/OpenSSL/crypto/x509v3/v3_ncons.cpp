// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 27

// FUN_14f70b060 @ 14f70b060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14f70b060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f70b084;
  puVar4 = (undefined8 *)0x0;
  plVar2 = (longlong *)ASN1_item_new(&DAT_1534b3bb0);
  if (plVar2 == (longlong *)0x0) {
LAB_14f70b1cf:
    ERR_put_error(0x22,0x93,0x41,"crypto\\x509v3\\v3_ncons.c",0xa1);
LAB_14f70b1ef:
    ASN1_item_free(plVar2,&DAT_1534b3bb0);
    ASN1_item_free(puVar4,&DAT_1534b3b40);
    plVar2 = (longlong *)0x0;
  }
  else {
    iVar6 = 0;
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      do {
        lVar3 = OPENSSL_sk_value(param_3,iVar6);
        iVar1 = strncmp(*(char **)(lVar3 + 8),"permitted",9);
        if ((iVar1 == 0) && (*(char *)(*(longlong *)(lVar3 + 8) + 9) != '\0')) {
          local_30 = *(longlong *)(lVar3 + 8) + 10;
          plVar5 = plVar2;
        }
        else {
          iVar1 = strncmp(*(char **)(lVar3 + 8),"excluded",8);
          if ((iVar1 != 0) || (*(char *)(*(longlong *)(lVar3 + 8) + 8) == '\0')) {
            ERR_put_error(0x22,0x93,0x8f,"crypto\\x509v3\\v3_ncons.c",0x8e);
            puVar4 = (undefined8 *)0x0;
            goto LAB_14f70b1ef;
          }
          plVar5 = plVar2 + 1;
          local_30 = *(longlong *)(lVar3 + 8) + 9;
        }
        local_28 = *(undefined8 *)(lVar3 + 0x10);
        puVar4 = (undefined8 *)ASN1_item_new(&DAT_1534b3b40);
        if (puVar4 == (undefined8 *)0x0) goto LAB_14f70b1cf;
        lVar3 = v2i_GENERAL_NAME_ex(*puVar4,param_1,param_2,local_38,1);
        if (lVar3 == 0) goto LAB_14f70b1ef;
        if (*plVar5 == 0) {
          lVar3 = OPENSSL_sk_new_null();
          *plVar5 = lVar3;
          if (lVar3 == 0) goto LAB_14f70b1cf;
        }
        iVar1 = OPENSSL_sk_push(*plVar5,puVar4);
        if (iVar1 == 0) goto LAB_14f70b1cf;
        iVar6 = iVar6 + 1;
        iVar1 = OPENSSL_sk_num(param_3);
      } while (iVar6 < iVar1);
    }
  }
  return plVar2;
}

// FUN_14f70b240 @ 14f70b240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f70b240(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  FUN_14f70b810(param_1,*param_2,param_3,param_4,"Permitted",0x14f70b25a);
  FUN_14f70b810(param_1,param_2[1],param_3,param_4 & 0xffffffff,"Excluded");
  return 1;
}

// GENERAL_SUBTREE_free @ 14f70b2c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_SUBTREE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3b40);
  return;
}

// GENERAL_SUBTREE_new @ 14f70b2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GENERAL_SUBTREE_new(void)

{
  ASN1_item_new(&DAT_1534b3b40);
  return;
}

// NAME_CONSTRAINTS_check @ 14f70b320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 NAME_CONSTRAINTS_check(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28 [2];
  longlong local_20;
  
  local_20 = 0x14f70b344;
  lVar5 = X509_get_subject_name();
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x100));
  iVar2 = X509_NAME_entry_count(lVar5);
  iVar8 = 0;
  iVar7 = 0;
  if (iVar2 < 0) {
    iVar2 = iVar7;
  }
  if (iVar1 < 0) {
    iVar1 = iVar7;
  }
  if (iVar2 <= 0x7fffffff - iVar1) {
    iVar3 = OPENSSL_sk_num(param_2[1]);
    iVar4 = OPENSSL_sk_num(*param_2);
    if (iVar4 < 0) {
      iVar4 = iVar7;
    }
    if (iVar3 < 0) {
      iVar3 = iVar7;
    }
    if ((iVar4 <= 0x7fffffff - iVar3) &&
       ((iVar1 + iVar2 < 1 || (iVar4 + iVar3 <= (int)(0x100000 / (longlong)(iVar1 + iVar2)))))) {
      iVar1 = X509_NAME_entry_count(lVar5);
      if (0 < iVar1) {
        local_28[0] = 4;
        local_20 = lVar5;
        uVar6 = FUN_14f70bda0(local_28,param_2);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        local_28[0] = 1;
        for (iVar1 = X509_NAME_get_index_by_NID(lVar5,0x30,0xffffffff); iVar1 != -1;
            iVar1 = X509_NAME_get_index_by_NID(lVar5,0x30,iVar1)) {
          uVar6 = X509_NAME_get_entry(lVar5,iVar1);
          local_20 = X509_NAME_ENTRY_get_data(uVar6);
          if (*(int *)(local_20 + 4) != 0x16) {
            return 0x35;
          }
          uVar6 = FUN_14f70bda0(local_28,param_2);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        }
      }
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x100));
      if (0 < iVar1) {
        do {
          uVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x100),iVar8);
          uVar6 = FUN_14f70bda0(uVar6,param_2);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          iVar8 = iVar8 + 1;
          iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x100));
        } while (iVar8 < iVar1);
      }
      return 0;
    }
  }
  return 1;
}

// NAME_CONSTRAINTS_check_CN @ 14f70b4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong NAME_CONSTRAINTS_check_CN(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 local_48 [2];
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f70b508;
  uVar3 = X509_get_subject_name();
  local_28 = 0;
  local_34 = 0x16;
  local_40 = &local_38;
  local_48[0] = 2;
  iVar1 = X509_NAME_get_index_by_NID(uVar3,0xd);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    uVar4 = X509_NAME_get_entry(uVar3,iVar1);
    uVar4 = X509_NAME_ENTRY_get_data(uVar4);
    uVar5 = FUN_14f70b6b0(uVar4,&local_res20,&local_res18);
    uVar4 = local_res20;
    if ((int)uVar5 != 0) break;
    if (local_res18 != 0) {
      local_30 = local_res20;
      local_38 = (undefined4)local_res18;
      uVar2 = FUN_14f70bda0(local_48,param_2);
      CRYPTO_free(uVar4,"crypto\\x509v3\\v3_ncons.c",0x1be);
      if (uVar2 != 0) {
        return (ulonglong)uVar2;
      }
    }
    iVar1 = X509_NAME_get_index_by_NID(uVar3,0xd,iVar1);
  }
  return uVar5;
}

// NAME_CONSTRAINTS_free @ 14f70b610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NAME_CONSTRAINTS_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b3bb0);
  return;
}

// NAME_CONSTRAINTS_new @ 14f70b640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void NAME_CONSTRAINTS_new(void)

{
  ASN1_item_new(&DAT_1534b3bb0);
  return;
}

// FUN_14f70b6b0 @ 14f70b6b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70b6b0(undefined8 param_1,undefined8 *param_2,size_t *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  size_t _MaxCount;
  void *local_res10;
  
  uVar5 = 0;
  *param_2 = 0;
  *param_3 = 0;
  uVar3 = ASN1_STRING_to_UTF8(&local_res10,param_1);
  uVar6 = (ulonglong)(int)uVar3;
  if ((int)uVar3 < 0) {
    return 0x11;
  }
  uVar7 = uVar6;
  if (0 < (int)uVar3) {
    do {
      uVar3 = (uint)uVar7;
      if (*(char *)((longlong)local_res10 + (uVar6 - 1)) != '\0') break;
      uVar3 = uVar3 - 1;
      uVar7 = (ulonglong)uVar3;
      uVar6 = uVar6 - 1;
    } while (0 < (longlong)uVar6);
  }
  _MaxCount = (size_t)(int)uVar3;
  pvVar4 = memchr(local_res10,0,_MaxCount);
  if (pvVar4 != (void *)0x0) {
    CRYPTO_free(local_res10,"crypto\\x509v3\\v3_ncons.c",0x164);
    return 0x35;
  }
  uVar6 = uVar5;
  uVar7 = uVar5;
  if (0 < (int)uVar3) {
    do {
      bVar1 = *(byte *)(uVar5 + (longlong)local_res10);
      if (((0x2f < (byte)(bVar1 - 0x30)) ||
          ((0x87fffffe03ffU >> ((ulonglong)(bVar1 - 0x30 & 0xff) & 0x3f) & 1) == 0)) &&
         (0x19 < (byte)(bVar1 + 0x9f))) {
        if (((longlong)uVar5 < 1) || ((int)(uVar3 - 1) <= (int)uVar7)) goto LAB_14f70b7d5;
        if (bVar1 != 0x2d) {
          if (((bVar1 != 0x2e) ||
              (cVar2 = *(char *)(uVar5 + 1 + (longlong)local_res10), cVar2 == '.')) ||
             ((*(char *)((uVar5 - 1) + (longlong)local_res10) == '-' || (cVar2 == '-'))))
          goto LAB_14f70b7d5;
          uVar6 = 1;
        }
      }
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while ((longlong)uVar5 < (longlong)_MaxCount);
    if ((int)uVar6 != 0) {
      *param_2 = local_res10;
      *param_3 = _MaxCount;
      return 0;
    }
  }
LAB_14f70b7d5:
  CRYPTO_free(local_res10,"crypto\\x509v3\\v3_ncons.c",0x194);
  return 0;
}

// FUN_14f70b810 @ 14f70b810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f70b810(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    BIO_printf(param_3,"%*s%s:\n",param_4,"",param_5);
  }
  iVar5 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar5);
      BIO_printf(param_3,"%*s",param_4 + 2,"");
      if (*(int *)*puVar3 == 7) {
        piVar1 = *(int **)((int *)*puVar3 + 2);
        puVar6 = *(undefined1 **)(piVar1 + 2);
        iVar2 = *piVar1;
        BIO_puts(param_3,"IP:");
        if (iVar2 == 8) {
          BIO_printf(param_3,"%d.%d.%d.%d/%d.%d.%d.%d",*puVar6,puVar6[1],puVar6[2],puVar6[3],
                     puVar6[4],puVar6[5],puVar6[6],puVar6[7]);
        }
        else if (iVar2 == 0x20) {
          iVar2 = 0;
          do {
            BIO_printf(param_3,"%X",CONCAT11(*puVar6,puVar6[1]));
            puVar6 = puVar6 + 2;
            if (iVar2 == 7) {
              pcVar4 = "/";
LAB_14f70b96c:
              BIO_puts(param_3,pcVar4);
            }
            else if (iVar2 != 0xf) {
              pcVar4 = ":";
              goto LAB_14f70b96c;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x10);
        }
        else {
          BIO_printf(param_3,"IP Address:<invalid>");
        }
      }
      else {
        GENERAL_NAME_print(param_3);
      }
      BIO_puts(param_3,"\n");
      iVar5 = iVar5 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
    } while (iVar5 < iVar2);
  }
  return 1;
}

// FUN_14f70ba20 @ 14f70ba20

undefined4 FUN_14f70ba20(longlong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 - (longlong)param_2;
    do {
      bVar3 = param_2[param_1];
      bVar1 = *param_2;
      if (bVar3 != bVar1) {
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 + 0x20;
        }
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 + 0x20;
        }
        if (bVar3 != bVar1) {
          uVar2 = 1;
          if (bVar3 < bVar1) {
            uVar2 = 0xffffffff;
          }
          return uVar2;
        }
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

// FUN_14f70ba80 @ 14f70ba80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_14f70ba80(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = i2d_X509_NAME(param_1,0), iVar1 < 0)) {
    return 0x11;
  }
  if ((*(int *)(param_2 + 8) != 0) && (iVar1 = i2d_X509_NAME(param_2,0), iVar1 < 0)) {
    return 0x11;
  }
  if (*(int *)(param_2 + 0x20) <= *(int *)(param_1 + 0x20)) {
    iVar1 = memcmp(*(void **)(param_2 + 0x18),*(void **)(param_1 + 0x18),
                   (longlong)*(int *)(param_2 + 0x20));
    return -(iVar1 != 0) & 0x2f;
  }
  return 0x2f;
}

// FUN_14f70bb10 @ 14f70bb10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_14f70bb10(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 2);
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *param_1;
  if ((iVar2 <= iVar1) &&
     (((iVar1 <= iVar2 || (lVar3 = lVar3 + (iVar1 - iVar2), **(char **)(param_2 + 2) == '.')) ||
      (*(char *)(lVar3 + -1) == '.')))) {
    iVar2 = FUN_14f70ba20(*(char **)(param_2 + 2),lVar3,(longlong)iVar2,lVar3,0x14f70bb1a);
    return -(iVar2 != 0) & 0x2f;
  }
  return 0x2f;
}

// FUN_14f70bb80 @ 14f70bb80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70bb80(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  char *pcVar8;
  char *_Str1;
  char *pcVar9;
  size_t _MaxCount;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar1 = *param_2;
  uVar12 = (ulonglong)(int)uVar1;
  _Str1 = *(char **)(param_2 + 2);
  pcVar8 = *(char **)(param_1 + 2);
  uVar3 = uVar12;
  uVar7 = uVar12;
  uVar11 = uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar11 = (uint)uVar7;
      if (_Str1[uVar3 - 1] == '@') break;
      uVar11 = uVar11 - 1;
      uVar3 = uVar3 - 1;
      uVar7 = (ulonglong)uVar11;
    } while (0 < (longlong)uVar3);
  }
  if (uVar11 == 0) {
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar10 = _Str1 + (int)(uVar11 - 1);
  }
  uVar11 = *param_1;
  uVar7 = (ulonglong)(int)uVar11;
  uVar3 = uVar7;
  uVar6 = uVar11;
  if (0 < (int)uVar11) {
    do {
      uVar6 = (uint)uVar3;
      if (pcVar8[uVar7 - 1] == '@') break;
      uVar6 = uVar6 - 1;
      uVar7 = uVar7 - 1;
      uVar3 = (ulonglong)uVar6;
    } while (0 < (longlong)uVar7);
  }
  if ((uVar6 == 0) || (pcVar9 = pcVar8 + (int)(uVar6 - 1), pcVar9 == (char *)0x0)) {
    return 0x35;
  }
  if (pcVar10 == (char *)0x0) {
    if ((0 < (int)uVar1) && (*_Str1 == '.')) {
      if ((int)uVar11 <= (int)uVar1) {
        return 0x2f;
      }
      pcVar8 = pcVar8 + (int)(uVar11 - uVar1);
      goto LAB_14f70bcea;
    }
  }
  else {
    if (pcVar10 != _Str1) {
      _MaxCount = (longlong)pcVar9 - (longlong)pcVar8;
      if ((longlong)pcVar10 - (longlong)_Str1 != _MaxCount) {
        return 0x2f;
      }
      pvVar4 = memchr(_Str1,0,(longlong)pcVar10 - (longlong)_Str1);
      if ((pvVar4 != (void *)0x0) || (pvVar4 = memchr(pcVar8,0,_MaxCount), pvVar4 != (void *)0x0)) {
        return 0x35;
      }
      iVar2 = strncmp(_Str1,pcVar8,_MaxCount);
      if (iVar2 != 0) {
        return 0x2f;
      }
    }
    _Str1 = pcVar10 + 1;
  }
  pcVar8 = pcVar9 + 1;
  uVar12 = ((longlong)(int)*param_1 - (longlong)pcVar8) + *(longlong *)(param_1 + 2);
  if (((longlong)(int)*param_2 - (longlong)_Str1) + *(longlong *)(param_2 + 2) != uVar12) {
    return 0x2f;
  }
LAB_14f70bcea:
  uVar5 = FUN_14f70ba20(_Str1,pcVar8,uVar12);
  if ((int)uVar5 != 0) {
    return 0x2f;
  }
  return uVar5;
}

// FUN_14f70bd10 @ 14f70bd10

undefined8 FUN_14f70bd10(int *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar2 = *param_1;
  iVar3 = *param_2;
  if (((iVar2 == 4) || (iVar2 == 0x10)) && ((iVar3 == 8 || (iVar3 == 0x20)))) {
    if (iVar2 * 2 != iVar3) {
      return 0x2f;
    }
    pbVar1 = (byte *)((longlong)iVar2 + *(longlong *)(param_2 + 2));
    if (0 < iVar2) {
      pbVar4 = pbVar1;
      do {
        if ((pbVar4[*(longlong *)(param_1 + 2) - (longlong)pbVar1] & *pbVar4) !=
            (pbVar4[*(longlong *)(param_2 + 2) - (longlong)pbVar1] & *pbVar4)) {
          return 0x2f;
        }
        pbVar4 = pbVar4 + 1;
      } while ((longlong)pbVar4 - (longlong)pbVar1 < (longlong)iVar2);
    }
    return 0;
  }
  return 0x35;
}

// FUN_14f70bda0 @ 14f70bda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70bda0(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = OPENSSL_sk_num(*param_2);
  iVar5 = iVar6;
  iVar4 = iVar6;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(*param_2,iVar5);
      if (*param_1 == *(int *)*puVar2) {
        if (puVar2[1] != 0) {
          return 0x31;
        }
        if (puVar2[2] != 0) {
          return 0x31;
        }
        if (iVar4 != 2) {
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          uVar3 = FUN_14f70bec0(param_1);
          if ((int)uVar3 == 0) {
            iVar4 = 2;
          }
          else if ((int)uVar3 != 0x2f) {
            return uVar3;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(*param_2);
    } while (iVar5 < iVar1);
    if (iVar4 == 1) {
      return 0x2f;
    }
  }
  iVar5 = OPENSSL_sk_num(param_2[1]);
  if (0 < iVar5) {
    do {
      puVar2 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar6);
      if (*param_1 == *(int *)*puVar2) {
        if ((puVar2[1] != 0) || (puVar2[2] != 0)) {
          return 0x31;
        }
        uVar3 = FUN_14f70bec0(param_1);
        if ((int)uVar3 == 0) {
          return 0x30;
        }
        if ((int)uVar3 != 0x2f) {
          return uVar3;
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = OPENSSL_sk_num(param_2[1]);
    } while (iVar6 < iVar5);
  }
  return 0;
}

// FUN_14f70bec0 @ 14f70bec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f70bec0(longlong param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar3 = *param_2;
  if (iVar3 == 1) {
    uVar4 = FUN_14f70bb80(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
    return uVar4;
  }
  if (iVar3 == 2) {
    iVar3 = **(int **)(param_2 + 2);
    pcVar2 = *(char **)(*(int **)(param_2 + 2) + 2);
    lVar5 = *(longlong *)(*(int **)(param_1 + 8) + 2);
    if (iVar3 == 0) {
      return 0;
    }
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar3 <= iVar1) &&
       (((iVar1 <= iVar3 || (lVar5 = lVar5 + (iVar1 - iVar3), *pcVar2 == '.')) ||
        (*(char *)(lVar5 + -1) == '.')))) {
      iVar3 = FUN_14f70ba20(pcVar2,lVar5,(longlong)iVar3,pcVar2,0x14f70beca);
      return (ulonglong)(-(uint)(iVar3 != 0) & 0x2f);
    }
    return 0x2f;
  }
  if (iVar3 == 4) {
    uVar4 = FUN_14f70ba80(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
    return uVar4;
  }
  if (iVar3 != 6) {
    if (iVar3 != 7) {
      return 0x33;
    }
    uVar4 = FUN_14f70bd10(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
    return uVar4;
  }
  uVar4 = FUN_14f70bfb0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
  return uVar4;
}

// FUN_14f70bfb0 @ 14f70bfb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70bfb0(int *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  pcVar2 = *(char **)(param_2 + 2);
  pvVar4 = memchr(*(void **)(param_1 + 2),0x3a,(longlong)*param_1);
  if ((((pvVar4 == (void *)0x0) ||
       (((longlong)*param_1 + *(longlong *)(param_1 + 2)) - (longlong)pvVar4 < 3)) ||
      (*(char *)((longlong)pvVar4 + 1) != '/')) || (*(char *)((longlong)pvVar4 + 2) != '/')) {
    return 0x35;
  }
  pvVar4 = (void *)((longlong)pvVar4 + 3);
  pvVar5 = memchr(pvVar4,0x3a,((longlong)*param_1 + *(longlong *)(param_1 + 2)) - (longlong)pvVar4);
  if ((pvVar5 == (void *)0x0) &&
     (pvVar5 = memchr(pvVar4,0x2f,
                      ((longlong)*param_1 - (longlong)pvVar4) + *(longlong *)(param_1 + 2)),
     pvVar5 == (void *)0x0)) {
    iVar3 = (param_1[2] - (int)pvVar4) + *param_1;
  }
  else {
    iVar3 = (int)pvVar5 - (int)pvVar4;
  }
  if (iVar3 != 0) {
    iVar1 = *param_2;
    lVar7 = (longlong)iVar1;
    if ((iVar1 < 1) || (*pcVar2 != '.')) {
      if (iVar1 != iVar3) {
        return 0x2f;
      }
      lVar7 = (longlong)iVar3;
    }
    else {
      if (iVar3 <= iVar1) {
        return 0x2f;
      }
      pvVar4 = (void *)((iVar3 - lVar7) + (longlong)pvVar4);
    }
    uVar6 = FUN_14f70ba20(pvVar4,pcVar2,lVar7);
    if ((int)uVar6 != 0) {
      return 0x2f;
    }
    return uVar6;
  }
  return 0x35;
}

// FUN_14f70c0e0 @ 14f70c0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70c0e0(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  puVar3 = *(undefined1 **)(param_2 + 2);
  iVar2 = *param_2;
  BIO_puts(param_1,"IP:");
  if (iVar2 == 8) {
    BIO_printf(param_1,"%d.%d.%d.%d/%d.%d.%d.%d",*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],
               puVar3[5],puVar3[6],CONCAT44(uVar4,(uint)(byte)puVar3[7]));
  }
  else if (iVar2 == 0x20) {
    iVar2 = 0;
    do {
      BIO_printf(param_1,"%X",CONCAT11(*puVar3,puVar3[1]));
      puVar3 = puVar3 + 2;
      if (iVar2 == 7) {
        pcVar1 = "/";
LAB_14f70c1ac:
        BIO_puts(param_1,pcVar1);
      }
      else if (iVar2 != 0xf) {
        pcVar1 = ":";
        goto LAB_14f70c1ac;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
  }
  else {
    BIO_printf(param_1,"IP Address:<invalid>");
  }
  return 1;
}

// FUN_14f70c1f0 @ 14f70c1f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70c1f0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f70c210 @ 14f70c210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70c210(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f70c230 @ 14f70c230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70c230(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f70c250 @ 14f70c250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70c250(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f70c270 @ 14f70c270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70c270(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f70c290 @ 14f70c290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70c290(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f70c2b0 @ 14f70c2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70c2b0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f70c2d0 @ 14f70c2d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70c2d0(void)

{
  OPENSSL_sk_value();
  return;
}

