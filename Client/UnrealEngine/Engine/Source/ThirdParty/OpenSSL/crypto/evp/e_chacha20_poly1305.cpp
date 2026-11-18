// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f6dfff0 @ 14f6dfff0

undefined8 FUN_14f6dfff0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  
  lVar7 = *(longlong *)(param_1 + 0x70);
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_2 + 2);
    lVar9 = 8;
    puVar8 = puVar1;
    do {
      uVar6 = *puVar8;
      puVar4 = puVar8 + (param_2 - (longlong)puVar1) + 3;
      puVar5 = puVar8 + (param_2 - (longlong)puVar1) + 1;
      puVar2 = puVar8 + (param_2 - (longlong)puVar1);
      uVar3 = (longlong)puVar8 - (longlong)puVar1;
      puVar8 = puVar8 + 4;
      *(uint *)(lVar7 + (uVar3 & 0xfffffffffffffffc)) =
           CONCAT31(CONCAT21(CONCAT11(*puVar4,uVar6),*puVar5),*puVar2);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (param_3 != 0) {
    puVar1 = (undefined1 *)(param_3 + 2);
    lVar9 = 4;
    puVar8 = puVar1;
    do {
      uVar6 = *puVar8;
      puVar4 = puVar8 + (param_3 - (longlong)puVar1) + 3;
      puVar5 = puVar8 + (param_3 - (longlong)puVar1) + 1;
      puVar2 = puVar8 + (param_3 - (longlong)puVar1);
      uVar3 = (longlong)puVar8 - (longlong)puVar1;
      puVar8 = puVar8 + 4;
      *(uint *)(lVar7 + 0x20 + (uVar3 & 0xfffffffffffffffc)) =
           CONCAT31(CONCAT21(CONCAT11(*puVar4,uVar6),*puVar5),*puVar2);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(lVar7 + 0x70) = 0;
  return 1;
}

// FUN_14f6e00f0 @ 14f6e00f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e00f0(longlong param_1,byte *param_2,byte *param_3,ulonglong param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar5 = *(longlong *)(param_1 + 0x70);
  uVar9 = *(uint *)(lVar5 + 0x70);
  puVar1 = (uint *)(lVar5 + 0x70);
  if (uVar9 != 0) {
    for (; (param_4 != 0 && (uVar9 < 0x40)); uVar9 = uVar9 + 1) {
      bVar4 = *param_3;
      param_3 = param_3 + 1;
      *param_2 = *(byte *)((ulonglong)uVar9 + 0x30 + lVar5) ^ bVar4;
      param_2 = param_2 + 1;
      param_4 = param_4 - 1;
    }
    *puVar1 = uVar9;
    if (param_4 == 0) {
      return 1;
    }
    if (uVar9 == 0x40) {
      *puVar1 = 0;
      piVar2 = (int *)(lVar5 + 0x20);
      *piVar2 = *piVar2 + 1;
      if (*piVar2 == 0) {
        *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      }
    }
  }
  uVar10 = (uint)param_4 & 0x3f;
  uVar9 = *(uint *)(lVar5 + 0x20);
  uVar6 = param_4 - uVar10;
  if (0x3f < uVar6) {
    do {
      uVar7 = uVar6 >> 6;
      if (0x10000000 < uVar7) {
        uVar7 = 0x10000000;
      }
      uVar9 = uVar9 + (int)uVar7;
      if (uVar9 < uVar7) {
        uVar7 = uVar7 - uVar9;
        uVar9 = 0;
      }
      lVar8 = uVar7 * 0x40;
      ChaCha20_ctr32(param_2,param_3,lVar8,lVar5,(uint *)(lVar5 + 0x20));
      uVar6 = uVar6 + uVar7 * -0x40;
      *(uint *)(lVar5 + 0x20) = uVar9;
      param_3 = param_3 + lVar8;
      param_2 = param_2 + lVar8;
      if (uVar9 == 0) {
        *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      }
    } while (0x3f < uVar6);
  }
  uVar6 = (ulonglong)uVar10;
  if ((param_4 & 0x3f) != 0) {
    puVar3 = (undefined8 *)(lVar5 + 0x30);
    *puVar3 = 0;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
    ChaCha20_ctr32(puVar3,puVar3,0x40,lVar5,lVar5 + 0x20);
    if ((param_4 & 0x3f) != 0) {
      lVar5 = lVar5 - (longlong)param_3;
      lVar8 = (longlong)param_2 - (longlong)param_3;
      do {
        param_3[lVar8] = param_3[lVar5 + 0x30] ^ *param_3;
        param_3 = param_3 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *puVar1 = uVar10;
  }
  return 1;
}

// FUN_14f6e02b0 @ 14f6e02b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6e02b0(longlong param_1,longlong param_2,void *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_47;
  undefined4 local_3f;
  undefined2 local_3b;
  undefined1 local_39;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(param_1 + 0x70);
  if ((param_2 != 0) || (param_3 != (void *)0x0)) {
    *(undefined8 *)(lVar7 + 0xa8) = 0;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    *(undefined8 *)(lVar7 + 0xb8) = 0;
    *(undefined8 *)(lVar7 + 200) = 0xffffffffffffffff;
    if (param_3 == (void *)0x0) {
      lVar7 = *(longlong *)(param_1 + 0x70);
      if (param_2 != 0) {
        puVar8 = (undefined1 *)(param_2 + 2);
        lVar10 = 8;
        puVar9 = puVar8;
        do {
          uVar5 = *puVar9;
          puVar3 = puVar9 + (param_2 - (longlong)puVar8) + 3;
          puVar4 = puVar9 + (param_2 - (longlong)puVar8) + 1;
          puVar1 = puVar9 + (param_2 - (longlong)puVar8);
          uVar2 = (longlong)puVar9 - (longlong)puVar8;
          puVar9 = puVar9 + 4;
          *(uint *)(lVar7 + (uVar2 & 0xfffffffffffffffc)) =
               CONCAT31(CONCAT21(CONCAT11(*puVar3,uVar5),*puVar4),*puVar1);
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      *(undefined4 *)(lVar7 + 0x70) = 0;
    }
    else {
      local_48 = 0;
      local_47 = 0;
      local_3f = 0;
      local_3b = 0;
      local_39 = 0;
      iVar6 = *(int *)(lVar7 + 0xc4);
      if (iVar6 < 0x11) {
        memcpy((void *)((longlong)local_38 - (longlong)iVar6),param_3,(longlong)iVar6);
      }
      FUN_14f6dfff0(param_1,param_2,&local_48,param_4);
      *(undefined4 *)(lVar7 + 0x78) = *(undefined4 *)(lVar7 + 0x24);
      *(undefined4 *)(lVar7 + 0x7c) = *(undefined4 *)(lVar7 + 0x28);
      *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(lVar7 + 0x2c);
    }
  }
  return 1;
}

// FUN_14f6e0420 @ 14f6e0420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f6e0420(longlong param_1,undefined8 *param_2,longlong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  size_t sVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  size_t _Size;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x70);
  sVar3 = *(size_t *)(lVar2 + 200);
  if (*(int *)(lVar2 + 0xbc) == 0) {
    if ((sVar3 != 0xffffffffffffffff) && (param_2 != (undefined8 *)0x0)) {
      uVar7 = FUN_14f6e0b60();
      return uVar7;
    }
    puVar1 = (undefined4 *)(lVar2 + 0x20);
    *puVar1 = 0;
    local_78 = puVar1;
    ChaCha20_ctr32(lVar2 + 0x30,&DAT_1534a9460,0x40,lVar2);
    Poly1305_Init(lVar2 + 0xd0,lVar2 + 0x30);
    *puVar1 = 1;
    *(undefined4 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined4 *)(lVar2 + 0xbc) = 1;
    if (sVar3 != 0xffffffffffffffff) {
      Poly1305_Update(lVar2 + 0xd0,lVar2 + 0x94,0xd);
      *(undefined8 *)(lVar2 + 0xa8) = 0xd;
      *(undefined4 *)(lVar2 + 0xb8) = 1;
    }
  }
  _Size = sVar3;
  if (param_3 != 0) {
    if (param_2 == (undefined8 *)0x0) {
      Poly1305_Update(lVar2 + 0xd0,param_3,param_4);
      *(longlong *)(lVar2 + 0xa8) = *(longlong *)(lVar2 + 0xa8) + param_4;
      *(undefined4 *)(lVar2 + 0xb8) = 1;
      goto LAB_14f6e071a;
    }
    if (*(int *)(lVar2 + 0xb8) != 0) {
      uVar5 = *(uint *)(lVar2 + 0xa8) & 0xf;
      if (uVar5 != 0) {
        Poly1305_Update(lVar2 + 0xd0,&DAT_1534a9460,0x10 - (ulonglong)uVar5);
      }
      *(undefined4 *)(lVar2 + 0xb8) = 0;
    }
    *(undefined8 *)(lVar2 + 200) = 0xffffffffffffffff;
    _Size = param_4;
    if ((sVar3 != 0xffffffffffffffff) && (_Size = sVar3, param_4 != sVar3 + 0x10)) {
      return 0xffffffff;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      Poly1305_Update(lVar2 + 0xd0,param_3,_Size);
      FUN_14f6e00f0(param_1,param_2,param_3,_Size);
    }
    else {
      FUN_14f6e00f0(param_1,param_2,param_3,_Size);
      Poly1305_Update(lVar2 + 0xd0,param_2,_Size);
    }
    *(longlong *)(lVar2 + 0xb0) = *(longlong *)(lVar2 + 0xb0) + _Size;
    param_3 = param_3 + _Size;
    param_2 = (undefined8 *)((longlong)param_2 + _Size);
    if ((param_3 != 0) && (_Size == param_4)) goto LAB_14f6e071a;
  }
  if (*(int *)(lVar2 + 0xb8) != 0) {
    uVar5 = *(uint *)(lVar2 + 0xa8) & 0xf;
    if (uVar5 != 0) {
      Poly1305_Update(lVar2 + 0xd0,&DAT_1534a9460,0x10 - (ulonglong)uVar5);
    }
    *(undefined4 *)(lVar2 + 0xb8) = 0;
  }
  uVar5 = *(uint *)(lVar2 + 0xb0) & 0xf;
  if (uVar5 != 0) {
    Poly1305_Update(lVar2 + 0xd0,&DAT_1534a9460,0x10 - (ulonglong)uVar5);
  }
  Poly1305_Update(lVar2 + 0xd0,lVar2 + 0xa8,0x10);
  puVar8 = (undefined1 *)(lVar2 + 0x84);
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar8 = local_68;
  }
  Poly1305_Final(lVar2 + 0xd0,puVar8);
  *(undefined4 *)(lVar2 + 0xbc) = 0;
  if ((param_3 == 0) || (param_4 == _Size)) {
    if ((*(int *)(param_1 + 0x10) == 0) &&
       (iVar6 = CRYPTO_memcmp(local_68,lVar2 + 0x84,(longlong)*(int *)(lVar2 + 0xc0)), iVar6 != 0))
    {
      return 0xffffffff;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    iVar6 = CRYPTO_memcmp(local_68,param_3,0x10);
    if (iVar6 != 0) {
      memset((void *)((longlong)param_2 - _Size),0,_Size);
      return 0xffffffff;
    }
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x8c);
    *param_2 = *(undefined8 *)(lVar2 + 0x84);
    param_2[1] = uVar4;
  }
LAB_14f6e071a:
  return param_4 & 0xffffffff;
}

// FUN_14f6e0740 @ 14f6e0740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e0740(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar1 = Poly1305_ctx_size();
    OPENSSL_cleanse(*(undefined8 *)(param_1 + 0x70),lVar1 + 0xd0);
  }
  return 1;
}

