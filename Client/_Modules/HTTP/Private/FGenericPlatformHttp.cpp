// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 23

// AddDefaultUserAgentPlatformComment @ 143154030

void __cdecl FGenericPlatformHttp::AddDefaultUserAgentPlatformComment(FString *param_1)

{
  uint *puVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  FUserAgentImpl *this;
  FString *pFVar4;
  FString local_18;
  
  this = FUserAgentImpl::Get();
  AcquireSRWLockExclusive((PSRWLOCK)this);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
            (&(this->Builder).PlatformComments,param_1);
  puVar1 = &(this->Builder).AgentVersion;
  *puVar1 = *puVar1 + 1;
  pFVar4 = FUserAgentImpl::BuildUserAgentString(this,&local_18);
  pFVar2 = &this->CachedUserAgent;
  if (pFVar2 != pFVar4) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedUserAgent).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->CachedUserAgent).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x0001431540c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// AddDefaultUserAgentProjectComment @ 1431540e0

void __cdecl FGenericPlatformHttp::AddDefaultUserAgentProjectComment(FString *param_1)

{
  uint *puVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  FUserAgentImpl *this;
  FString *pFVar4;
  FString local_18;
  
  this = FUserAgentImpl::Get();
  AcquireSRWLockExclusive((PSRWLOCK)this);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
            (&(this->Builder).ProjectComments,param_1);
  puVar1 = &(this->Builder).AgentVersion;
  *puVar1 = *puVar1 + 1;
  pFVar4 = FUserAgentImpl::BuildUserAgentString(this,&local_18);
  pFVar2 = &this->CachedUserAgent;
  if (pFVar2 != pFVar4) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedUserAgent).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->CachedUserAgent).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x000143154174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// ConstructRequest @ 143159000

IHttpRequest * __cdecl FGenericPlatformHttp::ConstructRequest(void)

{
  FHttpRequestImpl *this;
  
  this = ::operator_new(0x150);
  if (this != (FHttpRequestImpl *)0x0) {
    memset(this,0,0x150);
    FHttpRequestImpl::FHttpRequestImpl(this);
    this->_padding_ = (longlong)&___7FGenericPlatformHttpRequest__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].RequestCompleteDelegate = 0;
    return (IHttpRequest *)this;
  }
  return (IHttpRequest *)0x0;
}

// EscapeUserAgentString @ 14315cd80

FString * __cdecl
FGenericPlatformHttp::EscapeUserAgentString(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_28," ");
  if (local_28.Data.ArrayNum == 0) {
    FVar6.Data = (FScriptContainerElement *)L"";
LAB_14315cdd1:
    sVar5 = wcslen((wchar_t *)FVar6.Data);
    iVar4 = ::FString::Find(param_1,(wchar_t *)FVar6.Data,(int)sVar5,IgnoreCase,FromStart,-1);
    bVar1 = false;
    if (iVar4 == -1) goto LAB_14315ce04;
LAB_14315ce6c:
    bVar2 = true;
    bVar3 = true;
    if (!bVar1) goto LAB_14315ce86;
  }
  else {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14315cdd1;
LAB_14315ce04:
    ::FString::FString(&local_38,"/");
    if (local_38.Data.ArrayNum == 0) {
      FVar6.Data = (FScriptContainerElement *)L"";
LAB_14315ce2f:
      sVar5 = wcslen((wchar_t *)FVar6.Data);
      iVar4 = ::FString::Find(param_1,(wchar_t *)FVar6.Data,(int)sVar5,IgnoreCase,FromStart,-1);
      bVar1 = true;
      if (iVar4 != -1) goto LAB_14315ce6c;
    }
    else {
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14315ce2f;
    }
    bVar3 = false;
  }
  bVar2 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14315ce86:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar7 = (longlong)local_38.Data.ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
    }
    ::FString::ReplaceInline(&local_38,L" ",L"",IgnoreCase);
    ::FString::ReplaceInline(&local_38,L"/",L"+",IgnoreCase);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
  }
  else {
    ::FString::FString(__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetDefaultUserAgent @ 1431623f0

FString * __cdecl FGenericPlatformHttp::GetDefaultUserAgent(FString *__return_storage_ptr__)

{
  FUserAgentImpl *SRWLock;
  
  SRWLock = FUserAgentImpl::Get();
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  ::FString::FString(__return_storage_ptr__,&SRWLock->CachedUserAgent);
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// GetDefaultUserAgentBuilder @ 143162440

FDefaultUserAgentBuilder * __cdecl
FGenericPlatformHttp::GetDefaultUserAgentBuilder(FDefaultUserAgentBuilder *__return_storage_ptr__)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FUserAgentImpl *SRWLock;
  
  SRWLock = FUserAgentImpl::Get();
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  ::FString::FString(&__return_storage_ptr__->ProjectName,&(SRWLock->Builder).ProjectName);
  ::FString::FString(&__return_storage_ptr__->ProjectVersion,&(SRWLock->Builder).ProjectVersion);
  pTVar1 = &__return_storage_ptr__->ProjectComments;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->ProjectComments).ArrayMax;
  iVar3 = (SRWLock->Builder).ProjectComments.ArrayNum;
  pFVar4 = (SRWLock->Builder).ProjectComments.AllocatorInstance.Data;
  (__return_storage_ptr__->ProjectComments).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  ::FString::FString(&__return_storage_ptr__->PlatformName,&(SRWLock->Builder).PlatformName);
  ::FString::FString(&__return_storage_ptr__->PlatformVersion,&(SRWLock->Builder).PlatformVersion);
  pTVar1 = &__return_storage_ptr__->PlatformComments;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->PlatformComments).ArrayMax;
  iVar3 = (SRWLock->Builder).PlatformComments.ArrayNum;
  pFVar4 = (SRWLock->Builder).PlatformComments.AllocatorInstance.Data;
  (__return_storage_ptr__->PlatformComments).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  __return_storage_ptr__->AgentVersion = (SRWLock->Builder).AgentVersion;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// GetDefaultUserAgentVersion @ 143162580

uint __cdecl FGenericPlatformHttp::GetDefaultUserAgentVersion(void)

{
  FUserAgentImpl *pFVar1;
  
  pFVar1 = FUserAgentImpl::Get();
  return (pFVar1->Builder).AgentVersion;
}

// GetMimeType @ 143163070

FString * __cdecl
FGenericPlatformHttp::GetMimeType(FString *__return_storage_ptr__,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FString *pFVar5;
  TPairInitializer<FString_&&,FString_&&> local_res18;
  FString local_48;
  undefined1 local_38 [16];
  FString local_28;
  undefined1 local_18 [16];
  
  FPaths::GetExtension(&local_48,param_1,true);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FGenericPlatformHttp::GetMimeType'::__l2::
             _dynamic_atexit_destructor_for__ExtensionMimeTypeMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (ExtensionMimeTypeMap._8_4_ == ExtensionMimeTypeMap._52_4_) {
    ::FString::FString((FString *)local_18,L"text/html");
    ::FString::FString(&local_28,L".html");
    local_38._0_8_ = &local_28;
    local_38._8_8_ = local_18;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_18._0_8_);
    }
    ::FString::FString((FString *)local_38,L"text/css");
    ::FString::FString(&local_28,L".css");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"application/x-javascript");
    ::FString::FString(&local_28,L".js");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"video/msvideo, video/avi, video/x-msvideo");
    ::FString::FString(&local_28,L".avi");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"video/mpeg");
    ::FString::FString(&local_28,L".mpeg");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"image/bmp");
    ::FString::FString(&local_28,L".bmp");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"image/gif");
    ::FString::FString(&local_28,L".gif");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"image/jpeg");
    ::FString::FString(&local_28,L".jpg");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"image/jpeg");
    ::FString::FString(&local_28,L".jpeg");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"image/png");
    ::FString::FString(&local_28,L".png");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"image/svg+xml");
    ::FString::FString(&local_28,L".svg");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"image/tiff");
    ::FString::FString(&local_28,L".tiff");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"audio/x-midi");
    ::FString::FString(&local_28,L".midi");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"audio/mpeg");
    ::FString::FString(&local_28,L".mp3");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"audio/vorbis, application/ogg");
    ::FString::FString(&local_28,L".ogg");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"audio/wav, audio/x-wav");
    ::FString::FString(&local_28,L".wav");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"application/xml");
    ::FString::FString(&local_28,L".xml");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"text/plain");
    ::FString::FString(&local_28,L".txt");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"text/plain");
    ::FString::FString(&local_28,L".log");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"text/tab-separated-values");
    ::FString::FString(&local_28,L".tsv");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"text/csv");
    ::FString::FString(&local_28,L".csv");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"application/json");
    ::FString::FString(&local_28,L".json");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    ::FString::FString((FString *)local_38,L"application/zip, application/x-compressed-zip");
    ::FString::FString(&local_28,L".zip");
    local_18._0_8_ = &local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&ExtensionMimeTypeMap,&local_res18,(bool *)local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar4.Data);
  iVar3 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&ExtensionMimeTypeMap,uVar2,&local_48);
  if (iVar3 != -1) {
    lVar1 = ExtensionMimeTypeMap._0_8_ + (longlong)iVar3 * 0x28;
    pFVar5 = (FString *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pFVar5 = (FString *)0x0;
    }
    if (pFVar5 != (FString *)0x0) {
      ::FString::FString(__return_storage_ptr__,pFVar5);
      goto LAB_143163a21;
    }
  }
  ::FString::FString(__return_storage_ptr__,L"application/unknown");
