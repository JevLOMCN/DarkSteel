// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 44

// ~FClosedHttpRequest @ 143150050

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::~FClosedHttpRequest(FClosedHttpRequest *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  
  this->_padding_ = (longlong)&___7FClosedHttpRequest_FTransactionallySafeHttpRequest__6B_;
  uVar8 = (ulonglong)(this->Payload).TypeIndex;
  if (3 < uVar8) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FTransactionallySafeHttpRequest::FClosedHttpRequest::NoPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::RawPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::FilePayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar8])(&this->Payload);
  pFVar3 = (this->EmptyString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->EmptyContent).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>_>::
  ~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>_>
            (&this->StatusCodeReceivedDelegate);
  TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>_>
  ::
  ~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>_>
            (&this->HeaderReceivedDelegate);
  TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>_>
  ::
  ~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>_>
            (&this->WillRetryDelegate);
  TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>_>
  ::
  ~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>_>
            (&this->ProgressDelegate);
  TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>_>
  ::
  ~TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>_>
            (&this->CompleteDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResponseBodyReceiveStream).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->Headers).field_0x48 = 0;
  pvVar4 = *(void **)&(this->Headers).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Headers);
  *(undefined4 *)&(this->Options).field_0x48 = 0;
  pvVar4 = *(void **)&(this->Options).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Options);
  pFVar3 = (this->Verb).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Url).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// AppendToHeader @ 143155150

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::AppendToHeader
          (FClosedHttpRequest *this,FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1595355800983830652>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\TransactionallySafeHttpRequest.cpp"
                     ,0x7c,"!\"Implement AddToHeader() if it becomes necessary.\"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CancelRequest @ 143157130

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::CancelRequest(FClosedHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"CancelRequest() shouldn\'t be called on a FClosedHttpRequest.\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\TransactionallySafeHttpRequest.cpp"
                     ,0x118,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ClearTimeout @ 143158390

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::ClearTimeout(FClosedHttpRequest *this)

{
  if ((this->TimeoutSecs).bIsSet != false) {
    (this->TimeoutSecs).bIsSet = false;
  }
  return;
}

// GetAllHeaders @ 143160d70

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetAllHeaders
          (FClosedHttpRequest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1595355800983830657>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\TransactionallySafeHttpRequest.cpp"
                     ,0x81,"!\"Implement GetAllHeaders() if it becomes necessary.\"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetContent @ 1431619f0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetContent(FClosedHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Payload).TypeIndex;
  if (3 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::NoPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::RawPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::FilePayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) != '\0') {
    if ((this->Payload).TypeIndex != '\x01') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar3;
      }
    }
    return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->Payload;
  }
  return &this->EmptyContent;
}

// GetContentLength @ 143161ed0

ulong64 __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetContentLength(FClosedHttpRequest *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(this->Payload).TypeIndex;
  if (3 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  bVar1 = (this->Payload).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::NoPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::RawPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::FilePayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) != '\0') {
    if (bVar1 != 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    return (longlong)(int)(this->Payload)._padding_;
  }
  if (3 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::NoPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::RawPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::FilePayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
    if ((this->Payload).TypeIndex != '\x03') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000143161fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(this->Payload)._padding_ + 0x30))();
    return uVar4;
  }
  return 0;
}

// GetContentType @ 143162110

FString * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetContentType
          (FClosedHttpRequest *this,FString *__return_storage_ptr__)

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

// GetDelegateThreadPolicy @ 1431625a0

EHttpRequestDelegateThreadPolicy __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetDelegateThreadPolicy
          (FClosedHttpRequest *this)

{
  return this->ThreadPolicy;
}

// GetEffectiveURL @ 143162650

FString * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetEffectiveURL(FClosedHttpRequest *this)

{
  return &this->EmptyString;
}

// GetElapsedTime @ 143162710

float __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetElapsedTime(FClosedHttpRequest *this)

{
  return 0.0;
}

// GetFailureReason @ 1431628a0

EHttpFailureReason __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetFailureReason(FClosedHttpRequest *this)

{
  return None;
}

// GetHeader @ 143162a10

