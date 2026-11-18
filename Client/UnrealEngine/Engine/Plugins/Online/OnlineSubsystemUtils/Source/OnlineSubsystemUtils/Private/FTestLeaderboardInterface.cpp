// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 17

// FTestLeaderboardInterface @ 14ecd7d30

FTestLeaderboardInterface * __thiscall
FTestLeaderboardInterface::FTestLeaderboardInterface
          (FTestLeaderboardInterface *this,FString *param_1)

{
  undefined1 *puVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  int iVar3;
  FTSTicker *pFVar4;
  undefined1 *puVar5;
  undefined1 *this_00;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  pFVar4 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,pFVar4);
  this->_padding_ = (longlong)&___7FTestLeaderboardInterface__6B_;
  ::FString::FString(&this->Subsystem,param_1);
  this->bOverallSuccess = true;
  this->bReadLeaderboardAttempted = false;
  (this->UserId).Object = (FUniqueNetId *)0x0;
  (this->UserId).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->FindRankUserId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FindRankUserId).Data.ArrayNum = 0;
  (this->FindRankUserId).Data.ArrayMax = 0;
  (this->LeaderboardName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeaderboardName).Data.ArrayNum = 0;
  (this->LeaderboardName).Data.ArrayMax = 0;
  (this->SortedColumn).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedColumn).Data.ArrayNum = 0;
  (this->SortedColumn).Data.ArrayMax = 0;
  (this->WriteColumn).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WriteColumn).Data.ArrayNum = 0;
  (this->WriteColumn).Data.ArrayMax = 0;
  *(undefined8 *)&this->Columns = 0;
  *(undefined8 *)&(this->Columns).field_0x8 = 0;
  *(undefined8 *)&(this->Columns).field_0x20 = 0;
  this->bSkipWriteTest = false;
  *(undefined4 *)&(this->Columns).field_0x28 = 0;
  *(undefined4 *)&(this->Columns).field_0x2c = 0x80;
  *(undefined4 *)&(this->Columns).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Columns).field_0x34 = 0;
  *(undefined8 *)&(this->Columns).field_0x40 = 0;
  *(undefined4 *)&(this->Columns).field_0x48 = 0;
  *(undefined8 *)&this->LeaderboardReadRankCompleteDelegate = 0;
  puVar5 = &(this->LeaderboardReadRankCompleteDelegate).field_0x8;
  (this->Leaderboards).Object = (IOnlineLeaderboards *)0x0;
  (this->Leaderboards).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  *(undefined8 *)puVar5 = 0;
  *(undefined4 *)&(this->LeaderboardReadRankCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->LeaderboardReadRankUserCompleteDelegate = 0;
  this_00 = &(this->LeaderboardReadRankUserCompleteDelegate).field_0x8;
  (this->ReadObject).Object = (FOnlineLeaderboardRead *)0x0;
  (this->ReadObject).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->LeaderboardFlushDelegate = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->LeaderboardReadRankUserCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->LeaderboardFlushDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LeaderboardFlushDelegate).field_0x10 = 0;
  *(undefined8 *)&this->LeaderboardReadCompleteDelegate = 0;
  *(undefined8 *)&(this->LeaderboardReadCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LeaderboardReadCompleteDelegate).field_0x10 = 0;
  (this->LeaderboardFlushDelegateHandle).ID = 0;
  (this->LeaderboardReadCompleteDelegateHandle).ID = 0;
  (this->LeaderboardReadRankCompleteDelegateHandle).ID = 0;
  (this->LeaderboardReadRankUserCompleteDelegateHandle).ID = 0;
  this->TestPhase = 0;
  this->LastTestPhase = -1;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  local_48 = &local_70;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestLeaderboardInterface____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = OnLeaderboardFlushComplete;
    puVar6[3] = this;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  iVar3 = local_70.DelegateSize;
  FVar2 = local_70.DelegateAllocator;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->LeaderboardFlushDelegate,(FWriteAccessScope *)&local_60);
  puVar1 = &(this->LeaderboardFlushDelegate).field_0x8;
  if ((*(int *)&(this->LeaderboardFlushDelegate).field_0x10 != 0) &&
     (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->LeaderboardFlushDelegate).field_0x8,0,0,0x10);
    *(undefined4 *)&(this->LeaderboardFlushDelegate).field_0x10 = 0;
  }
  if (*(void **)puVar1 != (void *)0x0) {
    FMemory::Free(*(void **)puVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)puVar1 = FVar2;
  *(int *)&(this->LeaderboardFlushDelegate).field_0x10 = iVar3;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  local_48 = &local_70;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[4] = OnLeaderboardReadComplete;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestLeaderboardInterface____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  iVar3 = local_70.DelegateSize;
  FVar2 = local_70.DelegateAllocator;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->LeaderboardReadCompleteDelegate,(FWriteAccessScope *)&local_60);
  puVar1 = &(this->LeaderboardReadCompleteDelegate).field_0x8;
  if ((*(int *)&(this->LeaderboardReadCompleteDelegate).field_0x10 != 0) &&
     (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->LeaderboardReadCompleteDelegate).field_0x8,0,0,0x10);
    *(undefined4 *)&(this->LeaderboardReadCompleteDelegate).field_0x10 = 0;
  }
  if (*(void **)puVar1 != (void *)0x0) {
    FMemory::Free(*(void **)puVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)puVar1 = FVar2;
  *(int *)&(this->LeaderboardReadCompleteDelegate).field_0x10 = iVar3;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  local_48 = &local_70;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestLeaderboardInterface____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = OnLeaderboardRankReadComplete;
    puVar6[3] = this;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  iVar3 = local_70.DelegateSize;
  FVar2 = local_70.DelegateAllocator;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->LeaderboardReadRankCompleteDelegate,(FWriteAccessScope *)&local_60);
  puVar1 = &(this->LeaderboardReadRankCompleteDelegate).field_0x8;
  if ((*(int *)&(this->LeaderboardReadRankCompleteDelegate).field_0x10 != 0) &&
     (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)puVar5,0,0,0x10);
    *(undefined4 *)&(this->LeaderboardReadRankCompleteDelegate).field_0x10 = 0;
  }
  if (*(void **)puVar1 != (void *)0x0) {
    FMemory::Free(*(void **)puVar1);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)puVar1 = FVar2;
  *(int *)&(this->LeaderboardReadRankCompleteDelegate).field_0x10 = iVar3;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  local_48 = &local_70;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[4] = OnLeaderboardUserRankReadComplete;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestLeaderboardInterface____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  iVar3 = local_70.DelegateSize;
  FVar2 = local_70.DelegateAllocator;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->LeaderboardReadRankUserCompleteDelegate,(FWriteAccessScope *)&local_60);
  puVar5 = &(this->LeaderboardReadRankUserCompleteDelegate).field_0x8;
  if ((*(int *)&(this->LeaderboardReadRankUserCompleteDelegate).field_0x10 != 0) &&
     (*(undefined8 **)puVar5 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)puVar5)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,0,0x10);
    *(undefined4 *)&(this->LeaderboardReadRankUserCompleteDelegate).field_0x10 = 0;
  }
  if (*(void **)puVar5 != (void *)0x0) {
    FMemory::Free(*(void **)puVar5);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)puVar5 = FVar2;
  *(int *)&(this->LeaderboardReadRankUserCompleteDelegate).field_0x10 = iVar3;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return this;
}

