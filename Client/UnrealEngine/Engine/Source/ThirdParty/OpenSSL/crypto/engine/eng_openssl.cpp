// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// _vfprintf_l @ 14f6fc790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl _vfprintf_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  ulong64 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6fc7aa;
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vfprintf(*puVar2,_File,_Format,_Locale,_ArgList,uVar3);
  return iVar1;
}

// FUN_14f6fc7f0 @ 14f6fc7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fc7f0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ENGINE_set_id(param_1,PTR_s_openssl_154df8f40);
  if (iVar1 != 0) {
    iVar1 = ENGINE_set_name(param_1,PTR_s_Software_engine_support_154df8f48);
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_destroy_function(param_1,FUN_14f6fca30);
      if (iVar1 != 0) {
        uVar2 = RSA_get_default_method();
        iVar1 = ENGINE_set_RSA(param_1,uVar2);
        if (iVar1 != 0) {
          uVar2 = DSA_get_default_method();
          iVar1 = ENGINE_set_DSA(param_1,uVar2);
          if (iVar1 != 0) {
            uVar2 = EC_KEY_OpenSSL();
            iVar1 = ENGINE_set_EC(param_1,uVar2);
            if (iVar1 != 0) {
              uVar2 = DH_get_default_method();
              iVar1 = ENGINE_set_DH(param_1,uVar2);
              if (iVar1 != 0) {
                uVar2 = RAND_OpenSSL();
                iVar1 = ENGINE_set_RAND(param_1,uVar2);
                if (iVar1 != 0) {
                  iVar1 = ENGINE_set_ciphers(param_1,FUN_14f6fc9c0);
                  if (iVar1 != 0) {
                    iVar1 = ENGINE_set_digests(param_1,FUN_14f6fcaa0);
                    if (iVar1 != 0) {
                      iVar1 = ENGINE_set_load_privkey_function(param_1,FUN_14f6fcb00);
                      if (iVar1 != 0) {
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// engine_load_openssl_int @ 14f6fc910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_load_openssl_int(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ENGINE_new();
  if (lVar2 == 0) {
    return;
  }
  iVar1 = FUN_14f6fc7f0(lVar2);
  if (iVar1 == 0) {
    ENGINE_free();
    return;
  }
  ENGINE_add(lVar2);
  ENGINE_free(lVar2);
  ERR_clear_error();
  return;
}

// FUN_14f6fc970 @ 14f6fc970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6fc970(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ENGINE_new();
  if (lVar2 != 0) {
    iVar1 = FUN_14f6fc7f0(lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
    ENGINE_free(lVar2);
  }
  return 0;
}

// FUN_14f6fc9c0 @ 14f6fc9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fc9c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = FUN_14f6fcb90(param_3);
    return uVar1;
  }
  if (param_4 == 5) {
    uVar1 = FUN_14f6fcde0();
    *param_2 = uVar1;
    return 1;
  }
  if (param_4 == 0x61) {
    uVar1 = FUN_14f6fccf0();
    *param_2 = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}

// FUN_14f6fca30 @ 14f6fca30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fca30(void)

{
  EVP_MD_meth_free(DAT_1553e2cb8);
  DAT_1553e2cb8 = 0;
  EVP_CIPHER_meth_free(DAT_1553e2c90);
  DAT_1553e2c90 = 0;
  EVP_CIPHER_meth_free(DAT_1553e2c98);
  DAT_1553e2c98 = 0;
  return 1;
}

// FUN_14f6fcaa0 @ 14f6fcaa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fcaa0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = FUN_14f6fcc50(param_3);
    return uVar1;
  }
  if (param_4 == 0x40) {
    uVar1 = FUN_14f6fd070();
    *param_2 = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}

// FUN_14f6fcb00 @ 14f6fcb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fcb00(undefined8 param_1,undefined8 param_2)

{
  _iobuf *p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  p_Var1 = (_iobuf *)__acrt_iob_func(2);
  fprintf(p_Var1,"(TEST_ENG_OPENSSL_PKEY)Loading Private key %s\n");
  lVar2 = BIO_new_file(param_2,&s_r);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = PEM_read_bio_PrivateKey(lVar2,0,0,0);
  BIO_free(lVar2);
  return uVar3;
}

// FUN_14f6fcb90 @ 14f6fcb90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6fcb90(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_1553e2cb4 != 0) {
    iVar2 = DAT_1553e2cb0;
    *param_1 = &DAT_1553e2ca0;
    return iVar2;
  }
  lVar3 = FUN_14f6fcde0();
  if (lVar3 != 0) {
    uVar1 = EVP_CIPHER_nid(lVar3);
    *(undefined4 *)(&DAT_1553e2ca0 + (longlong)DAT_1553e2cb0 * 4) = uVar1;
    DAT_1553e2cb0 = DAT_1553e2cb0 + 1;
  }
  lVar3 = FUN_14f6fccf0();
  if (lVar3 != 0) {
    uVar1 = EVP_CIPHER_nid(lVar3);
    *(undefined4 *)(&DAT_1553e2ca0 + (longlong)DAT_1553e2cb0 * 4) = uVar1;
    DAT_1553e2cb0 = DAT_1553e2cb0 + 1;
  }
  iVar2 = DAT_1553e2cb0;
  DAT_1553e2cb4 = 1;
  *(undefined4 *)(&DAT_1553e2ca0 + (longlong)DAT_1553e2cb0 * 4) = 0;
  *param_1 = &DAT_1553e2ca0;
  return iVar2;
}

// FUN_14f6fcc50 @ 14f6fcc50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6fcc50(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_1553e2ccc != 0) {
    iVar2 = DAT_1553e2cc8;
    *param_1 = &DAT_1553e2cc0;
    return iVar2;
  }
  lVar3 = FUN_14f6fd070();
  if (lVar3 != 0) {
    uVar1 = EVP_MD_type(lVar3);
    *(undefined4 *)(&DAT_1553e2cc0 + (longlong)DAT_1553e2cc8 * 4) = uVar1;
    DAT_1553e2cc8 = DAT_1553e2cc8 + 1;
  }
  iVar2 = DAT_1553e2cc8;
  DAT_1553e2ccc = 1;
  *(undefined4 *)(&DAT_1553e2cc0 + (longlong)DAT_1553e2cc8 * 4) = 0;
  *param_1 = &DAT_1553e2cc0;
  return iVar2;
}

// FUN_14f6fccf0 @ 14f6fccf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6fccf0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_1553e2c98;
  if ((DAT_1553e2c98 == 0) &&
     ((((lVar2 = EVP_CIPHER_meth_new(5,1,5), lVar2 == 0 ||
        (iVar1 = EVP_CIPHER_meth_set_iv_length(lVar2,0), iVar1 == 0)) ||
       (iVar1 = EVP_CIPHER_meth_set_flags(lVar2,8), iVar1 == 0)) ||
      (((iVar1 = EVP_CIPHER_meth_set_init(lVar2,FUN_14f6fcf30), iVar1 == 0 ||
        (iVar1 = EVP_CIPHER_meth_set_do_cipher(lVar2,FUN_14f6fced0), iVar1 == 0)) ||
       (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(lVar2,0x418), iVar1 == 0)))))) {
    EVP_CIPHER_meth_free(lVar2);
    lVar2 = 0;
  }
  DAT_1553e2c98 = lVar2;
  return lVar2;
}

// FUN_14f6fcdb0 @ 14f6fcdb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fcdb0(void)

{
  EVP_CIPHER_meth_free(DAT_1553e2c98);
  DAT_1553e2c98 = 0;
  return;
}

// FUN_14f6fcde0 @ 14f6fcde0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6fcde0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_1553e2c90;
  if ((DAT_1553e2c90 == 0) &&
     ((((lVar2 = EVP_CIPHER_meth_new(5,1,0x10), lVar2 == 0 ||
        (iVar1 = EVP_CIPHER_meth_set_iv_length(lVar2,0), iVar1 == 0)) ||
       (iVar1 = EVP_CIPHER_meth_set_flags(lVar2,8), iVar1 == 0)) ||
      (((iVar1 = EVP_CIPHER_meth_set_init(lVar2,FUN_14f6fcf30), iVar1 == 0 ||
        (iVar1 = EVP_CIPHER_meth_set_do_cipher(lVar2,FUN_14f6fced0), iVar1 == 0)) ||
       (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(lVar2,0x418), iVar1 == 0)))))) {
    EVP_CIPHER_meth_free(lVar2);
    lVar2 = 0;
  }
  DAT_1553e2c90 = lVar2;
  return lVar2;
}

// FUN_14f6fcea0 @ 14f6fcea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fcea0(void)

{
  EVP_CIPHER_meth_free(DAT_1553e2c90);
  DAT_1553e2c90 = 0;
  return;
}

// FUN_14f6fced0 @ 14f6fced0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6fced0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  RC4(lVar1 + 0x10,param_4,param_3,param_2);
  return 1;
}

