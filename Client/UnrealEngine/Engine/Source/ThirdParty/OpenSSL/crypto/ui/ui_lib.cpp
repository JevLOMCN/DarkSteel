// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 55

// UI_add_error_string @ 14f7864f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong UI_add_error_string(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    ERR_put_error(0x28,0x6d,0x43,"crypto\\ui\\ui_lib.c",0x69,0x14f786500);
    return 0xffffffff;
  }
  puVar1 = (undefined4 *)CRYPTO_malloc(0x48,"crypto\\ui\\ui_lib.c");
  if (puVar1 == (undefined4 *)0x0) {
LAB_14f78658f:
    uVar3 = 0xffffffff;
  }
  else {
    *(longlong *)(puVar1 + 2) = param_2;
    puVar1[0x10] = 0;
    puVar1[4] = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *puVar1 = 5;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        FUN_14f787da0(puVar1);
        goto LAB_14f78658f;
      }
    }
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    uVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),puVar1);
    if ((int)uVar3 < 1) {
      FUN_14f787da0(puVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}

// UI_add_info_string @ 14f7865e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong UI_add_info_string(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    ERR_put_error(0x28,0x6d,0x43,"crypto\\ui\\ui_lib.c",0x69,0x14f7865f0);
    return 0xffffffff;
  }
  puVar1 = (undefined4 *)CRYPTO_malloc(0x48,"crypto\\ui\\ui_lib.c");
  if (puVar1 == (undefined4 *)0x0) {
LAB_14f78667f:
    uVar3 = 0xffffffff;
  }
  else {
    *(longlong *)(puVar1 + 2) = param_2;
    puVar1[0x10] = 0;
    puVar1[4] = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *puVar1 = 4;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        FUN_14f787da0(puVar1);
        goto LAB_14f78667f;
      }
    }
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    uVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),puVar1);
    if ((int)uVar3 < 1) {
      FUN_14f787da0(puVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}

// UI_add_input_boolean @ 14f7866d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_add_input_boolean(void)

{
  FUN_14f787e40();
  return;
}

// UI_add_input_string @ 14f786730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong UI_add_input_string(longlong param_1,undefined8 param_2,undefined4 param_3,
                             undefined8 param_4,undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_14f787fc0(param_1,param_2,0,1,param_3,param_4);
  if (lVar1 == 0) {
LAB_14f786781:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        FUN_14f787da0(lVar1);
        goto LAB_14f786781;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_5;
    *(undefined4 *)(lVar1 + 0x2c) = param_6;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    uVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),lVar1);
    if ((int)uVar3 < 1) {
      FUN_14f787da0(lVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}

// UI_add_user_data @ 14f7867e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong UI_add_user_data(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,lVar1);
    lVar1 = 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  param_1[2] = param_2;
  return lVar1;
}

// UI_add_verify_string @ 14f786830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong UI_add_verify_string
                    (longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                    undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_14f787fc0(param_1,param_2,0,2,param_3,param_4);
  if (lVar1 == 0) {
LAB_14f786881:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        FUN_14f787da0(lVar1);
        goto LAB_14f786881;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_5;
    *(undefined4 *)(lVar1 + 0x2c) = param_6;
    *(undefined8 *)(lVar1 + 0x30) = param_7;
    uVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),lVar1);
    if ((int)uVar3 < 1) {
      FUN_14f787da0(lVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}

// UI_construct_prompt @ 14f7868e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong UI_construct_prompt(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 local_38 [2];
  char local_34 [4];
  char local_30 [2];
  char local_2e;
  undefined4 local_2c;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
    local_34 = (char  [4])s_Enter_._0_4_;
    local_30 = (char  [2])s_Enter_._4_2_;
    local_2e = s_Enter_[6];
    local_2c = _s__for_;
    local_28 = DAT_1534dc020;
    local_38[0] = 0x3a;
    if (param_2 != 0) {
      lVar3 = -1;
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(param_2 + lVar2) != '\0');
      iVar1 = (int)lVar2 + 6;
      if (param_3 != 0) {
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)(param_3 + lVar3) != '\0');
        iVar1 = (int)lVar2 + 0xb + (int)lVar3;
      }
      lVar3 = (longlong)(iVar1 + 2);
      lVar2 = CRYPTO_malloc(lVar3,"crypto\\ui\\ui_lib.c",0x179);
      if (lVar2 != 0) {
        OPENSSL_strlcpy(lVar2,local_34,lVar3);
        OPENSSL_strlcat(lVar2,param_2,lVar3);
        if (param_3 != 0) {
          OPENSSL_strlcat(lVar2,&local_2c,lVar3);
          OPENSSL_strlcat(lVar2,param_3,lVar3);
        }
        OPENSSL_strlcat(lVar2,local_38,lVar3);
        return lVar2;
      }
      local_48 = 0x17a;
      ERR_put_error(0x28,0x79,0x41,"crypto\\ui\\ui_lib.c");
    }
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x40))();
  }
  return lVar2;
}

