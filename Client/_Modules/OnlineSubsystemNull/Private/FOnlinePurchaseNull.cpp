// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 23

// FOnlinePurchaseNull @ 14ed11340

FOnlinePurchaseNull * __thiscall
FOnlinePurchaseNull::FOnlinePurchaseNull(FOnlinePurchaseNull *this,FOnlineSubsystemNull *param_1)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOnlinePurchaseNull__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->UserFakeReceipts = 0;
  *(undefined8 *)&(this->UserFakeReceipts).field_0x8 = 0;
  *(undefined8 *)&(this->UserFakeReceipts).field_0x20 = 0;
  this->NullSubsystem = param_1;
  *(undefined4 *)&(this->UserFakeReceipts).field_0x28 = 0;
  *(undefined4 *)&(this->UserFakeReceipts).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserFakeReceipts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserFakeReceipts).field_0x34 = 0;
  *(undefined8 *)&(this->UserFakeReceipts).field_0x40 = 0;
  *(undefined4 *)&(this->UserFakeReceipts).field_0x48 = 0;
  (this->PendingPurchaseDelegate).bIsSet = false;
  (this->PendingPurchaseFailTime).bIsSet = false;
  (this->PendingPurchaseHandle).ID = 0;
  return this;
}

// ~<lambda_1> @ 14ed11eb0

void __thiscall `FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x70));
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
  }
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  plVar3 = *(longlong **)((longlong)this + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~<lambda_2> @ 14ed11f50

void __thiscall `FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>::~<lambda_2>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x40));
  plVar3 = *(longlong **)((longlong)this + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~<lambda_2> @ 14ed11fd0

void __thiscall `FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>::~<lambda_2>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x48);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// ~FOnlinePurchaseNull @ 14ed12cb0

void __thiscall FOnlinePurchaseNull::~FOnlinePurchaseNull(FOnlinePurchaseNull *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FOnlinePurchaseNull__6B_;
  if ((this->PendingPurchaseDelegate).bIsSet != false) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PendingPurchaseDelegate);
  }
  *(undefined4 *)&(this->UserFakeReceipts).field_0x48 = 0;
  pvVar3 = *(void **)&(this->UserFakeReceipts).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserFakeReceipts);
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
  this->_padding_ = (longlong)&___7IOnlinePurchase__6B_;
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

// operator() @ 14ed147a0

void __thiscall
`FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(void *this,FString *param_1)

{
  FOnlineSubsystemImpl *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> local_30;
  FScriptContainerElement *local_18;
  int local_10;
  int iStack_c;
  
  this_00 = *(FOnlineSubsystemImpl **)(*(longlong *)this + 0x38);
  TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
            (&local_30,
             *(TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> **)
              ((longlong)this + 8));
  local_18 = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10 = (param_1->Data).ArrayNum;
  iStack_c = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),&local_30);
    puVar1[6] = 0;
    puVar1[6] = local_18;
    local_18 = (FScriptContainerElement *)0x0;
    *(int *)(puVar1 + 7) = local_10;
    *(int *)((longlong)puVar1 + 0x3c) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FOnlineSubsystemImpl::ExecuteDelegateNextTick
            (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  if (local_18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_30);
  return;
}

// operator() @ 14ed14930

