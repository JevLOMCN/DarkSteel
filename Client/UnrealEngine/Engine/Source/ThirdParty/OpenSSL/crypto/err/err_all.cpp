// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// err_load_crypto_strings_int @ 14f702630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 err_load_crypto_strings_int(void)

{
  int iVar1;
  
  iVar1 = ERR_load_ERR_strings();
  if (iVar1 != 0) {
    iVar1 = ERR_load_BN_strings();
    if (iVar1 != 0) {
      iVar1 = ERR_load_RSA_strings();
      if (iVar1 != 0) {
        iVar1 = ERR_load_DH_strings();
        if (iVar1 != 0) {
          iVar1 = ERR_load_EVP_strings();
          if (iVar1 != 0) {
            iVar1 = ERR_load_BUF_strings();
            if (iVar1 != 0) {
              iVar1 = ERR_load_OBJ_strings();
              if (iVar1 != 0) {
                iVar1 = ERR_load_PEM_strings();
                if (iVar1 != 0) {
                  iVar1 = ERR_load_DSA_strings();
                  if (iVar1 != 0) {
                    iVar1 = ERR_load_X509_strings();
                    if (iVar1 != 0) {
                      iVar1 = ERR_load_ASN1_strings();
                      if (iVar1 != 0) {
                        iVar1 = ERR_load_CONF_strings();
                        if (iVar1 != 0) {
                          iVar1 = ERR_load_CRYPTO_strings();
                          if (iVar1 != 0) {
                            iVar1 = ERR_load_COMP_strings();
                            if (iVar1 != 0) {
                              iVar1 = ERR_load_EC_strings();
                              if (iVar1 != 0) {
                                iVar1 = ERR_load_BIO_strings();
                                if (iVar1 != 0) {
                                  iVar1 = ERR_load_PKCS7_strings();
                                  if (iVar1 != 0) {
                                    iVar1 = ERR_load_X509V3_strings();
                                    if (iVar1 != 0) {
                                      iVar1 = ERR_load_PKCS12_strings();
                                      if (iVar1 != 0) {
                                        iVar1 = ERR_load_RAND_strings();
                                        if (iVar1 != 0) {
                                          iVar1 = ERR_load_DSO_strings();
                                          if (iVar1 != 0) {
                                            iVar1 = ERR_load_TS_strings();
                                            if (iVar1 != 0) {
                                              iVar1 = ERR_load_ENGINE_strings();
                                              if (iVar1 != 0) {
                                                iVar1 = ERR_load_OCSP_strings();
                                                if (iVar1 != 0) {
                                                  iVar1 = ERR_load_UI_strings();
                                                  if (iVar1 != 0) {
                                                    iVar1 = ERR_load_CMS_strings();
                                                    if (iVar1 != 0) {
                                                      iVar1 = ERR_load_CT_strings();
                                                      if (iVar1 != 0) {
                                                        iVar1 = ERR_load_ASYNC_strings();
                                                        if (iVar1 != 0) {
                                                          iVar1 = ERR_load_KDF_strings();
                                                          if (iVar1 != 0) {
                                                            iVar1 = ERR_load_OSSL_STORE_strings();
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

