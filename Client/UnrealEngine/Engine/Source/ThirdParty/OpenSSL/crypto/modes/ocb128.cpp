// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 15

// CRYPTO_ocb128_aad @ 14f730420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CRYPTO_ocb128_aad(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f730432;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar1 = param_1[0xc];
  uVar7 = (param_3 >> 4) + uVar1;
  while( true ) {
    uVar1 = uVar1 + 1;
    if (uVar7 < uVar1) {
      uVar8 = (uint)param_3 & 0xf;
      if ((param_3 & 0xf) != 0) {
        param_1[0xe] = param_1[0xe] ^ param_1[7];
        param_1[0xf] = param_1[0xf] ^ param_1[8];
        uVar1 = param_1[0xf];
        uVar4 = param_1[0xe];
        local_48 = 0;
        uStack_40 = 0;
        memcpy(&local_48,param_2,(ulonglong)uVar8);
        uVar2 = param_1[2];
        *(undefined1 *)((longlong)&local_48 + (ulonglong)uVar8) = 0x80;
        local_48 = local_48 ^ uVar4;
        uStack_40 = uStack_40 ^ uVar1;
        (*(code *)*param_1)(&local_48,&local_48,uVar2);
        param_1[0x10] = param_1[0x10] ^ local_48;
        param_1[0x11] = param_1[0x11] ^ uStack_40;
      }
      param_1[0xc] = uVar7;
      return 1;
    }
    iVar6 = 0;
    for (uVar4 = uVar1; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
      iVar6 = iVar6 + 1;
    }
    puVar5 = (ulonglong *)FUN_14f7313a0(param_1,iVar6);
    if (puVar5 == (ulonglong *)0x0) break;
    param_1[0xe] = param_1[0xe] ^ *puVar5;
    param_1[0xf] = param_1[0xf] ^ puVar5[1];
    uVar8 = *param_2;
    puVar3 = param_2 + 1;
    puVar5 = (ulonglong *)(param_2 + 2);
    param_2 = param_2 + 4;
    local_48 = CONCAT44(*puVar3 ^ *(uint *)((longlong)param_1 + 0x74),
                        uVar8 ^ *(uint *)(param_1 + 0xe));
    uStack_40 = *puVar5 ^ param_1[0xf];
    (*(code *)*param_1)(&local_48,&local_48,param_1[2]);
    param_1[0x10] = param_1[0x10] ^ local_48;
    param_1[0x11] = param_1[0x11] ^ uStack_40;
  }
  return 0;
}

// CRYPTO_ocb128_cleanup @ 14f7305b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ocb128_cleanup(longlong param_1)

{
  if (param_1 != 0) {
    CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x58),*(longlong *)(param_1 + 0x30) << 4,
                      "crypto\\modes\\ocb128.c",0x22d);
    OPENSSL_cleanse(param_1,0xb0);
  }
  return;
}

// CRYPTO_ocb128_copy_ctx @ 14f730600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
CRYPTO_ocb128_copy_ctx(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined8 uVar5;
  
  uVar5 = 0x14f730610;
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  uVar4 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  uVar4 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  uVar4 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x13);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0x15) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
  if (param_3 != 0) {
    param_1[2] = param_3;
  }
  if (param_4 != 0) {
    param_1[3] = param_4;
  }
  if (param_2[0xb] != 0) {
    _Dst = (void *)CRYPTO_malloc(param_2[6] << 4,"crypto\\modes\\ocb128.c",0xcd);
    param_1[0xb] = _Dst;
    if (_Dst == (void *)0x0) {
      ERR_put_error(0xf,0x79,0x41,"crypto\\modes\\ocb128.c",0xce,uVar5);
      return 0;
    }
    memcpy(_Dst,(void *)param_2[0xb],(param_2[5] + 1) * 0x10);
  }
  return 1;
}

