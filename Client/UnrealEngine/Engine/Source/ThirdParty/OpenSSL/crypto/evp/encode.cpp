// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// EVP_DecodeBlock @ 14f7465f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_DecodeBlock(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14f746bb0(0,param_1,param_2,param_3);
  return;
}

// EVP_DecodeFinal @ 14f746620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_DecodeFinal(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (*param_1 != 0) {
    iVar1 = FUN_14f746bb0(param_1,param_2,param_1 + 2);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    *param_1 = 0;
    *param_3 = iVar1;
  }
  return 1;
}

// EVP_DecodeInit @ 14f746690

void EVP_DecodeInit(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[0xb] = 0;
  return;
}

// EVP_DecodeUpdate @ 14f7466a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong EVP_DecodeUpdate(int *param_1,longlong param_2,int *param_3,byte *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  ulonglong uVar9;
  
  uVar7 = 0;
  iVar14 = 0;
  piVar1 = param_1 + 2;
  iVar6 = 0;
  bVar16 = false;
  iVar4 = *param_1;
  uVar12 = (ulonglong)iVar4;
  uVar11 = uVar7;
  if ((((0 < iVar4) && (uVar11 = 0, *(char *)((longlong)(iVar4 + -1) + (longlong)piVar1) == '=')) &&
      (uVar11 = 1, 1 < iVar4)) &&
     (uVar11 = 1, *(char *)((longlong)(iVar4 + -2) + (longlong)piVar1) == '=')) {
    uVar11 = 2;
  }
  iVar10 = (int)uVar11;
  if (param_5 == 0) goto LAB_14f74685c;
  puVar5 = &DAT_1534be420;
  if ((*(byte *)(param_1 + 0x17) & 2) == 0) {
    puVar5 = &DAT_1534be3a0;
  }
  uVar9 = uVar7;
  uVar13 = uVar12;
  uVar15 = uVar7;
  if (0 < param_5) {
    do {
      iVar14 = (int)uVar15;
      bVar2 = *param_4;
      param_4 = param_4 + 1;
      if ((char)bVar2 < '\0') {
        bVar3 = 0xff;
      }
      else {
        bVar3 = puVar5[bVar2];
      }
      iVar6 = iVar14;
      if (bVar3 == 0xff) goto LAB_14f746885;
      if (bVar2 == 0x3d) {
        uVar11 = (ulonglong)((int)uVar11 + 1);
      }
      else if ((0 < (int)uVar11) && ((bVar3 | 0x13) != 0xf3)) goto LAB_14f746885;
      iVar10 = (int)uVar11;
      if (2 < iVar10) goto LAB_14f746885;
      if (bVar3 == 0xf2) {
        iVar6 = 1;
        bVar16 = true;
        goto LAB_14f74681a;
      }
      if ((bVar3 | 0x13) != 0xf3) {
        if (0x3f < (int)uVar13) goto LAB_14f746885;
        uVar13 = (ulonglong)((int)uVar13 + 1);
        *(byte *)(uVar12 + (longlong)piVar1) = bVar2;
        uVar12 = uVar12 + 1;
      }
      if ((int)uVar13 == 0x40) {
        iVar4 = FUN_14f746bb0(param_1,param_2,piVar1);
        uVar13 = uVar7;
        if ((iVar4 < 0) || (uVar13 = 0, iVar4 < iVar10)) goto LAB_14f746885;
        uVar15 = (ulonglong)(uint)(iVar14 + (iVar4 - iVar10));
        param_2 = param_2 + (iVar4 - iVar10);
        uVar12 = uVar7;
        uVar13 = uVar7;
      }
      iVar14 = (int)uVar15;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < param_5);
    iVar6 = 0;
  }
LAB_14f74681a:
  iVar4 = (int)uVar13;
  if (iVar4 < 1) {
LAB_14f746843:
    iVar6 = iVar14;
    iVar4 = (int)uVar13;
    if (bVar16) goto LAB_14f74685c;
LAB_14f746849:
    if ((iVar4 != 0) || (iVar10 == 0)) {
      uVar7 = 1;
    }
  }
  else {
    if ((uVar13 & 3) == 0) {
      iVar4 = FUN_14f746bb0(param_1,param_2,piVar1);
      uVar13 = 0;
      iVar6 = iVar14;
      if ((-1 < iVar4) && (iVar10 <= iVar4)) {
        uVar13 = uVar7;
        iVar14 = iVar14 + (iVar4 - iVar10);
        goto LAB_14f746843;
      }
    }
    else {
      bVar16 = iVar6 == 0;
      iVar6 = iVar14;
      if (bVar16) goto LAB_14f746849;
    }
LAB_14f746885:
    iVar4 = (int)uVar13;
    uVar7 = 0xffffffff;
  }
