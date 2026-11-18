// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// CheckTypeCast<FMetasoundParameterPackProxy> @ 14aef5940

bool __thiscall Audio::IProxyData::CheckTypeCast<FMetasoundParameterPackProxy>(IProxyData *this)

{
  bool bVar1;
  FName local_res8 [4];
  IProxyData *local_18;
  FName *local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
                      ::__l2::MyClassName,"FMetasoundParameterPackProxy");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_res8[0] =
       `public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
       ::__l2::MyClassName;
  if (this->ProxyTypeName !=
      `public:_static_class_FName___cdecl_FMetasoundParameterPackProxy::GetAudioProxyTypeName(void)'
      ::__l2::MyClassName) {
    local_10 = local_res8;
    local_18 = this;
    bVar1 = `Audio::IProxyData::CheckTypeCast<FMetasoundParameterPackProxy>'::__l2::<lambda_1>::
            operator()(&local_18);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// operator() @ 150560560

bool __thiscall
`Audio::IProxyData::CheckTypeCast<FMetasoundParameterPackProxy>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5387723863637360588>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5387723863637360588>,
                       &`public:___cdecl_`public:_bool___cdecl_Audio::IProxyData::CheckTypeCast<FMetasoundParameterPackProxy>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505605fd;
    }
  }
  bVar4 = false;
LAB_1505605fd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