// UI_create_method @ 14f786a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * UI_create_method(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f786a60;
  plVar2 = (longlong *)CRYPTO_zalloc(0x50,"crypto\\ui\\ui_lib.c",0x259);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = CRYPTO_strdup(param_1,"crypto\\ui\\ui_lib.c",0x25a);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      iVar1 = CRYPTO_new_ex_data(0xe,plVar2,plVar2 + 9);
      if (iVar1 != 0) {
        return plVar2;
      }
    }
    CRYPTO_free(*plVar2,"crypto\\ui\\ui_lib.c",0x25e);
  }
  CRYPTO_free(plVar2,"crypto\\ui\\ui_lib.c",0x25f);
  ERR_put_error(0x28,0x70,0x41,"crypto\\ui\\ui_lib.c",0x260,uVar4);
  return (longlong *)0x0;
}

// UI_ctrl @ 14f786b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint UI_ctrl(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    ERR_put_error(0x28,0x6f,0x43,"crypto\\ui\\ui_lib.c",0x22a);
    return 0xffffffff;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      ERR_put_error(0x28,0x6f,0x6a,"crypto\\ui\\ui_lib.c",0x23c);
      return 0xffffffff;
    }
    return *(uint *)(param_1 + 0x20) & 1;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = uVar1 >> 8 & 1;
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x20) = uVar1 | 0x100;
    return uVar2;
  }
  *(uint *)(param_1 + 0x20) = uVar1 & 0xfffffeff;
  return uVar2;
}

// UI_destroy_method @ 14f786bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_destroy_method(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free_ex_data(0xe,param_1,param_1 + 9);
    CRYPTO_free(*param_1,"crypto\\ui\\ui_lib.c",0x271);
    *param_1 = 0;
    CRYPTO_free(param_1,"crypto\\ui\\ui_lib.c",0x273);
  }
  return;
}

// UI_dup_error_string @ 14f786c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int UI_dup_error_string(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f786c5b;
  lVar2 = 0;
  if ((param_2 != 0) && (lVar2 = CRYPTO_strdup(param_2,"crypto\\ui\\ui_lib.c",0x15b), lVar2 == 0)) {
    ERR_put_error(0x28,0x65,0x41,"crypto\\ui\\ui_lib.c",0x15d,uVar4);
    return -1;
  }
  iVar1 = -1;
  if (lVar2 == 0) {
    ERR_put_error(0x28,0x6d,0x43,"crypto\\ui\\ui_lib.c",0x69,uVar4);
    return -1;
  }
  puVar3 = (undefined4 *)CRYPTO_malloc(0x48,"crypto\\ui\\ui_lib.c");
  if (puVar3 == (undefined4 *)0x0) {
    return -1;
  }
  *(longlong *)(puVar3 + 2) = lVar2;
  puVar3[0x10] = 1;
  puVar3[4] = 0;
  *puVar3 = 5;
  *(undefined8 *)(puVar3 + 6) = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(longlong *)(param_1 + 8) = lVar2;
    if (lVar2 == 0) goto LAB_14f786d46;
  }
  *(undefined8 *)(puVar3 + 10) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),puVar3);
  if (0 < iVar1) {
    return iVar1;
  }
  iVar1 = iVar1 + -1;
LAB_14f786d46:
  FUN_14f787da0(puVar3);
  return iVar1;
}