FString * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetHeader
          (FClosedHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  void *_Src;
  TTuple<FString,FString> *pTVar1;
  undefined8 *puVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  FString local_28;
  FString local_18;
  
  pTVar1 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&this->Headers,param_1);
  puVar2 = (undefined8 *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FString,FString> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 == (undefined8 *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::FString::FString(__return_storage_ptr__,&local_18);
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    _Src = (void *)*puVar2;
    local_28.Data.ArrayNum = *(int *)(puVar2 + 1);
    lVar4 = (longlong)local_28.Data.ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return __return_storage_ptr__;
}

// GetOption @ 143164470

FString * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetOption
          (FClosedHttpRequest *this,FString *__return_storage_ptr__,FName param_1)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  ForAnyElementType FVar2;
  longlong lVar3;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  local_res18[0] = param_1;
  pFVar1 = TMapBase<FName_const_,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>_>
           ::Find((TMapBase<FName_const_,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>_>
                   *)&this->Options,local_res18);
  if (pFVar1 == (FString *)0x0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::FString(__return_storage_ptr__,&local_28);
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    _Src = (pFVar1->Data).AllocatorInstance.Data;
    local_38.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    lVar3 = (longlong)local_38.Data.ArrayNum;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_38);
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

// GetPriority @ 1431646f0

EHttpRequestPriority __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetPriority(FClosedHttpRequest *this)

{
  return this->Priority;
}

// GetResponse @ 1431647b0

TSharedPtr<IHttpResponse,1> * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetResponse
          (FClosedHttpRequest *this,TSharedPtr<IHttpResponse,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IHttpResponse *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetStatus @ 143164be0

Type __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetStatus(FClosedHttpRequest *this)

{
  return NotStarted;
}

// GetTimeout @ 143164d10

TOptional<float> __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetTimeout(FClosedHttpRequest *this)

{
  bool bVar1;
  TOptional<float> in_RDX;
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  bVar1 = (this->TimeoutSecs).bIsSet;
  *(bool *)((longlong)in_RDX + 4) = bVar1;
  if (bVar1 != false) {
    *(float *)in_RDX = (this->TimeoutSecs).TypedValue;
  }
  return in_RDX;
}

// GetURL @ 143164f70

FString * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetURL(FClosedHttpRequest *this)

{
  return &this->Url;
}

// GetURLParameter @ 143165040

FString * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetURLParameter
          (FClosedHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  TOptional<FString>_u_0 *pTVar3;
  TOptional<FString>_u_0 local_38;
  TOptional<FString>_u_0 local_28;
  TStringView<wchar_t> local_18;
  
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(this->Url).Data.AllocatorInstance.Data;
  local_28.TypedValue.Data.ArrayNum = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.TypedValue.Data.ArrayNum = 0;
  }
  iVar1 = (this->Url).Data.ArrayNum;
  local_18._12_4_ = local_28.TypedValue.Data.ArrayMax;
  local_18.Size = local_28.TypedValue.Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_38.TypedValue.Data.ArrayNum = iVar2;
  local_18.DataPtr = (wchar_t *)local_28.TypedValue.Data.AllocatorInstance.Data;
  FGenericPlatformHttp::GetUrlParameter
            ((TOptional<FString> *)&local_28.TypedValue,(TStringView<wchar_t> *)&local_38.TypedValue
             ,&local_18);
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  pTVar3 = &local_38;
  if (local_28.TypedValue.Data.ArrayMax != -1) {
    pTVar3 = &local_28;
  }
  local_38._8_8_ = 0;
  ::FString::FString(__return_storage_ptr__,&pTVar3->TypedValue);
  if (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetVerb @ 1431663e0

FString * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::GetVerb
          (FClosedHttpRequest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Verb);
  return __return_storage_ptr__;
}

// OnHeaderReceived @ 143171480

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
* __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::OnHeaderReceived(FClosedHttpRequest *this)

{
  TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>_>
  *lpCriticalSection;
  
  lpCriticalSection = &this->HeaderReceivedDelegate;
  if ((this->HeaderReceivedDelegate).bIsSet == false) {
    *(undefined8 *)&lpCriticalSection->TypedValue = 0;
    *(undefined8 *)&(this->HeaderReceivedDelegate).TypedValue.field_0x8 = 0;
    *(undefined8 *)&(this->HeaderReceivedDelegate).TypedValue.field_0x10 = 0;
    *(undefined8 *)&(this->HeaderReceivedDelegate).TypedValue.field_0x18 = 0;
    *(undefined8 *)&(this->HeaderReceivedDelegate).TypedValue.field_0x20 = 0;
    *(undefined8 *)&(this->HeaderReceivedDelegate).TypedValue.field_0x28 = 0;
    *(undefined8 *)&(this->HeaderReceivedDelegate).TypedValue.field_0x30 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    *(undefined8 *)&(this->HeaderReceivedDelegate).TypedValue.field_0x28 = 0;
    *(undefined4 *)&(this->HeaderReceivedDelegate).TypedValue.field_0x30 = 0;
    (this->HeaderReceivedDelegate).bIsSet = true;
  }
  return &lpCriticalSection->TypedValue;
}

// OnProcessRequestComplete @ 143171540

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
* __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::OnProcessRequestComplete
          (FClosedHttpRequest *this)

{
  TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>_>
  *lpCriticalSection;
  
  lpCriticalSection = &this->CompleteDelegate;
  if ((this->CompleteDelegate).bIsSet == false) {
    *(undefined8 *)&lpCriticalSection->TypedValue = 0;
    *(undefined8 *)&(this->CompleteDelegate).TypedValue.field_0x8 = 0;
    *(undefined8 *)&(this->CompleteDelegate).TypedValue.field_0x10 = 0;
    *(undefined8 *)&(this->CompleteDelegate).TypedValue.field_0x18 = 0;
    *(undefined8 *)&(this->CompleteDelegate).TypedValue.field_0x20 = 0;
    *(undefined8 *)&(this->CompleteDelegate).TypedValue.field_0x28 = 0;
    *(undefined8 *)&(this->CompleteDelegate).TypedValue.field_0x30 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    *(undefined8 *)&(this->CompleteDelegate).TypedValue.field_0x28 = 0;
    *(undefined4 *)&(this->CompleteDelegate).TypedValue.field_0x30 = 0;
    (this->CompleteDelegate).bIsSet = true;
  }
  return &lpCriticalSection->TypedValue;
}

// OnRequestProgress64 @ 143171600

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
* __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::OnRequestProgress64(FClosedHttpRequest *this)

{
  TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>_>
  *lpCriticalSection;
  
  lpCriticalSection = &this->ProgressDelegate;
  if ((this->ProgressDelegate).bIsSet == false) {
    *(undefined8 *)&lpCriticalSection->TypedValue = 0;
    *(undefined8 *)&(this->ProgressDelegate).TypedValue.field_0x8 = 0;
    *(undefined8 *)&(this->ProgressDelegate).TypedValue.field_0x10 = 0;
    *(undefined8 *)&(this->ProgressDelegate).TypedValue.field_0x18 = 0;
    *(undefined8 *)&(this->ProgressDelegate).TypedValue.field_0x20 = 0;
    *(undefined8 *)&(this->ProgressDelegate).TypedValue.field_0x28 = 0;
    *(undefined8 *)&(this->ProgressDelegate).TypedValue.field_0x30 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    *(undefined8 *)&(this->ProgressDelegate).TypedValue.field_0x28 = 0;
    *(undefined4 *)&(this->ProgressDelegate).TypedValue.field_0x30 = 0;
    (this->ProgressDelegate).bIsSet = true;
  }
  return &lpCriticalSection->TypedValue;
}

// OnRequestWillRetry @ 1431716c0

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
* __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::OnRequestWillRetry(FClosedHttpRequest *this)

{
  TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>_>
  *lpCriticalSection;
  
  lpCriticalSection = &this->WillRetryDelegate;
  if ((this->WillRetryDelegate).bIsSet == false) {
    *(undefined8 *)&lpCriticalSection->TypedValue = 0;
    *(undefined8 *)&(this->WillRetryDelegate).TypedValue.field_0x8 = 0;
    *(undefined8 *)&(this->WillRetryDelegate).TypedValue.field_0x10 = 0;
    *(undefined8 *)&(this->WillRetryDelegate).TypedValue.field_0x18 = 0;
    *(undefined8 *)&(this->WillRetryDelegate).TypedValue.field_0x20 = 0;
    *(undefined8 *)&(this->WillRetryDelegate).TypedValue.field_0x28 = 0;
    *(undefined8 *)&(this->WillRetryDelegate).TypedValue.field_0x30 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    *(undefined8 *)&(this->WillRetryDelegate).TypedValue.field_0x28 = 0;
    *(undefined4 *)&(this->WillRetryDelegate).TypedValue.field_0x30 = 0;
    (this->WillRetryDelegate).bIsSet = true;
  }
  return &lpCriticalSection->TypedValue;
}

// OnStatusCodeReceived @ 143171780

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::OnStatusCodeReceived(FClosedHttpRequest *this)

{
  TOptional<TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>_>
  *lpCriticalSection;
  
  lpCriticalSection = &this->StatusCodeReceivedDelegate;
  if ((this->StatusCodeReceivedDelegate).bIsSet == false) {
    *(undefined8 *)&lpCriticalSection->TypedValue = 0;
    *(undefined8 *)&(this->StatusCodeReceivedDelegate).TypedValue.field_0x8 = 0;
    *(undefined8 *)&(this->StatusCodeReceivedDelegate).TypedValue.field_0x10 = 0;
    *(undefined8 *)&(this->StatusCodeReceivedDelegate).TypedValue.field_0x18 = 0;
    *(undefined8 *)&(this->StatusCodeReceivedDelegate).TypedValue.field_0x20 = 0;
    *(undefined8 *)&(this->StatusCodeReceivedDelegate).TypedValue.field_0x28 = 0;
    *(undefined8 *)&(this->StatusCodeReceivedDelegate).TypedValue.field_0x30 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    *(undefined8 *)&(this->StatusCodeReceivedDelegate).TypedValue.field_0x28 = 0;
    *(undefined4 *)&(this->StatusCodeReceivedDelegate).TypedValue.field_0x30 = 0;
    (this->StatusCodeReceivedDelegate).bIsSet = true;
  }
  return &lpCriticalSection->TypedValue;
}

// ProcessRequest @ 1431740e0

bool __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::ProcessRequest(FClosedHttpRequest *this)

{
  this->bProcessRequest = true;
  return true;
}

// ProcessRequestUntilComplete @ 143175100

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::ProcessRequestUntilComplete
          (FClosedHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"ProcessRequestUntilComplete shouldn\'t be called on a FClosedHttpRequest.\""
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\TransactionallySafeHttpRequest.cpp"
                     ,0x120,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// ResetTimeoutStatus @ 1431799c0

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::ResetTimeoutStatus(FClosedHttpRequest *this)

{
  return;
}

// SetActivityTimeout @ 14317cb20

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetActivityTimeout
          (FClosedHttpRequest *this,float param_1)

{
  undefined1 local_res10 [24];
  
  if ((TOptional<float> *)local_res10 != &this->ActivityTimeoutSecs) {
    (this->ActivityTimeoutSecs).TypedValue = param_1;
    (this->ActivityTimeoutSecs).bIsSet = true;
  }
  return;
}

// SetContent @ 14317cc00

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetContent
          (FClosedHttpRequest *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  iVar2 = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  uVar6 = (ulonglong)(this->Payload).TypeIndex;
  if (3 < uVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FTransactionallySafeHttpRequest::FClosedHttpRequest::NoPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::RawPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::FilePayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar6])(&this->Payload);
  (this->Payload)._padding_ = (longlong)pFVar3;
  *(int *)&(this->Payload)._padding_ = iVar1;
  *(int *)((longlong)&(this->Payload)._padding_ + 4) = iVar2;
  (this->Payload).TypeIndex = '\x01';
  return;
}

// SetContent @ 14317ccb0

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetContent
          (FClosedHttpRequest *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  size_t _Size;
  ulonglong uVar3;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = param_1->ArrayNum;
  _Size = (size_t)local_10;
  _Src = (param_1->AllocatorInstance).Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,_Size);
  }
  uVar3 = (ulonglong)(this->Payload).TypeIndex;
  if (3 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FTransactionallySafeHttpRequest::FClosedHttpRequest::NoPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::RawPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::FilePayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(&this->Payload);
  (this->Payload)._padding_ = (longlong)local_18.Data;
  *(int *)&(this->Payload)._padding_ = local_10;
  *(int *)((longlong)&(this->Payload)._padding_ + 4) = local_c;
  (this->Payload).TypeIndex = '\x01';
  return;
}

// SetContentAsStreamedFile @ 14317d110

bool __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetContentAsStreamedFile
          (FClosedHttpRequest *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = (param_1->Data).ArrayNum;
  lVar4 = (longlong)local_10;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar4 * 2);
  }
  uVar5 = (ulonglong)(this->Payload).TypeIndex;
  if (3 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FTransactionallySafeHttpRequest::FClosedHttpRequest::NoPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::RawPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::FilePayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&this->Payload);
  (this->Payload)._padding_ = (longlong)local_18.Data;
  *(int *)&(this->Payload)._padding_ = local_10;
  *(int *)((longlong)&(this->Payload)._padding_ + 4) = local_c;
  (this->Payload).TypeIndex = '\x02';
  return true;
}

