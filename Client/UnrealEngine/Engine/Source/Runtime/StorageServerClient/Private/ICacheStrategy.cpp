// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 7

// ICacheStrategy @ 148cb4ed0

ICacheStrategy * __thiscall
StorageServer::ICacheStrategy::ICacheStrategy
          (ICacheStrategy *this,
          TUniquePtr<StorageServer::ICacheJournal,TDefaultDelete<StorageServer::ICacheJournal>_>
          *param_1,TUniquePtr<StorageServer::ICacheStorage,TDefaultDelete<StorageServer::ICacheStorage>_>
                   *param_2,float param_3)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  ICacheStrategy *pIVar7;
  FTSTicker *this_00;
  undefined8 *puVar8;
  ulong64 uVar9;
  TWeakPtr<FTSTicker::FElement,1> *pTVar10;
  TWeakPtr<FTSTicker::FElement,1> local_98;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  this->_padding_ = (longlong)&___7ICacheStrategy_StorageServer__6B_;
  pTVar1 = &this->FlushTicker;
  (this->Journal).Ptr = param_1->Ptr;
  param_1->Ptr = (ICacheJournal *)0x0;
  (this->Storage).Ptr = param_2->Ptr;
  param_2->Ptr = (ICacheStorage *)0x0;
  pTVar1->Object = (FElement *)0x0;
  (this->FlushTicker).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((this->Journal).Ptr == (ICacheJournal *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9127172689344069611>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStrategy.h"
                       ,0x15,"Journal.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pIVar7 = (ICacheStrategy *)(*pcVar5)();
      return pIVar7;
    }
  }
  if ((this->Storage).Ptr == (ICacheStorage *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9127172689344069610>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheStrategy.h"
                       ,0x16,"Storage.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pIVar7 = (ICacheStrategy *)(*pcVar5)();
      return pIVar7;
    }
  }
  if (param_3 <= 0.0) {
    if (pTVar1 != &local_88) {
      pTVar4 = (this->FlushTicker).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FElement *)0x0;
      (this->FlushTicker).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  else {
    this_00 = FTSTicker::GetCoreTicker();
    local_78 = (undefined1  [8])0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_70;
    puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VICacheStrategy_StorageServer____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar8[4] = FlushTick;
      puVar8[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    pTVar10 = FTSTicker::AddTicker
                        (this_00,&local_98,
                         (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_78,
                         param_3);
    if (pTVar1 != pTVar10) {
      pTVar1->Object = pTVar10->Object;
      pTVar10->Object = (FElement *)0x0;
      pTVar4 = (this->FlushTicker).WeakReferenceCount.ReferenceController;
      (this->FlushTicker).WeakReferenceCount.ReferenceController =
           (pTVar10->WeakReferenceCount).ReferenceController;
      (pTVar10->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_98.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_78);
  }
  return this;
}

// ~ICacheStrategy @ 148cb6bd0

void __thiscall StorageServer::ICacheStrategy::~ICacheStrategy(ICacheStrategy *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  ICacheStorage *pIVar5;
  ICacheJournal *pIVar6;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar1 = &this->FlushTicker;
  this->_padding_ = (longlong)&___7ICacheStrategy_StorageServer__6B_;
  if (((pTVar1->Object != (FElement *)0x0) &&
      (pTVar4 = (this->FlushTicker).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar1->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->FlushTicker).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->FlushTicker).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FElement *)0x0;
      (this->FlushTicker).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  pTVar4 = (this->FlushTicker).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pIVar5 = (this->Storage).Ptr;
  if (pIVar5 != (ICacheStorage *)0x0) {
    (**(code **)pIVar5->_padding_)(pIVar5,1);
  }
  pIVar6 = (this->Journal).Ptr;
  if (pIVar6 != (ICacheJournal *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  return;
}

// CacheChunkSize @ 148cbd340

void __thiscall
StorageServer::ICacheStrategy::CacheChunkSize
          (ICacheStrategy *this,FIoChunkId *param_1,long64 param_2)

{
  ICacheJournal *pIVar1;
  undefined1 local_res8 [4];
  undefined1 local_resc;
  long64 local_28;
  undefined1 local_20;
  undefined1 local_18 [8];
  undefined1 local_10;
  
  pIVar1 = (this->Journal).Ptr;
  local_resc = 0;
  local_20 = 1;
  local_10 = 0;
  local_28 = param_2;
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,param_1,local_18,&local_28,local_res8);
  return;
}

// Flush @ 148cc5ca0

void __thiscall StorageServer::ICacheStrategy::Flush(ICacheStrategy *this)

{
  ICacheJournal *pIVar1;
  
  pIVar1 = (this->Journal).Ptr;
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,0);
                    /* WARNING: Could not recover jumptable at 0x000148cc5cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Storage).Ptr)->_padding_ + 0x10))();
  return;
}

// FlushTick @ 148cc6510

bool __thiscall StorageServer::ICacheStrategy::FlushTick(ICacheStrategy *this,float param_1)

{
  (**(code **)(this->_padding_ + 0x30))();
  return true;
}

// IterateChunkIds @ 148cce350

void __thiscall
StorageServer::ICacheStrategy::IterateChunkIds
          (ICacheStrategy *this,
          TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&)>
          *param_1)

{
  ICacheJournal *pIVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  pIVar1 = (this->Journal).Ptr;
  local_18 = *(undefined8 *)param_1;
  local_10 = *(undefined8 *)&param_1->field_0x8;
  (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,&local_18);
  return;
}

// TryGetChunkSize @ 148ce16e0

bool __thiscall
StorageServer::ICacheStrategy::TryGetChunkSize
          (ICacheStrategy *this,FIoChunkId *param_1,long64 *param_2)

{
  ICacheJournal *pIVar1;
  char cVar2;
  undefined1 local_38 [8];
  undefined1 local_30;
  long64 local_28;
  char local_20;
  undefined1 local_14;
  
  pIVar1 = (this->Journal).Ptr;
  local_30 = 0;
  local_20 = '\0';
  local_14 = 0;
  cVar2 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_1,local_38);
  if ((cVar2 != '\0') && (local_20 != '\0')) {
    *param_2 = local_28;
    return true;
  }
  return false;
}

