// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 23

// X509_NAME_ENTRY_create_by_NID @ 14f708e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_NAME_ENTRY_create_by_NID
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f708e2a;
  lVar1 = OBJ_nid2obj(param_2);
  if (lVar1 == 0) {
    ERR_put_error(0xb,0x72,0x6d,"crypto\\x509\\x509name.c",0x10f);
    uVar2 = 0;
  }
  else {
    uVar2 = X509_NAME_ENTRY_create_by_OBJ(param_1,lVar1,param_3,param_4,param_5,uVar2);
    ASN1_OBJECT_free(lVar1);
  }
  return uVar2;
}

// X509_NAME_ENTRY_create_by_OBJ @ 14f708eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_NAME_ENTRY_create_by_OBJ
                   (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = *param_1, lVar2 != 0)) ||
     (lVar2 = X509_NAME_ENTRY_new(), lVar2 != 0)) {
    iVar1 = X509_NAME_ENTRY_set_object(lVar2,param_2);
    if ((iVar1 != 0) &&
       (iVar1 = X509_NAME_ENTRY_set_data(lVar2,param_3,param_4,param_5), iVar1 != 0)) {
      if (param_1 == (longlong *)0x0) {
        return lVar2;
      }
      if (*param_1 != 0) {
        return lVar2;
      }
      *param_1 = lVar2;
      return lVar2;
    }
    if ((param_1 == (longlong *)0x0) || (lVar2 != *param_1)) {
      X509_NAME_ENTRY_free(lVar2);
    }
  }
  return 0;
}

// X509_NAME_ENTRY_create_by_txt @ 14f708f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_NAME_ENTRY_create_by_txt
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f708f90;
  lVar1 = OBJ_txt2obj(param_2,0);
  if (lVar1 == 0) {
    ERR_put_error(0xb,0x83,0x77,"crypto\\x509\\x509name.c",0xfc);
    ERR_add_error_data(2,"name=",param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = X509_NAME_ENTRY_create_by_OBJ(param_1,lVar1,param_3,param_4,param_5,uVar2);
    ASN1_OBJECT_free(lVar1);
  }
  return uVar2;
}

// X509_NAME_ENTRY_get_data @ 14f709030

undefined8 X509_NAME_ENTRY_get_data(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 8);
}

// X509_NAME_ENTRY_get_object @ 14f709050

undefined8 X509_NAME_ENTRY_get_object(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}

// X509_NAME_ENTRY_set @ 14f709070

undefined4 X509_NAME_ENTRY_set(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// X509_NAME_ENTRY_set_data @ 14f709080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_NAME_ENTRY_set_data(undefined8 *param_1,uint param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f70909b;
  uVar4 = param_4 & 0xffffffff;
  if ((param_1 != (undefined8 *)0x0) && ((param_3 != 0 || ((int)param_4 == 0)))) {
    if ((0 < (int)param_2) && ((param_2 >> 0xc & 1) != 0)) {
      uVar1 = OBJ_obj2nid(*param_1);
      lVar3 = ASN1_STRING_set_by_NID(param_1 + 1,param_3,param_4 & 0xffffffff,param_2,uVar1,uVar5);
      return lVar3 != 0;
    }
    if ((int)param_4 < 0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while (*(char *)(param_3 + uVar4) != '\0');
    }
    iVar2 = ASN1_STRING_set(param_1[1],param_3,uVar4 & 0xffffffff);
    if (iVar2 != 0) {
      if (param_2 != 0xffffffff) {
        if (param_2 == 0xfffffffe) {
          uVar1 = ASN1_PRINTABLE_type(param_3,uVar4 & 0xffffffff);
          *(undefined4 *)(param_1[1] + 4) = uVar1;
          return true;
        }
        *(uint *)(param_1[1] + 4) = param_2;
      }
      return true;
    }
  }
  return false;
}

// X509_NAME_ENTRY_set_object @ 14f709170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_NAME_ENTRY_set_object(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    ASN1_OBJECT_free(*param_1);
    lVar1 = OBJ_dup(param_2);
    *param_1 = lVar1;
    return lVar1 != 0;
  }
  ERR_put_error(0xb,0x73,0x43,"crypto\\x509\\x509name.c",0x136,0x14f709180);
  return false;
}

