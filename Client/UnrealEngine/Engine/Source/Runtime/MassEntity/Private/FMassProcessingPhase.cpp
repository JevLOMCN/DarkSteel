// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 6

// FMassProcessingPhase @ 1471dabe0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMassProcessingPhase * __thiscall
FMassProcessingPhase::FMassProcessingPhase(FMassProcessingPhase *this)

{
  byte bVar1;
  
  FTickFunction::FTickFunction((FTickFunction *)this);
  this->Phase = MAX;
  this->_padding_ = (longlong)&___7FMassProcessingPhase__6B_;
  (this->PhaseProcessor).field0_0x0.DebugPtr = (UMassCompositeProcessor *)0x0;
  *(undefined8 *)&this->OnPhaseStart = 0;
  *(undefined8 *)&(this->OnPhaseStart).field_0x8 = 0;
  *(undefined8 *)&(this->OnPhaseStart).field_0x10 = 0;
  *(undefined8 *)&this->OnPhaseEnd = 0;
  *(undefined8 *)&(this->OnPhaseEnd).field_0x8 = 0;
  *(undefined8 *)&(this->OnPhaseEnd).field_0x10 = 0;
  this->PhaseManager = (FMassProcessingPhaseManager *)0x0;
  bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
  *(undefined8 *)&(this->OnPhaseStart).field_0x18 = 2;
  *(undefined8 *)&(this->OnPhaseEnd).field_0x18 = 2;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar1 & 0xfb | 2;
  this->bIsDuringMassProcessing = (atomic<bool>)0x0;
  this->bRunInParallelMode = true;
  this->SupportedTickTypes = '\x05';
  return this;
}

// DiagnosticContext @ 1472129e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FName __thiscall FMassProcessingPhase::DiagnosticContext(FMassProcessingPhase *this,bool param_1)

{
  undefined7 in_register_00000011;
  FName this_00;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  ::FName::FName((FName *)this_00,L"MassProcessingPhase");
  return this_00;
}

