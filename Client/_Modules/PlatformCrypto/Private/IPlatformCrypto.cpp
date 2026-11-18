// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlatformCrypto
// Functions: 3

// StartupModule @ 14ea16b00

void __thiscall IPlatformCrypto::StartupModule(IPlatformCrypto *this)

{
  return;
}

// ShutdownModule @ 14ea16b10

void __thiscall IPlatformCrypto::ShutdownModule(IPlatformCrypto *this)

{
  code *UNRECOVERED_JUMPTABLE;
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> TVar1;
  IModularFeatures *pIVar2;
  
  TVar1.Ptr = GPlatformCryptoModularFeature.Context.Ptr;
  if (GPlatformCryptoModularFeature.Context.Ptr != (FEncryptionContextOpenSSL *)0x0) {
    GPlatformCryptoModularFeature.Context.Ptr = (FEncryptionContextOpenSSL *)0x0;
    ::operator_delete(TVar1.Ptr,1);
  }
  pIVar2 = IModularFeatures::Get();
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2
                      ::Name,L"EngineCryptoFeature");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ea16b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar2,`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
                    Name,0x154dc3738);
  return;
}

// CreateContext @ 14ea16f40

TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> __thiscall
IPlatformCrypto::CreateContext(IPlatformCrypto *this)

{
  void *pvVar1;
  FEncryptionContextOpenSSL *in_RDX;
  
  pvVar1 = ::operator_new(1);
  *(void **)in_RDX = pvVar1;
  return (TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_>)in_RDX;
}