// UI_dup_info_string @ 14f786d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int UI_dup_info_string(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f786d9b;
  lVar2 = 0;
  if ((param_2 != 0) && (lVar2 = CRYPTO_strdup(param_2,"crypto\\ui\\ui_lib.c",0x145), lVar2 == 0)) {
    ERR_put_error(0x28,0x66,0x41,"crypto\\ui\\ui_lib.c",0x147,uVar4);
    return -1;
  }
  iVar1 = -1;
  if (lVar2 == 0) {
    ERR_put_error(0x28,0x6d,0x43,"crypto\\ui\\ui_lib.c",0x69,uVar4);
    return -1;
  }
  puVar3 = (undefined4 *)CRYPTO_malloc(0x48,"crypto\\ui\\ui_lib.c");
  if (puVar3 == (undefined4 *)0x0) {
    return -1;
  }
  *(longlong *)(puVar3 + 2) = lVar2;
  puVar3[0x10] = 1;
  puVar3[4] = 0;
  *puVar3 = 4;
  *(undefined8 *)(puVar3 + 6) = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(longlong *)(param_1 + 8) = lVar2;
    if (lVar2 == 0) goto LAB_14f786e86;
  }
  *(undefined8 *)(puVar3 + 10) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),puVar3);
  if (0 < iVar1) {
    return iVar1;
  }
  iVar1 = iVar1 + -1;
LAB_14f786e86:
  FUN_14f787da0(puVar3);
  return iVar1;
}

// UI_dup_input_boolean @ 14f786ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
UI_dup_input_boolean
          (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
          undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar6 = 0x14f786ee4;
  lVar3 = 0;
  lVar4 = 0;
  lVar1 = lVar3;
  lVar2 = lVar3;
  if (param_2 == 0) {
LAB_14f786f2c:
    if (param_3 != 0) {
      lVar2 = CRYPTO_strdup(param_3,"crypto\\ui\\ui_lib.c",0x118);
      if (lVar2 == 0) {
        uVar6 = CONCAT44(uVar5,0x11a);
        goto LAB_14f786fb7;
      }
    }
    lVar4 = lVar3;
    if (param_4 != 0) {
      lVar4 = CRYPTO_strdup(param_4,"crypto\\ui\\ui_lib.c",0x120);
      if (lVar4 == 0) {
        uVar6 = CONCAT44(uVar5,0x122);
        goto LAB_14f786fb7;
      }
    }
    if (param_5 != 0) {
      lVar3 = CRYPTO_strdup(param_5,"crypto\\ui\\ui_lib.c",0x128);
      if (lVar3 == 0) {
        uVar6 = CONCAT44(uVar5,0x12a);
        goto LAB_14f786fb7;
      }
    }
    uVar6 = FUN_14f787e40(param_1,lVar1,lVar2,lVar4,lVar3,1,3,param_6,param_7,uVar6);
  }
  else {
    lVar1 = CRYPTO_strdup(param_2,"crypto\\ui\\ui_lib.c",0x110);
    if (lVar1 != 0) goto LAB_14f786f2c;
    uVar6 = CONCAT44(uVar5,0x112);
    lVar4 = lVar3;
LAB_14f786fb7:
    ERR_put_error(0x28,0x6e,0x41,"crypto\\ui\\ui_lib.c",uVar6);
    CRYPTO_free(lVar1,"crypto\\ui\\ui_lib.c",0x133);
    CRYPTO_free(lVar2,"crypto\\ui\\ui_lib.c",0x134);
    CRYPTO_free(lVar4,"crypto\\ui\\ui_lib.c",0x135);
    CRYPTO_free(0,"crypto\\ui\\ui_lib.c",0x136);
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

// UI_dup_input_string @ 14f787090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int UI_dup_input_string(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7870a5;
  lVar2 = 0;
  if ((param_2 != 0) && (lVar2 = CRYPTO_strdup(param_2,"crypto\\ui\\ui_lib.c",0xd5), lVar2 == 0)) {
    ERR_put_error(0x28,0x67,0x41,"crypto\\ui\\ui_lib.c",0xd7,uVar4);
    return 0;
  }
  iVar1 = -1;
  lVar2 = FUN_14f787fc0(param_1,lVar2,1,1,param_3,param_4);
  if (lVar2 == 0) {
    return -1;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *(longlong *)(param_1 + 8) = lVar3;
    if (lVar3 == 0) goto LAB_14f787171;
  }
  *(undefined4 *)(lVar2 + 0x28) = param_5;
  *(undefined4 *)(lVar2 + 0x2c) = param_6;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),lVar2);
  if (0 < iVar1) {
    return iVar1;
  }
  iVar1 = iVar1 + -1;