// FUN_14f6e0780 @ 14f6e0780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6e0780(longlong param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6e079a;
  lVar3 = *(longlong *)(param_1 + 0x70);
  switch(param_2) {
  case 0:
    if (lVar3 == 0) {
      lVar3 = Poly1305_ctx_size();
      lVar3 = CRYPTO_zalloc(lVar3 + 0xd0,"crypto\\evp\\e_chacha20_poly1305.c",0x1fd);
      *(longlong *)(param_1 + 0x70) = lVar3;
      if (lVar3 == 0) {
        ERR_put_error(6,0xb6,0x86,"crypto\\evp\\e_chacha20_poly1305.c",0x1ff,uVar5);
        return 0;
      }
    }
    *(undefined4 *)(lVar3 + 0xc4) = 0xc;
    *(undefined8 *)(lVar3 + 0xa8) = 0;
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 0;
    *(undefined4 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 200) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x94) = 0;
    *(undefined8 *)(lVar3 + 0x9c) = 0;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    if (lVar3 == 0) {
      return 1;
    }
    lVar2 = Poly1305_ctx_size();
    lVar3 = CRYPTO_memdup(lVar3,lVar2 + 0xd0,"crypto\\evp\\e_chacha20_poly1305.c",0x211);
    param_4[0xe] = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
    ERR_put_error(6,0xb6,0xad,"crypto\\evp\\e_chacha20_poly1305.c",0x213);
    return 0;
  case 9:
    if (param_3 - 1U < 0xc) {
      *(int *)(lVar3 + 0xc4) = param_3;
      return 1;
    }
    break;
  case 0x10:
    if ((param_3 - 1U < 0x10) && (*(int *)(param_1 + 0x10) != 0)) {
      memcpy(param_4,(void *)(lVar3 + 0x84),(longlong)param_3);
      return 1;
    }
    break;
  case 0x11:
    if (param_3 - 1U < 0x10) {
      if (param_4 != (undefined8 *)0x0) {
        memcpy((void *)(lVar3 + 0x84),param_4,(longlong)param_3);
        *(int *)(lVar3 + 0xc0) = param_3;
      }
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 0xc) {
      uVar1 = *(undefined4 *)param_4;
      *(undefined4 *)(lVar3 + 0x24) = uVar1;
      *(undefined4 *)(lVar3 + 0x78) = uVar1;
      uVar1 = *(undefined4 *)((longlong)param_4 + 4);
      *(undefined4 *)(lVar3 + 0x28) = uVar1;
      *(undefined4 *)(lVar3 + 0x7c) = uVar1;
      uVar1 = *(undefined4 *)(param_4 + 1);
      *(undefined4 *)(lVar3 + 0x2c) = uVar1;
      *(undefined4 *)(lVar3 + 0x80) = uVar1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      *(undefined8 *)(lVar3 + 0x94) = *param_4;
      *(undefined4 *)(lVar3 + 0x9c) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)(lVar3 + 0xa0) = *(undefined1 *)((longlong)param_4 + 0xc);
      uVar4 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                             *(undefined1 *)((longlong)param_4 + 0xc));
      if (*(int *)(param_1 + 0x10) == 0) {
        if (uVar4 < 0x10) {
          return 0;
        }
        uVar4 = uVar4 - 0x10;
        *(char *)(lVar3 + 0xa0) = (char)uVar4;
        *(char *)(lVar3 + 0x9f) = (char)(uVar4 >> 8);
      }
      *(ulonglong *)(lVar3 + 200) = (ulonglong)uVar4;
      *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar3 + 0x78);
      *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x94) ^ *(uint *)(lVar3 + 0x7c);
      *(uint *)(lVar3 + 0x2c) = *(uint *)(lVar3 + 0x98) ^ *(uint *)(lVar3 + 0x80);
      *(undefined4 *)(lVar3 + 0xbc) = 0;
      return 0x10;
    }
    break;
  case 0x17:
    return 1;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar3 + 0xc4);
    return 1;
  }
  return 0;
}

