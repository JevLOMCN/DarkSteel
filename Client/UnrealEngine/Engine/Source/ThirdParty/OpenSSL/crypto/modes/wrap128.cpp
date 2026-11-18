// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// CRYPTO_128_unwrap @ 14f72fdf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong CRYPTO_128_unwrap(undefined8 param_1,undefined8 *param_2,undefined8 param_3,
                          undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_30 = param_6;
  local_38 = param_5;
  lVar2 = FUN_14f7302b0(param_1,local_28);
  if (lVar2 != 0) {
    puVar3 = &DAT_1534ba7c0;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
    }
    iVar1 = CRYPTO_memcmp(local_28,puVar3,8);
    if (iVar1 == 0) {
      return lVar2;
    }
    OPENSSL_cleanse(param_3,lVar2);
  }
  return 0;
}

// CRYPTO_128_unwrap_pad @ 14f72fea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong CRYPTO_128_unwrap_pad
                    (undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                    ulonglong param_5,code *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (((param_5 & 7) != 0) || (0x7fffffef < param_5 - 0x10)) {
    return 0;
  }
  if (param_5 == 0x10) {
    (*param_6)(param_4,&local_40,param_1);
    local_48 = local_40;
    lVar5 = 8;
    *param_3 = local_38;
    OPENSSL_cleanse(&local_40,0x10);
  }
  else {
    local_50 = param_6;
    local_58 = param_5;
    lVar5 = param_5 - 8;
    lVar2 = FUN_14f7302b0(param_1,&local_48);
    if (lVar5 != lVar2) goto LAB_14f72fff2;
  }
  puVar3 = &DAT_1534ba7c8;
  if (param_2 != (undefined4 *)0x0) {
    puVar3 = param_2;
  }
  iVar1 = CRYPTO_memcmp(&local_48,puVar3,4);
  if (iVar1 == 0) {
    uVar4 = (ulonglong)
            CONCAT31(CONCAT21(CONCAT11(local_48._4_1_,local_48._5_1_),local_48._6_1_),local_48._7_1_
                    );
    if ((((param_5 & 0xfffffffffffffff8) - 0x10 < uVar4) &&
        (uVar4 <= (param_5 & 0xfffffffffffffff8) - 8)) &&
       (iVar1 = CRYPTO_memcmp((longlong)param_3 + uVar4,&DAT_1553e2f18,lVar5 - uVar4), iVar1 == 0))
    {
      return uVar4;
    }
  }
LAB_14f72fff2:
  OPENSSL_cleanse(param_3,param_5);
  return 0;
}

// CRYPTO_128_wrap @ 14f730010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong CRYPTO_128_wrap(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,void *param_4,
                        ulonglong param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (((param_5 & 7) == 0) && (param_5 - 0x10 < 0x7ffffff1)) {
    uVar4 = 1;
    local_58 = param_3;
    memmove(param_3 + 1,param_4,param_5);
    lVar6 = 6;
    puVar3 = &DAT_1534ba7c0;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
    }
    local_50 = *puVar3;
    do {
      if (param_5 != 0) {
        lVar5 = (param_5 - 1 >> 3) + 1;
        puVar3 = param_3 + 1;
        do {
          local_48 = *puVar3;
          (*param_6)(&local_50,&local_50,param_1);
          uVar2 = local_50;
          bVar1 = local_50._7_1_ ^ (byte)uVar4;
          local_50 = CONCAT17(bVar1,(undefined7)local_50);
          if (0xff < uVar4) {
            local_50._6_1_ = SUB81(uVar2,6);
            local_50._5_1_ = SUB81(uVar2,5);
            local_50._4_1_ = SUB81(uVar2,4);
            local_50._4_1_ = local_50._4_1_ ^ (byte)(uVar4 >> 0x18);
            local_50._0_4_ = (undefined4)uVar2;
            local_50 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_50._6_1_ ^ (byte)(uVar4 >> 8)),
                                         local_50._5_1_ ^ (byte)(uVar4 >> 0x10)),
                                CONCAT14(local_50._4_1_,(undefined4)local_50));
          }
          uVar4 = uVar4 + 1;
          *puVar3 = local_48;
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *local_58 = local_50;
    lVar6 = param_5 + 8;
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}

// CRYPTO_128_wrap_pad @ 14f730180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong CRYPTO_128_wrap_pad(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,
                            void *param_4,size_t param_5,code *param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  code *local_50;
  undefined4 local_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  ulonglong local_40;
  undefined8 uStack_38;
  
  uStack_38 = 0x14f730193;
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar3 = param_5 + 7 & 0xfffffffffffffff8;
  if (param_5 - 1 < 0x7fffffff) {
    local_48 = DAT_1534ba7c8;
    if (param_2 != (undefined4 *)0x0) {
      local_48 = *param_2;
    }
    uStack_41 = (undefined1)param_5;
    uStack_44 = (undefined1)(param_5 >> 0x18);
    uStack_43 = (undefined1)(param_5 >> 0x10);
    uStack_42 = (undefined1)(param_5 >> 8);
    if (uVar3 == 8) {
      memmove(param_3 + 1,param_4,param_5);
      *param_3 = CONCAT17(uStack_41,
                          CONCAT16(uStack_42,CONCAT15(uStack_43,CONCAT14(uStack_44,local_48))));
      memset((void *)(param_5 + 8 + (longlong)param_3),0,uVar3 - param_5);
      (*param_6)(param_3,param_3,param_1);
      lVar2 = 0x10;
    }
    else {
      memmove(param_3,param_4,param_5);
      memset((void *)(param_5 + (longlong)param_3),0,uVar3 - param_5);
      local_50 = param_6;
      local_58 = uVar3;
      iVar1 = CRYPTO_128_wrap(param_1,&local_48,param_3,param_3);
      lVar2 = (longlong)iVar1;
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

// FUN_14f7302b0 @ 14f7302b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f7302b0(undefined8 param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
                       longlong param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong _Size;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_88;
  _Size = param_5 - 8;
  if (((_Size & 7) == 0) && (param_5 - 0x18U < 0x7ffffff1)) {
    local_60 = *param_4;
    uVar3 = (_Size >> 3) * 6;
    local_68 = param_2;
    memmove(param_3,param_4 + 1,_Size);
    lVar6 = 6;
    do {
      puVar5 = (undefined8 *)((longlong)param_3 + param_5 + -0x10);
      if (_Size != 0) {
        lVar4 = (param_5 - 9U >> 3) + 1;
        do {
          uVar2 = local_60;
          bVar1 = local_60._7_1_ ^ (byte)uVar3;
          local_60 = CONCAT17(bVar1,(undefined7)local_60);
          if (0xff < uVar3) {
            local_60._6_1_ = SUB81(uVar2,6);
            local_60._5_1_ = SUB81(uVar2,5);
            local_60._4_1_ = SUB81(uVar2,4);
            local_60._4_1_ = local_60._4_1_ ^ (byte)(uVar3 >> 0x18);
            local_60._0_4_ = (undefined4)uVar2;
            local_60 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_60._6_1_ ^ (byte)(uVar3 >> 8)),
                                         local_60._5_1_ ^ (byte)(uVar3 >> 0x10)),
                                CONCAT14(local_60._4_1_,(undefined4)local_60));
          }
          local_58 = *puVar5;
          (*param_6)(&local_60,&local_60,param_1);
          uVar3 = uVar3 - 1;
          *puVar5 = local_58;
          puVar5 = puVar5 + -1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *local_68 = local_60;
  }
  else {
    _Size = 0;
  }
  return _Size;
}

