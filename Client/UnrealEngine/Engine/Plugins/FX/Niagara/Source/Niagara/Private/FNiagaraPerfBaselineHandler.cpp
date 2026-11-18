// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// FNiagaraPerfBaselineHandler @ 1493330c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraPerfBaselineHandler * __thiscall
FNiagaraPerfBaselineHandler::FNiagaraPerfBaselineHandler(FNiagaraPerfBaselineHandler *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *pFVar3;
  FName local_res8;
  FName local_res10;
  FText local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  undefined1 local_50 [8];
  FDelegateAllocation local_48;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  (this->DebugRenderListener).Object =
       (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0;
  (this->DebugRenderListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PerfBaselineListener).Object = (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0
  ;
  (this->PerfBaselineListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BaselinesToGenerate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaselinesToGenerate).ArrayNum = 0;
  (this->BaselinesToGenerate).ArrayMax = 0;
  this->BaselineGenerationState = Complete;
  this->WorldTimeToGenerate = 0.0;
  (this->BaselineGenWorld).WeakPtr = (FWeakObjectPtr)0x0;
  if (GEngine != (UEngine *)0x0) {
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6A_NPEAVUWorld__PEAVFCommonViewportClient__PEB_W_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraPerfBaselineHandler____A6A_NPEAVUWorld__PEAVFCommonViewportClient__PEB_W_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar1[4] = ToggleStatPerfBaselines;
      puVar1[3] = this;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    local_50 = (undefined1  [8])0x0;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_48.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_48;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_48);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AHPEAVUWorld__PEAVFViewport__PEAVFCanvas__HHPEBU__TVector_N_Math_UE__PEBU__TRotator_N_56__ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseRawMethodDelegateInstance__0A_UFNiagaraPerfBaselineHandler____A6AHPEAVUWorld__PEAVFViewport__PEAVFCanvas__HHPEBU__TVector_N_Math_UE__PEBU__TRotator_N_67__ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar1[4] = RenderStatPerfBaselines;
      puVar1[3] = this;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"NiagaraPerformanceBaselines",L"NiagaraPerfBaselineStatDesc",
                        L"Displays stats on how currently running systems compare to their performance baselines."
                       );
    ::FName::FName(&local_res8,L"STATCAT_Niagara");
    ::FName::FName(&local_res10,L"STAT_NiagaraBaselines");
    UEngine::AddEngineStat
              (GEngine,&local_res10,&local_res8,pFVar3,
               (TDelegate<int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
                *)local_50,
               (TDelegate<bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
                *)local_68,false);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  return this;
}

// ~FNiagaraPerfBaselineHandler @ 149336480

void __thiscall
FNiagaraPerfBaselineHandler::~FNiagaraPerfBaselineHandler(FNiagaraPerfBaselineHandler *this)

{
  FSharedReferencer<1> *pFVar1;
  FParticlePerfStatsListener_NiagaraPerformanceReporter *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  FParticlePerfStatsListener_NiagaraBaselineComparisonRender *local_28;
  FSharedReferencer<1> FStack_20;
  FParticlePerfStatsListener_NiagaraPerformanceReporter *local_18;
  FSharedReferencer<1> local_10;
  
  pFVar2 = (this->PerfBaselineListener).Object;
  pFVar1 = &(this->PerfBaselineListener).SharedReferenceCount;
  if (pFVar2 != (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0) {
    local_10.ReferenceController = pFVar1->ReferenceController;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = pFVar2;
    FParticlePerfStatsManager::RemoveListener
              ((TSharedPtr<FParticlePerfStatsListener,1> *)&stack0xffffffffffffffe8);
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->PerfBaselineListener !=
        (TSharedPtr<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *)&local_38) {
      (this->PerfBaselineListener).Object =
           (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(pFVar1,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  pFVar2 = (FParticlePerfStatsListener_NiagaraPerformanceReporter *)
           (this->DebugRenderListener).Object;
  pFVar1 = &(this->DebugRenderListener).SharedReferenceCount;
  if (pFVar2 != (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0) {
    local_10.ReferenceController = pFVar1->ReferenceController;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = pFVar2;
    FParticlePerfStatsManager::RemoveListener
              ((TSharedPtr<FParticlePerfStatsListener,1> *)&stack0xffffffffffffffe8);
    local_28 = (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (this != (FNiagaraPerfBaselineHandler *)&stack0xffffffffffffffd8) {
      (this->DebugRenderListener).Object =
           (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(pFVar1,&stack0xffffffffffffffe0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  pFVar3 = (this->BaselinesToGenerate).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PerfBaselineListener).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return;
}

// GenerateBaselines @ 149348200

void __thiscall
FNiagaraPerfBaselineHandler::GenerateBaselines
          (FNiagaraPerfBaselineHandler *this,
          TArray<UNiagaraEffectType_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  UObject *local_res10;
  FWeakObjectPtr local_res18 [2];
  
  iVar3 = param_1->ArrayNum;
  if (0 < iVar3) {
    piVar1 = &(this->BaselinesToGenerate).ArrayMax;
    if (*piVar1 < iVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,&(this->BaselinesToGenerate).AllocatorInstance,
                 (this->BaselinesToGenerate).ArrayNum,piVar1);
    }
    pFVar5 = (param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    pFVar2 = pFVar5 + (longlong)iVar3 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        `TCheckedPointerIterator<UNiagaraEffectType_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar5 == pFVar2) break;
      pUVar4 = *(UObject **)pFVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      local_res18[0].ObjectIndex = 0;
      local_res18[0].ObjectSerialNumber = 0;
      local_res10 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_res10);
      TArray<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>_>
                (&this->BaselinesToGenerate,
                 (TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr> *)local_res18);
      pFVar5 = pFVar5 + 8;
    }
    if (this->BaselineGenerationState == Complete) {
      this->BaselineGenerationState = Begin;
    }
  }
  return;
}

// OnWorldBeginTearDown @ 149360ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FNiagaraPerfBaselineHandler::OnWorldBeginTearDown(FNiagaraPerfBaselineHandler *this,UWorld *param_1)

{
  TSharedPtr<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong lVar7;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<FParticlePerfStatsListener,1> local_38;
  TObjectIterator<UNiagaraEffectType> local_28;
  
  pTVar1 = &this->PerfBaselineListener;
  if (pTVar1->Object != (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0) {
    FParticlePerfStatsListener_NiagaraPerformanceReporter::ReportToLog(pTVar1->Object);
    local_38.Object = (FParticlePerfStatsListener *)pTVar1->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (this->PerfBaselineListener).SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FParticlePerfStatsManager::RemoveListener(&local_38);
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *)&local_48)
    {
      pTVar1->Object = (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PerfBaselineListener).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  if (GbNiagaraRegenerateBaselinesOnWorldChange != 0) {
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar6 = Z_Construct_UClass_UNiagaraEffectType_NoRegister();
    GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UNiagaraEffectType>::Advance(&local_28);
      lVar7 = (longlong)local_28.Index;
      if (local_28.Index < 0) break;
      if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      UNiagaraEffectType::InvalidatePerfBaseline
                (*(UNiagaraEffectType **)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8));
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// RenderStatPerfBaselines @ 149366ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FNiagaraPerfBaselineHandler::RenderStatPerfBaselines
          (FNiagaraPerfBaselineHandler *this,UWorld *param_1,FViewport *param_2,FCanvas *param_3,
          int param_4,int param_5,TVector<double> *param_6,TRotator<double> *param_7)

{
  FSharedReferencer<1> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> *pTVar4;
  FParticlePerfStatsListener_NiagaraBaselineComparisonRender *this_01;
  undefined1 local_38 [48];
  
  this_01 = (this->DebugRenderListener).Object;
  if (this_01 == (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0) {
    pTVar4 = MakeShared<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>
                       ((TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> *)
                        (local_38 + 0x20));
    local_38._8_8_ = (pTVar4->SharedReferenceCount).ReferenceController;
    local_38._0_8_ = pTVar4->Object;
    if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00 = &(this->DebugRenderListener).SharedReferenceCount;
    if (this != (FNiagaraPerfBaselineHandler *)local_38) {
      (this->DebugRenderListener).Object =
           (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)local_38._0_8_;
      local_38._0_8_ = (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (this_00,(FSharedReferencer<1> *)(local_38 + 8));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38._40_8_);
    local_38._16_8_ = (this->DebugRenderListener).Object;
    local_38._24_8_ = this_00->ReferenceController;
    if ((TReferenceControllerBase<1> *)local_38._24_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_38._24_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_38._24_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FParticlePerfStatsManager::AddListener
              ((TSharedPtr<FParticlePerfStatsListener,1> *)(local_38 + 0x10),true);
    UNiagaraEffectType::GeneratePerfBaselines();
    this_01 = (this->DebugRenderListener).Object;
    if (this_01 == (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7558058588782983914>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                         ,0x516,"DebugRenderListener.IsValid()");
      if (!bVar2) {
        return param_5;
      }
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FParticlePerfStatsListener_NiagaraBaselineComparisonRender::RenderStats
                    (this_01,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar3;
}

// Tick @ 149370460

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
FNiagaraPerfBaselineHandler::Tick(FNiagaraPerfBaselineHandler *this,UWorld *param_1,float param_2)

{
  TSharedPtr<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *pTVar1;
  TTypeCompatibleBytes<FParticlePerfStatsListener_NiagaraPerformanceReporter> *pTVar2;
  int *piVar3;
  TWeakObjectPtr<UWorld,FWeakObjectPtr> *this_00;
  FWeakObjectPtr *pFVar4;
  int iVar5;
  FParticlePerfStatsListener_NiagaraPerformanceReporter *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *pTVar12;
  UNiagaraEffectType *this_01;
  ushort uVar13;
  uint uVar14;
  FWeakObjectPtr *this_02;
  wchar_t *pwVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  UWorld *local_res20;
  TTypeCompatibleBytes<FParticlePerfStatsListener_NiagaraPerformanceReporter> *local_98;
  FSharedReferencer<1> local_90;
  longlong local_88;
  FSharedReferencer<1> FStack_80;
  TSharedPtr<FParticlePerfStatsListener,1> local_78;
  TSharedPtr<FParticlePerfStatsListener,1> local_68;
  FString local_58;
  FString local_48;
  
  bVar11 = false;
  local_res10 = param_1;
  bVar10 = UWorld::IsGameWorld(param_1);
  uVar16 = 0;
  if (bVar10) {
    bVar10 = UWorld::HasBegunPlay(param_1);
    if ((bVar10) && (param_1->bMatchStarted != '\0')) {
      pTVar1 = &this->PerfBaselineListener;
      pFVar6 = pTVar1->Object;
      bVar11 = true;
      if (GbNiagaraPerfReporting < 1) {
        if (pFVar6 != (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0) {
          local_68.SharedReferenceCount.ReferenceController =
               (this->PerfBaselineListener).SharedReferenceCount.ReferenceController;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_68.Object = (FParticlePerfStatsListener *)pFVar6;
          FParticlePerfStatsManager::RemoveListener(&local_68);
          local_88 = 0;
          FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (pTVar1 != (TSharedPtr<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *)
                        &local_88) {
            pTVar1->Object = (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->PerfBaselineListener).SharedReferenceCount,&FStack_80);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_80.ReferenceController);
        }
      }
      else if (pFVar6 == (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0) {
        pTVar12 = SharedPointerInternals::
                  NewIntrusiveReferenceController<1,FParticlePerfStatsListener_NiagaraPerformanceReporter,UWorld_*_&>
                            (&local_res10);
        pTVar2 = &pTVar12->ObjectStorage;
        if (pTVar2 == (TTypeCompatibleBytes<FParticlePerfStatsListener_NiagaraPerformanceReporter> *
                      )0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        else if (((*(longlong *)((pTVar12->ObjectStorage).Pad + 8) == 0) ||
                 (lVar7 = *(longlong *)((pTVar12->ObjectStorage).Pad + 0x10), lVar7 == 0)) ||
                (*(int *)(lVar7 + 8) < 1)) {
          if (pTVar12 !=
              (TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1>
               *)0x0) {
            LOCK();
            *(int *)&pTVar12->_padding_ = (int)pTVar12->_padding_ + 1;
            UNLOCK();
          }
          *(TTypeCompatibleBytes<FParticlePerfStatsListener_NiagaraPerformanceReporter> **)
           ((pTVar12->ObjectStorage).Pad + 8) = pTVar2;
          if (pTVar12 !=
              *(TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1>
                **)((pTVar12->ObjectStorage).Pad + 0x10)) {
            if (pTVar12 !=
                (TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1>
                 *)0x0) {
              LOCK();
              piVar3 = (int *)((longlong)&pTVar12->_padding_ + 4);
              *piVar3 = *piVar3 + 1;
              UNLOCK();
            }
            plVar8 = *(longlong **)((pTVar12->ObjectStorage).Pad + 0x10);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar3 = (int *)((longlong)plVar8 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
            *(TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1>
              **)((pTVar12->ObjectStorage).Pad + 0x10) = pTVar12;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pTVar12);
        }
        if (pTVar12 !=
            (TIntrusiveReferenceController<FParticlePerfStatsListener_NiagaraPerformanceReporter,1>
             *)0x0) {
          LOCK();
          *(int *)&pTVar12->_padding_ = (int)pTVar12->_padding_ + 1;
          UNLOCK();
        }
        local_98 = pTVar2;
        local_90.ReferenceController = (TReferenceControllerBase<1> *)pTVar12;
        if (&this->PerfBaselineListener !=
            (TSharedPtr<FParticlePerfStatsListener_NiagaraPerformanceReporter,1> *)&local_98) {
          (this->PerfBaselineListener).Object =
               (FParticlePerfStatsListener_NiagaraPerformanceReporter *)pTVar2;
          local_98 = (TTypeCompatibleBytes<FParticlePerfStatsListener_NiagaraPerformanceReporter> *)
                     0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->PerfBaselineListener).SharedReferenceCount,&local_90);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar12);
        local_78.Object = (FParticlePerfStatsListener *)(this->PerfBaselineListener).Object;
        local_78.SharedReferenceCount.ReferenceController =
             (this->PerfBaselineListener).SharedReferenceCount.ReferenceController;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FParticlePerfStatsManager::AddListener(&local_78,true);
      }
    }
  }
  if (((this->PerfBaselineListener).Object !=
       (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0) ||
     ((this->DebugRenderListener).Object !=
      (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0)) {
    UNiagaraEffectType::GeneratePerfBaselines();
  }
  if ((0 < (this->BaselinesToGenerate).ArrayNum) && (bVar11)) {
    this_00 = &this->BaselineGenWorld;
    if (this->BaselineGenerationState == Begin) {
      this->BaselineGenerationState = WaitingToGenerate;
      this->WorldTimeToGenerate = (double)GBaselineGenerationDelay + param_1->TimeSeconds;
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res20);
    }
    bVar11 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar11) {
      bVar11 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals<UWorld,bool>(this_00,param_1);
      if (bVar11) {
        if (this->BaselineGenerationState == WaitingToGenerate) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
              < ::_TSS0) {
            _Init_thread_header(&::_TSS0);
            if (::_TSS0 == -1) {
              pwVar15 = L"NiagaraGenBaselineMessageID";
              if (FCrc::CRCTable_DEPRECATED[1] == 0) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CRCTable_DEPRECATED[1] != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                                    ,0xb4,L"");
                if (bVar11) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              uVar14 = 0x4e;
              do {
                pwVar15 = pwVar15 + 1;
                uVar13 = (short)uVar14 - (-(ushort)(uVar14 - 0x61 < 0x1a) & 0x20);
                uVar16 = uVar16 >> 8 ^
                         FCrc::CRCTable_DEPRECATED[(byte)((byte)uVar16 ^ (byte)uVar13)];
                uVar16 = uVar16 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar13 >> 8 ^ uVar16) & 0xff];
                uVar14 = (uint)(ushort)*pwVar15;
              } while (*pwVar15 != L'\0');
              GenBaselineMessageID = uVar16;
              _Init_thread_footer(&::_TSS0);
            }
          }
          if (param_1->TimeSeconds < this->WorldTimeToGenerate) {
            ::FString::PrintfImpl(&local_48,L"Generating Niagara Perf Baselines in %g seconds");
            UEngine::AddOnScreenDebugMessage
                      (GEngine,GenBaselineMessageID,__real_3f000000,FColor::White,&local_48,true,
                       &UE::Math::TVector2<double>::UnitVector);
            local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
          }
          else {
            this->BaselineGenerationState = Generating;
            ::FString::FString(&local_58,L"Generating Niagara Perf Baselines...");
            UEngine::AddOnScreenDebugMessage
                      (GEngine,GenBaselineMessageID,__real_40800000,FColor::White,&local_58,true,
                       &UE::Math::TVector2<double>::UnitVector);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        if (this->BaselineGenerationState == Generating) {
          this_02 = (FWeakObjectPtr *)(this->BaselinesToGenerate).AllocatorInstance.Data;
          iVar5 = (this->BaselinesToGenerate).ArrayNum;
          pFVar4 = this_02 + iVar5;
          while( true ) {
            if ((this->BaselinesToGenerate).ArrayNum != iVar5) {
              `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (this_02 == pFVar4) break;
            this_01 = (UNiagaraEffectType *)FWeakObjectPtr::Get(this_02);
            if ((this_01 != (UNiagaraEffectType *)0x0) &&
               ((((this_01->PerfBaselineVersion).D !=
                  UNiagaraEffectType::CurrentPerfBaselineVersion.D ||
                 (this_01->PerfBaselineVersion).C !=
                 UNiagaraEffectType::CurrentPerfBaselineVersion.C) ||
                (this_01->PerfBaselineVersion).B != UNiagaraEffectType::CurrentPerfBaselineVersion.B
                ) || (this_01->PerfBaselineVersion).A !=
                     UNiagaraEffectType::CurrentPerfBaselineVersion.A)) {
              UNiagaraEffectType::SpawnBaselineActor(this_01,param_1);
            }
            this_02 = this_02 + 1;
          }
          this->BaselineGenerationState = Complete;
          (this->BaselinesToGenerate).ArrayNum = 0;
          if ((this->BaselinesToGenerate).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,&(this->BaselinesToGenerate).AllocatorInstance,0,
                       &(this->BaselinesToGenerate).ArrayMax);
          }
          (this->BaselineGenWorld).WeakPtr = (FWeakObjectPtr)0x0;
        }
      }
    }
    else {
      this->BaselineGenerationState = Complete;
      (this->BaselinesToGenerate).ArrayNum = 0;
      if ((this->BaselinesToGenerate).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->BaselinesToGenerate).AllocatorInstance,0,
                   &(this->BaselinesToGenerate).ArrayMax);
      }
      (this->BaselineGenWorld).WeakPtr = (FWeakObjectPtr)0x0;
    }
  }
  return;
}

// ToggleStatPerfBaselines @ 149373f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraPerfBaselineHandler::ToggleStatPerfBaselines
          (FNiagaraPerfBaselineHandler *this,UWorld *param_1,FCommonViewportClient *param_2,
          wchar_t *param_3)

{
  FSharedReferencer<1> *this_00;
  TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> *pTVar1;
  undefined1 local_38 [24];
  FSharedReferencer<1> FStack_20;
  TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> local_18;
  
  local_18.Object = (this->DebugRenderListener).Object;
  if (local_18.Object != (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0) {
    local_18.SharedReferenceCount.ReferenceController =
         (this->DebugRenderListener).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FParticlePerfStatsManager::RemoveListener((TSharedPtr<FParticlePerfStatsListener,1> *)&local_18)
    ;
    local_38._16_8_ = (FParticlePerfStatsListener_NiagaraPerformanceReporter *)0x0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (this != (FNiagaraPerfBaselineHandler *)(local_38 + 0x10)) {
      (this->DebugRenderListener).Object =
           (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DebugRenderListener).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    return false;
  }
  pTVar1 = MakeShared<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>(&local_18);
  local_38._8_8_ = (pTVar1->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar1->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &(this->DebugRenderListener).SharedReferenceCount;
  if (this != (FNiagaraPerfBaselineHandler *)local_38) {
    (this->DebugRenderListener).Object =
         (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)local_38._0_8_;
    local_38._0_8_ = (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (this_00,(FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  local_18.Object = (this->DebugRenderListener).Object;
  local_18.SharedReferenceCount.ReferenceController = this_00->ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FParticlePerfStatsManager::AddListener((TSharedPtr<FParticlePerfStatsListener,1> *)&local_18,true)
  ;
  UNiagaraEffectType::GeneratePerfBaselines();
  return false;
}

