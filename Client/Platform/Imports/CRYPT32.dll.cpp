// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 12

// CertCloseStore @ 15015aaf2

BOOL __stdcall CertCloseStore(HCERTSTORE hCertStore,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aaf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CertCloseStore(hCertStore,dwFlags);
  return BVar1;
}

// CertEnumCertificatesInStore @ 15015aafe

PCCERT_CONTEXT __stdcall
CertEnumCertificatesInStore(HCERTSTORE hCertStore,PCCERT_CONTEXT pPrevCertContext)

{
  PCCERT_CONTEXT pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015aafe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CertEnumCertificatesInStore(hCertStore,pPrevCertContext);
  return pCVar1;
}

// CertGetNameStringW @ 15015ab0a

DWORD __stdcall
CertGetNameStringW(PCCERT_CONTEXT pCertContext,DWORD dwType,DWORD dwFlags,void *pvTypePara,
                  LPWSTR pszNameString,DWORD cchNameString)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ab0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CertGetNameStringW(pCertContext,dwType,dwFlags,pvTypePara,pszNameString,cchNameString);
  return DVar1;
}

// CertOpenSystemStoreW @ 15015ab16

HCERTSTORE __stdcall CertOpenSystemStoreW(HCRYPTPROV_LEGACY hProv,LPCWSTR szSubsystemProtocol)

{
  HCERTSTORE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ab16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CertOpenSystemStoreW(hProv,szSubsystemProtocol);
  return pvVar1;
}

// CertOpenStore @ 15015ab22

HCERTSTORE __stdcall
CertOpenStore(LPCSTR lpszStoreProvider,DWORD dwEncodingType,HCRYPTPROV_LEGACY hCryptProv,
             DWORD dwFlags,void *pvPara)

{
  HCERTSTORE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ab22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CertOpenStore(lpszStoreProvider,dwEncodingType,hCryptProv,dwFlags,pvPara);
  return pvVar1;
}

// CertFindCertificateInStore @ 15015ab2e

PCCERT_CONTEXT __stdcall
CertFindCertificateInStore
          (HCERTSTORE hCertStore,DWORD dwCertEncodingType,DWORD dwFindFlags,DWORD dwFindType,
          void *pvFindPara,PCCERT_CONTEXT pPrevCertContext)

{
  PCCERT_CONTEXT pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ab2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CertFindCertificateInStore
                     (hCertStore,dwCertEncodingType,dwFindFlags,dwFindType,pvFindPara,
                      pPrevCertContext);
  return pCVar1;
}

// CertDuplicateCertificateContext @ 15015ab3a

PCCERT_CONTEXT __stdcall CertDuplicateCertificateContext(PCCERT_CONTEXT pCertContext)

{
  PCCERT_CONTEXT pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ab3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CertDuplicateCertificateContext(pCertContext);
  return pCVar1;
}

// CertFreeCertificateContext @ 15015ab46

BOOL __stdcall CertFreeCertificateContext(PCCERT_CONTEXT pCertContext)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ab46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CertFreeCertificateContext(pCertContext);
  return BVar1;
}

// CertGetCertificateContextProperty @ 15015ab52

BOOL __stdcall
CertGetCertificateContextProperty
          (PCCERT_CONTEXT pCertContext,DWORD dwPropId,void *pvData,DWORD *pcbData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ab52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CertGetCertificateContextProperty(pCertContext,dwPropId,pvData,pcbData);
  return BVar1;
}

// CertGetEnhancedKeyUsage @ 15015ab5e

BOOL __stdcall
CertGetEnhancedKeyUsage
          (PCCERT_CONTEXT pCertContext,DWORD dwFlags,PCERT_ENHKEY_USAGE pUsage,DWORD *pcbUsage)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ab5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CertGetEnhancedKeyUsage(pCertContext,dwFlags,pUsage,pcbUsage);
  return BVar1;
}

// CertGetIntendedKeyUsage @ 15015ab6a

BOOL __stdcall
CertGetIntendedKeyUsage
          (DWORD dwCertEncodingType,PCERT_INFO pCertInfo,BYTE *pbKeyUsage,DWORD cbKeyUsage)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ab6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CertGetIntendedKeyUsage(dwCertEncodingType,pCertInfo,pbKeyUsage,cbKeyUsage);
  return BVar1;
}

// CertOpenSystemStoreA @ 15015ab76

HCERTSTORE __stdcall CertOpenSystemStoreA(HCRYPTPROV_LEGACY hProv,LPCSTR szSubsystemProtocol)

{
  HCERTSTORE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ab76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CertOpenSystemStoreA(hProv,szSubsystemProtocol);
  return pvVar1;
}