void __thiscall
`FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(void *this,FString *param_1)

{
  FOnlineSubsystemImpl *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
  local_30;
  FScriptContainerElement *local_18;
  int local_10;
  int iStack_c;
  
  this_00 = *(FOnlineSubsystemImpl **)(*(longlong *)this + 0x38);
  TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
            (&local_30,
             *(TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
               **)((longlong)this + 8));
  local_18 = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10 = (param_1->Data).ArrayNum;
  iStack_c = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 3),&local_30);
    puVar1[6] = 0;
    puVar1[6] = local_18;
    local_18 = (FScriptContainerElement *)0x0;
    *(int *)(puVar1 + 7) = local_10;
    *(int *)((longlong)puVar1 + 0x3c) = iStack_c;
    local_10 = 0;
    iStack_c = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FOnlineSubsystemImpl::ExecuteDelegateNextTick
            (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  if (local_18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_30);
  return;
}

// operator() @ 14ed14d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  uint uVar4;
  int iVar5;
  TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *pTVar6;
  FReceiptOfferEntry *pFVar7;
  TSharedRef<FPurchaseReceipt,1> *pTVar8;
  FOnlineError *pFVar9;
  wchar_t *pwVar10;
  TReferenceControllerBase<1> *pTVar11;
  FPurchaseReceipt *this_00;
  bool bVar12;
  TSharedRef<FPurchaseReceipt,1> local_58;
  undefined1 local_48 [48];
  ForAnyElementType local_18;
  int local_10;
  
  pTVar11 = *(TReferenceControllerBase<1> **)((longlong)this + 0x38);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar11->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ed14d3f;
      }
      LOCK();
      aVar3 = pTVar11->SharedReferenceCount;
      bVar12 = aVar2 == aVar3;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar12);
    lVar1 = *(longlong *)((longlong)this + 0x30);
    if (lVar1 != 0) {
      pwVar10 = L"";
      if (4 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl
                  ((FString *)&local_58,L"FOnlinePurchaseNull::RedeemCode redeemed successfully");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_58.Object != (FPurchaseReceipt *)0x0) {
          FMemory::Free(local_58.Object);
        }
      }
      iVar5 = *(int *)((longlong)this + 0x20) + -1;
      if (*(int *)((longlong)this + 0x20) == 0) {
        iVar5 = 0;
      }
      else {
        pwVar10 = *(wchar_t **)((longlong)this + 0x18);
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
      pTVar6 = TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<FUniqueNetIdNull_const_&>
                         ((TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
                           *)(lVar1 + 0x40),uVar4,this);
      iVar5 = pTVar6->ArrayNum;
      if (iVar5 == pTVar6->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
      }
      pTVar6->ArrayNum = iVar5 + 1;
      this_00 = (FPurchaseReceipt *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
      this_00->_padding_ = (longlong)&___7FPurchaseReceipt__6B_;
      (this_00->TransactionId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->TransactionId).Data.ArrayNum = 0;
      (this_00->TransactionId).Data.ArrayMax = 0;
      this_00->TransactionState = NotStarted;
      (this_00->ReceiptOffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->ReceiptOffers).ArrayNum = 0;
      (this_00->ReceiptOffers).ArrayMax = 0;
      pFVar7 = ::`anonymous_namespace'::MakeReceiptOfferEntry
                         ((FReceiptOfferEntry *)local_48,this,(FString *)((longlong)this + 0x40),
                          (FString *)((longlong)this + 0x40));
      FPurchaseReceipt::AddReceiptOffer(this_00,pFVar7);
      DestructItems<FPurchaseReceipt::FLineItemInfo,int>((FLineItemInfo *)local_18.Data,local_10);
      if ((FLineItemInfo *)local_18.Data != (FLineItemInfo *)0x0) {
        FMemory::Free(local_18.Data);
      }
      if ((FScriptContainerElement *)local_48._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._24_8_);
      }
      if ((FScriptContainerElement *)local_48._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._8_8_);
      }
      FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_48);
      pTVar8 = MakeShared<FPurchaseReceipt,1,FPurchaseReceipt_&>(&local_58,this_00);
      pFVar9 = FOnlineError::FOnlineError((FOnlineError *)local_48,true);
      TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound((TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                        *)((longlong)this + 0x70),pFVar9,pTVar8);
      if ((ITextData *)local_48._40_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_48._40_8_ + 0x10))();
      }
      if ((FScriptContainerElement *)local_48._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._24_8_);
      }
      if ((FScriptContainerElement *)local_48._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._8_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                          local_58.SharedReferenceCount.ReferenceController._0_4_));
    }
  }
