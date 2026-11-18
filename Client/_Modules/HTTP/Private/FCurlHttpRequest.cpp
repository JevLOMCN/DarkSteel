// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 48

// FCurlHttpRequest @ 14314c3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FCurlHttpRequest * __thiscall FCurlHttpRequest::FCurlHttpRequest(FCurlHttpRequest *this)

{
  int *piVar1;
  FString *pFVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  TConsoleVariableData<bool> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> aVar11;
  FCurlHttpRequest *pFVar12;
  void *pvVar13;
  FHttpModule *pFVar14;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  uint *puVar21;
  undefined1 auStackY_228 [32];
  LARGE_INTEGER local_1f8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  uint local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_17c;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_178;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  FHttpRequestImpl::FHttpRequestImpl((FHttpRequestImpl *)this);
  uVar18 = 0;
  this->_padding_ = (longlong)&___7FHttpRequestCommon__6B_;
  uVar17 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0x1000000;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  QueryPerformanceCounter(&local_1f8);
  dVar6 = (double)local_1f8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  dVar6 = dVar6 + __real_4170000000000000;
  this->_padding_ = 0;
  this->_padding_ = (longlong)dVar6;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->_padding_ = 0;
  this->_padding_ = -0x4010000000000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 2;
  this->_padding_ = (longlong)&___7FCurlHttpRequest__6B_;
  this->EasyHandle = (void *)0x0;
  this->HeaderList = (curl_slist *)0x0;
  ::FString::FString(&this->Verb,L"GET");
  this->bCurlRequestCompleted = (atomic<bool>)0x0;
  this->bRedirected = false;
  *(undefined8 *)&this->Headers = 0;
  *(undefined8 *)&(this->Headers).field_0x8 = 0;
  *(undefined8 *)&(this->Headers).field_0x20 = 0;
  this->CurlAddToMultiResult = CURLM_OK;
  this->CurlCompletionResult = CURLE_OK;
  this->bIsRequestPayloadSeekable = false;
  *(undefined4 *)&(this->Headers).field_0x28 = 0;
  *(undefined4 *)&(this->Headers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Headers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Headers).field_0x34 = 0;
  *(undefined8 *)&(this->Headers).field_0x40 = 0;
  *(undefined4 *)&(this->Headers).field_0x48 = 0;
  this->bAnyHttpActivity = false;
  (this->NewlyReceivedHeaders).Tail =
       (atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>)0x0;
  (this->NewlyReceivedHeaders).NumElems = (atomic<int>)0x0;
  aVar11 = (atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>)FMemory::Malloc(0x28,8);
  *(undefined8 *)aVar11 = 0;
  (this->NewlyReceivedHeaders).Tail = aVar11;
  (this->NewlyReceivedHeaders).TailCopy = (FNode *)aVar11;
  (this->NewlyReceivedHeaders).First = (FNode *)aVar11;
  (this->NewlyReceivedHeaders).Head = (FNode *)aVar11;
  LOCK();
  (this->NewlyReceivedHeaders).NumElems = (atomic<int>)0x0;
  UNLOCK();
  this->BytesSent = (atomic<__int64>)0x0;
  this->TotalBytesSent = (atomic<__int64>)0x0;
  this->TotalBytesRead = (atomic<__int64>)0x0;
  this->LastReportedBytesRead = 0;
  this->LastReportedBytesSent = 0;
  this->LeastRecentlyCachedInfoMessageIndex = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->InfoMessageCacheCriticalSection,4000);
  piVar1 = &(this->InfoMessageCache).ArrayNum;
  (this->InfoMessageCache).ArrayMax = 0x32;
  *piVar1 = 0;
  if ((FCurlHttpManager::GMultiHandle == (void *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCurlHttpManager::IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                         ,0x62,L"Curl request was created while the library is shutdown"), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FCurlHttpRequest *)(*pcVar5)();
    return pFVar12;
  }
  pvVar13 = (void *)curl_easy_init();
  this->EasyHandle = pvVar13;
  curl_easy_setopt(pvVar13,0x276f,this);
  curl_easy_setopt(this->EasyHandle,0x4e7e,StaticDebugCallback);
  curl_easy_setopt(this->EasyHandle,0x29,1);
  curl_easy_setopt(this->EasyHandle,0x62,FCurlHttpManager::CurlRequestOptions.BufferSize);
  curl_easy_setopt(this->EasyHandle,0x77,3);
  pTVar7 = CVarHttpCurlAllowHTTP2.Ref;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_14314c71f:
    uVar16 = uVar18;
  }
  else {
    bVar8 = IsInGameThread();
    uVar16 = 1;
    if (bVar8) goto LAB_14314c71f;
  }
  uVar19 = 4;
  if (pTVar7->ShadowedValue[uVar16] == false) {
    uVar19 = 2;
  }
  curl_easy_setopt(this->EasyHandle,0x54,uVar19);
  if (FCurlHttpManager::CurlRequestOptions.bVerifyPeer == false) {
    curl_easy_setopt(this->EasyHandle,0x40,0);
  }
  else {
    curl_easy_setopt(this->EasyHandle,0x40,1);
  }
  curl_easy_setopt(this->EasyHandle,0x34,1);
  curl_easy_setopt(this->EasyHandle,99,1);
  curl_easy_setopt(this->EasyHandle,0x2777,this);
  pFVar14 = FHttpModule::Get();
  if (1 < (pFVar14->ProxyAddress).Data.ArrayNum) {
    pTVar15 = StringCast<char,128,wchar_t>
                        (&local_178,(wchar_t *)(pFVar14->ProxyAddress).Data.AllocatorInstance.Data);
    curl_easy_setopt(this->EasyHandle,0x2714,pTVar15->Ptr);
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
  }
  pFVar14 = FHttpModule::Get();
  if (1 < (pFVar14->HttpNoProxy).Data.ArrayNum) {
    pTVar15 = StringCast<char,128,wchar_t>
                        (&local_d8,(wchar_t *)(pFVar14->HttpNoProxy).Data.AllocatorInstance.Data);
    curl_easy_setopt(this->EasyHandle,0x27c1,pTVar15->Ptr);
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
  }
  pTVar7 = CVarHttpCurlReuseConnectionEnabled.Ref;
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    uVar16 = 1;
    if (!bVar8) goto LAB_14314c851;
  }
  uVar16 = uVar18;
LAB_14314c851:
  if (pTVar7->ShadowedValue[uVar16] == false) {
    curl_easy_setopt(this->EasyHandle,0x4b,1);
  }
  curl_easy_setopt(this->EasyHandle,0x2766,"PEM");
  curl_easy_setopt(this->EasyHandle,0x2751,0);
  curl_easy_setopt(this->EasyHandle,0x4e8c,sslctx_function);
  curl_easy_setopt(this->EasyHandle,0x277d,this);
  iVar9 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<50>::ForElementType<FString>_>
                    (0x10,8,0x32,&(this->InfoMessageCache).AllocatorInstance,piVar1,
                     &(this->InfoMessageCache).ArrayMax);
  memset((this->InfoMessageCache).AllocatorInstance.InlineData + iVar9,0,800);
  pFVar14 = FHttpModule::Get();
  local_1a8 = 0;
  local_1f0 = &pFVar14->DefaultHeaders;
  uVar3 = *(uint *)&(pFVar14->DefaultHeaders).field_0x28;
  TStack_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar14->DefaultHeaders).field_0x10;
  uVar16 = uVar18;
  uStack_1bc = 1;
  if (uVar3 != 0) {
    puVar21 = *(uint **)&(pFVar14->DefaultHeaders).field_0x20;
    uVar16 = (ulonglong)uVar3;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)TStack_1e8.Array;
    }
    uVar10 = *puVar21;
    uVar20 = uVar18;
    local_1a8 = 0;
    uVar17 = 0;
    while (uVar10 == 0) {
      iVar9 = (int)uVar18;
      local_1a8 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)local_1a8;
      uVar17 = iVar9 + 1;
      uVar18 = (ulonglong)uVar17;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_14314c97b;
      uVar10 = puVar21[(longlong)iVar9 + 1];
    }
    uStack_1bc = -uVar10 & uVar10;
    uVar18 = (ulonglong)uStack_1bc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar10 = (local_1a8 - 1) + (int)lVar4;
    if ((int)uVar3 < (int)uVar10) {
      uVar10 = uVar3;
    }
    uVar16 = (ulonglong)uVar10;
  }
LAB_14314c97b:
  uStack_1b0 = 0xffffffff;
  uStack_1ac = (uint)uVar16;
  uStack_1a4 = local_17c;
  TStack_1e8._padding_ = CONCAT44(uStack_1bc,uVar17);
  TStack_1e8.UnvisitedBitMask = 0xffffffff;
  TStack_1e8._28_4_ = local_17c;
  TStack_1e8.BaseBitIndex = local_1a8;
  local_1c8 = local_1f0;
  uStack_1c0 = uVar17;
  local_1b8 = (undefined1 *)TStack_1e8.Array;
  TStack_1e8.CurrentBitIndex = uStack_1ac;
  if ((int)uStack_1ac < (int)uVar3) {
    do {
      pFVar2 = (FString *)(*(longlong *)local_1f0 + (longlong)(int)uVar16 * 0x28);
      if ((int)this->_padding_ == 1) {
        if (2 < (byte)LogHttp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
      }
      else {
        TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
        ::Emplace<FString_const_&,FString_const_&>
                  ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)&this->Headers,pFVar2,pFVar2 + 1);
      }
      TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
      uVar16 = (ulonglong)(uint)TStack_1e8.CurrentBitIndex;
    } while (TStack_1e8.CurrentBitIndex < (TStack_1e8.Array)->NumBits);
  }
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  return this;
}

// ~FCurlHttpRequest @ 1431501c0

void __thiscall FCurlHttpRequest::~FCurlHttpRequest(FCurlHttpRequest *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FCurlHttpRequest__6B_;
  if (FCurlHttpManager::GMultiHandle == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCurlHttpManager::IsInit()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                       ,0xd3,L"Curl request was held after the library was shutdown.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->EasyHandle != (void *)0x0) {
    curl_easy_cleanup();
    this->EasyHandle = (void *)0x0;
  }
  if (this->HeaderList != (curl_slist *)0x0) {
    curl_slist_free_all();
    this->HeaderList = (curl_slist *)0x0;
  }
  DestructItems<FString,int>((FString *)&this->InfoMessageCache,(this->InfoMessageCache).ArrayNum);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InfoMessageCacheCriticalSection);
  TSpscQueue<TTuple<FString,FString>,FMemory>::~TSpscQueue<TTuple<FString,FString>,FMemory>
            (&this->NewlyReceivedHeaders);
  *(undefined4 *)&(this->Headers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Headers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Headers);
  pFVar2 = (this->Verb).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FHttpRequestCommon::~FHttpRequestCommon((FHttpRequestCommon *)this);
  return;
}

// AbortRequest @ 143153ea0