LAB_14f787171:
  FUN_14f787da0(lVar2);
  return iVar1;
}

// UI_dup_user_data @ 14f7871a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 UI_dup_user_data(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f7871ac;
  pcVar1 = *(code **)(*param_1 + 0x30);
  if ((pcVar1 == (code *)0x0) || (*(longlong *)(*param_1 + 0x38) == 0)) {
    uVar4 = 0x19b;
    uVar3 = 0x70;
  }
  else {
    lVar2 = (*pcVar1)();
    if (lVar2 != 0) {
      UI_add_user_data(param_1,lVar2);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
      return 0;
    }
    uVar4 = 0x1a1;
    uVar3 = 0x41;
  }
  ERR_put_error(0x28,0x76,uVar3,"crypto\\ui\\ui_lib.c",uVar4,uVar5);
  return 0xffffffff;
}

// UI_dup_verify_string @ 14f787230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
UI_dup_verify_string
          (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f787245;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = CRYPTO_strdup(param_2,"crypto\\ui\\ui_lib.c",0xf1);
    if (lVar1 == 0) {
      ERR_put_error(0x28,0x6a,0x41,"crypto\\ui\\ui_lib.c",0xf3);
      return 0xffffffff;
    }
  }
  uVar2 = FUN_14f7880b0(param_1,lVar1,1,2,param_3,param_4,param_5,param_6,param_7,uVar2);
  return uVar2;
}

// UI_free @ 14f787300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_free(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 4) & 2) != 0) {
      (**(code **)(*param_1 + 0x38))(param_1,param_1[2]);
    }
    OPENSSL_sk_pop_free(param_1[1],FUN_14f787da0);
    CRYPTO_free_ex_data(0xb,param_1,param_1 + 3);
    CRYPTO_THREAD_lock_free(param_1[5]);
    CRYPTO_free(param_1,"crypto\\ui\\ui_lib.c",0x53);
  }
  return;
}

// UI_get0_action_string @ 14f787380

undefined8 UI_get0_action_string(int *param_1)

{
  if (*param_1 != 3) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}

// UI_get0_output_string @ 14f7873a0

undefined8 UI_get0_output_string(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}

// UI_get0_result @ 14f7873b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 UI_get0_result(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7873c0;
  if (param_2 < 0) {
    ERR_put_error(0x28,0x6b,0x67,"crypto\\ui\\ui_lib.c",0x1b3,0x14f7873c0);
  }
  else {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (iVar1 <= param_2) {
      ERR_put_error(0x28,0x6b,0x66,"crypto\\ui\\ui_lib.c",0x1b7,uVar3);
      return 0;
    }
    piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),param_2);
    if (*piVar2 - 1U < 2) {
      return *(undefined8 *)(piVar2 + 6);
    }
  }
  return 0;
}

// UI_get0_result_string @ 14f787460

undefined8 UI_get0_result_string(int *param_1)

{
  if (*param_1 - 1U < 2) {
    return *(undefined8 *)(param_1 + 6);
  }
  return 0;
}

// UI_get0_test_string @ 14f787480

undefined8 UI_get0_test_string(int *param_1)

{
  if (*param_1 != 2) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0xc);
}

// UI_get0_user_data @ 14f7874a0

undefined8 UI_get0_user_data(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}

// UI_get_ex_data @ 14f7874b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x18);
  return;
}

// UI_get_input_flags @ 14f7874d0

undefined4 UI_get_input_flags(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// UI_get_result_length @ 14f7874f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int UI_get_result_length(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f787500;
  if (param_2 < 0) {
    ERR_put_error(0x28,0x77,0x67,"crypto\\ui\\ui_lib.c",0x1c0,0x14f787500);
  }
  else {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (iVar1 <= param_2) {
      ERR_put_error(0x28,0x77,0x66,"crypto\\ui\\ui_lib.c",0x1c4,uVar3);
      return -1;
    }
    piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),param_2);
    if (*piVar2 - 1U < 2) {
      return piVar2[8];
    }
  }
  return -1;
}

// UI_get_string_type @ 14f787600

undefined4 UI_get_string_type(undefined4 *param_1)

{
  return *param_1;
}

// UI_method_get_closer @ 14f787610

undefined8 UI_method_get_closer(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}

// UI_method_get_ex_data @ 14f787670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_method_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x48);
  return;
}

// UI_method_get_opener @ 14f7876b0

