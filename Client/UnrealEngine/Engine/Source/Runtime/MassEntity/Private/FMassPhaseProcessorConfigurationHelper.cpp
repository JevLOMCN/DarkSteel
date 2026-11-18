// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 3

// Configure @ 147204f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassPhaseProcessorConfigurationHelper::Configure
          (FMassPhaseProcessorConfigurationHelper *this,
          TArrayView<UMassProcessor_*_const,int> *param_1,
          TArray<TWeakObjectPtr<UMassProcessor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_2
          ,EProcessorExecutionFlags param_3,TSharedRef<FMassEntityManager,1> *param_4,
          FResult *param_5)

{
  TObjectPtr<UMassProcessor>_u_0 *pTVar1;
  EMassProcessingPhase EVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UMassProcessor>_u_0 TVar4;
  UMassCompositeProcessor *pUVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  TSharedRef<FMassEntityManager,1> *pTVar9;
  ForAnyElementType FVar10;
  FMassPhaseProcessorConfigurationHelper *pFVar11;
  bool bVar12;
  bool bVar13;
  EMassProcessingPhase EVar14;
  bool bVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_Mass_PhaseConfigurePipelineCreation> FVar18;
  UMassProcessor *pUVar19;
  UObject *pUVar20;
  uint uVar21;
  ulonglong uVar22;
  FName FVar23;
  ulonglong uVar24;
  ForAnyElementType FVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  FMassProcessorOrderInfo *pFVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  int iVar33;
  TObjectPtr<UMassProcessor>_u_0 *pTVar34;
  undefined1 auStackY_298 [32];
  undefined1 local_236 [6];
  FMassRuntimePipeline local_230;
  uint local_218;
  FName local_210;
  undefined8 local_208;
  TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> local_200;
  FMassPhaseProcessorConfigurationHelper *local_1f0;
  FMassProcessorOrderInfo *local_1e8;
  FColor_u_0 local_1e0 [2];
  FName local_1d8;
  TSharedRef<FMassEntityManager,1> *local_1d0;
  FName local_1c8;
  TObjectPtr<UMassProcessor>_u_0 local_1b8;
  FMassProcessorOrderInfo *local_1b0;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TSharedPtr<FMassEntityManager,1> local_188;
  FMassProcessorOrderInfo *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FMassProcessorOrderInfo *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FName local_158 [2];
  TArrayView<UMassProcessor_const_*_const,int> local_148;
  TArrayView<FMassProcessorOrderInfo,int> local_138;
  void *local_128 [2];
  void *local_118 [2];
  FMassProcessorOrderInfo *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [56];
  undefined1 local_c0 [64];
  void *local_80;
  undefined4 local_78;
  void *local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  iVar33 = (this->PhaseProcessor->ChildPipeline).Processors.ArrayNum;
  pFVar3 = (this->PhaseProcessor->ChildPipeline).Processors.AllocatorInstance.Data;
  local_1d0 = param_4;
  local_208 = param_5;
  local_1f0 = this;
  local_1e8 = (FMassProcessorOrderInfo *)param_1;
  if ((iVar33 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar26 = 0;
  local_230.Processors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.Processors.ArrayMax = 0;
  local_230.Processors.ArrayNum = iVar33;
  local_230.ExecutionFlags = param_3;
  if (iVar33 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar33,0,(ForAnyElementType *)&local_230,iVar33,&local_230.Processors.ArrayMax);
    ConstructItems<TObjectPtr<UMassProcessor>,UMassProcessor_*,int>
              (local_230.Processors.AllocatorInstance.Data,(UMassProcessor **)pFVar3,iVar33);
  }
  FVar18 = StatPtr_STAT_Mass_PhaseConfigurePipelineCreation;
  if (StatPtr_STAT_Mass_PhaseConfigurePipelineCreation ==
      (FThreadSafeStaticStat<FStat_STAT_Mass_PhaseConfigurePipelineCreation>)0x0) {
    pFVar17 = ::FName::FName(local_158,"STAT_Mass_PhaseConfigurePipelineCreation");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Mass_PhaseConfigurePipelineCreation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Mass_PhaseConfigurePipelineCreation,*pFVar17,
                        L"Mass Phase Configure Pipeline Creation","STATGROUP_Mass",
                        "STATCAT_Advanced",L"Mass",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar18;
  bVar12 = false;
  bVar8 = false;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  bVar15 = false;
  bVar13 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_14720513d:
    bVar8 = bVar13;
    bVar12 = bVar15;
    bVar15 = false;
    local_210 = local_1c8;
    FVar23 = local_1c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e0[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar12 = false;
      bVar8 = true;
      bVar15 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d8.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_1d8.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1d8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                   ,0xa5);
        bVar12 = true;
        bVar8 = true;
        bVar15 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14720513d;
    local_210 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar15 = true;
  }
  iVar33 = (local_208->PrunedProcessors).ArrayNum;
  pFVar3 = (local_208->PrunedProcessors).AllocatorInstance.Data;
  if (iVar33 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x9a9,L"Invalid range size: %lld");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (iVar33 == 0) goto LAB_1472051e9;
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar33,(ForAnyElementType *)&local_230,&local_230.Processors.ArrayNum,
                      &local_230.Processors.ArrayMax);
  ConstructItems<TObjectPtr<UMassProcessor>,TObjectPtr<UMassProcessor>,int>
            (local_230.Processors.AllocatorInstance.Data + (longlong)iVar16 * 8,
             (TObjectPtr<UMassProcessor> *)pFVar3,iVar33);
LAB_1472051e9:
  if (local_230.Processors.ArrayNum != 0) {
    iVar33 = param_2->ArrayNum;
    uVar27 = iVar33 - 1;
    if (-1 < (int)uVar27) {
      lVar32 = (longlong)(int)uVar27;
      do {
        uVar28 = 0;
        if ((int)uVar27 < param_2->ArrayNum) {
          uVar28 = ~uVar27 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar19 = (UMassProcessor *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((param_2->AllocatorInstance).Data + lVar32 * 8));
        if ((pUVar19 == (UMassProcessor *)0x0) ||
           (bVar13 = FMassRuntimePipeline::RemoveProcessor(&local_230,pUVar19), bVar13)) {
          uVar28 = 0;
          if (iVar33 <= param_2->ArrayNum) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          iVar16 = ~uVar27 + param_2->ArrayNum;
          if (1 < iVar16) {
            iVar16 = 1;
          }
          if (iVar16 != 0) {
            memmove(pFVar3 + lVar32 * 8,pFVar3 + (longlong)(param_2->ArrayNum - iVar16) * 8,
                    (longlong)iVar16 << 3);
          }
          param_2->ArrayNum = param_2->ArrayNum + -1;
        }
        lVar32 = lVar32 + -1;
        iVar33 = iVar33 + -1;
        uVar27 = uVar27 - 1;
        FVar23 = local_210;
        param_1 = (TArrayView<UMassProcessor_*_const,int> *)local_1e8;
      } while (-1 < (int)uVar27);
    }
  }
  pFVar11 = local_1f0;
  pTVar34 = (TObjectPtr<UMassProcessor>_u_0 *)param_1->DataPtr;
  pTVar1 = pTVar34 + param_1->ArrayNum;
  pTVar9 = local_1d0;
  for (; local_1d0 = pTVar9, pTVar34 != pTVar1; pTVar34 = pTVar34 + 1) {
    TVar4 = (TObjectPtr<UMassProcessor>_u_0)pTVar34->DebugPtr;
    if ((TVar4.DebugPtr == (UMassProcessor *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Processor != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                            ,0xbe,L"Dynamic processor provided to MASS is null."), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar2 = pFVar11->Phase;
    EVar14 = (**(code **)((TVar4.DebugPtr)->_padding_ + 0x2d0))(TVar4.DebugPtr);
    if (EVar14 == EVar2) {
      local_1b8 = TVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      }
      TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TObjectPtr<UMassProcessor>_>
                (&local_230.Processors,(TObjectPtr<UMassProcessor> *)&local_1b8.ObjectPtr);
    }
    pTVar9 = local_1d0;
  }
  pUVar20 = FWeakObjectPtr::Get(&(pTVar9->Object->Owner).WeakPtr);
  if ((pUVar20 == (UObject *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Owner",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessingPhaseManager.cpp"
                          ,0xc6,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar11 = local_1f0;
  local_1a8 = (local_1f0->PhaseConfig->ProcessorCDOs).AllocatorInstance.Data;
  iVar33 = (local_1f0->PhaseConfig->ProcessorCDOs).ArrayNum;
  if ((iVar33 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_148._12_4_ = uStack_19c;
  local_148.ArrayNum = iVar33;
  local_148.DataPtr = (UMassProcessor **)local_1a8;
  iStack_1a0 = iVar33;
  FMassRuntimePipeline::AppendUniqueRuntimeProcessorCopies(&local_230,&local_148,pUVar20,pTVar9);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  iVar33 = local_230.Processors.ArrayNum;
  FVar25.Data = local_230.Processors.AllocatorInstance.Data;
  bVar12 = pFVar11->bIsGameRuntime;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  if ((local_230.Processors.ArrayNum < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_188.Object = pTVar9->Object;
  local_198 = FVar25.Data;
  iStack_190 = iVar33;
  local_f8._12_4_ = uStack_18c;
  local_f8._8_4_ = iVar33;
  local_188.SharedReferenceCount.ReferenceController =
       (pTVar9->SharedReferenceCount).ReferenceController;
  local_f8._0_8_ = FVar25.Data;
  local_c0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_c0._48_8_ = _UNK_150631d98;
  local_f8[0x10] = false;
  local_f8._24_8_ = (FScriptContainerElement *)0x0;
  local_f8._32_4_ = 0;
  local_f8._36_4_ = 0;
  local_f8._40_8_ = (FNode *)0x0;
  local_f8._48_4_ = 0;
  local_f8._52_4_ = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  local_c0._32_8_ = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_54 = 0x80;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8[0x11] = bVar12;
  FMassProcessorDependencySolver::ResolveDependencies
            ((FMassProcessorDependencySolver *)local_f8,&local_200,&local_188,local_208);
  iStack_170 = local_200.ArrayNum;
  pUVar5 = pFVar11->PhaseProcessor;
  local_178 = (FMassProcessorOrderInfo *)local_200.AllocatorInstance.Data;
  if ((local_200.ArrayNum < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_138._12_4_ = uStack_16c;
  local_138.ArrayNum = iStack_170;
  local_138.DataPtr = local_178;
  UMassCompositeProcessor::UpdateProcessorsCollection(pUVar5,&local_138,param_3);
  uVar22 = (ulonglong)local_200.ArrayNum;
  local_210.ComparisonIndex.Value = local_200.ArrayNum;
  pFVar29 = (FMassProcessorOrderInfo *)(local_200.AllocatorInstance.Data + uVar22 * 0x30);
  FVar25.Data = local_200.AllocatorInstance.Data;
  iVar33 = local_230.Processors.ArrayNum;
  local_1b0 = pFVar29;
  do {
    local_1e8 = (FMassProcessorOrderInfo *)FVar25.Data;
    if (local_200.ArrayNum != (int)uVar22) {
      local_236[0] = 0;
      `TCheckedPointerIterator<FMassProcessorOrderInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_236);
      iVar33 = local_230.Processors.ArrayNum;
    }
    pFVar11 = local_1f0;
    FVar10.Data = local_230.Processors.AllocatorInstance.Data;
    if ((FMassProcessorOrderInfo *)FVar25.Data == pFVar29) {
      if (iVar33 != 0) {
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)local_1f0->PhaseProcessor,(FName *)&LogMass.field_0x4,Verbose,
                     L"Discarding processors due to not having anything to do (no relevant Archetypes):"
                    );
          iVar33 = local_230.Processors.ArrayNum;
        }
        if (5 < (byte)LogMass._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
          iVar33 = local_230.Processors.ArrayNum;
        }
        FVar25.Data = local_230.Processors.AllocatorInstance.Data;
        if ((iVar33 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar3 = FVar25.Data + (longlong)iVar33 * 8;
        for (; FVar25.Data != pFVar3; FVar25.Data = FVar25.Data + 8) {
          plVar6 = *(longlong **)FVar25.Data;
          if (FVisualLogger::bIsRecording != 0) {
            (**(code **)(*plVar6 + 0x2c0))(plVar6,local_128);
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)pFVar11->PhaseProcessor,(FName *)&LogMass.field_0x4,Verbose,
                       L"\t%s");
            if (local_128[0] != (void *)0x0) {
              FMemory::Free(local_128[0]);
            }
          }
          if (5 < (byte)LogMass._0_1_) {
            (**(code **)(*plVar6 + 0x2c0))(plVar6,local_118);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
            if (local_118[0] != (void *)0x0) {
              FMemory::Free(local_118[0]);
            }
          }
        }
      }
      if ((bool)local_f8[0x10] == false) {
        pUVar5 = pFVar11->PhaseProcessor;
        iVar33 = local_200.ArrayNum;
        pcVar7 = *(code **)(pUVar5->_padding_ + 0x318);
        local_168 = (FMassProcessorOrderInfo *)local_200.AllocatorInstance.Data;
        if ((local_200.ArrayNum < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iStack_160 = iVar33;
        uStack_100 = CONCAT44(uStack_15c,iVar33);
        local_108 = local_168;
        (*pcVar7)(pUVar5,&local_108);
      }
      if (pFVar11->bInitializeCreatedProcessors != false) {
        (**(code **)(pFVar11->PhaseProcessor->_padding_ + 0x2e8))
                  (pFVar11->PhaseProcessor,pFVar11->ProcessorOuter,local_1d0);
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
      local_78 = 0;
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c0);
      DestructItems<FMassProcessorDependencySolver::FNode,int>
                ((FNode *)local_f8._40_8_,local_f8._48_4_);
      if ((FNode *)local_f8._40_8_ != (FNode *)0x0) {
        FMemory::Free((void *)local_f8._40_8_);
      }
      if ((FScriptContainerElement *)local_f8._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_f8._24_8_);
      }
      DestructItems<FMassProcessorOrderInfo,int>
                ((FMassProcessorOrderInfo *)local_200.AllocatorInstance.Data,local_200.ArrayNum);
      if ((FMassProcessorOrderInfo *)local_200.AllocatorInstance.Data !=
          (FMassProcessorOrderInfo *)0x0) {
        FMemory::Free(local_200.AllocatorInstance.Data);
      }
      if (local_230.Processors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Processors.AllocatorInstance.Data);
      }
      return;
    }
    pUVar19 = ((FMassProcessorOrderInfo *)FVar25.Data)->Processor;
    if (iVar33 != 0) {
      local_218 = 0;
      if (*(UMassProcessor **)local_230.Processors.AllocatorInstance.Data == (UMassProcessor *)0x0)
      {
        bVar12 = pUVar19 == (UMassProcessor *)0x0;
      }
      else {
        bVar12 = *(UMassProcessor **)local_230.Processors.AllocatorInstance.Data == pUVar19;
      }
      uVar27 = (uint)!bVar12;
      lVar32 = (longlong)iVar33;
      local_208 = (FResult *)CONCAT44(local_208._4_4_,(uint)!bVar12);
      uVar22 = uVar26;
      uVar24 = uVar26;
      uVar30 = uVar26;
      do {
        uVar28 = (uint)uVar30;
        uVar24 = uVar24 + 1;
        uVar30 = (ulonglong)(uVar28 + 1);
        if ((longlong)uVar24 < lVar32) {
          do {
            if (*(UMassProcessor **)(FVar10.Data + uVar24 * 8) == (UMassProcessor *)0x0) {
              bVar12 = pUVar19 == (UMassProcessor *)0x0;
            }
            else {
              bVar12 = *(UMassProcessor **)(FVar10.Data + uVar24 * 8) == pUVar19;
            }
            if ((uVar27 & 0xff) != (uint)!bVar12) break;
            uVar30 = (ulonglong)((int)uVar30 + 1);
            uVar24 = uVar24 + 1;
          } while ((longlong)uVar24 < lVar32);
          uVar22 = (ulonglong)local_218;
        }
        uVar21 = (uint)uVar22;
        iVar33 = (int)uVar30 - uVar28;
        uVar31 = uVar27;
        if ((char)uVar27 != '\0') {
          if (uVar21 != uVar28) {
            memmove(FVar10.Data + (longlong)(int)uVar21 * 8,FVar10.Data + (longlong)(int)uVar28 * 8,
                    (longlong)iVar33 << 3);
            uVar21 = local_218;
            uVar31 = (uint)local_208;
          }
          local_218 = uVar21 + iVar33;
          uVar22 = (ulonglong)local_218;
        }
        uVar27 = uVar31 ^ 1;
        local_208 = (FResult *)(CONCAT44(local_208._4_4_,uVar31) ^ 1);
      } while ((longlong)uVar24 < lVar32);
      iVar33 = (int)uVar22;
      FVar25.Data = (FScriptContainerElement *)local_1e8;
      pFVar29 = local_1b0;
      local_230.Processors.ArrayNum = iVar33;
    }
    uVar22 = (ulonglong)local_210 & 0xffffffff;
    FVar25.Data = FVar25.Data + 0x30;
  } while( true );
}

// Configure @ 147205990

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassPhaseProcessorConfigurationHelper::Configure
          (FMassPhaseProcessorConfigurationHelper *this,
          TArrayView<UMassProcessor_*_const,int> *param_1,EProcessorExecutionFlags param_2,
          TSharedPtr<FMassEntityManager,1> *param_3,FResult *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  TSharedRef<FMassEntityManager,1> local_38;
  TArrayView<UMassProcessor_*_const,int> local_28;
  
  if (param_3->Object == (FMassEntityManager *)0x0) {
    local_res20[0] = 0;
    bVar2 = `FMassPhaseProcessorConfigurationHelper::Configure'::__l3::<lambda_1>::operator()
                      (local_res20);
    if (!bVar2) {
      return;
    }
  }
  if (param_4 != (FResult *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FMassPhaseProcessorConfigurationHelper::Configure'::__l5::
             _dynamic_atexit_destructor_for__DummyRemovedDynamicProcessors__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((param_3->Object == (FMassEntityManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    local_38.Object = param_3->Object;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_38.Object == (FMassEntityManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28.DataPtr = param_1->DataPtr;
    local_28.ArrayNum = param_1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    Configure(this,&local_28,&DummyRemovedDynamicProcessors,param_2,&local_38,param_4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// operator() @ 150503670

bool __thiscall
`FMassPhaseProcessorConfigurationHelper::Configure'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5460852674058519233>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5460852674058519233>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

