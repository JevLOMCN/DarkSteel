// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 7

// FCertRoots @ 14456abb0

FCertRoots * __thiscall
UE::IoStore::HTTP::FCertRoots::FCertRoots(FCertRoots *this,TMemoryView<void_const_> *param_1)

{
  code *pcVar1;
  void *pvVar2;
  ulong64 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  FCertRoots *pFVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  
  bVar4 = InitOnce;
  pvVar2 = param_1->Data;
  uVar3 = param_1->Size;
  this->Handle = 0;
  if (!bVar4) {
    OPENSSL_init_ssl(0x80000,0);
    InitOnce = true;
  }
  uVar6 = TLS_client_method();
  uVar7 = SSL_CTX_new(uVar6);
  if (uVar7 == 0) {
    ERR_get_error();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                       ,0x53,L"ERR_get_error() == %d");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FCertRoots *)(*pcVar1)();
      return pFVar8;
    }
  }
  SSL_CTX_set_options(uVar7,0x2000000);
  uVar6 = BIO_new_mem_buf(pvVar2,(int)uVar3);
  iVar11 = 0;
  lVar9 = PEM_read_bio_X509(uVar6,0,0,0);
  while (lVar9 != 0) {
    uVar10 = SSL_CTX_get_cert_store(uVar7);
    iVar5 = X509_STORE_add_cert(uVar10,lVar9);
    iVar11 = iVar11 + (uint)(iVar5 == 1);
    X509_free(lVar9);
    lVar9 = PEM_read_bio_X509(uVar6,0,0,0);
  }
  BIO_free(uVar6);
  if (iVar11 == 0) {
    SSL_CTX_free(uVar7);
    this->Handle = 0;
  }
  else {
    this->Handle = uVar7;
  }
  return this;
}

// ~FCertRoots @ 14456bd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall UE::IoStore::HTTP::FCertRoots::~FCertRoots(FCertRoots *this)

{
  int *piVar1;
  int iVar2;
  ulong64 uVar3;
  
  uVar3 = this->Handle;
  if (uVar3 != 0) {
    if (uVar3 != 0) {
      LOCK();
      piVar1 = (int *)(uVar3 + 0x94);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 2) {
        X509_VERIFY_PARAM_free(*(undefined8 *)(uVar3 + 0x198));
        CRYPTO_free(*(undefined8 *)(uVar3 + 0x358),"ssl\\ssl_lib.c",0xae);
        *(undefined8 *)(uVar3 + 0x358) = 0;
        CRYPTO_free(*(undefined8 *)(uVar3 + 0x360),"ssl\\ssl_lib.c",0xb1);
        *(undefined8 *)(uVar3 + 0x360) = 0;
        *(undefined1 *)(uVar3 + 0x368) = 0;
        if (*(longlong *)(uVar3 + 0x28) != 0) {
          SSL_CTX_flush_sessions(uVar3,0);
        }
        CRYPTO_free_ex_data(1,uVar3,uVar3 + 0xe0);
        OPENSSL_LH_free(*(undefined8 *)(uVar3 + 0x28));
        X509_STORE_free(*(undefined8 *)(uVar3 + 0x20));
        CTLOG_STORE_free(*(undefined8 *)(uVar3 + 0x1a8));
        OPENSSL_sk_free(*(undefined8 *)(uVar3 + 8));
        OPENSSL_sk_free(*(undefined8 *)(uVar3 + 0x10));
        OPENSSL_sk_free(*(undefined8 *)(uVar3 + 0x18));
        ssl_cert_free(*(undefined8 *)(uVar3 + 0x138));
        OPENSSL_sk_pop_free(*(undefined8 *)(uVar3 + 0x110),X509_NAME_free);
        OPENSSL_sk_pop_free(*(undefined8 *)(uVar3 + 0x118),X509_NAME_free);
        OPENSSL_sk_pop_free(*(undefined8 *)(uVar3 + 0xf8),X509_free);
        *(undefined8 *)(uVar3 + 0x100) = 0;
        OPENSSL_sk_free(*(undefined8 *)(uVar3 + 0x370));
        SSL_CTX_SRP_CTX_free(uVar3);
        ENGINE_finish(*(undefined8 *)(uVar3 + 0x1e0));
        CRYPTO_free(*(undefined8 *)(uVar3 + 0x248),"ssl\\ssl_lib.c",0xcd5);
        CRYPTO_free(*(undefined8 *)(uVar3 + 600),"ssl\\ssl_lib.c",0xcd6);
        CRYPTO_free(*(undefined8 *)(uVar3 + 0x270),"ssl\\ssl_lib.c",0xcd8);
        CRYPTO_secure_free(*(undefined8 *)(uVar3 + 0x218),"ssl\\ssl_lib.c",0xcd9);
        CRYPTO_THREAD_lock_free(*(undefined8 *)(uVar3 + 0x380));
        CRYPTO_free(uVar3,"ssl\\ssl_lib.c",0xcdd);
      }
    }
    return;
  }
  return;
}

// Default @ 144571fc0

ulong64 __cdecl UE::IoStore::HTTP::FCertRoots::Default(void)

{
  return 0xffffffffffffffff;
}

// Explicit @ 144572d90

ulong64 __cdecl UE::IoStore::HTTP::FCertRoots::Explicit(FCertRoots *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (param_1->Handle != 0) {
    return param_1->Handle;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CertRoots.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                     ,0x19e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return param_1->Handle;
}

// NoTls @ 14457bb10

ulong64 __cdecl UE::IoStore::HTTP::FCertRoots::NoTls(void)

{
  return 0;
}

// Num @ 14457bb20

int __thiscall UE::IoStore::HTTP::FCertRoots::Num(FCertRoots *this)

{
  int iVar1;
  undefined8 uVar2;
  
  if (this->Handle == 0) {
    return -1;
  }
  uVar2 = SSL_CTX_get_cert_store();
  uVar2 = X509_STORE_get0_objects(uVar2);
  iVar1 = OPENSSL_sk_num(uVar2);
  return iVar1;
}

// SetDefault @ 1445817f0

void __cdecl UE::IoStore::HTTP::FCertRoots::SetDefault(FCertRoots *param_1)

{
  code *pcVar1;
  FCertRoots FVar2;
  bool bVar3;
  
  if ((GDefaultCertRoots.Handle != 0) == (param_1->Handle != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GDefaultCertRoots.IsValid() != CertRoots.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                       ,0x18b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2.Handle = param_1->Handle;
  param_1->Handle = (ulong64)GDefaultCertRoots;
  GDefaultCertRoots.Handle = FVar2.Handle;
  return;
}

