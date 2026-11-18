// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 18

// ASN1_STRING_clear_free @ 14f71e1c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_STRING_clear_free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((*(longlong *)(param_1 + 2) != 0) && ((*(byte *)(param_1 + 4) & 0x10) == 0)) {
      OPENSSL_cleanse(*(longlong *)(param_1 + 2),(longlong)*param_1);
    }
    ASN1_STRING_free(param_1);
  }
  return;
}

// ASN1_STRING_cmp @ 14f71e210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ASN1_STRING_cmp(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = iVar2 - *param_2;
  if (iVar1 == 0) {
    if ((iVar2 != 0) &&
       (iVar2 = memcmp(*(void **)(param_1 + 2),*(void **)(param_2 + 2),(longlong)iVar2), iVar2 != 0)
       ) {
      return iVar2;
    }
    iVar1 = param_1[1] - param_2[1];
  }
  return iVar1;
}

// ASN1_STRING_copy @ 14f71e260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_STRING_copy(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 4) = param_2[1];
    iVar1 = ASN1_STRING_set(param_1,*(undefined8 *)(param_2 + 2),*param_2);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x80;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2[4] & 0xffffff7f;
      return 1;
    }
  }
  return 0;
}

// ASN1_STRING_dup @ 14f71e2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_STRING_dup(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f71e2ec;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = CRYPTO_zalloc(0x18,"crypto\\asn1\\asn1_lib.c",0x155);
  if (lVar2 == 0) {
    ERR_put_error(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x157,uVar3);
    return 0;
  }
  *(undefined4 *)(lVar2 + 4) = 4;
  iVar1 = ASN1_STRING_copy(lVar2,param_1);
  if (iVar1 == 0) {
    ASN1_STRING_free(lVar2);
    return 0;
  }
  return lVar2;
}

// ASN1_STRING_free @ 14f71e390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_STRING_free(longlong param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 & 0x10) == 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x163);
    }
    if ((uVar1 & 0x80) == 0) {
      CRYPTO_free(param_1,"crypto\\asn1\\asn1_lib.c",0x165);
    }
  }
  return;
}

// ASN1_STRING_get0_data @ 14f71e400

undefined8 ASN1_STRING_get0_data(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

// ASN1_STRING_length @ 14f71e410

undefined4 ASN1_STRING_length(undefined4 *param_1)

{
  return *param_1;
}

// ASN1_STRING_new @ 14f71e430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_STRING_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x18,"crypto\\asn1\\asn1_lib.c",0x155);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x157);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  return lVar1;
}

// ASN1_STRING_set @ 14f71e490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_STRING_set(int *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong _Size;
  undefined8 uVar3;
  
  uVar3 = 0x14f71e4a5;
  if (param_3 < 0) {
    if (param_2 == (void *)0x0) {
      return 0;
    }
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)param_2 + _Size) != '\0');
  }
  else {
    _Size = (ulonglong)param_3;
  }
  if (_Size < 0x7fffffff) {
    if (((ulonglong)(longlong)*param_1 <= _Size) || (*(longlong *)(param_1 + 2) == 0)) {
      uVar1 = *(undefined8 *)(param_1 + 2);
      lVar2 = CRYPTO_realloc(uVar1,_Size + 1,"crypto\\asn1\\asn1_lib.c",299);
      *(longlong *)(param_1 + 2) = lVar2;
      if (lVar2 == 0) {
        ERR_put_error(0xd,0xba,0x41,"crypto\\asn1\\asn1_lib.c",0x12e,uVar3);
        *(undefined8 *)(param_1 + 2) = uVar1;
        return 0;
      }
    }
    *param_1 = (int)_Size;
    if (param_2 != (void *)0x0) {
      memcpy(*(void **)(param_1 + 2),param_2,_Size);
      *(undefined1 *)(_Size + *(longlong *)(param_1 + 2)) = 0;
    }
    return 1;
  }
  ERR_put_error(0xd,0,0xdf,"crypto\\asn1\\asn1_lib.c",0x122,0x14f71e4a5);
  return 0;
}

// ASN1_STRING_set0 @ 14f71e5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_STRING_set0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 2),"crypto\\asn1\\asn1_lib.c",0x147);
  *(undefined8 *)(param_1 + 2) = param_2;
  *param_1 = param_3;
  return;
}

// ASN1_STRING_type @ 14f71e610

