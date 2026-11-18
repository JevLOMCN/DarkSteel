// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 12

// FCreationContext @ 1471d57b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FCreationContext * __thiscall
UE::Mass::ObserverManager::FCreationContext::FCreationContext(FCreationContext *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FObserverLock *pFVar3;
  FObserverLock *pFVar4;
  TRawPtrProxy<UE::Mass::ObserverManager::FObserverLock> local_res8;
  
  pFVar3 = (FObserverLock *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar4 = ::operator_new(0x38);
    if (pFVar4 != (FObserverLock *)0x0) {
      pFVar4->OwnerThreadId = 0;
      *(undefined8 *)&pFVar4->CollectionCreationDuplicatesHandling = 0;
      *(undefined8 *)&pFVar4->LockSerialNumber = 0;
      pFVar4->CreationNotificationIndex = -1;
      (pFVar4->BufferedNotifications).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->BufferedNotifications).ArrayNum = 0;
      (pFVar4->BufferedNotifications).ArrayMax = 0;
      (pFVar4->WeakEntityManager).Object = (FMassEntityManager *)0x0;
      (pFVar4->WeakEntityManager).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar3 = pFVar4;
    }
    local_res8.Object = pFVar3;
    TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>::
    TSharedRef<UE::Mass::ObserverManager::FObserverLock,1><UE::Mass::ObserverManager::FObserverLock>
              (&DummyObserverLock,&local_res8);
    atexit(`UE::Mass::ObserverManager::Private::GetDummyObserverLock'::__l2::
           _dynamic_atexit_destructor_for__DummyObserverLock__);
    _Init_thread_footer(&::_TSS0);
  }
  (this->Lock).Object = DummyObserverLock.Object;
  FVar2 = DummyObserverLock.SharedReferenceCount;
  (this->Lock).SharedReferenceCount.ReferenceController =
       DummyObserverLock.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->CreationHandle).SerialNumber = 0;
  (this->CreationHandle).OpIndex = -1;
  return this;
}

// FCreationContext @ 1471d58a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FCreationContext * __thiscall
UE::Mass::ObserverManager::FCreationContext::FCreationContext(FCreationContext *this,int param_1)

{
  FCreationContext(this);
  return this;
}

// ~FCreationContext @ 1471df970

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::ObserverManager::FCreationContext::~FCreationContext(FCreationContext *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FObserverLock *pFVar3;
  atomic<int> aVar4;
  FMassEntityManager *pFVar5;
  FMassEntityManager *pFVar6;
  FMassEntityManager *pFVar7;
  bool bVar8;
  
  if ((this->CreationHandle).OpIndex != -1) {
    pFVar3 = (this->Lock).Object;
    pFVar7 = (FMassEntityManager *)
             (pFVar3->WeakEntityManager).WeakReferenceCount.ReferenceController;
    pFVar5 = (pFVar3->WeakEntityManager).Object;
    if (pFVar7 != (FMassEntityManager *)0x0) {
      LOCK();
      ((atomic<int> *)&pFVar7->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pFVar7->_padding_)[1] + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar7->_padding_;
      do {
        pFVar6 = (FMassEntityManager *)0x0;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar4 = *(atomic<int> *)&pFVar7->_padding_;
        bVar8 = aVar2 == aVar4;
        if (bVar8) {
          *(atomic<int> *)&pFVar7->_padding_ = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        pFVar6 = pFVar7;
        aVar2 = aVar4;
      } while (!bVar8);
      LOCK();
      paVar1 = (atomic<int> *)&pFVar7->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pFVar7->_padding_ + 8))(pFVar7,1);
      }
      if (pFVar6 == (FMassEntityManager *)0x0) {
        pFVar5 = (FMassEntityManager *)0x0;
      }
      pFVar7 = pFVar6;
      if (pFVar5 != (FMassEntityManager *)0x0) {
        FMassObserverManager::ReleaseCreationHandle(&pFVar5->ObserverManager,this->CreationHandle);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Lock).SharedReferenceCount.ReferenceController);
  return;
}

// AppendEntities @ 1471f2980

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::ObserverManager::FCreationContext::AppendEntities
          (FCreationContext *this,TArrayView<FMassEntityHandle_const_,int> *param_1,
          FMassArchetypeEntityCollection *param_2)

{
  return;
}

// AppendEntities @ 1471f2990

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::ObserverManager::FCreationContext::AppendEntities
          (FCreationContext *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  return;
}

// DebugAreEntityCollectionsUpToDate @ 14720dc50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::ObserverManager::FCreationContext::DebugAreEntityCollectionsUpToDate
          (FCreationContext *this)

{
  bool bVar1;
  FBufferedNotification *pFVar2;
  FEntityCollection *this_00;
  
  if ((this->CreationHandle).OpIndex != -1) {
    pFVar2 = FObserverLock::GetCreationNotification((this->Lock).Object,this->CreationHandle);
    this_00 = (FEntityCollection *)&pFVar2->AffectedEntities;
    if ((pFVar2->AffectedEntities).TypeIndex != '\0') {
      this_00 = (FEntityCollection *)0x0;
    }
    if (this_00 != (FEntityCollection *)0x0) {
      bVar1 = FEntityCollection::IsUpToDate(this_00);
      return bVar1;
    }
  }
  return true;
}

// DebugCreateDummyCreationContext @ 14720dea0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __cdecl
UE::Mass::ObserverManager::FCreationContext::DebugCreateDummyCreationContext
          (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *__return_storage_ptr__)

{
  FCreationContext *this;
  TRawPtrProxy<UE::Mass::ObserverManager::FCreationContext> local_res8 [4];
  
  this = ::operator_new(0x18);
  local_res8[0].Object = (FCreationContext *)0x0;
  if (this != (FCreationContext *)0x0) {
    local_res8[0].Object = FCreationContext(this);
  }
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1><UE::Mass::ObserverManager::FCreationContext>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// GetEntityCollection @ 147221230

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeEntityCollection * __thiscall
UE::Mass::ObserverManager::FCreationContext::GetEntityCollection(FCreationContext *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Mass::ObserverManager::FCreationContext::GetEntityCollection'::__l2::
             _dynamic_atexit_destructor_for__DummyInstance__);
      _Init_thread_footer(&::_TSS0);
      return &DummyInstance;
    }
  }
  return &DummyInstance;
}

// GetEntityCollections @ 1472212b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::ObserverManager::FCreationContext::GetEntityCollections
          (FCreationContext *this,
          TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,FMassEntityManager *param_1)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FBufferedNotification *pFVar6;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar7;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *pTVar8;
  FEntityCollection *this_00;
  FMassEntityHandle local_res8;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->CreationHandle).OpIndex != -1) {
    pFVar6 = FObserverLock::GetCreationNotification((this->Lock).Object,this->CreationHandle);
    uVar1 = (pFVar6->AffectedEntities).TypeIndex;
    this_00 = (FEntityCollection *)&pFVar6->AffectedEntities;
    if (uVar1 != '\0') {
      this_00 = (FEntityCollection *)0x0;
    }
    if (this_00 == (FEntityCollection *)0x0) {
      if ((uVar1 != '\x01') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      local_res8 = (FMassEntityHandle)(pFVar6->AffectedEntities)._padding_;
      local_38.ArrayNum = 1;
      local_38.DataPtr = &local_res8;
      Utils::CreateEntityCollections(param_1,&local_38,NoDuplicates,__return_storage_ptr__);
    }
    else {
      pTVar7 = FEntityCollection::GetUpToDatePerArchetypeCollections(this_00,&local_28,param_1);
      iVar2 = pTVar7->ArrayNum;
      if (iVar2 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9a9,L"Invalid range size: %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
          ;
          return pTVar8;
        }
      }
      else if (iVar2 == 0) {
        return __return_storage_ptr__;
      }
      iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,iVar2,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      ConstructItems<FMassArchetypeEntityCollection,FMassArchetypeEntityCollection,int>
                ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x28,
                 pTVar7->DataPtr,iVar2);
    }
  }
  return __return_storage_ptr__;
}

// GetEntityCollections @ 147221430

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FMassArchetypeEntityCollection_const_,int> * __thiscall
UE::Mass::ObserverManager::FCreationContext::GetEntityCollections
          (FCreationContext *this,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FMassArchetypeEntityCollection *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSpawnedNum @ 147227980

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall UE::Mass::ObserverManager::FCreationContext::GetSpawnedNum(FCreationContext *this)

{
  return 0;
}

// IsDirty @ 1472320a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::ObserverManager::FCreationContext::IsDirty(FCreationContext *this)

{
  return true;
}

