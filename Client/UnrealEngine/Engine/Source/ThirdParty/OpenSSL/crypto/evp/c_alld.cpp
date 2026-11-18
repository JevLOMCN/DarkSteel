// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// openssl_add_all_digests_int @ 14f6fbfe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void openssl_add_all_digests_int(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  undefined8 uVar2;
  
  uVar2 = 0x14f6fbfea;
  uVar1 = EVP_md4();
  EVP_add_digest(uVar1);
  uVar1 = EVP_md5();
  EVP_add_digest(uVar1);
  OBJ_NAME_add("ssl3-md5",0x8001,"MD5",in_R9,uVar2);
  uVar1 = EVP_md5_sha1();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha1();
  EVP_add_digest(uVar1);
  OBJ_NAME_add("ssl3-sha1",0x8001,"SHA1");
  OBJ_NAME_add("RSA-SHA1-2",0x8001,"RSA-SHA1");
  uVar1 = EVP_mdc2();
  EVP_add_digest(uVar1);
  uVar1 = EVP_ripemd160();
  EVP_add_digest(uVar1);
  OBJ_NAME_add("ripemd",0x8001,"RIPEMD160");
  OBJ_NAME_add("rmd160",0x8001,"RIPEMD160");
  uVar1 = EVP_sha224();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha256();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha384();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha512();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha512_224();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha512_256();
  EVP_add_digest(uVar1);
  uVar1 = EVP_whirlpool();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sm3();
  EVP_add_digest(uVar1);
  uVar1 = EVP_blake2b512();
  EVP_add_digest(uVar1);
  uVar1 = EVP_blake2s256();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha3_224();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha3_256();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha3_384();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha3_512();
  EVP_add_digest(uVar1);
  uVar1 = EVP_shake128();
  EVP_add_digest(uVar1);
  uVar1 = EVP_shake256();
  EVP_add_digest(uVar1);
  return;
}

