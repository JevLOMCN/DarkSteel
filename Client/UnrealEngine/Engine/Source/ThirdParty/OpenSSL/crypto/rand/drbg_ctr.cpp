// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// FUN_14f75faa0 @ 14f75faa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f75faa0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f75fabb;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    uVar3 = EVP_CipherInit_ex(*(undefined8 *)(param_1 + 0xa8),0,0,(undefined8 *)(param_1 + 0xd8),0,
                              0xffffffff);
    if ((int)uVar3 != 0) {
      uVar2 = 1;
      puVar4 = (undefined1 *)(param_1 + 0x108);
      iVar5 = 0x10;
      do {
        bVar1 = puVar4[-1];
        puVar4 = puVar4 + -1;
        *puVar4 = (char)(uVar2 + bVar1);
        uVar2 = uVar2 + bVar1 >> 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar5 = FUN_14f7605f0(param_1,param_2,param_3,param_6,param_7,param_4,param_5,uVar6);
      uVar3 = (ulonglong)(iVar5 != 0);
    }
  }
  return uVar3;
}

// FUN_14f75fbb0 @ 14f75fbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f75fbb0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return false;
  }
  uVar2 = 1;
  puVar3 = (undefined1 *)(param_1 + 0x108);
  iVar4 = 0x10;
  do {
    bVar1 = puVar3[-1];
    puVar3 = puVar3 + -1;
    *puVar3 = (char)(uVar2 + bVar1);
    uVar2 = uVar2 + bVar1 >> 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = FUN_14f7605f0(param_1,param_2,param_3,param_4,param_5,0,0,0x14f75fbbc);
  return iVar4 != 0;
}

// FUN_14f75fc50 @ 14f75fc50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f75fc50(longlong param_1,void *param_2,size_t param_3,longlong param_4,ulonglong param_5)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int local_res8;
  undefined8 uVar11;
  
  uVar11 = 0x14f75fc6a;
  iVar9 = 0x10;
  uVar7 = 1;
  if ((param_4 == 0) || (param_5 == 0)) {
    uVar5 = 0;
    lVar8 = param_4;
  }
  else {
    puVar6 = (undefined1 *)(param_1 + 0x108);
    uVar5 = uVar7;
    iVar10 = iVar9;
    do {
      pbVar1 = puVar6 + -1;
      puVar6 = puVar6 + -1;
      uVar4 = (int)uVar5 + (uint)*pbVar1;
      *puVar6 = (char)uVar4;
      uVar5 = (ulonglong)(uVar4 >> 8);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    lVar8 = 0;
    iVar10 = FUN_14f7605f0(param_1,param_4,param_5,0,0,0,0,0x14f75fc6a);
    if (iVar10 == 0) {
      return false;
    }
    uVar5 = uVar7;
    if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
      uVar5 = param_5;
      lVar8 = param_4;
    }
  }
  puVar6 = (undefined1 *)(param_1 + 0x108);
  uVar3 = uVar7;
  iVar10 = iVar9;
  do {
    pbVar1 = puVar6 + -1;
    puVar6 = puVar6 + -1;
    uVar4 = (int)uVar3 + (uint)*pbVar1;
    *puVar6 = (char)uVar4;
    uVar3 = (ulonglong)(uVar4 >> 8);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (param_3 == 0) {
    puVar6 = (undefined1 *)(param_1 + 0x108);
    do {
      pbVar1 = puVar6 + -1;
      puVar6 = puVar6 + -1;
      uVar4 = (int)uVar7 + (uint)*pbVar1;
      *puVar6 = (char)uVar4;
      uVar7 = (ulonglong)(uVar4 >> 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  else {
    memset(param_2,0,param_3);
    do {
      iVar9 = EVP_CipherInit_ex(*(undefined8 *)(param_1 + 0xb0),0,0,0,param_1 + 0xf8,0xffffffff);
      if (iVar9 == 0) {
        return false;
      }
      uVar4 = *(uint *)(param_1 + 0x104);
      iVar9 = (int)param_3;
      if (0x40000000 < param_3) {
        iVar9 = 0x40000000;
      }
      uVar2 = (int)(iVar9 + 0xf + (iVar9 + 0xf >> 0x1f & 0xfU)) >> 4;
      uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) +
              uVar2;
      if (uVar4 < uVar2) {
        if (uVar4 != 0) {
          iVar9 = uVar2 - uVar4;
          uVar4 = 0;
          iVar9 = iVar9 * 0x10;
        }
        iVar10 = 0xc;
        puVar6 = (undefined1 *)(param_1 + 0x104);
        uVar3 = uVar7;
        do {
          pbVar1 = puVar6 + -1;
          puVar6 = puVar6 + -1;
          uVar2 = (int)uVar3 + (uint)*pbVar1;
          *puVar6 = (char)uVar2;
          uVar3 = (ulonglong)(uVar2 >> 8);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      *(uint *)(param_1 + 0x104) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      iVar10 = EVP_CipherUpdate(*(undefined8 *)(param_1 + 0xb0));
      if (iVar10 == 0) {
        return false;
      }
      if (local_res8 != iVar9) {
        return false;
      }
      param_3 = param_3 - (longlong)iVar9;
    } while (param_3 != 0);
  }
  iVar9 = FUN_14f7605f0(param_1,lVar8,uVar5,0,0,0,0,uVar11);
  return iVar9 != 0;
}

// FUN_14f75fe90 @ 14f75fe90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75fe90(longlong param_1)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0xa8));
  EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0xb0));
  EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0xb8));
  OPENSSL_cleanse(param_1 + 0xa8,0xa8);
  return 1;
}