// CRYPTO_ocb128_decrypt @ 14f730720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ocb128_decrypt(undefined8 *param_1,uint *param_2,undefined4 *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f730735;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar2 = param_1[0xd];
  uVar7 = param_4 >> 4;
  uVar1 = uVar2 + uVar7;
  if ((uVar7 == 0) || (param_1[4] == 0)) {
    while (uVar2 = uVar2 + 1, uVar2 <= uVar1) {
      iVar5 = 0;
      for (uVar7 = uVar2; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1) {
        iVar5 = iVar5 + 1;
      }
      puVar4 = (ulonglong *)FUN_14f7313a0(param_1,iVar5);
      if (puVar4 == (ulonglong *)0x0) {
        return 0;
      }
      param_1[0x12] = param_1[0x12] ^ *puVar4;
      param_1[0x13] = param_1[0x13] ^ puVar4[1];
      uVar9 = *param_2;
      puVar3 = param_2 + 1;
      puVar4 = (ulonglong *)(param_2 + 2);
      param_2 = param_2 + 4;
      local_58 = CONCAT44(*puVar3 ^ *(uint *)((longlong)param_1 + 0x94),
                          uVar9 ^ *(uint *)(param_1 + 0x12));
      uStack_50 = *puVar4 ^ param_1[0x13];
      (*(code *)param_1[1])(&local_58,&local_58,param_1[3]);
      uVar6 = local_58 ^ param_1[0x12];
      uVar7 = uStack_50 ^ param_1[0x13];
      param_1[0x14] = param_1[0x14] ^ uVar6;
      param_1[0x15] = param_1[0x15] ^ uVar7;
      local_58._0_4_ = (undefined4)uVar6;
      local_58._4_4_ = (undefined4)(uVar6 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar7;
      uStack_50._4_4_ = (undefined4)(uVar7 >> 0x20);
      *param_3 = (undefined4)local_58;
      param_3[1] = local_58._4_4_;
      param_3[2] = (undefined4)uStack_50;
      param_3[3] = uStack_50._4_4_;
      param_3 = param_3 + 4;
      local_58 = uVar6;
      uStack_50 = uVar7;
    }
  }
  else {
    lVar8 = 0;
    uVar2 = uVar1;
    while (uVar2 = uVar2 >> 1, uVar2 != 0) {
      lVar8 = lVar8 + 1;
    }
    lVar8 = FUN_14f7313a0(param_1,lVar8);
    if (lVar8 == 0) {
      return 0;
    }
    local_60 = param_1 + 0x14;
    local_70 = param_1 + 0x12;
    local_78 = param_1[0xd] + 1;
    local_68 = param_1[0xb];
    (*(code *)param_1[4])(param_2,param_3,uVar7,param_1[3]);
  }
  uVar9 = (uint)param_4 & 0xf;
  if ((param_4 & 0xf) != 0) {
    puVar4 = param_1 + 0x12;
    *puVar4 = *puVar4 ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(puVar4,&local_58,param_1[2]);
    FUN_14f731180(param_2,&local_58,uVar9,param_3);
    local_58 = 0;
    uStack_50 = 0;
    memcpy(&local_58,param_3,(ulonglong)uVar9);
    *(undefined1 *)((longlong)&local_58 + (ulonglong)uVar9) = 0x80;
    param_1[0x14] = param_1[0x14] ^ local_58;
    param_1[0x15] = param_1[0x15] ^ uStack_50;
  }
  param_1[0xd] = uVar1;
  return 1;
}