// ~FTestLeaderboardInterface @ 14ecdaf10

void __thiscall
FTestLeaderboardInterface::~FTestLeaderboardInterface(FTestLeaderboardInterface *this)

{
  TSharedPtr<IOnlineLeaderboards,1> *pTVar1;
  IOnlineLeaderboards *pIVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->Leaderboards;
  this->_padding_ = (longlong)&___7FTestLeaderboardInterface__6B_;
  pIVar2 = pTVar1->Object;
  if (pIVar2 != (IOnlineLeaderboards *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x30))(pIVar2,&this->LeaderboardReadCompleteDelegateHandle);
    if (pTVar1->Object == (IOnlineLeaderboards *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(pTVar1->Object->_padding_ + 0x30))
              (pTVar1->Object,&this->LeaderboardReadRankCompleteDelegateHandle);
    if (pTVar1->Object == (IOnlineLeaderboards *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(pTVar1->Object->_padding_ + 0x30))
              (pTVar1->Object,&this->LeaderboardReadRankUserCompleteDelegateHandle);
    if (pTVar1->Object == (IOnlineLeaderboards *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(pTVar1->Object->_padding_ + 0x68))
              (pTVar1->Object,&this->LeaderboardFlushDelegateHandle);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<IOnlineLeaderboards,1> *)&local_18) {
    pTVar1->Object = (IOnlineLeaderboards *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Leaderboards).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->LeaderboardReadRankUserCompleteDelegate);
  pvVar3 = *(void **)&(this->LeaderboardReadRankUserCompleteDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LeaderboardReadRankUserCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LeaderboardReadRankCompleteDelegate
            );
  pvVar3 = *(void **)&(this->LeaderboardReadRankCompleteDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LeaderboardReadRankCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LeaderboardReadCompleteDelegate);
  pvVar3 = *(void **)&(this->LeaderboardReadCompleteDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LeaderboardReadCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LeaderboardFlushDelegate);
  pvVar3 = *(void **)&(this->LeaderboardFlushDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LeaderboardFlushDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReadObject).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Leaderboards).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->Columns).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Columns).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->Columns);
  pFVar4 = (this->WriteColumn).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->SortedColumn).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->LeaderboardName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->FindRankUserId).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserId).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->Subsystem).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// FlushLeaderboards @ 14ece6f30

void __thiscall FTestLeaderboardInterface::FlushLeaderboards(FTestLeaderboardInterface *this)

{
  IOnlineLeaderboards *pIVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 *puVar4;
  FName local_res8;
  undefined1 local_res10 [8];
  
  if ((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Leaderboards).Object;
  puVar4 = (ulong64 *)
           (**(code **)(pIVar1->_padding_ + 0x60))
                     (pIVar1,local_res10,&this->LeaderboardFlushDelegate);
  (this->LeaderboardFlushDelegateHandle).ID = *puVar4;
  if ((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Leaderboards).Object;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0x58);
  ::FName::FName(&local_res8,L"TEST");
  (*pcVar2)(pIVar1,&local_res8);
  return;
}

// OnLeaderboardFlushComplete @ 14eced7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestLeaderboardInterface::OnLeaderboardFlushComplete
          (FTestLeaderboardInterface *this,FName param_1,bool param_2)

{
  IOnlineLeaderboards *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnlineLeaderboard._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnLeaderboardFlushComplete Session: %s bWasSuccessful: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->bOverallSuccess == false) || (!param_2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bOverallSuccess = bVar3;
  if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->Leaderboards).Object;
  (**(code **)(pIVar1->_padding_ + 0x68))(pIVar1,&this->LeaderboardFlushDelegateHandle);
  this->TestPhase = this->TestPhase + 1;
  return;
}

// OnLeaderboardRankReadComplete @ 14eced8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestLeaderboardInterface::OnLeaderboardRankReadComplete
          (FTestLeaderboardInterface *this,bool param_1)