// FUN_14f75ff30 @ 14f75ff30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75ff30(longlong param_1,ulonglong *param_2,ulonglong param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  int iVar9;
  uint local_res20 [2];
  
  iVar9 = 0;
  local_res20[0] = 0x10;
  iVar4 = iVar9;
  if (((0 < (int)param_4) && (iVar4 = 0, 0x1f < param_4)) &&
     (((ulonglong *)((longlong)(int)(param_4 - 1) + param_3) < param_2 ||
      ((ulonglong)((longlong)(int)(param_4 - 1) + (longlong)param_2) < param_3)))) {
    uVar6 = param_4 & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = param_2;
    do {
      iVar9 = iVar9 + 0x20;
      puVar2 = (ulonglong *)((param_3 - (longlong)param_2) + (longlong)puVar7);
      uVar3 = puVar2[1];
      puVar1 = puVar7 + 4;
      *puVar7 = *puVar2 ^ *puVar7;
      puVar7[1] = uVar3 ^ puVar7[1];
      puVar2 = (ulonglong *)((param_3 - (longlong)param_2) + -0x10 + (longlong)puVar1);
      uVar3 = puVar2[1];
      puVar7[2] = *puVar2 ^ puVar7[2];
      puVar7[3] = uVar3 ^ puVar7[3];
      puVar7 = puVar1;
      iVar4 = iVar9;
    } while ((longlong)puVar1 - (longlong)param_2 < (longlong)(int)(param_4 - uVar6));
  }
  lVar8 = (longlong)iVar4;
  if (lVar8 < (int)param_4) {
    pbVar5 = (byte *)(lVar8 + (longlong)param_2);
    lVar8 = (int)param_4 - lVar8;
    do {
      *pbVar5 = *pbVar5 ^ pbVar5[param_3 - (longlong)param_2];
      pbVar5 = pbVar5 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar4 = EVP_CipherUpdate(*(undefined8 *)(param_1 + 0x10),param_2,local_res20,param_2,param_4,
                           0x14f75ff3c);
  if ((iVar4 != 0) && (local_res20[0] == param_4)) {
    return 1;
  }
  return 0;
}

// FUN_14f760070 @ 14f760070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f760070(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f76007a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  if (*(longlong *)(param_1 + 0x28) != 0x10) {
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
  }
  uVar1 = 0x30;
  if (*(longlong *)(param_1 + 0x28) == 0x10) {
    uVar1 = 0x20;
  }
  local_38 = local_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  FUN_14f75ff30(local_48,param_1 + 0x78,&local_48,uVar1);
  return;
}

// FUN_14f7600f0 @ 14f7600f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7600f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    memset((void *)(param_1 + 0x60 + lVar1),0,0x10 - lVar1);
    uVar2 = FUN_14f760070(param_1,param_1 + 0x60);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}