// FUN_14f6fcf30 @ 14f6fcf30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fcf30(undefined8 param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  _iobuf *p_Var3;
  void *_Dst;
  undefined8 uVar4;
  longlong lVar5;
  
  p_Var3 = (_iobuf *)__acrt_iob_func(2);
  fprintf(p_Var3,"(TEST_ENG_OPENSSL_RC4) test_init_key() called\n");
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  _Dst = (void *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  memcpy(_Dst,param_2,(longlong)iVar1);
  uVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  uVar2 = EVP_CIPHER_CTX_key_length(param_1);
  lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  RC4_set_key(lVar5 + 0x10,uVar2,uVar4);
  return 1;
}

// FUN_14f6fcfd0 @ 14f6fcfd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fcfd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  SHA1_Final(param_2,uVar1);
  return;
}

// FUN_14f6fd000 @ 14f6fd000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fd000(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  SHA1_Init(uVar1);
  return;
}

// FUN_14f6fd030 @ 14f6fd030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fd030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  SHA1_Update(uVar1,param_2,param_3);
  return;
}

// FUN_14f6fd070 @ 14f6fd070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6fd070(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_1553e2cb8;
  if ((DAT_1553e2cb8 == 0) &&
     (((((lVar2 = EVP_MD_meth_new(0x40,0x41), lVar2 == 0 ||
         (iVar1 = EVP_MD_meth_set_result_size(lVar2,0x14), iVar1 == 0)) ||
        (iVar1 = EVP_MD_meth_set_input_blocksize(lVar2,0x40), iVar1 == 0)) ||
       ((iVar1 = EVP_MD_meth_set_app_datasize(lVar2,0x68), iVar1 == 0 ||
        (iVar1 = EVP_MD_meth_set_flags(lVar2,0), iVar1 == 0)))) ||
      ((iVar1 = EVP_MD_meth_set_init(lVar2,FUN_14f6fd000), iVar1 == 0 ||
       ((iVar1 = EVP_MD_meth_set_update(lVar2,FUN_14f6fd030), iVar1 == 0 ||
        (iVar1 = EVP_MD_meth_set_final(lVar2,FUN_14f6fcfd0), iVar1 == 0)))))))) {
    EVP_MD_meth_free(lVar2);
    lVar2 = 0;
  }
  DAT_1553e2cb8 = lVar2;
  return lVar2;
}

// FUN_14f6fd150 @ 14f6fd150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fd150(void)

{
  EVP_MD_meth_free(DAT_1553e2cb8);
  DAT_1553e2cb8 = 0;
  return;
}