// SetContentAsString @ 14317d5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetContentAsString
          (FClosedHttpRequest *this,FString *param_1)

{
  uint uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  ulonglong uVar8;
  wchar_t *_Str;
  uint uVar9;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_e8;
  int local_e0 [2];
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  uint local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_58.Data = (FScriptContainerElement *)0x0;
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_50 = (FScriptContainerElement *)0x0;
      local_48 = 0;
      goto LAB_14317d67a;
    }
  }
  sVar7 = wcslen(_Str);
  local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar7);
  uVar1 = local_48 + 1;
  uVar9 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar9 = 0;
      goto LAB_14317d645;
    }
  }
  else {
LAB_14317d645:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,1);
  }
  local_50 = local_d8;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  UE::Core::Private::Convert((uchar *)local_50,uVar1,_Str,(int)sVar7 + 1);
LAB_14317d67a:
  uVar1 = local_48;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  iVar6 = 0;
  if ((int)local_48 < 1) {
    if ((int)local_48 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_48);
    }
  }
  else {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_48,&local_e8,local_e0,local_e0 + 1);
    memset(local_e8.Data + iVar6,0,(longlong)(int)uVar1);
    iVar6 = local_e0[0];
  }
  memcpy(local_e8.Data,local_50,(longlong)iVar6);
  FVar3.Data = local_e8.Data;
  iVar6 = local_e0[0];
  iVar4 = local_e0[1];
  local_e8.Data = (FScriptContainerElement *)0x0;
  uVar8 = (ulonglong)(this->Payload).TypeIndex;
  local_e0[0] = 0;
  local_e0[1] = 0;
  if ((3 < uVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FTransactionallySafeHttpRequest::FClosedHttpRequest::NoPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::RawPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::FilePayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar8])(&this->Payload);
  (this->Payload)._padding_ = (longlong)FVar3.Data;
  *(int *)&(this->Payload)._padding_ = iVar6;
  *(int *)((longlong)&(this->Payload)._padding_ + 4) = iVar4;
  (this->Payload).TypeIndex = '\x01';
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// SetContentFromStream @ 14317da20

