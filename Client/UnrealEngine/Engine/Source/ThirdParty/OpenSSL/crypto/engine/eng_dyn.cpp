// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 16

// FUN_14f6fd350 @ 14f6fd350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6fd350(undefined8 param_1,undefined4 param_2,uint param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6fd370;
  plVar2 = (longlong *)FUN_14f6fd6c0();
  if (plVar2 == (longlong *)0x0) {
    uVar6 = 0x127;
    uVar5 = 0x70;
  }
  else if (*plVar2 == 0) {
    switch(param_2) {
    case 200:
      if (param_4 != 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_4 + lVar4) != '\0');
        if (lVar4 == 0) {
          param_4 = 0;
        }
      }
      CRYPTO_free(plVar2[3],"crypto\\engine\\eng_dyn.c",0x135);
      if (param_4 == 0) {
        plVar2[3] = 0;
        return 0;
      }
      lVar4 = CRYPTO_strdup(param_4,"crypto\\engine\\eng_dyn.c",0x137);
      plVar2[3] = lVar4;
      return (ulonglong)(lVar4 != 0);
    case 0xc9:
      *(uint *)(plVar2 + 4) = (uint)(param_3 != 0);
      return 1;
    case 0xca:
      if (param_4 != 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_4 + lVar4) != '\0');
        if (lVar4 == 0) {
          param_4 = 0;
        }
      }
      CRYPTO_free(plVar2[5],"crypto\\engine\\eng_dyn.c",0x142);
      if (param_4 == 0) {
        plVar2[5] = 0;
        return 0;
      }
      lVar4 = CRYPTO_strdup(param_4,"crypto\\engine\\eng_dyn.c",0x144);
      plVar2[5] = lVar4;
      return (ulonglong)(lVar4 != 0);
    case 0xcb:
      if (param_3 < 3) {
        *(uint *)(plVar2 + 6) = param_3;
        return 1;
      }
      uVar6 = 0x14a;
      uVar5 = 0x8f;
      break;
    case 0xcc:
      if (param_3 < 3) {
        *(uint *)(plVar2 + 9) = param_3;
        return 1;
      }
      uVar6 = 0x153;
      uVar5 = 0x8f;
      break;
    case 0xcd:
      if (param_4 != 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_4 + lVar4) != '\0');
        if (lVar4 != 0) {
          lVar4 = CRYPTO_strdup(param_4,"crypto\\engine\\eng_dyn.c",0x15f);
          if (lVar4 == 0) {
            uVar6 = 0x161;
            uVar5 = 0x41;
          }
          else {
            iVar1 = OPENSSL_sk_push(plVar2[10],lVar4);
            if (iVar1 != 0) {
              return 1;
            }
            CRYPTO_free(lVar4,"crypto\\engine\\eng_dyn.c",0x165);
            uVar5 = 0x41;
            uVar6 = 0x166;
          }
          break;
        }
      }
      uVar6 = 0x15b;
      uVar5 = 0x8f;
      break;
    case 0xce:
      uVar3 = FUN_14f6fd7c0(param_1,plVar2);
      return uVar3;
    default:
      uVar6 = 0x16e;
      uVar5 = 0x77;
    }
  }
  else {
    uVar6 = 0x12d;
    uVar5 = 100;
  }
  ERR_put_error(0x26,0xb4,uVar5,"crypto\\engine\\eng_dyn.c",uVar6,uVar7);
  return 0;
}

// FUN_14f6fd630 @ 14f6fd630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fd630(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    DSO_free(*param_2);
    CRYPTO_free(param_2[3],"crypto\\engine\\eng_dyn.c",0x8d);
    CRYPTO_free(param_2[5],"crypto\\engine\\eng_dyn.c",0x8e);
    OPENSSL_sk_pop_free(param_2[10],FUN_14f6fdde0);
    CRYPTO_free(param_2,"crypto\\engine\\eng_dyn.c",0x90);
  }
  return;
}

// FUN_14f6fd6c0 @ 14f6fd6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6fd6c0(undefined8 param_1)

{
  int iVar1;
  longlong local_res10 [3];
  undefined4 uVar2;
  
  if (DAT_154df8fa0 < 0) {
    uVar2 = 0;
    iVar1 = CRYPTO_get_ex_new_index(10,0,0,0,0,FUN_14f6fd630);
    if (iVar1 == -1) {
      ERR_put_error(0x26,0xb5,0x90,"crypto\\engine\\eng_dyn.c",CONCAT44(uVar2,0xd2));
      return 0;
    }
    CRYPTO_THREAD_write_lock(global_engine_lock);
    if (DAT_154df8fa0 < 0) {
      DAT_154df8fa0 = iVar1;
    }
    CRYPTO_THREAD_unlock(global_engine_lock);
  }
  local_res10[0] = ENGINE_get_ex_data(param_1,DAT_154df8fa0);
  if ((local_res10[0] == 0) && (iVar1 = FUN_14f6fdb60(param_1,local_res10), iVar1 == 0)) {
    return 0;
  }
  return local_res10[0];
}