undefined8 UI_method_get_opener(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}

// UI_method_get_reader @ 14f7876f0

undefined8 UI_method_get_reader(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}

// UI_method_get_writer @ 14f787710

undefined8 UI_method_get_writer(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}

// UI_method_set_closer @ 14f787730

undefined8 UI_method_set_closer(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = param_2;
    return 0;
  }
  return 0xffffffff;
}

// UI_method_set_ex_data @ 14f787770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_method_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x48);
  return;
}

// UI_method_set_opener @ 14f7877b0

undefined8 UI_method_set_opener(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
    return 0;
  }
  return 0xffffffff;
}

// UI_method_set_reader @ 14f7877f0

undefined8 UI_method_set_reader(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return 0;
  }
  return 0xffffffff;
}

// UI_method_set_writer @ 14f787810

undefined8 UI_method_set_writer(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    return 0;
  }
  return 0xffffffff;
}

// UI_new @ 14f787830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_new(void)

{
  UI_new_method(0);
  return;
}

// UI_new_method @ 14f787850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * UI_new_method(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f787860;
  plVar2 = (longlong *)CRYPTO_zalloc(0x30,"crypto\\ui\\ui_lib.c",0x19);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x28,0x68,0x41,"crypto\\ui\\ui_lib.c",0x1c,uVar5);
    return (longlong *)0x0;
  }
  lVar3 = CRYPTO_THREAD_lock_new();
  plVar2[5] = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0x28,0x68,0x41,"crypto\\ui\\ui_lib.c",0x22,uVar5);
    uVar4 = 0x23;
  }
  else {
    if (param_1 == 0) {
      param_1 = UI_get_default_method();
      if (param_1 == 0) {
        param_1 = UI_null();
      }
    }
    *plVar2 = param_1;
    iVar1 = CRYPTO_new_ex_data(0xb,plVar2,plVar2 + 3);
    if (iVar1 != 0) {
      return plVar2;
    }
    uVar4 = 0x2e;
  }
  CRYPTO_free(plVar2,"crypto\\ui\\ui_lib.c",uVar4);
  return (longlong *)0x0;
}

// UI_process @ 14f787950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * UI_process(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar7;
  char *pcVar6;
  
  uVar7 = 0x14f787965;
  if ((*(code **)(*param_1 + 8) != (code *)0x0) &&
     (iVar1 = (**(code **)(*param_1 + 8))(), iVar1 < 1)) {
    pcVar4 = "opening session";
    pcVar6 = (char *)0xffffffff;
    goto LAB_14f787a81;
  }
  if ((*(uint *)(param_1 + 4) & 0x100) != 0) {
    ERR_print_errors_cb(FUN_14f788160,param_1);
  }
  pcVar4 = (char *)0x0;
  iVar1 = OPENSSL_sk_num(param_1[1]);
  pcVar6 = pcVar4;
  if (0 < iVar1) {
    do {
      if (*(longlong *)(*param_1 + 0x10) != 0) {
        uVar2 = OPENSSL_sk_value(param_1[1],pcVar6);
        iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar2);
        if (iVar1 < 1) {
          pcVar4 = "writing strings";
          pcVar6 = (char *)0xffffffff;
          goto LAB_14f787a81;
        }
      }
      uVar5 = (int)pcVar6 + 1;
      pcVar6 = (char *)(ulonglong)uVar5;
      iVar1 = OPENSSL_sk_num(param_1[1]);
    } while ((int)uVar5 < iVar1);
  }
  if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar1 == -1) {
LAB_14f787ab8:
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      pcVar4 = "processing";
      pcVar6 = (char *)0xfffffffe;
      goto LAB_14f787a81;
    }
    if (iVar1 == 0) {
      pcVar4 = "flushing";
      pcVar6 = (char *)0xffffffff;
      goto LAB_14f787a81;
    }
  }
  iVar1 = OPENSSL_sk_num(param_1[1]);
  pcVar3 = pcVar4;
  pcVar6 = pcVar4;
  if (0 < iVar1) {
    do {
      if (*(longlong *)(*param_1 + 0x20) != 0) {
        uVar2 = OPENSSL_sk_value(param_1[1],pcVar3);
        iVar1 = (**(code **)(*param_1 + 0x20))(param_1,uVar2);
        if (iVar1 == -1) goto LAB_14f787ab8;
        if (iVar1 == 0) {
          pcVar4 = "reading strings";
          pcVar6 = (char *)0xffffffff;
          break;
        }
      }
      uVar5 = (int)pcVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_1[1]);
      pcVar3 = (char *)(ulonglong)uVar5;
    } while ((int)uVar5 < iVar1);
  }