// DiagnosticMessage @ 147212a10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FString * __thiscall
FMassProcessingPhase::DiagnosticMessage(FMassProcessingPhase *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  FString *pFVar2;
  FName local_res8 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->PhaseManager == (FMassProcessingPhaseManager *)0x0) {
    pFVar2 = ::FString::FString(&local_18,L"NULL-MassProcessingPhaseManager");
    ::FString::ConcatFC(__return_storage_ptr__,pFVar2,L"[ProcessingPhaseTick]");
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  else {
    pUVar1 = FWeakObjectPtr::Get(&(this->PhaseManager->Owner).WeakPtr);
    if (pUVar1 == (UObject *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res8[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
      local_res8[0].Number = *(uint *)&pUVar1->field_0x1c;
      ::FName::ToString(local_res8,&local_38);
    }
    ::FString::ConcatFC(&local_28,&local_38,L"_MassProcessingPhaseManager");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(__return_storage_ptr__,&local_28,L"[ProcessingPhaseTick]");
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecuteTick @ 147217fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessingPhase::ExecuteTick
          (FMassProcessingPhase *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  int *piVar1;
  int iVar2;
  FMassProcessingPhaseManager *pFVar3;
  FMassEntityManager *pFVar4;
  FBaseGraphTask *this_00;
  TObjectPtr<UMassCompositeProcessor>_u_0 TVar5;
  FMassCommandBuffer *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FMassCommandBuffer *pFVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Mass_PhaseTick> FVar20;
  FThreadSafeStaticStat<FStat_STAT_Mass_Total> FVar21;
  TSharedRef<FMassEntityManager,1> *pTVar22;
  FThreadStats *pFVar23;
  FThreadStatsPool *pFVar24;
  FColor_u_0 FVar25;
  FNameEntryId FVar26;
  FName FVar27;
  FName FVar28;
  FName FVar29;
  undefined1 auStackY_e08 [32];
  FLLMScope local_da0;
  FLLMScope local_d9c;
  FColor_u_0 local_d98;
  uint uStack_d94;
  FMemScope local_d90;
  FColor_u_0 local_d88 [2];
  FColor_u_0 local_d80;
  uint local_d7c;
  FName local_d78;
  FName local_d70;
  FName local_d60;
  undefined1 local_d50 [56];
  FString local_d18;
  FStatMessage local_d08;
  FStatMessage local_cf8;
  undefined1 local_ce8 [24];
  undefined4 uStack_cd0;
  undefined4 uStack_ccc;
  code *local_cc8 [2];
  undefined **local_cb8;
  FMassProcessingPhase *local_cb0;
  float local_ca8;
  undefined4 local_ca4;
  FQueryExecutor *local_ca0;
  FName local_c98;
  FString local_c90;
  TSharedRef<FMassEntityManager,1> local_c80;
  TSharedRef<FMassEntityManager,1> local_c70;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_c58;
  TArrayView<UMassProcessor_*_const,int> local_c48;
  FName local_c38 [4];
  FProcessingContext local_c18;
  FProcessingContext local_638;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_e08;
  local_d50._8_8_ = param_4;
  if ((this->SupportedTickTypes & (byte)(1 << ((byte)param_2 & 0x1f))) == 0) {
    return;
  }
  FVar20 = StatPtr_STAT_Mass_PhaseTick;
  if (StatPtr_STAT_Mass_PhaseTick == (FThreadSafeStaticStat<FStat_STAT_Mass_PhaseTick>)0x0) {
    pFVar19 = ::FName::FName(&local_c98,"STAT_Mass_PhaseTick");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_Mass_PhaseTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Mass_PhaseTick,*pFVar19,
                        L"Mass Phase Tick","STATGROUP_Mass","STATCAT_Advanced",L"Mass",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar20;
  bVar10 = false;
  bVar12 = false;
  local_d70.ComparisonIndex.Value = 0;
  local_d70.Number = 0;
  bVar15 = false;
  bVar9 = false;
  FVar25.Bits = (uint)FVar27.ComparisonIndex.Value;
  uVar18 = FVar27.Number;
  if ((FVar25.Bits == 0) && (uVar18 == 0)) {
LAB_147218161:
    bVar12 = bVar9;
    bVar10 = bVar15;
    bVar15 = false;
    FVar27 = local_d70;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d88[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar10 = false;
      bVar12 = true;
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d80.Bits = FVar25.Bits;
        local_d7c = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d80._s_0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                   ,0x41);
        bVar10 = true;
        bVar12 = true;
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147218161;
    local_d98.Bits = FVar25.Bits;
    uStack_d94 = uVar18;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar15 = true;
  }
  FVar21 = StatPtr_STAT_Mass_Total;
  if (StatPtr_STAT_Mass_Total == (FThreadSafeStaticStat<FStat_STAT_Mass_Total>)0x0) {
    pFVar19 = ::FName::FName(local_c38,"STAT_Mass_Total");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_Mass_Total>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Mass_Total,*pFVar19,
                        L"Mass Total Frame Time","STATGROUP_Mass","STATCAT_Advanced",L"Mass",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar21;
  bVar9 = false;
  bVar11 = false;
  local_d60.ComparisonIndex.Value = 0;
  local_d60.Number = 0;
  bVar14 = false;
  bVar16 = false;
  FVar26 = FVar28.ComparisonIndex.Value;
  uVar18 = FVar28.Number;
  if ((FVar26.Value == 0) && (uVar18 == 0)) {
LAB_14721828e:
    bVar11 = bVar16;
    bVar9 = bVar14;
    bVar14 = false;
    FVar28 = local_d60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d98.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d98._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar9 = false;
      bVar11 = true;
      bVar14 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d78.ComparisonIndex.Value = FVar26.Value;
        local_d78.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d78,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                   ,0x42);
        bVar9 = true;
        bVar11 = true;
        bVar14 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14721828e;
    local_d90._0_4_ = FVar26.Value;
    local_d90.PrevTag = uVar18;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar14 = true;
  }
  if ((this->PhaseManager == (FMassProcessingPhaseManager *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("PhaseManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                          ,0x44,
                          L"Manager is null which is not a supported case. Either this FMassProcessingPhase has not been initialized properly or it\'s been left dangling after the FMassProcessingPhase owner got destroyed."
                         ), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  UEnum::GetValueAsString<enum_EMassProcessingPhase>(&local_c90,this->Phase);
  ::FString::PrintfImpl(&local_d18,L"FMassProcessingPhase::ExecuteTick %s");
  FVar29 = (FName)L"";
  if (local_d18.Data.ArrayNum != 0) {
    FVar29 = (FName)local_d18.Data.AllocatorInstance.Data;
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar29,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
               ,0x46);
  }
  if ((FName)local_d18.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_d18.Data.AllocatorInstance.Data);
  }
  if (local_c90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c90.Data.AllocatorInstance.Data);
  }
  FMassProcessingPhaseManager::OnPhaseStart(this->PhaseManager,this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name74,L"Mass/PhaseStartDelegate");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_da0,LLMScope_Name74,false,None,Default,true);
  FMemScope::FMemScope(&local_d90,&LLMScope_Name74,true);
  TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPhaseStart,param_1);
  FMemScope::~FMemScope(&local_d90);
  FLLMScope::~FLLMScope(&local_da0);
  if (((this->PhaseProcessor).field0_0x0.DebugPtr == (UMassCompositeProcessor *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("PhaseProcessor",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                          ,0x4e,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar3 = this->PhaseManager;
  if (((pFVar3->EntityManager).Object == (FMassEntityManager *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("EntityManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessingPhaseManager.h"
                          ,0x95,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar4 = (pFVar3->EntityManager).Object;
  LOCK();
  this->bIsDuringMassProcessing = (atomic<bool>)0x1;
  UNLOCK();
  if ((this->bRunInParallelMode == false) || (this->PhaseManager->bIsPaused != false)) {
    if (this->PhaseManager->bIsPaused == false) {
      pTVar22 = TSharedFromThis<FMassEntityManager,1>::AsShared
                          ((TSharedFromThis<FMassEntityManager,1> *)&pFVar4->_padding_,&local_c70);
      local_c18.EntityManager.Object = pTVar22->Object;
      local_c18.EntityManager.SharedReferenceCount.ReferenceController =
           (pTVar22->SharedReferenceCount).ReferenceController;
      if (local_c18.EntityManager.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c18.EntityManager.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c18.EntityManager.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c18.DeltaSeconds = param_1;
      FInstancedStruct::FInstancedStruct(&local_c18.AuxData);
      local_c18.CommandBuffer.Object = (FMassCommandBuffer *)0x0;
      local_c18.CommandBuffer.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_c18.bFlushCommandBuffer = true;
      local_c18.ExecutionContextPtr = (FMassExecutionContext *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c70.SharedReferenceCount.ReferenceController);
      TVar5 = (this->PhaseProcessor).field0_0x0;
      if (0.0 <= local_c18.DeltaSeconds) {
        bVar17 = -1 < CpuChannel->Enabled;
        if (bVar17) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId73,"MassExecutor Run",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                     ,0x49);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId73);
        }
        local_ce8._16_8_ = local_d50 + 0x18;
        local_ce8._0_8_ = 0;
        local_ce8._8_4_ = 0;
        local_c58._8_8_ = (ulonglong)(uint)local_ce8._12_4_ << 0x20;
        uStack_cd0 = 1;
        local_c48._12_4_ = uStack_ccc;
        local_c48.ArrayNum = 1;
        local_c58.DataPtr = (FMassArchetypeEntityCollection *)0x0;
        local_d50._24_8_ = TVar5;
        local_c48.DataPtr = (UMassProcessor **)local_ce8._16_8_;
        UE::Mass::Executor::RunProcessorsView(&local_c48,&local_c18,&local_c58);
        if (bVar17) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      else {
        bVar17 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3284827104360792132>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassExecutor.cpp"
                            ,0x44,"ProcessingContext.GetDeltaSeconds() >= 0.f");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_c18.ExecutionContextPtr != (FMassExecutionContext *)0x0) {
        pFVar6 = ((local_c18.ExecutionContextPtr)->DeferredCommandBuffer).Object;
        pTVar7 = ((local_c18.ExecutionContextPtr)->DeferredCommandBuffer).SharedReferenceCount.
                 ReferenceController;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        if ((pFVar6 == (FMassCommandBuffer *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ExecutionContextPtr->GetSharedDeferredCommandBuffer()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingContext.cpp"
                                ,0xd,
                                L"A valid execution context without a valid command buffer is unexpected"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar13 = local_c18.CommandBuffer.Object;
        pTVar7 = ((local_c18.ExecutionContextPtr)->DeferredCommandBuffer).SharedReferenceCount.
                 ReferenceController;
        pFVar6 = ((local_c18.ExecutionContextPtr)->DeferredCommandBuffer).Object;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        if ((pFVar6 != pFVar13) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ExecutionContextPtr->GetSharedDeferredCommandBuffer() == CommandBuffer"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingContext.cpp"
                                ,0x10,
                                L"Hosted Execution Context\'s command buffer is not the same as FProcessingContext\'s command buffer. This is not supposed to happen. Make sure FProcessingContext.CommandBuffer never gets assigned after FMassExecutionContext\'s creation"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((local_c18.CommandBuffer.Object == (FMassCommandBuffer *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((local_c18.CommandBuffer.Object)->bIsFlushing != false) &&
           (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6613007514118127634>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingContext.cpp"
                                ,0x12,"!CommandBuffer->IsFlushing()"), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (local_c18.bFlushCommandBuffer == false) {
          FMassEntityManager::AppendCommands
                    (local_c18.EntityManager.Object,&local_c18.CommandBuffer);
        }
        else {
          FMassEntityManager::FlushCommands(local_c18.EntityManager.Object,&local_c18.CommandBuffer)
          ;
        }
        FMassExecutionContext::~FMassExecutionContext(local_c18.ExecutionContextPtr);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c18.CommandBuffer.SharedReferenceCount.ReferenceController);
      FInstancedStruct::Reset(&local_c18.AuxData);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c18.EntityManager.SharedReferenceCount.ReferenceController);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&LLMScope_Name119,L"Mass/PhaseEndDelegate");
      _Init_thread_footer(&::_TSS1);
    }
    FLLMScope::FLLMScope(&local_d9c,LLMScope_Name119,false,None,Default,true);
    FMemScope::FMemScope((FMemScope *)(local_d50 + 0x20),&LLMScope_Name119,true);
    TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnPhaseEnd,param_1);
    FMemScope::~FMemScope((FMemScope *)(local_d50 + 0x20));
    FLLMScope::~FLLMScope(&local_d9c);
    FMassProcessingPhaseManager::OnPhaseEnd(this->PhaseManager,this);
    LOCK();
    this->bIsDuringMassProcessing = (atomic<bool>)0x0;
    UNLOCK();
  }
  else {
    bVar17 = false;
    if ((((this->PhaseProcessor).field0_0x0.DebugPtr)->ChildPipeline).Processors.ArrayNum != 0) {
      pTVar22 = TSharedFromThis<FMassEntityManager,1>::AsShared
                          ((TSharedFromThis<FMassEntityManager,1> *)&pFVar4->_padding_,&local_c80);
      local_638.EntityManager.Object = pTVar22->Object;
      local_638.EntityManager.SharedReferenceCount.ReferenceController =
           (pTVar22->SharedReferenceCount).ReferenceController;
      if (local_638.EntityManager.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_638.EntityManager.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_638.EntityManager.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_638.DeltaSeconds = param_1;
      FInstancedStruct::FInstancedStruct(&local_638.AuxData);
      local_638.CommandBuffer.Object = (FMassCommandBuffer *)0x0;
      local_638.CommandBuffer.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_638.bFlushCommandBuffer = true;
      local_638.ExecutionContextPtr = (FMassExecutionContext *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c80.SharedReferenceCount.ReferenceController);
      local_cb8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FMassProcessingPhase::ExecuteTick'::`28'::<lambda_1>,0,0>
                   ::_vftable_;
      local_ca4 = local_c38[2].Number;
      local_cc8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FMassProcessingPhase::ExecuteTick'::__l28::<lambda_1>,void>
                     ::Call;
      local_ca0 = (FQueryExecutor *)0x0;
      local_cb0 = this;
      local_ca8 = param_1;
      UE::Mass::Executor::TriggerParallelTasks
                ((UMassProcessor *)local_d50,
                 (FProcessingContext *)(this->PhaseProcessor).field0_0x0.DebugPtr,
                 (TFunction<void___cdecl(void)> *)&local_638,(Type)local_cc8);
      if ((undefined8 *)local_d50._0_8_ != (undefined8 *)0x0) {
        local_d50._16_8_ = local_d50._0_8_;
        this_00 = *(FBaseGraphTask **)local_d50._8_8_;
        LOCK();
        *(int *)(local_d50._0_8_ + 0x30) = *(int *)(local_d50._0_8_ + 0x30) + 1;
        UNLOCK();
        FBaseGraphTask::DontCompleteUntil(this_00,(FBaseGraphTask *)(local_d50 + 0x10));
        bVar17 = true;
        LOCK();
        piVar1 = (int *)(local_d50._0_8_ + 0x30);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)local_d50._0_8_)(local_d50._0_8_,1);
          UE::Mass::FProcessingContext::~FProcessingContext(&local_638);
          goto LAB_1472188ec;
        }
      }
      UE::Mass::FProcessingContext::~FProcessingContext(&local_638);
      if (bVar17) goto LAB_1472188ec;
    }
    OnParallelExecutionDone(this,param_1);
  }
LAB_1472188ec:
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar14) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar23 == (FThreadStats *)0x0) {
      pFVar24 = FThreadStatsPool::Get();
      pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
    }
    if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
      local_d08.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
      local_d08.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)(local_d50 + 0x28));
      local_d08.StatData.Pad[4] = '\0';
      local_d08.StatData.Pad[5] = '\0';
      local_d08.StatData.Pad[6] = '\0';
      local_d08.StatData.Pad[7] = '\0';
      local_d08.StatData.Pad[0] = local_d50[0x28];
      local_d08.StatData.Pad[1] = local_d50[0x29];
      local_d08.StatData.Pad[2] = local_d50[0x2a];
      local_d08.StatData.Pad[3] = local_d50[0x2b];
      FThreadStats::AddStatMessage(pFVar23,&local_d08);
      piVar1 = &pFVar23->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar23,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar23,false,false);
      }
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar15) && (FVar27 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar23 == (FThreadStats *)0x0) {
      pFVar24 = FThreadStatsPool::Get();
      pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
    }
    if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
      local_cf8.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_cf8.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)(local_d50 + 0x30));
      local_cf8.StatData.Pad[4] = '\0';
      local_cf8.StatData.Pad[5] = '\0';
      local_cf8.StatData.Pad[6] = '\0';
      local_cf8.StatData.Pad[7] = '\0';
      local_cf8.StatData.Pad[0] = local_d50[0x30];
      local_cf8.StatData.Pad[1] = local_d50[0x31];
      local_cf8.StatData.Pad[2] = local_d50[0x32];
      local_cf8.StatData.Pad[3] = local_d50[0x33];
      FThreadStats::AddStatMessage(pFVar23,&local_cf8);
      piVar1 = &pFVar23->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar23,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar23,false,false);
      }
    }
  }
  return;
}