{
  IOnlineLeaderboards *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  if (5 < (byte)LogOnlineLeaderboard._0_1_) {
    ::FString::PrintfImpl(&local_18,L"OnLeaderboardRankReadComplete bWasSuccessful: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->bOverallSuccess == false) || (this->bReadLeaderboardAttempted != param_1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bOverallSuccess = bVar3;
  PrintLeaderboards(this);
  if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->Leaderboards).Object;
  (**(code **)(pIVar1->_padding_ + 0x30))(pIVar1,&this->LeaderboardReadRankCompleteDelegateHandle);
  this->TestPhase = this->TestPhase + 1;
  this->bReadLeaderboardAttempted = false;
  return;
}

// OnLeaderboardReadComplete @ 14eced9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestLeaderboardInterface::OnLeaderboardReadComplete(FTestLeaderboardInterface *this,bool param_1)

{
  IOnlineLeaderboards *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  if (5 < (byte)LogOnlineLeaderboard._0_1_) {
    ::FString::PrintfImpl(&local_18,L"OnLeaderboardReadComplete bWasSuccessful: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->bOverallSuccess == false) || (this->bReadLeaderboardAttempted != param_1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bOverallSuccess = bVar3;
  PrintLeaderboards(this);
  if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->Leaderboards).Object;
  (**(code **)(pIVar1->_padding_ + 0x30))(pIVar1,&this->LeaderboardReadCompleteDelegateHandle);
  this->TestPhase = this->TestPhase + 1;
  this->bReadLeaderboardAttempted = false;
  return;
}

// OnLeaderboardUserRankReadComplete @ 14ecedad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestLeaderboardInterface::OnLeaderboardUserRankReadComplete
          (FTestLeaderboardInterface *this,bool param_1)

{
  IOnlineLeaderboards *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  if (5 < (byte)LogOnlineLeaderboard._0_1_) {
    ::FString::PrintfImpl(&local_18,L"OnLeaderboardUserRankReadComplete bWasSuccessful: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->bOverallSuccess == false) || (this->bReadLeaderboardAttempted != param_1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bOverallSuccess = bVar3;
  PrintLeaderboards(this);
  if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->Leaderboards).Object;
  (**(code **)(pIVar1->_padding_ + 0x30))
            (pIVar1,&this->LeaderboardReadRankUserCompleteDelegateHandle);
  this->TestPhase = this->TestPhase + 1;
  this->bReadLeaderboardAttempted = false;
  return;
}

// PrintLeaderboards @ 14ecf4170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestLeaderboardInterface::PrintLeaderboards(FTestLeaderboardInterface *this)

{
  ulonglong uVar1;
  int iVar2;
  FOnlineLeaderboardRead *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  longlong lVar11;
  uint uVar12;
  FString local_d8;
  FString local_c8;
  FScriptContainerElement *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  FScriptContainerElement *local_90;
  int iStack_88;
  uint uStack_84;
  TBitArray<FDefaultBitArrayAllocator> *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  FString local_60 [2];
  undefined4 local_34;
  
  uVar12 = 0;
  lVar11 = 0;
  do {
    if (((this->ReadObject).Object == (FOnlineLeaderboardRead *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->ReadObject).Object;
    if ((pFVar3->Rows).ArrayNum <= (int)uVar12) {
      return;
    }
    if ((pFVar3 == (FOnlineLeaderboardRead *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->ReadObject).Object;
    uVar7 = 0;
    if ((int)uVar12 < (pFVar3->Rows).ArrayNum) {
      uVar7 = ~uVar12 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (pFVar3->Rows).AllocatorInstance.Data;
    if (4 < (byte)LogOnlineLeaderboard._0_1_) {
      ::FString::PrintfImpl(&local_d8,L"   Leaderboard stats for: Nickname = %s, Rank = %d");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    local_b8 = pFVar4 + lVar11 + 0x28;
    iStack_88 = 0;
    iVar2 = *(int *)(pFVar4 + lVar11 + 0x50);
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar4 + lVar11 + 0x38);
    local_70 = 0;
    uStack_84 = 1;
    iStack_74 = 0;
    if (iVar2 != 0) {
      pTVar10 = TStack_b0.Array;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar4 + lVar11 + 0x48) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar4 + lVar11 + 0x48);
      }
      uVar7 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
      while (uVar7 == 0) {
        lVar8 = (longlong)iStack_88;
        local_70 = local_70 + 0x20;
        iStack_88 = iStack_88 + 1;
        iStack_74 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_14ecf434d;
        uVar7 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uStack_84 = -uVar7 & uVar7;
      uVar1 = (ulonglong)uStack_84 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_74 = local_70 + -1 + (int)lVar8;
      if (iVar2 < iStack_74) {
        iStack_74 = iVar2;
      }
    }
LAB_14ecf434d:
    uStack_78 = 0xffffffff;
    uStack_6c = local_34;
    TStack_b0._padding_ = CONCAT44(uStack_84,iStack_88);
    TStack_b0.CurrentBitIndex = iStack_74;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    TStack_b0._28_4_ = local_34;
    TStack_b0.BaseBitIndex = local_70;
    local_90 = local_b8;
    local_80 = TStack_b0.Array;
    iVar9 = iStack_74;
    if (iStack_74 < iVar2) {
      do {
        if (4 < (byte)LogOnlineLeaderboard._0_1_) {
          FVariantData::ToString
                    ((FVariantData *)(*(longlong *)local_b8 + 0x10 + (longlong)iVar9 * 0x38),
                     local_60);
          ::FString::PrintfImpl(&local_c8,L"     %s = %s");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard)
          ;
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
        }
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
        iVar9 = TStack_b0.CurrentBitIndex;
      } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
    }
    uVar12 = uVar12 + 1;
    lVar11 = lVar11 + 0x78;
  } while( true );
}

// ReadLeaderboards @ 14ecf60d0

void __thiscall FTestLeaderboardInterface::ReadLeaderboards(FTestLeaderboardInterface *this)

{
  IOnlineLeaderboards *pIVar1;
  code *pcVar2;
  bool bVar3;
  TestLeaderboardRead *this_00;
  ulong64 *puVar4;
  longlong lVar5;
  TRawPtrProxy<TestLeaderboardRead> local_res8;
  undefined1 local_res10 [8];
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  TSharedRef<FUniqueNetId_const_,1> local_28;
  TSharedRef<FOnlineLeaderboardRead,1> local_18;
  
  this_00 = ::operator_new(0x48);
  local_res8.Object = (TestLeaderboardRead *)0x0;
  if (this_00 != (TestLeaderboardRead *)0x0) {
    local_res8.Object =
         TestLeaderboardRead::TestLeaderboardRead
                   (this_00,&this->LeaderboardName,&this->SortedColumn,&this->Columns);
  }
  TSharedPtr<FOnlineLeaderboardRead,1>::operator=<TestLeaderboardRead>
            (&this->ReadObject,&local_res8);
  TSharedPtr<FOnlineLeaderboardRead,1>::ToSharedRef(&this->ReadObject,&local_18);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  if ((this->UserId).Object == (FUniqueNetId *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.Object = (this->UserId).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (this->UserId).SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_28.Object == (FUniqueNetId *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((local_38.Data <= &local_28) &&
     (&local_28 < (TSharedRef<FUniqueNetId_const_,1> *)(local_38.Data + (longlong)iStack_2c * 0x10))
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_30 == iStack_2c) {
    local_30 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_38,&iStack_2c);
  }
  lVar5 = (longlong)local_30;
  _local_30 = CONCAT44(iStack_2c,local_30 + 1);
  *(FUniqueNetId **)&local_38.Data[lVar5 * 0x10].field_0x0 = local_28.Object;
  *(TReferenceControllerBase<1> **)(local_38.Data + lVar5 * 0x10 + 8) =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if ((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Leaderboards).Object;
  puVar4 = (ulong64 *)
           (**(code **)(pIVar1->_padding_ + 0x28))
                     (pIVar1,local_res10,&this->LeaderboardReadCompleteDelegate);
  (this->LeaderboardReadCompleteDelegateHandle).ID = *puVar4;
  if ((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Leaderboards).Object;
  bVar3 = (bool)(**(code **)(pIVar1->_padding_ + 8))(pIVar1,&local_38,&local_18);
  this->bReadLeaderboardAttempted = bVar3;
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)local_38.Data,local_30);
  if ((TSharedRef<FUniqueNetId_const_,1> *)local_38.Data != (TSharedRef<FUniqueNetId_const_,1> *)0x0
     ) {
    FMemory::Free(local_38.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ReadLeaderboardsFriends @ 14ecf6350

void __thiscall FTestLeaderboardInterface::ReadLeaderboardsFriends(FTestLeaderboardInterface *this)

{
  IOnlineLeaderboards *pIVar1;
  code *pcVar2;
  bool bVar3;
  TestLeaderboardRead *this_00;
  ulong64 *puVar4;
  TRawPtrProxy<TestLeaderboardRead> local_res8;
  undefined1 local_res10 [8];
  TSharedRef<FOnlineLeaderboardRead,1> local_18;
  
  this_00 = ::operator_new(0x48);
  local_res8.Object = (TestLeaderboardRead *)0x0;
  if (this_00 != (TestLeaderboardRead *)0x0) {
    local_res8.Object =
         TestLeaderboardRead::TestLeaderboardRead
                   (this_00,&this->LeaderboardName,&this->SortedColumn,&this->Columns);
  }
  TSharedPtr<FOnlineLeaderboardRead,1>::operator=<TestLeaderboardRead>
            (&this->ReadObject,&local_res8);
  TSharedPtr<FOnlineLeaderboardRead,1>::ToSharedRef(&this->ReadObject,&local_18);
  if ((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Leaderboards).Object;
  puVar4 = (ulong64 *)
           (**(code **)(pIVar1->_padding_ + 0x28))
                     (pIVar1,local_res10,&this->LeaderboardReadCompleteDelegate);
  (this->LeaderboardReadCompleteDelegateHandle).ID = *puVar4;
  if ((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Leaderboards).Object;
  bVar3 = (bool)(**(code **)(pIVar1->_padding_ + 0x10))(pIVar1,0,&local_18);
  this->bReadLeaderboardAttempted = bVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ReadLeaderboardsRank @ 14ecf6460

void __thiscall
FTestLeaderboardInterface::ReadLeaderboardsRank
          (FTestLeaderboardInterface *this,int param_1,int param_2)

{
  IOnlineLeaderboards *pIVar1;
  code *pcVar2;
  bool bVar3;
  TestLeaderboardRead *this_00;
  ulong64 *puVar4;
  TRawPtrProxy<TestLeaderboardRead> local_res8;
  undefined1 local_res20 [8];
  TSharedRef<FOnlineLeaderboardRead,1> local_28;
  
  this_00 = ::operator_new(0x48);
  local_res8.Object = (TestLeaderboardRead *)0x0;
  if (this_00 != (TestLeaderboardRead *)0x0) {
    local_res8.Object =
         TestLeaderboardRead::TestLeaderboardRead
                   (this_00,&this->LeaderboardName,&this->SortedColumn,&this->Columns);
  }
  TSharedPtr<FOnlineLeaderboardRead,1>::operator=<TestLeaderboardRead>
            (&this->ReadObject,&local_res8);
  TSharedPtr<FOnlineLeaderboardRead,1>::ToSharedRef(&this->ReadObject,&local_28);
  if ((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Leaderboards).Object;
  puVar4 = (ulong64 *)
           (**(code **)(pIVar1->_padding_ + 0x28))
                     (pIVar1,local_res20,&this->LeaderboardReadRankCompleteDelegate);
  (this->LeaderboardReadRankCompleteDelegateHandle).ID = *puVar4;
  if ((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Leaderboards).Object;
  bVar3 = (bool)(**(code **)(pIVar1->_padding_ + 0x18))(pIVar1,param_1,param_2,&local_28);
  this->bReadLeaderboardAttempted = bVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// ReadLeaderboardsUser @ 14ecf6580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestLeaderboardInterface::ReadLeaderboardsUser
          (FTestLeaderboardInterface *this,FUniqueNetId *param_1,int param_2)

{
  IOnlineSubsystem *pIVar1;
  IOnlineLeaderboards *pIVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  TestLeaderboardRead *pTVar6;
  TestLeaderboardRead *pTVar7;
  undefined8 uVar8;
  ulong64 *puVar9;
  TRawPtrProxy<TestLeaderboardRead> local_res8;
  undefined1 local_res20 [8];
  longlong local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FString local_88;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedRef<FOnlineLeaderboardRead,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  void *local_48 [2];
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  pTVar7 = (TestLeaderboardRead *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  pIVar1 = this->OnlineSub;
  pTVar6 = pTVar7;
  if (pIVar1 != (IOnlineSubsystem *)0x0) {
    plVar5 = (longlong *)(**(code **)(pIVar1->_padding_ + 0x80))(pIVar1,local_58);
    pTVar6 = (TestLeaderboardRead *)&DAT_00000001;
    if (*plVar5 != 0) {
      bVar4 = false;
      goto LAB_14ecf65ce;
    }
  }
  bVar4 = true;
LAB_14ecf65ce:
  if (pTVar6 != (TestLeaderboardRead *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  if (bVar4) {
    this->TestPhase = this->TestPhase + 1;
    this->bOverallSuccess = false;
  }
  else {
    pTVar6 = ::operator_new(0x48);
    if (pTVar6 != (TestLeaderboardRead *)0x0) {
      pTVar7 = TestLeaderboardRead::TestLeaderboardRead
                         (pTVar6,&this->LeaderboardName,&this->SortedColumn,&this->Columns);
    }
    local_res8.Object = pTVar7;
    TSharedPtr<FOnlineLeaderboardRead,1>::operator=<TestLeaderboardRead>
              (&this->ReadObject,&local_res8);
    TSharedPtr<FOnlineLeaderboardRead,1>::ToSharedRef(&this->ReadObject,&local_68);
    plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_38);
    if ((*plVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar5 = (longlong *)*plVar5;
    pcVar3 = *(code **)(*plVar5 + 0x120);
    uVar8 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_48);
    (*pcVar3)(plVar5,&local_98,uVar8);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    if (local_98 == 0) {
      if (2 < (byte)LogOnlineLeaderboard._0_1_) {
        ::FString::PrintfImpl
                  (&local_88,
                   L"Cannot run the leaderboards around user test as it failed to start. UserId not valid"
                  );
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      this->bOverallSuccess = false;
      if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar2 = (this->Leaderboards).Object;
      (**(code **)(pIVar2->_padding_ + 0x30))
                (pIVar2,&this->LeaderboardReadRankUserCompleteDelegateHandle);
      this->TestPhase = this->TestPhase + 1;
    }
    else {
      if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar2 = (this->Leaderboards).Object;
      puVar9 = (ulong64 *)
               (**(code **)(pIVar2->_padding_ + 0x28))
                         (pIVar2,local_res20,&this->LeaderboardReadRankUserCompleteDelegate);
      (this->LeaderboardReadRankUserCompleteDelegateHandle).ID = *puVar9;
      if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar2 = (this->Leaderboards).Object;
      pcVar3 = *(code **)(pIVar2->_padding_ + 0x20);
      if ((local_98 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_78 = local_98;
      pTStack_70 = pTStack_90;
      if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_98 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = (bool)(*pcVar3)(pIVar2,&local_78,param_2,&local_68);
      this->bReadLeaderboardAttempted = bVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ReadLeaderboardsUser @ 14ecf68b0

void __thiscall
FTestLeaderboardInterface::ReadLeaderboardsUser(FTestLeaderboardInterface *this,int param_1)

{
  FUniqueNetId *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_18);
  if (*plVar5 == 0) {
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
  plVar5 = (longlong *)
           (**(code **)(*(longlong *)*plVar5 + 0x120))
                     ((longlong *)*plVar5,local_28,&this->FindRankUserId);
  if (*plVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (FUniqueNetId *)*plVar5;
  pTVar2 = (TReferenceControllerBase<1> *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  if (pFVar1 == (FUniqueNetId *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  ReadLeaderboardsUser(this,pFVar1,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// Test @ 14ecfc340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTestLeaderboardInterface::Test
          (FTestLeaderboardInterface *this,UWorld *param_1,FString *param_2,FString *param_3,
          TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
          *param_4,FString *param_5)

{
  undefined1 *_Dst;
  TSharedPtr<IOnlineLeaderboards,1> *pTVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  IOnlineSubsystem *pIVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
  *this_00;
  FName local_res8;
  FString local_78;
  FString local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  ::FString::operator=(&this->FindRankUserId,param_5);
  if ((this->Subsystem).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(this->Subsystem).Data.AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res8,pwVar10);
  pIVar7 = IOnlineSubsystem::Get(pFVar6);
  this->OnlineSub = pIVar7;
  if (pIVar7 == (IOnlineSubsystem *)0x0) {
    if ((byte)LogOnlineLeaderboard._0_1_ < 3) goto LAB_14ecfc559;
    ::FString::PrintfImpl(&local_78,L"Failed to get online subsystem for %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
  }
  else {
    plVar8 = (longlong *)(**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,local_58);
    lVar2 = *plVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    if (lVar2 != 0) {
      plVar8 = (longlong *)
               (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_38);
      if ((*plVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar9 = (undefined8 *)
               (**(code **)(*(longlong *)*plVar8 + 0x110))((longlong *)*plVar8,local_48,0);
      if (&this->UserId != (TSharedPtr<FUniqueNetId_const_,1> *)puVar9) {
        (this->UserId).Object = (FUniqueNetId *)*puVar9;
        *puVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->UserId).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    }
    puVar9 = (undefined8 *)
             (**(code **)(this->OnlineSub->_padding_ + 0x60))(this->OnlineSub,local_28);
    pTVar1 = &this->Leaderboards;
    if (pTVar1 != (TSharedPtr<IOnlineLeaderboards,1> *)puVar9) {
      pTVar1->Object = (IOnlineLeaderboards *)*puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Leaderboards).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if (pTVar1->Object != (IOnlineLeaderboards *)0x0) {
      ::FString::operator=(&this->LeaderboardName,param_2);
      ::FString::operator=(&this->SortedColumn,param_3);
      this_00 = &this->Columns;
      if (this_00 == param_4) {
        return;
      }
      TSparseArray<TSparseSetElement<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this_00,0,*(int *)&(this->Columns).field_0x8);
      if (*(void **)this_00 != (void *)0x0) {
        FMemory::Free(*(void **)this_00);
      }
      *(undefined8 *)this_00 = *(undefined8 *)param_4;
      _Dst = &(this->Columns).field_0x10;
      *(undefined8 *)param_4 = 0;
      *(undefined4 *)&(this->Columns).field_0x8 = *(undefined4 *)&param_4->field_0x8;
      *(undefined4 *)&(this->Columns).field_0xc = *(undefined4 *)&param_4->field_0xc;
      *(undefined8 *)&param_4->field_0x8 = 0;
      if (_Dst != &param_4->field_0x10) {
        if (*(longlong *)&param_4->field_0x20 == 0) {
          memmove(_Dst,&param_4->field_0x10,0x10);
        }
        pvVar3 = *(void **)&(this->Columns).field_0x20;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        *(undefined8 *)&(this->Columns).field_0x20 = *(undefined8 *)&param_4->field_0x20;
        *(undefined8 *)&param_4->field_0x20 = 0;
        *(undefined4 *)&(this->Columns).field_0x28 = *(undefined4 *)&param_4->field_0x28;
        *(undefined4 *)&(this->Columns).field_0x2c = *(undefined4 *)&param_4->field_0x2c;
        *(undefined8 *)&param_4->field_0x28 = 0;
      }
      *(undefined4 *)&(this->Columns).field_0x30 = *(undefined4 *)&param_4->field_0x30;
      *(undefined4 *)&(this->Columns).field_0x34 = *(undefined4 *)&param_4->field_0x34;
      *(undefined4 *)&param_4->field_0x30 = 0xffffffff;
      *(undefined4 *)&param_4->field_0x34 = 0;
      if (*(longlong *)&param_4->field_0x40 == 0) {
        *(undefined4 *)&(this->Columns).field_0x38 = *(undefined4 *)&param_4->field_0x38;
      }
      pvVar3 = *(void **)&(this->Columns).field_0x40;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->Columns).field_0x40 = *(undefined8 *)&param_4->field_0x40;
      *(undefined8 *)&param_4->field_0x40 = 0;
      *(undefined4 *)&(this->Columns).field_0x48 = *(undefined4 *)&param_4->field_0x48;
      *(undefined4 *)&param_4->field_0x48 = 0;
      return;
    }
    if ((byte)LogOnlineLeaderboard._0_1_ < 3) goto LAB_14ecfc559;
    ::FString::PrintfImpl(&local_68,L"Failed to get online leaderboards interface for %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
    local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_14ecfc559:
  this->bOverallSuccess = false;
  return;
}

// TestFromConfig @ 14ed01940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTestLeaderboardInterface::TestFromConfig(FTestLeaderboardInterface *this,UWorld *param_1)

{
  TSharedPtr<IOnlineLeaderboards,1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  IOnlineSubsystem *pIVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  Type local_res8 [16];
  TPairInitializer<FString_const_&,EOnlineKeyValuePairDataType::Type_&&> local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_158;
  TArray<FString,TSizedDefaultAllocator<32>_> local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  Type *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  if ((this->Subsystem).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(this->Subsystem).Data.AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName((FName *)&local_res18.Value,pwVar10);
  pIVar7 = IOnlineSubsystem::Get(pFVar6);
  this->OnlineSub = pIVar7;
  if (pIVar7 == (IOnlineSubsystem *)0x0) {
    if ((byte)LogOnlineLeaderboard._0_1_ < 3) goto LAB_14ed01b2d;
    ::FString::PrintfImpl(&local_f8,L"Failed to get online subsystem for %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
  }
  else {
    plVar8 = (longlong *)(**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,local_78);
    lVar2 = *plVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    uVar11 = 0;
    if (lVar2 != 0) {
      plVar8 = (longlong *)
               (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_58);
      if ((*plVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar9 = (undefined8 *)
               (**(code **)(*(longlong *)*plVar8 + 0x110))((longlong *)*plVar8,local_68,0);
      if (&this->UserId != (TSharedPtr<FUniqueNetId_const_,1> *)puVar9) {
        (this->UserId).Object = (FUniqueNetId *)*puVar9;
        *puVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->UserId).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    }
    puVar9 = (undefined8 *)
             (**(code **)(this->OnlineSub->_padding_ + 0x60))(this->OnlineSub,local_48);
    pTVar1 = &this->Leaderboards;
    if (pTVar1 != (TSharedPtr<IOnlineLeaderboards,1> *)puVar9) {
      pTVar1->Object = (IOnlineLeaderboards *)*puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Leaderboards).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (pTVar1->Object != (IOnlineLeaderboards *)0x0) {
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 0;
      local_158.ArrayMax = 0;
      local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.ArrayNum = 0;
      local_148.ArrayMax = 0;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Data.ArrayNum = 0;
      local_138.Data.ArrayMax = 0;
      bVar4 = FConfigCacheIni::GetString
                        (GConfig,L"TestLeaderboardInterface",L"LeaderboardName",&local_108,
                         &GEngineIni);
      if (bVar4) {
        bVar4 = FConfigCacheIni::GetString
                          (GConfig,L"TestLeaderboardInterface",L"LeaderboardSortedColumn",&local_118
                           ,&GEngineIni);
        if (bVar4) {
          iVar5 = FConfigCacheIni::GetArray
                            (GConfig,L"TestLeaderboardInterface",L"LeaderboardColumns",&local_158,
                             &GEngineIni);
          if (iVar5 == 0) {
            if (2 < (byte)LogOnlineLeaderboard._0_1_) {
              ::FString::PrintfImpl
                        (&local_b8,L"Config setup for leaderboards had no LeaderboardColumns!");
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
              local_d8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
              goto LAB_14ed01d3a;
            }
          }
          else {
            iVar5 = FConfigCacheIni::GetArray
                              (GConfig,L"TestLeaderboardInterface",L"LeaderboardColumnTypes",
                               &local_148,&GEngineIni);
            if (iVar5 != 0) {
              FConfigCacheIni::GetString
                        (GConfig,L"TestLeaderboardInterface",L"LeaderboardWriteColumnName",
                         &local_128,&GEngineIni);
              FConfigCacheIni::GetString
                        (GConfig,L"TestLeaderboardInterface",L"LeaderboardUserIdLookup",&local_138,
                         &GEngineIni);
              if (local_158.ArrayNum == local_148.ArrayNum) {
                iVar5 = local_108.Data.ArrayNum + -1;
                if (local_108.Data.ArrayNum == 0) {
                  iVar5 = 0;
                }
                ::FString::AssignRange
                          (&this->LeaderboardName,(wchar_t *)local_108.Data.AllocatorInstance.Data,
                           iVar5);
                uVar12 = 0;
                uVar13 = local_118.Data.ArrayNum - 1;
                if (local_118.Data.ArrayNum == 0) {
                  uVar13 = uVar12;
                }
                ::FString::AssignRange
                          (&this->SortedColumn,(wchar_t *)local_118.Data.AllocatorInstance.Data,
                           uVar13);
                uVar13 = local_128.Data.ArrayNum - 1;
                if (local_128.Data.ArrayNum == 0) {
                  uVar13 = uVar12;
                }
                ::FString::AssignRange
                          (&this->WriteColumn,(wchar_t *)local_128.Data.AllocatorInstance.Data,
                           uVar13);
                uVar13 = local_138.Data.ArrayNum - 1;
                if (local_138.Data.ArrayNum == 0) {
                  uVar13 = uVar12;
                }
                ::FString::AssignRange
                          (&this->FindRankUserId,(wchar_t *)local_138.Data.AllocatorInstance.Data,
                           uVar13);
                if (0 < local_158.ArrayNum) {
                  do {
                    uVar13 = uVar12;
                    if ((int)uVar11 < local_158.ArrayNum) {
                      uVar13 = ~uVar11 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pFVar14 = local_158.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
                    uVar13 = uVar12;
                    if ((int)uVar11 < local_148.ArrayNum) {
                      uVar13 = ~uVar11 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    local_res8[0] =
                         EOnlineKeyValuePairDataType::FromString
                                   ((FString *)
                                    (local_148.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10
                                    ));
                    local_80 = local_res8;
                    local_88 = pFVar14;
                    TSet<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>,TDefaultMapHashableKeyFuncs<FString,enum_EOnlineKeyValuePairDataType::Type,0>,FDefaultSetAllocator>
                    ::
                    Emplace<TPairInitializer<FString_const_&,enum_EOnlineKeyValuePairDataType::Type_&&>_>
                              (&this->Columns,&local_res18,(bool *)&local_88);
                    uVar11 = uVar11 + 1;
                  } while ((int)uVar11 < local_158.ArrayNum);
                }
              }
              else {
                if (2 < (byte)LogOnlineLeaderboard._0_1_) {
                  ::FString::PrintfImpl(&local_98,L"Differing numbers of columns vs column types!!")
                  ;
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
                  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_98.Data.AllocatorInstance.Data);
                  }
                }
                this->bOverallSuccess = false;
              }
              goto LAB_14ed01f82;
            }
            if (2 < (byte)LogOnlineLeaderboard._0_1_) {
              ::FString::PrintfImpl
                        (&local_a8,L"Config setup for leaderboards had no LeaderboardColumnTypes!");
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
              local_d8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
              goto LAB_14ed01d3a;
            }
          }
        }
        else if (2 < (byte)LogOnlineLeaderboard._0_1_) {
          ::FString::PrintfImpl
                    (&local_c8,L"Config setup for leaderboards had no LeaderboardSortedColumn!");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard)
          ;
          local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
          goto LAB_14ed01d3a;
        }
      }
      else if (2 < (byte)LogOnlineLeaderboard._0_1_) {
        ::FString::PrintfImpl(&local_d8,L"Config setup for leaderboards had no LeaderboardName!");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
LAB_14ed01d3a:
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      this->bOverallSuccess = false;
LAB_14ed01f82:
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
      if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
      return;
    }
    if ((byte)LogOnlineLeaderboard._0_1_ < 3) goto LAB_14ed01b2d;
    ::FString::PrintfImpl(&local_e8,L"Failed to get online leaderboards interface for %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
    local_f8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
LAB_14ed01b2d:
  this->bOverallSuccess = false;
  return;
}

// Tick @ 14ed04790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTestLeaderboardInterface::Tick(FTestLeaderboardInterface *this,float param_1)

{
  int *piVar1;
  int iVar2;
  IOnlineLeaderboards *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestLeaderboardInterface::Tick(float)_::_2_::FStat_STAT_FTestLeaderboardInterface_Tick>
  FVar12;
  FString *pFVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TestLeaderboardRead *pTVar14;
  TestLeaderboardRead *pTVar15;
  ulong64 *puVar16;
  FUniqueNetId *pFVar17;
  longlong *plVar18;
  uint uVar19;
  FNameEntryId FVar20;
  FName FVar21;
  undefined1 auStackY_2a8 [32];
  FColor_u_0 local_244;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_220;
  TRawPtrProxy<TestLeaderboardRead> local_218;
  TRawPtrProxy<TestLeaderboardRead> local_210;
  LARGE_INTEGER local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FStatMessage local_160;
  TSharedRef<FOnlineLeaderboardRead,1> local_150;
  TSharedRef<FOnlineLeaderboardRead,1> local_140;
  FName local_130;
  FName local_128;
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [8];
  TReferenceControllerBase<1> *local_e0;
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8 [72];
  void *local_80;
  undefined4 local_78;
  FString *local_60;
  int local_58;
  void *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pTVar15 = (TestLeaderboardRead *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FTestLeaderboardInterface_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestLeaderboardInterface::Tick(float)_::_2_::FStat_STAT_FTestLeaderboardInterface_Tick>
         )0x0) {
      pFVar11 = ::FName::FName(&local_130,"STAT_FTestLeaderboardInterface_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestLeaderboardInterface_Tick,*pFVar11,
                 L"STAT_FTestLeaderboardInterface_Tick","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_FTestLeaderboardInterface_Tick;
  if (StatPtr_STAT_FTestLeaderboardInterface_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestLeaderboardInterface::Tick(float)_::_2_::FStat_STAT_FTestLeaderboardInterface_Tick>
       )0x0) {
    pFVar11 = ::FName::FName(&local_128,"STAT_FTestLeaderboardInterface_Tick");
    FVar12 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestLeaderboardInterface::Tick(float)_::_2_::FStat_STAT_FTestLeaderboardInterface_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestLeaderboardInterface_Tick,
                          *pFVar11,L"STAT_FTestLeaderboardInterface_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar12;
  bVar6 = false;
  bVar7 = false;
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  bVar8 = false;
  bVar9 = false;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar19 = FVar21.Number;
  if ((FVar20.Value == 0) && (uVar19 == 0)) {
LAB_14ed0491f:
    bVar7 = bVar9;
    bVar6 = bVar8;
    bVar8 = false;
    FVar21 = local_230;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_244.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_244._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_238.ComparisonIndex.Value = FVar20.Value;
        local_238.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_238,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestLeaderboardInterface.cpp"
                   ,0x155);
        bVar6 = true;
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ed0491f;
    local_240.ComparisonIndex.Value = FVar20.Value;
    local_240.Number = uVar19;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar8 = true;
  }
  iVar2 = this->TestPhase;
  if (iVar2 == this->LastTestPhase) goto switchD_14ed04a55_default;
  if (this->bOverallSuccess == false) {
    if (4 < (byte)LogOnlineLeaderboard._0_1_) {
      ::FString::PrintfImpl(&local_200,L"Testing failed in phase %d");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
    }
    this->TestPhase = 7;
    this->LastTestPhase = 7;
switchD_14ed04a55_caseD_7:
    if (4 < (byte)LogOnlineLeaderboard._0_1_) {
      ::FString::PrintfImpl(&local_170,L"TESTING COMPLETE Success:%s!");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)this->_padding_)(this,1);
    bVar9 = false;
    goto LAB_14ed04ece;
  }
  this->LastTestPhase = iVar2;
  switch(iVar2) {
  case 0:
    if ((this->FindRankUserId).Data.ArrayNum < 2) {
      if (4 < (byte)LogOnlineLeaderboard._0_1_) {
        ::FString::PrintfImpl
                  (&local_1f0,L"Test will be skipping write test as a column was not provided.");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
      this->TestPhase = this->TestPhase + 1;
    }
    else {
      TestLeaderboardWrite::TestLeaderboardWrite((TestLeaderboardWrite *)local_c8);
      pFVar13 = ::FString::FString(&local_108,"TestIntStat1");
      FOnlineStats::SetIntStat((FOnlineStats *)local_c8,pFVar13,0x32);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      pFVar13 = ::FString::FString(&local_f8,"TestFloatStat1");
      FOnlineStats::SetFloatStat((FOnlineStats *)local_c8,pFVar13,__real_42c70000);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      pIVar3 = (this->Leaderboards).Object;
      pcVar5 = *(code **)(pIVar3->_padding_ + 0x50);
      if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      pFVar17 = (this->UserId).Object;
      ::FName::FName(&local_240,L"TEST");
      (*pcVar5)(pIVar3,&local_240,pFVar17,local_c8);
      this->TestPhase = this->TestPhase + 1;
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      DestructItems<FString,int>(local_60,local_58);
      if (local_60 != (FString *)0x0) {
        FMemory::Free(local_60);
      }
      local_c8._0_8_ = &___7FOnlineStats__6B_;
      local_78 = 0;
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_c8 + 8));
    }
    break;
  case 1:
    if (4 < (byte)LogOnlineLeaderboard._0_1_) {
      ::FString::PrintfImpl(&local_1e0,L"// Beginning FlushLeaderboards");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
    }
    if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pIVar3 = (this->Leaderboards).Object;
    puVar16 = (ulong64 *)(**(code **)(pIVar3->_padding_ + 0x60))(pIVar3,local_120);
    (this->LeaderboardFlushDelegateHandle).ID = *puVar16;
    if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pIVar3 = (this->Leaderboards).Object;
    pcVar5 = *(code **)(pIVar3->_padding_ + 0x58);
    ::FName::FName(&local_220,L"TEST");
    (*pcVar5)(pIVar3,&local_220);
    break;
  case 2:
    if (4 < (byte)LogOnlineLeaderboard._0_1_) {
      ::FString::PrintfImpl(&local_1d0,L"// Beginning ReadLeaderboards (reading self)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
    }
    ReadLeaderboards(this);
    break;
  case 3:
    if (4 < (byte)LogOnlineLeaderboard._0_1_) {
      ::FString::PrintfImpl(&local_1c0,L"// Beginning ReadLeaderboardsFriends");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
    }
    pTVar14 = ::operator_new(0x48);
    if (pTVar14 != (TestLeaderboardRead *)0x0) {
      pTVar15 = TestLeaderboardRead::TestLeaderboardRead
                          (pTVar14,&this->LeaderboardName,&this->SortedColumn,&this->Columns);
    }
    local_218.Object = pTVar15;
    TSharedPtr<FOnlineLeaderboardRead,1>::operator=<TestLeaderboardRead>
              (&this->ReadObject,&local_218);
    TSharedPtr<FOnlineLeaderboardRead,1>::ToSharedRef(&this->ReadObject,&local_150);
    if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pIVar3 = (this->Leaderboards).Object;
    puVar16 = (ulong64 *)
              (**(code **)(pIVar3->_padding_ + 0x28))
                        (pIVar3,local_118,&this->LeaderboardReadCompleteDelegate);
    (this->LeaderboardReadCompleteDelegateHandle).ID = *puVar16;
    if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pIVar3 = (this->Leaderboards).Object;
    bVar9 = (bool)(**(code **)(pIVar3->_padding_ + 0x10))(pIVar3,0);
    this->bReadLeaderboardAttempted = bVar9;
    local_140.SharedReferenceCount.ReferenceController =
         local_150.SharedReferenceCount.ReferenceController;
    goto LAB_14ed04ec6;
  case 4:
    if (4 < (byte)LogOnlineLeaderboard._0_1_) {
      ::FString::PrintfImpl
                (&local_1b0,L"// Beginning ReadLeaderboardsRank polling users from 1 to 8");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
    }
    pTVar14 = ::operator_new(0x48);
    if (pTVar14 != (TestLeaderboardRead *)0x0) {
      pTVar15 = TestLeaderboardRead::TestLeaderboardRead
                          (pTVar14,&this->LeaderboardName,&this->SortedColumn,&this->Columns);
    }
    local_210.Object = pTVar15;
    TSharedPtr<FOnlineLeaderboardRead,1>::operator=<TestLeaderboardRead>
              (&this->ReadObject,&local_210);
    TSharedPtr<FOnlineLeaderboardRead,1>::ToSharedRef(&this->ReadObject,&local_140);
    if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pIVar3 = (this->Leaderboards).Object;
    puVar16 = (ulong64 *)
              (**(code **)(pIVar3->_padding_ + 0x28))
                        (pIVar3,local_110,&this->LeaderboardReadRankCompleteDelegate);
    (this->LeaderboardReadRankCompleteDelegateHandle).ID = *puVar16;
    if (((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pIVar3 = (this->Leaderboards).Object;
    bVar9 = (bool)(**(code **)(pIVar3->_padding_ + 0x18))(pIVar3,3,5,&local_140);
    this->bReadLeaderboardAttempted = bVar9;
LAB_14ed04ec6:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.SharedReferenceCount.ReferenceController);
    break;
  case 5:
    if (4 < (byte)LogOnlineLeaderboard._0_1_) {
      ::FString::PrintfImpl
                (&local_1a0,
                 L"// Beginning ReadLeaderboardsUser polling all users +- 5 spaces from the local user"
                );
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u__s_s_153089d68,
                 (FLogCategoryBase *)&LogOnlineLeaderboard);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
    }
    pFVar17 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(&this->UserId);
    ReadLeaderboardsUser(this,pFVar17,5);
    break;
  case 6:
    if (1 < (this->FindRankUserId).Data.ArrayNum) {
      if (4 < (byte)LogOnlineLeaderboard._0_1_) {
        ::FString::PrintfImpl
                  (&local_180,
                   L"// Beginning ReadLeaderboardsUser polling all users +- 1 from the designated user (%s)"
                  );
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
      }
      plVar18 = (longlong *)
                (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_d8);
      if ((*plVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      plVar18 = (longlong *)
                (**(code **)(*(longlong *)*plVar18 + 0x120))
                          ((longlong *)*plVar18,local_e8,&this->FindRankUserId);
      if ((*plVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      pFVar17 = (FUniqueNetId *)*plVar18;
      pTVar4 = (TReferenceControllerBase<1> *)plVar18[1];
      plVar18[1] = 0;
      *plVar18 = 0;
      if ((pFVar17 == (FUniqueNetId *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
      ReadLeaderboardsUser(this,pFVar17,1);
      local_140.SharedReferenceCount.ReferenceController = pTVar4;
      goto LAB_14ed04ec6;
    }
    this->TestPhase = 7;
    if (4 < (byte)LogOnlineLeaderboard._0_1_) {
      ::FString::PrintfImpl
                (&local_190,L"Test will be skipping arbitrary lookup as an id was not provided.");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
    break;
  case 7:
    goto switchD_14ed04a55_caseD_7;
  }
switchD_14ed04a55_default:
  bVar9 = true;
LAB_14ed04ece:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_160.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_160.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_208);
      local_160.StatData.Pad[4] = '\0';
      local_160.StatData.Pad[5] = '\0';
      local_160.StatData.Pad[6] = '\0';
      local_160.StatData.Pad[7] = '\0';
      local_160.StatData.Pad[0] = local_208.s.LowPart._0_1_;
      local_160.StatData.Pad[1] = local_208.s.LowPart._1_1_;
      local_160.StatData.Pad[2] = local_208.s.LowPart._2_1_;
      local_160.StatData.Pad[3] = local_208.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_160);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar9;
}

// WriteLeaderboards @ 14ed096d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTestLeaderboardInterface::WriteLeaderboards(FTestLeaderboardInterface *this)

{
  IOnlineLeaderboards *pIVar1;
  FUniqueNetId *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  undefined1 auStack_f8 [32];
  FName local_d8;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [72];
  void *local_60;
  undefined4 local_58;
  FString *local_40;
  int local_38;
  void *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  TestLeaderboardWrite::TestLeaderboardWrite((TestLeaderboardWrite *)local_a8);
  pFVar5 = ::FString::FString(&local_d0,"TestIntStat1");
  FOnlineStats::SetIntStat((FOnlineStats *)local_a8,pFVar5,0x32);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&local_c0,"TestFloatStat1");
  FOnlineStats::SetFloatStat((FOnlineStats *)local_a8,pFVar5,__real_42c70000);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if ((this->Leaderboards).Object == (IOnlineLeaderboards *)0x0) {
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
  pIVar1 = (this->Leaderboards).Object;
  pcVar3 = *(code **)(pIVar1->_padding_ + 0x50);
  if ((this->UserId).Object == (FUniqueNetId *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->UserId).Object;
  ::FName::FName(&local_d8,L"TEST");
  (*pcVar3)(pIVar1,&local_d8,pFVar2,local_a8);
  this->TestPhase = this->TestPhase + 1;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  DestructItems<FString,int>(local_40,local_38);
  if (local_40 != (FString *)0x0) {
    FMemory::Free(local_40);
  }
  local_a8._0_8_ = &___7FOnlineStats__6B_;
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 8));
  return;
}