LAB_14f74685c:
  *param_3 = iVar6;
  *param_1 = iVar4;
  return uVar7;
}

// EVP_ENCODE_CTX_free @ 14f7468d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_ENCODE_CTX_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\evp\\encode.c",0x86);
  return;
}

// EVP_ENCODE_CTX_new @ 14f746900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_ENCODE_CTX_new(void)

{
  CRYPTO_zalloc(0x60,"crypto\\evp\\encode.c",0x81);
  return;
}

// EVP_ENCODE_CTX_num @ 14f746930

undefined4 EVP_ENCODE_CTX_num(undefined4 *param_1)

{
  return *param_1;
}

// EVP_EncodeBlock @ 14f746940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_EncodeBlock(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14f746d50(0,param_1,param_2,param_3);
  return;
}

// EVP_EncodeFinal @ 14f746970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_EncodeFinal(int *param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*param_1 != 0) {
    uVar1 = FUN_14f746d50(param_1,param_2,param_1 + 2);
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
      uVar2 = (ulonglong)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined1 *)(uVar2 + param_2) = 10;
    }
    *(undefined1 *)((ulonglong)uVar1 + param_2) = 0;
    *param_1 = 0;
    *param_3 = uVar1;
    return;
  }
  *param_3 = 0;
  return;
}

// EVP_EncodeInit @ 14f7469f0

void EVP_EncodeInit(undefined4 *param_1)

{
  param_1[1] = 0x30;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  return;
}

// EVP_EncodeUpdate @ 14f746a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
EVP_EncodeUpdate(uint *param_1,undefined1 *param_2,undefined4 *param_3,void *param_4,int param_5)

