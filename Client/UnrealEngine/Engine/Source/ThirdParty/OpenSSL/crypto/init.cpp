// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 35

// OPENSSL_atexit @ 14f6a4ab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_atexit(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6a4abc;
  puVar1 = (undefined8 *)CRYPTO_malloc(0x10,"crypto\\init.c",0x327);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0xf,0x72,0x41,"crypto\\init.c",0x328,uVar2);
    return 0;
  }
  *puVar1 = param_1;
  puVar1[1] = DAT_1553dffb8;
  DAT_1553dffb8 = puVar1;
  return 1;
}

// OPENSSL_cleanup @ 14f6a4b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_cleanup(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [8];
  
  if ((DAT_1553dffc8 != 0) && (DAT_1553dffb0 == 0)) {
    DAT_1553dffb0 = 1;
    uVar3 = CRYPTO_THREAD_get_local(&DAT_154df8090);
    CRYPTO_THREAD_set_local(&DAT_154df8090,0);
    FUN_14f6a59b0(uVar3);
    puVar2 = DAT_1553dffb8;
    while (puVar2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)();
      puVar1 = (undefined8 *)puVar2[1];
      CRYPTO_free(puVar2,"crypto\\init.c",0x209);
      puVar2 = puVar1;
    }
    DAT_1553dffb8 = (undefined8 *)0x0;
    CRYPTO_THREAD_lock_free(DAT_1553dffc0);
    DAT_1553dffc0 = 0;
    if (DAT_1553e0044 != 0) {
      comp_zlib_cleanup_int();
    }
    if (DAT_1553e0010 != 0) {
      async_deinit();
    }
    local_res8[0] = DAT_154df8090;
    DAT_154df8090 = 0xffffffff;
    CRYPTO_THREAD_cleanup_local(local_res8);
    rand_cleanup_int();
    rand_drbg_cleanup_int();
    conf_modules_free_int();
    engine_cleanup_int();
    ossl_store_cleanup_int();
    crypto_cleanup_all_ex_data_int();
    bio_cleanup();
    evp_cleanup_int();
    obj_cleanup_int();
    err_cleanup();
    CRYPTO_secure_malloc_done();
    DAT_1553dffc8 = 0;
  }
  return;
}