// EVP_chacha20 @ 14f6e0b40

undefined * EVP_chacha20(void)

{
  return &DAT_1534a9400;
}

// EVP_chacha20_poly1305 @ 14f6e0b50

undefined * EVP_chacha20_poly1305(void)

{
  return &DAT_154df8b00;
}

// FUN_14f6e0b60 @ 14f6e0b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f6e0b60(longlong param_1,undefined8 *param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined1 local_178 [48];
  undefined4 auStack_148 [60];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar2 = *(ulonglong *)(lVar1 + 200);
  if (param_4 == uVar2 + 0x10) {
    uVar8 = (ulonglong)(-((int)&stack0x00000028 + -0x1a0) & 0xf);
    lVar10 = 0;
    local_198 = local_178 + uVar8;
    *(undefined4 *)(lVar1 + 0x20) = 0;
    local_1a8 = lVar1 + 0x20;
    puVar9 = (undefined4 *)((longlong)auStack_148 + uVar8 + 0x10);
    puVar11 = (undefined4 *)((longlong)auStack_148 + uVar8);
    local_190 = param_1;
    if (uVar2 < 0xc1) {
      local_188 = uVar2 + 0x7f & 0xffffffffffffffc0;
      ChaCha20_ctr32(local_198,&DAT_1534a9460,local_188,lVar1);
      Poly1305_Init(lVar1 + 0xd0,local_198);
      *(undefined4 *)(lVar1 + 0x70) = 0;
      lVar10 = 0x10;
      uVar3 = *(undefined4 *)(lVar1 + 0x98);
      uVar4 = *(undefined4 *)(lVar1 + 0x9c);
      uVar5 = *(undefined4 *)(lVar1 + 0xa0);
      *puVar11 = *(undefined4 *)(lVar1 + 0x94);
      *(undefined4 *)((longlong)auStack_148 + uVar8 + 4) = uVar3;
      *(undefined4 *)((longlong)auStack_148 + uVar8 + 8) = uVar4;
      *(undefined4 *)((longlong)auStack_148 + uVar8 + 0xc) = uVar5;
      *(undefined8 *)(lVar1 + 0xa8) = 0xd;
      *(ulonglong *)(lVar1 + 0xb0) = uVar2;
      if (uVar2 != 0) {
        if (*(int *)(local_190 + 0x10) == 0) {
          puVar9 = (undefined4 *)xor128_decrypt_n_pad(param_2,param_3,puVar9,uVar2);
          param_3 = param_3 + uVar2;
          param_2 = (undefined8 *)((longlong)param_2 + uVar2);
          lVar10 = (longlong)puVar9 - (longlong)puVar11;
        }
        else {
          puVar9 = (undefined4 *)xor128_encrypt_n_pad();
          param_3 = param_3 + uVar2;
          param_2 = (undefined8 *)((longlong)param_2 + uVar2);
          lVar10 = (longlong)puVar9 - (longlong)puVar11;
        }
      }
    }
    else {
      local_188 = 0x40;
      ChaCha20_ctr32(local_198,&DAT_1534a9460,0x40,lVar1);
      Poly1305_Init(lVar1 + 0xd0,local_198);
      *(undefined4 *)(lVar1 + 0x20) = 1;
      *(undefined4 *)(lVar1 + 0x70) = 0;
      Poly1305_Update(lVar1 + 0xd0,lVar1 + 0x94,0x10);
      *(undefined8 *)(lVar1 + 0xa8) = 0xd;
      *(ulonglong *)(lVar1 + 0xb0) = uVar2;
      if (*(int *)(local_190 + 0x10) == 0) {
        Poly1305_Update(lVar1 + 0xd0,param_3,uVar2);
        local_1a8 = lVar1 + 0x20;
        ChaCha20_ctr32(param_2,param_3,uVar2,lVar1);
      }
      else {
        local_1a8 = lVar1 + 0x20;
        ChaCha20_ctr32(param_2,param_3,uVar2,lVar1);
        Poly1305_Update(lVar1 + 0xd0,param_2,uVar2);
      }
      param_3 = param_3 + uVar2;
      param_2 = (undefined8 *)((longlong)param_2 + uVar2);
      Poly1305_Update(lVar1 + 0xd0,&DAT_1534a9460,-(int)uVar2 & 0xf);
      puVar11 = puVar9;
    }
    uVar3 = *(undefined4 *)(lVar1 + 0xac);
    uVar4 = *(undefined4 *)(lVar1 + 0xb0);
    uVar5 = *(undefined4 *)(lVar1 + 0xb4);
    *puVar9 = *(undefined4 *)(lVar1 + 0xa8);
    puVar9[1] = uVar3;
    puVar9[2] = uVar4;
    puVar9[3] = uVar5;
    Poly1305_Update(lVar1 + 0xd0,puVar11,lVar10 + 0x10);
    OPENSSL_cleanse(local_198,local_188);
    lVar10 = local_190;
    puVar9 = (undefined4 *)(lVar1 + 0x84);
    if (*(int *)(local_190 + 0x10) == 0) {
      puVar9 = puVar11;
    }
    Poly1305_Final(lVar1 + 0xd0,puVar9);
    *(undefined8 *)(lVar1 + 200) = 0xffffffffffffffff;
    if (*(int *)(lVar10 + 0x10) == 0) {
      iVar7 = CRYPTO_memcmp(puVar11,param_3,0x10);
      if (iVar7 != 0) {
        memset((void *)((longlong)param_2 + (0x10 - param_4)),0,param_4 - 0x10);
        return 0xffffffff;
      }
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 0x8c);
      *param_2 = *(undefined8 *)(lVar1 + 0x84);
      param_2[1] = uVar6;
    }
    param_4 = param_4 & 0xffffffff;
  }
  else {
    param_4 = 0xffffffff;
  }
  return param_4;
}