LAB_14f787a81:
  if ((*(code **)(*param_1 + 0x28) == (code *)0x0) ||
     (iVar1 = (**(code **)(*param_1 + 0x28))(param_1), 0 < iVar1)) {
    if ((int)pcVar6 != -1) {
      return pcVar6;
    }
  }
  else {
    pcVar3 = "closing session";
    if (pcVar4 != (char *)0x0) {
      pcVar3 = pcVar4;
    }
    pcVar6 = (char *)0xffffffff;
    pcVar4 = pcVar3;
  }
  ERR_put_error(0x28,0x71,0x6b,"crypto\\ui\\ui_lib.c",0x221,uVar7);
  ERR_add_error_data(2,"while ",pcVar4);
  return pcVar6;
}

// UI_set_ex_data @ 14f787b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x18);
  return;
}

// UI_set_method @ 14f787b40

undefined8 UI_set_method(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_2;
}

// UI_set_result @ 14f787b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void UI_set_result(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_3 + lVar1) != '\0');
  UI_set_result_ex();
  return;
}

// UI_set_result_ex @ 14f787b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 UI_set_result_ex(longlong param_1,int *param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t _Size;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  char *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14f787b8f;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  iVar2 = *param_2;
  _Size = (size_t)param_4;
  if (0 < iVar2) {
    if (iVar2 < 3) {
      BIO_snprintf(local_48,0xd,"%d",param_2[10]);
      BIO_snprintf(local_58,0xd,"%d",param_2[0xb]);
      if (param_4 < param_2[10]) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x389);
        uVar4 = 0x65;
      }
      else {
        if (param_4 <= param_2[0xb]) {
          if (*(void **)(param_2 + 6) != (void *)0x0) {
            memcpy(*(void **)(param_2 + 6),param_3,_Size);
            if (param_4 <= param_2[0xb]) {
              *(undefined1 *)(_Size + *(longlong *)(param_2 + 6)) = 0;
            }
            *(size_t *)(param_2 + 8) = _Size;
            return 0;
          }
          local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x398);
          goto LAB_14f787d01;
        }
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x390);
        uVar4 = 100;
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      ERR_put_error(0x28,0x78,uVar4,"crypto\\ui\\ui_lib.c");
      local_60 = " characters";
      local_68 = local_58;
      ERR_add_error_data(5,"You must type in ",local_48," to ");
      return 0xffffffff;
    }
    if (iVar2 == 3) {
      if (*(undefined1 **)(param_2 + 6) == (undefined1 *)0x0) {
        local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x3a6);
LAB_14f787d01:
        ERR_put_error(0x28,0x78,0x69,"crypto\\ui\\ui_lib.c");
        return 0xffffffff;
      }
      **(undefined1 **)(param_2 + 6) = 0;
      cVar1 = *param_3;
      while (cVar1 != '\0') {
        pcVar3 = strchr(*(char **)(param_2 + 0xc),(int)*param_3);
        if (pcVar3 != (char *)0x0) {
          **(undefined1 **)(param_2 + 6) = **(undefined1 **)(param_2 + 0xc);
          return 0;
        }
        pcVar3 = strchr(*(char **)(param_2 + 0xe),(int)*param_3);
        if (pcVar3 != (char *)0x0) {
          **(undefined1 **)(param_2 + 6) = **(undefined1 **)(param_2 + 0xe);
          return 0;
        }
        param_3 = param_3 + 1;
        cVar1 = *param_3;
      }
    }
  }
  return 0;
}

// FUN_14f787d60 @ 14f787d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f787d60(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = OPENSSL_sk_new_null();
    *(longlong *)(param_1 + 8) = lVar1;
    if (lVar1 == 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

// FUN_14f787da0 @ 14f787da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f787da0(int *param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 2),"crypto\\ui\\ui_lib.c",0x37);
    if (*param_1 == 3) {
      CRYPTO_free(*(undefined8 *)(param_1 + 10),"crypto\\ui\\ui_lib.c",0x3a);
      CRYPTO_free(*(undefined8 *)(param_1 + 0xc),"crypto\\ui\\ui_lib.c",0x3b);
      CRYPTO_free(*(undefined8 *)(param_1 + 0xe),"crypto\\ui\\ui_lib.c",0x3c);
    }
  }
  CRYPTO_free(param_1,"crypto\\ui\\ui_lib.c",0x46);
  return;
}