// OPENSSL_init_crypto @ 14f6a4c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_init_crypto(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_1553dffb0 != 0) {
    if ((param_1 >> 0x12 & 1) == 0) {
      ERR_put_error(0xf,0x74,0x46,"crypto\\init.c",0x267,0x14f6a4c70);
    }
    return 0;
  }
  iVar1 = CRYPTO_THREAD_run_once(&DAT_1553dffb4,FUN_14f6a52b0);
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = iVar3;
  if (iVar1 != 0) {
    iVar2 = DAT_1553dffcc;
  }
  if (iVar2 != 0) {
    if ((param_1 >> 0x12 & 1) != 0) {
      return 1;
    }
    if ((param_1 >> 0x13 & 1) == 0) {
      iVar2 = CRYPTO_THREAD_run_once(&DAT_1553dffd0,FUN_14f6a57b0);
      if (iVar2 != 0) {
        iVar3 = DAT_1553dffd4;
      }
    }
    else {
      iVar2 = CRYPTO_THREAD_run_once(&DAT_1553dffd0,&LAB_14f6a5760);
      if (iVar2 != 0) {
        iVar3 = DAT_1553dffd4;
      }
    }
    if (iVar3 != 0) {
      iVar3 = CRYPTO_THREAD_run_once(&DAT_1553dffd8,&LAB_14f6a55e0);
      iVar2 = iVar4;
      if (iVar3 != 0) {
        iVar2 = DAT_1553dffdc;
      }
      if (iVar2 != 0) {
        if ((param_1 & 1) != 0) {
          iVar3 = CRYPTO_THREAD_run_once(&DAT_1553dffe0,&LAB_14f6a5730);
          iVar2 = iVar4;
          if (iVar3 != 0) {
            iVar2 = DAT_1553dffe4;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 2) != 0) {
          iVar3 = CRYPTO_THREAD_run_once(&DAT_1553dffe0,FUN_14f6a5620);
          iVar2 = iVar4;
          if (iVar3 != 0) {
            iVar2 = DAT_1553dffe4;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 0x10) != 0) {
          iVar3 = CRYPTO_THREAD_run_once(&DAT_1553dffe8,&LAB_14f6a5660);
          iVar2 = iVar4;
          if (iVar3 != 0) {
            iVar2 = DAT_1553dffec;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 4) != 0) {
          iVar3 = CRYPTO_THREAD_run_once(&DAT_1553dffe8,FUN_14f6a5120);
          iVar2 = iVar4;
          if (iVar3 != 0) {
            iVar2 = DAT_1553dffec;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 0x20) != 0) {
          iVar3 = CRYPTO_THREAD_run_once(&DAT_1553dfff0,&LAB_14f6a5690);
          iVar2 = iVar4;
          if (iVar3 != 0) {
            iVar2 = DAT_1553dfff4;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 8) != 0) {
          iVar2 = CRYPTO_THREAD_run_once(&DAT_1553dfff0,FUN_14f6a5180);
          if (iVar2 != 0) {
            iVar4 = DAT_1553dfff4;
          }
          if (iVar4 == 0) {
            return 0;
          }
        }
        if (((param_1 >> 0x11 & 1) == 0) || (iVar2 = openssl_init_fork_handlers(), iVar2 != 0)) {
          iVar2 = 0;
          if ((char)param_1 < '\0') {
            iVar3 = CRYPTO_THREAD_run_once(&DAT_1553dfff8,FUN_14f6a56e0);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_1553e0008;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 & 0x40) != 0) {
            CRYPTO_THREAD_write_lock(DAT_1553dffc0);
            DAT_1553e0000 = param_2;
            iVar3 = CRYPTO_THREAD_run_once(&DAT_1553dfff8,FUN_14f6a5310);
            DAT_1553e0000 = 0;
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_1553e0008;
            }
            CRYPTO_THREAD_unlock(DAT_1553dffc0);
            if (iVar4 < 1) {
              return 0;
            }
          }
          if ((param_1 >> 8 & 1) != 0) {
            iVar3 = CRYPTO_THREAD_run_once(&DAT_1553e000c,FUN_14f6a51f0);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_1553e0014;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 0xb & 1) != 0) {
            iVar3 = CRYPTO_THREAD_run_once(&DAT_1553e0018,FUN_14f6a5440);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_1553e001c;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 9 & 1) != 0) {
            iVar3 = CRYPTO_THREAD_run_once(&DAT_1553e0020,FUN_14f6a5500);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_1553e0024;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 10 & 1) != 0) {
            iVar3 = CRYPTO_THREAD_run_once(&DAT_1553e0028,FUN_14f6a53e0);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_1553e002c;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 0xe & 1) != 0) {
            iVar3 = CRYPTO_THREAD_run_once(&DAT_1553e0030,FUN_14f6a54a0);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_1553e0034;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 0xd & 1) != 0) {
            iVar3 = CRYPTO_THREAD_run_once(&DAT_1553e0038,FUN_14f6a5380);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_1553e003c;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 & 0xfe00) != 0) {
            ENGINE_register_all_complete();
          }
          if ((param_1 >> 0x10 & 1) != 0) {
            iVar4 = CRYPTO_THREAD_run_once(&DAT_1553e0040,&LAB_14f6a5a30);
            if (iVar4 != 0) {
              iVar2 = DAT_1553e0048;
            }
            if (iVar2 == 0) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

// OPENSSL_thread_stop @ 14f6a5060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_thread_stop(void)

{
  int *piVar1;
  
  if (DAT_154df8090 != -1) {
    piVar1 = (int *)CRYPTO_THREAD_get_local(&DAT_154df8090);
    CRYPTO_THREAD_set_local(&DAT_154df8090,0);
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        async_delete_thread_state();
      }
      if (piVar1[1] != 0) {
        err_delete_thread_state();
      }
      if (piVar1[2] != 0) {
        drbg_delete_thread_state();
      }
      CRYPTO_free(piVar1,"crypto\\init.c",0x1c0);
      return;
    }
  }
  return;
}

// FUN_14f6a50f0 @ 14f6a50f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a50f0(void)

