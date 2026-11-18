// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 40

// ~FNullHttpRequest @ 143150d20

void __thiscall FNullHttpRequest::~FNullHttpRequest(FNullHttpRequest *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FNullHttpRequest__6B_;
  *(undefined4 *)&(this->Options).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Options).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Options);
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
  pFVar2 = (this->Payload).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Verb).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EffectiveUrl).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Url).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FHttpRequestImpl::~FHttpRequestImpl((FHttpRequestImpl *)this);
  return;
}

// AppendToHeader @ 1431552f0

void __thiscall
FNullHttpRequest::AppendToHeader(FNullHttpRequest *this,FString *param_1,FString *param_2)

{
  int iVar1;
  TTuple<FString,FString> *pTVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = 0;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = iVar4;
  }
  if (0 < iVar5) {
    iVar1 = (param_2->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = iVar4;
    }
    if (0 < iVar5) {
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
      if (pFVar3 != (FString *)0x0) {
        iVar1 = (pFVar3->Data).ArrayNum;
        iVar5 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar5 = iVar4;
        }
        if (0 < iVar5) {
          ::FString::ConcatFC(&local_18,pFVar3,L", ");
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
          local_28.Data.ArrayMax = local_18.Data.ArrayMax;
          local_28.Data.ArrayNum = local_18.Data.ArrayNum;
        }
      }
      iVar1 = (param_2->Data).ArrayNum;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = iVar4;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar5);
      (**(code **)(this->_padding_ + 0xb0))(this,param_1,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CancelRequest @ 143157930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNullHttpRequest::CancelRequest(FNullHttpRequest *this)

{
  FHttpManager *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FHttpModule *pFVar4;
  TSharedRef<IHttpRequest,1> *pTVar5;
  undefined ***pppuVar6;
  undefined1 auStack_78 [32];
  TSharedRef<IHttpRequest,1> local_58;
  code *local_48 [2];
  undefined **local_38;
  IHttpRequest *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar3 = IsInGameThread();
  if (bVar3) {
    FinishedRequest(this);
    return;
  }
  pFVar4 = FHttpModule::Get();
  if ((pFVar4->HttpManager == (FHttpManager *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                         ,0x50,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = pFVar4->HttpManager;
  pTVar5 = TSharedFromThis<IHttpRequest,1>::AsShared
                     ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_58);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  local_30 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNullHttpRequest::CancelRequest'::`5'::<lambda_1>,0,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNullHttpRequest::CancelRequest'::__l5::<lambda_1>,void>::Call;
  local_28 = pTVar1;
  FHttpManager::AddGameThreadTask(this_00,(TFunction<void___cdecl(void)> *)local_48,0.0);
  if (local_48[0] != (code *)0x0) {
    pppuVar6 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar6 = local_20;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// ClearTimeout @ 143158400

void __thiscall FNullHttpRequest::ClearTimeout(FNullHttpRequest *this)

{
  if ((this->TimeoutSecs).bIsSet != false) {
    (this->TimeoutSecs).bIsSet = false;
  }
  return;
}

// FinishedRequest @ 14315f890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNullHttpRequest::FinishedRequest(FNullHttpRequest *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IHttpRequest *pIVar2;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *this_00;
  TSharedRef<IHttpRequest,1> *pTVar3;
  TSharedRef<IHttpRequest,1> local_38;
  TSharedPtr<IHttpResponse,1> local_28 [2];
  
  this->CompletionStatus = Failed;
  this->FailureReason = Other;
  if (4 < (byte)LogHttp._0_1_) {
    (**(code **)this->_padding_)();
    (**(code **)(this->_padding_ + 0x58))(this,&local_38);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    if (local_38.Object != (IHttpRequest *)0x0) {
      FMemory::Free(local_38.Object);
    }
  }
  this_00 = (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *)(**(code **)(this->_padding_ + 0xf0))(this);
  local_28[0].Object = (IHttpResponse *)0x0;
  local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar3 = TSharedFromThis<IHttpRequest,1>::AsShared
                     ((TSharedFromThis<IHttpRequest,1> *)&this->_padding_,&local_38);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pIVar2 = pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pIVar2;
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  ::ExecuteIfBound(this_00,(TSharedPtr<IHttpRequest,1> *)&local_38,local_28,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// GetAllHeaders @ 143161500

/* WARNING: Removing unreachable block (ram,0x000143161704) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FNullHttpRequest::GetAllHeaders
          (FNullHttpRequest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FString *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint *puVar10;
  FString local_a8;
  FString local_98;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  local_88 = &this->Headers;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_78 = &(this->Headers).field_0x10;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar6 = *(int *)&(this->Headers).field_0x28;
  iStack_80 = 0;
  uStack_7c = 1;
  local_68 = iStack_80;
  iStack_6c = 0;
  if (iVar6 != 0) {
    puVar10 = *(uint **)&(this->Headers).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)local_78;
    }
    uVar3 = *puVar10;
    local_68 = 0;
    iStack_80 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_1431615c0;
      uVar3 = puVar10[lVar8 + 1];
    }
    uStack_7c = -uVar3 & uVar3;
    uVar2 = (ulonglong)uStack_7c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_6c = local_68 + -1 + (int)lVar8;
    if (iVar6 < iStack_6c) {
      iStack_6c = iVar6;
    }
  }
LAB_1431615c0:
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar6) {
    do {
      pFVar1 = (FString *)(*(longlong *)local_58 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      ::FString::ConcatFC(&local_98,pFVar1,L": ");
      ::FString::ConcatFF(&local_a8,&local_98,pFVar1 + 1);
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_a8.Data.AllocatorInstance.Data;
      *(int *)(pFVar9 + 8) = local_a8.Data.ArrayNum;
      *(int *)(pFVar9 + 0xc) = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetContent @ 143161c20

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FNullHttpRequest::GetContent(FNullHttpRequest *this)

{
  return &this->Payload;
}

// GetContentLength @ 143162070

ulong64 __thiscall FNullHttpRequest::GetContentLength(FNullHttpRequest *this)

{
  return (longlong)(this->Payload).ArrayNum;
}

// GetContentType @ 1431622c0

FString * __thiscall
FNullHttpRequest::GetContentType(FNullHttpRequest *this,FString *__return_storage_ptr__)

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

// GetDelegateThreadPolicy @ 1431625f0

EHttpRequestDelegateThreadPolicy __thiscall
FNullHttpRequest::GetDelegateThreadPolicy(FNullHttpRequest *this)

{
  return CompleteOnGameThread;
}

// GetEffectiveURL @ 1431626b0

FString * __thiscall FNullHttpRequest::GetEffectiveURL(FNullHttpRequest *this)

{
  return &this->EffectiveUrl;
}

// GetElapsedTime @ 143162760

float __thiscall FNullHttpRequest::GetElapsedTime(FNullHttpRequest *this)

{
  return this->ElapsedTime;
}

// GetFailureReason @ 143162900

EHttpFailureReason __thiscall FNullHttpRequest::GetFailureReason(FNullHttpRequest *this)

{
  return this->FailureReason;
}

// GetHeader @ 143162c90

FString * __thiscall
FNullHttpRequest::GetHeader(FNullHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  TTuple<FString,FString> *pTVar1;
  FString *pFVar2;
  
  pTVar1 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&this->Headers,param_1);
  pFVar2 = (FString *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FString,FString> *)0x0) {
    pFVar2 = (FString *)0x0;
  }
  if (pFVar2 != (FString *)0x0) {
    ::FString::FString(__return_storage_ptr__,pFVar2);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOption @ 143164620

FString * __thiscall
FNullHttpRequest::GetOption(FNullHttpRequest *this,FString *__return_storage_ptr__,FName param_1)

{
  FString *pFVar1;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  pFVar1 = TMapBase<FName_const_,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>_>
           ::Find((TMapBase<FName_const_,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,FString,0>_>
                   *)&this->Options,local_res18);
  if (pFVar1 != (FString *)0x0) {
    ::FString::FString(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetPriority @ 143164740

EHttpRequestPriority __thiscall FNullHttpRequest::GetPriority(FNullHttpRequest *this)

{
  return Normal;
}

// GetResponse @ 143164850

TSharedPtr<IHttpResponse,1> * __thiscall
FNullHttpRequest::GetResponse
          (FNullHttpRequest *this,TSharedPtr<IHttpResponse,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IHttpResponse *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetStatus @ 143164c40

Type __thiscall FNullHttpRequest::GetStatus(FNullHttpRequest *this)

{
  return this->CompletionStatus;
}

// GetTimeout @ 143164db0

TOptional<float> __thiscall FNullHttpRequest::GetTimeout(FNullHttpRequest *this)

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

// GetURL @ 143164fd0

FString * __thiscall FNullHttpRequest::GetURL(FNullHttpRequest *this)

{
  return &this->Url;
}

// GetURLParameter @ 143165330

FString * __thiscall
FNullHttpRequest::GetURLParameter
          (FNullHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetVerb @ 1431664a0

FString * __thiscall
FNullHttpRequest::GetVerb(FNullHttpRequest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Verb);
  return __return_storage_ptr__;
}

// ProcessRequest @ 143174ce0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FNullHttpRequest::ProcessRequest(FNullHttpRequest *this)

{
  void *local_18 [2];
  
  this->ElapsedTime = 0.0;
  this->CompletionStatus = Processing;
  if (4 < (byte)LogHttp._0_1_) {
    (**(code **)this->_padding_)();
    (**(code **)(this->_padding_ + 0x58))(this,local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return true;
}

// ProcessRequestUntilComplete @ 143175300

void __thiscall FNullHttpRequest::ProcessRequestUntilComplete(FNullHttpRequest *this)

{
  return;
}

// ResetTimeoutStatus @ 143179a30

void __thiscall FNullHttpRequest::ResetTimeoutStatus(FNullHttpRequest *this)

{
  return;
}

// SetActivityTimeout @ 14317cb90

void __thiscall FNullHttpRequest::SetActivityTimeout(FNullHttpRequest *this,float param_1)

{
  return;
}

// SetContent @ 14317cf60

void __thiscall
FNullHttpRequest::SetContent
          (FNullHttpRequest *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = &this->Payload;
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Payload).ArrayNum = param_1->ArrayNum;
    (this->Payload).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return;
}

// SetContent @ 14317cfc0

void __thiscall
FNullHttpRequest::SetContent
          (FNullHttpRequest *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar2 = &this->Payload;
  if (pTVar2 != param_1) {
    iVar3 = (this->Payload).ArrayMax;
    piVar1 = &(this->Payload).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->Payload).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
    if (iVar4 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4);
    }
  }
  return;
}

// SetContentAsStreamedFile @ 14317d3b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FNullHttpRequest::SetContentAsStreamedFile(FNullHttpRequest *this,FString *param_1)

{
  if (2 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  return false;
}

// SetContentAsString @ 14317d920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FNullHttpRequest::SetContentAsString(FNullHttpRequest *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  pwVar4 = L"";
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar3,iVar2);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->Payload,iVar2,Default);
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  UE::Core::Private::Convert
            ((uchar *)(this->Payload).AllocatorInstance.Data,(this->Payload).ArrayNum,pwVar4,iVar2);
  return;
}

// SetContentFromStream @ 14317dcb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNullHttpRequest::SetContentFromStream(FNullHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  if (2 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// SetDelegateThreadPolicy @ 14317df00

void __thiscall
FNullHttpRequest::SetDelegateThreadPolicy
          (FNullHttpRequest *this,EHttpRequestDelegateThreadPolicy param_1)

{
  return;
}

// SetHeader @ 14317e0f0

void __thiscall
FNullHttpRequest::SetHeader(FNullHttpRequest *this,FString *param_1,FString *param_2)

{
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString_const_&,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&this->Headers,param_1,param_2);
  return;
}

// SetOption @ 14317ec70

void __thiscall FNullHttpRequest::SetOption(FNullHttpRequest *this,FName param_1,FString *param_2)

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

// SetPriority @ 14317eea0

void __thiscall FNullHttpRequest::SetPriority(FNullHttpRequest *this,EHttpRequestPriority param_1)

{
  return;
}

// SetResponseBodyReceiveStream @ 14317f210

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNullHttpRequest::SetResponseBodyReceiveStream
          (FNullHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  if (2 < (byte)LogHttp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// SetTimeout @ 14317f5d0

void __thiscall FNullHttpRequest::SetTimeout(FNullHttpRequest *this,float param_1)

{
  undefined1 local_res10 [24];
  
  if ((TOptional<float> *)local_res10 != &this->TimeoutSecs) {
    (this->TimeoutSecs).TypedValue = param_1;
    (this->TimeoutSecs).bIsSet = true;
  }
  return;
}

// SetURL @ 14317fa70

void __thiscall FNullHttpRequest::SetURL(FNullHttpRequest *this,FString *param_1)

{
  ::FString::operator=(&this->Url,param_1);
  return;
}

// SetVerb @ 14317fde0

void __thiscall FNullHttpRequest::SetVerb(FNullHttpRequest *this,FString *param_1)

{
  ::FString::operator=(&this->Verb,param_1);
  return;
}

// Tick @ 1431882d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNullHttpRequest::Tick(FNullHttpRequest *this,float param_1)

{
  float fVar1;
  float *pfVar2;
  FHttpModule *pFVar3;
  float *pfVar4;
  undefined1 local_res8 [8];
  
  if (this->CompletionStatus == Processing) {
    this->ElapsedTime = param_1 + this->ElapsedTime;
    pfVar2 = (float *)(**(code **)(this->_padding_ + 0xe0))(this,local_res8);
    pFVar3 = FHttpModule::Get();
    pfVar4 = &pFVar3->HttpTotalTimeout;
    if (*(char *)(pfVar2 + 1) != '\0') {
      pfVar4 = pfVar2;
    }
    fVar1 = *pfVar4;
    if ((0.0 < fVar1) && (fVar1 < this->ElapsedTime || fVar1 == this->ElapsedTime)) {
      if (2 < (byte)LogHttp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
      }
      FinishedRequest(this);
      return;
    }
  }
  return;
}

