// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// ENGINE_get_ssl_client_cert_function @ 14f6e7ed0

undefined8 ENGINE_get_ssl_client_cert_function(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}

// ENGINE_load_private_key @ 14f6e7ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_load_private_key
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6e7efa;
  if (param_1 == 0) {
    uVar3 = 0x3c;
    uVar2 = 0x43;
  }
  else {
    CRYPTO_THREAD_write_lock(global_engine_lock);
    if (*(int *)(param_1 + 0xa0) == 0) {
      CRYPTO_THREAD_unlock(global_engine_lock);
      uVar2 = 0x75;
      uVar3 = 0x42;
    }
    else {
      CRYPTO_THREAD_unlock(global_engine_lock);
      if (*(code **)(param_1 + 0x78) == (code *)0x0) {
        uVar3 = 0x48;
        uVar2 = 0x7d;
      }
      else {
        lVar1 = (**(code **)(param_1 + 0x78))(param_1,param_2,param_3,param_4);
        if (lVar1 != 0) {
          return lVar1;
        }
        uVar3 = 0x4e;
        uVar2 = 0x80;
      }
    }
  }
  ERR_put_error(0x26,0x96,uVar2,"crypto\\engine\\eng_pkey.c",uVar3,uVar4);
  return 0;
}

// ENGINE_load_public_key @ 14f6e7fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_load_public_key
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6e7fda;
  if (param_1 == 0) {
    uVar3 = 0x5b;
    uVar2 = 0x43;
  }
  else {
    CRYPTO_THREAD_write_lock(global_engine_lock);
    if (*(int *)(param_1 + 0xa0) == 0) {
      CRYPTO_THREAD_unlock(global_engine_lock);
      uVar2 = 0x75;
      uVar3 = 0x61;
    }
    else {
      CRYPTO_THREAD_unlock(global_engine_lock);
      if (*(code **)(param_1 + 0x80) == (code *)0x0) {
        uVar3 = 0x66;
        uVar2 = 0x7d;
      }
      else {
        lVar1 = (**(code **)(param_1 + 0x80))(param_1,param_2,param_3,param_4);
        if (lVar1 != 0) {
          return lVar1;
        }
        uVar3 = 0x6c;
        uVar2 = 0x81;
      }
    }
  }
  ERR_put_error(0x26,0x97,uVar2,"crypto\\engine\\eng_pkey.c",uVar3,uVar4);
  return 0;
}

// ENGINE_load_ssl_client_cert @ 14f6e80a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ENGINE_load_ssl_client_cert
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (param_1 == 0) {
    ERR_put_error(0x26,0xc2,0x43,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x7a));
    uVar1 = 0;
  }
  else {
    CRYPTO_THREAD_write_lock(global_engine_lock);
    if (*(int *)(param_1 + 0xa0) == 0) {
      CRYPTO_THREAD_unlock(global_engine_lock);
      ERR_put_error(0x26,0xc2,0x75,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x81));
      uVar1 = 0;
    }
    else {
      CRYPTO_THREAD_unlock(global_engine_lock);
      if (*(code **)(param_1 + 0x88) == (code *)0x0) {
        ERR_put_error(0x26,0xc2,0x7d,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x87));
        uVar1 = 0;
      }
      else {
        uVar1 = (**(code **)(param_1 + 0x88))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
  }
  return uVar1;
}

// ENGINE_set_load_privkey_function @ 14f6e81d0

undefined8 ENGINE_set_load_privkey_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return 1;
}

// ENGINE_set_load_ssl_client_cert_function @ 14f6e8200

undefined8 ENGINE_set_load_ssl_client_cert_function(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return 1;
}