void __thiscall FCurlHttpRequest::AbortRequest(FCurlHttpRequest *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FHttpManager *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  IHttpRequest *pIVar4;
  code *pcVar5;
  bool bVar6;
  FHttpModule *pFVar7;
  TSharedRef<IHttpRequest,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TSharedRef<IHttpRequest,1> local_28;
  
  if (this->bCurlRequestCompleted == (atomic<bool>)0x0) {
    pFVar7 = FHttpModule::Get();
    if ((pFVar7->HttpManager == (FHttpManager *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("HttpManager != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                           ,0x50,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = pFVar7->HttpManager;
    lpCriticalSection = &pFVar2->RequestLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (pFVar2->Requests).ArrayNum;
    pFVar9 = (pFVar2->Requests).AllocatorInstance.Data;
    pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar2->Requests).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedRef<IHttpRequest,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar10) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        FHttpRequestCommon::FinishRequestNotInHttpManager((FHttpRequestCommon *)this);
        return;
      }
      if (*(FCurlHttpRequest **)pFVar9 == this) break;
      pFVar9 = pFVar9 + 0x10;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar8 = TSharedFromThis<IHttpRequest,1>::AsShared
                       ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_28);
    pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
    pIVar4 = pTVar8->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar2->Thread == (FHttpThreadBase *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Thread",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                           ,0x254,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(pFVar2->Thread->_padding_ + 0x48))(pFVar2->Thread,pIVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// AppendToHeader @ 143155190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCurlHttpRequest::AppendToHeader(FCurlHttpRequest *this,FString *param_1,FString *param_2)

{
  int iVar1;
  TTuple<FString,FString> *pTVar2;
  FString *pFVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  if ((int)this->_padding_ == 1) {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      return;
    }
  }
  else if ((1 < (param_1->Data).ArrayNum) && (1 < (param_2->Data).ArrayNum)) {
    pTVar2 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)&this->Headers,param_1);
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    pFVar3 = (FString *)&pTVar2->field_0x10;
    if (pTVar2 == (TTuple<FString,FString> *)0x0) {
      pFVar3 = (FString *)0x0;
    }
    if ((pFVar3 != (FString *)0x0) && (1 < (pFVar3->Data).ArrayNum)) {
      ::FString::ConcatFC(&local_18,pFVar3,L", ");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      local_28.Data.ArrayMax = local_18.Data.ArrayMax;
      local_28.Data.ArrayNum = local_18.Data.ArrayNum;
    }
    iVar1 = (param_2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar4);
    (**(code **)(this->_padding_ + 0xb0))(this,param_1,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// BroadcastNewlyReceivedHeaders @ 143155ed0

void __thiscall FCurlHttpRequest::BroadcastNewlyReceivedHeaders(FCurlHttpRequest *this)

{
  atomic<int> *paVar1;
  atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> aVar2;
  void *pvVar3;
  void *pvVar4;
  TReferenceControllerBase<1> *pTVar5;
  IHttpRequest *pIVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  TSharedRef<IHttpRequest,1> *pTVar12;
  TSharedRef<IHttpRequest,1> local_68;
  IHttpRequest *local_58;
  TReferenceControllerBase<1> *local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 uStack_30;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  do {
    aVar2 = *(atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> *)
             (this->NewlyReceivedHeaders).Tail;
    if (aVar2 == (atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>)0x0) {
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
    pvVar3 = *(void **)((longlong)aVar2 + 8);
    *(undefined8 *)((longlong)aVar2 + 8) = 0;
    uVar9 = *(undefined8 *)((longlong)aVar2 + 0x10);
    *(undefined8 *)((longlong)aVar2 + 0x10) = 0;
    pvVar4 = *(void **)((longlong)aVar2 + 0x18);
    *(undefined8 *)((longlong)aVar2 + 0x18) = 0;
    uVar10 = *(undefined8 *)((longlong)aVar2 + 0x20);
    *(undefined8 *)((longlong)aVar2 + 0x20) = 0;
    if (*(void **)((longlong)aVar2 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)aVar2 + 8));
    }
    (this->NewlyReceivedHeaders).Tail = aVar2;
    LOCK();
    paVar1 = &(this->NewlyReceivedHeaders).NumElems;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    local_48 = pvVar3;
    local_40 = uVar9;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    local_38 = pvVar4;
    uStack_30 = uVar10;
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(this->_padding_ + 0x108))(this);
    pTVar12 = TSharedFromThis<IHttpRequest,1>::AsShared
                        ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_68);
    pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
    pIVar6 = pTVar12->Object;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    EnterCriticalSection(lpCriticalSection);
    if ((lpCriticalSection[1].LockCount == 0) ||
       (p_Var7 = lpCriticalSection[1].DebugInfo, p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      LeaveCriticalSection(lpCriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    else {
      local_58 = pIVar6;
      local_50 = pTVar5;
      (**(code **)(*(longlong *)p_Var7 + 0x68))(p_Var7,&local_58,&local_48,&local_38);
      LeaveCriticalSection(lpCriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
  } while( true );
}

// CheckProgressDelegate @ 143157ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCurlHttpRequest::CheckProgressDelegate(FCurlHttpRequest *this)

{
  int *piVar1;
  ulong64 *puVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  IHttpRequest *pIVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_void___cdecl_FCurlHttpRequest::CheckProgressDelegate(void)_::_2_::FStat_STAT_FCurlHttpRequest_CheckProgressDelegate>
  FVar12;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
  *this_00;
  TSharedRef<IHttpRequest,1> *pTVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  LARGE_INTEGER local_res8;
  FName local_res10;
  TSharedRef<IHttpRequest,1> local_48;
  
  FVar17.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FCurlHttpRequest_CheckProgressDelegate ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FCurlHttpRequest::CheckProgressDelegate(void)_::_2_::FStat_STAT_FCurlHttpRequest_CheckProgressDelegate>
           )0x0) {
        pFVar11 = ::FName::FName((FName *)&local_res8.s,
                                 "STAT_FCurlHttpRequest_CheckProgressDelegate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_CheckProgressDelegate
                   ,*pFVar11,L"STAT_FCurlHttpRequest_CheckProgressDelegate","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar12 = StatPtr_STAT_FCurlHttpRequest_CheckProgressDelegate;
  if (StatPtr_STAT_FCurlHttpRequest_CheckProgressDelegate ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FCurlHttpRequest::CheckProgressDelegate(void)_::_2_::FStat_STAT_FCurlHttpRequest_CheckProgressDelegate>
       )0x0) {
    pFVar11 = ::FName::FName(&local_res10,"STAT_FCurlHttpRequest_CheckProgressDelegate");
    FVar12 = (FThreadSafeStaticStat<_private:_void___cdecl_FCurlHttpRequest::CheckProgressDelegate(void)_::_2_::FStat_STAT_FCurlHttpRequest_CheckProgressDelegate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlHttpRequest_CheckProgressDelegate,*pFVar11,
                          L"STAT_FCurlHttpRequest_CheckProgressDelegate","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar8 = false;
  bVar10 = false;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar15.Value;
        local_res8.s.HighPart = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x491);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar15.Value;
      local_res8.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar9 = true;
      FVar17.Value = FVar15.Value;
      goto LAB_143157e65;
    }
  }
  bVar9 = false;
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
LAB_143157e65:
  puVar2 = &this->LastReportedBytesRead;
  if ((this->BytesSent == (atomic<__int64>)this->LastReportedBytesSent) &&
     (this->TotalBytesRead == (atomic<__int64>)*puVar2)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (((int)this->_padding_ == 1) && (bVar7)) {
    *puVar2 = (ulong64)this->TotalBytesRead;
    this->LastReportedBytesSent = (ulong64)this->BytesSent;
    this_00 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
               *)(**(code **)(this->_padding_ + 0xf8))(this);
    uVar3 = *puVar2;
    uVar4 = this->LastReportedBytesSent;
    pTVar13 = TSharedFromThis<IHttpRequest,1>::AsShared
                        ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_48);
    pTVar5 = (pTVar13->SharedReferenceCount).ReferenceController;
    pIVar6 = pTVar13->Object;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pIVar6;
    local_48.SharedReferenceCount.ReferenceController = pTVar5;
    TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
    ::ExecuteIfBound(this_00,(TSharedPtr<IHttpRequest,1> *)&local_48,uVar4,uVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           (CONCAT44(FVar16.Number,FVar17.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_48.Object = (IHttpRequest *)(ulonglong)local_res8.s.LowPart;
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// CleanupRequest @ 143158100

void __thiscall FCurlHttpRequest::CleanupRequest(FCurlHttpRequest *this)

{
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014315810f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    return;
  }
  return;
}

// CleanupRequestHttpThread @ 143158120

void __thiscall FCurlHttpRequest::CleanupRequestHttpThread(FCurlHttpRequest *this)

{
  curl_easy_setopt(this->EasyHandle,0x2774,0);
  return;
}

// ClearInCaseOfRetry @ 143158200

void __thiscall FCurlHttpRequest::ClearInCaseOfRetry(FCurlHttpRequest *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  ForElementType<FString> *pFVar3;
  FString *pFVar4;
  TArray<FString,TFixedAllocator<50>_> *this_00;
  undefined1 local_res8 [8];
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  LOCK();
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  UNLOCK();
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  LOCK();
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  UNLOCK();
  pFVar4 = (FString *)(**(code **)this->_padding_)();
  ::FString::operator=((FString *)&this->_padding_,pFVar4);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_28) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  this->LastReportedBytesRead = 0;
  LOCK();
  this->TotalBytesRead = (atomic<__int64>)0x0;
  UNLOCK();
  lpCriticalSection = &this->InfoMessageCacheCriticalSection;
  this->bAnyHttpActivity = false;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->InfoMessageCache;
    piVar1 = &(this->InfoMessageCache).ArrayNum;
    iVar2 = *piVar1;
    pFVar3 = &this_00->AllocatorInstance;
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == (TArray<FString,TFixedAllocator<50>_> *)(pFVar3->InlineData + iVar2)) break;
      ::FString::Reset((FString *)this_00,0);
      this_00 = (TArray<FString,TFixedAllocator<50>_> *)
                ((this_00->AllocatorInstance).InlineData + 1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001431582fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CombineHeaderKeyValue @ 143158c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl
FCurlHttpRequest::CombineHeaderKeyValue
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_58;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (param_1->Data).ArrayNum;
  local_38 = _u___;
  local_34 = DAT_1506ad29c;
  iVar2 = (param_2->Data).ArrayNum;
  iVar3 = 0;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = iVar3;
  }
  iVar2 = iVar1 + 1;
  if (iVar1 == 0) {
    iVar2 = 2;
  }
  ::FString::Reserve(__return_storage_ptr__,iVar4 + iVar2);
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)&local_38,2);
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar2);
  return __return_storage_ptr__;
}

// CreateResponse @ 14315b7c0

TSharedPtr<IHttpResponse,1> * __thiscall
FCurlHttpRequest::CreateResponse
          (FCurlHttpRequest *this,TSharedPtr<IHttpResponse,1> *__return_storage_ptr__)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FString *pFVar6;
  TSharedPtr<IHttpResponse,1> *pTVar7;
  
  pTVar5 = ::operator_new(0xc0);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IHttpResponse *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFCurlHttpResponse___00_SharedPointerInternals__6B_;
    pTVar5[1]._padding_ = (longlong)&___7FHttpResponseCommon__6B_;
    pFVar6 = (FString *)(**(code **)this->_padding_)(this);
    ::FString::FString((FString *)&pTVar5[1].SharedReferenceCount,pFVar6);
    pFVar6 = (FString *)(**(code **)(this->_padding_ + 8))(this);
    ::FString::FString((FString *)&pTVar5[2].SharedReferenceCount,pFVar6);
    aVar4 = (atomic<int>)(**(code **)(this->_padding_ + 0x10))(this);
    pTVar5[3].SharedReferenceCount = aVar4;
    uVar2 = (**(code **)(this->_padding_ + 0x18))(this);
    *(undefined1 *)&pTVar5[3].WeakReferenceCount = uVar2;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5]._padding_ = 0;
    pTVar5[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[6]._padding_ = 0;
    pTVar5[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[7].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[4]._padding_ = 0;
    *(undefined4 *)&pTVar5[8]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar5[8]._padding_ + 4) = 0x80;
    pTVar5[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[8].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar5[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar5[10]._padding_ = 0;
    *(undefined1 *)&pTVar5[10].SharedReferenceCount = 0;
    pTVar5[0xb]._padding_ = 0;
    pTVar5[1]._padding_ = (longlong)&___7FCurlHttpResponse__6B_;
    pTVar5[0xb].SharedReferenceCount = (atomic<int>)0x0;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TSharedPtr<IHttpResponse,1> *)(*pcVar1)();
        return pTVar7;
      }
    }
    __return_storage_ptr__->Object = (IHttpResponse *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// DebugCallback @ 14315be90

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FCurlHttpRequest::DebugCallback
          (FCurlHttpRequest *this,void *param_1,curl_infotype param_2,char *param_3,ulong64 param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong64 uVar6;
  void *pvVar7;
  char *pcVar8;
  uint uVar9;
  FStaticBasicLogRecord *pFVar11;
  TStringView<wchar_t> *pTVar12;
  TTypeCompatibleBytes<FString> *pTVar13;
  ulonglong uVar14;
  int iVar15;
  size_t _MaxCount;
  FString local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  ulonglong uVar10;
  
  if ((param_1 != this->EasyHandle) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle == EasyHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                         ,0x28a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  switch(param_2) {
  case CURLINFO_TEXT:
    _MaxCount = 0x3ff;
    if (param_4 < 0x3ff) {
      _MaxCount = param_4;
    }
    pvVar7 = memchr(param_3,0,_MaxCount);
    if (pvVar7 != (void *)0x0) {
      _MaxCount = (longlong)pvVar7 - (longlong)param_3;
    }
    ::FString::FString(&local_a8,(int)_MaxCount,param_3);
    ::FString::ReplaceInline(&local_a8,L"\n",L"",CaseSensitive);
    ::FString::ReplaceInline(&local_a8,L"\r",L"",CaseSensitive);
    if (6 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    lpCriticalSection = &this->InfoMessageCacheCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar5 = (this->InfoMessageCache).ArrayNum;
    if (0 < iVar5) {
      uVar9 = this->LeastRecentlyCachedInfoMessageIndex;
      uVar4 = 0;
      if ((int)uVar9 < iVar5) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      pTVar13 = (this->InfoMessageCache).AllocatorInstance.InlineData + (int)uVar9;
      if ((FString *)pTVar13 != &local_a8) {
        if (*(void **)pTVar13->Pad != (void *)0x0) {
          FMemory::Free(*(void **)pTVar13->Pad);
        }
        *(FScriptContainerElement **)pTVar13->Pad = local_a8.Data.AllocatorInstance.Data;
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pTVar13->Pad + 8) = local_a8.Data.ArrayNum;
        *(int *)(pTVar13->Pad + 0xc) = local_a8.Data.ArrayMax;
        local_a8.Data.ArrayNum = 0;
        local_a8.Data.ArrayMax = 0;
      }
      this->LeastRecentlyCachedInfoMessageIndex =
           (this->LeastRecentlyCachedInfoMessageIndex + 1) % (this->InfoMessageCache).ArrayNum;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return 0;
    }
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    return 0;
  case CURLINFO_HEADER_IN:
    if ((byte)LogHttp._0_1_ < 7) goto LAB_14315c2a4;
    pFVar11 = &::LOG_Static;
    break;
  case CURLINFO_HEADER_OUT:
    if (6 < (byte)LogHttp._0_1_) {
      iVar5 = 0x3ff;
      if (param_4 < 0x3ff) {
        iVar5 = (int)param_4;
      }
      uVar14 = 0;
      iVar15 = iVar5;
      if (-1 < iVar5 + -4) {
        pcVar8 = param_3 + 2;
        uVar10 = uVar14;
        do {
          if ((((pcVar8[-2] == '\r') && (pcVar8[-1] == '\n')) && (*pcVar8 == '\r')) &&
             (iVar15 = (int)uVar10, pcVar8[1] == '\n')) break;
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          pcVar8 = pcVar8 + 1;
          iVar15 = iVar5;
        } while ((int)uVar9 <= iVar5 + -4);
      }
      if (0 < iVar15) {
        do {
          bVar1 = param_3[uVar14];
          iVar5 = isprint((uint)bVar1);
          if ((iVar5 == 0) && (iVar5 = isspace((uint)bVar1), iVar5 == 0)) {
            if (6 < (byte)LogHttp._0_1_) {
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
            }
            goto LAB_14315c2a4;
          }
          uVar14 = uVar14 + 1;
        } while ((longlong)uVar14 < (longlong)iVar15);
      }
      ::FString::FString(&local_98,iVar15,param_3);
      ::FString::ReplaceInline(&local_98,L"\n",L"",CaseSensitive);
      ::FString::ReplaceInline(&local_98,L"\r",L"",CaseSensitive);
      if (6 < (byte)LogHttp._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14315c2a4;
  case CURLINFO_DATA_IN:
    if ((byte)LogHttp._0_1_ < 7) goto LAB_14315c2a4;
    pFVar11 = &::LOG_Static;
    break;
  case CURLINFO_DATA_OUT:
    if ((byte)LogHttp._0_1_ < 7) goto LAB_14315c2a4;
    pFVar11 = &::LOG_Static;
    break;
  case CURLINFO_SSL_DATA_IN:
    if ((byte)LogHttp._0_1_ < 7) goto LAB_14315c2a4;
    pFVar11 = (FStaticBasicLogRecord *)&PTR_u__p__Received_SS_150a51118;
    break;
  case CURLINFO_SSL_DATA_OUT:
    if ((byte)LogHttp._0_1_ < 7) goto LAB_14315c2a4;
    pFVar11 = &::LOG_Static;
    break;
  default:
    if (6 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    if (5 < param_2 - CURLINFO_HEADER_IN) {
      return 0;
    }
    goto LAB_14315c2a4;
  }
  UE::Logging::Private::BasicLog<7>(pFVar11,(FLogCategoryBase *)&LogHttp);
LAB_14315c2a4:
  switch(switchD_1501dbc7b::caseD_1.e_magic +
         (&switchD_14315c2b0::switchdataD_14315c3c8)[(int)(param_2 - CURLINFO_HEADER_IN)]) {
  case (char *)0x14315c2b2:
    local_98.Data.ArrayNum = 9;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a512c0;
    pTVar12 = &local_88;
    local_88._12_4_ = local_98.Data.ArrayMax;
    local_88.Size = 9;
    local_88.DataPtr = L"Header in";
    break;
  case (char *)0x14315c2d6:
    local_98.Data.ArrayNum = 10;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a512d8;
    pTVar12 = &local_78;
    local_78._12_4_ = local_98.Data.ArrayMax;
    local_78.Size = 10;
    local_78.DataPtr = L"Header out";
    break;
  case (char *)0x14315c2fa:
    local_98.Data.ArrayNum = 7;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a512f0;
    pTVar12 = &local_68;
    local_68._12_4_ = local_98.Data.ArrayMax;
    local_68.Size = 7;
    local_68.DataPtr = L"Data in";
    break;
  case (char *)0x14315c31b:
    local_98.Data.ArrayNum = 8;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a51300;
    pTVar12 = &local_58;
    local_58._12_4_ = local_98.Data.ArrayMax;
    local_58.Size = 8;
    local_58.DataPtr = L"Data out";
    break;
  case (char *)0x14315c33c:
    local_98.Data.ArrayNum = 0xb;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a51318;
    pTVar12 = &local_48;
    local_48._12_4_ = local_98.Data.ArrayMax;
    local_48.Size = 0xb;
    local_48.DataPtr = L"Ssl data in";
    break;
  case (char *)0x14315c35d:
    local_98.Data.ArrayNum = 0xc;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150a51330;
    pTVar12 = &local_38;
    local_38._12_4_ = local_98.Data.ArrayMax;
    local_38.Size = 0xc;
    local_38.DataPtr = L"Ssl data out";
  }
  OnAnyActivityOccur(this,pTVar12);
  return 0;
}

// FinishRequest @ 14315e7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCurlHttpRequest::FinishRequest(FCurlHttpRequest *this)

{
  int iVar1;
  CURLcode CVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlHttpRequest::FinishRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_FinishRequest>
  FVar15;
  FString *this_00;
  char *pcVar16;
  size_t sVar17;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  undefined1 auStackY_318 [32];
  FColor_u_0 local_2b8 [2];
  FName local_2b0;
  uint local_2a8;
  uint uStack_2a4;
  FName local_2a0;
  FName local_290;
  FName local_288 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FCurlHttpRequest_FinishRequest ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlHttpRequest::FinishRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_FinishRequest>
         )0x0) {
      pFVar14 = ::FName::FName(&local_290,"STAT_FCurlHttpRequest_FinishRequest");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_FinishRequest,*pFVar14,
                 L"STAT_FCurlHttpRequest_FinishRequest","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_FCurlHttpRequest_FinishRequest;
  if (StatPtr_STAT_FCurlHttpRequest_FinishRequest ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlHttpRequest::FinishRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_FinishRequest>
       )0x0) {
    pFVar14 = ::FName::FName(local_288,"STAT_FCurlHttpRequest_FinishRequest");
    FVar15 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FCurlHttpRequest::FinishRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_FinishRequest>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_FinishRequest,
                          *pFVar14,L"STAT_FCurlHttpRequest_FinishRequest","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar15;
  bVar7 = false;
  bVar9 = false;
  local_2a0.ComparisonIndex.Value = 0;
  local_2a0.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar12 = FVar20.Number;
  if ((FVar19.Value == 0) && (uVar12 == 0)) {
LAB_14315e959:
    bVar8 = false;
    FVar20 = local_2a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2b8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b0.ComparisonIndex.Value = FVar19.Value;
        local_2b0.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x4c0);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14315e959;
    local_2a8 = FVar19.Value;
    uStack_2a4 = uVar12;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar8 = true;
  }
  (**(code **)(this->_padding_ + 0x1a0))(this);
  CheckProgressDelegate(this);
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  plVar4 = (longlong *)this->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    if (this->bCurlRequestCompleted != (atomic<bool>)0x0) {
      *(uint *)(plVar4 + 0x15) = (uint)(this->CurlCompletionResult == CURLE_OK);
      if (plVar4[0x14] == 0) {
        *(atomic<__int64> *)(plVar4 + 0x14) = this->TotalBytesRead;
      }
      iVar11 = (**(code **)(*plVar4 + 0x58))(plVar4);
      if (iVar11 < 1) {
        this_00 = (FString *)(**(code **)this->_padding_)(this);
        bVar10 = ::FString::StartsWith(this_00,L"Http",4,IgnoreCase);
        if (bVar10) {
          if (2 < (byte)LogHttp._0_1_) {
            (**(code **)(*plVar4 + 0x58))(plVar4);
            (**(code **)this->_padding_)(this);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          }
          *(undefined4 *)(plVar4 + 0x15) = 0;
        }
      }
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      BroadcastNewlyReceivedHeaders(this);
    }
    if ((int)plVar4[0x15] != 0) {
      bVar10 = true;
      goto LAB_14315ee32;
    }
  }
  iVar11 = 0;
  if (this->CurlAddToMultiResult == CURLM_OK) {
    if ((this->CurlCompletionResult != CURLE_OK) && (2 < (byte)LogHttp._0_1_)) {
      pcVar16 = (char *)curl_easy_strerror();
      local_158._padding_ = 0;
      if (pcVar16 == (char *)0x0) {
        local_158.StringLength = 0;
        local_158.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar17 = strlen(pcVar16);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,pcVar16,(int)sVar17,Yes);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else if (2 < (byte)LogHttp._0_1_) {
    pcVar16 = (char *)curl_multi_strerror();
    local_278._padding_ = 0;
    if (pcVar16 == (char *)0x0) {
      local_278.StringLength = 0;
      local_278.Ptr = (wchar_t *)0x0;
    }
    else {
      sVar17 = strlen(pcVar16);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,pcVar16,(int)sVar17,Yes);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
  }
  if (((*(char *)((longlong)&this->_padding_ + 2) == '\0') && ((char)this->_padding_ == '\0')) &&
     (*(char *)((longlong)&this->_padding_ + 1) == '\0')) {
    if (&this->InfoMessageCacheCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->InfoMessageCacheCriticalSection);
    iVar13 = (this->InfoMessageCache).ArrayNum;
    if (0 < iVar13) {
      do {
        uVar18 = (this->LeastRecentlyCachedInfoMessageIndex + iVar11) % iVar13;
        uVar12 = 0;
        if ((int)uVar18 < iVar13) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar1 = *(int *)((((TArray<FString,TFixedAllocator<50>_> *)
                          (&this->InfoMessageCacheCriticalSection + 1))->AllocatorInstance).
                         InlineData[(int)uVar18].Pad + 8);
        iVar13 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar13 = 0;
        }
        if ((0 < iVar13) && (2 < (byte)LogHttp._0_1_)) {
          uVar18 = (this->LeastRecentlyCachedInfoMessageIndex + iVar11) % 0x32;
          uVar12 = 0;
          if ((int)uVar18 < (this->InfoMessageCache).ArrayNum) {
            uVar12 = ~uVar18 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
        iVar13 = (this->InfoMessageCache).ArrayNum;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar13);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->InfoMessageCacheCriticalSection);
  }
  if ((this->bCurlRequestCompleted == (atomic<bool>)0x0) ||
     ((((CVar2 = this->CurlCompletionResult, CVar2 != CURLE_COULDNT_RESOLVE_PROXY &&
        (CVar2 != CURLE_COULDNT_RESOLVE_HOST)) && (CVar2 != CURLE_COULDNT_CONNECT)) &&
      ((CVar2 != CURLE_OPERATION_TIMEDOUT && (CVar2 != CURLE_SSL_CONNECT_ERROR)))))) {
    bVar10 = false;
  }
  else {
    if ((2 < (byte)LogHttp._0_1_) && (*(char *)((longlong)&this->_padding_ + 4) != '\0')) {
      ::LexToString(ConnectionError);
      ::LexToString(*(EHttpFailureReason *)((longlong)&this->_padding_ + 4));
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    lVar5 = this->_padding_;
    bVar10 = false;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x2c) = 1;
    }
  }
LAB_14315ee32:
  FHttpRequestCommon::OnFinishRequest((FHttpRequestCommon *)this,bVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// GetAllHeaders @ 143160dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001431610ef) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FCurlHttpRequest::GetAllHeaders
          (FCurlHttpRequest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar8
  ;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined1 *puVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  FString local_d0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_88;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar16 = *(int *)&(this->Headers).field_0x8 - *(int *)&(this->Headers).field_0x34;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar16,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iStack_b8 = 0;
  puVar2 = &(this->Headers).field_0x10;
  iVar10 = *(int *)&(this->Headers).field_0x28;
  local_c0 = &this->Headers;
  uStack_b4 = 1;
  iStack_a4 = iStack_b8;
  local_a0 = iStack_b8;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->Headers).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar16 = *puVar17;
    iStack_b8 = 0;
    local_a0 = 0;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar10;
      if ((int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5 < iStack_b8) goto LAB_143160ecd;
      uVar16 = puVar17[lVar11 + 1];
    }
    uStack_b4 = -uVar16 & uVar16;
    uVar4 = (ulonglong)uStack_b4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_90 = (int)lVar11;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar10 < iStack_a4) {
      iStack_a4 = iVar10;
    }
  }
LAB_143160ecd:
  iStack_98 = *(int *)&(this->Headers).field_0x8 - *(int *)&(this->Headers).field_0x34;
  uVar16 = *(uint *)&(this->Headers).field_0x28;
  TStack_78._padding_ = CONCAT44(uStack_b4,iStack_b8);
  uStack_a8 = 0xffffffff;
  uVar18 = uVar16 & 0xffffffe0;
  TStack_78.CurrentBitIndex = iStack_a4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_78._28_4_ = iStack_a4;
  TStack_78.BaseBitIndex = local_a0;
  uStack_58 = CONCAT44(uStack_94,iStack_98);
  local_b0 = puVar2;
  iStack_9c = iStack_a4;
  local_88 = local_c0;
  local_80 = local_c0;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar10 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar12;
  }
  pTVar7 = local_88;
  uVar5 = *(uint *)&(this->Headers).field_0x28;
  if (uVar16 != uVar5) {
    puVar13 = *(undefined1 **)&(this->Headers).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_143160fd1;
      uVar16 = *(uint *)(puVar13 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_143160fd1:
  while( true ) {
    pTVar8 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == pTVar7))
    break;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    puVar3 = (undefined8 *)(*(longlong *)pTVar8 + (longlong)TStack_78.CurrentBitIndex * 0x28);
    local_50 = _u___;
    local_4c = DAT_1506ad29c;
    iVar10 = *(int *)(puVar3 + 3) + -1;
    if (*(int *)(puVar3 + 3) == 0) {
      iVar10 = 0;
    }
    iVar15 = *(int *)(puVar3 + 1) + 1;
    if (*(int *)(puVar3 + 1) == 0) {
      iVar15 = 2;
    }
    ::FString::Reserve(&local_d0,iVar10 + iVar15);
    iVar10 = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_d0,(wchar_t *)*puVar3,iVar10);
    ::FString::AppendChars(&local_d0,(wchar_t *)&local_50,2);
    iVar10 = *(int *)(puVar3 + 3) + -1;
    if (*(int *)(puVar3 + 3) == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_d0,(wchar_t *)puVar3[2],iVar10);
    iVar10 = __return_storage_ptr__->ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar10 + 1;
    pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar14 = 0;
    *(FScriptContainerElement **)pFVar14 = local_d0.Data.AllocatorInstance.Data;
    *(int *)(pFVar14 + 8) = local_d0.Data.ArrayNum;
    *(int *)(pFVar14 + 0xc) = local_d0.Data.ArrayMax;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return __return_storage_ptr__;
}

// GetContent @ 143161aa0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FCurlHttpRequest::GetContent(FCurlHttpRequest *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCurlHttpRequest::GetContent'::__l2::_dynamic_atexit_destructor_for__EmptyContent__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143161ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar1 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    return pTVar1;
  }
  return &EmptyContent;
}

