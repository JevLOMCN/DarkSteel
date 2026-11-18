// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 3

// BuildUserAgentString @ 143156a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FUserAgentImpl::BuildUserAgentString(FUserAgentImpl *this,FString *__return_storage_ptr__)

{
  int iVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  pTVar2 = CVarDefaultUserAgentCommentsEnabled.Ref;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 1;
    if (!bVar3) goto LAB_143156a72;
  }
  lVar4 = 0;
LAB_143156a72:
  if (pTVar2->ShadowedValue[lVar4] == false) {
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 0x80;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    FDefaultUserAgentBuilder::BuildUserAgentString
              (&this->Builder,__return_storage_ptr__,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_78,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_78);
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_78,0,local_78._8_4_);
    iVar1 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_48 = 0xffffffff;
    local_44 = 0;
    local_50 = 0;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  else {
    FDefaultUserAgentBuilder::BuildUserAgentString
              (&this->Builder,__return_storage_ptr__,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
  }
  return __return_storage_ptr__;
}

// Get @ 143160a10

FUserAgentImpl * __cdecl FUserAgentImpl::Get(void)

{
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this;
  wchar_t *pwVar1;
  FString *pFVar2;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.RWLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      ::FString::FString(&`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                          ::__l2::Instance.Builder.ProjectName,GInternalProjectName);
      pwVar1 = FApp::GetBuildVersion();
      ::FString::FString(&`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                          ::__l2::Instance.Builder.ProjectVersion,pwVar1);
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.Builder.ProjectComments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.Builder.ProjectComments.ArrayNum = 0;
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.Builder.ProjectComments.ArrayMax = 0;
      ::FString::FString(&`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                          ::__l2::Instance.Builder.PlatformName,"Windows");
      FWindowsPlatformMisc::GetOSVersion
                (&`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::
                  __l2::Instance.Builder.PlatformVersion);
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.Builder.PlatformComments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.Builder.PlatformComments.ArrayNum = 0;
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.Builder.PlatformComments.ArrayMax = 0;
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.Builder.AgentVersion = 1;
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.CachedUserAgent.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.CachedUserAgent.Data.ArrayNum = 0;
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.CachedUserAgent.Data.ArrayMax = 0;
      `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.bCachedCommentsEnabled = false;
      pFVar2 = BuildUserAgentString
                         (&`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                           ::__l2::Instance,&local_18);
      if (pFVar2 != &`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                     ::__l2::Instance.CachedUserAgent) {
        if (`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
            Instance.CachedUserAgent.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                        ::__l2::Instance.CachedUserAgent.Data.AllocatorInstance.Data);
        }
        `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
        Instance.CachedUserAgent.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data
        ;
        (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
        Instance.CachedUserAgent.Data.ArrayNum = (pFVar2->Data).ArrayNum;
        `public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
        Instance.CachedUserAgent.Data.ArrayMax = (pFVar2->Data).ArrayMax;
        (pFVar2->Data).ArrayNum = 0;
        (pFVar2->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      this = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
              *)(**(code **)(*(longlong *)CVarDefaultUserAgentCommentsEnabled._padding_ + 0xe8))();
      TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
      AddRaw<FUserAgentImpl>(this,(FUserAgentImpl *)&stack0x00000008,(pmf_b5066f82)0x155064c30);
      atexit(`FUserAgentImpl::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2
              ::Instance;
    }
  }
  return &`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
          Instance;
}

// OnCommentsEnabledChanged @ 143170df0

void __thiscall
FUserAgentImpl::OnCommentsEnabledChanged(FUserAgentImpl *this,IConsoleVariable *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  AcquireSRWLockExclusive((PSRWLOCK)this);
  pFVar3 = BuildUserAgentString(this,&local_18);
  pFVar1 = &this->CachedUserAgent;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedUserAgent).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->CachedUserAgent).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x000143170e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