undefined4 ASN1_STRING_type(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ASN1_STRING_type_new @ 14f71e620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_STRING_type_new(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f71e62c;
  lVar1 = CRYPTO_zalloc(0x18,"crypto\\asn1\\asn1_lib.c",0x155);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x82,0x41,"crypto\\asn1\\asn1_lib.c",0x157,uVar2);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = param_1;
  return lVar1;
}

// ASN1_get_object @ 14f71e6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint ASN1_get_object(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (param_5 != 0) {
    bVar1 = *(byte *)*param_1;
    iVar9 = param_5 + -1;
    uVar6 = bVar1 & 0x20;
    uVar3 = bVar1 & 0x1f;
    uVar8 = 0;
    pbVar5 = (byte *)*param_1 + 1;
    if (uVar3 == 0x1f) {
      if (iVar9 == 0) goto LAB_14f71e83c;
      uVar3 = 0;
      bVar2 = *pbVar5;
      while ((char)bVar2 < '\0') {
        pbVar5 = pbVar5 + 1;
        uVar3 = bVar2 & 0x7f | uVar3 << 7;
        iVar9 = iVar9 + -1;
        if ((iVar9 == 0) || (0xffffff < (int)uVar3)) goto LAB_14f71e83c;
        bVar2 = *pbVar5;
      }
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      uVar3 = bVar2 & 0x7f | uVar3 << 7;
      iVar9 = iVar9 + -1;
    }
    if (iVar9 != 0) {
      *param_3 = uVar3;
      *param_4 = bVar1 & 0xc0;
      if (0 < iVar9) {
        bVar1 = *pbVar5;
        if (bVar1 == 0x80) {
          pbVar5 = pbVar5 + 1;
          uVar3 = uVar8;
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          uVar3 = bVar1 & 0x7f;
          pbVar5 = pbVar5 + 1;
          if ((char)bVar1 < '\0') {
            if (iVar9 + -1 < (int)(uVar3 + 1)) goto LAB_14f71e83c;
            uVar4 = uVar3;
            if ((bVar1 & 0x7f) != 0) {
              do {
                uVar4 = uVar3;
                if (*pbVar5 != 0) break;
                pbVar5 = pbVar5 + 1;
                uVar3 = uVar3 - 1;
                uVar4 = uVar3;
              } while (0 < (int)uVar3);
            }
            if (4 < (int)uVar4) goto LAB_14f71e83c;
            uVar3 = 0;
            uVar7 = 0;
            if (0 < (int)uVar4) {
              do {
                bVar1 = *pbVar5;
                uVar4 = uVar4 - 1;
                pbVar5 = pbVar5 + 1;
                uVar3 = uVar8 << 8 | (uint)bVar1;
                uVar8 = uVar3;
              } while (0 < (int)uVar4);
              uVar7 = 0;
              if (0x7fffffff < uVar3) goto LAB_14f71e83c;
            }
          }
        }
        *param_2 = uVar3;
        if ((uVar7 == 0) || ((char)uVar6 != '\0')) {
          if (((longlong)param_5 - (longlong)pbVar5) + *param_1 < (longlong)(int)uVar3) {
            ERR_put_error(0xd,0x72,0x9b,"crypto\\asn1\\asn1_lib.c",0x5b,0x14f71e70e);
            uVar6 = uVar6 | 0x80;
          }
          *param_1 = (longlong)pbVar5;
          return uVar7 | uVar6;
        }
      }
    }
  }
LAB_14f71e83c:
  ERR_put_error(0xd,0x72,0x7b,"crypto\\asn1\\asn1_lib.c",0x65,0x14f71e70e);
  return 0x80;
}

// ASN1_object_size @ 14f71e8d0

int ASN1_object_size(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (-1 < param_2) {
    if (0x1e < param_3) {
      do {
        param_3 = param_3 >> 7;
        iVar2 = iVar2 + 1;
      } while (0 < param_3);
    }
    if (param_1 == 2) {
      iVar2 = iVar2 + 3;
    }
    else {
      iVar2 = iVar2 + 1;
      iVar1 = param_2;
      if (0x7f < param_2) {
        for (; 0 < iVar1; iVar1 = iVar1 >> 8) {
          iVar2 = iVar2 + 1;
        }
      }
    }
    if (iVar2 < 0x7fffffff - param_2) {
      return iVar2 + param_2;
    }
  }
  return -1;
}

// ASN1_put_eoc @ 14f71e930