{
  openssl_add_all_ciphers_int();
  return 1;
}

// FUN_14f6a5120 @ 14f6a5120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a5120(void)

{
  openssl_add_all_ciphers_int();
  DAT_1553dffec = 1;
  return;
}

// FUN_14f6a5150 @ 14f6a5150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a5150(void)

{
  openssl_add_all_digests_int();
  return 1;
}

// FUN_14f6a5180 @ 14f6a5180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a5180(void)

{
  openssl_add_all_digests_int();
  DAT_1553dfff4 = 1;
  return;
}

// FUN_14f6a51b0 @ 14f6a51b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a51b0(void)

{
  undefined8 uVar1;
  
  uVar1 = async_init();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  DAT_1553e0010 = 1;
  return 1;
}

// FUN_14f6a51f0 @ 14f6a51f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a51f0(void)

{
  DAT_1553e0014 = async_init();
  if (DAT_1553e0014 == 0) {
    return;
  }
  DAT_1553e0010 = 1;
  DAT_1553e0014 = 1;
  return;
}

// FUN_14f6a5230 @ 14f6a5230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6a5230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_res8 [8];
  
  iVar1 = CRYPTO_THREAD_init_local(local_res8,FUN_14f6a57f0,param_3,param_4,0x14f6a523a);
  if (iVar1 != 0) {
    DAT_1553dffc0 = CRYPTO_THREAD_lock_new();
    if (DAT_1553dffc0 != 0) {
      OPENSSL_cpuid_setup();
      DAT_154df8090 = local_res8[0];
      DAT_1553dffc8 = 1;
      return 1;
    }
    CRYPTO_THREAD_lock_free(0);
    DAT_1553dffc0 = 0;
    CRYPTO_THREAD_cleanup_local(local_res8);
  }
  return 0;
}

// FUN_14f6a52b0 @ 14f6a52b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a52b0(void)

{
  DAT_1553dffcc = FUN_14f6a5230();
  return;
}

// FUN_14f6a52e0 @ 14f6a52e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f6a52e0(void)

{
  openssl_config_int(DAT_1553e0000);
  _DAT_1553dfffc = 1;
  return;
}

// FUN_14f6a5310 @ 14f6a5310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f6a5310(void)

{
  DAT_1553e0008 = openssl_config_int(DAT_1553e0000);
  _DAT_1553dfffc = 1;
  return;
}

// FUN_14f6a5350 @ 14f6a5350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a5350(void)

{
  engine_load_capi_int();
  return 1;
}

// FUN_14f6a5380 @ 14f6a5380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a5380(void)

{
  engine_load_capi_int();
  DAT_1553e003c = 1;
  return;
}

// FUN_14f6a53b0 @ 14f6a53b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a53b0(void)

{
  engine_load_dynamic_int();
  return 1;
}

// FUN_14f6a53e0 @ 14f6a53e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a53e0(void)

{
  engine_load_dynamic_int();
  DAT_1553e002c = 1;
  return;
}

// FUN_14f6a5410 @ 14f6a5410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a5410(void)

{
  engine_load_openssl_int();
  return 1;
}

// FUN_14f6a5440 @ 14f6a5440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a5440(void)

{
  engine_load_openssl_int();
  DAT_1553e001c = 1;
  return;
}

// FUN_14f6a5470 @ 14f6a5470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a5470(void)

{
  engine_load_padlock_int();
  return 1;
}

// FUN_14f6a54a0 @ 14f6a54a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a54a0(void)

{
  engine_load_padlock_int();
  DAT_1553e0034 = 1;
  return;
}

// FUN_14f6a54d0 @ 14f6a54d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a54d0(void)

{
  engine_load_rdrand_int();
  return 1;
}

// FUN_14f6a5500 @ 14f6a5500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a5500(void)

{
  engine_load_rdrand_int();
  DAT_1553e0024 = 1;
  return;
}