// FUN_14f6fd7c0 @ 14f6fd7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fd7c0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6fd7d0;
  if (*param_2 == 0) {
    lVar3 = DSO_new();
    *param_2 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (param_2[3] == 0) {
    if (param_2[5] == 0) {
      return 0;
    }
    DSO_ctrl(*param_2,2,2,0);
    lVar3 = DSO_convert_filename(*param_2,param_2[5]);
    param_2[3] = lVar3;
  }
  iVar1 = FUN_14f6fde10(param_2);
  if (iVar1 == 0) {
    ERR_put_error(0x26,0xb6,0x84,"crypto\\engine\\eng_dyn.c",0x1b2);
    DSO_free(*param_2);
    *param_2 = 0;
    return 0;
  }
  lVar3 = DSO_bind_func(*param_2,param_2[8]);
  param_2[2] = lVar3;
  if (lVar3 == 0) {
    param_2[2] = 0;
    DSO_free(*param_2);
    *param_2 = 0;
    ERR_put_error(0x26,0xb6,0x68,"crypto\\engine\\eng_dyn.c",0x1bf);
    return 0;
  }
  if ((int)param_2[4] == 0) {
    pcVar4 = (code *)DSO_bind_func(*param_2,param_2[7]);
    param_2[1] = (longlong)pcVar4;
    if ((pcVar4 != (code *)0x0) && (uVar2 = (*pcVar4)(0x30000), 0x2ffff < uVar2)) {
      ERR_set_mark();
      lVar3 = DSO_bind_func(*param_2,"EVP_PKEY_get_base_id");
      ERR_pop_to_mark();
      if (lVar3 == 0) goto LAB_14f6fd95c;
    }
    param_2[2] = 0;
    param_2[1] = 0;
    DSO_free(*param_2);
    *param_2 = 0;
    ERR_put_error(0x26,0xb6,0x91,"crypto\\engine\\eng_dyn.c",0x1da);
  }
  else {
LAB_14f6fd95c:
    local_e8 = *param_1;
    uStack_e0 = param_1[1];
    local_d8 = param_1[2];
    uStack_d0 = param_1[3];
    local_c8 = param_1[4];
    uStack_c0 = param_1[5];
    local_b8 = param_1[6];
    uStack_b0 = param_1[7];
    local_a8 = param_1[8];
    uStack_a0 = param_1[9];
    local_98 = param_1[10];
    uStack_90 = param_1[0xb];
    local_88 = param_1[0xc];
    uStack_80 = param_1[0xd];
    local_68 = param_1[0x10];
    uStack_60 = param_1[0x11];
    local_78 = param_1[0xe];
    uStack_70 = param_1[0xf];
    local_58 = param_1[0x12];
    uStack_50 = param_1[0x13];
    local_48 = param_1[0x14];
    uStack_40 = param_1[0x15];
    local_38 = *(undefined4 *)(param_1 + 0x16);
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0xb4);
    uStack_30 = *(undefined4 *)(param_1 + 0x17);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xbc);
    local_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0xc4);
    uStack_20 = *(undefined4 *)(param_1 + 0x19);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0xcc);
    local_18 = param_1[0x1a];
    local_108 = ENGINE_get_static_state();
    CRYPTO_get_mem_functions(local_100,local_f8,local_f0);
    engine_set_all_null(param_1);
    iVar1 = engine_add_dynamic_id(param_1,param_2[2],1);
    if ((iVar1 != 0) && (iVar1 = (*(code *)param_2[2])(param_1,param_2[5],&local_108), iVar1 != 0))
    {
      if ((0 < (int)param_2[6]) && (iVar1 = ENGINE_add(param_1), iVar1 == 0)) {
        if (1 < (int)param_2[6]) {
          ERR_put_error(0x26,0xb6,0x67,"crypto\\engine\\eng_dyn.c",0x20c);
          return 0;
        }
        ERR_clear_error();
      }
      return 1;
    }
    engine_remove_dynamic_id(param_1,1);
    param_2[2] = 0;
    param_2[1] = 0;
    DSO_free(*param_2);
    *param_2 = 0;
    ERR_put_error(0x26,0xb6,0x6d,"crypto\\engine\\eng_dyn.c",0x1fb);
    *param_1 = local_e8;
    param_1[1] = uStack_e0;
    param_1[2] = local_d8;
    param_1[3] = uStack_d0;
    param_1[4] = local_c8;
    param_1[5] = uStack_c0;
    param_1[6] = local_b8;
    param_1[7] = uStack_b0;
    param_1[8] = local_a8;
    param_1[9] = uStack_a0;
    param_1[10] = local_98;
    param_1[0xb] = uStack_90;
    param_1[0xc] = local_88;
    param_1[0xd] = uStack_80;
    param_1[0xe] = local_78;
    param_1[0xf] = uStack_70;
    param_1[0x10] = local_68;
    param_1[0x11] = uStack_60;
    param_1[0x12] = local_58;
    param_1[0x13] = uStack_50;
    param_1[0x14] = local_48;
    param_1[0x15] = uStack_40;
    param_1[0x16] = CONCAT44(uStack_34,local_38);
    param_1[0x17] = CONCAT44(uStack_2c,uStack_30);
    param_1[0x18] = CONCAT44(uStack_24,local_28);
    param_1[0x19] = CONCAT44(uStack_1c,uStack_20);
    param_1[0x1a] = local_18;
  }
  return 0;
}