LAB_143163a21:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOperatingSystemProxyAddress @ 1431641d0

TOptional<FString> * __cdecl
FGenericPlatformHttp::GetOperatingSystemProxyAddress(TOptional<FString> *__return_storage_ptr__)

{
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// GetUrlBase @ 1431653e0

FString * __cdecl
FGenericPlatformHttp::GetUrlBase(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  short sVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FString local_38 [2];
  
  iVar2 = param_1->Size;
  uVar9 = (ulonglong)iVar2;
  uVar10 = *(undefined4 *)&param_1->DataPtr;
  uVar11 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_58 = param_1->DataPtr;
  iVar12 = param_1->Size;
  uStack_4c = *(undefined4 *)&param_1->field_0xc;
  iVar6 = 0;
  if (0 < iVar2) {
    iVar6 = iVar2;
  }
  local_68.Size = iVar6;
  local_48._12_4_ = uStack_6c;
  local_48.Size = 3;
  local_48.DataPtr = L"://";
  local_68.DataPtr = param_1->DataPtr + (uVar9 - (longlong)iVar6);
  iStack_50 = iVar12;
  iVar6 = UE::String::FindFirst(&local_68,&local_48,CaseSensitive);
  if (iVar6 == -1) {
    iVar6 = -1;
  }
  iVar6 = iVar6 + 3;
  if (iVar6 < iVar2) {
    lVar8 = (longlong)iVar6 * 2;
    do {
      if (((iVar6 < 0) || ((int)uVar9 <= iVar6)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
      sVar1 = *(short *)(lVar8 + (longlong)param_1->DataPtr);
      if (((sVar1 == 0x2f) || (sVar1 == 0x3f)) || (sVar1 == 0x23)) {
        if (iVar6 < iStack_50) {
          iStack_50 = iVar6;
        }
        iVar12 = 0;
        if (0 < iStack_50) {
          iVar12 = iStack_50;
        }
        uVar10 = (undefined4)local_58;
        uVar11 = local_58._4_4_;
        iStack_50 = iVar12;
        break;
      }
      uVar9 = (ulonglong)(uint)param_1->Size;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 2;
    } while (iVar6 < param_1->Size);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar7 = ::FString::ConstructFromPtrSize(local_38,(wchar_t *)CONCAT44(uVar11,uVar10),iVar12);
  if (__return_storage_ptr__ != pFVar7) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUrlDomain @ 1431655c0

FString * __cdecl
FGenericPlatformHttp::GetUrlDomain(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FString *pFVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_68 = L"://";
  uVar8 = 0;
  uStack_60 = 3;
  local_48._12_4_ = uStack_5c;
  local_48.Size = 3;
  local_58.DataPtr = (wchar_t *)0x0;
  local_58.Size = 0;
  local_78.DataPtr = (wchar_t *)0x0;
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  local_48.DataPtr = L"://";
  bVar5 = ::`anonymous_namespace'::Split(&local_38,&local_48,&local_58,&local_78);
  if (!bVar5) {
    local_78.DataPtr = param_1->DataPtr;
    local_78._8_8_ = *(undefined8 *)&param_1->Size;
  }
  pwVar4 = local_78.DataPtr;
  iVar11 = local_78.Size;
  uVar9 = uVar8;
  if (0 < local_78.Size) {
    do {
      iVar7 = (int)uVar8;
      if (((iVar7 < 0) || (iVar11 <= iVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      uVar1 = *(ushort *)(uVar9 + (longlong)pwVar4);
      if ((uVar1 == 0x2f) ||
         ((uVar1 < 0x40 && ((0x8400000800000000U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)))) {
        local_58.DataPtr = pwVar4;
        iVar10 = iVar11;
        if (iVar7 < iVar11) {
          iVar10 = iVar7;
        }
        iVar11 = 0;
        local_58.Size = 0;
        if (0 < iVar10) {
          iVar11 = iVar10;
          local_58.Size = iVar10;
        }
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
      uVar9 = uVar9 + 2;
    } while ((int)(iVar7 + 1U) < iVar11);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_28,pwVar4,iVar11);
  if (__return_storage_ptr__ != pFVar6) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUrlDomainAndPort @ 1431657a0

FString * __cdecl
FGenericPlatformHttp::GetUrlDomainAndPort
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  short sVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FString *pFVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_68 = L"://";
  uVar8 = 0;
  uStack_60 = 3;
  local_48._12_4_ = uStack_5c;
  local_48.Size = 3;
  local_58.DataPtr = (wchar_t *)0x0;
  local_58.Size = 0;
  local_78.DataPtr = (wchar_t *)0x0;
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  local_48.DataPtr = L"://";
  bVar5 = ::`anonymous_namespace'::Split(&local_38,&local_48,&local_58,&local_78);
  if (!bVar5) {
    local_78.DataPtr = param_1->DataPtr;
    local_78._8_8_ = *(undefined8 *)&param_1->Size;
  }
  pwVar4 = local_78.DataPtr;
  iVar11 = local_78.Size;
  uVar9 = uVar8;
  if (0 < local_78.Size) {
    do {
      iVar7 = (int)uVar8;
      if (((iVar7 < 0) || (iVar11 <= iVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      sVar1 = *(short *)(uVar9 + (longlong)pwVar4);
      if (((sVar1 == 0x2f) || (sVar1 == 0x3f)) || (sVar1 == 0x23)) {
        local_58.DataPtr = pwVar4;
        iVar10 = iVar11;
        if (iVar7 < iVar11) {
          iVar10 = iVar7;
        }
        iVar11 = 0;
        local_58.Size = 0;
        if (0 < iVar10) {
          iVar11 = iVar10;
          local_58.Size = iVar10;
        }
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
      uVar9 = uVar9 + 2;
    } while ((int)(iVar7 + 1U) < iVar11);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_28,pwVar4,iVar11);
  if (__return_storage_ptr__ != pFVar6) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUrlParameter @ 143165970

TOptional<FString> * __cdecl
FGenericPlatformHttp::GetUrlParameter
          (TOptional<FString> *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  TOptional<FString> *pTVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  int iStack_e0;
  int iStack_dc;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  undefined8 uStack_70;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  
  pwVar2 = param_1->DataPtr;
  uVar3._0_4_ = param_1->Size;
  uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
  (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  local_98.DataPtr = pwVar2;
  local_98._8_8_ = uVar3;
  iVar6 = UE::String::FindFirstChar(&local_98,L'?',CaseSensitive);
  iVar13 = local_d8._12_4_;
  if (iVar6 != -1) {
    iStack_ec = local_d8._12_4_;
    iVar12 = ((int)uVar3 - iVar6) + -1;
    iVar6 = (int)uVar3;
    if (iVar12 < (int)uVar3) {
      iVar6 = iVar12;
    }
    iStack_e0 = 0;
    if (0 < iVar6) {
      iStack_e0 = iVar6;
    }
    local_e8 = (FScriptContainerElement *)(pwVar2 + ((longlong)(int)uVar3 - (longlong)iStack_e0));
    local_88._12_4_ = local_d8._12_4_;
    local_88.Size = iStack_e0;
    local_88.DataPtr = (wchar_t *)local_e8;
    iVar6 = UE::String::FindFirstChar(&local_88,L'#',CaseSensitive);
    uVar4 = local_d8._12_4_;
    if (iVar6 != -1) {
      iVar12 = iStack_e0;
      if (iVar6 < iStack_e0) {
        iVar12 = iVar6;
      }
      iVar13 = local_d8._12_4_;
      iStack_e0 = 0;
      if (0 < iVar12) {
        iStack_e0 = iVar12;
      }
    }
    local_78 = param_2->DataPtr;
    uVar3 = *(undefined8 *)&param_2->Size;
    iStack_dc = iVar13;
    uStack_70 = uVar3;
    do {
      iVar6 = iStack_e0;
      pFVar14 = local_e8;
      iStack_a0 = iStack_e0;
      local_68._12_4_ = iVar13;
      local_68.Size = iStack_e0;
      local_a8 = pFVar14;
      local_68.DataPtr = (wchar_t *)pFVar14;
      iVar12 = UE::String::FindFirstChar(&local_68,L'&',CaseSensitive);
      iVar9 = 0;
      local_d8.DataPtr._0_4_ = (undefined4)local_e8;
      local_d8.DataPtr._4_4_ = local_e8._4_4_;
      if (iVar12 == -1) {
        local_e8 = (FScriptContainerElement *)0x0;
        iStack_e0 = 0;
        local_d8._12_4_ = iStack_dc;
      }
      else {
        iVar13 = iStack_e0;
        if (iVar12 < iStack_e0) {
          iVar13 = iVar12;
        }
        iStack_dc = uVar4;
        iVar6 = iVar9;
        if (0 < iVar13) {
          iVar6 = iVar13;
        }
        iVar12 = (iStack_e0 - iVar12) + -1;
        iVar13 = iStack_e0;
        if (iVar12 < iStack_e0) {
          iVar13 = iVar12;
        }
        iVar12 = iVar9;
        if (0 < iVar13) {
          iVar12 = iVar13;
        }
        local_e8 = local_e8 + ((longlong)iStack_e0 - (longlong)iVar12) * 2;
        local_d8._12_4_ = local_c8.Data.ArrayMax;
        iVar13 = uVar4;
        iStack_e0 = iVar12;
        local_c8.Data.AllocatorInstance.Data = pFVar14;
        local_c8.Data.ArrayNum = iVar6;
      }
      local_f8 = (FScriptContainerElement *)0x0;
      iStack_f0 = 0;
      local_d8.Size = iVar6;
      iVar7 = UE::String::FindFirstChar(&local_d8,L'=',CaseSensitive);
      iVar12 = iVar6;
      if (iVar7 != -1) {
        iStack_ec = uVar4;
        local_b8.DataPtr = (wchar_t *)pFVar14;
        iVar8 = iVar6;
        if (iVar7 < iVar6) {
          iVar8 = iVar7;
        }
        iVar12 = iVar9;
        if (0 < iVar8) {
          iVar12 = iVar8;
        }
        local_b8.Size = iVar12;
        iVar8 = (iVar6 - iVar7) + -1;
        iVar7 = iVar6;
        if (iVar8 < iVar6) {
          iVar7 = iVar8;
        }
        iStack_f0 = iVar9;
        if (0 < iVar7) {
          iStack_f0 = iVar7;
        }
        local_f8 = pFVar14 + ((longlong)iVar6 - (longlong)iStack_f0) * 2;
      }
      iVar6 = (int)uVar3;
      if (iVar12 == iVar6) {
        local_58 = param_2->DataPtr;
        uStack_50 = *(undefined8 *)&param_2->Size;
        if ((iVar12 != 0) && (iVar6 != 0)) {
          iVar9 = iVar6;
          if (iVar12 < iVar6) {
            iVar9 = iVar12;
          }
          iVar9 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar14,local_58,(longlong)iVar9);
          if (iVar9 != 0) goto LAB_143165c3a;
        }
        if (iVar12 == iVar6) {
          if (iStack_f0 == 0) {
            pFVar14 = (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
            if (pFVar14 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar14);
            }
            (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
            *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0;
            return __return_storage_ptr__;
          }
          local_b8._12_4_ = iStack_ec;
          local_b8.Size = iStack_f0;
          local_b8.DataPtr = (wchar_t *)local_f8;
          pFVar10 = UrlDecode(&local_c8,&local_b8);
          if (pFVar10 != (FString *)__return_storage_ptr__) {
            pFVar14 = (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
            if (pFVar14 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar14);
            }
            (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                 (pFVar10->Data).AllocatorInstance.Data;
            (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar10->Data).ArrayNum;
            *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar10->Data).ArrayMax
            ;
            (pFVar10->Data).ArrayNum = 0;
            (pFVar10->Data).ArrayMax = 0;
            if ((*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  ), bVar5)) {
              pcVar1 = (code *)swi(3);
              pTVar11 = (TOptional<FString> *)(*pcVar1)();
              return pTVar11;
            }
          }
          if (local_c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
      }
LAB_143165c3a:
    } while (iStack_e0 != 0);
  }
  return __return_storage_ptr__;
}

// GetUrlPath @ 143165d40

FString * __cdecl
FGenericPlatformHttp::GetUrlPath
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,bool param_2,bool param_3)

{
  ushort uVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  uint uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  wchar_t *pwVar15;
  uint uVar16;
  uint uVar17;
  TStringView<wchar_t> local_c8;
  wchar_t *local_b8;
  uint uStack_b0;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  uint uStack_80;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58 [2];
  
  pwVar12 = (wchar_t *)0x0;
  if (((!param_2) && (param_3)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIncludeQueryString || !bIncludeFragment",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\GenericPlatformHttp.cpp"
                         ,0x302,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  ::FString::FString(__return_storage_ptr__,L"/");
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uStack_a0 = 3;
  local_a8 = L"://";
  local_78._12_4_ = uStack_9c;
  local_78.Size = 3;
  local_78.DataPtr = L"://";
  local_98.DataPtr = (wchar_t *)0x0;
  uVar11 = 0;
  local_98.Size = 0;
  local_c8.DataPtr = (wchar_t *)0x0;
  local_c8._8_8_ = (ulonglong)(uint)local_c8._12_4_ << 0x20;
  bVar4 = ::`anonymous_namespace'::Split(&local_68,&local_78,&local_98,&local_c8);
  if (!bVar4) {
    local_c8.DataPtr = param_1->DataPtr;
    local_c8._8_8_ = *(undefined8 *)&param_1->Size;
  }
  pwVar9 = local_c8.DataPtr;
  iVar14 = local_c8.Size;
  pwVar10 = pwVar12;
  pwVar13 = pwVar12;
  if (local_c8.Size < 1) {
    return __return_storage_ptr__;
  }
  while( true ) {
    iVar5 = (int)pwVar10;
    if (((iVar5 < 0) || (iVar14 <= iVar5)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar2)();
      return pFVar7;
    }
    uVar1 = *(ushort *)((longlong)pwVar13 + (longlong)pwVar9);
    if ((uVar1 == 0x3a) ||
       ((uVar1 < 0x40 && ((0x8000800800000000U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)))) break;
    pwVar10 = (wchar_t *)(ulonglong)(iVar5 + 1U);
    pwVar13 = pwVar13 + 1;
    if (iVar14 <= (int)(iVar5 + 1U)) {
      return __return_storage_ptr__;
    }
  }
  uVar8 = iVar14;
  if (iVar14 - iVar5 < iVar14) {
    uVar8 = iVar14 - iVar5;
  }
  uVar16 = uVar11;
  if (0 < (int)uVar8) {
    uVar16 = uVar8;
  }
  pwVar9 = pwVar9 + ((longlong)iVar14 - (longlong)(int)uVar16);
  if (uVar16 == 0) {
    return __return_storage_ptr__;
  }
  uStack_b0 = 0;
  local_b8 = (wchar_t *)0x0;
  uVar8 = 0;
  uStack_80 = uVar16;
  if (((int)uVar16 < 1) || (*pwVar9 != L':')) {
LAB_143165f67:
    pwVar10 = pwVar9;
    uVar17 = uStack_80;
    uVar11 = uStack_80;
    local_88 = pwVar9;
    pwVar3 = pwVar9;
    if ((0 < (int)uStack_80) && (*pwVar9 == L'/')) {
      if ((int)(uStack_80 - 1) < (int)uStack_80) {
        uVar11 = uStack_80 - 1;
      }
      uVar17 = uVar8;
      if (0 < (int)uVar11) {
        uVar17 = uVar11;
      }
      pwVar10 = pwVar9 + ((longlong)(int)uStack_80 - (longlong)(int)uVar17);
      uVar11 = uVar17;
      uStack_80 = uVar17;
      local_88 = pwVar10;
      pwVar3 = pwVar10;
    }
  }
  else {
    iVar14 = 1;
    pwVar10 = pwVar12;
    uVar17 = uStack_b0;
    pwVar13 = pwVar9;
    local_88 = pwVar9;
    pwVar3 = local_b8;
    if (1 < (int)uVar16) {
      do {
        iVar5 = iswdigit(pwVar13[1]);
        if (iVar5 == 0) {
          uVar17 = uVar16;
          if ((int)(uVar16 - iVar14) < (int)uVar16) {
            uVar17 = uVar16 - iVar14;
          }
          uStack_80 = uVar11;
          if (0 < (int)uVar17) {
            uStack_80 = uVar17;
          }
          pwVar9 = pwVar9 + ((longlong)(int)uVar16 - (longlong)(int)uStack_80);
          goto LAB_143165f67;
        }
        iVar14 = iVar14 + 1;
        uVar17 = uStack_b0;
        pwVar13 = pwVar13 + 1;
        pwVar3 = local_b8;
      } while (iVar14 < (int)uVar16);
    }
  }
  if (uVar11 == 0) {
    return __return_storage_ptr__;
  }
  if (param_2) {
    pwVar9 = pwVar10;
    uVar16 = uVar11;
    if (!param_3) {
      local_58[0].Size = uVar17;
      local_58[0].DataPtr = pwVar3;
      uVar6 = UE::String::FindFirstChar(local_58,L'#',CaseSensitive);
      pwVar9 = pwVar3;
      uVar16 = uVar17;
      if (uVar6 != 0xffffffff) {
        if ((int)uVar6 < (int)uVar11) {
          uVar11 = uVar6;
        }
        pwVar9 = pwVar10;
        uVar16 = uVar8;
        uStack_80 = uVar8;
        local_88 = pwVar10;
        if (0 < (int)uVar11) {
          uVar16 = uVar11;
          uStack_80 = uVar11;
        }
      }
    }
  }
  else {
    pwVar13 = pwVar10;
    pwVar15 = pwVar12;
    pwVar9 = pwVar12;
    uVar16 = 0;
    if (0 < (int)uVar11) {
      do {
        uVar6 = (uint)pwVar12;
        if (((int)uVar6 < 0) || ((int)uVar11 <= (int)uVar6)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FString *)(*pcVar2)();
            return pFVar7;
          }
        }
        if ((*pwVar13 == L'?') || (*pwVar13 == L'#')) {
          if ((int)uVar6 < (int)uVar11) {
            uVar11 = uVar6;
          }
          pwVar9 = pwVar10;
          uVar16 = uVar8;
          uStack_80 = uVar8;
          local_88 = pwVar10;
          if (0 < (int)uVar11) {
            uVar16 = uVar11;
            uStack_80 = uVar11;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        pwVar12 = (wchar_t *)(ulonglong)uVar6;
        if (uVar6 == uVar11) {
          pwVar15 = (wchar_t *)(ulonglong)uVar17;
          pwVar9 = pwVar3;
        }
        uVar16 = (uint)pwVar15;
        pwVar13 = pwVar13 + 1;
      } while ((int)uVar6 < (int)uVar11);
    }
  }
  ::FString::AppendChars(__return_storage_ptr__,pwVar9,uVar16);
  return __return_storage_ptr__;
}

// GetUrlPort @ 143166140

TOptional<unsigned_short> __cdecl FGenericPlatformHttp::GetUrlPort(TStringView<wchar_t> *param_1)

{
  wint_t _C;
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  bool bVar4;
  TOptional<unsigned_short> TVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  int iVar9;
  int iVar10;
  longlong *in_RDX;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int local_res8;
  TStringView<wchar_t> local_a8;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48;
  
  local_68.DataPtr = (wchar_t *)*in_RDX;
  local_68._8_8_ = in_RDX[1];
  pFVar12 = (FScriptContainerElement *)0x0;
  *(undefined1 *)((longlong)&param_1->DataPtr + 2) = 0;
  uStack_90 = 3;
  local_98 = L"://";
  local_78._12_4_ = uStack_8c;
  local_78.Size = 3;
  local_78.DataPtr = L"://";
  local_88.DataPtr = (wchar_t *)0x0;
  iVar7 = 0;
  local_88.Size = 0;
  local_a8.DataPtr = (wchar_t *)0x0;
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  bVar3 = ::`anonymous_namespace'::Split(&local_68,&local_78,&local_88,&local_a8);
  if (!bVar3) {
    local_a8.DataPtr = (wchar_t *)*in_RDX;
    local_a8._8_8_ = in_RDX[1];
  }
  pwVar2 = local_a8.DataPtr;
  iVar9 = local_a8.Size;
  bVar3 = false;
  TVar5 = SUB84(param_1,0);
  if (local_a8.Size < 1) {
    return TVar5;
  }
  iVar13 = 1;
  pFVar11 = pFVar12;
  pFVar14 = pFVar12;
  do {
    iVar10 = (int)pFVar11;
    if ((iVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (TOptional<unsigned_short>)(*pcVar1)();
      return TVar5;
    }
    _C = *(wint_t *)(pFVar14 + (longlong)pwVar2);
    if (bVar3) {
      iVar6 = iswdigit(_C);
      if (iVar6 == 0) {
LAB_143166282:
        iVar13 = iVar7;
        if (local_res8 < 0) {
          iVar13 = local_res8;
        }
        iVar10 = (iVar13 - local_res8) + iVar10;
        iVar6 = local_res8 - iVar13;
        if (iVar9 < local_res8 - iVar13) {
          iVar6 = iVar9;
        }
        iVar13 = iVar9 - iVar6;
        if (iVar10 < iVar9 - iVar6) {
          iVar13 = iVar10;
        }
        iVar9 = 0;
        if (0 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar9 == 0) {
          return TVar5;
        }
        pFVar8 = ::FString::ConstructFromPtrSize(&local_58,pwVar2 + iVar6,iVar9);
        if (&local_48 != pFVar8) {
          pFVar12 = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar7 = (pFVar8->Data).ArrayNum;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        pFVar11 = pFVar12;
        if (iVar7 == 0) {
          pFVar11 = (FScriptContainerElement *)L"";
        }
        *(undefined2 *)&param_1->DataPtr = 0;
        *(undefined1 *)((longlong)&param_1->DataPtr + 2) = 1;
        iVar7 = _wtoi((wchar_t *)pFVar11);
        *(short *)&param_1->DataPtr = (short)iVar7;
        if (pFVar12 == (FScriptContainerElement *)0x0) {
          return TVar5;
        }
        FMemory::Free(pFVar12);
        return TVar5;
      }
      if (iVar13 == iVar9) {
        if (iVar10 + 1 == iVar9) {
          iVar10 = iVar10 + 1;
        }
        goto LAB_143166282;
      }
    }
    else if (_C == 0x3a) {
      if (iVar13 < iVar9) {
        bVar3 = true;
        local_res8 = iVar13;
      }
    }
    else if (_C == 0x2f) {
      return TVar5;
    }
    pFVar11 = (FScriptContainerElement *)(ulonglong)(iVar10 + 1U);
    iVar13 = iVar13 + 1;
    pFVar14 = pFVar14 + 2;
    if (iVar9 <= (int)(iVar10 + 1U)) {
      return TVar5;
    }
  } while( true );
}

// HtmlEncode @ 143168e40

FString * __cdecl
FGenericPlatformHttp::HtmlEncode(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar2 = param_1->Size;
  uVar8 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reserve(__return_storage_ptr__,uVar2);
  uVar10 = uVar8;
  if (uVar2 != 0) {
    do {
      iVar7 = (int)uVar8;
      if (((iVar7 < 0) || ((int)uVar2 <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar3)();
        return pFVar5;
      }
      sVar1 = *(short *)(uVar10 + (longlong)param_1->DataPtr);
      if (sVar1 == 0x22) {
        pwVar6 = L"&quot;";
LAB_143168f72:
        iVar9 = 6;
LAB_143168f78:
        ::FString::AppendChars(__return_storage_ptr__,pwVar6,iVar9);
      }
      else {
        if (sVar1 == 0x26) {
          iVar9 = 5;
          pwVar6 = L"&amp;";
          goto LAB_143168f78;
        }
        if (sVar1 == 0x27) {
          pwVar6 = L"&apos;";
          goto LAB_143168f72;
        }
        if (sVar1 == 0x3c) {
          iVar9 = 4;
          pwVar6 = L"&lt;";
          goto LAB_143168f78;
        }
        if (sVar1 == 0x3e) {
          iVar9 = 4;
          pwVar6 = L"&gt;";
          goto LAB_143168f78;
        }
        if (((iVar7 < 0) || ((int)uVar2 <= iVar7)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar3)();
          return pFVar5;
        }
        ::FString::AppendChar
                  (__return_storage_ptr__,*(wchar_t *)(uVar10 + (longlong)param_1->DataPtr));
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
      uVar10 = uVar10 + 2;
    } while (iVar7 + 1U != uVar2);
  }
  return __return_storage_ptr__;
}

// Init @ 14316af10

void __cdecl FGenericPlatformHttp::Init(void)

{
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *this;
  wchar_t *pwVar1;
  FString *pFVar2;
  FString FStack_18;
  
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
      pFVar2 = FUserAgentImpl::BuildUserAgentString
                         (&`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                           ::__l2::Instance,&FStack_18);
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
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      this = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
              *)(**(code **)(*(longlong *)CVarDefaultUserAgentCommentsEnabled._padding_ + 0xe8))();
      TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
      AddRaw<FUserAgentImpl>(this,(FUserAgentImpl *)&stack0x00000008,(pmf_b5066f82)0x155064c30);
      atexit(`FUserAgentImpl::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// IsOperatingSystemProxyInformationSupported @ 14316c940

bool __cdecl FGenericPlatformHttp::IsOperatingSystemProxyInformationSupported(void)

{
  return false;
}

// IsSecureProtocol @ 14316cac0

TOptional<bool> __cdecl FGenericPlatformHttp::IsSecureProtocol(TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  TOptional<bool> TVar3;
  int iVar4;
  int iVar5;
  undefined8 *in_RDX;
  ulong64 uVar6;
  undefined1 local_58 [8];
  TStringView<wchar_t> local_50;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = (wchar_t *)*in_RDX;
  local_28._8_8_ = in_RDX[1];
  local_38.Size = 3;
  local_50.DataPtr = (wchar_t *)0x0;
  local_50.Size = 0;
  *(undefined1 *)((longlong)&param_1->DataPtr + 1) = 0;
  local_38.DataPtr = L"://";
  bVar2 = ::`anonymous_namespace'::Split(&local_28,&local_38,&local_50,&local_18);
  iVar5 = local_50.Size;
  pwVar1 = local_50.DataPtr;
  TVar3 = SUB82(param_1,0);
  if (!bVar2) {
    return TVar3;
  }
  uVar6 = (ulong64)local_50.Size;
  if (local_50.Size == 0) {
    return TVar3;
  }
  iVar4 = FGenericPlatformStricmp::Strnicmp(local_50.DataPtr,L"https",uVar6);
  if ((iVar4 != 0) || (L"https"[uVar6] != L'\0')) {
    if (iVar5 == 0) {
      return TVar3;
    }
    iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar1,L"wss",uVar6);
    if ((iVar4 != 0) || (L"wss"[uVar6] != L'\0')) {
      if (iVar5 == 0) {
        return TVar3;
      }
      iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar1,L"http",uVar6);
      if ((iVar4 != 0) || (L"http"[uVar6] != L'\0')) {
        if (iVar5 == 0) {
          return TVar3;
        }
        iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar1,L"ws",uVar6);
        if (iVar5 != 0) {
          return TVar3;
        }
        if (L"ws"[uVar6] != L'\0') {
          return TVar3;
        }
      }
      if ((TStringView<wchar_t> *)(local_58 + 1) == param_1) {
        return TVar3;
      }
      *(undefined2 *)&param_1->DataPtr = 0x100;
      return TVar3;
    }
  }
  if ((TStringView<wchar_t> *)local_58 != param_1) {
    *(undefined2 *)&param_1->DataPtr = 0x101;
  }
  return TVar3;
}

// IsURLEncoded @ 14316cca0

bool __cdecl
FGenericPlatformHttp::IsURLEncoded(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  char *pcVar7;
  longlong lVar8;
  uint uVar9;
  
  if (!bTableFilled) {
    uVar9 = 0;
    pcVar7 = AllowedChars;
    do {
      bVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      uVar9 = uVar9 + 1;
      AllowedTable[bVar1] = true;
    } while (uVar9 < 0x42);
    bTableFilled = true;
  }
  iVar2 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < (longlong)iVar2) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (AllowedTable[(byte)(param_1->AllocatorInstance).Data[lVar8]] == false) {
        return false;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar2);
  }
  return true;
}

// Shutdown @ 1431824a0

void __cdecl FGenericPlatformHttp::Shutdown(void)

{
  return;
}

// UrlDecode @ 14318b860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FGenericPlatformHttp::UrlDecode(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement FVar3;
  uint uVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  uchar *puVar11;
  FString *pFVar12;
  longlong lVar13;
  size_t sVar14;
  int iVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStackY_278 [32];
  FScriptContainerElement local_228;
  FScriptContainerElement local_227 [7];
  ForAnyElementType local_220;
  undefined8 local_218;
  wchar32 local_210 [2];
  FScriptContainerElement local_208 [128];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  uchar local_48 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pwVar5 = param_1->DataPtr;
  uVar17 = 0;
  uVar4 = param_1->Size;
  local_188.Data = (FScriptContainerElement *)0x0;
  iVar15 = 0;
  if (pwVar5 == (wchar_t *)0x0) {
    local_180 = (FScriptContainerElement *)0x0;
    local_178 = 0;
  }
  else {
    uVar23 = uVar4;
    if ((0 < (int)uVar4) && (pwVar5[(longlong)(int)uVar4 + -1] == L'\0')) {
      iVar15 = 1;
      uVar23 = uVar4 - 1;
    }
    local_178 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar5,uVar23);
    uVar1 = local_178 + iVar15;
    uVar21 = uVar1;
    if (uVar1 < 0x81) {
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        uVar21 = 0;
        goto LAB_14318b8f5;
      }
    }
    else {
LAB_14318b8f5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar21,1);
    }
    local_180 = local_208;
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      local_180 = local_188.Data;
    }
    UE::Core::Private::Convert((uchar *)local_180,uVar1,pwVar5,iVar15 + uVar23);
  }
  pFVar8 = local_180;
  local_218 = 0;
  local_220.Data = (FScriptContainerElement *)0x0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  uVar22 = uVar17;
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar4,&local_220,0,(int *)((longlong)&local_218 + 4));
    uVar22 = local_218 & 0xffffffff;
  }
  iVar10 = (int)uVar22;
  FVar16.Data = local_220.Data;
  uVar20 = uVar17;
  iVar15 = local_178;
  if (0 < local_178) {
    do {
      pFVar2 = pFVar8 + uVar17;
      iVar19 = (int)uVar20;
      iVar10 = (int)uVar22;
      if (pFVar8[uVar17] == (FScriptContainerElement)0x25) {
        local_210[0] = L'\0';
        if ((iVar19 < iVar15 + -1) && (pFVar2[1] == (FScriptContainerElement)0x75)) {
          if (iVar15 + -6 < iVar19) goto LAB_14318bd2b;
          FVar3 = pFVar2[2];
          if ((byte)((char)FVar3 - 0x30U) < 10) {
            iVar15 = (byte)FVar3 - 0x30;
          }
          else if ((byte)((char)FVar3 + 0x9fU) < 6) {
            iVar15 = (byte)FVar3 - 0x57;
          }
          else {
            iVar15 = (byte)FVar3 - 0x37;
            if (5 < (byte)((char)FVar3 + 0xbfU)) {
              iVar15 = 0;
            }
          }
          FVar3 = pFVar2[3];
          iVar15 = iVar15 * 0x1000;
          if ((byte)((char)FVar3 - 0x30U) < 10) {
            iVar15 = ((byte)FVar3 - 0x30) * 0x100 + iVar15;
          }
          else if ((byte)((char)FVar3 + 0x9fU) < 6) {
            iVar15 = ((byte)FVar3 - 0x57) * 0x100 + iVar15;
          }
          else if ((byte)((char)FVar3 + 0xbfU) < 6) {
            iVar15 = ((byte)FVar3 - 0x37) * 0x100 + iVar15;
          }
          FVar3 = pFVar2[4];
          if ((byte)((char)FVar3 - 0x30U) < 10) {
            iVar10 = ((byte)FVar3 - 0x30) * 0x10;
          }
          else if ((byte)((char)FVar3 + 0x9fU) < 6) {
            iVar10 = ((byte)FVar3 - 0x57) * 0x10;
          }
          else if ((byte)((char)FVar3 + 0xbfU) < 6) {
            iVar10 = ((byte)FVar3 - 0x37) * 0x10;
          }
          else {
            iVar10 = 0;
          }
          local_210[0] = iVar15 + iVar10;
          FVar3 = pFVar2[5];
          if ((byte)((char)FVar3 - 0x30U) < 10) {
            iVar15 = local_210[0] + L'\xffffffd0';
LAB_14318ba99:
            local_210[0] = iVar15 + (uint)(byte)FVar3;
          }
          else {
            if ((byte)((char)FVar3 + 0x9fU) < 6) {
              iVar15 = local_210[0] + L'\xffffffa9';
              goto LAB_14318ba99;
            }
            if ((byte)((char)FVar3 + 0xbfU) < 6) {
              iVar15 = local_210[0] + L'\xffffffc9';
              goto LAB_14318ba99;
            }
          }
          local_48[0] = '\0';
          local_48[1] = '\0';
          local_48[2] = '\0';
          local_48[3] = '\0';
          local_48[4] = '\0';
          local_48[5] = '\0';
          local_48[6] = '\0';
          local_48[7] = '\0';
          puVar11 = UE::Core::Private::Convert(local_48,8,local_210,1);
          if ((puVar11 == (uchar *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("BufferEnd",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\GenericPlatformHttp.cpp"
                                 ,0x19b,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            pFVar12 = (FString *)(*pcVar6)();
            return pFVar12;
          }
          iVar10 = (int)puVar11 - (int)local_48;
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,iVar10,&local_220,(int *)&local_218,
                              (int *)((longlong)&local_218 + 4));
          if (iVar10 != 0) {
            memcpy(local_220.Data + iVar15,local_48,(longlong)iVar10);
          }
          lVar13 = 6;
        }
        else {
          uVar18 = uVar17 + 1;
          if (iVar15 + -3 < iVar19) {
            uVar20 = (ulonglong)(iVar19 + 1);
            goto LAB_14318bd30;
          }
          FVar3 = pFVar8[uVar18];
          if ((byte)((char)FVar3 - 0x30U) < 10) {
            iVar15 = (byte)FVar3 - 0x30;
          }
          else if ((byte)((char)FVar3 + 0x9fU) < 6) {
            iVar15 = (byte)FVar3 - 0x57;
          }
          else if ((byte)((char)FVar3 + 0xbfU) < 6) {
            iVar15 = (byte)FVar3 - 0x37;
          }
          else {
            iVar15 = 0;
          }
          FVar3 = pFVar2[2];
          local_210[0] = iVar15 * 0x10;
          if ((byte)((char)FVar3 - 0x30U) < 10) {
            iVar15 = local_210[0] + L'\xffffffd0';
LAB_14318bbad:
            local_210[0] = iVar15 + (uint)(byte)FVar3;
          }
          else {
            if ((byte)((char)FVar3 + 0x9fU) < 6) {
              iVar15 = local_210[0] + L'\xffffffa9';
              goto LAB_14318bbad;
            }
            if ((byte)((char)FVar3 + 0xbfU) < 6) {
              iVar15 = local_210[0] + L'\xffffffc9';
              goto LAB_14318bbad;
            }
          }
          local_228 = SUB41(local_210[0],0);
          if ((FVar16.Data <= &local_228) && (&local_228 < FVar16.Data + local_218._4_4_)) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              pFVar12 = (FString *)(*pcVar6)();
              return pFVar12;
            }
            FVar16.Data = local_220.Data;
            iVar10 = (int)local_218;
          }
          if (iVar10 == local_218._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_220,(int *)((longlong)&local_218 + 4));
            FVar16.Data = local_220.Data;
          }
          local_218 = CONCAT44(local_218._4_4_,iVar10 + 1);
          FVar16.Data[iVar10] = local_228;
          lVar13 = 3;
        }
        uVar22 = local_218 & 0xffffffff;
        uVar18 = lVar13 + uVar17;
        uVar20 = (ulonglong)(uint)(iVar19 + (int)lVar13);
        FVar16.Data = local_220.Data;
        iVar15 = local_178;
      }
      else {
        if ((FVar16.Data <= pFVar2) && (pFVar2 < FVar16.Data + local_218._4_4_)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            pFVar12 = (FString *)(*pcVar6)();
            return pFVar12;
          }
          FVar16.Data = local_220.Data;
          iVar10 = (int)local_218;
        }
        if (iVar10 == local_218._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,&local_220,(int *)((longlong)&local_218 + 4));
          FVar16.Data = local_220.Data;
        }
        local_218 = CONCAT44(local_218._4_4_,iVar10 + 1U);
        FVar16.Data[iVar10] = *pFVar2;
        uVar22 = (ulonglong)(iVar10 + 1U);
        FVar16.Data = local_220.Data;
        iVar15 = local_178;
LAB_14318bd2b:
        uVar20 = (ulonglong)(iVar19 + 1);
        uVar18 = uVar17 + 1;
      }
LAB_14318bd30:
      iVar10 = (int)uVar22;
      uVar17 = uVar18;
    } while ((int)uVar20 < iVar15);
  }
  local_227[0] = (FScriptContainerElement)0x0;
  if ((FVar16.Data <= local_227) && (local_227 < FVar16.Data + local_218._4_4_)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FString *)(*pcVar6)();
      return pFVar12;
    }
    FVar16.Data = local_220.Data;
    iVar10 = (int)local_218;
  }
  if (iVar10 == local_218._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x101,&local_220,(int *)((longlong)&local_218 + 4));
    FVar16.Data = local_220.Data;
  }
  FVar7.Data = local_220.Data;
  local_218 = CONCAT44(local_218._4_4_,iVar10 + 1);
  local_68.Data = (FScriptContainerElement *)0x0;
  FVar16.Data[iVar10] = local_227[0];
  if (local_220.Data == (FScriptContainerElement *)0x0) {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
    goto LAB_14318be89;
  }
  sVar14 = strlen((char *)local_220.Data);
  local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)FVar7.Data,(int)sVar14);
  uVar4 = local_58 + 1;
  uVar23 = uVar4;
  if (uVar4 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar23 = 0;
      goto LAB_14318be37;
    }
  }
  else {
LAB_14318be37:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar23,2);
  }
  local_60 = local_168;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_60,uVar4,(uchar *)FVar7.Data,(int)sVar14 + 1);
LAB_14318be89:
  ::FString::FString(__return_storage_ptr__,(wchar_t *)local_60);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_220.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  return __return_storage_ptr__;
}

// UrlEncode @ 14318bf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FGenericPlatformHttp::UrlEncode(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  FString *pFVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  wchar_t *pwVar11;
  uint uVar12;
  undefined1 auStack_98 [32];
  byte local_78 [4];
  undefined4 local_74 [3];
  byte *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TArrayView<unsigned_char_const_,int> local_58;
  wchar_t local_48;
  undefined4 local_46;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar3 = param_1->Size;
  pwVar11 = param_1->DataPtr;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reserve(__return_storage_ptr__,iVar3);
  local_74[0] = 0;
  local_48 = L'%';
  pwVar1 = pwVar11 + iVar3;
  local_46 = 0;
  do {
    if (pwVar11 == pwVar1) {
      return __return_storage_ptr__;
    }
    puVar6 = UE::Core::Private::Convert((uchar *)local_74,4,pwVar11,1);
    if ((puVar6 == (uchar *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPlatformString::Convert(Utf8ConvertedChar, sizeof(Utf8ConvertedChar), &InChar, 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\GenericPlatformHttp.cpp"
                           ,0x165,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
    pbVar10 = (byte *)local_74;
    uVar12 = 0;
    do {
      local_78[0] = *pbVar10;
      if (3 < uVar12) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      *pbVar10 = 0;
      if (local_78[0] == 0) break;
      if (bTableFilled == false) {
        pcVar8 = AllowedChars;
        uVar9 = 0;
        do {
          bVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          uVar9 = uVar9 + 1;
          AllowedTable[bVar2] = true;
        } while (uVar9 < 0x42);
        bTableFilled = true;
      }
      if (AllowedTable[local_78[0]] == false) {
        local_68 = local_78;
        uStack_60 = 1;
        local_58._12_4_ = uStack_5c;
        local_58.ArrayNum = 1;
        local_58.DataPtr = local_68;
        UE::String::BytesToHex(&local_58,(wchar_t *)&local_46);
        ::FString::AppendChars(__return_storage_ptr__,&local_48,3);
      }
      else {
        ::FString::AppendChar(__return_storage_ptr__,*pwVar11);
      }
      uVar12 = uVar12 + 1;
      pbVar10 = pbVar10 + 1;
    } while (uVar12 < 4);
    pwVar11 = pwVar11 + 1;
  } while( true );
}