bool __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetContentFromStream
          (FClosedHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = (ulonglong)(this->Payload).TypeIndex;
  if ((3 < uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FTransactionallySafeHttpRequest::FClosedHttpRequest::NoPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::RawPayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::FilePayload,FTransactionallySafeHttpRequest::FClosedHttpRequest::StreamPayload>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar6])(&this->Payload);
  (this->Payload)._padding_ = (longlong)pFVar2;
  (this->Payload)._padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Payload).TypeIndex = '\x03';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// SetDelegateThreadPolicy @ 14317deb0

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetDelegateThreadPolicy
          (FClosedHttpRequest *this,EHttpRequestDelegateThreadPolicy param_1)

{
  this->ThreadPolicy = param_1;
  return;
}

// SetHeader @ 14317e060

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetHeader
          (FClosedHttpRequest *this,FString *param_1,FString *param_2)

{
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString_const_&,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&this->Headers,param_1,param_2);
  return;
}

// SetOption @ 14317eb00

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetOption
          (FClosedHttpRequest *this,FName param_1,FString *param_2)

{
  TPairInitializer<FName_const_&,FString_const_&> local_res8 [2];
  FString **local_18;
  FString *local_10;
  
  local_18 = &local_res8[0].Value;
  local_res8[0].Value = (FString *)param_1;
  local_10 = param_2;
  TSet<TTuple<FName_const_,FString>,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
            ((TSet<TTuple<FName_const_,FString>,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>,FDefaultSetAllocator>
              *)&this->Options,local_res8,(bool *)&local_18);
  return;
}

