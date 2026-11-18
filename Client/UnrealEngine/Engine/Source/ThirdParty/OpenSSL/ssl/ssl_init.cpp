// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// OPENSSL_init_ssl @ 14f65cc90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_init_ssl(ulonglong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (DAT_1553dfe08 != 0) {
    if (DAT_1553dfe04 == 0) {
      DAT_1553dfe04 = 1;
      ERR_put_error(0x14,0x156,0x46,"ssl\\ssl_init.c",0xb2);
    }
    return 0;
  }
  uVar4 = param_1 | 0x4c;
  if ((param_1 & 0x80) != 0) {
    uVar4 = param_1 | 0xc;
  }
  uVar2 = OPENSSL_init_crypto(uVar4);
  if ((int)uVar2 != 0) {
    iVar1 = CRYPTO_THREAD_run_once(&DAT_1553dfdf0,FUN_14f65d080);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = DAT_1553dfdf8;
    }
    if (iVar3 == 0) {
      return 0;
    }
    if ((uVar4 >> 0x14 & 1) != 0) {
      iVar1 = CRYPTO_THREAD_run_once(&DAT_1553dfdfc,&LAB_14f65ce30);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = DAT_1553dfe00;
      }
      if (iVar3 == 0) {
        return 0;
      }
    }
    if ((uVar4 >> 0x15 & 1) != 0) {
      iVar1 = CRYPTO_THREAD_run_once(&DAT_1553dfdfc,FUN_14f65cdf0);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = DAT_1553dfe00;
      }
      if (iVar3 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return uVar2;
}

// FUN_14f65cdc0 @ 14f65cdc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f65cdc0(void)

{
  ERR_load_SSL_strings();
  return 1;
}

// FUN_14f65cdf0 @ 14f65cdf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65cdf0(void)

{
  ERR_load_SSL_strings();
  DAT_1553dfe00 = 1;
  return;
}

// FUN_14f65ce50 @ 14f65ce50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f65ce50(void)

{
  undefined8 uVar1;
  
  uVar1 = EVP_des_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_des_ede3_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_idea_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_rc4();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_rc4_hmac_md5();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_rc2_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_rc2_40_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_128_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_192_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_128_gcm();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_gcm();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_128_ccm();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_ccm();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_128_cbc_hmac_sha1();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc_hmac_sha1();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_128_cbc_hmac_sha256();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc_hmac_sha256();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aria_128_gcm();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aria_256_gcm();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_camellia_128_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_camellia_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_chacha20_poly1305();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_seed_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_md5();
  EVP_add_digest(uVar1);
  OBJ_NAME_add("ssl3-md5",0x8001,"MD5");
  uVar1 = EVP_md5_sha1();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha1();
  EVP_add_digest(uVar1);
  OBJ_NAME_add("ssl3-sha1",0x8001,"SHA1");
  OBJ_NAME_add("RSA-SHA1-2",0x8001,"RSA-SHA1");
  uVar1 = EVP_sha224();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha256();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha384();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha512();
  EVP_add_digest(uVar1);
  SSL_COMP_get_compression_methods();
  uVar1 = ssl_load_ciphers();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  OPENSSL_atexit(FUN_14f65d0b0);
  DAT_1553dfdf4 = 1;
  return 1;
}

// FUN_14f65d080 @ 14f65d080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65d080(void)

{
  DAT_1553dfdf8 = FUN_14f65ce50();
  return;
}

// FUN_14f65d0b0 @ 14f65d0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f65d0b0(void)

{
  if ((DAT_1553dfe08 == 0) && (DAT_1553dfe08 = 1, DAT_1553dfdf4 != 0)) {
    ssl_comp_free_compression_methods_int();
    return;
  }
  return;
}