// X509_NAME_add_entry @ 14f7091f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_add_entry(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f709204;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  iVar3 = OPENSSL_sk_num(uVar1);
  iVar5 = iVar3;
  if ((param_3 <= iVar3) && (iVar5 = param_3, param_3 < 0)) {
    iVar5 = iVar3;
  }
  iVar6 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  bVar7 = param_4 == 0;
  if (param_4 == -1) {
    if (iVar5 == 0) {
      bVar7 = true;
      iVar6 = 0;
      goto LAB_14f70929e;
    }
    iVar2 = iVar5 + -1;
  }
  else {
    iVar2 = iVar5;
    if (iVar3 <= iVar5) {
      if (iVar5 != 0) {
        lVar4 = OPENSSL_sk_value(uVar1,iVar5 + -1);
        iVar6 = *(int *)(lVar4 + 0x10) + 1;
      }
      goto LAB_14f70929e;
    }
  }
  lVar4 = OPENSSL_sk_value(uVar1,iVar2);
  iVar6 = *(int *)(lVar4 + 0x10);
LAB_14f70929e:
  lVar4 = X509_NAME_ENTRY_dup(param_2);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = iVar6;
    iVar3 = OPENSSL_sk_insert(uVar1,lVar4,iVar5);
    if (iVar3 != 0) {
      if (bVar7) {
        iVar3 = OPENSSL_sk_num(uVar1);
        while (iVar5 = iVar5 + 1, iVar5 < iVar3) {
          lVar4 = OPENSSL_sk_value(uVar1,iVar5);
          *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
        }
      }
      return 1;
    }
    ERR_put_error(0xb,0x71,0x41,"crypto\\x509\\x509name.c",0xe3,uVar8);
  }
  X509_NAME_ENTRY_free(lVar4);
  return 0;
}

// X509_NAME_add_entry_by_NID @ 14f709340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_NAME_add_entry_by_NID(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 uVar3;
  
  uVar3 = 0x14f709350;
  lVar2 = X509_NAME_ENTRY_create_by_NID(0);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = X509_NAME_add_entry(param_1,lVar2,in_stack_00000030,in_stack_00000038,in_stack_00000028,
                              uVar3);
  X509_NAME_ENTRY_free(lVar2);
  return uVar1;
}

// X509_NAME_add_entry_by_OBJ @ 14f7093b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
X509_NAME_add_entry_by_OBJ
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = X509_NAME_ENTRY_new();
  if (lVar3 != 0) {
    iVar1 = X509_NAME_ENTRY_set_object(lVar3,param_2);
    if ((iVar1 != 0) &&
       (iVar1 = X509_NAME_ENTRY_set_data(lVar3,param_3,param_4,param_5), iVar1 != 0)) {
      uVar2 = X509_NAME_add_entry(param_1,lVar3,param_6,param_7);
      X509_NAME_ENTRY_free(lVar3);
      return uVar2;
    }
    X509_NAME_ENTRY_free(lVar3);
  }
  return 0;
}

// X509_NAME_add_entry_by_txt @ 14f709460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_NAME_add_entry_by_txt(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 uVar3;
  
  uVar3 = 0x14f709470;
  lVar2 = X509_NAME_ENTRY_create_by_txt(0);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = X509_NAME_add_entry(param_1,lVar2,in_stack_00000030,in_stack_00000038,in_stack_00000028,
                              uVar3);
  X509_NAME_ENTRY_free(lVar2);
  return uVar1;
}

