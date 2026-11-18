// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SSL
// Functions: 1

// BuildRootCertificateArray @ 143146fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsPlatformSslCertificateManager::BuildRootCertificateArray
          (FWindowsPlatformSslCertificateManager *this)

{
  bool bVar1;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  x509_st *pxVar2;
  FStaticBasicLogRecord *pFVar3;
  undefined1 auStackY_168 [32];
  bool local_138 [8];
  FString local_130;
  WCHAR local_118 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FSslCertificateManager::BuildRootCertificateArray((FSslCertificateManager *)this);
  local_138[0] = true;
  bVar1 = FConfigCacheIni::GetBool
                    (GConfig,L"SSL",L"bUsePlatformProvidedCertificates",local_138,&GEngineIni);
  if ((!bVar1) || (local_138[0] != false)) {
    hCertStore = CertOpenSystemStoreW(0,L"ROOT");
    if (hCertStore == (HCERTSTORE)0x0) {
      if (*(int *)&this->field_0x10 < 1) {
        if ((byte)LogSsl._0_1_ < 3) {
          return;
        }
        pFVar3 = &::LOG_Static;
      }
      else {
        if ((byte)LogSsl._0_1_ < 3) {
          return;
        }
        pFVar3 = &::LOG_Static;
      }
      UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogSsl);
    }
    else {
      for (pCertContext = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0);
          pCertContext != (PCCERT_CONTEXT)0x0;
          pCertContext = CertEnumCertificatesInStore(hCertStore,pCertContext)) {
        if ((pCertContext->dwCertEncodingType & 1) == 0) {
          CertGetNameStringW(pCertContext,4,0,(void *)0x0,local_118,0x80);
          if (4 < (byte)LogSsl._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
          }
        }
        else {
          pxVar2 = (x509_st *)d2i_X509(0,&pCertContext->pbCertEncoded);
          if (pxVar2 == (x509_st *)0x0) {
            CertGetNameStringW(pCertContext,4,0,(void *)0x0,local_118,0x80);
            if (4 < (byte)LogSsl._0_1_) {
              GetSslErrorString(&local_130);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
              if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_130.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            FSslCertificateManager::AddCertificateToRootCertificateArray
                      ((FSslCertificateManager *)this,pxVar2);
          }
        }
      }
      CertCloseStore(hCertStore,0);
    }
  }
  return;
}