undefined8 ASN1_put_eoc(undefined8 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_1;
  *puVar1 = 0;
  *param_1 = puVar1 + 1;
  return 2;
}

// ASN1_put_object @ 14f71e950

void ASN1_put_object(longlong *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  
  pbVar7 = (byte *)*param_1;
  bVar5 = -(param_2 != 0) & 0x20U | param_5 & 0xc0;
  iVar6 = 0;
  if (param_4 < 0x1f) {
    *pbVar7 = (byte)param_4 & 0x1f | bVar5;
    pbVar7 = pbVar7 + 1;
  }
  else {
    *pbVar7 = bVar5 | 0x1f;
    iVar1 = iVar6;
    for (iVar3 = param_4; 0 < iVar3; iVar3 = iVar3 >> 7) {
      iVar1 = iVar1 + 1;
    }
    lVar4 = (longlong)iVar1;
    if (0 < iVar1) {
      iVar3 = iVar1 + -1;
      pbVar2 = pbVar7 + (longlong)iVar1 + 1;
      do {
        pbVar2 = pbVar2 + -1;
        bVar5 = (byte)param_4 & 0x7f;
        iVar1 = iVar1 + -1;
        *pbVar2 = bVar5;
        if (iVar1 != iVar3) {
          *pbVar2 = bVar5 | 0x80;
        }
        param_4 = param_4 >> 7;
      } while (0 < iVar1);
    }
    pbVar7 = pbVar7 + lVar4 + 1;
  }
  if (param_2 == 2) {
    *pbVar7 = 0x80;
    *param_1 = (longlong)(pbVar7 + 1);
    return;
  }
  iVar1 = param_3;
  if (param_3 < 0x80) {
    *pbVar7 = (byte)param_3;
    *param_1 = (longlong)(pbVar7 + 1);
    return;
  }
  for (; 0 < iVar1; iVar1 = iVar1 >> 8) {
    iVar6 = iVar6 + 1;
  }
  lVar4 = (longlong)iVar6;
  *pbVar7 = (byte)iVar6 | 0x80;
  if (0 < iVar6) {
    pbVar2 = pbVar7 + (longlong)iVar6 + 1;
    do {
      pbVar2 = pbVar2 + -1;
      iVar6 = iVar6 + -1;
      *pbVar2 = (byte)param_3;
      param_3 = param_3 >> 8;
    } while (0 < iVar6);
  }
  *param_1 = (longlong)(pbVar7 + lVar4 + 1);
  return;
}

// FUN_14f71eac0 @ 14f71eac0

undefined8 FUN_14f71eac0(undefined8 *param_1,undefined4 *param_2,uint *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = (byte *)*param_1;
  uVar5 = 0;
  if (0 < param_4) {
    if (*pbVar4 == 0x80) {
      *param_2 = 1;
      *param_1 = pbVar4 + 1;
      *param_3 = 0;
      return 1;
    }
    *param_2 = 0;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar2 = bVar1 & 0x7f;
    if (-1 < (char)bVar1) {
LAB_14f71eb58:
      *param_1 = pbVar4;
      *param_3 = uVar2;
      return 1;
    }
    if ((int)(uVar2 + 1) <= param_4 + -1) {
      uVar3 = uVar2;
      if ((bVar1 & 0x7f) != 0) {
        do {
          uVar3 = uVar2;
          if (*pbVar4 != 0) break;
          pbVar4 = pbVar4 + 1;
          uVar2 = uVar2 - 1;
          uVar3 = uVar2;
        } while (0 < (int)uVar2);
      }
      if ((int)uVar3 < 5) {
        uVar2 = uVar5;
        if (0 < (int)uVar3) {
          do {
            bVar1 = *pbVar4;
            uVar3 = uVar3 - 1;
            pbVar4 = pbVar4 + 1;
            uVar5 = uVar5 << 8 | (uint)bVar1;
          } while (0 < (int)uVar3);
          uVar2 = uVar5;
          if (0x7fffffff < uVar5) {
            return 0;
          }
        }
        goto LAB_14f71eb58;
      }
    }
  }
  return 0;
}

// asn1_string_embed_free @ 14f71ebd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void asn1_string_embed_free(longlong param_1,int param_2)

{
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x10) & 0x10) == 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x163);
    }
    if (param_2 == 0) {
      CRYPTO_free(param_1,"crypto\\asn1\\asn1_lib.c",0x165);
    }
  }
  return;
}