// GetContentLength @ 143162010

ulong64 __thiscall FCurlHttpRequest::GetContentLength(FCurlHttpRequest *this)

{
  ulong64 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014316201f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 8))();
    return uVar1;
  }
  return 0;
}

// GetContentType @ 143162180

FString * __thiscall
FCurlHttpRequest::GetContentType(FCurlHttpRequest *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::FString(&local_18,L"Content-Type");
  (*pcVar1)(this,__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetHeader @ 143162b10

FString * __thiscall
FCurlHttpRequest::GetHeader(FCurlHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  TTuple<FString,FString> *pTVar1;
  FString *pFVar2;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pTVar1 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&this->Headers,param_1);
  pFVar2 = (FString *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FString,FString> *)0x0) {
    pFVar2 = (FString *)0x0;
  }
  if (pFVar2 != (FString *)0x0) {
    ::FString::operator=(__return_storage_ptr__,pFVar2);
  }
  return __return_storage_ptr__;
}

// GetVerb @ 143166410

FString * __thiscall
FCurlHttpRequest::GetVerb(FCurlHttpRequest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Verb);
  return __return_storage_ptr__;
}

// IsThreadedRequestComplete @ 14316cc50

bool __thiscall FCurlHttpRequest::IsThreadedRequestComplete(FCurlHttpRequest *this)

{
  FHttpModule *pFVar1;
  
  if (this->bCurlRequestCompleted != (atomic<bool>)0x0) {
    pFVar1 = FHttpModule::Get();
    if (pFVar1->HttpDelayTime < *(float *)&this->_padding_ ||
        pFVar1->HttpDelayTime == *(float *)&this->_padding_) {
      return true;
    }
  }
  return this->CurlAddToMultiResult != CURLM_OK;
}

// MarkAsCompleted @ 14316fa30

