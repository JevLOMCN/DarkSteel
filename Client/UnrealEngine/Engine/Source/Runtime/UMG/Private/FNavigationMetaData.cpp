// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 3

// FNavigationMetaData @ 146988080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FNavigationMetaData * __thiscall FNavigationMetaData::FNavigationMetaData(FNavigationMetaData *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SNavData *pSVar4;
  FWeakReferencer<1> *pFVar5;
  TWeakPtr<SWidget,1> local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  this->_padding_ = (longlong)&___7FNavigationMetaData__6B_;
  pFVar5 = &this->Rules[0].FocusRecipient.WeakReferenceCount;
  pFVar5->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Rules[0].FocusRecipient.Object = (SWidget *)0x0;
  *(undefined8 *)&this->Rules[0].FocusDelegate = 0;
  *(undefined8 *)&this->Rules[0].FocusDelegate.field_0x8 = 0;
  *(undefined4 *)&this->Rules[0].FocusDelegate.field_0x10 = 0;
  this->Rules[1].FocusRecipient.Object = (SWidget *)0x0;
  this->Rules[1].FocusRecipient.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Rules[1].FocusDelegate = 0;
  *(undefined8 *)&this->Rules[1].FocusDelegate.field_0x8 = 0;
  *(undefined4 *)&this->Rules[1].FocusDelegate.field_0x10 = 0;
  this->Rules[2].FocusRecipient.Object = (SWidget *)0x0;
  this->Rules[2].FocusRecipient.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Rules[2].FocusDelegate = 0;
  *(undefined8 *)&this->Rules[2].FocusDelegate.field_0x8 = 0;
  *(undefined4 *)&this->Rules[2].FocusDelegate.field_0x10 = 0;
  this->Rules[3].FocusRecipient.Object = (SWidget *)0x0;
  this->Rules[3].FocusRecipient.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Rules[3].FocusDelegate = 0;
  *(undefined8 *)&this->Rules[3].FocusDelegate.field_0x8 = 0;
  *(undefined4 *)&this->Rules[3].FocusDelegate.field_0x10 = 0;
  this->Rules[4].FocusRecipient.Object = (SWidget *)0x0;
  this->Rules[4].FocusRecipient.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Rules[4].FocusDelegate = 0;
  *(undefined8 *)&this->Rules[4].FocusDelegate.field_0x8 = 0;
  *(undefined4 *)&this->Rules[4].FocusDelegate.field_0x10 = 0;
  this->Rules[5].FocusRecipient.Object = (SWidget *)0x0;
  this->Rules[5].FocusRecipient.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Rules[5].FocusDelegate = 0;
  *(undefined8 *)&this->Rules[5].FocusDelegate.field_0x8 = 0;
  *(undefined4 *)&this->Rules[5].FocusDelegate.field_0x10 = 0;
  this->NavigationRoutingPolicy = AcceptFocus;
  FInstancedStruct::FInstancedStruct(&(this->NavigationMethodStruct).InstancedStruct);
  for (pSVar4 = this->Rules; pSVar4 != (SNavData *)&this->NavigationRoutingPolicy;
      pSVar4 = pSVar4 + 1) {
    pSVar4->BoundaryRule = Escape;
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar5 + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    if ((TWeakPtr<SWidget,1> *)(pFVar5 + -1) != &local_48) {
      pTVar3 = pFVar5->ReferenceController;
      ((TWeakPtr<SWidget,1> *)(pFVar5 + -1))->Object = (SWidget *)0x0;
      pFVar5->ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
    }
    pFVar5 = pFVar5 + 6;
  }
  return this;
}

// ~FNavigationMetaData @ 146991da0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FNavigationMetaData::~FNavigationMetaData(FNavigationMetaData *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FInstancedStruct::Reset(&(this->NavigationMethodStruct).InstancedStruct);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Rules[5].FocusDelegate);
  pvVar3 = *(void **)&this->Rules[5].FocusDelegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Rules[5].FocusDelegate);
  pTVar4 = this->Rules[5].FocusRecipient.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Rules[4].FocusDelegate);
  pvVar3 = *(void **)&this->Rules[4].FocusDelegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Rules[4].FocusDelegate);
  pTVar4 = this->Rules[4].FocusRecipient.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Rules[3].FocusDelegate);
  pvVar3 = *(void **)&this->Rules[3].FocusDelegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Rules[3].FocusDelegate);
  pTVar4 = this->Rules[3].FocusRecipient.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Rules[2].FocusDelegate);
  pvVar3 = *(void **)&this->Rules[2].FocusDelegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Rules[2].FocusDelegate);
  pTVar4 = this->Rules[2].FocusRecipient.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Rules[1].FocusDelegate);
  pvVar3 = *(void **)&this->Rules[1].FocusDelegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Rules[1].FocusDelegate);
  pTVar4 = this->Rules[1].FocusRecipient.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Rules[0].FocusDelegate);
  pvVar3 = *(void **)&this->Rules[0].FocusDelegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Rules[0].FocusDelegate);
  pTVar4 = this->Rules[0].FocusRecipient.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  return;
}

// IsOfTypeImpl @ 1469e26d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall FNavigationMetaData::IsOfTypeImpl(FNavigationMetaData *this,FName *param_1)

{
  FName *pFVar1;
  
  pFVar1 = GetTypeId();
  return *pFVar1 == *param_1;
}