// FUN_14f760150 @ 14f760150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f760150(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f76015a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20 = 0;
  uVar1 = 0x30;
  if (*(longlong *)(param_1 + 0x28) == 0x10) {
    uVar1 = 0x20;
  }
  local_38 = 0x1000000;
  local_28 = 0x2000000;
  FUN_14f75ff30(param_1,(undefined8 *)(param_1 + 0x78),&local_48,uVar1);
  return;
}

// FUN_14f7601f0 @ 14f7601f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f7601f0(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong _Size;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((param_2 != (undefined4 *)0x0) && (param_3 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((lVar1 != 0) && (_Size = 0x10 - lVar1, _Size <= param_3)) {
      memcpy((void *)(param_1 + 0x60 + lVar1),param_2,_Size);
      uVar3 = FUN_14f760070(param_1,param_1 + 0x60);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_3 = param_3 - _Size;
      *(undefined8 *)(param_1 + 0x70) = 0;
      param_2 = (undefined4 *)((longlong)param_2 + _Size);
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      if (*(longlong *)(param_1 + 0x28) != 0x10) {
        local_48 = local_68;
        uStack_44 = uStack_64;
        uStack_40 = uStack_60;
        uStack_3c = uStack_5c;
      }
      uVar3 = 0x30;
      if (*(longlong *)(param_1 + 0x28) == 0x10) {
        uVar3 = 0x20;
      }
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      iVar2 = FUN_14f75ff30(param_1,param_1 + 0x78,&local_68,uVar3);
      if (iVar2 == 0) {
        return 0;
      }
      param_2 = param_2 + 4;
    }
    if (param_3 != 0) {
      memcpy((void *)(param_1 + 0x60 + *(longlong *)(param_1 + 0x70)),param_2,param_3);
      *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + param_3;
    }
  }
  return 1;
}

// FUN_14f760330 @ 14f760330

