// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SSL
// Functions: 5

// FSslManager @ 143146230

FSslManager * __thiscall FSslManager::FSslManager(FSslManager *this)

{
  this->InitCount = 0;
  this->_padding_ = (longlong)&___7FSslManager__6B_;
  return this;
}

// CreateSslContext @ 143147250

/* WARNING: Enum "ESslTlsProtocol": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ssl_ctx_st * __thiscall
FSslManager::CreateSslContext(FSslManager *this,FSslContextCreateOptions *param_1)

{
  ESslTlsProtocol *pEVar1;
  ESslTlsProtocol EVar2;
  FName FVar3;
  code *pcVar4;
  FSslModule *pFVar5;
  bool bVar6;
  ssl_ctx_st *psVar7;
  longlong lVar8;
  FName *pFVar9;
  FModuleManager *this_00;
  uint uVar10;
  uint uVar11;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  uVar10 = 0;
  if ((this->InitCount < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InitCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Private\\SslManager.cpp"
                         ,0x50,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    psVar7 = (ssl_ctx_st *)(*pcVar4)();
    return psVar7;
  }
  if (this->InitCount < 1) {
    return (ssl_ctx_st *)0x0;
  }
  lVar8 = TLS_client_method();
  if (lVar8 == 0) {
    if ((byte)LogSsl._0_1_ < 3) {
      return (ssl_ctx_st *)0x0;
    }
    GetSslErrorString(&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
    local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    psVar7 = (ssl_ctx_st *)SSL_CTX_new(lVar8);
    if (psVar7 != (ssl_ctx_st *)0x0) {
      EVar2 = param_1->MinimumProtocol;
      pEVar1 = &param_1->MaximumProtocol;
      if ((SSLv3 < EVar2) || (*pEVar1 == Minimum)) {
        uVar10 = 0x2000000;
      }
      if ((((((TLSv1 < EVar2) || (*pEVar1 < TLSv1)) &&
            (uVar10 = uVar10 | 0x4000000, TLSv1_1 < EVar2)) || (*pEVar1 < TLSv1_1)) &&
          (uVar10 = uVar10 | 0x10000000, Maximum < EVar2)) || (*pEVar1 < Maximum)) {
        uVar10 = uVar10 | 0x8000000;
      }
      uVar11 = 0x20000;
      if (param_1->bAllowCompression != false) {
        uVar11 = 0;
      }
      SSL_CTX_set_options(psVar7,uVar11 | uVar10);
      if (param_1->bAddCertificates == false) {
        return psVar7;
      }
      if (FSslModule::Singleton == (FSslModule *)0x0) {
        bVar6 = IsInGameThread();
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Private\\SslModule.cpp"
                               ,0x49,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          psVar7 = (ssl_ctx_st *)(*pcVar4)();
          return psVar7;
        }
        pFVar9 = ::FName::FName(&local_res18,"SSL");
        FVar3 = *pFVar9;
        this_00 = FModuleManager::Get();
        FModuleManager::LoadModuleChecked(this_00,FVar3);
        if ((FSslModule::Singleton == (FSslModule *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Private\\SslModule.cpp"
                               ,0x4c,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          psVar7 = (ssl_ctx_st *)(*pcVar4)();
          return psVar7;
        }
      }
      pFVar5 = FSslModule::Singleton;
      if ((FSslModule::Singleton->CertificateManagerPtr == (ISslCertificateManager *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CertificateManagerPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Public\\SslModule.h"
                             ,0x2c,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        psVar7 = (ssl_ctx_st *)(*pcVar4)();
        return psVar7;
      }
      (**(code **)((longlong)*pFVar5->CertificateManagerPtr + 8))
                (pFVar5->CertificateManagerPtr,psVar7);
      return psVar7;
    }
    if ((byte)LogSsl._0_1_ < 3) {
      return (ssl_ctx_st *)0x0;
    }
    GetSslErrorString(&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return (ssl_ctx_st *)0x0;
}

// DestroySslContext @ 143147490

void __thiscall FSslManager::DestroySslContext(FSslManager *this,ssl_ctx_st *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->InitCount < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InitCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Private\\SslManager.cpp"
                       ,0x88,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0 < this->InitCount) {
    SSL_CTX_free(param_1);
  }
  return;
}

// InitializeSsl @ 143147a40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSslManager::InitializeSsl(FSslManager *this)

{
  this->InitCount = this->InitCount + 1;
  if (this->InitCount == 1) {
    if (4 < (byte)LogSsl._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
    }
    OPENSSL_load_builtin_modules();
    CONF_modules_load_file(0,0,0x30);
    OPENSSL_init_ssl(0x200002,0);
    OPENSSL_init_ssl(0,0);
    OPENSSL_init_crypto(0xc,0);
  }
  return true;
}

// ShutdownSsl @ 143148250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSslManager::ShutdownSsl(FSslManager *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  piVar1 = &this->InitCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InitCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Private\\SslManager.cpp"
                       ,0x3d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->InitCount == 0) && (4 < (byte)LogSsl._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
    return;
  }
  return;
}

