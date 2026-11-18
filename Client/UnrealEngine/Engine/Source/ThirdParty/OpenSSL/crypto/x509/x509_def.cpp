// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// X509_get_default_cert_area @ 14f720330

char * X509_get_default_cert_area(void)

{
  return "C:\\Windows";
}

// X509_get_default_cert_dir @ 14f720340

char * X509_get_default_cert_dir(void)

{
  return "C:\\Windows/certs";
}

// X509_get_default_cert_dir_env @ 14f720350

char * X509_get_default_cert_dir_env(void)

{
  return "SSL_CERT_DIR";
}

// X509_get_default_cert_file @ 14f720360

char * X509_get_default_cert_file(void)

{
  return "C:\\Windows/cert.pem";
}

// X509_get_default_cert_file_env @ 14f720370

char * X509_get_default_cert_file_env(void)

{
  return "SSL_CERT_FILE";
}