void FUN_14f760330(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = *(ulonglong *)(param_1 + 0x28);
    if (param_3 < *(ulonglong *)(param_1 + 0x28)) {
      uVar2 = param_3;
    }
    if (uVar2 != 0) {
      pbVar1 = (byte *)(param_1 + 0x30);
      do {
        *pbVar1 = *pbVar1 ^ pbVar1[(param_2 - param_1) + -0x30];
        pbVar1 = pbVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (*(ulonglong *)(param_1 + 0x28) < param_3) {
      param_3 = param_3 - *(ulonglong *)(param_1 + 0x28);
      if (0x10 < param_3) {
        param_3 = 0x10;
      }
      uVar2 = 0;
      if (param_3 != 0) {
        do {
          pbVar1 = (byte *)(param_1 + 0x50 + uVar2);
          *pbVar1 = *pbVar1 ^ *(byte *)(*(longlong *)(param_1 + 0x28) + uVar2 + param_2);
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_3);
      }
    }
  }
  return;
}

// FUN_14f7603c0 @ 14f7603c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7603c0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             longlong param_5,longlong param_6,longlong param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  local_res8[0] = 0x10;
  uVar2 = FUN_14f760150();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = 0;
  if (param_2 != 0) {
    lVar3 = param_3;
  }
  lVar5 = 0;
  if (param_4 != 0) {
    lVar5 = param_5;
  }
  lVar4 = 0;
  if (param_6 != 0) {
    lVar4 = param_7;
  }
  lVar3 = lVar4 + lVar5 + lVar3;
  *(char *)(param_1 + 0xc) = (char)((ulonglong)lVar3 >> 0x18);
  *(char *)((longlong)param_1 + 0x61) = (char)((ulonglong)lVar3 >> 0x10);
  *(char *)((longlong)param_1 + 0x62) = (char)((ulonglong)lVar3 >> 8);
  *(char *)((longlong)param_1 + 99) = (char)lVar3;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  *(char *)((longlong)param_1 + 0x67) = *(char *)(param_1 + 5) + '\x10';
  param_1[0xe] = 8;
  iVar1 = FUN_14f7601f0(param_1,param_2);
  if ((((iVar1 != 0) && (iVar1 = FUN_14f7601f0(param_1,param_4,lVar5), iVar1 != 0)) &&
      (iVar1 = FUN_14f7601f0(param_1,param_6,lVar4), iVar1 != 0)) &&
     (iVar1 = FUN_14f7601f0(param_1,&DAT_154df97b0,1), iVar1 != 0)) {
    lVar3 = param_1[0xe];
    if (lVar3 != 0) {
      memset((void *)((longlong)param_1 + lVar3 + 0x60),0,0x10 - lVar3);
      iVar1 = FUN_14f760070(param_1,param_1 + 0xc);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar6 = 0;
    iVar1 = EVP_CipherInit_ex(*param_1,0,0,param_1 + 0xf,0,CONCAT44(uVar7,0xffffffff));
    if ((((iVar1 != 0) &&
         (iVar1 = EVP_CipherUpdate(*param_1,param_1 + 0xf,local_res8,
                                   (longlong)param_1 + param_1[5] + 0x78,CONCAT44(uVar6,0x10)),
         iVar1 != 0)) &&
        ((local_res8[0] == 0x10 &&
         ((iVar1 = EVP_CipherUpdate(*param_1,param_1 + 0x11,local_res8,param_1 + 0xf,0x10),
          iVar1 != 0 && (local_res8[0] == 0x10)))))) &&
       ((param_1[5] == 0x10 ||
        ((iVar1 = EVP_CipherUpdate(*param_1,param_1 + 0x13,local_res8,param_1 + 0x11,0x10),
         iVar1 != 0 && (local_res8[0] == 0x10)))))) {
      return 1;
    }
  }
  return 0;
}

// FUN_14f7605f0 @ 14f7605f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f7605f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
             ,longlong param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70 [12];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  puVar1 = (undefined8 *)(param_1 + 0xa8);
  local_a0 = *(undefined8 *)(param_1 + 0xf8);
  uStack_98 = *(undefined8 *)(param_1 + 0x100);
  iVar10 = 0x10;
  iVar9 = 0x10;
  local_a8[0] = 0x10;
  puVar8 = (undefined1 *)(param_1 + 0x108);
  uVar7 = 1;
  do {
    bVar6 = puVar8[-1];
    puVar8 = puVar8 + -1;
    *puVar8 = (char)(uVar7 + bVar6);
    uVar7 = uVar7 + bVar6 >> 8;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_90 = *(undefined4 *)(param_1 + 0xf8);
  uStack_8c = *(undefined4 *)(param_1 + 0xfc);
  uStack_88 = *(undefined4 *)(param_1 + 0x100);
  uStack_84 = *(undefined4 *)(param_1 + 0x104);
  if (*(longlong *)(param_1 + 0xd0) == 0x10) {
    bVar6 = 0x20;
  }
  else {
    uVar7 = 1;
    puVar8 = (undefined1 *)(param_1 + 0x108);
    do {
      bVar6 = puVar8[-1];
      puVar8 = puVar8 + -1;
      *puVar8 = (char)(uVar7 + bVar6);
      uVar7 = uVar7 + bVar6 >> 8;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    local_80 = *(undefined4 *)(param_1 + 0xf8);
    uStack_7c = *(undefined4 *)(param_1 + 0xfc);
    uStack_78 = *(undefined4 *)(param_1 + 0x100);
    uStack_74 = *(undefined4 *)(param_1 + 0x104);
    bVar6 = 0x30;
  }
  local_c8 = CONCAT44(local_c8._4_4_,(uint)bVar6);
  iVar9 = EVP_CipherUpdate(*puVar1,local_70,local_a8,&local_a0);
  if (iVar9 == 0) {
    return 0;
  }
  if (local_a8[0] != bVar6) {
    return 0;
  }
  memcpy((void *)(param_1 + 0xd8),local_70,*(size_t *)(param_1 + 0xd0));
  lVar2 = *(longlong *)(param_1 + 0xd0);
  uVar3 = *(undefined4 *)((longlong)local_70 + lVar2 + 4);
  uVar4 = *(undefined4 *)((longlong)local_70 + lVar2 + 8);
  uVar5 = *(undefined4 *)((longlong)local_70 + lVar2 + 0xc);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)((longlong)local_70 + lVar2);
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  *(undefined4 *)(param_1 + 0x100) = uVar4;
  *(undefined4 *)(param_1 + 0x104) = uVar5;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if (((param_2 != 0) || (param_6 != 0)) || (param_4 != 0)) {
      local_b8 = param_5;
      local_c8 = param_7;
      local_c0 = param_4;
      iVar9 = FUN_14f7603c0(puVar1,param_2,param_3,param_6);
      if (iVar9 == 0) {
        return 0;
      }
    }
    if (param_3 == 0) goto LAB_14f76077d;
    param_5 = *(undefined8 *)(param_1 + 0x90);
    param_4 = param_1 + 0x120;
  }
  else {
    FUN_14f760330(puVar1,param_2,param_3);
  }
  FUN_14f760330(puVar1,param_4,param_5);
LAB_14f76077d:
  local_c0._0_4_ = 0xffffffff;
  local_c8 = 0;
  iVar9 = EVP_CipherInit_ex(*puVar1,0,0,param_1 + 0xd8);
  if (iVar9 != 0) {
    local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
    local_c8 = 0;
    iVar9 = EVP_CipherInit_ex(*(undefined8 *)(param_1 + 0xb0),0,0,param_1 + 0xd8);
    if (iVar9 != 0) {
      return 1;
    }
  }
  return 0;
}