// CRYPTO_ocb128_encrypt @ 14f730950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ocb128_encrypt(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f730965;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar3 = param_1[0xd];
  uVar6 = param_4 >> 4;
  uVar1 = uVar3 + uVar6;
  if ((uVar6 == 0) || (param_1[4] == 0)) {
    while (uVar3 = uVar3 + 1, uVar3 <= uVar1) {
      iVar5 = 0;
      for (uVar6 = uVar3; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1) {
        iVar5 = iVar5 + 1;
      }
      puVar4 = (ulonglong *)FUN_14f7313a0(param_1,iVar5);
      if (puVar4 == (ulonglong *)0x0) {
        return 0;
      }
      param_1[0x12] = param_1[0x12] ^ *puVar4;
      param_1[0x13] = param_1[0x13] ^ puVar4[1];
      local_58 = *param_2;
      uStack_50 = param_2[1];
      param_2 = param_2 + 2;
      param_1[0x14] = param_1[0x14] ^ local_58;
      param_1[0x15] = param_1[0x15] ^ uStack_50;
      local_58 = local_58 ^ param_1[0x12];
      uStack_50 = uStack_50 ^ param_1[0x13];
      (*(code *)*param_1)(&local_58,&local_58,param_1[2]);
      uVar6 = local_58 ^ param_1[0x12];
      uVar2 = uStack_50 ^ param_1[0x13];
      local_58._0_4_ = (undefined4)uVar6;
      local_58._4_4_ = (undefined4)(uVar6 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar2;
      uStack_50._4_4_ = (undefined4)(uVar2 >> 0x20);
      *param_3 = (undefined4)local_58;
      param_3[1] = local_58._4_4_;
      param_3[2] = (undefined4)uStack_50;
      param_3[3] = uStack_50._4_4_;
      param_3 = param_3 + 4;
      local_58 = uVar6;
      uStack_50 = uVar2;
    }
  }
  else {
    lVar7 = 0;
    uVar3 = uVar1;
    while (uVar3 = uVar3 >> 1, uVar3 != 0) {
      lVar7 = lVar7 + 1;
    }
    lVar7 = FUN_14f7313a0(param_1,lVar7);
    if (lVar7 == 0) {
      return 0;
    }
    local_60 = param_1 + 0x14;
    local_70 = param_1 + 0x12;
    local_78 = param_1[0xd] + 1;
    local_68 = param_1[0xb];
    (*(code *)param_1[4])(param_2,param_3,uVar6,param_1[2]);
  }
  uVar8 = (uint)param_4 & 0xf;
  if ((param_4 & 0xf) != 0) {
    puVar4 = param_1 + 0x12;
    *puVar4 = *puVar4 ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(puVar4,&local_58,param_1[2]);
    FUN_14f731180(param_2,&local_58,uVar8,param_3);
    local_58 = 0;
    uStack_50 = 0;
    memcpy(&local_58,param_2,(ulonglong)uVar8);
    *(undefined1 *)((longlong)&local_58 + (ulonglong)uVar8) = 0x80;
    param_1[0x14] = param_1[0x14] ^ local_58;
    param_1[0x15] = param_1[0x15] ^ uStack_50;
  }
  param_1[0xd] = uVar1;
  return 1;
}

// CRYPTO_ocb128_finish @ 14f730b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CRYPTO_ocb128_finish(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f730b8e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_3 - 1U < 0x10) {
    local_38 = param_1[0x14] ^ param_1[0x12] ^ param_1[9];
    local_30 = param_1[0x15] ^ param_1[0x13] ^ param_1[10];
    (*(code *)*param_1)(&local_38,&local_38,param_1[2]);
    local_38 = local_38 ^ param_1[0x10];
    local_30 = local_30 ^ param_1[0x11];
    uVar1 = CRYPTO_memcmp(&local_38,param_2,param_3);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// CRYPTO_ocb128_init @ 14f730c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CRYPTO_ocb128_init(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                       undefined8 param_5,undefined8 param_6)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f730c5b;
  memset(param_1,0,0xb0);
  param_1[5] = 0;
  param_1[6] = 5;
  lVar5 = CRYPTO_malloc(0x50,"crypto\\modes\\ocb128.c");
  param_1[0xb] = lVar5;
  if (lVar5 != 0) {
    param_1[1] = param_5;
    param_1[4] = param_6;
    *param_1 = param_4;
    param_1[2] = param_2;
    param_1[3] = param_3;
    (*param_4)(param_1 + 7,param_1 + 7,param_2);
    cVar2 = *(char *)(param_1 + 7);
    FUN_14f7310c0(param_1 + 7,1,param_1 + 9);
    *(byte *)((longlong)param_1 + 0x57) = *(byte *)((longlong)param_1 + 0x57) ^ cVar2 >> 7 & 0x87U;
    cVar2 = *(char *)(param_1 + 9);
    lVar3 = param_1[0xb];
    FUN_14f7310c0(param_1 + 9,1,lVar3);
    pbVar1 = (byte *)(lVar3 + 0xf);
    *pbVar1 = *pbVar1 ^ cVar2 >> 7 & 0x87U;
    pcVar4 = (char *)param_1[0xb];
    cVar2 = *pcVar4;
    FUN_14f7310c0(pcVar4,1,pcVar4 + 0x10);
    pcVar4[0x1f] = pcVar4[0x1f] ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x10);
    FUN_14f7310c0(lVar3 + 0x10,1,lVar3 + 0x20);
    *(byte *)(lVar3 + 0x2f) = *(byte *)(lVar3 + 0x2f) ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x20);
    FUN_14f7310c0(lVar3 + 0x20,1,lVar3 + 0x30);
    *(byte *)(lVar3 + 0x3f) = *(byte *)(lVar3 + 0x3f) ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x30);
    FUN_14f7310c0(lVar3 + 0x30,1,lVar3 + 0x40);
    *(byte *)(lVar3 + 0x4f) = *(byte *)(lVar3 + 0x4f) ^ cVar2 >> 7 & 0x87U;
    param_1[5] = 4;
  }
  else {
    ERR_put_error(0xf,0x7a,0x41,"crypto\\modes\\ocb128.c",0x9f,uVar6);
  }
  return lVar5 != 0;
}