// Initialize @ 14722cf10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassProcessingPhase::Initialize
          (FMassProcessingPhase *this,FMassProcessingPhaseManager *param_1,
          EMassProcessingPhase param_2,ETickingGroup param_3,UMassCompositeProcessor *param_4)

{
  this->PhaseManager = param_1;
  this->Phase = param_2;
  *(char *)&this->_padding_ = (char)param_3;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    (this->PhaseProcessor).field0_0x0.DebugPtr = param_4;
    return;
  }
  if (param_4 != (UMassCompositeProcessor *)0x0) {
    UE::GC::MarkAsReachable((UObject *)param_4);
    (this->PhaseProcessor).field0_0x0.DebugPtr = param_4;
    return;
  }
  (this->PhaseProcessor).field0_0x0.DebugPtr = (UMassCompositeProcessor *)0x0;
  return;
}

// OnParallelExecutionDone @ 147238070

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassProcessingPhase::OnParallelExecutionDone(FMassProcessingPhase *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  
  uVar3 = (ulonglong)_tls_index;
  LOCK();
  this->bIsDuringMassProcessing = (atomic<bool>)0x0;
  UNLOCK();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name131,L"Mass/PhaseEndDelegate");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name131,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name131,true);
  TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPhaseEnd,param_1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  if (this->PhaseManager == (FMassProcessingPhaseManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhaseManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                       ,0x86,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMassProcessingPhaseManager::OnPhaseEnd(this->PhaseManager,this);
  return;
}