// SetPriority @ 14317ee50

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetPriority
          (FClosedHttpRequest *this,EHttpRequestPriority param_1)

{
  this->Priority = param_1;
  return;
}

// SetResponseBodyReceiveStream @ 14317f050

bool __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetResponseBodyReceiveStream
          (FClosedHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  FArchive *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ResponseBodyReceiveStream != (TSharedPtr<FArchive,1> *)&local_18) {
    (this->ResponseBodyReceiveStream).Object = local_18;
    local_18 = (FArchive *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ResponseBodyReceiveStream).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// SetTimeout @ 14317f560

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetTimeout
          (FClosedHttpRequest *this,float param_1)

{
  undefined1 local_res10 [24];
  
  if ((TOptional<float> *)local_res10 != &this->TimeoutSecs) {
    (this->TimeoutSecs).TypedValue = param_1;
    (this->TimeoutSecs).bIsSet = true;
  }
  return;
}

// SetURL @ 14317f9e0

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetURL
          (FClosedHttpRequest *this,FString *param_1)

{
  ::FString::operator=(&this->Url,param_1);
  return;
}

// SetVerb @ 14317fcc0

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::SetVerb
          (FClosedHttpRequest *this,FString *param_1)

{
  ::FString::operator=(&this->Verb,param_1);
  return;
}

// Tick @ 1431878b0

void __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::Tick(FClosedHttpRequest *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1595355800983830772>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\TransactionallySafeHttpRequest.cpp"
                     ,0xf4,"!\"Tick() shouldn\'t be called on a FClosedHttpRequest.\"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