LAB_14ed14d3f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// operator() @ 14ed15e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  FOnlineError *pFVar2;
  FReadAccessScope local_68;
  FOnlineError local_50;
  
  if (1 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl
              ((FString *)&local_68,L"FOnlinePurchaseNull::QueryReceipts user is invalid");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if ((void *)local_68.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68.DestructionSentinel._0_8_);
    }
  }
  pFVar2 = FOnlineError::FOnlineError(&local_50,L"User is invalid");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_68);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,pFVar2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (local_50.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.ErrorMessage.TextData.Reference + 0x10))();
  }
  if (local_50.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorCode.Data.AllocatorInstance.Data);
  }
  if (local_50.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorRaw.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ed15f90

void __thiscall `FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *this_00;
  FOnlineError *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FReadAccessScope local_78;
  TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> local_60;
  FOnlineError local_48;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x38);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ed15fc0;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar4 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar8);
    lVar1 = *(longlong *)((longlong)this + 0x30);
    if (lVar1 != 0) {
      this_00 = TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                          (&local_60,
                           (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                            *)((longlong)this + 0x40));
      if ((*(longlong *)(lVar1 + 0xc0) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingPurchaseHandle.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlinePurchaseInterfaceNull.cpp"
                             ,0xd6,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(lVar1 + 0xc0) = 0;
      pFVar6 = FOnlineError::FOnlineError(&local_48,Success);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_78);
      if ((*(int *)&this_00->field_0x10 != 0) &&
         (plVar2 = *(longlong **)&this_00->field_0x8, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x68))(plVar2,pFVar6);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
      if (local_48.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.ErrorMessage.TextData.Reference + 0x10))();
      }
      if (local_48.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ErrorCode.Data.AllocatorInstance.Data);
      }
      if (local_48.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ErrorRaw.Data.AllocatorInstance.Data);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    }
  }
LAB_14ed15fc0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 14ed160c0

void __thiscall `FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>::operator()(void *this)

{
  FOnlinePurchaseNull *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TSharedPtr<FOnlineStoreOffer,1> local_18;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ed160f0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = *(FOnlinePurchaseNull **)((longlong)this + 0x40);
    if (this_00 != (FOnlinePurchaseNull *)0x0) {
      local_18.Object = *(FOnlineStoreOffer **)((longlong)this + 0x30);
      local_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x38);
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FOnlinePurchaseNull::CheckoutSuccessfully(this_00,this,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14ed160f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 14ed16140

void __thiscall `FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  FOnlineError *pFVar2;
  FReadAccessScope local_68;
  FOnlineError local_50;
  
  pFVar2 = FOnlineError::FOnlineError(&local_50,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_68);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,pFVar2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (local_50.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.ErrorMessage.TextData.Reference + 0x10))();
  }
  if (local_50.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorCode.Data.AllocatorInstance.Data);
  }
  if (local_50.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorRaw.Data.AllocatorInstance.Data);
  }
  return;
}

// Checkout @ 14ed1cf90

void __thiscall
FOnlinePurchaseNull::Checkout
          (FOnlinePurchaseNull *this,FUniqueNetId *param_1,FPurchaseCheckoutRequest *param_2,
          TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  int *piVar1;
  atomic<int> aVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  FOnlineSubsystemNull *this_00;
  code *pcVar7;
  bool bVar8;
  ulong64 *puVar9;
  TSharedRef<FOnlinePurchaseNull,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  atomic<int> *paVar13;
  undefined1 local_res8 [8];
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FOnlinePurchaseNull *local_170;
  TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *local_168;
  longlong *local_160;
  TReferenceControllerBase<1> *local_158;
  undefined **local_150;
  undefined8 local_148;
  longlong *plStack_140;
  FString local_138;
  undefined8 local_128;
  FOnlinePurchaseNull *local_120;
  TReferenceControllerBase<1> *local_118;
  TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> local_110;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  longlong local_98;
  TReferenceControllerBase<1> *local_90;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  TSharedRef<FOnlinePurchaseNull,1> local_50;
  FReadAccessScope local_40;
  
  iVar3 = (param_2->PurchaseOffers).ArrayNum;
  local_170 = this;
  local_168 = param_3;
  if (iVar3 == 0) {
    ::FString::FString(&local_f8,
                       L"FOnlinePurchaseNull::Checkout failed, there were no entries passed to purchase"
                      );
    `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_170,&local_f8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      return;
    }
  }
  else if (iVar3 == 1) {
    pFVar4 = (param_2->PurchaseOffers).AllocatorInstance.Data;
    if (*(int *)(pFVar4 + 0x20) == 1) {
      if (*(int *)(pFVar4 + 0x18) < 2) {
        ::FString::FString(&local_c8,L"FOnlinePurchaseNull::Checkout failed, OfferId is blank.");
        `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_170,&local_c8);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      else {
        (**(code **)(this->NullSubsystem->_padding_ + 0x90))(this->NullSubsystem,&local_160);
        if ((local_160 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(*local_160 + 0x50))(local_160,&local_98);
        if (local_98 == 0) {
          ::FString::FString(&local_b8,
                             L"FOnlinePurchaseNull::Checkout failed, Could not find corresponding offer."
                            );
          `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_170,&local_b8);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        else if ((this->PendingPurchaseHandle).ID == 0) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_40);
          uVar12 = 0;
          if ((*(int *)&param_3->field_0x10 != 0) &&
             (plVar5 = *(longlong **)&param_3->field_0x8, plVar5 != (longlong *)0x0)) {
            puVar9 = (ulong64 *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res8);
            uVar12 = *puVar9;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_40);
          (this->PendingPurchaseHandle).ID = uVar12;
          pTVar10 = TSharedFromThis<FOnlinePurchaseNull,1>::AsShared
                              ((TSharedFromThis<FOnlinePurchaseNull,1> *)&this->_padding_,&local_50)
          ;
          pTVar6 = (pTVar10->SharedReferenceCount).ReferenceController;
          local_120 = pTVar10->Object;
          if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
            paVar13 = (atomic<int> *)&DAT_0000000c;
          }
          else {
            paVar13 = &pTVar6->WeakReferenceCount;
            LOCK();
            *paVar13 = (atomic<int>)((int)*paVar13 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50.SharedReferenceCount.ReferenceController);
          this_00 = this->NullSubsystem;
          local_150 = &___7FUniqueNetIdString__6B_;
          local_148 = 0;
          plStack_140 = (longlong *)0x0;
          ::FString::FString(&local_138,(FString *)(param_1 + 1));
          local_128 = *(undefined8 *)&param_1[1].field_0x10;
          local_150 = &___7FUniqueNetIdNull__6B_;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar13 = (atomic<int>)((int)*paVar13 + 1);
            UNLOCK();
          }
          local_118 = pTVar6;
          TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                    (&local_110,param_3);
          local_188 = (undefined1  [8])0x0;
          local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_180.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                     (FWriteAccessScope *)&local_70);
          local_58 = &local_180;
          puVar11 = UE::Core::Private::DelegateAllocate(0x70,&local_180);
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = &
                       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar12 = FDelegateHandle::GenerateNewID();
            puVar11[2] = uVar12;
            *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::`2'::<lambda_2>_>
                        ::_vftable_;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar11[3] = &___7FUniqueNetIdString__6B_;
            ::FString::FString((FString *)(puVar11 + 6),&local_138);
            puVar11[8] = local_128;
            puVar11[3] = &___7FUniqueNetIdNull__6B_;
            puVar11[9] = local_120;
            puVar11[10] = local_118;
            local_118 = (TReferenceControllerBase<1> *)0x0;
            local_120 = (FOnlinePurchaseNull *)0x0;
            TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
                       (puVar11 + 0xb),&local_110);
          }
          if (local_70.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
          }
          FOnlineSubsystemImpl::ExecuteDelegateNextTick
                    ((FOnlineSubsystemImpl *)this_00,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_188);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                     (FWriteAccessScope *)&local_88);
          if ((local_180.DelegateSize != 0) &&
             (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_180,0,0,0x10);
            local_180.DelegateSize = 0;
          }
          if (local_88.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
          }
          if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_180.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_188);
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_110);
          if (local_118 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar13 = &local_118->WeakReferenceCount;
            aVar2 = *paVar13;
            *paVar13 = (atomic<int>)((int)*paVar13 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(local_118->_padding_ + 8))(local_118,1);
            }
          }
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plStack_140 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_140 + 8))(plStack_140,1);
            }
          }
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar13 = &pTVar6->WeakReferenceCount;
            aVar2 = *paVar13;
            *paVar13 = (atomic<int>)((int)*paVar13 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
            }
          }
        }
        else {
          ::FString::FString(&local_a8,
                             L"FOnlinePurchaseNull::Checkout failed, there was another purchase in progress."
                            );
          `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_170,&local_a8);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_158);
      }
    }
    else {
      ::FString::FString(&local_d8,
                         L"FOnlinePurchaseNull::Checkout failed, purchase quantity not set to one. We currently only support one."
                        );
      `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_170,&local_d8);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    ::FString::FString(&local_e8,
                       L"FOnlinePurchaseNull::Checkout failed, there were more than one entry passed to purchase. We currently only support one."
                      );
    `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_170,&local_e8);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Checkout @ 14ed1d480

