// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// CheckpointReady @ 147aca1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFastForwardLevelsTask::CheckpointReady(FFastForwardLevelsTask *this,FGotoResult *param_1)

{
  TOptional<FGotoResult> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->GotoResult).bIsSet != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GotoResult.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                       ,0x2be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
  if (((int)param_1->_padding_ != 0) && (2 < (byte)LogDemo._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FFastForwardLevelsTask::CheckpointReady(FGotoResult_const&___ptr64)___ptr64'
                ::__l13::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  return;
}

// GetName @ 147ae9c10

FName __thiscall FFastForwardLevelsTask::GetName(FFastForwardLevelsTask *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = ReplayTaskNames::FastForwardLevelsTask;
  return in_RDX;
}

// ShouldPausePlayback @ 147b15100

bool __thiscall FFastForwardLevelsTask::ShouldPausePlayback(FFastForwardLevelsTask *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarFastForwardLevelsPausePlayback.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// StartTask @ 147b165e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FFastForwardLevelsTask::StartTask(FFastForwardLevelsTask *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  bool bVar6;
  UObject *pUVar7;
  FName *pFVar8;
  undefined8 *puVar9;
  TSharedRef<FQueuedReplayTask,1> *pTVar10;
  ulong64 uVar11;
  UDemoNetDriver *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint local_res8;
  undefined4 uStackX_c;
  FQueuedReplayTask *local_res10;
  longlong *local_res18;
  code *local_res20;
  FName local_b8;
  code *local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  bool local_a0;
  TSharedRef<FQueuedReplayTask,1> local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  
  uVar13 = 0;
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar7[0x46].field_0x20 != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Driver->IsFastForwarding()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0x273,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (*(int *)(pUVar7 + 0x49) < 1) {
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
      pFVar8 = &local_b8;
    }
    else {
      pFVar8 = (FName *)(**(code **)(*(longlong *)**(undefined8 **)&pUVar7[0x48].field_0x20 + 0x18))
                                  ((longlong *)**(undefined8 **)&pUVar7[0x48].field_0x20,
                                   &local_res10);
    }
    if (*pFVar8 == ReplayTaskNames::GotoTimeInSecondsTask) {
      this->bSkipWork = true;
      return;
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    this->GotoTime = (uint)(longlong)(*(float *)&pUVar7[0x4f].field_0x10 * __real_447a0000);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar5 = pUVar7[0x5b].field_0x8 != '\0';
    local_res8 = (uint)bVar5;
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar1 = *(TReferenceControllerBase<1> **)&pUVar7[0x42].field_0x18;
    plVar2 = *(longlong **)&pUVar7[0x42].field_0x10;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res18 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_res20 = *(code **)(*plVar2 + 0x40);
    local_80.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_88,(FWriteAccessScope *)&local_70);
    local_58 = &local_80;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,&local_80);
    if (puVar9 == (undefined8 *)0x0) {
      pTVar14 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
      uVar12 = uVar13;
    }
    else {
      uStack_a4 = local_98.SharedReferenceCount.ReferenceController._4_4_;
      local_b0 = CheckpointReady;
      uStack_a8 = 0;
      pTVar10 = TSharedFromThis<FQueuedReplayTask,1>::AsShared
                          ((TSharedFromThis<FQueuedReplayTask,1> *)&this->_padding_,&local_98);
      pTVar14 = (pTVar10->SharedReferenceCount).ReferenceController;
      local_res10 = pTVar10->Object;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFGotoResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VFFastForwardLevelsTask___00__A6AXAEBUFGotoResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = local_res10;
      puVar9[4] = pTVar14;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar9[5] = local_b0;
      puVar9[6] = CONCAT44(uStack_a4,uStack_a8);
      uVar12 = 7;
    }
    if ((uVar12 & 4) != 0) {
      uVar12 = (ulonglong)((uint)uVar12 & 0xfffffffb);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if ((uVar12 & 2) != 0) {
      uVar12 = (ulonglong)((uint)uVar12 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if ((uVar12 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_98.SharedReferenceCount.ReferenceController._4_4_,
                          local_98.SharedReferenceCount.ReferenceController._0_4_));
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    (*local_res20)(local_res18,this->GotoTime,&local_88,bVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_88,(FWriteAccessScope *)&local_b0);
    if ((local_80.DelegateSize != 0) &&
       (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_80,0,0,0x10);
      local_80.DelegateSize = 0;
    }
    if (local_a0 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_a4,uStack_a8),
                 (FDestructionSentinel *)&local_b0);
    }
    if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_80.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pTVar4 = CVarFastForwardLevelsPausePlayback.Ref;
    bVar5 = IsInParallelGameThread();
    if (!bVar5) {
      bVar5 = IsInGameThread();
      if (!bVar5) {
        uVar13 = 4;
      }
    }
    if (*(int *)((longlong)pTVar4->ShadowedValue + uVar13) != 0) {
      this_00 = (UDemoNetDriver *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDemoNetDriver::PauseChannels(this_00,true);
    }
  }
  return;
}

// Tick @ 147b17e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FFastForwardLevelsTask::Tick(FFastForwardLevelsTask *this)

{
  longlong *plVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  UObject *pUVar7;
  ulonglong uVar8;
  FGotoResult *pFVar9;
  UDemoNetDriver *this_00;
  TReferenceControllerBase<1> *pTVar10;
  ulonglong uVar11;
  TReferenceControllerBase<1> *pTVar12;
  float fVar13;
  uint uStackX_c;
  
  uVar11 = 0;
  if (this->bSkipWork != false) {
    return true;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar4) {
    return true;
  }
  if ((this->GotoResult).bIsSet == false) {
    return false;
  }
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar3 = CVarFastForwardLevelsPausePlayback.Ref;
  fVar13 = *(float *)&pUVar7[0x4f].field_0x10;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_147b17e6e:
    uVar8 = uVar11;
  }
  else {
    bVar4 = IsInGameThread();
    uVar8 = 4;
    if (bVar4) goto LAB_147b17e6e;
  }
  if (*(int *)((longlong)pTVar3->ShadowedValue + uVar8) == 0) {
    fVar13 = fVar13 * __real_447a0000;
  }
  else {
    fVar13 = (float)this->GotoTime;
  }
  pFVar9 = TOptional<FGotoResult>::operator->(&this->GotoResult);
  if ((int)pFVar9->_padding_ != 0) {
    return true;
  }
  pFVar9 = TOptional<FGotoResult>::operator->(&this->GotoResult);
  if (pFVar9->ExtraTimeMS < 1) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar12 = *(TReferenceControllerBase<1> **)&pUVar7[0x42].field_0x18;
    plVar1 = *(longlong **)&pUVar7[0x42].field_0x10;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar1 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar11 = 1;
    cVar6 = (**(code **)(*plVar1 + 0x68))(plVar1);
    if (cVar6 == '\0') {
      pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
      bVar4 = true;
      goto LAB_147b17fb4;
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar10 = *(TReferenceControllerBase<1> **)&pUVar7[0x42].field_0x18;
    plVar1 = *(longlong **)&pUVar7[0x42].field_0x10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar1 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pcVar2 = *(code **)(*plVar1 + 0x78);
    pFVar9 = TOptional<FGotoResult>::operator->(&this->GotoResult);
    uVar11 = 3;
    cVar6 = (*pcVar2)(plVar1,this->GotoTime - (int)pFVar9->ExtraTimeMS,(longlong)fVar13);
    if (cVar6 == '\0') {
      bVar4 = true;
      goto LAB_147b17fb4;
    }
  }
  bVar4 = false;
LAB_147b17fb4:
  if ((uVar11 & 2) != 0) {
    uVar11 = (ulonglong)((uint)uVar11 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if ((uVar11 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (bVar4) {
    return false;
  }
  pFVar9 = TOptional<FGotoResult>::GetValue(&this->GotoResult);
  this_00 = (UDemoNetDriver *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  bVar4 = UDemoNetDriver::FastForwardLevels(this_00,pFVar9);
  return bVar4;
}

