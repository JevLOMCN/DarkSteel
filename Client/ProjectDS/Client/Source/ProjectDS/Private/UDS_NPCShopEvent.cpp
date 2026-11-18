// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b548e20

UClass * __cdecl UDS_NPCShopEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCShopEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCShopEvent",
               &Z_Registration_Info_UClass_UDS_NPCShopEvent.InnerSingleton,
               StaticRegisterNativesUDS_NPCShopEvent,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCShopEvent>,
               InternalVTableHelperCtorCaller<UDS_NPCShopEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCShopEvent.InnerSingleton;
}

// UDS_NPCShopEvent @ 14b54a9b0

UDS_NPCShopEvent * __thiscall
UDS_NPCShopEvent::UDS_NPCShopEvent(UDS_NPCShopEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCShopEvent__6B_;
  (this->OnSelectedBasketSlot)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_ItemBasketType____CBH__6B_;
  *(undefined8 *)&(this->OnUpdatedNPCShopList).Delegate = 0;
  *(undefined8 *)&(this->OnUpdatedNPCShopList).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdatedNPCShopList).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdatedNPCShopList).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClearedBasket).Delegate = 0;
  *(undefined8 *)&(this->OnClearedBasket).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClearedBasket).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClearedBasket).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedBasketType).Delegate = 0;
  *(undefined8 *)&(this->OnChangedBasketType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedBasketType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedBasketType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnBasketPurchaseCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnBasketPurchaseCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnBasketPurchaseCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnBasketPurchaseCompleted).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnBasketSellCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnBasketSellCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnBasketSellCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnBasketSellCompleted).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnBasketGiftCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnBasketGiftCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnBasketGiftCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnBasketGiftCompleted).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdatedBasket).Delegate = 0;
  *(undefined8 *)&(this->OnUpdatedBasket).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdatedBasket).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdatedBasket).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdatedBasketSlot).Delegate = 0;
  *(undefined8 *)&(this->OnUpdatedBasketSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdatedBasketSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdatedBasketSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRemovedBasketSlot).Delegate = 0;
  *(undefined8 *)&(this->OnRemovedBasketSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovedBasketSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRemovedBasketSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedBasketSlot).Subscriptions = 0;
  *(undefined8 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnSelectedBasketSlot);
  }
  *(undefined8 *)&(this->OnUpdatedBagSlot).Delegate = 0;
  *(undefined8 *)&(this->OnUpdatedBagSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdatedBagSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectBagSlot).Delegate = 0;
  *(undefined8 *)&(this->OnSelectBagSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectBagSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectShopItemSlot).Delegate = 0;
  *(undefined8 *)&(this->OnSelectShopItemSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectShopItemSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInventoryBagCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnInventoryBagCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInventoryBagCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdatedBagSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectBagSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectShopItemSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInventoryBagCompleted).Delegate.field_0x18 = 2;
  return this;
}

// UDS_NPCShopEvent @ 14b54abc0

UDS_NPCShopEvent * __thiscall
UDS_NPCShopEvent::UDS_NPCShopEvent(UDS_NPCShopEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCShopEvent__6B_;
  (this->OnSelectedBasketSlot)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_ItemBasketType____CBH__6B_;
  *(undefined8 *)&(this->OnUpdatedNPCShopList).Delegate = 0;
  *(undefined8 *)&(this->OnUpdatedNPCShopList).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdatedNPCShopList).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdatedNPCShopList).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClearedBasket).Delegate = 0;
  *(undefined8 *)&(this->OnClearedBasket).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClearedBasket).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClearedBasket).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedBasketType).Delegate = 0;
  *(undefined8 *)&(this->OnChangedBasketType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedBasketType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedBasketType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnBasketPurchaseCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnBasketPurchaseCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnBasketPurchaseCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnBasketPurchaseCompleted).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnBasketSellCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnBasketSellCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnBasketSellCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnBasketSellCompleted).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnBasketGiftCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnBasketGiftCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnBasketGiftCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnBasketGiftCompleted).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdatedBasket).Delegate = 0;
  *(undefined8 *)&(this->OnUpdatedBasket).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdatedBasket).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdatedBasket).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdatedBasketSlot).Delegate = 0;
  *(undefined8 *)&(this->OnUpdatedBasketSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdatedBasketSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdatedBasketSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRemovedBasketSlot).Delegate = 0;
  *(undefined8 *)&(this->OnRemovedBasketSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovedBasketSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRemovedBasketSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedBasketSlot).Subscriptions = 0;
  *(undefined8 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnSelectedBasketSlot);
  }
  *(undefined8 *)&(this->OnUpdatedBagSlot).Delegate = 0;
  *(undefined8 *)&(this->OnUpdatedBagSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdatedBagSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectBagSlot).Delegate = 0;
  *(undefined8 *)&(this->OnSelectBagSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectBagSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectShopItemSlot).Delegate = 0;
  *(undefined8 *)&(this->OnSelectShopItemSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectShopItemSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInventoryBagCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnInventoryBagCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInventoryBagCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdatedBagSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectBagSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectShopItemSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInventoryBagCompleted).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_NPCShopEvent @ 14b54b5d0

