// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// FParticlePerfStatsListener_NiagaraPerformanceReporter @ 149334f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FParticlePerfStatsListener_NiagaraPerformanceReporter * __thiscall
FParticlePerfStatsListener_NiagaraPerformanceReporter::
FParticlePerfStatsListener_NiagaraPerformanceReporter
          (FParticlePerfStatsListener_NiagaraPerformanceReporter *this,UWorld *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  FDateTime this_00;
  FString *pFVar4;
  UWorld *local_res8;
  FString local_28;
  
  FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)this,false,true,false);
  this->_padding_ = (longlong)&___7FParticlePerfStatsListener_NiagaraPerformanceReporter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  this->CurrentWorldTime = 0.0;
  pFVar1 = &this->TestNameString;
  this->CurrentFrameNumber = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestNameString).Data.ArrayNum = 0;
  (this->TestNameString).Data.ArrayMax = 0;
  this->NumFrames = 0;
  this->NumFramesRT = 0;
  this->TotalTests = 0;
  *(undefined8 *)&this->StoredStats = 0;
  *(undefined8 *)&(this->StoredStats).field_0x8 = 0;
  *(undefined8 *)&(this->StoredStats).field_0x20 = 0;
  *(undefined4 *)&(this->StoredStats).field_0x28 = 0;
  *(undefined4 *)&(this->StoredStats).field_0x2c = 0x80;
  *(undefined4 *)&(this->StoredStats).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StoredStats).field_0x34 = 0;
  *(undefined8 *)&(this->StoredStats).field_0x40 = 0;
  *(undefined4 *)&(this->StoredStats).field_0x48 = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ResultsFence);
  this->bResultsTrigger = false;
  pUVar3 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
  this->CurrentWorldTime = *(double *)&pUVar3[0x39].field_0x10;
  this->CurrentFrameNumber = GFrameNumber;
  this_00 = FDateTime::Now();
  pFVar4 = FDateTime::ToString((FDateTime *)this_00.Ticks,&local_28,L"%d-%H.%M.%S");
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TestNameString).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->TestNameString).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FParticlePerfStatsListener_NiagaraPerformanceReporter @ 149336be0

void __thiscall
FParticlePerfStatsListener_NiagaraPerformanceReporter::
~FParticlePerfStatsListener_NiagaraPerformanceReporter
          (FParticlePerfStatsListener_NiagaraPerformanceReporter *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  FRenderCommandFence::~FRenderCommandFence(&this->ResultsFence);
  *(undefined4 *)&(this->StoredStats).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StoredStats).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StoredStats);
  pFVar2 = (this->TestNameString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)this);
  return;
}

// operator() @ 149337d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FParticlePerfStatsListener_NiagaraPerformanceReporter::HandleTestResults'::__l30::<lambda_1>::
operator()(void *this,FOutputDevice *param_1,FTestReport *param_2)