void __thiscall FCurlHttpRequest::MarkAsCompleted(FCurlHttpRequest *this,CURLcode param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  int iVar3;
  undefined4 local_res10 [2];
  
  this->CurlCompletionResult = param_1;
  LOCK();
  this->bCurlRequestCompleted = (atomic<bool>)0x1;
  UNLOCK();
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar2 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar2 != 0) {
    local_res10[0] = 0;
    iVar3 = curl_easy_getinfo(this->EasyHandle,0x200002,local_res10);
    if (iVar3 == 0) {
      *(undefined4 *)(lVar2 + 0x30) = local_res10[0];
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FHttpRequestCommon::StopActivityTimeoutTimer((FHttpRequestCommon *)this);
  return;
}

// MockResponseData @ 14316fba0

void __thiscall FCurlHttpRequest::MockResponseData(FCurlHttpRequest *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  this->CurlCompletionResult = CURLE_OK;
  LOCK();
  this->bCurlRequestCompleted = (atomic<bool>)0x1;
  UNLOCK();
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar2 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)(lVar2 + 0xa8) = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// OnAnyActivityOccur @ 143170c30

void __thiscall
FCurlHttpRequest::OnAnyActivityOccur(FCurlHttpRequest *this,TStringView<wchar_t> *param_1)

{
  longlong *lpCriticalSection;
  float fVar1;
  FHttpModule *pFVar2;
  wchar_t *pwVar3;
  TStringView<wchar_t> local_18;
  
  if (this->bAnyHttpActivity == false) {
    this->bAnyHttpActivity = true;
    curl_easy_getinfo(this->EasyHandle,0x300005,&this->_padding_);
    lpCriticalSection = &this->_padding_;
    if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          pwVar3 = FCommandLine::Get();
          bNoTimeouts = FParse::Param(pwVar3,L"NoTimeouts");
          _Init_thread_footer(&::_TSS0);
        }
      }
      if ((bNoTimeouts == false) && (*(char *)((longlong)&this->_padding_ + 1) == '\0')) {
        pFVar2 = FHttpModule::Get();
        if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
          fVar1 = pFVar2->HttpActivityTimeout;
        }
        else {
          fVar1 = *(float *)&this->_padding_;
        }
        if (fVar1 != 0.0) {
          FHttpRequestCommon::StartActivityTimeoutTimerBy((FHttpRequestCommon *)this,(double)fVar1);
          local_18.Size = 9;
          local_18.DataPtr = L"Connected";
          FHttpRequestCommon::ResetActivityTimeoutTimer((FHttpRequestCommon *)this,&local_18);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FHttpRequestCommon::ResetActivityTimeoutTimer((FHttpRequestCommon *)this,&local_18);
  return;
}

// ProcessRequest @ 1431740f0

/* WARNING: Removing unreachable block (ram,0x000143174422) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCurlHttpRequest::ProcessRequest(FCurlHttpRequest *this)

{
  int *piVar1;
  longlong *plVar2;
  FHttpManager *this_00;
  TReferenceControllerBase<1> *pTVar3;
  IHttpRequest *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FCurlHttpRequest::ProcessRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_ProcessRequest>
  FVar16;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FCurlHttpRequest::ProcessRequest(void)_::_2_::FStat_STAT_CurlHttpAddThreadedRequest>
  FVar17;
  FHttpModule *pFVar18;
  TSharedRef<IHttpRequest,1> *pTVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FColor_u_0 FVar22;
  FName FVar23;
  ulonglong uVar24;
  FName FVar25;
  FColor_u_0 local_res8 [2];
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FName local_res20;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  longlong local_c0;
  FSharedReferencer<1> FStack_b8;
  TSharedRef<IHttpRequest,1> local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  TSharedRef<IHttpRequest,1> local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  uVar24 = (ulonglong)_tls_index;
  bVar6 = false;
  bVar10 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FCurlHttpRequest_ProcessRequest =
         (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FCurlHttpRequest::ProcessRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_ProcessRequest>
          )0x0;
    pFVar15 = ::FName::FName(&local_70,"STAT_FCurlHttpRequest_ProcessRequest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_ProcessRequest,*pFVar15,
               L"STAT_FCurlHttpRequest_ProcessRequest","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
               ,true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_FCurlHttpRequest_ProcessRequest;
  if (StatPtr_STAT_FCurlHttpRequest_ProcessRequest ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FCurlHttpRequest::ProcessRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_ProcessRequest>
       )0x0) {
    pFVar15 = ::FName::FName(&local_68,"STAT_FCurlHttpRequest_ProcessRequest");
    FVar16 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FCurlHttpRequest::ProcessRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_ProcessRequest>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_ProcessRequest
                          ,*pFVar15,L"STAT_FCurlHttpRequest_ProcessRequest","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar16;
  bVar8 = false;
  bVar11 = false;
  FVar22.Bits = (uint)FVar25.ComparisonIndex.Value;
  uVar14 = FVar25.Number;
  if ((FVar22.Bits == 0) && (uVar14 == 0)) {
LAB_1431742d7:
    bVar9 = false;
    FVar25.ComparisonIndex.Value = 0;
    FVar25.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar22.Bits;
        local_res1c = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x428);
        bVar8 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1431742d7;
    local_res10.Bits = FVar22.Bits;
    uStackX_14 = uVar14;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar9 = true;
  }
  if ((this->EasyHandle == (void *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("EasyHandle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                          ,0x429,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  plVar2 = &this->_padding_;
  local_c0 = 0;
  FStack_b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (plVar2 != &local_c0) {
    *plVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b8.ReferenceController);
  this->LastReportedBytesRead = 0;
  bVar12 = FHttpRequestCommon::PreProcess((FHttpRequestCommon *)this);
  if (!bVar12) {
    bVar12 = false;
    goto LAB_14317474f;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_CurlHttpAddThreadedRequest =
         (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FCurlHttpRequest::ProcessRequest(void)_::_2_::FStat_STAT_CurlHttpAddThreadedRequest>
          )0x0;
    pFVar15 = ::FName::FName(&local_60,"STAT_CurlHttpAddThreadedRequest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CurlHttpAddThreadedRequest,*pFVar15,
               L"STAT_CurlHttpAddThreadedRequest","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
               ,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  FVar17 = StatPtr_STAT_CurlHttpAddThreadedRequest;
  if (StatPtr_STAT_CurlHttpAddThreadedRequest ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FCurlHttpRequest::ProcessRequest(void)_::_2_::FStat_STAT_CurlHttpAddThreadedRequest>
       )0x0) {
    pFVar15 = ::FName::FName(local_58,"STAT_CurlHttpAddThreadedRequest");
    FVar17 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FCurlHttpRequest::ProcessRequest(void)_::_2_::FStat_STAT_CurlHttpAddThreadedRequest>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CurlHttpAddThreadedRequest,
                          *pFVar15,L"STAT_CurlHttpAddThreadedRequest","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar17;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_14317454f:
    bVar7 = false;
    FVar23.ComparisonIndex.Value = 0;
    FVar23.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_res20.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x434);
        bVar6 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14317454f;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar7 = true;
  }
  *(undefined4 *)&this->_padding_ = 1;
  if (*plVar2 != 0) {
    *(undefined4 *)(*plVar2 + 0x28) = 1;
  }
  pFVar18 = FHttpModule::Get();
  if ((pFVar18->HttpManager == (FHttpManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("HttpManager != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                          ,0x50,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  this_00 = pFVar18->HttpManager;
  pTVar19 = TSharedFromThis<IHttpRequest,1>::AsShared
                      ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_80);
  pTVar3 = (pTVar19->SharedReferenceCount).ReferenceController;
  pIVar4 = pTVar19->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00->Thread == (FHttpThreadBase *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Thread",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                          ,0x24b,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b0.Object = pIVar4;
  local_b0.SharedReferenceCount.ReferenceController = pTVar3;
  FHttpManager::AddRequest(this_00,&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  (**(code **)(this_00->Thread->_padding_ + 0x40))(this_00->Thread,pIVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (5 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  bVar12 = true;
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_a0.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_a0.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_a0);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
LAB_14317474f:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar25 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_90.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_90);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  return bVar12;
}

// ReceiveResponseBodyCallback @ 1431764b0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FCurlHttpRequest::ReceiveResponseBodyCallback
          (FCurlHttpRequest *this,void *param_1,ulong64 param_2,ulong64 param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  atomic<__int64> aVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName FVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_unsigned___int64___cdecl_FCurlHttpRequest::ReceiveResponseBodyCallback(void_*,unsigned___int64,unsigned___int64)_::_2_::FStat_STAT_FCurlHttpRequest_ReceiveResponseBodyCallback>
  FVar12;
  ulong64 uVar13;
  FName FVar14;
  ulong64 uVar15;
  size_t _Size;
  FLLMScope local_res8 [2];
  void *local_res10;
  ulong64 local_res18;
  ulong64 local_res20;
  FColor_u_0 local_a8 [4];
  FName local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FName local_88;
  FName local_80;
  FMemScope local_70;
  FName local_68;
  FName local_60;
  TStringView<wchar_t> local_58;
  
  uVar13 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FCurlHttpRequest_ReceiveResponseBodyCallback ==
        (FThreadSafeStaticStat<_private:_unsigned___int64___cdecl_FCurlHttpRequest::ReceiveResponseBodyCallback(void_*,unsigned___int64,unsigned___int64)_::_2_::FStat_STAT_FCurlHttpRequest_ReceiveResponseBodyCallback>
         )0x0) {
      pFVar11 = ::FName::FName(&local_68,"STAT_FCurlHttpRequest_ReceiveResponseBodyCallback");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FCurlHttpRequest_ReceiveResponseBodyCallback,*pFVar11,
                 L"STAT_FCurlHttpRequest_ReceiveResponseBodyCallback","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_FCurlHttpRequest_ReceiveResponseBodyCallback;
  if (StatPtr_STAT_FCurlHttpRequest_ReceiveResponseBodyCallback ==
      (FThreadSafeStaticStat<_private:_unsigned___int64___cdecl_FCurlHttpRequest::ReceiveResponseBodyCallback(void_*,unsigned___int64,unsigned___int64)_::_2_::FStat_STAT_FCurlHttpRequest_ReceiveResponseBodyCallback>
       )0x0) {
    pFVar11 = ::FName::FName(&local_60,"STAT_FCurlHttpRequest_ReceiveResponseBodyCallback");
    FVar12 = (FThreadSafeStaticStat<_private:_unsigned___int64___cdecl_FCurlHttpRequest::ReceiveResponseBodyCallback(void_*,unsigned___int64,unsigned___int64)_::_2_::FStat_STAT_FCurlHttpRequest_ReceiveResponseBodyCallback>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlHttpRequest_ReceiveResponseBodyCallback,*pFVar11,
                          L"STAT_FCurlHttpRequest_ReceiveResponseBodyCallback","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_88.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x232);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_143176637;
    }
  }
  bVar7 = false;
  FVar14 = local_80;
LAB_143176637:
  FLLMScope::FLLMScope(local_res8,Networking,false,None,Default,true);
  FMemScope::FMemScope(&local_70,Networking,true);
  FHttpRequestCommon::InitResponse((FHttpRequestCommon *)this);
  uStack_90 = 0xd;
  local_98 = (FName)0x150a50af0;
  local_58._12_4_ = uStack_8c;
  local_58.Size = 0xd;
  local_58.DataPtr = L"Received body";
  OnAnyActivityOccur(this,&local_58);
  local_98 = (FName)this->_padding_;
  plVar2 = (longlong *)this->_padding_;
  _Size = param_2 * param_3;
  if (local_98 != (FName)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_98)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_98)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (5 < (byte)LogHttp._0_1_) {
    if ((plVar2 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return uVar13;
    }
    (**(code **)(*plVar2 + 0x40))(plVar2);
    if ((plVar2 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return uVar13;
    }
    (**(code **)(*plVar2 + 0x40))(plVar2);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  FVar9 = local_98;
  uVar15 = uVar13;
  if (_Size != 0) {
    uVar15 = _Size;
    if ((char)this->_padding_ == '\0') {
      if ((plVar2 == (longlong *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return uVar13;
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)_Size,(ForAnyElementType *)(plVar2 + 7),(int *)(plVar2 + 8),
                 (int *)((longlong)plVar2 + 0x44));
      aVar4 = this->TotalBytesRead;
      if ((plVar2 == (longlong *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return uVar13;
      }
      if (((ulonglong)(longlong)(int)plVar2[8] < (longlong)aVar4 + _Size) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TotalBytesRead.load() + SizeToDownload <= Response->Payload.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                              ,0x25b,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return uVar13;
      }
      memcpy((void *)((longlong)this->TotalBytesRead + plVar2[7]),local_res10,_Size);
    }
    else {
      plVar2 = &this->_padding_;
      if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)plVar2);
      plVar3 = (longlong *)this->_padding_;
      if (plVar3 == (longlong *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)plVar2);
        uVar15 = uVar13;
        if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
          uVar15 = _Size;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x188))(plVar3,local_res10,_Size);
        if ((this->_padding_ == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return uVar13;
        }
        bVar1 = *(byte *)(this->_padding_ + 0x29);
        LeaveCriticalSection((LPCRITICAL_SECTION)plVar2);
        if (((~(bVar1 >> 1) & 1) == 0) &&
           (uVar15 = uVar13, *(char *)((longlong)&this->_padding_ + 2) != '\0')) {
          uVar15 = _Size;
        }
      }
    }
    LOCK();
    this->TotalBytesRead = (atomic<__int64>)((longlong)this->TotalBytesRead + uVar15);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar9);
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return uVar15;
}

// ReceiveResponseHeaderCallback @ 143176a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FCurlHttpRequest::ReceiveResponseHeaderCallback
          (FCurlHttpRequest *this,void *param_1,ulong64 param_2,ulong64 param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> aVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_private:_unsigned___int64___cdecl_FCurlHttpRequest::ReceiveResponseHeaderCallback(void_*,unsigned___int64,unsigned___int64)_::_2_::FStat_STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback>
  FVar16;
  ulong64 uVar17;
  size_t sVar18;
  FString *pFVar19;
  longlong lVar20;
  LPCRITICAL_SECTION lpCriticalSection;
  TSharedRef<IHttpRequest,1> *pTVar21;
  TDelegateBase<FThreadSafeDelegateMode> *this_00;
  atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> aVar22;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ForAnyElementType FVar23;
  wchar_t *pwVar24;
  FNameEntryId FVar25;
  FName FVar26;
  uint uVar27;
  undefined8 *puVar28;
  undefined1 auStackY_308 [32];
  FColor_u_0 local_2a8 [2];
  FString local_2a0;
  FString local_290;
  FString local_280;
  IHttpRequest *local_270;
  uint local_268;
  uint uStack_264;
  ForAnyElementType local_260;
  int local_258 [2];
  FScriptContainerElement *local_250;
  FString local_248;
  FStatMessage local_238;
  FName local_228;
  FName local_220;
  wchar_t *local_210;
  undefined8 local_208;
  LARGE_INTEGER local_200;
  FString local_1f8;
  TSharedRef<IHttpRequest,1> local_1e8;
  IHttpRequest *local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  FName local_1c8;
  FName local_1c0;
  TStringView<wchar_t> local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  bVar10 = false;
  bVar9 = false;
  local_270 = (IHttpRequest *)CONCAT44(local_270._4_4_,2);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback ==
        (FThreadSafeStaticStat<_private:_unsigned___int64___cdecl_FCurlHttpRequest::ReceiveResponseHeaderCallback(void_*,unsigned___int64,unsigned___int64)_::_2_::FStat_STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback>
         )0x0) {
      pFVar15 = ::FName::FName(&local_1c8,"STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback,*pFVar15,
                 L"STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback;
  if (StatPtr_STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback ==
      (FThreadSafeStaticStat<_private:_unsigned___int64___cdecl_FCurlHttpRequest::ReceiveResponseHeaderCallback(void_*,unsigned___int64,unsigned___int64)_::_2_::FStat_STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback>
       )0x0) {
    pFVar15 = ::FName::FName(&local_1c0,"STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback");
    FVar16 = (FThreadSafeStaticStat<_private:_unsigned___int64___cdecl_FCurlHttpRequest::ReceiveResponseHeaderCallback(void_*,unsigned___int64,unsigned___int64)_::_2_::FStat_STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback,*pFVar15,
                          L"STAT_FCurlHttpRequest_ReceiveResponseHeaderCallback","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar16;
  local_220.ComparisonIndex.Value = 0;
  local_220.Number = 0;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar27 = FVar26.Number;
  if ((FVar25.Value != 0) || (uVar27 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2a8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar25.Value;
        local_228.Number = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x1d0);
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_268 = FVar25.Value;
      uStack_264 = uVar27;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar10 = false;
      bVar11 = true;
      goto LAB_143176be8;
    }
  }
  bVar11 = false;
  FVar26 = local_220;
LAB_143176be8:
  FHttpRequestCommon::InitResponse((FHttpRequestCommon *)this);
  local_238.NameAndInfo.Index.Value = 0xf;
  local_238.StatData.Pad = (uchar  [8])0x150a50838;
  local_1b8._12_4_ = local_238.NameAndInfo.Number;
  local_1b8.Size = 0xf;
  local_1b8.DataPtr = L"Received header";
  OnAnyActivityOccur(this,&local_1b8);
  uVar27 = (int)param_2 * (int)param_3;
  if (uVar27 - 1 < 0x19000) {
    local_260.Data = (FScriptContainerElement *)0x0;
    local_258[0] = 0;
    local_258[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar27 + 1,&local_260,local_258,local_258 + 1);
    uVar17 = (ulong64)uVar27;
    memcpy(local_260.Data,param_1,(ulonglong)uVar27);
    uVar13 = 0;
    if ((int)uVar27 < local_258[0]) {
      uVar13 = ~uVar27 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar17 = (*pcVar8)();
      return uVar17;
    }
    FVar23.Data = local_260.Data;
    local_178._padding_ = 0;
    local_260.Data[(int)uVar27] = (FScriptContainerElement)0x0;
    if (local_260.Data == (FScriptContainerElement *)0x0) {
      local_178.StringLength = 0;
      local_178.Ptr = (wchar_t *)0x0;
    }
    else {
      sVar18 = strlen((char *)local_260.Data);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,(char *)FVar23.Data,(int)sVar18,Yes);
    }
    ::FString::FString(&local_280,local_178.Ptr);
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
    pFVar19 = ::FString::Replace(&local_280,&local_1a8,L"\n",L"",IgnoreCase);
    if (&local_280 != pFVar19) {
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      local_280.Data.AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
      (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.Data.ArrayNum = (pFVar19->Data).ArrayNum;
      local_280.Data.ArrayMax = (pFVar19->Data).ArrayMax;
      (pFVar19->Data).ArrayNum = 0;
      (pFVar19->Data).ArrayMax = 0;
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    pFVar19 = ::FString::Replace(&local_280,&local_198,L"\r",L"",IgnoreCase);
    if (&local_280 != pFVar19) {
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      local_280.Data.AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
      (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.Data.ArrayNum = (pFVar19->Data).ArrayNum;
      local_280.Data.ArrayMax = (pFVar19->Data).ArrayMax;
      (pFVar19->Data).ArrayNum = 0;
      (pFVar19->Data).ArrayMax = 0;
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (5 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.Data.ArrayNum = 0;
    local_290.Data.ArrayMax = 0;
    local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a0.Data.ArrayNum = 0;
    local_2a0.Data.ArrayMax = 0;
    ::FString::FString(&local_1f8,L":");
    bVar12 = ::FString::Split(&local_280,&local_1f8,&local_290,&local_2a0);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      ::FString::TrimStartInline(&local_2a0);
      if (((1 < local_290.Data.ArrayNum) && (1 < local_2a0.Data.ArrayNum)) &&
         (this->bRedirected == false)) {
        pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
        lVar4 = this->_padding_;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_290.Data.ArrayNum != 0) {
          FVar23.Data = local_290.Data.AllocatorInstance.Data;
        }
        iVar14 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar23.Data,L"Content-Length");
        if (iVar14 == 0) {
          FVar23.Data = (FScriptContainerElement *)L"";
          if (local_2a0.Data.ArrayNum != 0) {
            FVar23.Data = local_2a0.Data.AllocatorInstance.Data;
          }
          lVar20 = _wtoi64((wchar_t *)FVar23.Data);
          if ((lVar4 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return uVar17;
          }
          *(longlong *)(lVar4 + 0xa0) = lVar20;
        }
        local_208 = 2;
        local_210 = L", ";
        local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.Data.ArrayNum = 0;
        local_248.Data.ArrayMax = 0;
        if ((lVar4 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return uVar17;
        }
        if (local_290.Data.ArrayNum == 0) {
          pwVar24 = L"";
          iVar14 = 0;
        }
        else {
          iVar14 = local_290.Data.ArrayNum + -1;
          pwVar24 = (wchar_t *)local_290.Data.AllocatorInstance.Data;
        }
        uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar24);
        iVar14 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                             *)(lVar4 + 0x48),uVar27,&local_290);
        if (iVar14 != -1) {
          lVar20 = *(longlong *)
                    &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)(lVar4 + 0x48))->Elements + (longlong)iVar14 * 0x28;
          puVar28 = (undefined8 *)(lVar20 + 0x10);
          if (lVar20 == 0) {
            puVar28 = (undefined8 *)0x0;
          }
          if ((puVar28 != (undefined8 *)0x0) && (1 < *(int *)(puVar28 + 1))) {
            iVar14 = (int)local_270 + -1 + local_2a0.Data.ArrayNum;
            if (local_2a0.Data.ArrayNum == 0) {
              iVar14 = (int)local_270;
            }
            ::FString::Reserve(&local_248,*(int *)(puVar28 + 1) + iVar14 + -1);
            iVar14 = *(int *)(puVar28 + 1) + -1;
            if (*(int *)(puVar28 + 1) == 0) {
              iVar14 = 0;
            }
            ::FString::AssignRange(&local_248,(wchar_t *)*puVar28,iVar14);
            ::FString::AppendChars(&local_248,local_210,(int)local_270);
          }
        }
        iVar14 = local_2a0.Data.ArrayNum + -1;
        if (local_2a0.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        ::FString::AppendChars(&local_248,(wchar_t *)local_2a0.Data.AllocatorInstance.Data,iVar14);
        if ((lVar4 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar17 = (*pcVar8)();
          return uVar17;
        }
        TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
        ::Emplace<FString_const_&,FString>
                  ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)(lVar4 + 0x48),&local_290,&local_248);
        pcVar8 = *(code **)(this->_padding_ + 0x108);
        if (*(char *)((longlong)&this->_padding_ + 5) == '\x01') {
          lpCriticalSection = (LPCRITICAL_SECTION)(*pcVar8)();
          pTVar21 = TSharedFromThis<IHttpRequest,1>::AsShared
                              ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_1e8);
          pTVar5 = (pTVar21->SharedReferenceCount).ReferenceController;
          local_270 = pTVar21->Object;
          if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1e8.SharedReferenceCount.ReferenceController);
          }
          else {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1e8.SharedReferenceCount.ReferenceController);
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                  ,0x1b,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            uVar17 = (*pcVar8)();
            return uVar17;
          }
          EnterCriticalSection(lpCriticalSection);
          if ((lpCriticalSection[1].LockCount == 0) ||
             (p_Var6 = lpCriticalSection[1].DebugInfo, p_Var6 == (PRTL_CRITICAL_SECTION_DEBUG)0x0))
          {
            LeaveCriticalSection(lpCriticalSection);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
          }
          else {
            local_1d8 = local_270;
            local_1d0 = pTVar5;
            (**(code **)(*(longlong *)p_Var6 + 0x68))(p_Var6,&local_1d8,&local_290,&local_2a0);
            LeaveCriticalSection(lpCriticalSection);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
          }
        }
        else {
          this_00 = (TDelegateBase<FThreadSafeDelegateMode> *)(*pcVar8)(this);
          bVar12 = TDelegateBase<FThreadSafeDelegateMode>::IsBound(this_00);
          FVar23.Data = local_290.Data.AllocatorInstance.Data;
          if (bVar12) {
            aVar22 = (atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>)
                     (this->NewlyReceivedHeaders).First;
            iVar14 = local_290.Data.ArrayNum;
            local_2a8[0].Bits = local_290.Data.ArrayMax;
            local_250 = local_2a0.Data.AllocatorInstance.Data;
            local_268 = local_2a0.Data.ArrayNum;
            local_270 = (IHttpRequest *)CONCAT44(local_270._4_4_,local_2a0.Data.ArrayMax);
            local_2a0.Data.ArrayNum = 0;
            local_2a0.Data.ArrayMax = 0;
            local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_290.Data.ArrayNum = 0;
            local_290.Data.ArrayMax = 0;
            local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (aVar22 == (atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>)
                          (this->NewlyReceivedHeaders).TailCopy) {
              aVar7 = (this->NewlyReceivedHeaders).Tail;
              aVar22 = (atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>)
                       (this->NewlyReceivedHeaders).First;
              (this->NewlyReceivedHeaders).TailCopy = (FNode *)aVar7;
              if (aVar22 == aVar7) {
                aVar22 = (atomic<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>)
                         FMemory::Malloc(0x28,8);
                *(undefined8 *)aVar22 = 0;
              }
              else {
                (this->NewlyReceivedHeaders).First = *(FNode **)aVar22;
                *(undefined8 *)aVar22 = 0;
              }
            }
            else {
              (this->NewlyReceivedHeaders).First = *(FNode **)aVar22;
              *(undefined8 *)aVar22 = 0;
            }
            *(FScriptContainerElement **)
             ((TTypeCompatibleBytes<TTuple<FString,FString>_> *)((longlong)aVar22 + 8))->Pad =
                 FVar23.Data;
            *(FColor_u_0 *)((longlong)aVar22 + 0x14) = (uint)local_2a8[0];
            *(int *)((longlong)aVar22 + 0x10) = iVar14;
            *(FScriptContainerElement **)((longlong)aVar22 + 0x18) = local_250;
            *(uint *)((longlong)aVar22 + 0x20) = local_268;
            *(int *)((longlong)aVar22 + 0x24) = (int)local_270;
            ((this->NewlyReceivedHeaders).Head)->Next = aVar22;
            (this->NewlyReceivedHeaders).Head = (FNode *)aVar22;
            LOCK();
            paVar2 = &(this->NewlyReceivedHeaders).NumElems;
            *paVar2 = (atomic<int>)((int)*paVar2 + 1);
            UNLOCK();
          }
        }
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
    }
    else if (local_280.Data.ArrayNum < 2) {
      local_250 = (FScriptContainerElement *)0x0;
      iVar14 = curl_easy_getinfo(this->EasyHandle,0x100001);
      if ((iVar14 == 0) && (local_250 != (FScriptContainerElement *)0x0)) {
        pFVar19 = ::FString::FString(&local_188,(char *)local_250);
        ::FString::operator=((FString *)&this->_padding_,pFVar19);
        if (this->_padding_ != 0) {
          ::FString::operator=((FString *)(this->_padding_ + 0x18),(FString *)&this->_padding_);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_268 = 0;
      iVar14 = curl_easy_getinfo(this->EasyHandle,0x200002);
      if (iVar14 == 0) {
        if (local_268 - 300 < 100) {
          this->bRedirected = true;
        }
        else {
          this->bRedirected = false;
          FHttpRequestCommon::TriggerStatusCodeReceivedDelegate
                    ((FHttpRequestCommon *)this,local_268);
        }
      }
    }
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    if (local_260.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data);
    }
  }
  else {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    uVar17 = 0;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_238.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_238.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_200);
      local_238.StatData.Pad[4] = '\0';
      local_238.StatData.Pad[5] = '\0';
      local_238.StatData.Pad[6] = '\0';
      local_238.StatData.Pad[7] = '\0';
      local_238.StatData.Pad[0] = local_200.s.LowPart._0_1_;
      local_238.StatData.Pad[1] = local_200.s.LowPart._1_1_;
      local_238.StatData.Pad[2] = local_200.s.LowPart._2_1_;
      local_238.StatData.Pad[3] = local_200.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_238);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return uVar17;
}

// SeekCallback @ 14317c580

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FCurlHttpRequest::SeekCallback(FCurlHttpRequest *this,long64 param_1,int param_2)

{
  if (((this->bIsRequestPayloadSeekable != false) && (param_2 == 0)) && (param_1 == 0)) {
    if (4 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    LOCK();
    this->BytesSent = (atomic<__int64>)0x0;
    UNLOCK();
    this->bIsRequestPayloadSeekable = false;
    return 0;
  }
  if (2 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  return 2;
}

// SetContent @ 14317cd90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCurlHttpRequest::SetContent
          (FCurlHttpRequest *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((int)this->_padding_ == 1) {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      return;
    }
  }
  else {
    puVar1 = ::operator_new(0x18);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *puVar1 = &___7FRequestPayloadInMemory__6B_;
      puVar1[1] = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar1 + 2) = param_1->ArrayNum;
      *(int *)((longlong)puVar1 + 0x14) = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
      puVar2 = puVar1;
    }
    puVar1 = (undefined8 *)this->_padding_;
    this->_padding_ = (longlong)puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    this->bIsRequestPayloadSeekable = true;
  }
  return;
}

// SetContent @ 14317ce50

void __thiscall
FCurlHttpRequest::SetContent
          (FCurlHttpRequest *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  size_t _Size;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = param_1->ArrayNum;
  _Size = (size_t)local_10;
  _Src = (param_1->AllocatorInstance).Data;
  pcVar1 = *(code **)(this->_padding_ + 0x80);
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,_Size);
  }
  (*pcVar1)(this,&local_18);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// SetContentAsStreamedFile @ 14317d200

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCurlHttpRequest::SetContentAsStreamedFile(FCurlHttpRequest *this,FString *param_1)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  FString local_28;
  
  pwVar5 = L"";
  puVar4 = (undefined8 *)0x0;
  if (5 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  if ((int)this->_padding_ == 1) {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    bVar2 = false;
  }
  else {
    if ((param_1->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    puVar3 = ::operator_new(0x30);
    puVar6 = puVar4;
    if (puVar3 != (undefined8 *)0x0) {
      ::FString::FString(&local_28,pwVar5);
      _Src.Data = local_28.Data.AllocatorInstance.Data;
      pFVar1 = (ForAnyElementType *)(puVar3 + 1);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      *puVar3 = &___7FRequestPayloadInFileStream__6B_;
      *(int *)(puVar3 + 2) = local_28.Data.ArrayNum;
      if (local_28.Data.ArrayNum == 0) {
        *(int *)((longlong)puVar3 + 0x14) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_28.Data.ArrayNum,0,pFVar1,local_28.Data.ArrayNum,
                   (int *)((longlong)puVar3 + 0x14));
        memcpy(pFVar1->Data,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
      }
      puVar3[3] = 0;
      puVar3[4] = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
      puVar4 = puVar3;
      puVar6 = (undefined8 *)&DAT_00000001;
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    puVar6 = (undefined8 *)this->_padding_;
    this->_padding_ = (longlong)puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    this->bIsRequestPayloadSeekable = false;
    bVar2 = true;
  }
  return bVar2;
}

// SetContentAsString @ 14317d7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FCurlHttpRequest::SetContentAsString(FCurlHttpRequest *this,FString *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  if ((int)this->_padding_ == 1) {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      return;
    }
  }
  else {
    iVar1 = (param_1->Data).ArrayNum;
    puVar3 = (undefined8 *)0x0;
    pwVar5 = L"";
    iVar6 = 0;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar1 = iVar6;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar1 = iVar1 + -1;
    }
    iVar1 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar4,iVar1);
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_18,iVar1,Default);
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 != 0) {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar6 = iVar1 + -1;
    }
    UE::Core::Private::Convert
              ((uchar *)local_18.AllocatorInstance.Data,local_18.ArrayNum,pwVar5,iVar6);
    puVar2 = ::operator_new(0x18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &___7FRequestPayloadInMemory__6B_;
      puVar2[1] = local_18.AllocatorInstance.Data;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar2 + 2) = local_18.ArrayNum;
      *(int *)((longlong)puVar2 + 0x14) = local_18.ArrayMax;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      puVar3 = puVar2;
    }
    puVar2 = (undefined8 *)this->_padding_;
    this->_padding_ = (longlong)puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    this->bIsRequestPayloadSeekable = true;
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// SetContentFromStream @ 14317daf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCurlHttpRequest::SetContentFromStream(FCurlHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FArchive *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  atomic<int> *paVar5;
  void *local_18 [2];
  
  if (5 < (byte)LogHttp._0_1_) {
    (**(code **)(*(longlong *)param_1->Object + 0x18))(param_1->Object,local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  if ((int)this->_padding_ == 1) {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  puVar4 = ::operator_new(0x30);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar5 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar5 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    puVar4[3] = pFVar2;
    *puVar4 = &___7FRequestPayloadInFileStream__6B_;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    *(undefined1 *)(puVar4 + 5) = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  puVar3 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  this->bIsRequestPayloadSeekable = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// SetHeader @ 14317e080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCurlHttpRequest::SetHeader(FCurlHttpRequest *this,FString *param_1,FString *param_2)

{
  if ((int)this->_padding_ != 1) {
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString_const_&,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&this->Headers,param_1,param_2);
    return;
  }
  if (2 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    return;
  }
  return;
}

// SetOption @ 14317eb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCurlHttpRequest::SetOption(FCurlHttpRequest *this,FName param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  FName local_res20;
  FName *local_18;
  FString *local_10;
  
  if ((int)this->_padding_ == 1) {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      return;
    }
  }
  else {
    if (this->EasyHandle == (void *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EasyHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                         ,299,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18 = &local_res20;
    local_res20 = param_1;
    local_10 = param_2;
    TSet<TTuple<FName_const_,FString>,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
              ((TSet<TTuple<FName_const_,FString>,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>,FDefaultSetAllocator>
                *)&this->_padding_,
               (TPairInitializer<FName_const_&,FString_const_&> *)&stack0x00000008,(bool *)&local_18
              );
  }
  return;
}

// SetVerb @ 14317fcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCurlHttpRequest::SetVerb(FCurlHttpRequest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_18;
  
  if ((int)this->_padding_ == 1) {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      return;
    }
  }
  else {
    if (this->EasyHandle == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EasyHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                         ,0x11f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = ::FString::ToUpper(param_1,&local_18);
    pFVar5 = &this->Verb;
    if (pFVar5 != pFVar4) {
      pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar5->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Verb).Data.ArrayNum = (pFVar4->Data).ArrayNum;
      (this->Verb).Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetupOptionHttpVersion @ 14317fe60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCurlHttpRequest::SetupOptionHttpVersion(FCurlHttpRequest *this)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *local_18;
  int local_10;
  
  (**(code **)(this->_padding_ + 0x70))(this,&local_18,HttpRequestOptions::HttpVersion);
  if (1 < local_10) {
    iVar1 = FGenericPlatformStricmp::Stricmp(local_18,L"2TLS");
    if (iVar1 == 0) {
      curl_easy_setopt(this->EasyHandle,0x54,4);
    }
    else {
      pwVar2 = L"";
      if (local_10 != 0) {
        pwVar2 = local_18;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"1_1");
      if (iVar1 == 0) {
        curl_easy_setopt(this->EasyHandle,0x54,2);
      }
      else if (2 < (byte)LogHttp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      }
    }
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetupOptionUnixSocketPath @ 14317ff50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCurlHttpRequest::SetupOptionUnixSocketPath(FCurlHttpRequest *this)

{
  int iVar1;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  wchar_t *pwVar3;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  int local_c0;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  (**(code **)(this->_padding_ + 0x70))(this,&local_c8,HttpRequestOptions::UnixSocketPath);
  iVar1 = local_c0 + -1;
  if (local_c0 == 0) {
    iVar1 = 0;
  }
  if (0 < iVar1) {
    pwVar3 = L"";
    if (local_c0 != 0) {
      pwVar3 = local_c8;
    }
    pTVar2 = StringCast<char,128,wchar_t>(&local_b8,pwVar3);
    curl_easy_setopt(this->EasyHandle,0x27f7,pTVar2->Ptr);
    if ((void *)local_b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._padding_);
    }
  }
  if (local_c8 != (wchar_t *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// SetupRequest @ 143180010

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCurlHttpRequest::SetupRequest(FCurlHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  TConsoleVariableData<bool> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FCurlHttpRequest::SetupRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_SetupRequest>
  FVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  FNameEntryId FVar18;
  FName FVar19;
  bool bVar20;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FName local_98;
  void *local_90 [2];
  void *local_80 [2];
  void *local_70 [2];
  void *local_60 [4];
  
  local_res8[0].Bits = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FCurlHttpRequest_SetupRequest ==
        (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FCurlHttpRequest::SetupRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_SetupRequest>
         )0x0) {
      pFVar11 = ::FName::FName(&local_res20,"STAT_FCurlHttpRequest_SetupRequest");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_SetupRequest,*pFVar11,
                 L"STAT_FCurlHttpRequest_SetupRequest","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_FCurlHttpRequest_SetupRequest;
  if (StatPtr_STAT_FCurlHttpRequest_SetupRequest ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FCurlHttpRequest::SetupRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_SetupRequest>
       )0x0) {
    pFVar11 = ::FName::FName(&local_98,"STAT_FCurlHttpRequest_SetupRequest");
    FVar12 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FCurlHttpRequest::SetupRequest(void)_::_2_::FStat_STAT_FCurlHttpRequest_SetupRequest>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_SetupRequest,
                          *pFVar11,L"STAT_FCurlHttpRequest_SetupRequest","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar3 = false;
  bVar5 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar16 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar16 == 0)) {
LAB_143180192:
    bVar4 = false;
    FVar19.ComparisonIndex.Value = 0;
    FVar19.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar18.Value;
        local_res10.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x329);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143180192;
    local_res18 = FVar18.Value;
    uStackX_1c = uVar16;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar4 = true;
  }
  if ((this->EasyHandle == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EasyHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                         ,0x32a,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return (bool)uVar8;
  }
  plVar17 = (longlong *)this->_padding_;
  if (plVar17 != (longlong *)0x0) {
LAB_143180236:
    cVar9 = (**(code **)(*plVar17 + 0x30))();
    if (cVar9 != '\0') {
      bVar2 = false;
      bVar7 = false;
      lVar14 = (**(code **)(this->_padding_ + 0x58))(this,local_80);
      if (*(int *)(lVar14 + 8) < 2) {
LAB_143180332:
        lVar14 = (**(code **)(*(longlong *)this->_padding_ + 8))();
        if (lVar14 == 0) goto LAB_1431802bf;
        bVar20 = true;
      }
      else {
        puVar15 = (undefined8 *)(**(code **)(this->_padding_ + 0x58))(this,local_90);
        ::FString::FString(&local_108,L"GET");
        iVar10 = *(int *)(puVar15 + 1);
        if (iVar10 == local_108.Data.ArrayNum) {
          if (iVar10 < 2) {
            bVar2 = true;
            bVar7 = true;
            goto LAB_143180332;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)*puVar15,(wchar_t *)local_108.Data.AllocatorInstance.Data);
          bVar20 = iVar10 == 0;
        }
        else {
          bVar20 = local_108.Data.ArrayNum + iVar10 == 1;
        }
        bVar2 = true;
        bVar7 = true;
        if (bVar20) goto LAB_143180332;
LAB_1431802bf:
        bVar20 = false;
      }
      if ((bVar7) && (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if ((bVar2) && (local_90[0] != (void *)0x0)) {
        FMemory::Free(local_90[0]);
      }
      if (local_80[0] != (void *)0x0) {
        FMemory::Free(local_80[0]);
      }
      if (!bVar20) goto LAB_143180351;
      if (2 < (byte)LogHttp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      }
    }
    bVar7 = false;
    goto LAB_143180559;
  }
  plVar13 = ::operator_new(0x18);
  plVar17 = (longlong *)0x0;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = 0;
    *plVar13 = (longlong)&___7FRequestPayloadInMemory__6B_;
    plVar13[2] = 0;
    plVar17 = plVar13;
  }
  puVar15 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)plVar17;
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)*puVar15)(puVar15,1);
    plVar17 = (longlong *)this->_padding_;
  }
  this->bIsRequestPayloadSeekable = true;
  if (plVar17 != (longlong *)0x0) goto LAB_143180236;
LAB_143180351:
  LOCK();
  this->bCurlRequestCompleted = (atomic<bool>)0x0;
  UNLOCK();
  this->CurlAddToMultiResult = CURLM_OK;
  this->LastReportedBytesSent = 0;
  if ((5 < (byte)LogHttp._0_1_) &&
     (UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp),
     5 < (byte)LogHttp._0_1_)) {
    (**(code **)(*(longlong *)this->_padding_ + 8))();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::FString(&local_f8,L"Content-Length");
  lVar14 = (*pcVar1)(this,local_70,&local_f8);
  iVar10 = *(int *)(lVar14 + 8);
  if (local_70[0] != (void *)0x0) {
    FMemory::Free(local_70[0]);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (iVar10 < 2) {
    lVar14 = (**(code **)(*(longlong *)this->_padding_ + 8))();
    pTVar6 = CVarHttpAlwaysSetContentLengthEnabled.Ref;
    if (lVar14 == 0) {
      bVar7 = IsInParallelGameThread();
      if ((bVar7) || (bVar7 = IsInGameThread(), plVar17 = (longlong *)&DAT_00000001, bVar7)) {
        plVar17 = (longlong *)0x0;
      }
      if (*(char *)((longlong)plVar17 + (longlong)pTVar6) == '\0') goto LAB_1431804bb;
    }
    pcVar1 = *(code **)(this->_padding_ + 0xb0);
    (**(code **)(*(longlong *)this->_padding_ + 8))();
    ::FString::PrintfImpl(&local_d8,L"%llu");
    ::FString::FString(&local_e8,L"Content-Length");
    (*pcVar1)(this,&local_e8,&local_d8);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
LAB_1431804bb:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::FString(&local_c8,L"Expect");
  lVar14 = (*pcVar1)(this,local_60,&local_c8);
  iVar10 = *(int *)(lVar14 + 8);
  if (local_60[0] != (void *)0x0) {
    FMemory::Free(local_60[0]);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (iVar10 < 2) {
    pcVar1 = *(code **)(this->_padding_ + 0xb0);
    ::FString::FString(&local_a8,L"");
    ::FString::FString(&local_b8,L"Expect");
    (*pcVar1)(this,&local_b8,&local_a8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = true;
LAB_143180559:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return bVar7;
}

// SetupRequestHttpThread @ 143180650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143180937) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCurlHttpRequest::SetupRequestHttpThread(FCurlHttpRequest *this)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_2_::FStat_STAT_FCurlHttpRequest_SetupRequestHttpThread>
  FVar19;
  FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_3_::FStat_STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS>
  FVar20;
  FThreadStats *pFVar21;
  FThreadStatsPool *pFVar22;
  FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_4_::FStat_STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT>
  FVar23;
  undefined8 *puVar24;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar25;
  longlong lVar26;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar27;
  FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_52_::FStat_STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS>
  FVar28;
  curl_slist *pcVar29;
  FHttpModule *pFVar30;
  TStatIdData *pTVar31;
  undefined8 uVar32;
  ulonglong uVar33;
  FNameEntryId FVar34;
  FName FVar35;
  FName FVar36;
  ulonglong uVar37;
  FName FVar38;
  uint uVar39;
  ulonglong uVar40;
  char *pcVar41;
  wchar_t *pwVar42;
  uint uVar43;
  FNameEntryId FVar44;
  undefined1 auStackY_618 [32];
  longlong local_5b0;
  FColor_u_0 local_5a8;
  uint local_5a4;
  FString *local_5a0;
  uint local_598;
  FName local_590;
  FColor_u_0 local_588;
  FColor_u_0 local_584;
  FColor_u_0 local_580;
  FColor_u_0 local_57c;
  int local_578;
  wchar_t *local_570;
  int local_568;
  FName local_560;
  FName local_550;
  FName local_548;
  FName local_540;
  FName local_538;
  FName local_530;
  FName local_528;
  FName local_520;
  FName local_518;
  FName local_508;
  FName local_4f8;
  FName local_4e8;
  LARGE_INTEGER local_4d8;
  LARGE_INTEGER local_4d0;
  size_t local_4c8;
  ulonglong local_4c0;
  FStatMessage local_4b8;
  wchar_t *local_4a8;
  int local_4a0;
  FStatMessage local_498;
  FString local_488;
  FString local_478;
  FName local_468;
  FName local_460;
  FName local_458;
  FName local_450;
  FName local_448;
  FName local_440;
  FName local_438;
  FName local_430;
  FName local_428;
  FName local_420;
  void *local_418 [2];
  void *local_408 [2];
  FScriptContainerElement local_3f8 [128];
  ForAnyElementType local_378;
  FScriptContainerElement *local_370;
  int local_368;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_358;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_2b8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_218;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_178;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_618;
  uVar37 = 0;
  lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  FVar44.Value = 0;
  if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FCurlHttpRequest_SetupRequestHttpThread =
         (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_2_::FStat_STAT_FCurlHttpRequest_SetupRequestHttpThread>
          )0x0;
    pFVar18 = ::FName::FName(&local_428,"STAT_FCurlHttpRequest_SetupRequestHttpThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_SetupRequestHttpThread,
               *pFVar18,L"STAT_FCurlHttpRequest_SetupRequestHttpThread","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_FCurlHttpRequest_SetupRequestHttpThread;
  if (StatPtr_STAT_FCurlHttpRequest_SetupRequestHttpThread ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_2_::FStat_STAT_FCurlHttpRequest_SetupRequestHttpThread>
       )0x0) {
    pFVar18 = ::FName::FName(&local_420,"STAT_FCurlHttpRequest_SetupRequestHttpThread");
    FVar19 = (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_2_::FStat_STAT_FCurlHttpRequest_SetupRequestHttpThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlHttpRequest_SetupRequestHttpThread,*pFVar18,
                          L"STAT_FCurlHttpRequest_SetupRequestHttpThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar38 = *(FName *)FVar19;
  bVar7 = false;
  bVar9 = false;
  local_518.ComparisonIndex.Value = 0;
  local_518.Number = 0;
  bVar11 = false;
  bVar4 = false;
  if ((FVar38.ComparisonIndex.Value.Value == 0) && (FVar38.Number == 0)) {
LAB_143180877:
    bVar9 = bVar4;
    bVar7 = bVar11;
    bVar11 = false;
    local_540 = local_518;
    FVar38 = local_518;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_588.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_588._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar7 = false;
      bVar9 = true;
      bVar11 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_538.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
        local_538.Number = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_538,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x353);
        bVar7 = true;
        bVar9 = true;
        bVar11 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143180877;
    local_540 = FVar38;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar11 = true;
  }
  if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS =
         (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_3_::FStat_STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS>
          )0x0;
    pFVar18 = ::FName::FName(&local_468,"STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS,*pFVar18,
               L"STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  FVar20 = StatPtr_STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS;
  if (StatPtr_STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_3_::FStat_STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS>
       )0x0) {
    pFVar18 = ::FName::FName(&local_460,"STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS");
    FVar20 = (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_3_::FStat_STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS,*pFVar18,
                          L"STAT_FCurlHttpRequest_SetupRequest_SLIST_FREE_HEADERS","STATGROUP_Quick"
                          ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar36 = *(FName *)FVar20;
  bVar4 = false;
  bVar10 = false;
  local_508.ComparisonIndex.Value = 0;
  local_508.Number = 0;
  if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_143180a70:
    bVar5 = false;
    FVar36 = local_508;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_584.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_584._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar4 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_530.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
        local_530.Number = FVar36.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_530,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x355);
        bVar4 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143180a70;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar5 = true;
  }
  curl_slist_free_all(this->HeaderList);
  this->HeaderList = (curl_slist *)0x0;
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar36 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar21 == (FThreadStats *)0x0) {
      pFVar22 = FThreadStatsPool::Get();
      pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
    }
    if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
      local_4b8.NameAndInfo.Index = FVar36.ComparisonIndex.Value;
      local_4b8.NameAndInfo.Number = FVar36.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_4d0);
      local_4b8.StatData.Pad[4] = '\0';
      local_4b8.StatData.Pad[5] = '\0';
      local_4b8.StatData.Pad[6] = '\0';
      local_4b8.StatData.Pad[7] = '\0';
      local_4b8.StatData.Pad[0] = local_4d0.s.LowPart._0_1_;
      local_4b8.StatData.Pad[1] = local_4d0.s.LowPart._1_1_;
      local_4b8.StatData.Pad[2] = local_4d0.s.LowPart._2_1_;
      local_4b8.StatData.Pad[3] = local_4d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar21,&local_4b8);
      piVar1 = &pFVar21->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar21,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar21,false,false);
      }
    }
  }
  if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    StatPtr_STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT =
         (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_4_::FStat_STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT>
          )0x0;
    pFVar18 = ::FName::FName(&local_458,"STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT,
               *pFVar18,L"STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS2);
  }
  FVar23 = StatPtr_STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT;
  if (StatPtr_STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_4_::FStat_STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT>
       )0x0) {
    pFVar18 = ::FName::FName(&local_450,"STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT");
    FVar23 = (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_4_::FStat_STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT,*pFVar18,
                          L"STAT_FCurlHttpRequest_SetupRequest_EASY_SETOPT","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar36 = *(FName *)FVar23;
  bVar4 = false;
  bVar5 = false;
  local_4f8.ComparisonIndex.Value = 0;
  local_4f8.Number = 0;
  bVar10 = false;
  bVar13 = false;
  if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_143180d38:
    bVar5 = bVar13;
    bVar4 = bVar10;
    bVar10 = false;
    local_548 = local_4f8;
    FVar36 = local_4f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_580.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_580._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar10 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_528.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
        local_528.Number = FVar36.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_528,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x35b);
        bVar4 = true;
        bVar5 = true;
        bVar10 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143180d38;
    local_548 = FVar36;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar10 = true;
  }
  puVar24 = (undefined8 *)(**(code **)this->_padding_)(this);
  if (*(int *)(puVar24 + 1) == 0) {
    pwVar42 = L"";
  }
  else {
    pwVar42 = (wchar_t *)*puVar24;
  }
  pTVar25 = StringCast<char,128,wchar_t>(&local_358,pwVar42);
  curl_easy_setopt(this->EasyHandle,0x2712,pTVar25->Ptr);
  if ((void *)local_358._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_358._padding_);
  }
  (**(code **)(this->_padding_ + 0x70))(this,&local_4a8,HttpRequestOptions::UnixSocketPath);
  uVar43 = local_4a0 - 1;
  if (local_4a0 == 0) {
    uVar43 = FVar44.Value;
  }
  if (0 < (int)uVar43) {
    pwVar42 = L"";
    if (local_4a0 != 0) {
      pwVar42 = local_4a8;
    }
    pTVar25 = StringCast<char,128,wchar_t>(&local_2b8,pwVar42);
    curl_easy_setopt(this->EasyHandle,0x27f7,pTVar25->Ptr);
    if ((void *)local_2b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._padding_);
    }
  }
  if (local_4a8 != (wchar_t *)0x0) {
    FMemory::Free(local_4a8);
  }
  (**(code **)(this->_padding_ + 0x70))(this,&local_570,HttpRequestOptions::HttpVersion);
  if (1 < local_568) {
    iVar16 = FGenericPlatformStricmp::Stricmp(local_570,L"2TLS");
    if (iVar16 == 0) {
      curl_easy_setopt(this->EasyHandle,0x54,4);
    }
    else {
      pwVar42 = L"";
      if (local_568 != 0) {
        pwVar42 = local_570;
      }
      iVar16 = FGenericPlatformStricmp::Stricmp(pwVar42,L"1_1");
      if (iVar16 == 0) {
        curl_easy_setopt(this->EasyHandle,0x54,2);
      }
      else if (2 < (byte)LogHttp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      }
    }
  }
  if (local_570 != (wchar_t *)0x0) {
    FMemory::Free(local_570);
  }
  if (1 < FCurlHttpManager::CurlRequestOptions.LocalHostAddr.Data.ArrayNum) {
    pTVar25 = StringCast<char,128,wchar_t>
                        (&local_218,
                         (wchar_t *)
                         FCurlHttpManager::CurlRequestOptions.LocalHostAddr.Data.AllocatorInstance.
                         Data);
    curl_easy_setopt(this->EasyHandle,0x274e,pTVar25->Ptr);
    if ((void *)local_218._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_218._padding_);
    }
  }
  if ((this->Verb).Data.ArrayNum == 0) {
    pwVar42 = L"";
  }
  else {
    pwVar42 = (wchar_t *)(this->Verb).Data.AllocatorInstance.Data;
  }
  iVar16 = FGenericPlatformStricmp::Stricmp(pwVar42,L"POST");
  if (iVar16 == 0) {
    pcVar3 = *(code **)(this->_padding_ + 0x28);
    ::FString::FString(&local_488,L"Content-Type");
    lVar26 = (*pcVar3)(this,local_418,&local_488);
    if ((*(int *)(lVar26 + 8) < 2) &&
       (cVar12 = (**(code **)(*(longlong *)this->_padding_ + 0x18))(), cVar12 == '\0')) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    if (local_418[0] != (void *)0x0) {
      FMemory::Free(local_418[0]);
    }
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
    if ((bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!GetHeader(L\"Content-Type\").IsEmpty() || RequestPayload->IsURLEncoded()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                            ,0x36f,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      uVar14 = (*pcVar3)();
      return (bool)uVar14;
    }
    curl_easy_setopt(this->EasyHandle,0x2f,1);
    pcVar41 = (char *)0x0;
    uVar32 = 0x271f;
LAB_143180fd9:
    curl_easy_setopt(this->EasyHandle,uVar32,pcVar41);
    uVar32 = (**(code **)(*(longlong *)this->_padding_ + 8))();
    curl_easy_setopt(this->EasyHandle,0x3c,uVar32);
LAB_1431812a7:
    LOCK();
    this->BytesSent = (atomic<__int64>)0x0;
    UNLOCK();
    LOCK();
    this->TotalBytesSent = (atomic<__int64>)0x0;
    UNLOCK();
    curl_easy_setopt(this->EasyHandle,0x2719,this);
    curl_easy_setopt(this->EasyHandle,0x4e2c,StaticUploadCallback);
  }
  else {
    if ((this->Verb).Data.ArrayNum == 0) {
      pwVar42 = L"";
    }
    else {
      pwVar42 = (wchar_t *)(this->Verb).Data.AllocatorInstance.Data;
    }
    iVar16 = FGenericPlatformStricmp::Stricmp(pwVar42,L"PUT");
    if (iVar16 == 0) {
LAB_143181200:
      curl_easy_setopt(this->EasyHandle,0x2e,1);
      uVar32 = (**(code **)(*(longlong *)this->_padding_ + 8))();
      curl_easy_setopt(this->EasyHandle,0xe,uVar32);
      if ((this->Verb).Data.ArrayNum == 0) {
        pwVar42 = L"";
      }
      else {
        pwVar42 = (wchar_t *)(this->Verb).Data.AllocatorInstance.Data;
      }
      iVar16 = FGenericPlatformStricmp::Stricmp(pwVar42,L"PUT");
      if (iVar16 != 0) {
        if ((this->Verb).Data.ArrayNum == 0) {
          pwVar42 = L"";
        }
        else {
          pwVar42 = (wchar_t *)(this->Verb).Data.AllocatorInstance.Data;
        }
        pTVar27 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
                  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                            (&local_d8,pwVar42);
        curl_easy_setopt(this->EasyHandle,0x2734,pTVar27->Ptr);
        if ((void *)local_d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_d8._padding_);
        }
      }
      goto LAB_1431812a7;
    }
    if ((this->Verb).Data.ArrayNum == 0) {
      pwVar42 = L"";
    }
    else {
      pwVar42 = (wchar_t *)(this->Verb).Data.AllocatorInstance.Data;
    }
    iVar16 = FGenericPlatformStricmp::Stricmp(pwVar42,L"PATCH");
    if (iVar16 == 0) goto LAB_143181200;
    if ((this->Verb).Data.ArrayNum == 0) {
      pwVar42 = L"";
    }
    else {
      pwVar42 = (wchar_t *)(this->Verb).Data.AllocatorInstance.Data;
    }
    iVar16 = FGenericPlatformStricmp::Stricmp(pwVar42,L"GET");
    if (iVar16 == 0) {
      uVar32 = 0x50;
LAB_143181087:
      curl_easy_setopt(this->EasyHandle,uVar32,1);
    }
    else {
      if ((this->Verb).Data.ArrayNum == 0) {
        pwVar42 = L"";
      }
      else {
        pwVar42 = (wchar_t *)(this->Verb).Data.AllocatorInstance.Data;
      }
      iVar16 = FGenericPlatformStricmp::Stricmp(pwVar42,L"HEAD");
      if (iVar16 == 0) {
        uVar32 = 0x2c;
        goto LAB_143181087;
      }
      if ((this->Verb).Data.ArrayNum == 0) {
        pwVar42 = L"";
      }
      else {
        pwVar42 = (wchar_t *)(this->Verb).Data.AllocatorInstance.Data;
      }
      iVar16 = FGenericPlatformStricmp::Stricmp(pwVar42,L"DELETE");
      if (iVar16 == 0) {
        pcVar3 = *(code **)(this->_padding_ + 0x28);
        ::FString::FString(&local_478,L"Content-Type");
        lVar26 = (*pcVar3)(this,local_408,&local_478);
        if ((*(int *)(lVar26 + 8) < 2) &&
           (cVar12 = (**(code **)(*(longlong *)this->_padding_ + 0x18))(), cVar12 == '\0')) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        if (local_408[0] != (void *)0x0) {
          FMemory::Free(local_408[0]);
        }
        if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_478.Data.AllocatorInstance.Data);
        }
        if ((bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("!GetHeader(L\"Content-Type\").IsEmpty() || RequestPayload->IsURLEncoded()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                                ,0x395,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar14 = (*pcVar3)();
          return (bool)uVar14;
        }
        curl_easy_setopt(this->EasyHandle,0x2f,1);
        pcVar41 = "DELETE";
        uVar32 = 0x2734;
        goto LAB_143180fd9;
      }
      if ((this->Verb).Data.ArrayNum == 0) {
        pwVar42 = L"";
      }
      else {
        pwVar42 = (wchar_t *)(this->Verb).Data.AllocatorInstance.Data;
      }
      pTVar25 = StringCast<char,128,wchar_t>(&local_178,pwVar42);
      curl_easy_setopt(this->EasyHandle,0x2734,pTVar25->Ptr);
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
  }
  curl_easy_setopt(this->EasyHandle,0x272d,this);
  curl_easy_setopt(this->EasyHandle,0x4e6f,StaticReceiveResponseHeaderCallback);
  curl_easy_setopt(this->EasyHandle,0x2711,this);
  curl_easy_setopt(this->EasyHandle,0x4e2b,StaticReceiveResponseBodyCallback);
  if (FCurlHttpManager::CurlRequestOptions.bAcceptCompressedContent != false) {
    curl_easy_setopt(this->EasyHandle,0x2776,"");
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    StatPtr_STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS =
         (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_52_::FStat_STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS>
          )0x0;
    pFVar18 = ::FName::FName(&local_448,"STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS,*pFVar18,
               L"STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS3);
  }
  FVar28 = StatPtr_STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS;
  if (StatPtr_STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_52_::FStat_STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS>
       )0x0) {
    pFVar18 = ::FName::FName(&local_440,"STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS");
    FVar28 = (FThreadSafeStaticStat<_public:_bool___cdecl_FCurlHttpRequest::SetupRequestHttpThread(void)_::_52_::FStat_STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS,*pFVar18,
                          L"STAT_FCurlHttpRequest_SetupRequest_SLIST_APPEND_HEADERS",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar28;
  local_4e8.ComparisonIndex.Value = 0;
  local_4e8.Number = 0;
  bVar13 = false;
  bVar15 = false;
  if ((FVar35.ComparisonIndex.Value.Value == 0) && (FVar35.Number == 0)) {
LAB_143181561:
    bVar8 = bVar15;
    bVar6 = bVar13;
    bVar13 = false;
    local_550 = local_4e8;
    FVar35 = local_4e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents == 0) {
      bVar6 = false;
      bVar8 = false;
    }
    else {
      local_57c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_57c._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar13 = false;
      bVar15 = true;
      if (CpuChannel->Enabled < 0) {
        bVar6 = false;
        bVar8 = true;
      }
      else {
        local_520.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_520.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_520,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x3bf);
        bVar6 = true;
        bVar8 = true;
        bVar13 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143181561;
    local_550 = FVar35;
    FThreadStats::AddMessage(FVar35,CycleScopeStart);
    bVar13 = true;
  }
  (**(code **)(this->_padding_ + 0x30))(this,&local_5a0);
  uVar33 = (ulonglong)(int)local_598;
  local_4c0 = uVar33;
  if (0 < (int)local_598) {
    local_5b0 = 0;
    uVar40 = uVar37;
    do {
      uVar39 = (uint)uVar40;
      uVar43 = ~uVar39 >> 0x1f;
      uVar17 = FVar44.Value;
      if ((int)uVar39 < (int)uVar33) {
        uVar17 = uVar43;
      }
      local_5a4 = uVar43;
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      local_578 = ::FString::Find((FString *)
                                  ((longlong)&(local_5a0->Data).AllocatorInstance.Data + uVar37),
                                  L"Authorization",0xd,IgnoreCase,FromStart,-1);
      if ((local_578 == -1) && (5 < (byte)LogHttp._0_1_)) {
        uVar17 = FVar44.Value;
        if ((int)uVar39 < (int)local_598) {
          uVar17 = uVar43;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          uVar14 = (*pcVar3)();
          return (bool)uVar14;
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      }
      uVar17 = 0;
      if ((int)uVar39 < (int)local_598) {
        uVar17 = uVar43;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      if (*(int *)((longlong)&(local_5a0->Data).ArrayNum + uVar37) == 0) {
        pwVar42 = L"";
LAB_143181719:
        local_378.Data = (FScriptContainerElement *)0x0;
        local_4c8 = wcslen(pwVar42);
        local_368 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar42,(int)local_4c8);
        uVar43 = local_368 + 1;
        uVar17 = uVar43;
        if (uVar43 < 0x81) {
          if (local_378.Data != (FScriptContainerElement *)0x0) {
            uVar17 = 0;
            goto LAB_143181759;
          }
        }
        else {
LAB_143181759:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_378,0,uVar17,1);
        }
        local_370 = local_3f8;
        if (local_378.Data != (FScriptContainerElement *)0x0) {
          local_370 = local_378.Data;
        }
        UE::Core::Private::Convert((uchar *)local_370,uVar43,pwVar42,(int)local_4c8 + 1);
        uVar43 = local_5a4;
      }
      else {
        pwVar42 = *(wchar_t **)((longlong)&(local_5a0->Data).AllocatorInstance.Data + uVar37);
        local_378.Data = (FScriptContainerElement *)0x0;
        if (pwVar42 != (wchar_t *)0x0) goto LAB_143181719;
        local_368 = 0;
        local_370 = (FScriptContainerElement *)0x0;
      }
      pcVar29 = (curl_slist *)curl_slist_append(this->HeaderList,local_370);
      if (local_378.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data);
      }
      if (pcVar29 == (curl_slist *)0x0) {
        if (local_578 == -1) {
          if (2 < (byte)LogHttp._0_1_) {
            uVar17 = 0;
            if ((int)uVar39 < (int)local_598) {
              uVar17 = uVar43;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar3 = (code *)swi(3);
              uVar14 = (*pcVar3)();
              return (bool)uVar14;
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
          }
        }
        else if (2 < (byte)LogHttp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
        }
      }
      else {
        this->HeaderList = pcVar29;
      }
      uVar40 = (ulonglong)(uVar39 + 1);
      uVar33 = (ulonglong)local_598;
      local_5b0 = local_5b0 + 1;
      uVar37 = uVar37 + 0x10;
      FVar35 = local_550;
      FVar38 = local_540;
      FVar36 = local_548;
    } while (local_5b0 < (longlong)local_4c0);
  }
  DestructItems<FString,int>(local_5a0,local_598);
  if (local_5a0 != (FString *)0x0) {
    FMemory::Free(local_5a0);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  if (this->HeaderList != (curl_slist *)0x0) {
    curl_easy_setopt(this->EasyHandle,0x2727);
  }
  pFVar30 = FHttpModule::Get();
  fVar2 = pFVar30->HttpConnectionTimeout;
  if (((int)fVar2 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("HttpConnectionTimeout > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                          ,0x3e5,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  curl_easy_setopt(this->EasyHandle,0x4e,(int)fVar2);
  if ((FCurlHttpManager::CurlRequestOptions.bAllowSeekFunction != false) &&
     (this->bIsRequestPayloadSeekable != false)) {
    curl_easy_setopt(this->EasyHandle,0x27b8,this);
    curl_easy_setopt(this->EasyHandle,0x4ec7,StaticSeekCallback);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar36,CycleScopeEnd);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < DAT_155064af8) &&
     (_Init_thread_header(&DAT_155064af8), DAT_155064af8 == -1)) {
    DAT_155064af0 = (TStatIdData *)0x0;
    pFVar18 = ::FName::FName(&local_438,"STAT_FCurlHttpRequest_SetupRequest_EASY_CURLOPT_SHARE");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&DAT_155064af0,*pFVar18,
               L"STAT_FCurlHttpRequest_SetupRequest_EASY_CURLOPT_SHARE","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&DAT_155064af8);
  }
  pTVar31 = DAT_155064af0;
  if (DAT_155064af0 == (TStatIdData *)0x0) {
    pFVar18 = ::FName::FName(&local_430,"STAT_FCurlHttpRequest_SetupRequest_EASY_CURLOPT_SHARE");
    pTVar31 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&DAT_155064af0,*pFVar18,
                         L"STAT_FCurlHttpRequest_SetupRequest_EASY_CURLOPT_SHARE","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar36 = *(FName *)&pTVar31->Name;
  bVar4 = false;
  bVar10 = false;
  local_560.ComparisonIndex.Value = 0;
  local_560.Number = 0;
  FVar34 = FVar36.ComparisonIndex.Value;
  uVar43 = FVar36.Number;
  if ((FVar34.Value != 0) || (uVar43 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5a8._s_0,(pTVar31->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_590.ComparisonIndex.Value = FVar34.Value;
        local_590.Number = uVar43;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_590,(pTVar31->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x3f2);
        bVar4 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_590.ComparisonIndex.Value = FVar34.Value;
      local_590.Number = uVar43;
      local_560 = FVar36;
      FThreadStats::AddMessage(FVar36,CycleScopeStart);
      bVar5 = true;
      FVar44.Value = local_560.ComparisonIndex.Value;
      goto LAB_143181bad;
    }
  }
  bVar5 = false;
  FVar36 = local_560;
LAB_143181bad:
  curl_easy_setopt(this->EasyHandle,0x2774);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar36 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar21 == (FThreadStats *)0x0) {
      pFVar22 = FThreadStatsPool::Get();
      pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
    }
    if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
      local_498.NameAndInfo.Number = FVar36.Number & 0xffff6fff | 0x6000;
      local_498.NameAndInfo.Index.Value = FVar44.Value;
      QueryPerformanceCounter(&local_4d8);
      local_498.StatData.Pad[4] = '\0';
      local_498.StatData.Pad[5] = '\0';
      local_498.StatData.Pad[6] = '\0';
      local_498.StatData.Pad[7] = '\0';
      local_498.StatData.Pad[0] = local_4d8.s.LowPart._0_1_;
      local_498.StatData.Pad[1] = local_4d8.s.LowPart._1_1_;
      local_498.StatData.Pad[2] = local_4d8.s.LowPart._2_1_;
      local_498.StatData.Pad[3] = local_4d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar21,&local_498);
      piVar1 = &pFVar21->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar21,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar21,false,false);
      }
    }
  }
  curl_easy_setopt(this->EasyHandle,0x142,1);
  if (4 < (byte)LogHttp._0_1_) {
    (**(code **)this->_padding_)(this);
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__p__Starting__s_150a51900,
               (FLogCategoryBase *)&LogHttp);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  return true;
}

// StartThreadedRequest @ 143183d20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCurlHttpRequest::StartThreadedRequest(FCurlHttpRequest *this)

{
  *(undefined4 *)&this->_padding_ = 0;
  if (5 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  return true;
}

// StaticDebugCallback @ 143184540

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl
FCurlHttpRequest::StaticDebugCallback
          (void *param_1,curl_infotype param_2,char *param_3,ulong64 param_4,void *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticDebugCallback(void_*,curl_infotype,char_*,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticDebugCallback>
  FVar8;
  ulong64 uVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res8 [2];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FCurlHttpRequest_StaticDebugCallback ==
          (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticDebugCallback(void_*,curl_infotype,char_*,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticDebugCallback>
           )0x0) {
        pFVar7 = ::FName::FName(&local_58,"STAT_FCurlHttpRequest_StaticDebugCallback");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_StaticDebugCallback,
                   *pFVar7,L"STAT_FCurlHttpRequest_StaticDebugCallback","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_FCurlHttpRequest_StaticDebugCallback;
  if (StatPtr_STAT_FCurlHttpRequest_StaticDebugCallback ==
      (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticDebugCallback(void_*,curl_infotype,char_*,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticDebugCallback>
       )0x0) {
    pFVar7 = ::FName::FName(&local_50,"STAT_FCurlHttpRequest_StaticDebugCallback");
    FVar8 = (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticDebugCallback(void_*,curl_infotype,char_*,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticDebugCallback>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FCurlHttpRequest_StaticDebugCallback,*pFVar7,
                         L"STAT_FCurlHttpRequest_StaticDebugCallback","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar11.Value;
        local_68.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x1c5);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_60.s.LowPart = FVar11.Value;
      local_60.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_1431846c5;
    }
  }
  bVar4 = false;
  FVar12 = local_48;
LAB_1431846c5:
  if (param_1 == (void *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                       ,0x1c6,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
  }
  if (param_5 == (void *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                       ,0x1c7,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
  }
  uVar9 = DebugCallback(param_5,param_1,param_2,param_3,param_4);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_60);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_38);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return uVar9;
}

// StaticReceiveResponseBodyCallback @ 1431848e0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl
FCurlHttpRequest::StaticReceiveResponseBodyCallback
          (void *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticReceiveResponseBodyCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback>
  FVar8;
  ulong64 uVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback ==
          (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticReceiveResponseBodyCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback>
           )0x0) {
        pFVar7 = ::FName::FName(&local_70,"STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback")
        ;
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback,*pFVar7,
                   L"STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback;
  if (StatPtr_STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback ==
      (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticReceiveResponseBodyCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback>
       )0x0) {
    pFVar7 = ::FName::FName(&local_68,"STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback");
    FVar8 = (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticReceiveResponseBodyCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback,*pFVar7,
                         L"STAT_FCurlHttpRequest_StaticReceiveResponseBodyCallback",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar11.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x1b2);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.s.LowPart = FVar11.Value;
      local_78.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_143184a60;
    }
  }
  bVar4 = false;
  FVar12 = local_60;
LAB_143184a60:
  if (param_1 == (void *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                       ,0x1b3,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
  }
  if (param_4 == (void *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                       ,0x1b4,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
  }
  uVar9 = ReceiveResponseBodyCallback(param_4,param_1,param_2,param_3);
  if (*(char *)((longlong)param_4 + 0x135) == '\x01') {
    CheckProgressDelegate(param_4);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_50.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_50);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return uVar9;
}

// StaticReceiveResponseHeaderCallback @ 143184c70

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl
FCurlHttpRequest::StaticReceiveResponseHeaderCallback
          (void *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticReceiveResponseHeaderCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback>
  FVar8;
  ulong64 uVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback ==
          (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticReceiveResponseHeaderCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback>
           )0x0) {
        pFVar7 = ::FName::FName(&local_70,
                                "STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback,*pFVar7,
                   L"STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback;
  if (StatPtr_STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback ==
      (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticReceiveResponseHeaderCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback>
       )0x0) {
    pFVar7 = ::FName::FName(&local_68,"STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback");
    FVar8 = (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticReceiveResponseHeaderCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback,*pFVar7,
                         L"STAT_FCurlHttpRequest_StaticReceiveResponseHeaderCallback",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar11.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x1a7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.s.LowPart = FVar11.Value;
      local_78.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_143184df0;
    }
  }
  bVar4 = false;
  FVar12 = local_60;
LAB_143184df0:
  if (param_1 == (void *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                       ,0x1a8,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
  }
  if (param_4 == (void *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                       ,0x1a9,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
  }
  uVar9 = ReceiveResponseHeaderCallback(param_4,param_1,param_2,param_3);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_50.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_50);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return uVar9;
}

// StaticSeekCallback @ 143184ff0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl FCurlHttpRequest::StaticSeekCallback(void *param_1,long64 param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_static_int___cdecl_FCurlHttpRequest::StaticSeekCallback(void_*,__int64,int)_::_2_::FStat_STAT_FCurlHttpRequest_StaticSeekCallback>
  FVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  iVar7 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FCurlHttpRequest_StaticSeekCallback ==
        (FThreadSafeStaticStat<_private:_static_int___cdecl_FCurlHttpRequest::StaticSeekCallback(void_*,__int64,int)_::_2_::FStat_STAT_FCurlHttpRequest_StaticSeekCallback>
         )0x0) {
      pFVar8 = ::FName::FName(&local_60,"STAT_FCurlHttpRequest_StaticSeekCallback");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_StaticSeekCallback,
                 *pFVar8,L"STAT_FCurlHttpRequest_StaticSeekCallback","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_FCurlHttpRequest_StaticSeekCallback;
  if (StatPtr_STAT_FCurlHttpRequest_StaticSeekCallback ==
      (FThreadSafeStaticStat<_private:_static_int___cdecl_FCurlHttpRequest::StaticSeekCallback(void_*,__int64,int)_::_2_::FStat_STAT_FCurlHttpRequest_StaticSeekCallback>
       )0x0) {
    pFVar8 = ::FName::FName(&local_58,"STAT_FCurlHttpRequest_StaticSeekCallback");
    FVar9 = (FThreadSafeStaticStat<_private:_static_int___cdecl_FCurlHttpRequest::StaticSeekCallback(void_*,__int64,int)_::_2_::FStat_STAT_FCurlHttpRequest_StaticSeekCallback>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FCurlHttpRequest_StaticSeekCallback,*pFVar8,
                         L"STAT_FCurlHttpRequest_StaticSeekCallback","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar11.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x19d);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_68.s.LowPart = FVar11.Value;
      local_68.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_14318516b;
    }
  }
  bVar4 = false;
  FVar12 = local_50;
LAB_14318516b:
  if ((param_1 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                         ,0x19e,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    iVar7 = (*pcVar2)();
    return iVar7;
  }
  if (((*(char *)((longlong)param_1 + 700) == '\0') || (param_3 != 0)) || (param_2 != 0)) {
    if (2 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    iVar7 = 2;
  }
  else {
    if (4 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    LOCK();
    *(undefined8 *)((longlong)param_1 + 0x340) = 0;
    UNLOCK();
    *(undefined1 *)((longlong)param_1 + 700) = 0;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_40.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_40);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return iVar7;
}

// StaticUploadCallback @ 1431853c0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __cdecl
FCurlHttpRequest::StaticUploadCallback(void *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticUploadCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticUploadCallback>
  FVar8;
  ulong64 uVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FName local_78;
  FStatMessage local_68;
  TStringView<wchar_t> local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FCurlHttpRequest_StaticUploadCallback ==
          (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticUploadCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticUploadCallback>
           )0x0) {
        pFVar7 = ::FName::FName(&local_res20,"STAT_FCurlHttpRequest_StaticUploadCallback");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FCurlHttpRequest_StaticUploadCallback,
                   *pFVar7,L"STAT_FCurlHttpRequest_StaticUploadCallback","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_FCurlHttpRequest_StaticUploadCallback;
  if (StatPtr_STAT_FCurlHttpRequest_StaticUploadCallback ==
      (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticUploadCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticUploadCallback>
       )0x0) {
    pFVar7 = ::FName::FName(&local_88,"STAT_FCurlHttpRequest_StaticUploadCallback");
    FVar8 = (FThreadSafeStaticStat<_private:_static_unsigned___int64___cdecl_FCurlHttpRequest::StaticUploadCallback(void_*,unsigned___int64,unsigned___int64,void_*)_::_2_::FStat_STAT_FCurlHttpRequest_StaticUploadCallback>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FCurlHttpRequest_StaticUploadCallback,*pFVar7,
                         L"STAT_FCurlHttpRequest_StaticUploadCallback","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.Value;
        local_res10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                   ,0x192);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar11.Value;
      local_res18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_143185546;
    }
  }
  bVar4 = false;
  FVar12 = local_78;
LAB_143185546:
  if (param_1 == (void *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                       ,0x193,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
  }
  if (param_4 == (void *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                       ,0x194,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return uVar9;
    }
  }
  uStack_80 = 0xf;
  local_88 = (FName)0x150a50cf8;
  local_58._12_4_ = uStack_7c;
  local_58.Size = 0xf;
  local_58.DataPtr = L"Upload callback";
  OnAnyActivityOccur(param_4,&local_58);
  uVar9 = (**(code **)(**(longlong **)((longlong)param_4 + 0x228) + 0x28))
                    (*(longlong **)((longlong)param_4 + 0x228),param_1,param_2 * param_3,
                     *(undefined8 *)((longlong)param_4 + 0x340));
  LOCK();
  *(longlong *)((longlong)param_4 + 0x340) = *(longlong *)((longlong)param_4 + 0x340) + uVar9;
  UNLOCK();
  LOCK();
  *(longlong *)((longlong)param_4 + 0x348) = *(longlong *)((longlong)param_4 + 0x348) + uVar9;
  UNLOCK();
  if (5 < (byte)LogHttp._0_1_) {
    (**(code **)(**(longlong **)((longlong)param_4 + 0x228) + 8))();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_68.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_68);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return uVar9;
}

// Tick @ 1431878f0

void __thiscall FCurlHttpRequest::Tick(FCurlHttpRequest *this,float param_1)

{
  if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
    CheckProgressDelegate(this);
    BroadcastNewlyReceivedHeaders(this);
    return;
  }
  return;
}

// TickThreadedRequest @ 1431883d0

void __thiscall FCurlHttpRequest::TickThreadedRequest(FCurlHttpRequest *this,float param_1)

{
  *(float *)&this->_padding_ = param_1 + *(float *)&this->_padding_;
  return;
}

// UploadCallback @ 14318b760

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FCurlHttpRequest::UploadCallback
          (FCurlHttpRequest *this,void *param_1,ulong64 param_2,ulong64 param_3)

{
  ulong64 uVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0xf;
  local_18.DataPtr = L"Upload callback";
  OnAnyActivityOccur(this,&local_18);
  uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x28))
                    ((longlong *)this->_padding_,param_1,param_2 * param_3,this->BytesSent);
  LOCK();
  this->BytesSent = (atomic<__int64>)((longlong)this->BytesSent + uVar1);
  UNLOCK();
  LOCK();
  this->TotalBytesSent = (atomic<__int64>)((longlong)this->TotalBytesSent + uVar1);
  UNLOCK();
  if (5 < (byte)LogHttp._0_1_) {
    (**(code **)(*(longlong *)this->_padding_ + 8))();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  return uVar1;
}

