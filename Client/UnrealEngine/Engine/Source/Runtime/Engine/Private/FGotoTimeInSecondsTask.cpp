// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FGotoTimeInSecondsTask @ 147abbbb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGotoTimeInSecondsTask * __thiscall
FGotoTimeInSecondsTask::FGotoTimeInSecondsTask
          (FGotoTimeInSecondsTask *this,UDemoNetDriver *param_1,float param_2)

{
  UDemoNetDriver *local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FQueuedReplayTask__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDemoNetDriver *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDemoNetDriver *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  this->_padding_ = (longlong)&___7FGotoTimeInSecondsTask__6B_;
  (this->GotoResult).bIsSet = false;
  this->TimeInSeconds = param_2;
  return this;
}

// CheckpointReady @ 147aca2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGotoTimeInSecondsTask::CheckpointReady(FGotoTimeInSecondsTask *this,FGotoResult *param_1)

{
  TOptional<FGotoResult> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FReadAccessScope local_28;
  
  if ((this->GotoResult).bIsSet != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GotoResult.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                       ,0x223,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1 = &this->GotoResult;
  if ((TOptional<FGotoResult> *)param_1 != pTVar1) {
    (pTVar1->TypedValue)._padding_ = (longlong)&___7FStreamingResultBase__6B_;
    *(int *)&(this->GotoResult).TypedValue._padding_ = (int)param_1->_padding_;
    (pTVar1->TypedValue)._padding_ = (longlong)&___7FGotoResult__6B_;
    (this->GotoResult).TypedValue.ExtraTimeMS = param_1->ExtraTimeMS;
    (this->GotoResult).TypedValue.CheckpointInfo = param_1->CheckpointInfo;
    (this->GotoResult).bIsSet = true;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if ((bVar4) && ((int)param_1->_padding_ != 0)) {
    if (2 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_FGotoTimeInSecondsTask::CheckpointReady(FGotoResult_const&___ptr64)___ptr64'
                  ::__l16::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    *(float *)&pUVar5[0x5a].field_0x18 = this->OldTimeInSeconds;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar5 + 0x4a),&local_28);
    if ((*(int *)&pUVar5[0x4a].field_0x10 != 0) &&
       (plVar2 = *(longlong **)&pUVar5[0x4a].field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pUVar5 + 0x4a));
  }
  return;
}

// GetName @ 147ae9c30

FName __thiscall FGotoTimeInSecondsTask::GetName(FGotoTimeInSecondsTask *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = ReplayTaskNames::GotoTimeInSecondsTask;
  return in_RDX;
}

// StartTask @ 147b16920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGotoTimeInSecondsTask::StartTask(FGotoTimeInSecondsTask *this)

{
  longlong *this_00;
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  FQueuedReplayTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  undefined8 *puVar12;
  TSharedRef<FQueuedReplayTask,1> *pTVar13;
  ulong64 uVar14;
  UDemoNetDriver *this_01;
  TReferenceControllerBase<1> *pTVar15;
  float fVar16;
  float fVar17;
  uint local_res8;
  undefined4 uStackX_c;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  bool local_98;
  TSharedRef<FQueuedReplayTask,1> local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  FDelegateAllocation local_78;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  
  this_00 = &this->_padding_;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar8) {
    if ((this->GotoResult).bIsSet != false) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GotoResult.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0x1ee,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (pUVar10[0x46].field_0x20 != '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Driver->IsFastForwarding()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0x1ef,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    this->OldTimeInSeconds = *(float *)&pUVar10[0x5a].field_0x18;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    *(float *)&pUVar10[0x5a].field_0x18 = this->TimeInSeconds;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    fVar17 = *(float *)&pUVar11[0x5a].field_0x1c - __real_3c23d70a;
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    fVar16 = *(float *)&pUVar11[0x5a].field_0x18;
    if (fVar17 <= *(float *)&pUVar11[0x5a].field_0x18) {
      fVar16 = fVar17;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    *(float *)&pUVar10[0x5a].field_0x18 = fVar16;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    bVar8 = pUVar10[0x5b].field_0x8 != '\0';
    local_res8 = (uint)bVar8;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    pTVar1 = *(TReferenceControllerBase<1> **)&pUVar10[0x42].field_0x18;
    plVar2 = *(longlong **)&pUVar10[0x42].field_0x10;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar2 == (longlong *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_78.DelegateSize = 0;
    pcVar4 = *(code **)(*plVar2 + 0x40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_68);
    local_50 = &local_78;
    puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_78);
    if (puVar12 == (undefined8 *)0x0) {
      pTVar15 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    }
    else {
      uStack_9c = local_90.SharedReferenceCount.ReferenceController._4_4_;
      local_a8 = CheckpointReady;
      uStack_a0 = 0;
      pTVar13 = TSharedFromThis<FQueuedReplayTask,1>::AsShared
                          ((TSharedFromThis<FQueuedReplayTask,1> *)&this->_padding_,&local_90);
      pTVar15 = (pTVar13->SharedReferenceCount).ReferenceController;
      pFVar3 = pTVar13->Object;
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBUFGotoResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar14;
      *puVar12 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VFGotoTimeInSecondsTask___00__A6AXAEBUFGotoResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar12[3] = pFVar3;
      puVar12[4] = pTVar15;
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      puVar12[5] = local_a8;
      puVar12[6] = CONCAT44(uStack_9c,uStack_a0);
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_90.SharedReferenceCount.ReferenceController._4_4_,
                          local_90.SharedReferenceCount.ReferenceController._0_4_));
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    (*pcVar4)(plVar2,(longlong)(*(float *)&pUVar10[0x5a].field_0x18 * __real_447a0000),&local_80,
              bVar8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_a8);
    if ((local_78.DelegateSize != 0) &&
       (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_78.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_78,0,0,0x10);
      local_78.DelegateSize = 0;
    }
    if (local_98 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_9c,uStack_a0),
                 (FDestructionSentinel *)&local_a8);
    }
    if (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_78.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    this_01 = (UDemoNetDriver *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    UDemoNetDriver::PauseChannels(this_01,true);
  }
  return;
}

// Tick @ 147b18040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FGotoTimeInSecondsTask::Tick(FGotoTimeInSecondsTask *this)

{
  longlong *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FGotoResult *pFVar6;
  UObject *pUVar7;
  UDemoNetDriver *this_01;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uStackX_c;
  
  this_00 = &this->_padding_;
  bVar8 = false;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (!bVar3) {
    return true;
  }
  if ((this->GotoResult).bIsSet == false) {
    return false;
  }
  if ((int)(this->GotoResult).TypedValue._padding_ != 0) {
    return true;
  }
  pFVar6 = TOptional<FGotoResult>::operator->(&this->GotoResult);
  if (pFVar6->ExtraTimeMS < 1) {
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    pTVar9 = *(TReferenceControllerBase<1> **)&pUVar7[0x42].field_0x18;
    plVar1 = *(longlong **)&pUVar7[0x42].field_0x10;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar1 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar8 = true;
    cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1);
    if (cVar5 == '\0') {
      bVar3 = true;
      goto LAB_147b180fc;
    }
  }
  bVar3 = false;
LAB_147b180fc:
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (bVar3) {
    return false;
  }
  pFVar6 = TOptional<FGotoResult>::GetValue(&this->GotoResult);
  this_01 = (UDemoNetDriver *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  bVar3 = UDemoNetDriver::LoadCheckpoint(this_01,pFVar6);
  return bVar3;
}