void __thiscall UDS_NPCShopEvent::~UDS_NPCShopEvent(UDS_NPCShopEvent *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7UDS_NPCShopEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInventoryBagCompleted).Delegate.field_0x8,
             *(int *)&(this->OnInventoryBagCompleted).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnInventoryBagCompleted).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInventoryBagCompleted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectShopItemSlot).Delegate.field_0x8,
             *(int *)&(this->OnSelectShopItemSlot).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectShopItemSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectShopItemSlot);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectBagSlot).Delegate.field_0x8,
             *(int *)&(this->OnSelectBagSlot).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectBagSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectBagSlot);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdatedBagSlot).Delegate.field_0x8,
             *(int *)&(this->OnUpdatedBagSlot).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdatedBagSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdatedBagSlot);
  (this->OnSelectedBasketSlot)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_ItemBasketType____CBH__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnSelectedBasketSlot);
  }
  TSet<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->OnSelectedBasketSlot).Subscriptions);
  *(undefined4 *)&(this->OnSelectedBasketSlot).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnSelectedBasketSlot).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnSelectedBasketSlot).Subscriptions);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemovedBasketSlot).Delegate.field_0x8,
             *(int *)&(this->OnRemovedBasketSlot).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRemovedBasketSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemovedBasketSlot);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdatedBasketSlot).Delegate.field_0x8,
             *(int *)&(this->OnUpdatedBasketSlot).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdatedBasketSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdatedBasketSlot);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdatedBasket).Delegate.field_0x8,
             *(int *)&(this->OnUpdatedBasket).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdatedBasket).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdatedBasket);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBasketGiftCompleted).Delegate.field_0x8,
             *(int *)&(this->OnBasketGiftCompleted).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnBasketGiftCompleted).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBasketGiftCompleted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBasketSellCompleted).Delegate.field_0x8,
             *(int *)&(this->OnBasketSellCompleted).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnBasketSellCompleted).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBasketSellCompleted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBasketPurchaseCompleted).Delegate.field_0x8,
             *(int *)&(this->OnBasketPurchaseCompleted).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnBasketPurchaseCompleted).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBasketPurchaseCompleted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedBasketType).Delegate.field_0x8,
             *(int *)&(this->OnChangedBasketType).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedBasketType).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedBasketType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClearedBasket).Delegate.field_0x8,
             *(int *)&(this->OnClearedBasket).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClearedBasket).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClearedBasket);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdatedNPCShopList).Delegate.field_0x8,
             *(int *)&(this->OnUpdatedNPCShopList).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdatedNPCShopList).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdatedNPCShopList);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b54cd40

UClass * __cdecl UDS_NPCShopEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCShopEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCShopEvent",
               &Z_Registration_Info_UClass_UDS_NPCShopEvent.InnerSingleton,
               StaticRegisterNativesUDS_NPCShopEvent,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCShopEvent>,
               InternalVTableHelperCtorCaller<UDS_NPCShopEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCShopEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCShopEvent @ 14b54d7b0

void __cdecl UDS_NPCShopEvent::StaticRegisterNativesUDS_NPCShopEvent(void)

{
  return;
}

// GetEvent @ 14baaa1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_NPCShopEvent * __cdecl UDS_NPCShopEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_NPCShopEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_NPCShopEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_NPCShopEvent *)0x0;
}