// X509_NAME_delete_entry @ 14f7094d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_NAME_delete_entry(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (((param_1 != (undefined8 *)0x0) && (iVar2 = OPENSSL_sk_num(*param_1), param_2 < iVar2)) &&
     (-1 < param_2)) {
    uVar1 = *param_1;
    lVar3 = OPENSSL_sk_delete(uVar1,param_2);
    iVar2 = OPENSSL_sk_num(uVar1);
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_2 != iVar2) {
      if (param_2 == 0) {
        iVar5 = *(int *)(lVar3 + 0x10) + -1;
      }
      else {
        lVar4 = OPENSSL_sk_value(uVar1,param_2 + -1);
        iVar5 = *(int *)(lVar4 + 0x10);
      }
      lVar4 = OPENSSL_sk_value(uVar1,param_2);
      if (iVar5 + 1 < *(int *)(lVar4 + 0x10)) {
        for (; param_2 < iVar2; param_2 = param_2 + 1) {
          lVar4 = OPENSSL_sk_value(uVar1,param_2);
          *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
        }
      }
    }
    return lVar3;
  }
  return 0;
}

// X509_NAME_entry_count @ 14f7095c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_entry_count(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = OPENSSL_sk_num(*param_1);
  return uVar1;
}

// X509_NAME_get_entry @ 14f7095f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_get_entry(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = OPENSSL_sk_num(*param_1);
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = OPENSSL_sk_value(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

// X509_NAME_get_index_by_NID @ 14f709650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_NAME_get_index_by_NID(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = OBJ_nid2obj(param_2);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  uVar2 = X509_NAME_get_index_by_OBJ(param_1,lVar1,param_3);
  return uVar2;
}

// X509_NAME_get_index_by_OBJ @ 14f7096b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_NAME_get_index_by_OBJ(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return -1;
  }
  uVar1 = *param_1;
  iVar3 = OPENSSL_sk_num(uVar1);
  iVar2 = -1;
  if (-1 < param_3) {
    iVar2 = param_3;
  }
  do {
    iVar2 = iVar2 + 1;
    if (iVar3 <= iVar2) {
      return -1;
    }
    puVar5 = (undefined8 *)OPENSSL_sk_value(uVar1,iVar2);
    iVar4 = OBJ_cmp(*puVar5,param_2);
  } while (iVar4 != 0);
  return iVar2;
}

// X509_NAME_get_text_by_NID @ 14f709760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_NAME_get_text_by_NID
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = OBJ_nid2obj(param_2);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = X509_NAME_get_text_by_OBJ(param_1,lVar1,param_3,param_4);
  return uVar2;
}

// X509_NAME_get_text_by_OBJ @ 14f7097d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_NAME_get_text_by_OBJ(undefined8 *param_1,undefined8 param_2,void *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int *piVar8;
  int *piVar7;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    iVar2 = OPENSSL_sk_num(uVar1);
    piVar8 = (int *)0x0;
    piVar7 = piVar8;
    if (0 < iVar2) {
      do {
        iVar6 = (int)piVar7;
        puVar4 = (undefined8 *)OPENSSL_sk_value(uVar1,piVar7);
        iVar3 = OBJ_cmp(*puVar4,param_2);
        if (iVar3 == 0) {
          if (iVar6 < 0) {
            return -1;
          }
          iVar2 = OPENSSL_sk_num(*param_1);
          if ((iVar6 < iVar2) && (lVar5 = OPENSSL_sk_value(*param_1,piVar7), lVar5 != 0)) {
            piVar8 = *(int **)(lVar5 + 8);
          }
          if (param_3 != (void *)0x0) {
            if (0 < param_4) {
              iVar2 = *piVar8;
              if (param_4 + -1 < *piVar8) {
                iVar2 = param_4 + -1;
              }
              memcpy(param_3,*(void **)(piVar8 + 2),(longlong)iVar2);
              *(undefined1 *)((longlong)iVar2 + (longlong)param_3) = 0;
              return iVar2;
            }
            return 0;
          }
          return *piVar8;
        }
        piVar7 = (int *)(ulonglong)(iVar6 + 1U);
      } while ((int)(iVar6 + 1U) < iVar2);
    }
  }
  return -1;
}

// FUN_14f7098c0 @ 14f7098c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7098c0(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f7098e0 @ 14f7098e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7098e0(void)

{
  OPENSSL_sk_insert();
  return;
}

// FUN_14f709900 @ 14f709900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f709900(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f709920 @ 14f709920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f709920(void)

{
  OPENSSL_sk_value();
  return;
}