// CRYPTO_ocb128_new @ 14f730e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CRYPTO_ocb128_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                          undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_malloc(0xb0,"crypto\\modes\\ocb128.c");
  if (lVar2 != 0) {
    iVar1 = CRYPTO_ocb128_init(lVar2,param_1,param_2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      return lVar2;
    }
    CRYPTO_free(lVar2,"crypto\\modes\\ocb128.c",0x8e);
  }
  return 0;
}

// CRYPTO_ocb128_setiv @ 14f730ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 CRYPTO_ocb128_setiv(undefined8 *param_1,void *param_2,size_t param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  byte local_78;
  undefined8 uStack_77;
  undefined4 uStack_6f;
  undefined2 uStack_6b;
  byte abStack_69 [17];
  byte local_58 [4];
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  undefined1 local_48 [15];
  byte bStack_39;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f730ed4;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((param_3 - 1 < 0xf) && (param_4 - 1U < 0x10)) {
    memset(param_1 + 0xc,0,0x50);
    local_78 = (char)param_4 << 4;
    uStack_77 = 0;
    uStack_6f = 0;
    uStack_6b = 0;
    abStack_69[0] = 0;
    memcpy(abStack_69 + (1 - param_3),param_2,param_3);
    uVar1 = param_1[2];
    abStack_69[-param_3] = abStack_69[-param_3] | 1;
    local_48._1_8_ = uStack_77;
    local_48[0] = local_78;
    local_48._9_4_ = uStack_6f;
    local_48._13_2_ = uStack_6b;
    bStack_39 = abStack_69[0] & 0xc0;
    (*(code *)*param_1)(local_48,abStack_69 + 1,uVar1);
    local_58[0] = abStack_69[1] ^ abStack_69[2];
    local_58[1] = abStack_69[3] ^ abStack_69[2];
    local_58[2] = abStack_69[4] ^ abStack_69[3];
    local_58[3] = abStack_69[5] ^ abStack_69[4];
    local_54 = abStack_69[6] ^ abStack_69[5];
    local_53 = abStack_69[7] ^ abStack_69[6];
    local_52 = abStack_69[8] ^ abStack_69[7];
    local_51 = abStack_69[9] ^ abStack_69[8];
    uVar3 = abStack_69[0] & 7;
    uVar4 = (ulonglong)((abStack_69[0] & 0x3f) >> 3);
    FUN_14f7310c0(abStack_69 + uVar4 + 1,uVar3,param_1 + 0x12);
    uVar1 = 1;
    cVar2 = (char)uVar3;
    *(byte *)((longlong)param_1 + 0x9f) =
         *(byte *)((longlong)param_1 + 0x9f) |
         (-1 << (8U - cVar2 & 0x1f) & local_58[uVar4]) >> (8U - cVar2 & 0x1f);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// CRYPTO_ocb128_tag @ 14f7310a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ocb128_tag(void)

{
  FUN_14f7312b0();
  return;
}

// FUN_14f7310c0 @ 14f7310c0

void FUN_14f7310c0(longlong param_1,byte param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte *pbVar5;
  byte bVar6;
  
  bVar6 = 8 - param_2;
  bVar4 = 0;
  param_3 = param_3 - param_1;
  lVar3 = 4;
  pbVar5 = (byte *)(param_1 + 0xf);
  do {
    bVar2 = *pbVar5;
    pbVar1 = pbVar5 + -4;
    pbVar1[param_3 + 4] = bVar2 << (param_2 & 0x1f) | bVar4;
    bVar4 = pbVar5[-1];
    pbVar1[param_3 + 3] = bVar4 << (param_2 & 0x1f) | bVar2 >> (bVar6 & 0x1f);
    bVar2 = pbVar5[-2];
    pbVar1[param_3 + 2] = bVar2 << (param_2 & 0x1f) | bVar4 >> (bVar6 & 0x1f);
    bVar4 = pbVar5[-3] >> (bVar6 & 0x1f);
    pbVar1[param_3 + 1] = pbVar5[-3] << (param_2 & 0x1f) | bVar2 >> (bVar6 & 0x1f);
    lVar3 = lVar3 + -1;
    pbVar5 = pbVar1;
  } while (lVar3 != 0);
  return;
}

// FUN_14f731180 @ 14f731180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f731180(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  
  if (param_3 != 0) {
    uVar7 = 0;
    if (((0x1f < param_3) &&
        ((puVar9 = (ulonglong *)((param_4 - 1) + param_3),
         (longlong)param_2 + (param_3 - 1) < param_4 || (puVar9 < param_2)))) &&
       (((param_3 - 1) + (longlong)param_1 < param_4 || (puVar9 < param_1)))) {
      puVar9 = param_2;
      do {
        uVar4 = puVar9[1];
        uVar7 = uVar7 + 0x20;
        puVar2 = (ulonglong *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar9);
        uVar5 = puVar2[1];
        puVar1 = puVar9 + 4;
        puVar3 = (ulonglong *)((param_4 - (longlong)param_2) + -0x20 + (longlong)puVar1);
        *puVar3 = *puVar2 ^ *puVar9;
        puVar3[1] = uVar5 ^ uVar4;
        puVar2 = (ulonglong *)(((longlong)param_1 - (longlong)param_2) + -0x10 + (longlong)puVar1);
        uVar4 = puVar2[1];
        uVar5 = puVar9[3];
        puVar3 = (ulonglong *)((param_4 - (longlong)param_2) + -0x10 + (longlong)puVar1);
        *puVar3 = *puVar2 ^ puVar9[2];
        puVar3[1] = uVar4 ^ uVar5;
        puVar9 = puVar1;
      } while (uVar7 < (param_3 & 0xffffffffffffffe0));
    }
    if (uVar7 < param_3) {
      pbVar6 = (byte *)(uVar7 + (longlong)param_2);
      lVar8 = param_3 - uVar7;
      do {
        pbVar6[param_4 - (longlong)param_2] =
             pbVar6[(longlong)param_1 - (longlong)param_2] ^ *pbVar6;
        pbVar6 = pbVar6 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}

// FUN_14f731270 @ 14f731270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f731270(char *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  FUN_14f7310c0(param_1,1,param_2);
  *(byte *)(param_2 + 0xf) = *(byte *)(param_2 + 0xf) ^ cVar1 >> 7 & 0x87U;
  return;
}

// FUN_14f7312b0 @ 14f7312b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f7312b0(undefined8 *param_1,void *param_2,size_t param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7312c2;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_3 - 1 < 0x10) {
    local_38 = param_1[0x14] ^ param_1[0x12] ^ param_1[9];
    local_30 = param_1[0x15] ^ param_1[0x13] ^ param_1[10];
    (*(code *)*param_1)(&local_38,&local_38,param_1[2]);
    local_38 = local_38 ^ param_1[0x10];
    local_30 = local_30 ^ param_1[0x11];
    if (param_4 == 0) {
      uVar1 = CRYPTO_memcmp(&local_38,param_2);
    }
    else {
      memcpy(param_2,&local_38,param_3);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// FUN_14f7313a0 @ 14f7313a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7313a0(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  if (param_2 <= uVar5) {
    return param_2 * 0x10 + *(longlong *)(param_1 + 0x58);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x30);
  if (uVar2 <= param_2) {
    lVar4 = ((param_2 - uVar2) + 4 & 0xfffffffffffffffc) + uVar2;
    *(longlong *)(param_1 + 0x30) = lVar4;
    lVar4 = CRYPTO_realloc(*(undefined8 *)(param_1 + 0x58),lVar4 * 0x10,"crypto\\modes\\ocb128.c",
                           0x71);
    if (lVar4 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 0x58) = lVar4;
  }
  if (uVar5 < param_2) {
    lVar4 = param_2 - uVar5;
    lVar6 = uVar5 << 4;
    uVar5 = uVar5 + lVar4;
    do {
      pcVar3 = (char *)(*(longlong *)(param_1 + 0x58) + lVar6);
      cVar1 = *pcVar3;
      FUN_14f7310c0(pcVar3,1,pcVar3 + 0x10);
      pcVar3[0x1f] = pcVar3[0x1f] ^ cVar1 >> 7 & 0x87U;
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *(ulonglong *)(param_1 + 0x28) = uVar5;
  return param_2 * 0x10 + *(longlong *)(param_1 + 0x58);
}