{
  uint uVar1;
  FAccumulatedParticlePerfStats *pFVar2;
  code *pcVar3;
  bool bVar4;
  UNiagaraEffectType *this_00;
  FText *pFVar5;
  uint uVar6;
  FAccumulatedParticlePerfStats_RT *this_01;
  uint uVar7;
  FString local_c8;
  FString local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68 [4];
  
  UNiagaraSystem::GetEffectType(param_2->System);
  FOutputDevice::Log(param_1,
                     L"|===========================================================================|"
                    );
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2->System,&local_c8,(UObject *)0x0);
  FOutputDevice::LogfImpl(param_1,L"| System | %s |");
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  this_00 = UNiagaraSystem::GetEffectType(param_2->System);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_b8,(UObject *)0x0);
  FOutputDevice::LogfImpl
            (param_1,L"| Baseline | %s | GT Avg: %5u | GT Max: %5u | RT Avg: %5u | RT Max: %5u |");
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pFVar5 = FNiagaraPerfBaselineStats::GetComparisonResultText(local_68,param_2->RTMaxResult);
  FText::ToString(pFVar5);
  pFVar5 = FNiagaraPerfBaselineStats::GetComparisonResultText(&local_78,param_2->RTAvgResult);
  FText::ToString(pFVar5);
  pFVar5 = FNiagaraPerfBaselineStats::GetComparisonResultText(&local_88,param_2->GTMaxResult);
  FText::ToString(pFVar5);
  pFVar5 = FNiagaraPerfBaselineStats::GetComparisonResultText(&local_98,param_2->GTAvgResult);
  FText::ToString(pFVar5);
  pFVar5 = FNiagaraPerfBaselineStats::GetComparisonResultText(&local_a8,param_2->OverallResult);
  FText::ToString(pFVar5);
  FOutputDevice::LogfImpl
            (param_1,
             L"| Results | Overall: %s | GT Avg: %s | GT Max: %s | RT Avg: %s | RT Max: %s |");
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68[0].TextData.Reference + 0x10))();
  }
  pFVar2 = param_2->Stats;
  uVar7 = 5;
  if ((pFVar2->GameThreadStats).AccumulatedStats.NumInstances != 0) {
    uVar1 = (pFVar2->GameThreadStats).NumFrames;
    uVar6 = 5;
    if (uVar1 < 10) {
      uVar6 = uVar1 >> 1;
    }
    FAccumulatedParticlePerfStats_GT::GetPerInstanceMaxCycles(&pFVar2->GameThreadStats,uVar6);
    FOutputDevice::LogfImpl
              (param_1,
               L"| Game Thread | Num: %4u | Avg: %6u | Max: %6u | AvgRatio: %g | Max Ratio: %g |");
    FOutputDevice::LogfImpl(param_1,L"| | Tick            | Total: %5u | Avg: %5u |");
    FOutputDevice::LogfImpl(param_1,L"| | Tick Concurrent | Total: %5u | Avg: %5u |");
    FOutputDevice::LogfImpl(param_1,L"| | Finalize        | Total: %5u | Avg: %5u |");
    FOutputDevice::LogfImpl(param_1,L"| | EOF Update      | Total: %5u | Avg: %5u |");
  }
  pFVar2 = param_2->Stats;
  bVar4 = IsInGameThread();
  if (((!bVar4) && (bVar4 = IsInRenderingThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<392709136413884568>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                         ,0x98,"IsInRenderingThread()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_01 = &pFVar2->RenderThreadStats;
  if ((pFVar2->RenderThreadStats).AccumulatedStats.NumInstances != 0) {
    uVar1 = this_01->NumFrames;
    if (uVar1 < 10) {
      uVar7 = uVar1 >> 1;
    }
    FAccumulatedParticlePerfStats_RT::GetPerInstanceMaxCycles(this_01,uVar7);
    FOutputDevice::LogfImpl
              (param_1,
               L"| Render Thread | Num: %4u | Avg: %6u | Max: %6u | AvgRatio: %g | Max Ratio: %g |")
    ;
    FOutputDevice::LogfImpl(param_1,L"| | Update | Total: %5u | Avg: %5u |");
    FOutputDevice::LogfImpl(param_1,L"| | GDME   | Total: %5u | Avg: %5u |");
  }
  return;
}

// operator() @ 149339480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FParticlePerfStatsListener_NiagaraPerformanceReporter::ReportToLog'::__l118::<lambda_2>::operator()
          (void *this,FStatTestInfo *param_1,FNiagaraPerfBaselineStats *param_2)

{
  FAccumulatedParticlePerfStats_RT *this_00;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FNiagaraPerfBaselineStats local_88 [6];
  
  if (4 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  FNiagaraPerfBaselineStats::FNiagaraPerfBaselineStats(local_88,&param_1->AccumulatedStats,false);
  uVar5 = 5;
  if ((param_1->AccumulatedStats).GameThreadStats.AccumulatedStats.NumInstances != 0) {
    uVar1 = (param_1->AccumulatedStats).GameThreadStats.NumFrames;
    uVar4 = 5;
    if (uVar1 < 10) {
      uVar4 = uVar1 >> 1;
    }
    if (4 < (byte)LogNiagara._0_1_) {
      FAccumulatedParticlePerfStats_GT::GetPerInstanceMaxCycles
                (&(param_1->AccumulatedStats).GameThreadStats,uVar4);
      FAccumulatedParticlePerfStats_GT::GetPerInstanceAvg
                (&(param_1->AccumulatedStats).GameThreadStats);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
    }
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  bVar3 = IsInGameThread();
  if (((!bVar3) && (bVar3 = IsInRenderingThread(), !bVar3)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<392709136413884568>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                         ,0x98,"IsInRenderingThread()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &(param_1->AccumulatedStats).RenderThreadStats;
  if ((param_1->AccumulatedStats).RenderThreadStats.AccumulatedStats.NumInstances != 0) {
    uVar1 = this_00->NumFrames;
    if (uVar1 < 10) {
      uVar5 = uVar1 >> 1;
    }
    FAccumulatedParticlePerfStats_RT::GetPerInstanceMaxCycles(this_00,uVar5);
    if (((4 < (byte)LogNiagara._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
        4 < (byte)LogNiagara._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
       4 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  return;
}

// HandleTestResults @ 149357280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FParticlePerfStatsListener_NiagaraPerformanceReporter::HandleTestResults
          (FParticlePerfStatsListener_NiagaraPerformanceReporter *this)

{
  double dVar1;
  uint uVar2;
  FWeakObjectPtr FVar3;
  code *pcVar4;
  EComparisonResult EVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForElementType<unsigned_int> FVar8;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  UObject *pUVar12;
  UNiagaraSystem *this_00;
  UClass *pUVar13;
  UNiagaraEffectType *pUVar14;
  FString *pFVar15;
  IFileManager *pIVar16;
  undefined8 *puVar17;
  FOutputDevice *this_01;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  ForElementType<unsigned_int> FVar26;
  uint uVar27;
  FWeakObjectPtr *this_02;
  FAccumulatedParticlePerfStats *pFVar28;
  FTestReport *pFVar29;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_218;
  ForAnyElementType local_210;
  undefined8 local_208;
  uint local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FTestReport local_1c8;
  ForElementType<unsigned_int> local_190;
  FNiagaraPerfBaselineStats local_188;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  FString local_140;
  FString local_130;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  TIntRect<int>_u_0 local_c0 [8];
  
  if ((this->bResultsTrigger != false) &&
     (bVar10 = FRenderCommandFence::IsFenceComplete(&this->ResultsFence), bVar10)) {
    if (&this->_padding_ == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    local_200 = this->CurrentFrameNumber;
    dVar1 = this->CurrentWorldTime;
    local_210.Data = (FScriptContainerElement *)0x0;
    local_208 = 0;
    this->bResultsTrigger = false;
    pUVar12 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
    local_178 = &this->StoredStats;
    iStack_170 = 0;
    local_190 = (ForElementType<unsigned_int>)&(this->StoredStats).field_0x10;
    local_158 = 0;
    iVar18 = 1;
    this->CurrentWorldTime = *(double *)&pUVar12[0x39].field_0x10;
    this->CurrentFrameNumber = GFrameNumber;
    iVar11 = *(int *)&(this->StoredStats).field_0x28;
    uStack_16c = 1;
    iStack_15c = iStack_170;
    if (iVar11 != 0) {
      puVar25 = *(uint **)&(this->StoredStats).field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)local_190;
      }
      uStack_16c = *puVar25;
      iStack_170 = 0;
      local_158 = 0;
      while (uStack_16c == 0) {
        iStack_170 = iStack_170 + 1;
        local_158 = local_158 + 0x20;
        uStack_16c = 1;
        iStack_15c = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170)
        goto LAB_1493573ff;
        uStack_16c = puVar25[iStack_170];
      }
      uStack_16c = ~(uStack_16c - 1) & uStack_16c;
      uVar20 = (ulonglong)uStack_16c * 2 + 1;
      lVar19 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_148 = (int)lVar19;
      iStack_15c = local_158 + -1 + local_148;
      if (iVar11 < iStack_15c) {
        iStack_15c = iVar11;
      }
    }
LAB_1493573ff:
    iStack_150 = *(int *)&(this->StoredStats).field_0x8 - *(int *)&(this->StoredStats).field_0x34;
    local_218 = *(uint *)&(this->StoredStats).field_0x28;
    uStack_160 = 0xffffffff;
    TStack_118.CurrentBitIndex = iStack_15c;
    TStack_118.UnvisitedBitMask = 0xffffffff;
    TStack_118._padding_ = CONCAT44(uStack_16c,iStack_170);
    uVar27 = local_218 & 0xffffffe0;
    iVar24 = (int)local_218 >> 5;
    TStack_118._28_4_ = iStack_15c;
    TStack_118.BaseBitIndex = local_158;
    uStack_f8 = CONCAT44(uStack_14c,iStack_150);
    local_168 = (undefined1 *)local_190;
    iStack_154 = iStack_15c;
    local_120 = local_178;
    TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_190;
    if ((((int)local_218 < 0) || (iVar11 < (int)local_218)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar8 = local_190;
    uVar7 = _UNK_150ae9808;
    uVar6 = ___xmm_00000003000000030000000300000003;
    uVar2 = *(int *)((longlong)local_190 + 0x18);
    if (local_218 != uVar2) {
      FVar26 = local_190;
      if (*(ForElementType<unsigned_int> *)((longlong)local_190 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar26 = *(ForElementType<unsigned_int> *)((longlong)local_190 + 0x10);
      }
      uVar23 = -1 << ((byte)local_218 & 0x1f) & *(uint *)((longlong)FVar26 + (longlong)iVar24 * 4);
      while (uVar23 == 0) {
        iVar24 = iVar24 + 1;
        uVar27 = uVar27 + 0x20;
        local_218 = uVar2;
        if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar24)
        goto LAB_149357540;
        uVar23 = *(uint *)((longlong)FVar26 + (longlong)iVar24 * 4);
      }
      uVar20 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_144 = (int)lVar19;
      local_218 = local_144 + -1 + uVar27;
      if ((int)uVar2 < (int)local_218) {
        local_218 = uVar2;
      }
    }
LAB_149357540:
    while( true ) {
      pTVar9 = local_120;
      if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_118.CurrentBitIndex == local_218) &&
          ((ForElementType<unsigned_int>)TStack_118.Array == FVar8)) &&
         (pTVar9 == &this->StoredStats)) break;
      this_02 = (FWeakObjectPtr *)
                ((longlong)TStack_118.CurrentBitIndex * 0x2d8 + *(longlong *)pTVar9);
      this_00 = (UNiagaraSystem *)FWeakObjectPtr::Get(this_02);
      if (this_00 != (UNiagaraSystem *)0x0) {
        pUVar13 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        iVar11 = (int)pUVar13->_padding_;
        if ((((iVar11 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
              &pUVar13->_padding_)) &&
            (pUVar14 = UNiagaraSystem::GetEffectType(this_00), pUVar14 != (UNiagaraEffectType *)0x0)
            ) && ((((pUVar14->PerfBaselineVersion).D ==
                    UNiagaraEffectType::CurrentPerfBaselineVersion.D &&
                   (pUVar14->PerfBaselineVersion).C ==
                   UNiagaraEffectType::CurrentPerfBaselineVersion.C) &&
                  (pUVar14->PerfBaselineVersion).B ==
                  UNiagaraEffectType::CurrentPerfBaselineVersion.B) &&
                  (pUVar14->PerfBaselineVersion).A ==
                  UNiagaraEffectType::CurrentPerfBaselineVersion.A)) {
          pFVar28 = (FAccumulatedParticlePerfStats *)(this_02 + 1);
          FNiagaraPerfBaselineStats::FNiagaraPerfBaselineStats(&local_188,pFVar28,false);
          if (((((local_188.PerInstanceAvg_GT <= 0.0) || (local_188.PerInstanceAvg_RT <= 0.0)) ||
               ((local_188.PerInstanceMax_GT <= 0.0 ||
                ((local_188.PerInstanceMax_RT <= 0.0 ||
                 (local_1c8.Ratio.PerInstanceAvg_GT = (pUVar14->PerfBaselineStats).PerInstanceAvg_GT
                 , local_1c8.Ratio.PerInstanceAvg_GT <= 0.0)))))) ||
              (local_1c8.Ratio.PerInstanceAvg_RT = (pUVar14->PerfBaselineStats).PerInstanceAvg_RT,
              local_1c8.Ratio.PerInstanceAvg_RT <= 0.0)) ||
             ((local_1c8.Ratio.PerInstanceMax_GT = (pUVar14->PerfBaselineStats).PerInstanceMax_GT,
              local_1c8.Ratio.PerInstanceMax_GT <= 0.0 ||
              (local_1c8.Ratio.PerInstanceMax_RT = (pUVar14->PerfBaselineStats).PerInstanceMax_RT,
              local_1c8.Ratio.PerInstanceMax_RT <= 0.0)))) {
            local_1c8.OverallResult = Unknown;
            local_1c8.Ratio.PerInstanceAvg_GT = 0.0;
            local_1c8.Ratio.PerInstanceAvg_RT = 0.0;
            local_1c8.Ratio.PerInstanceMax_GT = 0.0;
            local_1c8.Ratio.PerInstanceMax_RT = 0.0;
            local_1c8.GTAvgResult = (EComparisonResult)uVar6;
            local_1c8.GTMaxResult = (EComparisonResult)((ulonglong)uVar6 >> 0x20);
            local_1c8.RTAvgResult = (EComparisonResult)uVar7;
            local_1c8.RTMaxResult = (EComparisonResult)((ulonglong)uVar7 >> 0x20);
          }
          else {
            local_1c8.Ratio.PerInstanceAvg_GT =
                 local_188.PerInstanceAvg_GT / local_1c8.Ratio.PerInstanceAvg_GT;
            if (local_1c8.Ratio.PerInstanceAvg_GT < GPerfBaselineThreshold_Bad) {
              if (local_1c8.Ratio.PerInstanceAvg_GT < GPerfBaselineThreshold_Poor) {
                local_1c8.GTAvgResult = Good;
              }
              else {
                local_1c8.GTAvgResult = Poor;
              }
            }
            else {
              local_1c8.GTAvgResult = Bad;
            }
            local_1c8.Ratio.PerInstanceMax_GT =
                 local_188.PerInstanceMax_GT / local_1c8.Ratio.PerInstanceMax_GT;
            if (local_1c8.Ratio.PerInstanceMax_GT < GPerfBaselineThreshold_Bad) {
              if (local_1c8.Ratio.PerInstanceMax_GT < GPerfBaselineThreshold_Poor) {
                local_1c8.GTMaxResult = Good;
              }
              else {
                local_1c8.GTMaxResult = Poor;
              }
            }
            else {
              local_1c8.GTMaxResult = Bad;
            }
            local_1c8.Ratio.PerInstanceAvg_RT =
                 local_188.PerInstanceAvg_RT / local_1c8.Ratio.PerInstanceAvg_RT;
            if (local_1c8.Ratio.PerInstanceAvg_RT < GPerfBaselineThreshold_Bad) {
              if (local_1c8.Ratio.PerInstanceAvg_RT < GPerfBaselineThreshold_Poor) {
                local_1c8.RTAvgResult = Good;
              }
              else {
                local_1c8.RTAvgResult = Poor;
              }
            }
            else {
              local_1c8.RTAvgResult = Bad;
            }
            local_1c8.Ratio.PerInstanceMax_RT =
                 local_188.PerInstanceMax_RT / local_1c8.Ratio.PerInstanceMax_RT;
            if (local_1c8.Ratio.PerInstanceMax_RT < GPerfBaselineThreshold_Bad) {
              local_1c8.RTMaxResult =
                   (EComparisonResult)
                   (GPerfBaselineThreshold_Poor <= local_1c8.Ratio.PerInstanceMax_RT);
            }
            else {
              local_1c8.RTMaxResult = Bad;
            }
            EVar5 = local_1c8.GTMaxResult;
            if (local_1c8.GTMaxResult < local_1c8.GTAvgResult) {
              EVar5 = local_1c8.GTAvgResult;
            }
            local_1c8.OverallResult = local_1c8.RTMaxResult;
            if (local_1c8.RTMaxResult < local_1c8.RTAvgResult) {
              local_1c8.OverallResult = local_1c8.RTAvgResult;
            }
            if (local_1c8.OverallResult < EVar5) {
              local_1c8.OverallResult = EVar5;
            }
            if ((local_1c8.OverallResult == Poor) || (local_1c8.OverallResult == Bad)) {
              if (1 < GbNiagaraPerfReporting) {
                local_1c8.System = this_00;
                local_1c8.Stats = pFVar28;
                if (((local_210.Data <= &local_1c8) &&
                    (&local_1c8 < (FTestReport *)(local_210.Data + (longlong)local_208._4_4_ * 0x38)
                    )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar11 = (int)local_208;
                if ((int)local_208 == local_208._4_4_) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x838,&local_210,(int *)((longlong)&local_208 + 4));
                }
                local_208 = CONCAT44(local_208._4_4_,iVar11 + 1);
                lVar19 = (longlong)iVar11 * 0x38;
                *(UNiagaraSystem **)&local_210.Data[lVar19].field_0x0 = local_1c8.System;
                *(ulonglong *)(local_210.Data + lVar19 + 8) =
                     CONCAT44(local_1c8.GTAvgResult,local_1c8.OverallResult);
                *(ulonglong *)(local_210.Data + lVar19 + 0x10) =
                     CONCAT44(local_1c8.RTAvgResult,local_1c8.GTMaxResult);
                *(ulonglong *)(local_210.Data + lVar19 + 0x10 + 8) =
                     CONCAT44(local_1c8._28_4_,local_1c8.RTMaxResult);
                *(FAccumulatedParticlePerfStats **)(local_210.Data + lVar19 + 0x20) =
                     local_1c8.Stats;
                *(undefined8 *)(local_210.Data + lVar19 + 0x20 + 8) = local_1c8.Ratio._0_8_;
                *(undefined8 *)(local_210.Data + lVar19 + 0x30) = local_1c8.Ratio._8_8_;
              }
              iVar11 = this_02[0x59].ObjectIndex;
              if (iVar11 == this_02[0x59].ObjectSerialNumber) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x2d0,8,(ForAnyElementType *)(this_02 + 0x58),
                                    &this_02[0x59].ObjectSerialNumber);
              }
              FVar3 = this_02[0x58];
              this_02[0x59].ObjectIndex = iVar11 + 1;
              puVar25 = (uint *)((longlong)FVar3 + (longlong)iVar11 * 0x2d0);
              DefaultConstructItems<FParticlePerfStatsListener_NiagaraPerformanceReporter::FStatTestInfo,int>
                        (puVar25,1);
              uVar27 = this->TotalTests;
              *(double *)(puVar25 + 2) = dVar1;
              *puVar25 = uVar27;
              *(double *)(puVar25 + 4) = this->CurrentWorldTime;
              FAccumulatedParticlePerfStats_GT::operator=
                        ((FAccumulatedParticlePerfStats_GT *)(puVar25 + 6),
                         (FAccumulatedParticlePerfStats_GT *)pFVar28);
              puVar25[0x46] = this_02[0x21].ObjectIndex;
              FVar3 = this_02[0x23];
              *(FWeakObjectPtr *)(puVar25 + 0x48) = this_02[0x22];
              *(FWeakObjectPtr *)(puVar25 + 0x4a) = FVar3;
              *(FWeakObjectPtr *)(puVar25 + 0x4c) = this_02[0x24];
              TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::
              operator=((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                         *)(puVar25 + 0x4e),
                        (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                         *)(this_02 + 0x25));
              TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::
              operator=((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                         *)(puVar25 + 0x66),
                        (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                         *)(this_02 + 0x31));
              puVar25[0x7e] = this_02[0x3d].ObjectIndex;
              FVar3 = this_02[0x3f];
              *(FWeakObjectPtr *)(puVar25 + 0x80) = this_02[0x3e];
              *(FWeakObjectPtr *)(puVar25 + 0x82) = FVar3;
              TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::
              operator=((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                         *)(puVar25 + 0x84),
                        (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                         *)(this_02 + 0x40));
              TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::
              operator=((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                         *)(puVar25 + 0x9c),
                        (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                         *)(this_02 + 0x4c));
            }
          }
        }
      }
      TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
    }
    if ((0 < (int)local_208) && (1 < GbNiagaraPerfReporting)) {
      pFVar15 = FPaths::ProfilingDir(&local_d0);
      ::FString::ConcatFC(&local_f0,pFVar15,L"ParticlePerf/NiagaraPerfReports-");
      ::FString::ConcatFF(&local_1d8,&local_f0,&this->TestNameString);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      pIVar16 = IFileManager::Get();
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_1d8.Data.ArrayNum != 0) {
        FVar22.Data = local_1d8.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar16 + 0x60))(pIVar16,FVar22.Data,0);
      ::FString::PrintfImpl(&local_130,L"Test %u [%u-%u].txt");
      iVar11 = local_1d8.Data.ArrayNum;
      FVar22.Data = local_1d8.Data.AllocatorInstance.Data;
      if (local_130.Data.ArrayNum == 0) {
        iVar24 = 0;
      }
      else {
        iVar24 = local_130.Data.ArrayNum + -1;
      }
      lVar19 = (longlong)local_1d8.Data.ArrayNum;
      if ((local_1d8.Data.ArrayNum == 0) && (iVar24 + 1 != 0)) {
        iVar21 = 1;
      }
      else {
        iVar21 = 0;
      }
      iVar21 = iVar24 + 1 + iVar21;
      local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Data.ArrayNum = local_1d8.Data.ArrayNum;
      if ((local_1d8.Data.ArrayNum == 0) && (iVar21 == 0)) {
        local_1f8.Data.ArrayMax = 0;
      }
      else {
        uVar27 = iVar21 + local_1d8.Data.ArrayNum;
        if ((int)uVar27 < local_1d8.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar27,0,(ForAnyElementType *)&local_1f8,local_1d8.Data.ArrayNum,
                   &local_1f8.Data.ArrayMax);
        if (iVar11 != 0) {
          memcpy(local_1f8.Data.AllocatorInstance.Data,FVar22.Data,lVar19 * 2);
        }
      }
      ::FString::PathAppend(&local_1f8,(wchar_t *)local_130.Data.AllocatorInstance.Data,iVar24);
      ::FString::PrintfImpl(&local_e0,L"Writing Report for Perf Test %u to %s...");
      UEngine::AddOnScreenDebugMessage
                (GEngine,TestDebugMessageID,__real_40000000,FColor::White,&local_e0,true,
                 &UE::Math::TVector2<double>::UnitVector);
      pIVar16 = IFileManager::Get();
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_1f8.Data.ArrayNum != 0) {
        FVar22.Data = local_1f8.Data.AllocatorInstance.Data;
      }
      puVar17 = (undefined8 *)(**(code **)((longlong)*pIVar16 + 0x28))(pIVar16,FVar22.Data,0);
      if (puVar17 != (undefined8 *)0x0) {
        this_01 = ::operator_new(0x18);
        if (this_01 == (FOutputDevice *)0x0) {
          this_01 = (FOutputDevice *)0x0;
        }
        else {
          FOutputDevice::FOutputDevice(this_01);
          this_01[1]._padding_ = (longlong)puVar17;
          this_01->_padding_ = (longlong)&___7FOutputDeviceArchiveWrapper__6B_;
        }
        FOutputDevice::Log(this_01,
                           L"|===========================================================================|"
                          );
        FOutputDevice::LogfImpl
                  (this_01,
                   L"|================================ Test %u ======================================|"
                  );
        FOutputDevice::LogfImpl
                  (this_01,L"| Start Frame: %u | End Frame: %u | Start Time: %g | End Time: %g |");
        FOutputDevice::Log(this_01,
                           L"|===========================================================================|"
                          );
        FOutputDevice::Log(this_01,
                           L"|===========================================================================|"
                          );
        iVar11 = (int)local_208;
        uVar20 = (ulonglong)(int)local_208;
        pFVar29 = (FTestReport *)(local_210.Data + uVar20 * 0x38);
        FVar22.Data = local_210.Data;
        while( true ) {
          if ((int)uVar20 != iVar11) {
            `TCheckedPointerIterator<`FParticlePerfStatsListener_NiagaraPerformanceReporter::HandleTestResults'::__l2::FTestReport,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if ((FTestReport *)FVar22.Data == pFVar29) break;
          `FParticlePerfStatsListener_NiagaraPerformanceReporter::HandleTestResults'::__l30::
          <lambda_1>::operator()(local_res20,this_01,(FTestReport *)FVar22.Data);
          uVar20 = local_208 & 0xffffffff;
          FVar22.Data = FVar22.Data + 0x38;
        }
        (**(code **)*puVar17)(puVar17,1);
        if (this_01 != (FOutputDevice *)0x0) {
          (**(code **)this_01->_padding_)(this_01,1);
        }
      }
      if (2 < GbNiagaraPerfReporting) {
        ::FString::PrintfImpl(&local_140,L"Test %u [%u-%u]");
        FVar22.Data = local_1d8.Data.AllocatorInstance.Data;
        if (local_140.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = local_140.Data.ArrayNum + -1;
        }
        if ((local_1d8.Data.ArrayNum != 0) || (iVar11 + 1 == 0)) {
          iVar18 = 0;
        }
        iVar18 = iVar11 + 1 + iVar18;
        local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.Data.ArrayNum = local_1d8.Data.ArrayNum;
        if ((local_1d8.Data.ArrayNum == 0) && (iVar18 == 0)) {
          local_1e8.Data.ArrayMax = 0;
        }
        else {
          uVar27 = iVar18 + local_1d8.Data.ArrayNum;
          if ((int)uVar27 < local_1d8.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar27,0,(ForAnyElementType *)&local_1e8,local_1d8.Data.ArrayNum,
                     &local_1e8.Data.ArrayMax);
          if (local_1d8.Data.ArrayNum != 0) {
            memcpy(local_1e8.Data.AllocatorInstance.Data,FVar22.Data,
                   (longlong)local_1d8.Data.ArrayNum * 2);
          }
        }
        ::FString::PathAppend(&local_1e8,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar11);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        local_c0[0]._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
        local_c0[0]._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
        FScreenshotRequest::RequestScreenshot
                  (&local_1e8,true,false,false,(TIntRect<int> *)&local_c0[0]._s_0);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
    ReportToScreen(this);
    this->TotalTests = this->TotalTests + 1;
    if ((FTestReport *)local_210.Data != (FTestReport *)0x0) {
      FMemory::Free(local_210.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  }
  return;
}

// NeedsSystemStats @ 14935f8e0

bool __thiscall
FParticlePerfStatsListener_NiagaraPerformanceReporter::NeedsSystemStats
          (FParticlePerfStatsListener_NiagaraPerformanceReporter *this)

{
  return true;
}

// NeedsWorldStats @ 14935f910

bool __thiscall
FParticlePerfStatsListener_NiagaraPerformanceReporter::NeedsWorldStats
          (FParticlePerfStatsListener_NiagaraPerformanceReporter *this)

{
  return false;
}

// ReportToLog @ 1493680c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticlePerfStatsListener_NiagaraPerformanceReporter::ReportToLog
          (FParticlePerfStatsListener_NiagaraPerformanceReporter *this)

{
  undefined1 *puVar1;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *pTVar2;
  uint uVar3;
  undefined1 *puVar4;
  UNiagaraBaselineController *pUVar5;
  code *pcVar6;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  UNiagaraSystem *this_00;
  UClass *pUVar10;
  UNiagaraEffectType *pUVar11;
  FString *pFVar12;
  ulonglong uVar13;
  UNiagaraEffectType *pUVar14;
  UObject *pUVar15;
  FWeakObjectPtr *this_01;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  FStatTestInfo *pFVar19;
  uint uVar20;
  FStatTestInfo *pFVar21;
  longlong *plVar22;
  uint uVar23;
  longlong *plVar24;
  FScriptContainerElement *pFVar25;
  undefined1 *puVar26;
  uint *puVar27;
  ForAnyElementType FVar28;
  uint local_res8 [2];
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_198;
  undefined1 local_197 [7];
  ForAnyElementType local_190;
  undefined8 local_188;
  ForAnyElementType local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  FScriptContainerElement *local_160;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *local_158;
  int iStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  FlushRenderingCommands();
  HandleTestResults(this);
  pTVar2 = &this->StoredStats;
  puVar1 = &(this->StoredStats).field_0x10;
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178 = 0;
  iStack_150 = 0;
  local_190.Data = (FScriptContainerElement *)0x0;
  uStack_14c = 1;
  local_188 = 0;
  local_170 = (longlong *)0x0;
  local_138 = 0;
  local_168 = 0;
  iVar9 = *(int *)&(this->StoredStats).field_0x28;
  iStack_13c = iStack_150;
  if (iVar9 != 0) {
    puVar27 = *(uint **)&(this->StoredStats).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar23 = *puVar27;
    iStack_150 = 0;
    local_138 = 0;
    while (uVar23 == 0) {
      iStack_150 = iStack_150 + 1;
      local_138 = local_138 + 0x20;
      iStack_13c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_150) goto LAB_14936818d;
      uVar23 = puVar27[iStack_150];
    }
    uStack_14c = ~(uVar23 - 1) & uVar23;
    uVar17 = (ulonglong)uStack_14c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_160 = (FScriptContainerElement *)CONCAT44(local_160._4_4_,(int)lVar16);
    iStack_13c = (int)lVar16 + -1 + local_138;
    if (iVar9 < iStack_13c) {
      iStack_13c = iVar9;
    }
  }
LAB_14936818d:
  uVar23 = *(uint *)&(this->StoredStats).field_0x28;
  uVar20 = uVar23 & 0xffffffe0;
  iStack_130 = *(int *)&(this->StoredStats).field_0x8 - *(int *)&(this->StoredStats).field_0x34;
  uStack_140 = 0xffffffff;
  TStack_a8._padding_ = CONCAT44(uStack_14c,iStack_150);
  TStack_a8.CurrentBitIndex = iStack_13c;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar23 >> 5;
  TStack_a8._28_4_ = iStack_13c;
  TStack_a8.BaseBitIndex = local_138;
  uStack_88 = CONCAT44(uStack_12c,iStack_130);
  local_158 = pTVar2;
  local_148 = puVar1;
  iStack_134 = iStack_13c;
  local_b0 = pTVar2;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar9 < (int)uVar23)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(this->StoredStats).field_0x28;
  if (uVar23 != uVar3) {
    puVar4 = *(undefined1 **)&(this->StoredStats).field_0x20;
    puVar26 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar26 = puVar4;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar18 * 4);
    while (uVar23 == 0) {
      iVar18 = iVar18 + 1;
      uVar20 = uVar20 + 0x20;
      uVar23 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar18) goto LAB_149368290;
      uVar23 = *(uint *)(puVar26 + (longlong)iVar18 * 4);
    }
    uVar17 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar23 = (uVar20 - 1) + (int)lVar16;
    if ((int)uVar3 < (int)uVar23) {
      uVar23 = uVar3;
    }
  }
LAB_149368290:
  do {
    pTVar7 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a8.CurrentBitIndex == uVar23) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    this_01 = (FWeakObjectPtr *)((longlong)TStack_a8.CurrentBitIndex * 0x2d8 + *(longlong *)pTVar7);
    this_00 = (UNiagaraSystem *)FWeakObjectPtr::Get(this_01);
    if (this_00 != (UNiagaraSystem *)0x0) {
      pUVar10 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      iVar9 = (int)pUVar10->_padding_;
      if ((iVar9 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar10->_padding_)) {
        pUVar11 = UNiagaraSystem::GetEffectType(this_00);
        if (this_01[0x59].ObjectIndex != 0) {
          if ((pUVar11 == (UNiagaraEffectType *)0x0) ||
             ((((pUVar11->PerfBaselineVersion).D != UNiagaraEffectType::CurrentPerfBaselineVersion.D
               || (pUVar11->PerfBaselineVersion).C !=
                  UNiagaraEffectType::CurrentPerfBaselineVersion.C) ||
              (pUVar11->PerfBaselineVersion).B != UNiagaraEffectType::CurrentPerfBaselineVersion.B)
              || (pUVar11->PerfBaselineVersion).A !=
                 UNiagaraEffectType::CurrentPerfBaselineVersion.A)) {
            iVar9 = (int)local_188;
            if ((int)local_188 == local_188._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_190,(int *)((longlong)&local_188 + 4));
            }
            local_188 = CONCAT44(local_188._4_4_,iVar9 + 1);
            lVar16 = (longlong)iVar9;
            *(undefined8 *)(local_190.Data + lVar16 * 0x10 + 8) = 0;
            FVar28.Data = local_190.Data;
          }
          else {
            if (this_01[0x59].ObjectIndex < 1) goto LAB_1493683db;
            iVar9 = (uint)local_178;
            if ((uint)local_178 == local_178._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_180,(int *)((longlong)&local_178 + 4));
            }
            local_178 = CONCAT44(local_178._4_4_,iVar9 + 1);
            lVar16 = (longlong)iVar9;
            *(FWeakObjectPtr **)(local_180.Data + lVar16 * 0x10 + 8) = this_01 + 1;
            FVar28.Data = local_180.Data;
          }
          *(UNiagaraSystem **)(FVar28.Data + lVar16 * 0x10) = this_00;
        }
      }
    }
LAB_1493683db:
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
  if (((4 < (byte)LogNiagara._0_1_) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
      4 < (byte)LogNiagara._0_1_)) &&
     ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
      4 < (byte)LogNiagara._0_1_ &&
      ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
       4 < (byte)LogNiagara._0_1_ &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
       4 < (byte)LogNiagara._0_1_)))))) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  if (0 < (int)(uint)local_178) {
    pFVar12 = ::FString::FString(&local_80,
                                 L"Systems with bad performance relative to their baseline.");
    if (((4 < (byte)LogNiagara._0_1_) &&
        (UE::Logging::Private::BasicLog<5>
                   ((FStaticBasicLogRecord *)&PTR_u_________________151deeb10,
                    (FLogCategoryBase *)&LogNiagara), 4 < (byte)LogNiagara._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u____s___151deebb0,(FLogCategoryBase *)&LogNiagara)
       , 4 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_________________151deebe0,
                 (FLogCategoryBase *)&LogNiagara);
    }
    pFVar25 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    uVar13 = (ulonglong)(int)(uint)local_178;
    local_160 = local_180.Data + uVar13 * 0x10;
    local_res8[0] = (uint)local_178;
    uVar17 = uVar13;
    FVar28.Data = local_180.Data;
    while( true ) {
      pFVar25 = local_160;
      if ((int)uVar13 != (int)uVar17) {
        `TCheckedPointerIterator<`FParticlePerfStatsListener_NiagaraPerformanceReporter::ReportToLog'::__l2::FBaselineReportItem,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res10);
      }
      if (FVar28.Data == pFVar25) break;
      if ((4 < (byte)LogNiagara._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
         4 < (byte)LogNiagara._0_1_)) {
        local_128 = *(FName *)(*(longlong *)FVar28.Data + 0x18);
        ::FName::ToString(&local_128,&local_100);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u___System___s____151def330,
                   (FLogCategoryBase *)&LogNiagara);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
      pUVar11 = UNiagaraSystem::GetEffectType(*(UNiagaraSystem **)FVar28.Data);
      pUVar14 = UNiagaraSystem::GetEffectType(*(UNiagaraSystem **)FVar28.Data);
      pUVar5 = (pUVar14->PerformanceBaselineController).field0_0x0.DebugPtr;
      if (4 < (byte)LogNiagara._0_1_) {
        local_res10 = (longlong)(pUVar11->PerfBaselineStats).PerInstanceAvg_GT;
        pUVar15 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar5->System);
        if (pUVar15 == (UObject *)0x0) {
          if (*(longlong *)&(pUVar5->System).SoftObjectPtr.field_0x8 != 0) {
            FSoftObjectPath::TryLoad
                      ((FSoftObjectPath *)&(pUVar5->System).SoftObjectPtr.field_0x8,
                       (FUObjectSerializeContext *)0x0);
            pUVar15 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar5->System);
            goto LAB_14936864d;
          }
LAB_149368675:
          pUVar15 = (UObject *)0x0;
        }
        else {
LAB_14936864d:
          if (pUVar15 == (UObject *)0x0) goto LAB_149368675;
          pUVar10 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
          iVar9 = (int)pUVar10->_padding_;
          if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar9) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar10->_padding_)) goto LAB_149368675;
        }
        local_120.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
        local_120.Number = *(uint *)&pUVar15->field_0x1c;
        ::FName::ToString(&local_120,&local_f0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
      }
      lVar16 = *(longlong *)(FVar28.Data + 8);
      iVar9 = *(int *)(lVar16 + 0x2c0);
      pFVar19 = *(FStatTestInfo **)(lVar16 + 0x2b8);
      pFVar21 = pFVar19 + iVar9;
      while( true ) {
        if (*(int *)(lVar16 + 0x2c0) != iVar9) {
          `TCheckedPointerIterator<FParticlePerfStatsListener_NiagaraPerformanceReporter::FStatTestInfo,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar19 == pFVar21) break;
        `FParticlePerfStatsListener_NiagaraPerformanceReporter::ReportToLog'::__l118::<lambda_2>::
        operator()(local_res20,pFVar19,&pUVar11->PerfBaselineStats);
        if (4 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        pFVar19 = pFVar19 + 1;
      }
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      uVar13 = local_178 & 0xffffffff;
      FVar28.Data = FVar28.Data + 0x10;
      uVar17 = (ulonglong)local_res8[0];
    }
  }
  if (0 < (int)local_168) {
    pFVar12 = ::FString::FString(&local_70,L"Systems without valid baseline data.");
    if (((4 < (byte)LogNiagara._0_1_) &&
        (UE::Logging::Private::BasicLog<5>
                   ((FStaticBasicLogRecord *)&PTR_u_________________151deeb10,
                    (FLogCategoryBase *)&LogNiagara), 4 < (byte)LogNiagara._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u____s___151deebb0,(FLogCategoryBase *)&LogNiagara)
       , 4 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_________________151deebe0,
                 (FLogCategoryBase *)&LogNiagara);
    }
    pFVar25 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    iVar9 = (int)local_168;
    plVar22 = local_170 + (longlong)(int)local_168 * 2;
    plVar24 = local_170;
    while( true ) {
      if ((int)local_168 != iVar9) {
        `TCheckedPointerIterator<`FParticlePerfStatsListener_NiagaraPerformanceReporter::ReportToLog'::__l2::FBaselineReportItem,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_198);
      }
      if (plVar24 == plVar22) break;
      if (4 < (byte)LogNiagara._0_1_) {
        pUVar11 = UNiagaraSystem::GetEffectType((UNiagaraSystem *)*plVar24);
        local_118 = (FName)pUVar11->_padding_;
        ::FName::ToString(&local_118,&local_d0);
        local_110 = *(FName *)(*plVar24 + 0x18);
        ::FName::ToString(&local_110,&local_e0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      plVar24 = plVar24 + 2;
    }
  }
  if (0 < (int)local_188) {
    pFVar12 = ::FString::FString(local_60,L"Systems without an Effect Type.");
    if (((4 < (byte)LogNiagara._0_1_) &&
        (UE::Logging::Private::BasicLog<5>
                   ((FStaticBasicLogRecord *)&PTR_u_________________151deeb10,
                    (FLogCategoryBase *)&LogNiagara), 4 < (byte)LogNiagara._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u____s___151deebb0,(FLogCategoryBase *)&LogNiagara)
       , 4 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_________________151deebe0,
                 (FLogCategoryBase *)&LogNiagara);
    }
    pFVar25 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    iVar9 = (int)local_188;
    pFVar25 = local_190.Data + (longlong)(int)local_188 * 0x10;
    FVar28.Data = local_190.Data;
    while( true ) {
      if ((int)local_188 != iVar9) {
        `TCheckedPointerIterator<`FParticlePerfStatsListener_NiagaraPerformanceReporter::ReportToLog'::__l2::FBaselineReportItem,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_197);
      }
      if (FVar28.Data == pFVar25) break;
      if (4 < (byte)LogNiagara._0_1_) {
        local_108 = *(FName *)(*(longlong *)FVar28.Data + 0x18);
        ::FName::ToString(&local_108,&local_c0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      FVar28.Data = FVar28.Data + 0x10;
    }
  }
  if (4 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  if (local_170 != (longlong *)0x0) {
    FMemory::Free(local_170);
  }
  if (local_190.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data);
  }
  if (local_180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data);
  }
  return;
}

// ReportToScreen @ 149368a70

/* WARNING: Removing unreachable block (ram,0x000149368e47) */
/* WARNING: Removing unreachable block (ram,0x000149368e01) */
/* WARNING: Removing unreachable block (ram,0x000149368e35) */
/* WARNING: Removing unreachable block (ram,0x000149368e06) */
/* WARNING: Removing unreachable block (ram,0x000149368e2b) */
/* WARNING: Removing unreachable block (ram,0x000149368e2c) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FParticlePerfStatsListener_NiagaraPerformanceReporter::ReportToScreen
          (FParticlePerfStatsListener_NiagaraPerformanceReporter *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *pTVar13;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *pTVar14;
  bool bVar15;
  UNiagaraSystem *this_00;
  UClass *pUVar16;
  UNiagaraEffectType *pUVar17;
  char cVar18;
  ForAnyElementType FVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  FWeakObjectPtr *this_01;
  undefined1 *puVar23;
  uint *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18;
  int local_res20;
  FNiagaraPerfBaselineStats local_168;
  FString local_158;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FString local_b0 [7];
  
  local_148 = &this->StoredStats;
  iVar3 = *(int *)&(this->StoredStats).field_0x28;
  puVar1 = &(this->StoredStats).field_0x10;
  bVar8 = false;
  iStack_140 = 0;
  local_128 = 0;
  uStack_13c = 1;
  iStack_12c = 0;
  if (iVar3 != 0) {
    puVar24 = *(uint **)&(this->StoredStats).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    uVar22 = *puVar24;
    while (uVar22 == 0) {
      iStack_140 = iStack_140 + 1;
      local_128 = local_128 + 0x20;
      iStack_12c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140) goto LAB_149368b42;
      uVar22 = puVar24[iStack_140];
    }
    uStack_13c = ~(uVar22 - 1) & uVar22;
    uVar2 = (ulonglong)uStack_13c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    iStack_12c = local_128 + -1 + local_res20;
    if (iVar3 < iStack_12c) {
      iStack_12c = iVar3;
    }
  }
LAB_149368b42:
  uVar22 = *(uint *)&(this->StoredStats).field_0x28;
  iStack_120 = *(int *)&(this->StoredStats).field_0x8 - *(int *)&(this->StoredStats).field_0x34;
  uStack_130 = 0xffffffff;
  uVar21 = uVar22 & 0xffffffe0;
  TStack_d8._padding_ = CONCAT44(uStack_13c,iStack_140);
  TStack_d8.CurrentBitIndex = iStack_12c;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar22 >> 5;
  TStack_d8._28_4_ = iStack_12c;
  TStack_d8.BaseBitIndex = local_128;
  uStack_b8 = CONCAT44(uStack_11c,iStack_120);
  local_138 = puVar1;
  iStack_124 = iStack_12c;
  local_110 = local_148;
  local_e0 = local_148;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar22 < 0) || (iVar3 < (int)uVar22)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar13 = local_110;
  fVar12 = __real_437f0000;
  fVar11 = __real_40a00000;
  fVar10 = __real_3f000000;
  fVar9 = __real_3f800000;
  uVar4 = *(uint *)&(this->StoredStats).field_0x28;
  if (uVar22 != uVar4) {
    puVar5 = *(undefined1 **)&(this->StoredStats).field_0x20;
    puVar23 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar23 = puVar5;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
    while (uVar22 == 0) {
      iVar20 = iVar20 + 1;
      uVar21 = uVar21 + 0x20;
      uVar22 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar20) goto LAB_149368c70;
      uVar22 = *(uint *)(puVar23 + (longlong)iVar20 * 4);
    }
    uVar2 = (ulonglong)(~(uVar22 - 1) & uVar22) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_118 = (int)lVar6;
    uVar22 = local_118 + -1 + uVar21;
    if ((int)uVar4 < (int)uVar22) {
      uVar22 = uVar4;
    }
  }
LAB_149368c70:
  do {
    pTVar14 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_d8.CurrentBitIndex == uVar22) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar14 == pTVar13)
       ) {
      return;
    }
    this_01 = (FWeakObjectPtr *)((longlong)TStack_d8.CurrentBitIndex * 0x2d8 + *(longlong *)pTVar14)
    ;
    this_00 = (UNiagaraSystem *)FWeakObjectPtr::Get(this_01);
    if (this_00 == (UNiagaraSystem *)0x0) {
LAB_149368fb2:
      if (bVar8) goto LAB_149368fb7;
      ::FString::PrintfImpl(&local_f0,L"| Gathering Niagara Perf Test %u |");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_f0.Data.ArrayNum != 0) {
        FVar19.Data = local_f0.Data.AllocatorInstance.Data;
      }
      ::FString::FString(local_b0,(wchar_t *)FVar19.Data);
      UEngine::AddOnScreenDebugMessage
                (GEngine,TestDebugMessageID,fVar11,FColor::White,local_b0,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0[0].Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    else {
      pUVar16 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      iVar3 = (int)pUVar16->_padding_;
      if (((((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
             &pUVar16->_padding_)) ||
           (((pUVar17 = UNiagaraSystem::GetEffectType(this_00), pUVar17 == (UNiagaraEffectType *)0x0
             || (((((((pUVar17->PerfBaselineVersion).D !=
                      UNiagaraEffectType::CurrentPerfBaselineVersion.D ||
                     (pUVar17->PerfBaselineVersion).C !=
                     UNiagaraEffectType::CurrentPerfBaselineVersion.C) ||
                    (pUVar17->PerfBaselineVersion).B !=
                    UNiagaraEffectType::CurrentPerfBaselineVersion.B) ||
                    (pUVar17->PerfBaselineVersion).A !=
                    UNiagaraEffectType::CurrentPerfBaselineVersion.A ||
                   (FNiagaraPerfBaselineStats::FNiagaraPerfBaselineStats
                              (&local_168,(FAccumulatedParticlePerfStats *)(this_01 + 1),false),
                   local_168.PerInstanceAvg_GT <= 0.0)) || (local_168.PerInstanceAvg_RT <= 0.0)) ||
                 ((local_168.PerInstanceMax_GT <= 0.0 || (local_168.PerInstanceMax_RT <= 0.0))))))
            || ((pUVar17->PerfBaselineStats).PerInstanceAvg_GT <= 0.0)))) ||
          (((pUVar17->PerfBaselineStats).PerInstanceAvg_RT <= 0.0 ||
           ((pUVar17->PerfBaselineStats).PerInstanceMax_GT <= 0.0)))) ||
         (fVar25 = (pUVar17->PerfBaselineStats).PerInstanceMax_RT, fVar25 <= 0.0))
      goto LAB_149368fb2;
      fVar25 = local_168.PerInstanceMax_RT / fVar25;
      if (fVar25 < GPerfBaselineThreshold_Bad) {
        cVar18 = GPerfBaselineThreshold_Poor <= fVar25;
      }
      else {
        cVar18 = '\x02';
      }
      if (cVar18 == '\x01') {
        fVar25 = FLinearColor::Yellow.field0_0x0._0_4_;
        fVar27 = FLinearColor::Yellow.field0_0x0._4_4_;
        fVar26 = FLinearColor::Yellow.field0_0x0._8_4_;
        fVar28 = FLinearColor::Yellow.field0_0x0._12_4_;
      }
      else {
        if (cVar18 != '\x02') goto LAB_149368fb2;
        fVar25 = FLinearColor::Red.field0_0x0._0_4_;
        fVar27 = FLinearColor::Red.field0_0x0._4_4_;
        fVar26 = FLinearColor::Red.field0_0x0._8_4_;
        fVar28 = FLinearColor::Red.field0_0x0._12_4_;
      }
      local_108 = (FName)this_00->_padding_;
      ::FName::ToString(&local_108,&local_100);
      ::FString::PrintfImpl
                (&local_158,
                 L"| %s | Test %u | Niagara Perf Warning! See Niagara Performance Report for details. |"
                );
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      if (fVar9 <= fVar26) {
        fVar26 = fVar9;
      }
      if (fVar9 <= fVar27) {
        fVar27 = fVar9;
      }
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      if (fVar9 <= fVar25) {
        fVar25 = fVar9;
      }
      local_res18._s_0.G = (char)(int)(fVar27 * fVar12 + fVar10);
      local_res18._s_0.B = (char)(int)(fVar26 * fVar12 + fVar10);
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      if (fVar9 <= fVar28) {
        fVar28 = fVar9;
      }
      local_res18._s_0.R = (char)(int)(fVar25 * fVar12 + fVar10);
      local_res18._s_0.A = (char)(int)(fVar28 * fVar12 + fVar10);
      UEngine::AddOnScreenDebugMessage
                (GEngine,*(int *)((longlong)&this_00->_padding_ + 4),fVar11,(FColor)local_res18,
                 &local_158,true,&UE::Math::TVector2<double>::UnitVector);
      if (2 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      bVar8 = true;
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
LAB_149368fb7:
      UEngine::RemoveOnScreenDebugMessage(GEngine,(longlong)TestDebugMessageID);
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  } while( true );
}

// Tick @ 149370fb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FParticlePerfStatsListener_NiagaraPerformanceReporter::Tick
          (FParticlePerfStatsListener_NiagaraPerformanceReporter *this)

{
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *this_00;
  FWeakObjectPtr *this_01;
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  FWeakObjectPtr this_02;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UNiagaraSystem *this_03;
  UClass *pUVar8;
  UNiagaraEffectType *pUVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  uint local_res18;
  int local_res20 [2];
  FWeakObjectPtr local_e8;
  longlong *local_e0;
  int iStack_d8;
  uint uStack_d4;
  longlong *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  UNiagaraSystem *local_a8;
  FWeakObjectPtr local_a0;
  FWeakObjectPtr local_98;
  FWeakObjectPtr *local_90;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  local_res10 = FParticlePerfStatsListener_GatherAll::Tick
                          ((FParticlePerfStatsListener_GatherAll *)this);
  HandleTestResults(this);
  this->NumFrames = this->NumFrames + 1;
  if (GPerfTestFrames < this->NumFrames) {
    this->NumFrames = 0;
    if (&this->_padding_ == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    local_e0 = &this->_padding_;
    iStack_d8 = 0;
    iVar3 = (int)this->_padding_;
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
    local_c0 = 0;
    uStack_d4 = 1;
    iStack_c4 = 0;
    if (iVar3 != 0) {
      plVar14 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar14 = (longlong *)pTVar15;
      }
      uVar12 = (uint)*plVar14;
      while (uVar12 == 0) {
        iStack_d8 = iStack_d8 + 1;
        local_c0 = local_c0 + 0x20;
        iStack_c4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_1493710be;
        uVar12 = *(uint *)((longlong)plVar14 + (longlong)iStack_d8 * 4);
      }
      uStack_d4 = ~(uVar12 - 1) & uVar12;
      uVar1 = (ulonglong)uStack_d4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_b0 = (int)lVar10;
      iStack_c4 = local_b0 + -1 + local_c0;
      if (iVar3 < iStack_c4) {
        iStack_c4 = iVar3;
      }
    }
LAB_1493710be:
    uVar12 = (uint)this->_padding_;
    iStack_b8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
    uVar16 = uVar12 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uStack_d4,iStack_d8);
    uStack_c8 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_c4;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_78._28_4_ = iStack_c4;
    TStack_78.BaseBitIndex = local_c0;
    uStack_58 = CONCAT44(uStack_b4,iStack_b8);
    local_res18 = uVar12;
    local_d0 = (longlong *)pTVar15;
    iStack_bc = iStack_c4;
    local_88 = pTVar15;
    local_80 = local_e0;
    TStack_78.Array = pTVar15;
    if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar2 = (uint)this->_padding_;
    if (uVar12 != uVar2) {
      plVar14 = (longlong *)pTVar15;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar14 = (longlong *)this->_padding_;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        iVar13 = iVar13 + 1;
        uVar16 = uVar16 + 0x20;
        uVar12 = uVar2;
        local_res18 = uVar2;
        if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar13)
        goto LAB_1493711c6;
        uVar12 = *(uint *)((longlong)plVar14 + (longlong)iVar13 * 4);
      }
      uVar1 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_ac = (int)lVar10;
      uVar12 = local_ac + -1 + uVar16;
      local_res18 = uVar12;
      if ((int)uVar2 < (int)uVar12) {
        uVar12 = uVar2;
        local_res18 = uVar2;
      }
    }
LAB_1493711c6:
    while( true ) {
      plVar14 = local_80;
      if ((int)local_80[1] - *(int *)((longlong)local_80 + 0x34) != (int)uStack_58) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_78.CurrentBitIndex == uVar12) && (TStack_78.Array == pTVar15)) &&
         (plVar14 == &this->_padding_)) break;
      this_01 = (FWeakObjectPtr *)(*plVar14 + (longlong)TStack_78.CurrentBitIndex * 0x18);
      this_03 = (UNiagaraSystem *)FWeakObjectPtr::Get(this_01);
      if (this_03 != (UNiagaraSystem *)0x0) {
        pUVar8 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        iVar3 = (int)pUVar8->_padding_;
        if ((iVar3 <= *(int *)(this_03->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar8->_padding_)) {
          this_02 = this_01[1];
          if ((this_02 == (FWeakObjectPtr)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stats",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                                 ,0x324,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pUVar9 = UNiagaraSystem::GetEffectType(this_03);
          if ((pUVar9 != (UNiagaraEffectType *)0x0) &&
             ((((pUVar9->PerfBaselineVersion).D == UNiagaraEffectType::CurrentPerfBaselineVersion.D
               && (pUVar9->PerfBaselineVersion).C ==
                  UNiagaraEffectType::CurrentPerfBaselineVersion.C) &&
              (pUVar9->PerfBaselineVersion).B == UNiagaraEffectType::CurrentPerfBaselineVersion.B)
              && (pUVar9->PerfBaselineVersion).A == UNiagaraEffectType::CurrentPerfBaselineVersion.A
             )) {
            this_00 = &this->StoredStats;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_03);
            }
            local_e8.ObjectIndex = 0;
            local_e8.ObjectSerialNumber = 0;
            local_a8 = this_03;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_03);
            }
            FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_a8);
            uVar12 = local_e8.ObjectSerialNumber ^ local_e8.ObjectIndex;
            if (*(int *)&(this->StoredStats).field_0x8 != *(int *)&(this->StoredStats).field_0x34) {
              puVar4 = *(undefined1 **)&(this->StoredStats).field_0x40;
              puVar11 = &(this->StoredStats).field_0x38;
              if (puVar4 != (undefined1 *)0x0) {
                puVar11 = puVar4;
              }
              for (iVar3 = *(int *)(puVar11 +
                                   (ulonglong)
                                   (*(int *)&(this->StoredStats).field_0x48 - 1U & uVar12) * 4);
                  iVar3 != -1;
                  iVar3 = *(int *)((longlong)iVar3 * 0x2d8 + 0x2d0 +
                                  *(longlong *)&this_00->field_0x0)) {
                local_98 = *(FWeakObjectPtr *)
                            ((longlong)iVar3 * 0x2d8 + *(longlong *)&this_00->field_0x0);
                local_a0 = local_e8;
                bVar6 = TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>::
                        UEOpEquals<UFXSystemAsset_const_,bool>
                                  ((TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_98
                                   ,(TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)
                                    &local_a0);
                if (bVar6) {
                  if ((iVar3 != -1) &&
                     (lVar10 = (longlong)iVar3 * 0x2d8 + *(longlong *)&this_00->field_0x0,
                     lVar10 != 0)) goto LAB_1493713d8;
                  break;
                }
              }
            }
            local_90 = &local_e8;
            TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>,FDefaultSetAllocator>
            ::
            EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&>_>
                      ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>,FDefaultSetAllocator>
                        *)this_00,(uint)local_res20,
                       (TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&> *)
                       (ulonglong)uVar12,(bool *)&local_90);
            lVar10 = (longlong)local_res20[0] * 0x2d8 + *(longlong *)&this_00->field_0x0;
LAB_1493713d8:
            FAccumulatedParticlePerfStats_GT::operator=
                      ((FAccumulatedParticlePerfStats_GT *)(lVar10 + 8),
                       (FAccumulatedParticlePerfStats_GT *)this_02);
            uVar12 = local_res18;
          }
          FAccumulatedParticlePerfStats::ResetGT((FAccumulatedParticlePerfStats *)this_02);
          pTVar15 = local_88;
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    FRenderCommandFence::BeginFence(&this->ResultsFence,RenderThread);
    this->bResultsTrigger = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  }
  return (bool)local_res10;
}

// TickRT @ 1493736d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FParticlePerfStatsListener_NiagaraPerformanceReporter::TickRT
          (FParticlePerfStatsListener_NiagaraPerformanceReporter *this)

{
  FWeakObjectPtr *this_00;
  ulonglong uVar1;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>_>
  *this_01;
  uint uVar2;
  int iVar3;
  FWeakObjectPtr this_02;
  undefined1 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  UNiagaraSystem *this_03;
  UClass *pUVar8;
  UNiagaraEffectType *pUVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [4];
  uint local_e4;
  FWeakObjectPtr local_e0;
  int local_d8 [2];
  longlong *local_d0;
  int iStack_c8;
  uint uStack_c4;
  longlong *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  UNiagaraSystem *local_98;
  FWeakObjectPtr local_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr *local_80;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  LPCRITICAL_SECTION local_70;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FParticlePerfStatsListener_GatherAll::TickRT((FParticlePerfStatsListener_GatherAll *)this);
  this->NumFramesRT = this->NumFramesRT + 1;
  if (GPerfTestFrames < this->NumFramesRT) {
    local_70 = (LPCRITICAL_SECTION)&this->_padding_;
    this->NumFramesRT = 0;
    if (local_70 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(local_70);
    local_d0 = &this->_padding_;
    iStack_c8 = 0;
    iVar3 = (int)this->_padding_;
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
    local_b0 = 0;
    uStack_c4 = 1;
    iStack_b4 = 0;
    if (iVar3 != 0) {
      plVar13 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar13 = (longlong *)pTVar15;
      }
      uVar10 = (uint)*plVar13;
      while (uVar10 == 0) {
        iStack_c8 = iStack_c8 + 1;
        local_b0 = local_b0 + 0x20;
        iStack_b4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1493737f0;
        uVar10 = *(uint *)((longlong)plVar13 + (longlong)iStack_c8 * 4);
      }
      uStack_c4 = ~(uVar10 - 1) & uVar10;
      uVar1 = (ulonglong)uStack_c4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_a0 = (int)lVar12;
      iStack_b4 = local_a0 + -1 + local_b0;
      if (iVar3 < iStack_b4) {
        iStack_b4 = iVar3;
      }
    }
LAB_1493737f0:
    uVar10 = (uint)this->_padding_;
    iStack_a8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
    uVar16 = uVar10 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uStack_c4,iStack_c8);
    uStack_b8 = 0xffffffff;
    TStack_60.CurrentBitIndex = iStack_b4;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar10 >> 5;
    TStack_60._28_4_ = iStack_b4;
    TStack_60.BaseBitIndex = local_b0;
    uStack_40 = CONCAT44(uStack_a4,iStack_a8);
    local_e4 = uVar10;
    local_c0 = (longlong *)pTVar15;
    iStack_ac = iStack_b4;
    local_78 = pTVar15;
    local_68 = local_d0;
    TStack_60.Array = pTVar15;
    if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = (uint)this->_padding_;
    if (uVar10 != uVar2) {
      plVar13 = (longlong *)pTVar15;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar13 = (longlong *)this->_padding_;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)plVar13 + (longlong)iVar11 * 4);
      while (uVar10 == 0) {
        iVar11 = iVar11 + 1;
        uVar16 = uVar16 + 0x20;
        uVar10 = uVar2;
        local_e4 = uVar2;
        if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar11)
        goto LAB_149373905;
        uVar10 = *(uint *)((longlong)plVar13 + (longlong)iVar11 * 4);
      }
      uVar1 = (ulonglong)(~(uVar10 - 1) & uVar10) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_9c = (int)lVar12;
      uVar10 = local_9c + -1 + uVar16;
      local_e4 = uVar10;
      if ((int)uVar2 < (int)uVar10) {
        uVar10 = uVar2;
        local_e4 = uVar2;
      }
    }
LAB_149373905:
    while( true ) {
      plVar13 = local_68;
      if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
        local_e8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if (((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar15)) &&
         (plVar13 == &this->_padding_)) break;
      this_00 = (FWeakObjectPtr *)(*plVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      this_03 = (UNiagaraSystem *)FWeakObjectPtr::Get(this_00);
      if (this_03 != (UNiagaraSystem *)0x0) {
        pUVar8 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        iVar3 = (int)pUVar8->_padding_;
        if ((iVar3 <= *(int *)(this_03->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar8->_padding_)) {
          this_02 = this_00[1];
          if ((this_02 == (FWeakObjectPtr)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stats",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                                 ,0x34d,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar9 = UNiagaraSystem::GetEffectType(this_03);
          if ((pUVar9 != (UNiagaraEffectType *)0x0) &&
             ((((pUVar9->PerfBaselineVersion).D == UNiagaraEffectType::CurrentPerfBaselineVersion.D
               && (pUVar9->PerfBaselineVersion).C ==
                  UNiagaraEffectType::CurrentPerfBaselineVersion.C) &&
              (pUVar9->PerfBaselineVersion).B == UNiagaraEffectType::CurrentPerfBaselineVersion.B)
              && (pUVar9->PerfBaselineVersion).A == UNiagaraEffectType::CurrentPerfBaselineVersion.A
             )) {
            this_01 = &this->StoredStats;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_03);
            }
            local_e0.ObjectIndex = 0;
            local_e0.ObjectSerialNumber = 0;
            local_98 = this_03;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_03);
            }
            FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_98);
            uVar10 = local_e0.ObjectSerialNumber ^ local_e0.ObjectIndex;
            if (*(int *)&(this->StoredStats).field_0x8 != *(int *)&(this->StoredStats).field_0x34) {
              puVar4 = *(undefined1 **)&(this->StoredStats).field_0x40;
              puVar14 = &(this->StoredStats).field_0x38;
              if (puVar4 != (undefined1 *)0x0) {
                puVar14 = puVar4;
              }
              for (iVar3 = *(int *)(puVar14 +
                                   (ulonglong)
                                   (*(int *)&(this->StoredStats).field_0x48 - 1U & uVar10) * 4);
                  iVar3 != -1;
                  iVar3 = *(int *)(*(longlong *)&this_01->field_0x0 + 0x2d0 +
                                  (longlong)iVar3 * 0x2d8)) {
                local_88 = *(FWeakObjectPtr *)
                            ((longlong)iVar3 * 0x2d8 + *(longlong *)&this_01->field_0x0);
                local_90 = local_e0;
                bVar7 = TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>::
                        UEOpEquals<UFXSystemAsset_const_,bool>
                                  ((TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_88
                                   ,(TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)
                                    &local_90);
                if (bVar7) {
                  if ((iVar3 != -1) &&
                     (lVar12 = (longlong)iVar3 * 0x2d8 + *(longlong *)&this_01->field_0x0,
                     lVar12 != 0)) goto LAB_149373b1d;
                  break;
                }
              }
            }
            local_80 = &local_e0;
            TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>,FDefaultSetAllocator>
            ::
            EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&>_>
                      ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo,0>,FDefaultSetAllocator>
                        *)this_01,(uint)local_d8,
                       (TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&> *)
                       (ulonglong)uVar10,(bool *)&local_80);
            lVar12 = (longlong)local_d8[0] * 0x2d8 + *(longlong *)&this_01->field_0x0;
LAB_149373b1d:
            bVar7 = IsInGameThread();
            if (((!bVar7) && (bVar7 = IsInRenderingThread(), !bVar7)) &&
               (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<392709136413884568>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                   ,0x98,"IsInRenderingThread()"), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar7 = IsInGameThread();
            if (((!bVar7) && (bVar7 = IsInRenderingThread(), !bVar7)) &&
               (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<392709136413884568>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                                   ,0x98,"IsInRenderingThread()"), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(undefined4 *)(lVar12 + 0x108) = *(undefined4 *)((longlong)this_02 + 0x100);
            uVar6 = *(undefined8 *)((longlong)this_02 + 0x110);
            *(undefined8 *)(lVar12 + 0x110) = *(undefined8 *)((longlong)this_02 + 0x108);
            *(undefined8 *)(lVar12 + 0x118) = uVar6;
            *(undefined8 *)(lVar12 + 0x120) = *(undefined8 *)((longlong)this_02 + 0x118);
            TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::
            operator=((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                       *)(lVar12 + 0x128),
                      (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                       *)((longlong)this_02 + 0x120));
            TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::
            operator=((TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                       *)(lVar12 + 0x188),
                      (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                       *)((longlong)this_02 + 0x180));
            uVar10 = local_e4;
          }
          FAccumulatedParticlePerfStats::ResetRT((FAccumulatedParticlePerfStats *)this_02);
          pTVar15 = local_78;
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    LeaveCriticalSection(local_70);
  }
  return;
}