void __thiscall
FOnlinePurchaseNull::Checkout
          (FOnlinePurchaseNull *this,FUniqueNetId *param_1,FPurchaseCheckoutRequest *param_2,
          TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  int *piVar1;
  atomic<int> aVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FOnlineSubsystemNull *this_00;
  code *pcVar6;
  bool bVar7;
  TSharedRef<FOnlinePurchaseNull,1> *pTVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  atomic<int> *paVar11;
  undefined1 local_158 [8];
  FDelegateAllocation local_150;
  FOnlinePurchaseNull *local_140;
  TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
  *local_138;
  longlong local_130;
  TReferenceControllerBase<1> *local_128;
  longlong *local_120;
  TReferenceControllerBase<1> *local_118;
  undefined **local_110;
  undefined8 local_108;
  longlong *plStack_100;
  FString local_f8;
  undefined8 local_e8;
  longlong local_e0;
  TReferenceControllerBase<1> *local_d8;
  FOnlinePurchaseNull *local_d0;
  TReferenceControllerBase<1> *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  TSharedRef<FOnlinePurchaseNull,1> local_28;
  
  iVar3 = (param_2->PurchaseOffers).ArrayNum;
  local_140 = this;
  local_138 = param_3;
  if (iVar3 == 0) {
    ::FString::FString(&local_c0,
                       L"FOnlinePurchaseNull::Checkout failed, there were no entries passed to purchase"
                      );
    `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_140,&local_c0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  else if (iVar3 == 1) {
    pFVar4 = (param_2->PurchaseOffers).AllocatorInstance.Data;
    if (*(int *)(pFVar4 + 0x20) == 1) {
      if (*(int *)(pFVar4 + 0x18) < 2) {
        ::FString::FString(&local_90,L"FOnlinePurchaseNull::Checkout failed, OfferId is blank.");
        `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_140,&local_90);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      else {
        (**(code **)(this->NullSubsystem->_padding_ + 0x90))(this->NullSubsystem,&local_120);
        if ((local_120 == (longlong *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(*local_120 + 0x50))(local_120,&local_130);
        if (local_130 == 0) {
          ::FString::FString(&local_80,
                             L"FOnlinePurchaseNull::Checkout failed, Could not find corresponding offer."
                            );
          `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_140,&local_80);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        else if ((this->PendingPurchaseDelegate).bIsSet == false) {
          if ((TOptional<TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>_>
               *)param_3 != &this->PendingPurchaseDelegate) {
            TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
            ::
            TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                      (&(this->PendingPurchaseDelegate).TypedValue,param_3);
            (this->PendingPurchaseDelegate).bIsSet = true;
          }
          pTVar8 = TSharedFromThis<FOnlinePurchaseNull,1>::AsShared
                             ((TSharedFromThis<FOnlinePurchaseNull,1> *)&this->_padding_,&local_28);
          pTVar5 = (pTVar8->SharedReferenceCount).ReferenceController;
          local_d0 = pTVar8->Object;
          if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
            paVar11 = (atomic<int> *)&DAT_0000000c;
          }
          else {
            paVar11 = &pTVar5->WeakReferenceCount;
            LOCK();
            *paVar11 = (atomic<int>)((int)*paVar11 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_28.SharedReferenceCount.ReferenceController);
          this_00 = this->NullSubsystem;
          local_110 = &___7FUniqueNetIdString__6B_;
          local_108 = 0;
          plStack_100 = (longlong *)0x0;
          ::FString::FString(&local_f8,(FString *)(param_1 + 1));
          local_e8 = *(undefined8 *)&param_1[1].field_0x10;
          local_e0 = local_130;
          local_110 = &___7FUniqueNetIdNull__6B_;
          local_d8 = local_128;
          if (local_128 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_128->SharedReferenceCount =
                 (atomic<int>)((int)local_128->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar11 = (atomic<int>)((int)*paVar11 + 1);
            UNLOCK();
          }
          local_158 = (undefined1  [8])0x0;
          local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_150.DelegateSize = 0;
          local_c8 = pTVar5;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
                     (FWriteAccessScope *)&local_48);
          local_30 = &local_150;
          puVar9 = UE::Core::Private::DelegateAllocate(0x68,&local_150);
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar10 = FDelegateHandle::GenerateNewID();
            puVar9[2] = uVar10;
            *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::`2'::<lambda_2>_>
                       ::_vftable_;
            puVar9[4] = 0;
            puVar9[5] = 0;
            puVar9[3] = &___7FUniqueNetIdString__6B_;
            ::FString::FString((FString *)(puVar9 + 6),&local_f8);
            puVar9[8] = local_e8;
            puVar9[3] = &___7FUniqueNetIdNull__6B_;
            puVar9[9] = local_e0;
            puVar9[10] = local_d8;
            local_d8 = (TReferenceControllerBase<1> *)0x0;
            local_e0 = 0;
            puVar9[0xb] = local_d0;
            puVar9[0xc] = local_c8;
            local_c8 = (TReferenceControllerBase<1> *)0x0;
            local_d0 = (FOnlinePurchaseNull *)0x0;
          }
          if (local_48.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
          }
          FOnlineSubsystemImpl::ExecuteDelegateNextTick
                    ((FOnlineSubsystemImpl *)this_00,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_158);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
                     (FWriteAccessScope *)&local_60);
          if ((local_150.DelegateSize != 0) &&
             (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_150.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_150,0,0,0x10);
            local_150.DelegateSize = 0;
          }
          if (local_60.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
          }
          if (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_150.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_158);
          if (local_c8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar11 = &local_c8->WeakReferenceCount;
            aVar2 = *paVar11;
            *paVar11 = (atomic<int>)((int)*paVar11 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(local_c8->_padding_ + 8))(local_c8,1);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8);
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          if (plStack_100 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plStack_100 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_100 + 8))(plStack_100,1);
            }
          }
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar11 = &pTVar5->WeakReferenceCount;
            aVar2 = *paVar11;
            *paVar11 = (atomic<int>)((int)*paVar11 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
            }
          }
        }
        else {
          ::FString::FString(&local_70,
                             L"FOnlinePurchaseNull::Checkout failed, there was another purchase in progress."
                            );
          `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_140,&local_70);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118);
      }
    }
    else {
      ::FString::FString(&local_a0,
                         L"FOnlinePurchaseNull::Checkout failed, purchase quantity not set to one. We currently only support one."
                        );
      `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_140,&local_a0);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    ::FString::FString(&local_b0,
                       L"FOnlinePurchaseNull::Checkout failed, there were more than one entry passed to purchase. We currently only support one."
                      );
    `FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()(&local_140,&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CheckoutSuccessfully @ 14ed1d940

void __thiscall
FOnlinePurchaseNull::CheckoutSuccessfully
          (FOnlinePurchaseNull *this,FUniqueNetIdNull *param_1,
          TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FOnlineError *pFVar4;
  FReadAccessScope local_68;
  FOnlineError local_50;
  
  if ((this->PendingPurchaseHandle).ID == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingPurchaseHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlinePurchaseInterfaceNull.cpp"
                       ,0xd6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->PendingPurchaseHandle).ID = 0;
  pFVar4 = FOnlineError::FOnlineError(&local_50,Success);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_68);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,pFVar4);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (local_50.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.ErrorMessage.TextData.Reference + 0x10))();
  }
  if (local_50.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorCode.Data.AllocatorInstance.Data);
  }
  if (local_50.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorRaw.Data.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// CheckoutSuccessfully @ 14ed1da20

void __thiscall
FOnlinePurchaseNull::CheckoutSuccessfully
          (FOnlinePurchaseNull *this,FUniqueNetIdNull *param_1,
          TSharedPtr<FOnlineStoreOffer,1> *param_2)

{
  TOptional<TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>_>
  *this_00;
  undefined1 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *pTVar8;
  FString *pFVar9;
  FReceiptOfferEntry *pFVar10;
  FOnlineError *pFVar11;
  int iVar12;
  wchar_t *pwVar13;
  FPurchaseReceipt *this_01;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  ForAnyElementType local_130;
  int local_128;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  TSharedRef<FPurchaseReceipt,1> local_d8;
  FReceiptOfferEntry local_c8;
  FReadAccessScope local_88;
  FOnlineError local_70;
  
  iVar7 = *(int *)&param_1->field_0x20;
  if (iVar7 == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = *(wchar_t **)&param_1->field_0x18;
  }
  iVar12 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar12 = 0;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar13);
  pTVar8 = TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FUniqueNetIdNull_const_&>
                     ((TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->UserFakeReceipts,uVar6,param_1);
  iVar7 = pTVar8->ArrayNum;
  if (iVar7 == pTVar8->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pTVar8->ArrayNum = iVar7 + 1;
  this_01 = (FPurchaseReceipt *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 0x30);
  this_01->_padding_ = (longlong)&___7FPurchaseReceipt__6B_;
  (this_01->TransactionId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->TransactionId).Data.ArrayNum = 0;
  (this_01->TransactionId).Data.ArrayMax = 0;
  this_01->TransactionState = NotStarted;
  (this_01->ReceiptOffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->ReceiptOffers).ArrayNum = 0;
  (this_01->ReceiptOffers).ArrayMax = 0;
  if (param_2->Object == (FOnlineStoreOffer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = FText::ToString(&param_2->Object->Title);
  if (param_2->Object == (FOnlineStoreOffer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = ::`anonymous_namespace'::MakeReceiptOfferEntry
                      (&local_c8,param_1,&param_2->Object->OfferId,pFVar9);
  FPurchaseReceipt::AddReceiptOffer(this_01,pFVar10);
  DestructItems<FPurchaseReceipt::FLineItemInfo,int>
            ((FLineItemInfo *)local_c8.LineItems.AllocatorInstance.Data,local_c8.LineItems.ArrayNum)
  ;
  if ((FLineItemInfo *)local_c8.LineItems.AllocatorInstance.Data != (FLineItemInfo *)0x0) {
    FMemory::Free(local_c8.LineItems.AllocatorInstance.Data);
  }
  if (local_c8.OfferId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.OfferId.Data.AllocatorInstance.Data);
  }
  if (local_c8.Namespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Namespace.Data.AllocatorInstance.Data);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&local_c8);
  if ((this->PendingPurchaseDelegate).bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingPurchaseDelegate.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlinePurchaseInterfaceNull.cpp"
                       ,0x83,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = &this->PendingPurchaseDelegate;
  if ((this->PendingPurchaseDelegate).bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_120);
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  local_130.Data =
       *(FScriptContainerElement **)&(this->PendingPurchaseDelegate).TypedValue.field_0x8;
  *(undefined8 *)&(this->PendingPurchaseDelegate).TypedValue.field_0x8 = 0;
  local_128 = *(int *)&(this->PendingPurchaseDelegate).TypedValue.field_0x10;
  *(undefined4 *)&(this->PendingPurchaseDelegate).TypedValue.field_0x10 = 0;
  if (local_120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
  }
  if ((this->PendingPurchaseDelegate).bIsSet != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_108);
    puVar1 = &(this->PendingPurchaseDelegate).TypedValue.field_0x8;
    if ((*(int *)&(this->PendingPurchaseDelegate).TypedValue.field_0x10 != 0) &&
       (puVar2 = *(undefined8 **)puVar1, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->PendingPurchaseDelegate).TypedValue.field_0x8,0,0,0x10
                );
      *(undefined4 *)&(this->PendingPurchaseDelegate).TypedValue.field_0x10 = 0;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    pvVar3 = *(void **)puVar1;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    (this->PendingPurchaseDelegate).bIsSet = false;
  }
  if ((this->PendingPurchaseFailTime).bIsSet != false) {
    (this->PendingPurchaseFailTime).bIsSet = false;
  }
  MakeShared<FPurchaseReceipt,1,FPurchaseReceipt_&>(&local_d8,this_01);
  pFVar11 = FOnlineError::FOnlineError(&local_70,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_138,&local_88);
  if ((local_128 != 0) && (local_130.Data != (FScriptContainerElement *)0x0)) {
    (**(code **)(*(longlong *)local_130.Data + 0x68))(local_130.Data,pFVar11);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  if (local_70.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.ErrorMessage.TextData.Reference + 0x10))();
  }
  if (local_70.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ErrorCode.Data.AllocatorInstance.Data);
  }
  if (local_70.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ErrorRaw.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_f0);
  if ((local_128 != 0) && (local_130.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_130.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_130,0,0,0x10);
    local_128 = 0;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// FinalizePurchase @ 14ed23020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlinePurchaseNull::FinalizePurchase
          (FOnlinePurchaseNull *this,FUniqueNetId *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  FString local_48;
  
  pTVar4 = TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->UserFakeReceipts,(FUniqueNetIdNull *)param_1);
  if (pTVar4 != (TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar10 = (pTVar4->AllocatorInstance).Data;
    local_res10 = pTVar4->ArrayNum;
    uVar5 = (ulonglong)(int)local_res10;
    pFVar8 = pFVar10 + 0x28;
    pFVar9 = pFVar10 + uVar5 * 0x30;
    while( true ) {
      if (pTVar4->ArrayNum != (int)uVar5) {
        `TCheckedPointerIterator<FPurchaseReceipt,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar9) break;
      iVar1 = *(int *)pFVar8;
      lVar6 = *(longlong *)(pFVar8 + -8);
      lVar7 = (longlong)iVar1 * 0x40 + lVar6;
      while( true ) {
        if (*(int *)pFVar8 != iVar1) {
          `TCheckedPointerIterator<FPurchaseReceipt::FReceiptOfferEntry_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (lVar6 == lVar7) break;
        iVar3 = *(int *)(lVar6 + 0x20);
        iVar2 = (param_2->Data).ArrayNum;
        if (iVar3 == iVar2) {
          if (1 < iVar3) {
            iVar3 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(lVar6 + 0x18),
                               (wchar_t *)(param_2->Data).AllocatorInstance.Data);
            bVar11 = iVar3 == 0;
            goto LAB_14ed230c8;
          }
LAB_14ed230e3:
          if ((byte)LogOnline._0_1_ < 5) {
            return;
          }
          ::FString::PrintfImpl(&local_48,L"Consumption of Entitlement %s completed was successful")
          ;
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          goto LAB_14ed23199;
        }
        bVar11 = iVar3 + iVar2 == 1;
LAB_14ed230c8:
        if (bVar11) goto LAB_14ed230e3;
        lVar6 = lVar6 + 0x40;
      }
      uVar5 = (ulonglong)local_res10;
      pFVar10 = pFVar10 + 0x30;
      pFVar8 = pFVar8 + 0x30;
    }
  }
  if (5 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_48,L"Didn\'t find receipt with id %s");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
LAB_14ed23199:
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FinalizeReceiptValidationInfo @ 14ed231e0

void __thiscall
FOnlinePurchaseNull::FinalizeReceiptValidationInfo
          (FOnlinePurchaseNull *this,FUniqueNetId *param_1,FString *param_2,
          TDelegate<void___cdecl(FOnlineError_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  return;
}

// GetReceipts @ 14ed25f50

void __thiscall
FOnlinePurchaseNull::GetReceipts
          (FOnlinePurchaseNull *this,FUniqueNetId *param_1,
          TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FPurchaseReceipt *pFVar3;
  TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pTVar4 = TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->UserFakeReceipts,(FUniqueNetIdNull *)param_1);
  if (pTVar4 == (TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *)0x0) {
    DestructItems<FPurchaseReceipt,int>
              ((FPurchaseReceipt *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      return;
    }
  }
  else if (param_2 != pTVar4) {
    DestructItems<FPurchaseReceipt,int>
              ((FPurchaseReceipt *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    iVar2 = pTVar4->ArrayNum;
    piVar1 = &param_2->ArrayMax;
    pFVar3 = (FPurchaseReceipt *)(pTVar4->AllocatorInstance).Data;
    param_2->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&param_2->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FPurchaseReceipt,FPurchaseReceipt,int>
              ((param_2->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return;
}

// IsAllowedToPurchase @ 14ed27a50

bool __thiscall
FOnlinePurchaseNull::IsAllowedToPurchase(FOnlinePurchaseNull *this,FUniqueNetId *param_1)

{
  return true;
}

// QueryReceipts @ 14ed2a950

void __thiscall
FOnlinePurchaseNull::QueryReceipts
          (FOnlinePurchaseNull *this,FUniqueNetId *param_1,bool param_2,
          TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  FOnlineSubsystemNull *this_00;
  char cVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> local_20;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  this_00 = this->NullSubsystem;
  if (cVar1 == '\0') {
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>(&local_20,param_3);
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
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::`5'::<lambda_1>_>
                 ::_vftable_;
      TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
                 (puVar2 + 3),&local_20);
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
  }
  else {
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>(&local_20,param_3);
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
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::`2'::<lambda_2>_>
                 ::_vftable_;
      TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
                 (puVar2 + 3),&local_20);
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
  }
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

// RedeemCode @ 14ed2ca50

void __thiscall
FOnlinePurchaseNull::RedeemCode
          (FOnlinePurchaseNull *this,FUniqueNetId *param_1,FRedeemCodeRequest *param_2,
          TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  int *piVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FOnlineSubsystemNull *this_00;
  TSharedRef<FOnlinePurchaseNull,1> *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  atomic<int> *paVar8;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  FString local_98;
  undefined8 local_88;
  FOnlinePurchaseNull *local_80;
  TReferenceControllerBase<1> *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
  local_40;
  
  pTVar5 = TSharedFromThis<FOnlinePurchaseNull,1>::AsShared
                     ((TSharedFromThis<FOnlinePurchaseNull,1> *)&this->_padding_,
                      (TSharedRef<FOnlinePurchaseNull,1> *)local_e8);
  pTVar4 = (pTVar5->SharedReferenceCount).ReferenceController;
  local_80 = pTVar5->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar8 = &pTVar4->WeakReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e0.DelegateAllocator);
  this_00 = this->NullSubsystem;
  local_b0 = &___7FUniqueNetIdString__6B_;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  ::FString::FString(&local_98,(FString *)(param_1 + 1));
  local_88 = *(undefined8 *)&param_1[1].field_0x10;
  local_b0 = &___7FUniqueNetIdNull__6B_;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_78 = pTVar4;
  ::FString::FString(&local_70,&param_2->Code);
  ::FString::FString(&local_60,&param_2->CodeUseId);
  ::FString::FString(&local_50,&param_2->FulfillmentSource);
  TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
            (&local_40,param_3);
  local_e8 = (undefined1  [8])0x0;
  local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_e0;
  puVar6 = UE::Core::Private::DelegateAllocate(0xa0,&local_e0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = &___7FUniqueNetIdString__6B_;
    ::FString::FString((FString *)(puVar6 + 6),&local_98);
    puVar6[8] = local_88;
    puVar6[3] = &___7FUniqueNetIdNull__6B_;
    puVar6[9] = local_80;
    puVar6[10] = local_78;
    local_78 = (TReferenceControllerBase<1> *)0x0;
    local_80 = (FOnlinePurchaseNull *)0x0;
    ::FString::FString((FString *)(puVar6 + 0xb),&local_70);
    ::FString::FString((FString *)(puVar6 + 0xd),&local_60);
    ::FString::FString((FString *)(puVar6 + 0xf),&local_50);
    TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *)(puVar6 + 0x11),&local_40);
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  FOnlineSubsystemImpl::ExecuteDelegateNextTick
            ((FOnlineSubsystemImpl *)this_00,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_d0);
  if ((local_e0.DelegateSize != 0) &&
     (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)*(longlong *)local_e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e0,0,0,0x10);
    local_e0.DelegateSize = 0;
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar8 = &local_78->WeakReferenceCount;
    aVar2 = *paVar8;
    *paVar8 = (atomic<int>)((int)*paVar8 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_78->_padding_ + 8))(local_78,1);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_a0 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
    }
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar8 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar8;
    *paVar8 = (atomic<int>)((int)*paVar8 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// Tick @ 14ed2f870

void __thiscall FOnlinePurchaseNull::Tick(FOnlinePurchaseNull *this)

{
  TOptional<TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>_>
  *this_00;
  undefined1 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  FOnlineError *pFVar7;
  LARGE_INTEGER local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  ForAnyElementType local_f0;
  int local_e8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  TSharedRef<FPurchaseReceipt,1> local_98;
  FReadAccessScope local_88;
  FOnlineError local_70;
  
  if (((this->PendingPurchaseFailTime).bIsSet != false) &&
     ((this->PendingPurchaseDelegate).bIsSet != false)) {
    QueryPerformanceCounter(&local_res8);
    dVar5 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((this->PendingPurchaseFailTime).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((this->PendingPurchaseFailTime).TypedValue <= dVar5 &&
        dVar5 != (this->PendingPurchaseFailTime).TypedValue) {
      this_00 = &this->PendingPurchaseDelegate;
      if ((this->PendingPurchaseDelegate).bIsSet == false) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_f0.Data = (FScriptContainerElement *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_e0);
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      local_f0.Data =
           *(FScriptContainerElement **)&(this->PendingPurchaseDelegate).TypedValue.field_0x8;
      *(undefined8 *)&(this->PendingPurchaseDelegate).TypedValue.field_0x8 = 0;
      local_e8 = *(int *)&(this->PendingPurchaseDelegate).TypedValue.field_0x10;
      *(undefined4 *)&(this->PendingPurchaseDelegate).TypedValue.field_0x10 = 0;
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
      if ((this->PendingPurchaseDelegate).bIsSet != false) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_c8);
        puVar1 = &(this->PendingPurchaseDelegate).TypedValue.field_0x8;
        if ((*(int *)&(this->PendingPurchaseDelegate).TypedValue.field_0x10 != 0) &&
           (puVar2 = *(undefined8 **)puVar1, puVar2 != (undefined8 *)0x0)) {
          (**(code **)*puVar2)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->PendingPurchaseDelegate).TypedValue.field_0x8,0,0,
                     0x10);
          *(undefined4 *)&(this->PendingPurchaseDelegate).TypedValue.field_0x10 = 0;
        }
        if (local_c8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
        }
        pvVar3 = *(void **)puVar1;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)this_00);
        (this->PendingPurchaseDelegate).bIsSet = false;
      }
      if ((this->PendingPurchaseFailTime).bIsSet != false) {
        (this->PendingPurchaseFailTime).bIsSet = false;
      }
      MakeShared<FPurchaseReceipt,1>(&local_98);
      pFVar7 = FOnlineError::FOnlineError(&local_70,L"Checkout was cancelled or timed out");
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_f8,&local_88);
      if ((local_e8 != 0) && (local_f0.Data != (FScriptContainerElement *)0x0)) {
        (**(code **)(*(longlong *)local_f0.Data + 0x68))(local_f0.Data,pFVar7);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      if (local_70.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.ErrorMessage.TextData.Reference + 0x10))();
      }
      if (local_70.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.ErrorCode.Data.AllocatorInstance.Data);
      }
      if (local_70.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.ErrorRaw.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_f8,(FWriteAccessScope *)&local_b0);
      if ((local_e8 != 0) && (local_f0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_f0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f0,0,0,0x10);
        local_e8 = 0;
      }
      if (local_b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
      }
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
    }
  }
  return;
}