// drbg_ctr_init @ 14f760800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 drbg_ctr_init(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0x388) {
    lVar3 = 0x10;
    uVar2 = EVP_aes_128_ecb();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    uVar2 = EVP_aes_128_ctr();
  }
  else if (iVar1 == 0x389) {
    lVar3 = 0x18;
    uVar2 = EVP_aes_192_ecb();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    uVar2 = EVP_aes_192_ctr();
  }
  else {
    if (iVar1 != 0x38a) {
      return 0;
    }
    lVar3 = 0x20;
    uVar2 = EVP_aes_256_ecb();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    uVar2 = EVP_aes_256_ctr();
  }
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined ***)(param_1 + 0x150) = &PTR_FUN_154df97b8;
  *(longlong *)(param_1 + 0xd0) = lVar3;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar2 = EVP_CIPHER_CTX_new();
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    uVar2 = EVP_CIPHER_CTX_new();
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    uVar2 = CONCAT44(uVar4,1);
    iVar1 = EVP_CipherInit_ex(*(longlong *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xc0),0,0,0,
                              uVar2);
    if (iVar1 != 0) {
      uVar2 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),1);
      iVar1 = EVP_CipherInit_ex(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 200),0,0,0
                                ,uVar2);
      uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x30) = (int)lVar3 * 8;
        lVar3 = lVar3 + 0x10;
        *(longlong *)(param_1 + 0x90) = lVar3;
        *(undefined ***)(param_1 + 0x150) = &PTR_FUN_154df97b8;
        if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
          *(longlong *)(param_1 + 0x40) = lVar3;
          *(longlong *)(param_1 + 0x48) = lVar3;
          *(longlong *)(param_1 + 0x60) = lVar3;
          *(longlong *)(param_1 + 0x68) = lVar3;
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0x10000;
          return 1;
        }
        if (*(longlong *)(param_1 + 0xb8) == 0) {
          uVar2 = EVP_CIPHER_CTX_new();
          *(undefined8 *)(param_1 + 0xb8) = uVar2;
        }
        if ((*(longlong *)(param_1 + 0xb8) != 0) &&
           (iVar1 = EVP_CipherInit_ex(*(longlong *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                                      0,&DAT_1534c2a78,0,CONCAT44(uVar4,1)), iVar1 != 0)) {
          *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_1 + 0xd0);
          *(ulonglong *)(param_1 + 0x50) = *(ulonglong *)(param_1 + 0xd0) >> 1;
          *(undefined8 *)(param_1 + 0x48) = 0x7fffffff;
          *(undefined8 *)(param_1 + 0x58) = 0x7fffffff;
          *(undefined8 *)(param_1 + 0x60) = 0x7fffffff;
          *(undefined8 *)(param_1 + 0x68) = 0x7fffffff;
          *(undefined8 *)(param_1 + 0x38) = 0x10000;
          return 1;
        }
      }
    }
  }
  return 0;
}

