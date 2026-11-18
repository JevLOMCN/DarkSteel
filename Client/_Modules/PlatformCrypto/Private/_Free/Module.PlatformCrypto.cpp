// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlatformCrypto
// Functions: 6

// `dynamic_initializer_for_'GPlatformCryptoModularFeature'' @ 141445220

void __cdecl _dynamic_initializer_for__GPlatformCryptoModularFeature__(void)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FName::FName(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
                    Name,L"EngineCryptoFeature");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
                   Name,0x154dc3738);
  atexit(_dynamic_atexit_destructor_for__GPlatformCryptoModularFeature__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPlatformCrypto'' @ 1414452d0

void __cdecl _dynamic_initializer_for__ModuleRegistrantPlatformCrypto__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PlatformCrypto";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PlatformCrypto",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<IPlatformCrypto>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14ea16bd0

void * __thiscall IPlatformCrypto::_scalar_deleting_destructor_(IPlatformCrypto *this,uint param_1)

{
  *this = (IPlatformCrypto)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea16e80

void * __thiscall
FPlatformCryptoModularFeature::_scalar_deleting_destructor_
          (FPlatformCryptoModularFeature *this,uint param_1)

{
  FEncryptionContextOpenSSL *pFVar1;
  
  this->_padding_ = (longlong)&___7FPlatformCryptoModularFeature__6B_;
  pFVar1 = (this->Context).Ptr;
  if (pFVar1 != (FEncryptionContextOpenSSL *)0x0) {
    (this->Context).Ptr = (FEncryptionContextOpenSSL *)0x0;
    ::operator_delete(pFVar1,1);
  }
  ::operator_delete((this->Context).Ptr,1);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// IMPLEMENT_MODULE_PlatformCrypto @ 14ea17050

void __cdecl IMPLEMENT_MODULE_PlatformCrypto(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GPlatformCryptoModularFeature'' @ 15046d8f0

void __cdecl _dynamic_atexit_destructor_for__GPlatformCryptoModularFeature__(void)

{
  TUniquePtr<FEncryptionContextOpenSSL,TDefaultDelete<FEncryptionContextOpenSSL>_> TVar1;
  
  TVar1.Ptr = GPlatformCryptoModularFeature.Context.Ptr;
  GPlatformCryptoModularFeature._padding_ = (longlong)&___7FPlatformCryptoModularFeature__6B_;
  if (GPlatformCryptoModularFeature.Context.Ptr != (FEncryptionContextOpenSSL *)0x0) {
    GPlatformCryptoModularFeature.Context.Ptr = (FEncryptionContextOpenSSL *)0x0;
    operator_delete(TVar1.Ptr,1);
  }
  operator_delete(GPlatformCryptoModularFeature.Context.Ptr,1);
  return;
}