{
  undefined8 uVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  int iVar4;
  
  _Size = (size_t)param_5;
  uVar3 = 0;
  *param_3 = 0;
  if (param_5 < 1) {
    uVar1 = 0;
  }
  else {
    if (0x50 < (int)param_1[1]) {
      OPENSSL_die("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)",
                  "crypto\\evp\\encode.c",0xab);
    }
    uVar2 = *param_1;
    iVar4 = param_1[1] - uVar2;
    if (param_5 < iVar4) {
      memcpy((void *)((longlong)param_1 + (longlong)(int)uVar2 + 8),param_4,_Size);
      *param_1 = *param_1 + param_5;
    }
    else {
      if (uVar2 != 0) {
        memcpy((void *)((longlong)param_1 + (longlong)(int)uVar2 + 8),param_4,(longlong)iVar4);
        param_4 = (void *)((longlong)param_4 + (longlong)iVar4);
        _Size = (size_t)(uint)(param_5 - iVar4);
        iVar4 = FUN_14f746d50(param_1,param_2,param_1 + 2,param_1[1]);
        uVar3 = (ulonglong)iVar4;
        param_2 = param_2 + uVar3;
        *param_1 = 0;
        if ((param_1[0x17] & 1) == 0) {
          *param_2 = 10;
          param_2 = param_2 + 1;
          uVar3 = uVar3 + 1;
        }
        *param_2 = 0;
      }
      uVar2 = (uint)_Size;
      if ((int)param_1[1] <= (int)uVar2) {
        do {
          if (0x7fffffff < uVar3) goto LAB_14f746b3f;
          iVar4 = FUN_14f746d50(param_1,param_2,param_4,param_1[1]);
          param_4 = (void *)((longlong)param_4 + (longlong)(int)param_1[1]);
          uVar2 = (int)_Size - param_1[1];
          _Size = (size_t)uVar2;
          param_2 = param_2 + iVar4;
          uVar3 = uVar3 + (longlong)iVar4;
          if ((param_1[0x17] & 1) == 0) {
            *param_2 = 10;
            param_2 = param_2 + 1;
            uVar3 = uVar3 + 1;
          }
          *param_2 = 0;
        } while ((int)param_1[1] <= (int)uVar2);
      }
      if (0x7fffffff < uVar3) {
LAB_14f746b3f:
        *param_3 = 0;
        return 0;
      }
      if (uVar2 != 0) {
        memcpy(param_1 + 2,param_4,(longlong)(int)uVar2);
      }
      *param_1 = uVar2;
      *param_3 = (int)uVar3;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// FUN_14f746bb0 @ 14f746bb0

int FUN_14f746bb0(longlong param_1,undefined1 *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  if ((param_1 == 0) || (puVar8 = &DAT_1534be420, (*(byte *)(param_1 + 0x5c) & 2) == 0)) {
    puVar8 = &DAT_1534be3a0;
  }
  while (((0 < (int)param_4 && (-1 < (char)*param_3)) && (puVar8[*param_3] == -0x20))) {
    param_3 = param_3 + 1;
    param_4 = param_4 - 1;
  }
  for (lVar5 = (longlong)(int)param_4; 3 < lVar5; lVar5 = lVar5 + -1) {
    if ((char)param_3[lVar5 + -1] < '\0') {
      bVar1 = 0xff;
    }
    else {
      bVar1 = puVar8[param_3[lVar5 + -1]];
    }
    if ((bVar1 | 0x13) != 0xf3) break;
    param_4 = param_4 - 1;
  }
  uVar3 = param_4 & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  if (uVar3 != 0) {
    return -1;
  }
  iVar9 = 0;
  if (0 < (int)param_4) {
    do {
      if ((char)*param_3 < '\0') {
        bVar1 = 0xff;
      }
      else {
        bVar1 = puVar8[*param_3];
      }
      if ((char)param_3[1] < '\0') {
        bVar4 = 0xff;
      }
      else {
        bVar4 = puVar8[param_3[1]];
      }
      if ((char)param_3[2] < '\0') {
        bVar2 = 0xff;
      }
      else {
        bVar2 = puVar8[param_3[2]];
      }
      if ((char)param_3[3] < '\0') {
        bVar7 = 0xff;
      }
      else {
        bVar7 = puVar8[param_3[3]];
      }
      param_3 = param_3 + 4;
      if (((char)(bVar4 | bVar1) < '\0') || ((char)(bVar7 | bVar2) < '\0')) {
        return -1;
      }
      iVar10 = iVar10 + 3;
      iVar9 = iVar9 + 4;
      iVar6 = (((uint)bVar1 << 6 | (uint)bVar4) << 6 | (uint)bVar2) << 6;
      *param_2 = (char)((uint)iVar6 >> 0x10);
      param_2[1] = (char)((uint)iVar6 >> 8);
      param_2[2] = (byte)iVar6 | bVar7;
      param_2 = param_2 + 3;
    } while (iVar9 < (int)param_4);
  }
  return iVar10;
}

// evp_encode_ctx_set_flags @ 14f746d40

void evp_encode_ctx_set_flags(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}

// FUN_14f746d50 @ 14f746d50

int FUN_14f746d50(longlong param_1,char *param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  uint3 uVar2;
  char cVar3;
  ulonglong uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = 0;
  if ((param_1 == 0) ||
     (pcVar6 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./",
     (*(byte *)(param_1 + 0x5c) & 2) == 0)) {
    pcVar6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  }
  if (0 < param_4) {
    pbVar5 = (byte *)(param_3 + 1);
    do {
      if (param_4 < 3) {
        uVar4 = (ulonglong)pbVar5[-1] << 0x10;
        if (param_4 == 2) {
          uVar4 = (ulonglong)((uint)uVar4 | (uint)*pbVar5 << 8);
        }
        *param_2 = pcVar6[uVar4 >> 0x12];
        param_2[1] = pcVar6[(uint)(uVar4 >> 0xc) & 0x3f];
        if (param_4 == 1) {
          cVar3 = '=';
        }
        else {
          cVar3 = pcVar6[(uint)(uVar4 >> 6) & 0x3f];
        }
        param_2[2] = cVar3;
        param_2[3] = '=';
      }
      else {
        uVar1 = CONCAT11(pbVar5[-1],*pbVar5);
        uVar2 = CONCAT21(uVar1,pbVar5[1]);
        *param_2 = pcVar6[pbVar5[-1] >> 2];
        param_2[1] = pcVar6[uVar1 >> 4 & 0x3f];
        param_2[2] = pcVar6[uVar2 >> 6 & 0x3f];
        param_2[3] = pcVar6[uVar2 & 0x3f];
      }
      iVar7 = iVar7 + 4;
      pbVar5 = pbVar5 + 3;
      param_4 = param_4 + -3;
      param_2 = param_2 + 4;
    } while (0 < param_4);
    *param_2 = '\0';
    return iVar7;
  }
  *param_2 = '\0';
  return 0;
}