// FUN_14f787e40 @ 14f787e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f787e40(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       char *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined8 param_9)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f787e54;
  if (param_4 == (char *)0x0) {
    ERR_put_error(0x28,0x6c,0x43,"crypto\\ui\\ui_lib.c",0xa0,0x14f787e54);
    return 0xffffffff;
  }
  if (param_5 == (char *)0x0) {
    ERR_put_error(0x28,0x6c,0x43,"crypto\\ui\\ui_lib.c",0xa2,0x14f787e54);
    return 0xffffffff;
  }
  cVar1 = *param_4;
  pcVar6 = param_4;
  while (cVar1 != '\0') {
    pcVar2 = strchr(param_5,(int)*pcVar6);
    if (pcVar2 != (char *)0x0) {
      ERR_put_error(0x28,0x6c,0x68,"crypto\\ui\\ui_lib.c",0xa7,uVar7);
    }
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  lVar3 = FUN_14f787fc0(param_1,param_2,param_6,param_7,param_8,param_9);
  if (lVar3 == 0) {
LAB_14f787f6e:
    uVar5 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar4 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 8) = lVar4;
      if (lVar4 == 0) {
        FUN_14f787da0(lVar3);
        goto LAB_14f787f6e;
      }
    }
    *(undefined8 *)(lVar3 + 0x28) = param_3;
    *(char **)(lVar3 + 0x30) = param_4;
    *(char **)(lVar3 + 0x38) = param_5;
    uVar5 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),lVar3);
    if ((int)uVar5 < 1) {
      FUN_14f787da0(lVar3);
      uVar5 = (ulonglong)((int)uVar5 - 1);
    }
  }
  return uVar5;
}

// FUN_14f787fc0 @ 14f787fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_14f787fc0(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5,
                   longlong param_6)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (param_2 == 0) {
    ERR_put_error(0x28,0x6d,0x43,"crypto\\ui\\ui_lib.c",0x69,0x14f787fdb);
  }
  else if ((param_4 - 1U < 3) && (param_6 == 0)) {
    ERR_put_error(0x28,0x6d,0x69,"crypto\\ui\\ui_lib.c",0x6c,0x14f787fdb);
  }
  else {
    piVar1 = (int *)CRYPTO_malloc(0x48,"crypto\\ui\\ui_lib.c");
    if (piVar1 != (int *)0x0) {
      *(longlong *)(piVar1 + 2) = param_2;
      piVar1[4] = param_5;
      piVar1[0x10] = (uint)(param_3 != 0);
      *piVar1 = param_4;
      *(longlong *)(piVar1 + 6) = param_6;
    }
  }
  return piVar1;
}

// FUN_14f7880b0 @ 14f7880b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7880b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                       undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_14f787fc0();
  if (lVar1 == 0) {
LAB_14f788102:
    uVar3 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        FUN_14f787da0(lVar1);
        goto LAB_14f788102;
      }
    }
    *(undefined4 *)(lVar1 + 0x28) = param_7;
    *(undefined4 *)(lVar1 + 0x2c) = param_8;
    *(undefined8 *)(lVar1 + 0x30) = param_9;
    uVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5,param_6);
    if ((int)uVar3 < 1) {
      FUN_14f787da0(lVar1);
      return (ulonglong)((int)uVar3 - 1);
    }
  }
  return uVar3;
}

// FUN_14f788160 @ 14f788160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f788160(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f78816a;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_58 = 5;
  if (*(code **)(*param_3 + 0x10) != (code *)0x0) {
    local_50 = param_1;
    iVar1 = (**(code **)(*param_3 + 0x10))(param_3,&local_58);
    if (iVar1 < 1) {
      return 0xffffffff;
    }
  }
  return 0;
}

// FUN_14f7881e0 @ 14f7881e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7881e0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f788200 @ 14f788200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f788200(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f788220 @ 14f788220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f788220(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f788240 @ 14f788240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f788240(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f788260 @ 14f788260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f788260(void)

{
  OPENSSL_sk_value();
  return;
}