// FUN_14f6fdb60 @ 14f6fdb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6fdb60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6fdb7a;
  lVar2 = CRYPTO_zalloc(0x58,"crypto\\engine\\eng_dyn.c",0x9c);
  iVar1 = 1;
  if (lVar2 == 0) {
    ERR_put_error(0x26,0xb7,0x41,"crypto\\engine\\eng_dyn.c",0xa0,uVar4);
    iVar1 = 0;
  }
  else {
    lVar3 = OPENSSL_sk_new_null();
    *(longlong *)(lVar2 + 0x50) = lVar3;
    if (lVar3 == 0) {
      ERR_put_error(0x26,0xb7,0x41,"crypto\\engine\\eng_dyn.c",0xa5,uVar4);
      CRYPTO_free(lVar2,"crypto\\engine\\eng_dyn.c",0xa6);
      iVar1 = 0;
    }
    else {
      *(undefined4 *)(lVar2 + 0x48) = 1;
      *(char **)(lVar2 + 0x38) = "v_check";
      *(char **)(lVar2 + 0x40) = "bind_engine";
      CRYPTO_THREAD_write_lock(global_engine_lock);
      lVar3 = ENGINE_get_ex_data(param_1,DAT_154df8fa0);
      *param_2 = lVar3;
      if (lVar3 == 0) {
        iVar1 = ENGINE_set_ex_data(param_1,DAT_154df8fa0,lVar2);
        if (iVar1 != 0) {
          *param_2 = lVar2;
          lVar2 = 0;
        }
      }
      CRYPTO_THREAD_unlock(global_engine_lock);
      if (lVar2 != 0) {
        OPENSSL_sk_free(*(undefined8 *)(lVar2 + 0x50));
      }
      CRYPTO_free(lVar2,"crypto\\engine\\eng_dyn.c",0xbe);
    }
  }
  return iVar1;
}

// FUN_14f6fdcc0 @ 14f6fdcc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6fdcc0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ENGINE_new();
  if (lVar2 != 0) {
    iVar1 = ENGINE_set_id(lVar2,PTR_s_dynamic_154df8f90);
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_name(lVar2,PTR_s_Dynamic_engine_loading_support_154df8f98);
      if (iVar1 != 0) {
        iVar1 = ENGINE_set_init_function(lVar2,&LAB_14f6fd7b0);
        if (iVar1 != 0) {
          iVar1 = ENGINE_set_finish_function(lVar2,&LAB_14f6fd6b0);
          if (iVar1 != 0) {
            iVar1 = ENGINE_set_ctrl_function(lVar2,FUN_14f6fd350);
            if (iVar1 != 0) {
              iVar1 = ENGINE_set_flags(lVar2,4);
              if (iVar1 != 0) {
                iVar1 = ENGINE_set_cmd_defns(lVar2,&DAT_1534b1640);
                if (iVar1 != 0) {
                  return lVar2;
                }
              }
            }
          }
        }
      }
    }
    ENGINE_free(lVar2);
  }
  return 0;
}

// engine_load_dynamic_int @ 14f6fdd90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_load_dynamic_int(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14f6fdcc0();
  if (lVar1 != 0) {
    ENGINE_add(lVar1);
    ENGINE_free(lVar1);
    ERR_clear_error();
    return;
  }
  return;
}

// FUN_14f6fdde0 @ 14f6fdde0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fdde0(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\engine\\eng_dyn.c",0x7a);
  return;
}

// FUN_14f6fde10 @ 14f6fde10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fde10(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 9) != 2) && (lVar2 = DSO_load(*param_1,param_1[3],0,0), lVar2 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 9) != 0) && (iVar1 = OPENSSL_sk_num(param_1[10]), 0 < iVar1)) {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = OPENSSL_sk_value(param_1[10],iVar5);
        lVar2 = DSO_merge(*param_1,param_1[3],uVar3);
        if (lVar2 == 0) {
          return 0;
        }
        lVar4 = DSO_load(*param_1,lVar2,0,0);
        if (lVar4 != 0) {
          CRYPTO_free(lVar2,"crypto\\engine\\eng_dyn.c",0x184);
          return 1;
        }
        CRYPTO_free(lVar2,"crypto\\engine\\eng_dyn.c",0x187);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    return 0;
  }
  return 0;
}

// FUN_14f6fdf10 @ 14f6fdf10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fdf10(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6fdf30 @ 14f6fdf30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fdf30(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6fdf50 @ 14f6fdf50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fdf50(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6fdf70 @ 14f6fdf70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fdf70(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6fdf90 @ 14f6fdf90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fdf90(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6fdfb0 @ 14f6fdfb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fdfb0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6fdfd0 @ 14f6fdfd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6fdfd0(undefined8 *param_1)

{
  longlong lVar1;
  
  ERR_set_mark();
  lVar1 = DSO_bind_func(*param_1,"EVP_PKEY_get_base_id");
  ERR_pop_to_mark();
  return lVar1 != 0;
}