// FUN_14f6a5530 @ 14f6a5530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6a5530(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_THREAD_get_local(&DAT_154df8090);
  if (param_1 == 0) {
    CRYPTO_THREAD_set_local(&DAT_154df8090,0);
  }
  else if (lVar2 == 0) {
    lVar2 = CRYPTO_zalloc(0xc,"crypto\\init.c",0x42);
    if (lVar2 != 0) {
      iVar1 = CRYPTO_THREAD_set_local(&DAT_154df8090,lVar2);
      if (iVar1 == 0) {
        CRYPTO_free(lVar2,"crypto\\init.c",0x44);
        return 0;
      }
    }
  }
  return lVar2;
}

// FUN_14f6a5600 @ 14f6a5600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a5600(void)

{
  err_load_crypto_strings_int();
  return;
}

// FUN_14f6a5620 @ 14f6a5620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a5620(void)

{
  DAT_1553dffe4 = err_load_crypto_strings_int();
  return;
}

// FUN_14f6a56b0 @ 14f6a56b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14f6a56b0(void)

{
  openssl_no_config_int();
  _DAT_1553dfffc = 1;
  return 1;
}

// FUN_14f6a56e0 @ 14f6a56e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f6a56e0(void)

{
  openssl_no_config_int();
  _DAT_1553dfffc = 1;
  DAT_1553e0008 = 1;
  return;
}

// FUN_14f6a5780 @ 14f6a5780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6a5780(void)

{
  _func___cdecl_int *p_Var1;
  
  p_Var1 = _onexit(FUN_14f6a5a50);
  return p_Var1 != (_func___cdecl_int *)0x0;
}

// FUN_14f6a57b0 @ 14f6a57b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a57b0(void)

{
  _func___cdecl_int *p_Var1;
  
  p_Var1 = _onexit(FUN_14f6a5a50);
  DAT_1553dffd4 = (uint)(p_Var1 != (_func___cdecl_int *)0x0);
  return;
}

// FUN_14f6a57f0 @ 14f6a57f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a57f0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      async_delete_thread_state();
    }
    if (param_1[1] != 0) {
      err_delete_thread_state();
    }
    if (param_1[2] != 0) {
      drbg_delete_thread_state();
    }
    CRYPTO_free(param_1,"crypto\\init.c",0x1c0);
  }
  return;
}

// ossl_init_thread_start @ 14f6a5850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_init_thread_start(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_1553dffb0 == 0) {
    iVar1 = CRYPTO_THREAD_run_once(&DAT_1553dffb4,FUN_14f6a52b0);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = DAT_1553dffcc;
    }
    if (iVar2 != 0) {
      iVar1 = CRYPTO_THREAD_run_once(&DAT_1553dffd0,FUN_14f6a57b0);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = DAT_1553dffd4;
      }
      if (iVar2 != 0) {
        iVar1 = CRYPTO_THREAD_run_once(&DAT_1553dffd8,&LAB_14f6a55e0);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = DAT_1553dffdc;
        }
        if (iVar2 != 0) {
          puVar3 = (undefined4 *)CRYPTO_THREAD_get_local(&DAT_154df8090);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)CRYPTO_zalloc(0xc,"crypto\\init.c",0x42);
            if (puVar3 == (undefined4 *)0x0) {
              return 0;
            }
            iVar2 = CRYPTO_THREAD_set_local(&DAT_154df8090,puVar3);
            if (iVar2 == 0) {
              CRYPTO_free(puVar3,"crypto\\init.c",0x44);
              return 0;
            }
          }
          if ((param_1 & 1) != 0) {
            *puVar3 = 1;
          }
          if ((param_1 & 2) != 0) {
            puVar3[1] = 1;
          }
          if ((param_1 & 4) != 0) {
            puVar3[2] = 1;
          }
          return 1;
        }
      }
    }
  }
  else {
    ERR_put_error(0xf,0x74,0x46,"crypto\\init.c",0x267,0x14f6a5860);
  }
  return 0;
}

// FUN_14f6a59b0 @ 14f6a59b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a59b0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      async_delete_thread_state();
    }
    if (param_1[1] != 0) {
      err_delete_thread_state();
    }
    if (param_1[2] != 0) {
      drbg_delete_thread_state();
    }
    CRYPTO_free(param_1,"crypto\\init.c",0x1c0);
  }
  return;
}

// FUN_14f6a5a50 @ 14f6a5a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6a5a50(void)

{
  OPENSSL_cleanup();
  return 0;
}

