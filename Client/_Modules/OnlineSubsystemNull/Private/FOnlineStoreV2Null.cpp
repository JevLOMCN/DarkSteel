// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 14

// FOnlineStoreV2Null @ 14ed11610

FOnlineStoreV2Null * __thiscall
FOnlineStoreV2Null::FOnlineStoreV2Null(FOnlineStoreV2Null *this,FOnlineSubsystemNull *param_1)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->NullSubsystem = param_1;
  *(undefined8 *)&this->AvailableOffers = 0;
  *(undefined8 *)&(this->AvailableOffers).field_0x8 = 0;
  *(undefined8 *)&(this->AvailableOffers).field_0x20 = 0;
  this->_padding_ = 2;
  this->_padding_ = (longlong)&___7FOnlineStoreV2Null__6B_;
  *(undefined4 *)&(this->AvailableOffers).field_0x28 = 0;
  *(undefined4 *)&(this->AvailableOffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableOffers).field_0x34 = 0;
  *(undefined4 *)&(this->AvailableOffers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AvailableOffers).field_0x40 = 0;
  *(undefined4 *)&(this->AvailableOffers).field_0x48 = 0;
  ::FString::FString(&local_18,L"Super cool Item1");
  ::FString::FString(&local_28,L"Cool Item1");
  ::FString::FString(&local_38,L"Item1_Id");
  CreateFakeOffer(this,&local_38,&local_28,&local_18,3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Very nice Item2");
  ::FString::FString(&local_28,L"Nice Item2");
  ::FString::FString(&local_18,L"Item2_Id");
  CreateFakeOffer(this,&local_18,&local_28,&local_38,0x28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Faboulous Item3");
  ::FString::FString(&local_28,L"Fab Item3");
  ::FString::FString(&local_18,L"Item3_Id");
  CreateFakeOffer(this,&local_18,&local_28,&local_38,500);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Expensive Item4");
  ::FString::FString(&local_28,L"$$$ Item4");
  ::FString::FString(&local_18,L"Item4_Id");
  CreateFakeOffer(this,&local_18,&local_28,&local_38,6000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Sooo fake Item5");
  ::FString::FString(&local_28,L"Fake Item5");
  ::FString::FString(&local_18,L"Item5_Id");
  CreateFakeOffer(this,&local_18,&local_28,&local_38,70000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FOnlineStoreV2Null @ 14ed12ef0

void __thiscall FOnlineStoreV2Null::~FOnlineStoreV2Null(FOnlineStoreV2Null *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->AvailableOffers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AvailableOffers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AvailableOffers);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineStoreV2__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  return;
}

// operator() @ 14ed14bc0

void __thiscall `FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FString *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FReadAccessScope local_68;
  FOnlineError local_48;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ed14bf7;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    lVar1 = *(longlong *)this;
    if (lVar1 != 0) {
      FOnlineError::FOnlineError(&local_48,true);
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
                  *)(lVar1 + 0x40),&local_78);
      pFVar5 = FText::ToString(&local_48.ErrorMessage);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
                 &local_68);
      if ((*(int *)((longlong)this + 0x20) != 0) &&
         (plVar2 = *(longlong **)((longlong)this + 0x18), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x68))(plVar2,local_48.bSucceeded,&local_78,pFVar5);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      if (local_48.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.ErrorMessage.TextData.Reference + 0x10))();
      }
      if (local_48.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ErrorCode.Data.AllocatorInstance.Data);
      }
      if (local_48.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ErrorRaw.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14ed14bf7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// operator() @ 14ed15d50

void __thiscall `FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  FString *pFVar2;
  FString *local_48;
  undefined8 local_40;
  FString local_38;
  FReadAccessScope local_28;
  
  pFVar2 = ::FString::FString(&local_38,L"FOnlineStoreV2Null::QueryOffersByFilter User invalid");
  local_48 = (FString *)0x0;
  local_40 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0,&local_48,pFVar2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ed15df0

void __thiscall `FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  FString *pFVar2;
  FString *local_48;
  undefined8 local_40;
  FString local_38;
  FReadAccessScope local_28;
  
  pFVar2 = ::FString::FString(&local_38,L"FOnlineStoreV2Null::QueryOffersByFilter User invalid");
  local_48 = (FString *)0x0;
  local_40 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0,&local_48,pFVar2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ed161e0

void __thiscall `FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  FString *local_48;
  undefined8 local_40;
  FString local_38;
  FReadAccessScope local_28;
  
  ::FString::FString(&local_38,L"FOnlineStoreV2Null::No OfferIds requested");
  local_48 = (FString *)0x0;
  local_40 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0,&local_48,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateFakeOffer @ 14ed20ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FOnlineStoreV2Null::CreateFakeOffer
          (FOnlineStoreV2Null *this,FString *param_1,FString *param_2,FString *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FString *local_48;
  TReferenceControllerBase<1> **local_40;
  FText local_38;
  FText local_28;
  
  pTStack_50 = ::operator_new(0x100);
  if (pTStack_50 == (TReferenceControllerBase<1> *)0x0) {
    local_58 = ___xmm_00000000000000000000000000000010;
    pTStack_50 = _UNK_150651568;
  }
  else {
    pTStack_50->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_50->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_50->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFOnlineStoreOffer___00_SharedPointerInternals__6B_;
    pTStack_50[1]._padding_ = (longlong)&___7FOnlineStoreOffer__6B_;
    pTStack_50[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[2]._padding_ = 0;
    FText::FText((FText *)&pTStack_50[2].SharedReferenceCount);
    FText::FText((FText *)&pTStack_50[3].SharedReferenceCount);
    FText::FText((FText *)&pTStack_50[4].SharedReferenceCount);
    FText::FText((FText *)&pTStack_50[5].SharedReferenceCount);
    pTStack_50[6].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTStack_50[6].WeakReferenceCount = (atomic<int>)0xffffffff;
    FText::FText((FText *)(pTStack_50 + 7));
    pTStack_50[8].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[8].WeakReferenceCount = (atomic<int>)0x0;
    local_58 = pTStack_50 + 1;
    pTStack_50[9]._padding_ = 0;
    pTStack_50[9].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTStack_50[10].SharedReferenceCount = 0;
    pTStack_50[0xb]._padding_ = 0;
    pTStack_50[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[0xd]._padding_ = 0;
    pTStack_50[10]._padding_ = 0x2bca2875f4373fff;
    pTStack_50[8]._padding_ = -1;
    pTStack_50[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[0xd].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTStack_50[0xe]._padding_ + 4) = 0;
    *(undefined4 *)&pTStack_50[0xe]._padding_ = 0xffffffff;
    pTStack_50[0xf]._padding_ = 0;
    pTStack_50[0xf].SharedReferenceCount = (atomic<int>)0x0;
    if ((local_58 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::operator=((FString *)&local_58->SharedReferenceCount,param_1);
  pFVar3 = FText::FromString(&local_38,param_2);
  FText::operator=((FText *)&local_58[1].SharedReferenceCount,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::FromString(&local_28,param_3);
  FText::operator=((FText *)&local_58[2].SharedReferenceCount,pFVar3);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  lVar4 = (longlong)param_4;
  local_58[7]._padding_ = lVar4;
  local_58[5].SharedReferenceCount = (atomic<int>)(int)lVar4;
  local_58[5].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar4 >> 0x20);
  ::FString::operator=((FString *)&local_58[7].SharedReferenceCount,L"USD");
  local_40 = &local_58;
  local_48 = param_1;
  TSet<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FOnlineStoreOffer,1>_const_&>_>
            ((TSet<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>,FDefaultSetAllocator>
              *)&this->AvailableOffers,
             (TPairInitializer<FString_const_&,TSharedRef<FOnlineStoreOffer,1>_const_&> *)
             &stack0x00000008,(bool *)&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return;
}

// GetCategories @ 14ed25040

void __thiscall
FOnlineStoreV2Null::GetCategories
          (FOnlineStoreV2Null *this,
          TArray<FOnlineStoreCategory,TSizedDefaultAllocator<32>_> *param_1)

{
  DestructItems<FOnlineStoreCategory,int>
            ((FOnlineStoreCategory *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  return;
}

// GetOffer @ 14ed25c50

TSharedPtr<FOnlineStoreOffer,1> * __thiscall
FOnlineStoreV2Null::GetOffer
          (FOnlineStoreV2Null *this,TSharedPtr<FOnlineStoreOffer,1> *__return_storage_ptr__,
          FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FOnlineStoreOffer,1> *pTVar2;
  
  pTVar2 = TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
           ::Find((TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
                   *)&this->AvailableOffers,param_1);
  if (pTVar2 == (TSharedRef<FOnlineStoreOffer,1> *)0x0) {
    __return_storage_ptr__->Object = (FOnlineStoreOffer *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOffers @ 14ed25cb0

void __thiscall
FOnlineStoreV2Null::GetOffers
          (FOnlineStoreV2Null *this,
          TArray<TSharedRef<FOnlineStoreOffer,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
              *)&this->AvailableOffers,param_1);
  return;
}

// QueryCategories @ 14ed2a210

void __thiscall
FOnlineStoreV2Null::QueryCategories
          (FOnlineStoreV2Null *this,FUniqueNetId *param_1,
          TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *param_2)

{
  FOnlineSubsystemNull *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> local_20;
  
  this_00 = this->NullSubsystem;
  TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>(&local_20,param_2);
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),&local_20);
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FOnlineSubsystemImpl::ExecuteDelegateNextTick
            ((FOnlineSubsystemImpl *)this_00,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20);
  return;
}

// QueryOffers @ 14ed2a350

void __thiscall
FOnlineStoreV2Null::QueryOffers
          (FOnlineStoreV2Null *this,FUniqueNetIdNull *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FOnlineSubsystemNull *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 local_98 [8];
  FDelegateAllocation local_90;
  TReferenceControllerBase<1> *local_80;
  TReferenceControllerBase<1> *local_78;
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  local_70;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar5;
  pTVar9 = pTVar10;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar8 = pTVar10;
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ed2a3b8;
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pTVar8 = pTVar5;
    pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
  }
LAB_14ed2a3b8:
  pTVar5 = (TReferenceControllerBase<1> *)&pTVar9[2].SharedReferenceCount;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = pTVar10;
  }
  if ((pTVar5 != (TReferenceControllerBase<1> *)&this->_padding_) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  this_00 = this->NullSubsystem;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_80 = pTVar9;
  local_78 = pTVar8;
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
            (&local_70,param_3);
  local_98 = (undefined1  [8])0x0;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_90;
  puVar6 = UE::Core::Private::DelegateAllocate(0x40,&local_90);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = local_80;
    puVar6[4] = local_78;
    local_78 = (TReferenceControllerBase<1> *)0x0;
    local_80 = (TReferenceControllerBase<1> *)0x0;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *)(puVar6 + 5),&local_70);
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FOnlineSubsystemImpl::ExecuteDelegateNextTick
            ((FOnlineSubsystemImpl *)this_00,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
             (FWriteAccessScope *)&local_58);
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_90,0,0,0x10);
    local_90.DelegateSize = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_70);
  if (local_78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_78->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_78->_padding_ + 8))(local_78,1);
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  return;
}

// QueryOffersByFilter @ 14ed2a5f0

void __thiscall
FOnlineStoreV2Null::QueryOffersByFilter
          (FOnlineStoreV2Null *this,FUniqueNetId *param_1,FOnlineStoreFilter *param_2,
          TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FOnlineSubsystemNull *this_00;
  char cVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  local_20;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  if (cVar1 == '\0') {
    this_00 = this->NullSubsystem;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              (&local_20,param_3);
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::`5'::<lambda_1>_>
                 ::_vftable_;
      TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
      ::
      TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                  *)(puVar2 + 3),&local_20);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    FOnlineSubsystemImpl::ExecuteDelegateNextTick
              ((FOnlineSubsystemImpl *)this_00,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20);
  }
  else {
    QueryOffers(this,(FUniqueNetIdNull *)param_1,
                (TArray<FString,TSizedDefaultAllocator<32>_> *)local_58,param_3);
    DestructItems<FString,int>((FString *)0x0,0);
  }
  return;
}

// QueryOffersById @ 14ed2a760

void __thiscall
FOnlineStoreV2Null::QueryOffersById
          (FOnlineStoreV2Null *this,FUniqueNetId *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined **ppuVar4;
  FOnlineSubsystemNull *this_00;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  local_20;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  if (cVar1 == '\0') {
    this_00 = this->NullSubsystem;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              (&local_20,param_3);
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 == (undefined8 *)0x0) goto LAB_14ed2a80b;
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    ppuVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  else {
    if (0 < param_2->ArrayNum) {
      QueryOffers(this,(FUniqueNetIdNull *)param_1,param_2,param_3);
      return;
    }
    this_00 = this->NullSubsystem;
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              (&local_20,param_3);
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 == (undefined8 *)0x0) goto LAB_14ed2a80b;
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    ppuVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::`8'::<lambda_2>_>
               ::_vftable_;
  }
  *puVar2 = ppuVar4;
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              *)(puVar2 + 3),&local_20);
LAB_14ed2a80b:
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  FOnlineSubsystemImpl::ExecuteDelegateNextTick
            ((FOnlineSubsystemImpl *)this_00,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20);
  return;
}

