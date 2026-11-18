// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 69

// StaticClass @ 14dc9c330

UClass * __cdecl UMovieGraphPipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphPipeline",
               &Z_Registration_Info_UClass_UMovieGraphPipeline.InnerSingleton,
               StaticRegisterNativesUMovieGraphPipeline,0x288,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphPipeline>,
               InternalVTableHelperCtorCaller<UMovieGraphPipeline>,local_res8,
               UMoviePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPipeline.InnerSingleton;
}

// UpdateVariableAssignmentsHelper<UMoviePipelineExecutorJob> @ 14dcad630

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
UMovieGraphPipeline::UpdateVariableAssignmentsHelper<UMoviePipelineExecutorJob>
          (UMovieGraphPipeline *this,UMoviePipelineExecutorJob *param_1,
          TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
          *param_2)

{
  TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
  *local_res18 [2];
  
  local_res18[0] = param_2;
  pTVar1 = UMoviePipelineExecutorJob::GetGraphVariableAssignments(param_1,false);
  `UMovieGraphPipeline::UpdateVariableAssignmentsHelper<UMoviePipelineExecutorJob>'::__l2::
  <lambda_1>::operator()(local_res18,pTVar1);
  return;
}

// UpdateVariableAssignmentsHelper<UMoviePipelineExecutorShot> @ 14dcad660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::UpdateVariableAssignmentsHelper<UMoviePipelineExecutorShot>
          (UMovieGraphPipeline *this,UMoviePipelineExecutorShot *param_1,
          TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
          *param_2)

{
  TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
  *local_res18 [2];
  
  local_res18[0] = param_2;
  pTVar1 = UMoviePipelineExecutorShot::GetGraphVariableAssignments(param_1,false);
  `UMovieGraphPipeline::UpdateVariableAssignmentsHelper<UMoviePipelineExecutorShot>'::__l2::
  <lambda_1>::operator()(local_res18,pTVar1);
  pTVar1 = UMoviePipelineExecutorShot::GetPrimaryGraphVariableAssignments(param_1,false);
  `UMovieGraphPipeline::UpdateVariableAssignmentsHelper<UMoviePipelineExecutorShot>'::__l2::
  <lambda_1>::operator()(local_res18,pTVar1);
  return;
}

// UMovieGraphPipeline @ 14dcb0310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMovieGraphPipeline * __thiscall
UMovieGraphPipeline::UMovieGraphPipeline(UMovieGraphPipeline *this,FVTableHelper *param_1)

{
  UMoviePipelineBase::UMoviePipelineBase((UMoviePipelineBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphPipeline__6B_;
  (this->GraphTimeStepInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphTimeStepInstances).ArrayNum = 0;
  (this->GraphTimeStepInstances).ArrayMax = 0;
  (this->PendingTimeStepInstance).field0_0x0.DebugPtr = (UMovieGraphTimeStepBase *)0x0;
  (this->GraphTimeStepInstance).field0_0x0.DebugPtr = (UMovieGraphTimeStepBase *)0x0;
  (this->GraphRendererInstance).field0_0x0.DebugPtr = (UMovieGraphRendererBase *)0x0;
  (this->GraphDataSourceInstance).field0_0x0.DebugPtr = (UMovieGraphDataSourceBase *)0x0;
  (this->GraphAudioRendererInstance).field0_0x0.DebugPtr = (UMovieGraphAudioRendererBase *)0x0;
  (this->PostRenderEvaluatedGraph).field0_0x0.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  (this->CurrentJob).field0_0x0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  (this->CurrentJobDuplicate).field0_0x0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  *(undefined8 *)&this->DuplicatedGraphs = 0;
  *(undefined8 *)&(this->DuplicatedGraphs).field_0x8 = 0;
  *(undefined8 *)&(this->DuplicatedGraphs).field_0x20 = 0;
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x28 = 0;
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x2c = 0x80;
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x34 = 0;
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DuplicatedGraphs).field_0x40 = 0;
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x48 = 0;
  (this->ActiveShotList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveShotList).ArrayNum = 0;
  (this->ActiveShotList).ArrayMax = 0;
  (this->PreviewWidgetClassToUse).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PreviewWidget).field0_0x0.DebugPtr = (UMovieGraphRenderPreviewWidget *)0x0;
  (this->CurrentScriptInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentScriptInstances).ArrayNum = 0;
  (this->CurrentScriptInstances).ArrayMax = 0;
  *(undefined8 *)&(this->OutputNodesDataSentTo).Elements = 0;
  *(undefined8 *)&(this->OutputNodesDataSentTo).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OutputNodesDataSentTo).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x30 = 0xffffffff;
  (this->OutputNodesDataSentTo).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutputNodesDataSentTo).HashSize = 0;
  (this->InitializationTimeOffset).Ticks = 0;
  this->bShutdownRequested = (FThreadSafeBool)0x0;
  this->bShutdownSetErrorFlag = (FThreadSafeBool)0x0;
  (this->GraphInitializationTime).Ticks = 0;
  (this->OutputMerger).Object = (IMovieGraphOutputMerger *)0x0;
  (this->OutputMerger).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OutstandingOutputFutures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutstandingOutputFutures).ArrayNum = 0;
  (this->OutstandingOutputFutures).ArrayMax = 0;
  (this->GeneratedOutputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedOutputData).ArrayNum = 0;
  (this->GeneratedOutputData).ArrayMax = 0;
  (this->CVarManager).Object = (FMovieGraphCVarManager *)0x0;
  (this->CVarManager).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CustomEngineTimeStep).field0_0x0.DebugPtr = (UMovieGraphEngineTimeStep *)0x0;
  (this->PrevCustomEngineTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  *(undefined8 *)&this->ClothSimCache = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x8 = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x20 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x28 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClothSimCache).field_0x34 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClothSimCache).field_0x40 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x48 = 0;
  return this;
}

// UMovieGraphPipeline @ 14dcb04d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieGraphPipeline * __thiscall UMovieGraphPipeline::UMovieGraphPipeline(UMovieGraphPipeline *this)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FObjectInitializer *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *_Dst;
  FName *pFVar9;
  FModuleManager *this_00;
  IModuleInterface *pIVar10;
  longlong lVar11;
  UMovieGraphPipeline *pUVar12;
  UClass *pUVar13;
  UMovieGraphEngineTimeStep *pUVar14;
  TReferenceControllerBase<1> *pTVar15;
  IMovieGraphOutputMerger *pIVar16;
  UMovieGraphPipeline *local_res8;
  FName local_res10;
  FName local_res18;
  IMovieGraphOutputMerger *local_38;
  FSharedReferencer<1> local_30;
  
  pFVar7 = FObjectInitializer::Get();
  UMoviePipelineBase::UMoviePipelineBase((UMoviePipelineBase *)this,pFVar7);
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UMovieGraphPipeline__6B_;
  (this->GraphTimeStepInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphTimeStepInstances).ArrayNum = 0;
  (this->GraphTimeStepInstances).ArrayMax = 0;
  (this->PendingTimeStepInstance).field0_0x0.DebugPtr = (UMovieGraphTimeStepBase *)0x0;
  (this->GraphTimeStepInstance).field0_0x0.DebugPtr = (UMovieGraphTimeStepBase *)0x0;
  (this->GraphRendererInstance).field0_0x0.DebugPtr = (UMovieGraphRendererBase *)0x0;
  (this->GraphDataSourceInstance).field0_0x0.DebugPtr = (UMovieGraphDataSourceBase *)0x0;
  (this->GraphAudioRendererInstance).field0_0x0.DebugPtr = (UMovieGraphAudioRendererBase *)0x0;
  (this->PostRenderEvaluatedGraph).field0_0x0.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  (this->CurrentJob).field0_0x0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  (this->CurrentJobDuplicate).field0_0x0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  *(undefined8 *)&this->DuplicatedGraphs = 0;
  *(undefined8 *)&(this->DuplicatedGraphs).field_0x8 = 0;
  *(undefined8 *)&(this->DuplicatedGraphs).field_0x20 = 0;
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x28 = 0;
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x2c = 0x80;
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x34 = 0;
  *(undefined8 *)&(this->DuplicatedGraphs).field_0x40 = 0;
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x48 = 0;
  (this->ActiveShotList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveShotList).ArrayNum = 0;
  (this->ActiveShotList).ArrayMax = 0;
  (this->PreviewWidgetClassToUse).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PreviewWidget).field0_0x0.DebugPtr = (UMovieGraphRenderPreviewWidget *)0x0;
  (this->CurrentScriptInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentScriptInstances).ArrayNum = 0;
  (this->CurrentScriptInstances).ArrayMax = 0;
  *(undefined8 *)&(this->OutputNodesDataSentTo).Elements = 0;
  *(undefined8 *)&(this->OutputNodesDataSentTo).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OutputNodesDataSentTo).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x34 = 0;
  (this->OutputNodesDataSentTo).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutputNodesDataSentTo).HashSize = 0;
  (this->InitializationTimeOffset).Ticks = 0;
  this->CurrentShotIndex = -1;
  this->bIsTransitioningState = false;
  this->bIsTearingDownShot = false;
  this->bShutdownRequested = (FThreadSafeBool)0x0;
  this->bShutdownSetErrorFlag = (FThreadSafeBool)0x0;
  (this->GraphInitializationTime).Ticks = 0;
  (this->OutputMerger).Object = (IMovieGraphOutputMerger *)0x0;
  (this->OutputMerger).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OutstandingOutputFutures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutstandingOutputFutures).ArrayNum = 0;
  (this->OutstandingOutputFutures).ArrayMax = 0;
  (this->GeneratedOutputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedOutputData).ArrayNum = 0;
  (this->GeneratedOutputData).ArrayMax = 0;
  (this->CVarManager).Object = (FMovieGraphCVarManager *)0x0;
  (this->CVarManager).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CustomEngineTimeStep).field0_0x0.DebugPtr = (UMovieGraphEngineTimeStep *)0x0;
  (this->PrevCustomEngineTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  *(undefined8 *)&this->ClothSimCache = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x8 = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x20 = 0;
  this->PipelineState = Uninitialized;
  *(undefined4 *)&(this->ClothSimCache).field_0x28 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClothSimCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClothSimCache).field_0x34 = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x40 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x48 = 0;
  this->bDidStartInsightsCapture = false;
  pTVar8 = ::operator_new(0x90);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pIVar16 = (IMovieGraphOutputMerger *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMovieGraphOutputMerger_MovieGraph_UE___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)&___7FMovieGraphOutputMerger_MovieGraph_UE__6B_;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    _Dst = ::operator_new(0x1f8);
    if (_Dst != (TReferenceControllerBase<1> *)0x0) {
      memset(_Dst,0,0x1f8);
      _Dst->_padding_ = 0;
      UE::MovieGraph::FMovieGraphOutputMergerFrame::FMovieGraphOutputMergerFrame
                ((FMovieGraphOutputMergerFrame *)&_Dst->SharedReferenceCount);
      pTVar15 = _Dst;
    }
    *(TReferenceControllerBase<1> **)&pTVar8[3].SharedReferenceCount = pTVar15;
    pTVar8[3]._padding_ = (longlong)pTVar15;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pTVar8[4]._padding_ = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar8 + 4),(FObjectPtr)&local_res8);
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[5]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar8[5].SharedReferenceCount,4000);
    FModuleManager::Get();
    pFVar9 = ::FName::FName(&local_res10,"ImageWriteQueue");
    FVar3 = *pFVar9;
    this_00 = FModuleManager::Get();
    pIVar10 = FModuleManager::LoadModuleChecked(this_00,FVar3);
    lVar11 = (**(code **)((longlong)*pIVar10 + 0x40))(pIVar10);
    pIVar16 = (IMovieGraphOutputMerger *)(pTVar8 + 1);
    pTVar8[8]._padding_ = lVar11;
    pTVar15 = pTVar8;
    if (pIVar16 == (IMovieGraphOutputMerger *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pUVar12 = (UMovieGraphPipeline *)(*pcVar5)();
        return pUVar12;
      }
      goto LAB_14dcb086e;
    }
  }
  if (((*(longlong *)&pIVar16->field_0x8 == 0) || (*(longlong *)&pIVar16->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar16->field_0x10 + 8) < 1)) {
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IMovieGraphOutputMerger **)&pIVar16->field_0x8 = pIVar16;
    if (pTVar15 != *(TReferenceControllerBase<1> **)&pIVar16->field_0x10) {
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pIVar16->field_0x10;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar16->field_0x10 = pTVar15;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
LAB_14dcb086e:
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pIVar16;
  local_30.ReferenceController = pTVar15;
  if (&this->OutputMerger != (TSharedPtr<UE::MovieGraph::IMovieGraphOutputMerger,1> *)&local_38) {
    (this->OutputMerger).Object = pIVar16;
    local_38 = (IMovieGraphOutputMerger *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OutputMerger).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  pFVar9 = ::FName::FName(&local_res18,"MovieGraphEngineTimeStep");
  FVar3 = *pFVar9;
  pUVar13 = UMovieGraphEngineTimeStep::StaticClass();
  pUVar14 = (UMovieGraphEngineTimeStep *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar13,pUVar13,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UMovieGraphEngineTimeStep *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->CustomEngineTimeStep).field0_0x0.DebugPtr = pUVar14;
  return this;
}

// ~UMovieGraphPipeline @ 14dcb3050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::~UMovieGraphPipeline(UMovieGraphPipeline *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7UMovieGraphPipeline__6B_;
  *(undefined4 *)&(this->ClothSimCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClothSimCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothSimCache);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CVarManager).SharedReferenceCount.ReferenceController);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(this->GeneratedOutputData).AllocatorInstance.Data,
             (this->GeneratedOutputData).ArrayNum);
  pFVar2 = (this->GeneratedOutputData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>,int>
            ((TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> *)
             (this->OutstandingOutputFutures).AllocatorInstance.Data,
             (this->OutstandingOutputFutures).ArrayNum);
  pFVar2 = (this->OutstandingOutputFutures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OutputMerger).SharedReferenceCount.ReferenceController);
  (this->OutputNodesDataSentTo).HashSize = 0;
  FVar3 = (this->OutputNodesDataSentTo).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OutputNodesDataSentTo).Elements);
  pFVar2 = (this->CurrentScriptInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveShotList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DuplicatedGraphs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DuplicatedGraphs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DuplicatedGraphs);
  pFVar2 = (this->GraphTimeStepInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMoviePipelineBase::~UMoviePipelineBase((UMoviePipelineBase *)this);
  return;
}

// operator() @ 14dcb4840

void __thiscall
`UMovieGraphPipeline::UpdateVariableAssignmentsHelper<UMoviePipelineExecutorJob>'::__l2::<lambda_1>
::operator()(void *this,
            TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
            *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  UObject *pUVar7;
  UMovieJobVariableAssignmentContainer *this_00;
  longlong lVar8;
  code *pcVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  UObject *pUVar12;
  UClass *pUVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_138 [24];
  FUtf8String local_120;
  int local_110;
  int local_10c;
  UObject *local_108;
  FScriptContainerElement *local_100;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [68];
  undefined4 local_54;
  
  pFVar20 = (param_1->AllocatorInstance).Data;
  uVar3 = param_1->ArrayNum;
  uVar14 = (ulonglong)(int)uVar3;
  local_100 = pFVar20 + uVar14 * 8;
LAB_14dcb4880:
  pFVar10 = local_100;
  iVar18 = 0;
  if (param_1->ArrayNum != (int)uVar14) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<TObjectPtr<UMovieJobVariableAssignmentContainer>,int,0>::operator!='::
    __l2::<lambda_1>::operator()(local_res18);
  }
  if (pFVar20 == pFVar10) {
    return;
  }
  plVar6 = *(longlong **)this;
  uStack_ec = 1;
  iVar4 = (int)plVar6[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar6 + 2);
  iStack_dc = iVar18;
  local_d8 = iVar18;
  if (iVar4 != 0) {
    pTVar19 = pTVar1;
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
    }
    uVar17 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      local_d8 = local_d8 + 0x20;
      iStack_dc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14dcb492d;
      uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
    }
    uStack_ec = ~(uVar17 - 1) & uVar17;
    uVar14 = (ulonglong)uStack_ec * 2 + 1;
    lVar8 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_110 = (int)lVar8;
    iStack_dc = local_110 + -1 + local_d8;
    if (iVar4 < iStack_dc) {
      iStack_dc = iVar4;
    }
  }
LAB_14dcb492d:
  uVar17 = *(uint *)(plVar6 + 5);
  uStack_d4 = local_54;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_d0 = (int)plVar6[1] - *(int *)((longlong)plVar6 + 0x34);
  TStack_c0._padding_ = CONCAT44(uStack_ec,iVar18);
  uStack_e0 = 0xffffffff;
  TStack_c0.CurrentBitIndex = iStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_c0._28_4_ = local_54;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = plVar6;
  iStack_f0 = iVar18;
  local_e8 = pTVar1;
  local_c8 = plVar6;
  TStack_c0.Array = pTVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)(plVar6 + 5);
  if (uVar17 != uVar5) {
    pTVar19 = pTVar1;
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) &
             *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      iVar15 = iVar15 + 1;
      uVar16 = uVar16 + 0x20;
      uVar17 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_14dcb4a30;
      uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
    }
    uVar14 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_10c = (int)lVar8;
    uVar17 = local_10c + -1 + uVar16;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14dcb4a30:
  do {
    plVar2 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c0.CurrentBitIndex == uVar17) && (TStack_c0.Array == pTVar1)) && (plVar2 == plVar6)
       ) goto LAB_14dcb4b9d;
    plVar2 = (longlong *)(*plVar2 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
    this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)
              UMovieJobVariableAssignmentContainer::GetGraphConfig
                        (*(UMovieJobVariableAssignmentContainer **)pFVar20,
                         (TSoftObjectPtr<UMovieGraphConfig> *)local_98);
    pUVar12 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
    if (pUVar12 == (UObject *)0x0) {
      if ((this_01->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&this_01->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar12 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
        goto LAB_14dcb4ab1;
      }
LAB_14dcb4ad9:
      pUVar12 = (UObject *)0x0;
    }
    else {
LAB_14dcb4ab1:
      if (pUVar12 == (UObject *)0x0) goto LAB_14dcb4ad9;
      pUVar13 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
      iVar18 = (int)pUVar13->_padding_;
      if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar13->_padding_)) goto LAB_14dcb4ad9;
    }
    pUVar7 = (UObject *)*plVar2;
    if ((void *)local_98._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._24_8_);
    }
    if (pUVar12 == pUVar7) break;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
  this_00 = *(UMovieJobVariableAssignmentContainer **)pFVar20;
  pUVar12 = (UObject *)plVar2[1];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138._16_8_ = 0;
  local_138._8_8_ = 0;
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  local_138._0_8_ = 0;
  FUtf8String::Reset(&local_120,0);
  local_108 = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_138,(FObjectPtr)&local_108);
  UMovieJobVariableAssignmentContainer::SetGraphConfig
            (this_00,(TSoftObjectPtr<UMovieGraphConfig> *)local_138);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
LAB_14dcb4b9d:
  pFVar20 = pFVar20 + 8;
  uVar14 = (ulonglong)uVar3;
  goto LAB_14dcb4880;
}

// operator() @ 14dcb4be0

void __thiscall
`UMovieGraphPipeline::UpdateVariableAssignmentsHelper<UMoviePipelineExecutorShot>'::__l2::<lambda_1>
::operator()(void *this,
            TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
            *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  UObject *pUVar7;
  UMovieJobVariableAssignmentContainer *this_00;
  longlong lVar8;
  code *pcVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  UObject *pUVar12;
  UClass *pUVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_138 [24];
  FUtf8String local_120;
  int local_110;
  int local_10c;
  UObject *local_108;
  FScriptContainerElement *local_100;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [68];
  undefined4 local_54;
  
  pFVar20 = (param_1->AllocatorInstance).Data;
  uVar3 = param_1->ArrayNum;
  uVar14 = (ulonglong)(int)uVar3;
  local_100 = pFVar20 + uVar14 * 8;
LAB_14dcb4c20:
  pFVar10 = local_100;
  iVar18 = 0;
  if (param_1->ArrayNum != (int)uVar14) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<TObjectPtr<UMovieJobVariableAssignmentContainer>,int,0>::operator!='::
    __l2::<lambda_1>::operator()(local_res18);
  }
  if (pFVar20 == pFVar10) {
    return;
  }
  plVar6 = *(longlong **)this;
  uStack_ec = 1;
  iVar4 = (int)plVar6[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar6 + 2);
  iStack_dc = iVar18;
  local_d8 = iVar18;
  if (iVar4 != 0) {
    pTVar19 = pTVar1;
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
    }
    uVar17 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      local_d8 = local_d8 + 0x20;
      iStack_dc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14dcb4ccd;
      uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
    }
    uStack_ec = ~(uVar17 - 1) & uVar17;
    uVar14 = (ulonglong)uStack_ec * 2 + 1;
    lVar8 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_110 = (int)lVar8;
    iStack_dc = local_110 + -1 + local_d8;
    if (iVar4 < iStack_dc) {
      iStack_dc = iVar4;
    }
  }
LAB_14dcb4ccd:
  uVar17 = *(uint *)(plVar6 + 5);
  uStack_d4 = local_54;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_d0 = (int)plVar6[1] - *(int *)((longlong)plVar6 + 0x34);
  TStack_c0._padding_ = CONCAT44(uStack_ec,iVar18);
  uStack_e0 = 0xffffffff;
  TStack_c0.CurrentBitIndex = iStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_c0._28_4_ = local_54;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = plVar6;
  iStack_f0 = iVar18;
  local_e8 = pTVar1;
  local_c8 = plVar6;
  TStack_c0.Array = pTVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)(plVar6 + 5);
  if (uVar17 != uVar5) {
    pTVar19 = pTVar1;
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) &
             *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      iVar15 = iVar15 + 1;
      uVar16 = uVar16 + 0x20;
      uVar17 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar15) goto LAB_14dcb4dd0;
      uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
    }
    uVar14 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_10c = (int)lVar8;
    uVar17 = local_10c + -1 + uVar16;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14dcb4dd0:
  do {
    plVar2 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c0.CurrentBitIndex == uVar17) && (TStack_c0.Array == pTVar1)) && (plVar2 == plVar6)
       ) goto LAB_14dcb4f3d;
    plVar2 = (longlong *)(*plVar2 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
    this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)
              UMovieJobVariableAssignmentContainer::GetGraphConfig
                        (*(UMovieJobVariableAssignmentContainer **)pFVar20,
                         (TSoftObjectPtr<UMovieGraphConfig> *)local_98);
    pUVar12 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
    if (pUVar12 == (UObject *)0x0) {
      if ((this_01->ObjectID).AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&this_01->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar12 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
        goto LAB_14dcb4e51;
      }
LAB_14dcb4e79:
      pUVar12 = (UObject *)0x0;
    }
    else {
LAB_14dcb4e51:
      if (pUVar12 == (UObject *)0x0) goto LAB_14dcb4e79;
      pUVar13 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
      iVar18 = (int)pUVar13->_padding_;
      if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar13->_padding_)) goto LAB_14dcb4e79;
    }
    pUVar7 = (UObject *)*plVar2;
    if ((void *)local_98._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._24_8_);
    }
    if (pUVar12 == pUVar7) break;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
  this_00 = *(UMovieJobVariableAssignmentContainer **)pFVar20;
  pUVar12 = (UObject *)plVar2[1];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138._16_8_ = 0;
  local_138._8_8_ = 0;
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  local_138._0_8_ = 0;
  FUtf8String::Reset(&local_120,0);
  local_108 = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_138,(FObjectPtr)&local_108);
  UMovieJobVariableAssignmentContainer::SetGraphConfig
            (this_00,(TSoftObjectPtr<UMovieGraphConfig> *)local_138);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
LAB_14dcb4f3d:
  pFVar20 = pFVar20 + 8;
  uVar14 = (ulonglong)uVar3;
  goto LAB_14dcb4c20;
}

// AddOutputFuture @ 14dcb99c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::AddOutputFuture
          (UMovieGraphPipeline *this,TFuture<bool> *param_1,FMovieGraphOutputFutureData *param_2)

{
  int *piVar1;
  TArray<TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 local_98 [16];
  FMovieGraphOutputFutureData local_88;
  
  local_98._0_8_ = *(undefined8 *)param_1;
  pTVar2 = &this->OutstandingOutputFutures;
  local_98._8_8_ = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined8 *)param_1 = 0;
  local_88.Shot = param_2->Shot;
  ::FString::FString(&local_88.FilePath,&param_2->FilePath);
  ::FString::FString(&local_88.FrameTemplatedFilePath,&param_2->FrameTemplatedFilePath);
  local_88.DataIdentifier.RootBranchName = (param_2->DataIdentifier).RootBranchName;
  ::FString::FString(&local_88.DataIdentifier.LayerName,&(param_2->DataIdentifier).LayerName);
  ::FString::FString(&local_88.DataIdentifier.RendererName,&(param_2->DataIdentifier).RendererName);
  ::FString::FString(&local_88.DataIdentifier.SubResourceName,
                     &(param_2->DataIdentifier).SubResourceName);
  ::FString::FString(&local_88.DataIdentifier.CameraName,&(param_2->DataIdentifier).CameraName);
  local_88.OriginNodeClass = param_2->OriginNodeClass;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_88.RenderLayerIndex = param_2->RenderLayerIndex;
  if ((pFVar3 <= (FScriptContainerElement *)local_98) &&
     ((FScriptContainerElement *)local_98 <
      pFVar3 + (longlong)(this->OutstandingOutputFutures).ArrayMax * 0x90)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OutstandingOutputFutures).ArrayNum;
  piVar1 = &(this->OutstandingOutputFutures).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x890,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->OutstandingOutputFutures).ArrayNum = iVar6 + 1;
  TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>::
  TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>
            ((TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> *)
             ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x90),
             (TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> *)local_98);
  UE::MovieGraph::FMovieGraphOutputFutureData::~FMovieGraphOutputFutureData(&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_98._8_8_);
  return;
}

// BeginDestroy @ 14dcbc0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::BeginDestroy(UMovieGraphPipeline *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IMovieGraphOutputMerger *pIVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = (this->OutputMerger).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->OutputMerger).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (IMovieGraphOutputMerger *)0x0) {
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
  (**(code **)(*(longlong *)pIVar2 + 0x28))(pIVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// BeginExport @ 14dcbc150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::BeginExport(UMovieGraphPipeline *this)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphEvaluatedConfig *this_00;
  FName FVar2;
  UClass *pUVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 local_res8 [8];
  TArray<IMovieGraphPostRenderNode_*,TSizedDefaultAllocator<32>_> local_28;
  
  FVar2 = UMovieGraphNode::GlobalsPinName;
  this_00 = (this->PostRenderEvaluatedGraph).field0_0x0.DebugPtr;
  if (this_00 != (UMovieGraphEvaluatedConfig *)0x0) {
    pUVar3 = UMovieGraphPostRenderNode::StaticClass();
    UMovieGraphEvaluatedConfig::GetSettingsImplementing<IMovieGraphPostRenderNode>
              (this_00,&local_28,pUVar3,FVar2);
    iVar4 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar4 * 8;
    FVar5.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar4) {
        `TCheckedPointerIterator<IMovieGraphPostRenderNode_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar5.Data == pFVar1) break;
      (**(code **)(**(longlong **)FVar5.Data + 0x10))
                (*(longlong **)FVar5.Data,this,&this->PostRenderEvaluatedGraph);
      FVar5.Data = FVar5.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// BeginFinalize @ 14dcbc200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::BeginFinalize(UMovieGraphPipeline *this)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  longlong *local_f0;
  int iStack_e8;
  uint uStack_e4;
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  int local_d0;
  uint uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  (**(code **)(this->_padding_ + 0x340))(this,local_88);
  uVar8 = local_60;
  iStack_e8 = 0;
  local_d0 = 0;
  uStack_e4 = 1;
  uStack_d4 = 0;
  if (local_60 != 0) {
    puVar9 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar10 = *puVar9;
    while (uVar10 == 0) {
      lVar6 = (longlong)iStack_e8;
      local_d0 = local_d0 + 0x20;
      iStack_e8 = iStack_e8 + 1;
      uStack_d4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_e8)
      goto LAB_14dcbc2c0;
      uVar10 = puVar9[lVar6 + 1];
    }
    uStack_e4 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uStack_e4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_c0 = (int)lVar6;
    uStack_d4 = local_c0 + -1 + local_d0;
    if ((int)local_60 < (int)uStack_d4) {
      uStack_d4 = local_60;
    }
  }
LAB_14dcbc2c0:
  local_f0 = (longlong *)local_88;
  local_e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_c8 = local_88._8_4_ - local_54;
  uVar10 = local_60 & 0xffffffe0;
  uStack_d8 = 0xffffffff;
  TStack_b0.CurrentBitIndex = uStack_d4;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_e4,iStack_e8);
  iVar7 = (int)local_60 >> 5;
  TStack_b0._28_4_ = uStack_d4;
  TStack_b0.BaseBitIndex = local_d0;
  uStack_90 = CONCAT44(uStack_c4,iStack_c8);
  bVar5 = (byte)local_60;
  uStack_cc = uStack_d4;
  local_b8 = local_f0;
  TStack_b0.Array = local_e0;
  if (((int)local_60 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar8 != local_60) {
    puVar9 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar8 = -1 << (bVar5 & 0x1f) & puVar9[iVar7];
    while (uVar8 == 0) {
      lVar6 = (longlong)iVar7;
      uVar10 = uVar10 + 0x20;
      iVar7 = iVar7 + 1;
      uVar8 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
      goto LAB_14dcbc3d0;
      uVar8 = puVar9[lVar6 + 1];
    }
    uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar10;
    if ((int)local_60 < (int)uVar8) {
      uVar8 = local_60;
    }
  }
LAB_14dcbc3d0:
  while( true ) {
    plVar2 = local_b8;
    if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar8) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar2 == (longlong *)local_88)) break;
    plVar2 = *(longlong **)(*plVar2 + (longlong)TStack_b0.CurrentBitIndex * 0x10);
    (**(code **)(*plVar2 + 0x388))(plVar2,this,&this->PostRenderEvaluatedGraph);
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// BuildShotListFromDataSource @ 14dcbca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::BuildShotListFromDataSource(UMovieGraphPipeline *this)

{
  TArray<TObjectPtr<UMoviePipelineExecutorShot>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 TVar2;
  longlong lVar3;
  UMovieGraphDataSourceBase *pUVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 TVar8;
  undefined8 uVar9;
  FMovieGraphVersioningSettings FVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TObjectPtr<UMovieGraphConfig>_u_0 this_00;
  UClass *pUVar16;
  FString *pFVar17;
  size_t sVar18;
  UClass *pUVar19;
  UObject *pUVar20;
  FFrameTime FVar21;
  int *piVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  UMoviePipelineExecutorJob *pUVar27;
  FScriptContainerElement *pFVar28;
  ForAnyElementType FVar29;
  longlong *plVar30;
  FScriptContainerElement *pFVar31;
  longlong *plVar32;
  UMovieGraphPipeline *pUVar33;
  TArray<TObjectPtr<UMovieGraphTimeStepBase>,TSizedDefaultAllocator<32>_> *pTVar34;
  FMovieGraphVersioningSettings FVar35;
  uint uVar36;
  FFrameRate *pFVar37;
  undefined1 auStackY_4c8 [32];
  undefined1 local_478;
  undefined1 local_477;
  undefined1 local_476;
  undefined1 local_475;
  uint local_474;
  ForAnyElementType local_470;
  undefined8 local_468;
  UMovieGraphPipeline *local_460;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_458;
  uint local_450;
  UObject *local_448;
  UObject *local_440;
  UObject *local_438;
  UObject *local_430;
  ForAnyElementType local_428;
  int local_420;
  int local_41c;
  uint local_418;
  FFrameRate local_410;
  TArray<FName,TSizedDefaultAllocator<32>_> local_408;
  FString local_3f8;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  FScriptContainerElement *local_3e0;
  undefined1 local_3d8 [56];
  uint local_3a0;
  undefined1 local_398 [152];
  ForAnyElementType FStack_300;
  int local_2f8;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_2f0;
  FTimecode local_2e8;
  FFrameNumber local_2d0;
  int iStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  float fStack_2bc;
  uint local_2b8;
  FFrameNumber local_2b4;
  FMovieGraphVersioningSettings local_2a8;
  undefined1 local_2a0 [8];
  FName local_298;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_290;
  wchar_t *local_280;
  int iStack_278;
  undefined4 uStack_274;
  FScriptContainerElement *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_258;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_248;
  FString local_238 [3];
  undefined8 local_208;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  uint uStack_1cc;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined4 local_1b4;
  uint uStack_1b0;
  undefined1 local_1a8 [16];
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  FString local_178;
  FString local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_13c;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_474 = 0;
  local_460 = this;
  (**(code **)(*(longlong *)(this->GraphDataSourceInstance).field0_0x0.DebugPtr + 0x2f8))();
  pTVar34 = &this->GraphTimeStepInstances;
  (this->GraphTimeStepInstances).ArrayNum = 0;
  if ((this->GraphTimeStepInstances).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar34->AllocatorInstance,0,&(this->GraphTimeStepInstances).ArrayMax);
  }
  piVar22 = &(this->GraphTimeStepInstances).ArrayMax;
  uVar36 = (((this->CurrentJobDuplicate).field0_0x0.DebugPtr)->ShotInfo).ArrayNum;
  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
  }
  if (*piVar22 < (int)uVar36) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar36,&pTVar34->AllocatorInstance,(this->GraphTimeStepInstances).ArrayNum,
               piVar22);
  }
  pUVar27 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
  local_450 = 0;
  if (0 < (pUVar27->ShotInfo).ArrayNum) {
    local_3d8._16_8_ = 0;
    do {
      uVar9 = local_3d8._16_8_;
      uVar36 = local_450;
      uVar26 = 0;
      if ((int)local_450 < (pUVar27->ShotInfo).ArrayNum) {
        uVar26 = ~local_450 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TVar2 = (TObjectPtr<UMoviePipelineExecutorJob>_u_0)
              (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
      local_398._16_8_ = (UMoviePipelineExecutorShot *)0x0;
      local_398._24_8_ = (UMovieGraphConfig *)0x0;
      local_398._96_8_ = 0;
      local_398._104_8_ = 0;
      pFVar28 = (pUVar27->ShotInfo).AllocatorInstance.Data + uVar9 * 8;
      local_398._144_8_ = (TIntPoint<int>_u_0)0x0;
      FStack_300.Data = (FScriptContainerElement *)0x0;
      local_398._4_4_ = (this->ActiveShotList).ArrayNum;
      lVar25 = 0;
      local_398._8_8_ = (UMoviePipelineExecutorJob *)0x0;
      local_398._32_4_ = 0;
      local_398._36_4_ = 0;
      local_398._40_8_ = (FScriptContainerElement *)0x0;
      local_398._48_8_ = 0;
      local_398._56_8_ = (FScriptContainerElement *)0x0;
      local_398._64_8_ = 0;
      local_398._72_8_ = (FScriptContainerElement *)0x0;
      local_398._80_8_ = 0;
      local_398._88_8_ = (FScriptContainerElement *)0x0;
      local_398._112_4_ = 0;
      local_398._116_4_ = 0.0;
      local_398._120_4_ = 0.0;
      local_398[0x7c] = false;
      local_398._128_4_ = 0;
      local_398._132_4_ = 0;
      local_398._136_4_ = 0;
      local_398._140_4_ = 0;
      local_2f8 = 0;
      local_2f0.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
      local_2e8.Hours = 0;
      local_2e8.Minutes = 0;
      local_2e8.Seconds = 0;
      local_2e8.Frames = 0;
      local_2e8._16_8_ = local_2e8._16_8_ & 0xffffff0000000000;
      local_2d0.Value = 0;
      iStack_2cc = 0;
      iStack_2c8 = 0;
      iStack_2c4 = 0;
      iStack_2c0 = 0;
      fStack_2bc = 0.0;
      local_2b8 = local_2b8 & 0xffffff00;
      local_2b4.Value = 0;
      local_3e0 = pFVar28;
      local_398._0_4_ = uVar36;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      local_398._8_8_ = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)pFVar28 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)pFVar28);
      }
      local_398._16_8_ = *(undefined8 *)pFVar28;
      this_00.DebugPtr = GetRootGraphForShot(this,*(UMoviePipelineExecutorShot **)pFVar28);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00.DebugPtr != (UMovieGraphConfig *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
      }
      local_1e0 = 0;
      local_398._144_8_ = (TIntPoint<int>_u_0)0x0;
      FStack_300.Data = (FScriptContainerElement *)0x0;
      uStack_1d8 = 0;
      local_1d0 = 0;
      uStack_1cc = uStack_1cc & 0xffffff00;
      local_2e8._16_8_ = (ulonglong)uStack_1cc << 0x20;
      local_2e8.Hours = 0;
      local_2e8.Minutes = 0;
      local_2e8.Seconds = 0;
      local_2e8.Frames = 0;
      local_1c4 = 0;
      uStack_1bc = 0;
      local_1b4 = 0;
      uStack_1b0 = uStack_1b0 & 0xffffff00;
      fStack_2bc = 0.0;
      iStack_2cc = 0;
      iStack_2c8 = 0;
      iStack_2c4 = 0;
      iStack_2c0 = 0;
      local_208 = 0;
      local_398._104_8_ = 0;
      local_398._112_4_ = 0;
      local_398._116_4_ = 0.0;
      local_398._120_4_ = 0.0;
      local_398[0x7c] = false;
      local_398._128_4_ = 0;
      local_398._132_4_ = 0;
      local_398._136_4_ = 0;
      local_398._140_4_ = 0;
      local_2f8 = 0;
      local_2f0.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
      local_2d0.Value = 0;
      local_2b8 = uStack_1b0;
      local_2b4.Value = 0;
      local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3f8.Data.ArrayNum = 0;
      local_3f8.Data.ArrayMax = 0;
      local_398._24_8_ = this_00.DebugPtr;
      local_458.DebugPtr =
           UMovieGraphConfig::CreateFlattenedGraph
                     (this_00.DebugPtr,(FMovieGraphTraversalContext *)local_398,&local_3f8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_458.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_458.DebugPtr);
      }
      TVar8 = local_458;
      FVar5 = UMovieGraphNode::GlobalsPinName;
      if (1 < local_3f8.Data.ArrayNum) {
        (**(code **)(this->_padding_ + 0x2b8))(this,1);
        if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
        }
        if ((FScriptContainerElement *)local_398._88_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_398._88_8_);
        }
        if ((FScriptContainerElement *)local_398._72_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_398._72_8_);
        }
        if ((FScriptContainerElement *)local_398._56_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_398._56_8_);
        }
        if ((FScriptContainerElement *)local_398._40_8_ == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free((void *)local_398._40_8_);
        return;
      }
      pUVar16 = Z_Construct_UClass_UMovieGraphSamplingMethodNode_NoRegister();
      UMovieGraphEvaluatedConfig::GetSettingsForBranch
                (TVar8.DebugPtr,&local_290,pUVar16,FVar5,true,false);
      if (local_290.ArrayNum < 1) {
        if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.AllocatorInstance.Data);
        }
      }
      else {
        lVar3 = *(longlong *)local_290.AllocatorInstance.Data;
        FMemory::Free(local_290.AllocatorInstance.Data);
        if (lVar3 != 0) {
          pUVar16 = Z_Construct_UClass_UMovieGraphSamplingMethodNode_NoRegister();
          iVar13 = (int)pUVar16->_padding_;
          if ((iVar13 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar13 * 8) ==
              &pUVar16->_padding_)) {
            lVar25 = lVar3;
          }
        }
      }
      if (*(longlong *)(lVar25 + 0xb8) == 0) {
LAB_14dcbd07a:
        pUVar33 = local_460;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)local_460,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar16 = UMovieGraphLinearTimeStep::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar16);
        local_b8._8_8_ = pUVar33;
        pUVar20 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar32 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar32 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar32 + 0x10))(plVar32);
        }
        local_440 = pUVar20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar20);
        }
        pFVar28 = (pTVar34->AllocatorInstance).Data;
        if (((pFVar28 <= (FScriptContainerElement *)&local_440) &&
            ((FScriptContainerElement *)&local_440 < pFVar28 + (longlong)pTVar34->ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = pTVar34->ArrayNum;
        if (iVar13 == pTVar34->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
        }
        pTVar34->ArrayNum = iVar13 + 1;
        *(UObject **)((pTVar34->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_440;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_440 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_440);
        }
        pUVar33 = local_460;
        if (2 < (byte)LogMovieRenderPipeline._0_1_) {
          local_298 = *(FName *)(lVar25 + 0xc0);
          local_158 = *(undefined8 *)(lVar25 + 0xb8);
          uStack_150 = *(undefined8 *)(lVar25 + 0xc0);
          if (local_298 == (FName)0x0) {
            uVar36 = local_474 | 1;
            pFVar17 = local_238;
            pFVar28 = (FScriptContainerElement *)0x0;
            local_238[0].Data.ArrayNum = 0;
            local_474 = uVar36;
          }
          else {
            uVar36 = local_474 | 2;
            local_474 = uVar36;
            pFVar17 = ::FName::ToString(&local_298,&local_168);
            pFVar28 = (pFVar17->Data).AllocatorInstance.Data;
          }
          (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar17->Data).ArrayNum = 0;
          (pFVar17->Data).ArrayMax = 0;
          if (((uVar36 & 2) != 0) &&
             (uVar36 = uVar36 & 0xfffffffd, local_474 = uVar36,
             local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if (((uVar36 & 1) != 0) &&
             (local_474 = uVar36 & 0xfffffffe,
             local_238[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_238[0].Data.AllocatorInstance.Data);
          }
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          pUVar33 = local_460;
          if (pFVar28 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar28);
            pUVar33 = local_460;
          }
        }
      }
      else {
        uStack_274 = local_13c;
        local_280 = (wchar_t *)0x0;
        iVar13 = 0;
        iStack_278 = 0;
        pFVar17 = FSoftObjectPath::ToString((FSoftObjectPath *)(lVar25 + 0xb8),&local_178);
        if ((pFVar17->Data).ArrayNum == 0) {
          local_268 = (FScriptContainerElement *)0x15060d16c;
LAB_14dcbce90:
          sVar18 = wcslen((wchar_t *)local_268);
          iVar13 = (int)sVar18;
        }
        else {
          local_268 = (pFVar17->Data).AllocatorInstance.Data;
          if (local_268 != (FScriptContainerElement *)0x0) goto LAB_14dcbce90;
        }
        iStack_260 = iVar13;
        pUVar16 = UMovieGraphTimeStepBase::StaticClass();
        local_198._12_4_ = uStack_274;
        local_198.Size = iStack_278;
        local_188._12_4_ = uStack_25c;
        local_188.Size = iStack_260;
        local_198.DataPtr = local_280;
        local_188.DataPtr = (wchar_t *)local_268;
        pUVar16 = StaticLoadClass(pUVar16,(UObject *)0x0,&local_188,&local_198,0,(UPackageMap *)0x0)
        ;
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        pUVar33 = local_460;
        if (pUVar16 == (UClass *)0x0) goto LAB_14dcbd07a;
        local_3d8._32_8_ = 0;
        local_3d8._40_8_ = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)local_460,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar19 = UMovieGraphTimeStepBase::StaticClass();
        CheckIsClassChildOf_Internal(pUVar19,pUVar16);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_138,pUVar16);
        local_138._8_8_ = pUVar33;
        local_138._24_4_ = RF_NoFlags;
        local_138._40_8_ = (UObject *)0x0;
        local_138[0x20] = false;
        local_138._48_8_ = (FObjectInstancingGraph *)0x0;
        local_138._56_8_ = (UPackage *)0x0;
        local_138._16_4_ = 0;
        local_138._20_4_ = 0;
        pUVar20 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
        if (local_138._64_8_ != 0) {
          plVar32 = (longlong *)(local_138 + 0x50);
          if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
            plVar32 = (longlong *)local_138._104_8_;
          }
          (**(code **)(*plVar32 + 0x10))(plVar32);
        }
        local_448 = pUVar20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar20);
        }
        pFVar28 = (pTVar34->AllocatorInstance).Data;
        if (((pFVar28 <= (FScriptContainerElement *)&local_448) &&
            ((FScriptContainerElement *)&local_448 < pFVar28 + (longlong)pTVar34->ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = pTVar34->ArrayNum;
        if (iVar13 == pTVar34->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
        }
        pTVar34->ArrayNum = iVar13 + 1;
        *(UObject **)((pTVar34->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_448;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_448 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_448);
        }
      }
      TVar8 = local_458;
      FVar5 = UMovieGraphNode::GlobalsPinName;
      pUVar16 = Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_NoRegister();
      UMovieGraphEvaluatedConfig::GetSettingsForBranch
                (TVar8.DebugPtr,&local_258,pUVar16,FVar5,true,false);
      if (local_258.ArrayNum < 1) {
        if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.AllocatorInstance.Data);
        }
LAB_14dcbd346:
        pFVar37 = (FFrameRate *)0x0;
        local_3d8._8_8_ = (FFrameRate *)0x0;
      }
      else {
        pFVar37 = *(FFrameRate **)local_258.AllocatorInstance.Data;
        local_3d8._8_8_ = pFVar37;
        FMemory::Free(local_258.AllocatorInstance.Data);
        if (pFVar37 == (FFrameRate *)0x0) goto LAB_14dcbd346;
        pUVar16 = Z_Construct_UClass_UMovieGraphGlobalOutputSettingNode_NoRegister();
        iVar13 = (int)pUVar16->_padding_;
        if ((*(int *)((longlong)pFVar37[2] + 0x38) < iVar13) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)pFVar37[2] + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar16->_padding_)) goto LAB_14dcbd346;
      }
      pUVar4 = (pUVar33->GraphDataSourceInstance).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar4 + 0x2b8))(pUVar4,local_2a0);
      UMovieGraphBlueprintLibrary::GetEffectiveFrameRate
                ((UMovieGraphGlobalOutputSettingNode *)local_3d8,pFVar37);
      pUVar4 = (pUVar33->GraphDataSourceInstance).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar4 + 0x2b0))(pUVar4,&local_410);
      TVar8 = local_458;
      FVar5 = UMovieGraphNode::GlobalsPinName;
      pUVar16 = Z_Construct_UClass_UMovieGraphWarmUpSettingNode_NoRegister();
      UMovieGraphEvaluatedConfig::GetSettingsForBranch
                (TVar8.DebugPtr,&local_248,pUVar16,FVar5,true,false);
      if (local_248.ArrayNum < 1) {
        if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.AllocatorInstance.Data);
        }
LAB_14dcbd40f:
        local_3d8._24_8_ = 0;
      }
      else {
        lVar3 = *(longlong *)local_248.AllocatorInstance.Data;
        local_3d8._24_8_ = lVar3;
        FMemory::Free(local_248.AllocatorInstance.Data);
        if (lVar3 == 0) goto LAB_14dcbd40f;
        pUVar16 = Z_Construct_UClass_UMovieGraphWarmUpSettingNode_NoRegister();
        iVar13 = (int)pUVar16->_padding_;
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar13) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar16->_padding_)) goto LAB_14dcbd40f;
      }
      pFVar28 = local_3e0;
      local_3e8 = 1;
      iVar13 = 1;
      if (1 < *(int *)(lVar25 + 0xd8)) {
        iVar13 = *(int *)(lVar25 + 0xd8);
      }
      uStack_3e4 = 1;
      *(int *)(*(longlong *)local_3e0 + 0xa4) = iVar13;
      *(undefined4 *)(*(longlong *)local_3e0 + 0xa8) = 1;
      *(undefined1 **)(*(longlong *)local_3e0 + 0xac) = &DAT_100000001;
      *(undefined8 *)(*(longlong *)local_3e0 + 0xb4) = local_3d8._0_8_;
      *(FFrameRate *)(*(longlong *)local_3e0 + 0xc4) = local_410;
      *(FFrameRate *)(*(longlong *)local_3e0 + 0xbc) = local_410;
      if ((*(longlong *)(*(longlong *)local_3e0 + 0x90) != 0) &&
         (bVar11 = FWeakObjectPtr::IsValid
                             ((FWeakObjectPtr *)
                              (*(longlong *)(*(longlong *)local_3e0 + 0x90) + 0x10)), bVar11)) {
        lVar25 = *(longlong *)pFVar28;
        if ((*(longlong *)(lVar25 + 0x90) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(lVar25 + 0x90) + 0x10));
        *(undefined8 *)(*(longlong *)pFVar28 + 0xc4) = *(undefined8 *)&pUVar20[7].field_0x20;
      }
      iVar13 = 0;
      local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_408.ArrayNum = 0;
      local_408.ArrayMax = 0;
      TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
                  *)&(local_458.DebugPtr)->BranchConfigMapping,&local_408);
      uVar23 = (ulonglong)local_408.ArrayNum;
      local_418 = local_408.ArrayNum;
      local_2a8 = (FMovieGraphVersioningSettings)
                  (uVar23 * 8 + (longlong)local_408.AllocatorInstance.Data);
      uVar24 = uVar23;
      FVar35 = (FMovieGraphVersioningSettings)local_408.AllocatorInstance;
      while( true ) {
        FVar10 = local_2a8;
        if ((int)uVar23 != (int)uVar24) {
          local_478 = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_478);
        }
        TVar8 = local_458;
        if (FVar35 == FVar10) break;
        FVar5 = *(FName *)FVar35;
        pUVar16 = Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister();
        UMovieGraphEvaluatedConfig::GetSettingsForBranch
                  (TVar8.DebugPtr,
                   (TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *)
                   (local_3d8 + 0x30),pUVar16,FVar5,false,false);
        uVar24 = (ulonglong)local_3a0;
        local_470.Data = (FScriptContainerElement *)0x0;
        local_468 = 0;
        if ((int)local_3a0 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar24);
        }
        if (0 < (int)local_3a0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_3a0,&local_470,0,(int *)((longlong)&local_468 + 4));
          uVar24 = (ulonglong)local_3a0;
        }
        iVar15 = (int)uVar24;
        plVar32 = (longlong *)(local_3d8._48_8_ + (longlong)iVar15 * 8);
        plVar30 = (longlong *)local_3d8._48_8_;
        while( true ) {
          if ((int)uVar24 != iVar15) {
            local_477 = 0;
            `TCheckedPointerIterator<UMovieGraphSettingNode_*,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_477);
          }
          FVar29.Data = local_470.Data;
          if (plVar30 == plVar32) break;
          pUVar20 = (UObject *)*plVar30;
          if (pUVar20 == (UObject *)0x0) {
LAB_14dcbd61a:
            pUVar20 = (UObject *)0x0;
          }
          else {
            pUVar16 = Z_Construct_UClass_UMovieGraphRenderPassNode_NoRegister();
            iVar14 = (int)pUVar16->_padding_;
            if ((*(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38) < iVar14) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
                &pUVar16->_padding_)) goto LAB_14dcbd61a;
          }
          local_438 = pUVar20;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar20);
          }
          if (((local_470.Data <= (FScriptContainerElement *)&local_438) &&
              ((FScriptContainerElement *)&local_438 <
               local_470.Data + (longlong)local_468._4_4_ * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((int)local_468 == local_468._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_470,(int *)((longlong)&local_468 + 4));
            local_468 = CONCAT44(local_468._4_4_,iVar14);
          }
          lVar25 = (longlong)(int)local_468;
          local_468 = CONCAT44(local_468._4_4_,(int)local_468 + 1);
          *(UObject **)(local_470.Data + lVar25 * 8) = local_438;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_438 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_438);
          }
          uVar24 = (ulonglong)local_3a0;
          plVar30 = plVar30 + 1;
        }
        lVar25 = (longlong)(int)local_468;
        local_428.Data = (FScriptContainerElement *)0x0;
        local_420 = (int)local_468;
        if ((int)local_468 == 0) {
          local_41c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(int)local_468,0,&local_428,(int)local_468,&local_41c);
          memcpy(local_428.Data,FVar29.Data,lVar25 << 3);
        }
        if (local_470.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.Data);
        }
        if ((longlong *)local_3d8._48_8_ != (longlong *)0x0) {
          FMemory::Free((void *)local_3d8._48_8_);
        }
        iVar15 = local_420;
        pFVar28 = local_428.Data + (longlong)local_420 * 8;
        FVar29.Data = local_428.Data;
        while( true ) {
          if (local_420 != iVar15) {
            local_476 = 0;
            `TCheckedPointerIterator<UMovieGraphRenderPassNode_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_476);
          }
          if (FVar29.Data == pFVar28) break;
          iVar14 = (**(code **)(**(longlong **)FVar29.Data + 0x380))();
          if (iVar13 < iVar14) {
            iVar13 = iVar14;
          }
          FVar29.Data = FVar29.Data + 8;
        }
        if (local_428.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_428.Data);
        }
        uVar23 = local_408._8_8_ & 0xffffffff;
        FVar35 = (FMovieGraphVersioningSettings)((longlong)FVar35 + 8);
        uVar24 = (ulonglong)local_418;
      }
      if ((FMovieGraphVersioningSettings)local_408.AllocatorInstance.Data !=
          (FMovieGraphVersioningSettings)0x0) {
        FMemory::Free(local_408.AllocatorInstance.Data);
      }
      pFVar28 = local_3e0;
      this = local_460;
      pTVar34 = &local_460->GraphTimeStepInstances;
      *(int *)(*(longlong *)local_3e0 + 0x160) = iVar13;
      if (iVar13 < *(int *)(local_3d8._24_8_ + 0xb4)) {
        iVar13 = *(int *)(local_3d8._24_8_ + 0xb4);
      }
      *(int *)(*(longlong *)local_3e0 + 0x15c) = iVar13;
      *(undefined1 *)(*(longlong *)local_3e0 + 0xa0) = *(undefined1 *)(local_3d8._24_8_ + 0xb8);
      iVar13 = (local_460->GraphTimeStepInstances).ArrayNum;
      uVar26 = iVar13 - 1;
      uVar36 = 0;
      if ((int)uVar26 < iVar13) {
        uVar36 = ~uVar26 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar32 = *(longlong **)
                 ((pTVar34->AllocatorInstance).Data +
                 (longlong)(this->GraphTimeStepInstances).ArrayNum * 8 + -8);
      uVar12 = (**(code **)(*plVar32 + 0x2d0))(plVar32,&local_458);
      (**(code **)(this->_padding_ + 0x398))
                (this,pFVar28,((FFrameRate *)(local_3d8._8_8_ + 0x100))->Numerator,uVar12);
      lVar25 = *(longlong *)pFVar28;
      if ((*(char *)(lVar25 + 0x110) == '\x02') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar3 = *(longlong *)pFVar28;
      *(undefined4 *)(lVar3 + 0xd4) = *(undefined4 *)(lVar25 + 0x114);
      *(undefined4 *)(lVar3 + 0xd8) = 0;
      *(undefined8 *)(*(longlong *)pFVar28 + 0xdc) = *(undefined8 *)(*(longlong *)pFVar28 + 0xd4);
      FVar21 = ::operator*((FFrameTime)local_1a8,
                           *(FMovieSceneSequenceTransform **)(*(longlong *)pFVar28 + 0xd4));
      *(undefined8 *)(*(longlong *)pFVar28 + 0xe4) = *(undefined8 *)FVar21;
      FMoviePipelineCameraCutInfo::CalculateWorkMetrics
                ((FMoviePipelineCameraCutInfo *)(*(longlong *)pFVar28 + 0x90));
      iVar13 = ResolveVersionForShot
                         (this,(TObjectPtr<UMoviePipelineExecutorShot> *)pFVar28,
                          (TObjectPtr<UMovieGraphEvaluatedConfig> *)&local_458.ObjectPtr);
      *(int *)(*(longlong *)pFVar28 + 0x164) = iVar13;
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_398._88_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_398._88_8_);
      }
      if ((FScriptContainerElement *)local_398._72_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_398._72_8_);
      }
      if ((FScriptContainerElement *)local_398._56_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_398._56_8_);
      }
      if ((FScriptContainerElement *)local_398._40_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_398._40_8_);
      }
      local_450 = local_450 + 1;
      pUVar27 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
      local_3d8._16_8_ = local_3d8._16_8_ + 1;
    } while ((int)local_450 < (pUVar27->ShotInfo).ArrayNum);
  }
  pTVar1 = &this->ActiveShotList;
  piVar22 = &(this->ActiveShotList).ArrayMax;
  (this->ActiveShotList).ArrayNum = 0;
  if ((this->ActiveShotList).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar22);
  }
  pUVar27 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
  pFVar31 = (pUVar27->ShotInfo).AllocatorInstance.Data;
  iVar13 = (pUVar27->ShotInfo).ArrayNum;
  pFVar28 = pFVar31 + (longlong)iVar13 * 8;
  while( true ) {
    if ((pUVar27->ShotInfo).ArrayNum != iVar13) {
      local_475 = 0;
      `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_475);
    }
    if (pFVar31 == pFVar28) break;
    pUVar20 = *(UObject **)pFVar31;
    if (*(char *)(pUVar20 + 1) != '\0') {
      local_430 = pUVar20;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar20);
      }
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_430) &&
          ((FScriptContainerElement *)&local_430 < pFVar6 + (longlong)*piVar22 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar15 = (this->ActiveShotList).ArrayNum;
      if (iVar15 == *piVar22) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar22);
      }
      (this->ActiveShotList).ArrayNum = iVar15 + 1;
      *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_430;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_430 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_430);
      }
    }
    pFVar31 = pFVar31 + 8;
  }
  return;
}

// CreateLayersInRenderLayerSubsystem @ 14dcbfbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UMovieGraphPipeline::CreateLayersInRenderLayerSubsystem
          (UMovieGraphPipeline *this,UMovieGraphEvaluatedConfig *param_1)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  FName FVar4;
  longlong lVar5;
  int iVar6;
  UWorld *this_00;
  UMovieGraphRenderLayerSubsystem *this_01;
  UClass *pUVar7;
  UObject *pUVar8;
  UMovieGraphRenderLayer *pUVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_e0;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  this_01 = UWorld::GetSubsystem<UMovieGraphRenderLayerSubsystem>(this_00);
  if (this_01 == (UMovieGraphRenderLayerSubsystem *)0x0) {
    return;
  }
  pUVar9 = (this_01->ActiveRenderLayer).field0_0x0.DebugPtr;
  if (pUVar9 != (UMovieGraphRenderLayer *)0x0) {
    UMovieGraphRenderLayer::Revert(pUVar9);
  }
  (this_01->ActiveRenderLayer).field0_0x0.DebugPtr = (UMovieGraphRenderLayer *)0x0;
  piVar1 = &(this_01->RenderLayers).ArrayMax;
  (this_01->RenderLayers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this_01->RenderLayers).AllocatorInstance,0,piVar1);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
              *)&param_1->BranchConfigMapping,&local_e0);
  iVar6 = local_e0.ArrayNum;
  uVar10 = (ulonglong)local_e0.ArrayNum;
  pFVar2 = (FName *)(local_e0.AllocatorInstance.Data + uVar10 * 8);
  FVar12.Data = local_e0.AllocatorInstance.Data;
  do {
    while( true ) {
      if ((int)uVar10 != iVar6) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_e8);
      }
      if ((FName *)FVar12.Data == pFVar2) {
        if ((FName *)local_e0.AllocatorInstance.Data == (FName *)0x0) {
          return;
        }
        FMemory::Free(local_e0.AllocatorInstance.Data);
        return;
      }
      FVar4 = *(FName *)FVar12.Data;
      pUVar7 = Z_Construct_UClass_UMovieGraphRenderLayerNode_NoRegister();
      UMovieGraphEvaluatedConfig::GetSettingsForBranch(param_1,&local_d0,pUVar7,FVar4,false,true);
      if (local_d0.ArrayNum < 1) break;
      lVar5 = *(longlong *)local_d0.AllocatorInstance.Data;
      FMemory::Free(local_d0.AllocatorInstance.Data);
      if (lVar5 == 0) goto LAB_14dcbfde7;
      pUVar7 = Z_Construct_UClass_UMovieGraphRenderLayerNode_NoRegister();
      iVar3 = (int)pUVar7->_padding_;
      if (((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar3) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8)
           != &pUVar7->_padding_)) || ((*(byte *)(lVar5 + 0x98) & 1) != 0)) goto LAB_14dcbfde7;
      pUVar8 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar8,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = UMovieGraphRenderLayer::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar7);
      local_b8._8_8_ = pUVar8;
      pUVar9 = (UMovieGraphRenderLayer *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar11 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      pUVar9->RenderLayerName = *(FName *)FVar12.Data;
      UMovieGraphRenderLayerSubsystem::AddRenderLayer(this_01,pUVar9);
      uVar10 = local_e0._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 8;
    }
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
LAB_14dcbfde7:
    uVar10 = local_e0._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// DuplicateJobAndConfiguration @ 14dcc23d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::DuplicateJobAndConfiguration(UMovieGraphPipeline *this)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieGraphScriptBase>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UMoviePipelineExecutorShot *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  FName *pFVar10;
  UMoviePipelineExecutorJob *pUVar11;
  UClass *pUVar12;
  UMovieGraphConfig *pUVar13;
  TObjectPtr<UMovieGraphConfig>_u_0 this_01;
  TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *pTVar14;
  UMovieGraphEvaluatedConfig *this_02;
  UMovieGraphScriptBase *pUVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  UMoviePipelineExecutorJob *pUVar20;
  ForAnyElementType FVar21;
  UMoviePipelineExecutorJob *pUVar22;
  undefined1 auStackY_2c8 [32];
  undefined1 local_278 [8];
  UMovieGraphScriptBase *local_270;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_268;
  TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
  *local_258;
  TArray<UMovieGraphExecuteScriptNode_*,TSizedDefaultAllocator<32>_> local_250;
  FString local_240;
  FName local_230;
  TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
  *local_228;
  TObjectPtr<UMovieGraphConfig>_u_0 local_220;
  FString local_218;
  FMovieGraphTraversalContext local_208;
  FName local_118;
  FStringFormatArg local_110;
  FString local_f0;
  undefined1 local_d8 [128];
  void *local_58;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  FObjectDuplicationParameters::FObjectDuplicationParameters
            ((FObjectDuplicationParameters *)local_d8,
             (UObject *)(this->CurrentJob).field0_0x0.DebugPtr,(UObject *)this);
  local_230 = (FName)((this->CurrentJob).field0_0x0.DebugPtr)->_padding_;
  pFVar9 = ::FName::ToString(&local_230,&local_f0);
  FStringFormatArg::FStringFormatArg(&local_110,pFVar9);
  local_268.ArrayNum = 1;
  pUVar20 = (UMoviePipelineExecutorJob *)0x0;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_268.AllocatorInstance,1,&local_268.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_268.AllocatorInstance.Data,&local_110,1);
  ::FString::FormatImpl(&local_218,L"{0}_Duplicate",&local_268);
  iVar17 = 0;
  if (local_218.Data.ArrayNum != 0) {
    iVar17 = local_218.Data.ArrayNum + -1;
  }
  pFVar10 = ::FName::FName(&local_118,iVar17,(wchar_t *)local_218.Data.AllocatorInstance.Data,
                           FNAME_Add);
  local_d8._16_8_ = *pFVar10;
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
  if ((FStringFormatArg *)local_268.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  if (local_110.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.StringValue.Data.AllocatorInstance.Data);
  }
  local_d8._24_4_ =
       RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_HasExternalPackage|
       RF_WillBeLoaded|RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
       RF_DuplicateTransient|RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient
       |RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
       RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
       RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
       RF_ClassDefaultObject|RF_MarkAsNative|RF_Standalone|RF_Public;
  local_d8._32_4_ = RF_Transient;
  pUVar11 = (UMoviePipelineExecutorJob *)
            StaticDuplicateObjectEx((FObjectDuplicationParameters *)local_d8);
  if (pUVar11 != (UMoviePipelineExecutorJob *)0x0) {
    pUVar12 = Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
    iVar17 = (int)pUVar12->_padding_;
    if ((iVar17 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar12->_padding_)) goto LAB_14dcc257f;
  }
  pUVar11 = pUVar20;
LAB_14dcc257f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->CurrentJobDuplicate).field0_0x0.DebugPtr = pUVar11;
  pUVar13 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                      (&((this->CurrentJob).field0_0x0.DebugPtr)->GraphPreset);
  this_01.DebugPtr = MoviePipeline::DuplicateConfigRecursive(pUVar13,&this->DuplicatedGraphs);
  local_228 = &this->DuplicatedGraphs;
  local_220.DebugPtr = this_01.DebugPtr;
  pTVar14 = UMoviePipelineExecutorJob::GetGraphVariableAssignments
                      ((this->CurrentJobDuplicate).field0_0x0.DebugPtr,false);
  `UMovieGraphPipeline::UpdateVariableAssignmentsHelper<UMoviePipelineExecutorJob>'::__l2::
  <lambda_1>::operator()(&local_228,pTVar14);
  UMoviePipelineExecutorJob::SetGraphPreset
            ((this->CurrentJobDuplicate).field0_0x0.DebugPtr,this_01.DebugPtr,false);
  pUVar11 = (this->CurrentJob).field0_0x0.DebugPtr;
  if (0 < (pUVar11->ShotInfo).ArrayNum) {
    pUVar22 = pUVar20;
    do {
      uVar19 = (uint)pUVar20;
      uVar18 = ~uVar19 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar19 < (pUVar11->ShotInfo).ArrayNum) {
        uVar7 = uVar18;
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
      pUVar13 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                          ((TSoftObjectPtr<UMovieGraphConfig> *)
                           (*(longlong *)
                             ((longlong)&pUVar22->_padding_ +
                             (longlong)(pUVar11->ShotInfo).AllocatorInstance.Data) + 0x1b0));
      if (pUVar13 != (UMovieGraphConfig *)0x0) {
        pUVar13 = MoviePipeline::DuplicateConfigRecursive(pUVar13,&this->DuplicatedGraphs);
        pUVar20 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
        uVar7 = 0;
        if ((int)uVar19 < (pUVar20->ShotInfo).ArrayNum) {
          uVar7 = uVar18;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UMoviePipelineExecutorShot::SetGraphPreset
                  (*(UMoviePipelineExecutorShot **)
                    ((longlong)&pUVar22->_padding_ +
                    (longlong)(pUVar20->ShotInfo).AllocatorInstance.Data),pUVar13,false);
      }
      pUVar20 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
      uVar7 = 0;
      if ((int)uVar19 < (pUVar20->ShotInfo).ArrayNum) {
        uVar7 = uVar18;
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
      this_00 = *(UMoviePipelineExecutorShot **)
                 ((longlong)&pUVar22->_padding_ +
                 (longlong)(pUVar20->ShotInfo).AllocatorInstance.Data);
      local_258 = &this->DuplicatedGraphs;
      pTVar14 = UMoviePipelineExecutorShot::GetGraphVariableAssignments(this_00,false);
      `UMovieGraphPipeline::UpdateVariableAssignmentsHelper<UMoviePipelineExecutorShot>'::__l2::
      <lambda_1>::operator()(&local_258,pTVar14);
      pTVar14 = UMoviePipelineExecutorShot::GetPrimaryGraphVariableAssignments(this_00,false);
      `UMovieGraphPipeline::UpdateVariableAssignmentsHelper<UMoviePipelineExecutorShot>'::__l2::
      <lambda_1>::operator()(&local_258,pTVar14);
      pUVar11 = (this->CurrentJob).field0_0x0.DebugPtr;
      pUVar20 = (UMoviePipelineExecutorJob *)(ulonglong)(uVar19 + 1);
      pUVar22 = (UMoviePipelineExecutorJob *)&pUVar22->_padding_;
      this_01 = local_220;
    } while ((int)(uVar19 + 1) < (pUVar11->ShotInfo).ArrayNum);
  }
  local_208.ShotIndex = 0;
  local_208.ShotCount = 0;
  local_208.Shot.field0_0x0.DebugPtr = (TObjectPtr<UMoviePipelineExecutorShot>_u_0)0x0;
  local_208.RenderDataIdentifier.RootBranchName.ComparisonIndex.Value = 0;
  local_208.RenderDataIdentifier.RootBranchName.Number = 0;
  local_208.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_208.RenderDataIdentifier.LayerName.Data.ArrayNum = 0;
  local_208.RenderDataIdentifier.LayerName.Data.ArrayMax = 0;
  local_208.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_208.RenderDataIdentifier.RendererName.Data.ArrayNum = 0;
  local_208.RenderDataIdentifier.RendererName.Data.ArrayMax = 0;
  local_208.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_208.RenderDataIdentifier.SubResourceName.Data.ArrayNum = 0;
  local_208.RenderDataIdentifier.SubResourceName.Data.ArrayMax = 0;
  local_208.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_208.RenderDataIdentifier.CameraName.Data.ArrayNum = 0;
  local_208.RenderDataIdentifier.CameraName.Data.ArrayMax = 0;
  local_208.Time.OutputFrameNumber = 0;
  local_208.Time.ShotOutputFrameNumber = 0;
  local_208.Time.RenderedFrameNumber = 0;
  local_208.Time.FrameDeltaTime = 0.0;
  local_208.Time.WorldTimeDilation = 0.0;
  local_208.Time.bHasRelativeTimeBeenUsed = false;
  local_208.Time.WorldSeconds = 0.0;
  local_208.Time.MotionBlurFraction = 0.0;
  local_208.Time.FrameRate.Numerator = 0;
  local_208.Time.FrameRate.Denominator = 0;
  local_208.Time.TemporalSampleIndex = 0;
  local_208.Time.TemporalSampleCount = 0;
  local_208.Time.SpatialSampleIndex = 0;
  local_208.Time.SpatialSampleCount = 0;
  local_208.Time.bIsFirstTemporalSampleForFrame = false;
  local_208.Time.bIsLastTemporalSampleForFrame = false;
  local_208.Time.bDiscardOutput = false;
  local_208.Time.bRequiresAccumulator = false;
  local_208.Time.EvaluatedConfig.field0_0x0.DebugPtr =
       (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0;
  local_208.Time.RootTimeCode.Hours = 0;
  local_208.Time.RootTimeCode.Minutes = 0;
  local_208.Time.RootTimeCode.Seconds = 0;
  local_208.Time.RootTimeCode.Frames = 0;
  local_208.Time.RootTimeCode.Subframe = 0.0;
  local_208.Time.RootTimeCode.bDropFrameFormat = false;
  local_208.Time.RootFrameNumber.Value = 0;
  local_208.Time.ShotTimeCode.Hours = 0;
  local_208.Time.ShotTimeCode.Minutes = 0;
  local_208.Time.ShotTimeCode.Seconds = 0;
  local_208.Time.ShotTimeCode.Frames = 0;
  local_208.Time.ShotTimeCode.Subframe = 0.0;
  local_208.Time.ShotTimeCode.bDropFrameFormat = false;
  local_208.Time.ShotFrameNumber.Value = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr,
     pUVar20 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  local_208.Job.field0_0x0 = (this->CurrentJobDuplicate).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01.DebugPtr != (UMovieGraphConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
  }
  local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.Data.ArrayNum = 0;
  local_240.Data.ArrayMax = 0;
  local_208.RootGraph.field0_0x0 = this_01;
  this_02 = UMovieGraphConfig::CreateFlattenedGraph(this_01.DebugPtr,&local_208,&local_240);
  if (this_02 != (UMovieGraphEvaluatedConfig *)0x0) {
    UMovieGraphEvaluatedConfig::GetSettingsForBranch<UMovieGraphExecuteScriptNode>
              (this_02,&local_250,UMovieGraphNode::GlobalsPinName,false,false);
    iVar17 = local_250.ArrayNum;
    uVar16 = (ulonglong)local_250.ArrayNum;
    pFVar3 = local_250.AllocatorInstance.Data + uVar16 * 8;
    FVar21.Data = local_250.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar16 != iVar17) {
        local_278[0] = 0;
        `TCheckedPointerIterator<UMovieGraphExecuteScriptNode_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_278);
      }
      if (FVar21.Data == pFVar3) break;
      pUVar15 = UMovieGraphExecuteScriptNode::AllocateScriptInstance
                          (*(UMovieGraphExecuteScriptNode **)FVar21.Data);
      if (pUVar15 != (UMovieGraphScriptBase *)0x0) {
        pTVar2 = &this->CurrentScriptInstances;
        local_270 = pUVar15;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_270) &&
            ((FScriptContainerElement *)&local_270 <
             pFVar4 + (longlong)(this->CurrentScriptInstances).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->CurrentScriptInstances).ArrayNum;
        piVar1 = &(this->CurrentScriptInstances).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->CurrentScriptInstances).ArrayNum = iVar8 + 1;
        *(UMovieGraphScriptBase **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             local_270;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_270 != (UMovieGraphScriptBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_270);
        }
      }
      uVar16 = (ulonglong)(uint)local_250.ArrayNum;
      FVar21.Data = FVar21.Data + 8;
    }
    if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.AllocatorInstance.Data);
    }
  }
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  if (local_208.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_208.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_208.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_208.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_d8 + 0x40));
  return;
}

// ExecutePostJobScripts @ 14dcc6df0

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
UMovieGraphPipeline::ExecutePostJobScripts
          (UMovieGraphPipeline *this,FMoviePipelineOutputData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->CurrentScriptInstances).AllocatorInstance.Data;
  iVar2 = (this->CurrentScriptInstances).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CurrentScriptInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphScriptBase>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UMovieGraphScriptBase::OnJobFinished
              (*(UMovieGraphScriptBase **)pFVar3,(this->CurrentJobDuplicate).field0_0x0.DebugPtr,
               param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ExecutePostShotScripts @ 14dcc6e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::ExecutePostShotScripts
          (UMovieGraphPipeline *this,FMoviePipelineOutputData *param_1)

{
  int iVar1;
  uint uVar2;
  UMovieGraphScriptBase *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FMoviePipelineOutputData *pFVar7;
  FMoviePipelineOutputData *pFVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FMoviePipelineOutputData local_108;
  FMoviePipelineOutputData local_d0;
  FMoviePipelineOutputData local_98;
  FMoviePipelineOutputData local_60;
  
  pFVar9 = (this->CurrentScriptInstances).AllocatorInstance.Data;
  iVar1 = (this->CurrentScriptInstances).ArrayNum;
  pFVar3 = pFVar9 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->CurrentScriptInstances).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphScriptBase>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    this_00 = *(UMovieGraphScriptBase **)pFVar9;
    bVar5 = UMovieGraphScriptBase::IsPerShotCallbackNeeded(this_00);
    if (bVar5) {
      uVar2 = this->CurrentShotIndex;
      uVar6 = 0;
      if ((int)uVar2 < (this->ActiveShotList).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      UMovieGraphScriptBase::OnShotFinished
                (this_00,(this->CurrentJobDuplicate).field0_0x0.DebugPtr,
                 *(UMoviePipelineExecutorShot **)
                  ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8),param_1
                );
    }
    pFVar9 = pFVar9 + 8;
  }
  pFVar7 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_108,param_1);
  pFVar8 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_d0,pFVar7);
  FMoviePipelineWorkFinished_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,pFVar8);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(pFVar7->GraphData).AllocatorInstance.Data,
             (pFVar7->GraphData).ArrayNum);
  pFVar3 = (pFVar7->GraphData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)(pFVar7->ShotData).AllocatorInstance.Data,
             (pFVar7->ShotData).ArrayNum);
  pFVar3 = (pFVar7->ShotData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)(this->_padding_ + 0x2d8))(this);
  pFVar7 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_98,param_1);
  pFVar8 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_60,pFVar7);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>,FMoviePipelineOutputData>
            (this_01,pFVar8);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(pFVar7->GraphData).AllocatorInstance.Data,
             (pFVar7->GraphData).ArrayNum);
  pFVar3 = (pFVar7->GraphData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)(pFVar7->ShotData).AllocatorInstance.Data,
             (pFVar7->ShotData).ArrayNum);
  pFVar3 = (pFVar7->ShotData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ExecutePreJobScripts @ 14dcc7070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::ExecutePreJobScripts(UMovieGraphPipeline *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->CurrentScriptInstances).AllocatorInstance.Data;
  iVar2 = (this->CurrentScriptInstances).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CurrentScriptInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphScriptBase>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UMovieGraphScriptBase::OnJobStart
              (*(UMovieGraphScriptBase **)pFVar3,(this->CurrentJobDuplicate).field0_0x0.DebugPtr);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ExecutePreShotScripts @ 14dcc70f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::ExecutePreShotScripts
          (UMovieGraphPipeline *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphScriptBase *this_00;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->CurrentScriptInstances).AllocatorInstance.Data;
  iVar2 = (this->CurrentScriptInstances).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CurrentScriptInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphScriptBase>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    this_00 = *(UMovieGraphScriptBase **)pFVar4;
    bVar3 = UMovieGraphScriptBase::IsPerShotCallbackNeeded(this_00);
    if (bVar3) {
      UMovieGraphScriptBase::OnShotStart
                (this_00,(this->CurrentJobDuplicate).field0_0x0.DebugPtr,
                 (param_1->field0_0x0).DebugPtr);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// ExpandShot @ 14dcc7190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::ExpandShot
          (UMovieGraphPipeline *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1,int param_2,
          bool param_3,bool param_4,FFrameRate *param_5,FFrameRate *param_6,int param_7)

{
  UMoviePipelineExecutorShot *pUVar1;
  FFrameRate FVar2;
  UMovieGraphDataSourceBase *pUVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  bool bVar7;
  int iVar8;
  FFrameTime FVar9;
  TRangeBound<FFrameNumber> TVar10;
  TEnumAsByte<ERangeBoundTypes::Type> TVar11;
  TRangeBound<FFrameNumber> TVar12;
  int iVar13;
  FFrameNumber FVar14;
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  uint local_80;
  undefined4 local_78;
  FFrameNumber FStack_6c;
  undefined4 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [24];
  
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  iVar13 = param_2 + 1;
  if (!param_3) {
    iVar13 = param_2;
  }
  FVar2 = *param_6;
  if ((pUVar1->ShotInfo).TotalOutputRangeRoot.LowerBound.Type.Value == '\x02') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar5.Denominator = 0;
  FVar5.Numerator = (pUVar1->ShotInfo).TotalOutputRangeRoot.LowerBound.Value.Value;
  FFrameRate::TransformTime((FFrameTime)&param_6,FVar5,FVar2);
  if ((param_4) && (param_6._4_4_ != 0.0)) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    FVar9 = FFrameRate::TransformTime
                      ((FFrameTime)local_60,(FFrameRate)((ulonglong)param_6 & 0xffffffff),*param_5);
    pUVar1 = (param_1->field0_0x0).DebugPtr;
    iVar8 = *(int *)FVar9;
    if ((pUVar1->ShotInfo).TotalOutputRangeRoot.LowerBound.Type.Value == '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,0x73,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (pUVar1->ShotInfo).TotalOutputRangeRoot.LowerBound.Value.Value = iVar8;
  }
  pUVar3 = (this->GraphDataSourceInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar3 + 0x328))(pUVar3,param_1,param_7 + iVar13,iVar13,param_2,param_4)
  ;
  if (param_4) {
    FVar2.Denominator = 0;
    FVar2.Numerator = param_2;
    FVar9 = FFrameRate::TransformTime((FFrameTime)local_58,FVar2,*param_5);
    iVar13 = *(int *)FVar9;
    if (*(float *)((longlong)FVar9 + 4) != 0.0) {
      iVar13 = iVar13 + 1;
    }
    FVar6.Denominator = 0;
    FVar6.Numerator = param_2;
    FVar9 = FFrameRate::TransformTime((FFrameTime)local_50,FVar6,*param_5);
    iVar8 = *(int *)FVar9;
    if (*(float *)((longlong)FVar9 + 4) != 0.0) {
      iVar8 = iVar8 + 1;
    }
    pUVar1 = (param_1->field0_0x0).DebugPtr;
    TVar10 = (pUVar1->ShotInfo).TotalOutputRangeRoot.UpperBound;
    TVar12 = (pUVar1->ShotInfo).TotalOutputRangeRoot.LowerBound;
    TVar11 = TVar10.Type.Value;
    if (TVar11.Value == '\x02') {
      local_98 = CONCAT31(local_98._1_3_,2);
      TVar10.Value.Value = 0;
      TVar10._0_4_ = local_98;
    }
    else {
      FVar14.Value = TVar10.Value.Value.Value + iVar8;
      if (TVar11.Value == '\x01') {
        local_90 = CONCAT31(local_90._1_3_,1);
        TVar10.Value.Value = FVar14.Value;
        TVar10._0_4_ = local_90;
      }
      else {
        TVar10 = (TRangeBound<FFrameNumber>)(CONCAT44(FVar14.Value,local_88) & 0xffffffffffffff00);
      }
    }
    TVar11 = TVar12.Type.Value;
    if (TVar11.Value == '\x02') {
      local_80 = CONCAT31(local_80._1_3_,2);
      TVar12.Value.Value = 0;
      TVar12._0_4_ = local_80;
    }
    else {
      FStack_6c = TVar12.Value.Value;
      if (TVar11.Value == '\x01') {
        local_78 = CONCAT31(local_78._1_3_,1);
        TVar12.Value.Value = FStack_6c.Value - iVar13;
        TVar12._0_4_ = local_78;
      }
      else {
        TVar12 = (TRangeBound<FFrameNumber>)
                 (CONCAT44(FStack_6c.Value - iVar13,local_68) & 0xffffffffffffff00);
      }
    }
    (pUVar1->ShotInfo).TotalOutputRangeRoot.LowerBound = TVar12;
    (pUVar1->ShotInfo).TotalOutputRangeRoot.UpperBound = TVar10;
  }
  return;
}

// GetCurrentTraversalContext @ 14dccc370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphTraversalContext * __thiscall
UMovieGraphPipeline::GetCurrentTraversalContext
          (UMovieGraphPipeline *this,FMovieGraphTraversalContext *__return_storage_ptr__,
          bool param_1)

{
  uint uVar1;
  UMoviePipelineExecutorJob *pUVar2;
  UMovieGraphTimeStepBase *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMovieGraphTraversalContext *pFVar8;
  UMovieGraphConfig *pUVar9;
  FMovieGraphTimeStepData *pFVar10;
  UMoviePipelineExecutorShot *pUVar11;
  FMovieGraphTimeStepData local_118;
  undefined1 local_98 [128];
  
  if (param_1) {
    uVar1 = this->CurrentShotIndex;
    uVar6 = 0;
    if ((int)uVar1 < (this->ActiveShotList).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMovieGraphTraversalContext *)(*pcVar4)();
        return pFVar8;
      }
    }
    pUVar11 = *(UMoviePipelineExecutorShot **)
               ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 != (UMoviePipelineExecutorShot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
  }
  else {
    pUVar11 = (UMoviePipelineExecutorShot *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  FMovieGraphTraversalContext::FMovieGraphTraversalContext(__return_storage_ptr__);
  if (param_1) {
    iVar7 = this->CurrentShotIndex;
  }
  else {
    iVar7 = -1;
  }
  __return_storage_ptr__->ShotIndex = iVar7;
  __return_storage_ptr__->ShotCount = (this->ActiveShotList).ArrayNum;
  pUVar2 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (__return_storage_ptr__->Job).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (__return_storage_ptr__->Shot).field0_0x0.DebugPtr = pUVar11;
  if (param_1) {
    pUVar9 = GetRootGraphForShot(this,pUVar11);
  }
  else {
    pUVar9 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                       (&((__return_storage_ptr__->Job).field0_0x0.DebugPtr)->GraphPreset);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UMovieGraphConfig *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (__return_storage_ptr__->RootGraph).field0_0x0.DebugPtr = pUVar9;
  if (param_1) {
    pUVar3 = (this->GraphTimeStepInstance).field0_0x0.DebugPtr;
    pFVar10 = (FMovieGraphTimeStepData *)(**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,local_98)
    ;
  }
  else {
    local_118.OutputFrameNumber = 0;
    local_118.ShotOutputFrameNumber = 0;
    local_118.FrameRate.Numerator = 0;
    local_118.FrameRate.Denominator = 0;
    local_118.TemporalSampleIndex = 0;
    local_118.TemporalSampleCount = 0;
    local_118.RenderedFrameNumber = 0;
    local_118.FrameDeltaTime = 0.0;
    pFVar10 = &local_118;
    local_118.RootTimeCode.Hours = 0;
    local_118.RootTimeCode.Minutes = 0;
    local_118.RootTimeCode.Seconds = 0;
    local_118.RootTimeCode.Frames = 0;
    local_118.WorldTimeDilation = 0.0;
    local_118.RootFrameNumber.Value = 0;
    local_118.ShotTimeCode.Hours = 0;
    local_118.ShotTimeCode.Minutes = 0;
    local_118.ShotTimeCode.Seconds = 0;
    local_118.bHasRelativeTimeBeenUsed = false;
    local_118.WorldSeconds = 0.0;
    local_118.MotionBlurFraction = 0.0;
    local_118.SpatialSampleIndex = 0;
    local_118.SpatialSampleCount = 0;
    local_118.bIsFirstTemporalSampleForFrame = false;
    local_118.bIsLastTemporalSampleForFrame = false;
    local_118.bDiscardOutput = false;
    local_118.bRequiresAccumulator = false;
    local_118.EvaluatedConfig.field0_0x0.DebugPtr = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0;
    local_118.RootTimeCode.Subframe = 0.0;
    local_118.RootTimeCode.bDropFrameFormat = false;
    local_118.ShotTimeCode.Frames = 0;
    local_118.ShotTimeCode.Subframe = 0.0;
    local_118.ShotTimeCode.bDropFrameFormat = false;
    local_118.ShotFrameNumber.Value = 0;
  }
  FMovieGraphTimeStepData::operator=(&__return_storage_ptr__->Time,pFVar10);
  return __return_storage_ptr__;
}

// GetGeneratedOutputData @ 14dccd990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphPipeline::GetGeneratedOutputData(UMovieGraphPipeline *this)

{
  return &this->GeneratedOutputData;
}

// GetOutputNodesUsed @ 14dccff70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
* __thiscall
UMovieGraphPipeline::GetOutputNodesUsed
          (UMovieGraphPipeline *this,
          TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
  ::operator=(__return_storage_ptr__,&this->OutputNodesDataSentTo);
  return __return_storage_ptr__;
}

// GetPipelineStateImpl @ 14dcd0d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EMovieRenderPipelineState __thiscall
UMovieGraphPipeline::GetPipelineStateImpl(UMovieGraphPipeline *this)

{
  return this->PipelineState;
}

// GetPrivateStaticClass @ 14dcd2c70

UClass * __cdecl UMovieGraphPipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphPipeline",
               &Z_Registration_Info_UClass_UMovieGraphPipeline.InnerSingleton,
               StaticRegisterNativesUMovieGraphPipeline,0x288,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphPipeline>,
               InternalVTableHelperCtorCaller<UMovieGraphPipeline>,local_res8,
               UMoviePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPipeline.InnerSingleton;
}

// GetRootGraphForShot @ 14dcd3710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieGraphConfig * __thiscall
UMovieGraphPipeline::GetRootGraphForShot
          (UMovieGraphPipeline *this,UMoviePipelineExecutorShot *param_1)

{
  TSoftObjectPtr<UMovieGraphConfig> *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMoviePipelineExecutorJob *pUVar3;
  UMovieGraphConfig *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pUVar3 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
  if (pUVar3 != (UMoviePipelineExecutorJob *)0x0) {
    pFVar5 = (pUVar3->ShotInfo).AllocatorInstance.Data;
    iVar2 = (pUVar3->ShotInfo).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar3->ShotInfo).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      if (*(UMoviePipelineExecutorShot **)pFVar5 == param_1) {
        this_00 = &(*(UMoviePipelineExecutorShot **)pFVar5)->GraphPreset;
        pUVar4 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(this_00);
        if (pUVar4 != (UMovieGraphConfig *)0x0) {
          pUVar4 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(this_00);
          return pUVar4;
        }
      }
      pFVar5 = pFVar5 + 8;
    }
    pUVar4 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                       (&((this->CurrentJobDuplicate).field0_0x0.DebugPtr)->GraphPreset);
    if (pUVar4 != (UMovieGraphConfig *)0x0) {
      pUVar4 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                         (&((this->CurrentJobDuplicate).field0_0x0.DebugPtr)->GraphPreset);
      return pUVar4;
    }
  }
  return (UMovieGraphConfig *)0x0;
}

// GetTimeStepInstance @ 14dcd3e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMovieGraphTimeStepBase * __thiscall
UMovieGraphPipeline::GetTimeStepInstance(UMovieGraphPipeline *this)

{
  return (this->GraphTimeStepInstance).field0_0x0.DebugPtr;
}

// Initialize @ 14dcd5490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::Initialize
          (UMovieGraphPipeline *this,UMoviePipelineExecutorJob *param_1,
          FMovieGraphInitConfig *param_2)

{
  int iVar1;
  UMovieGraphDataSourceBase *pUVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  UMovieGraphConfig *pUVar7;
  longlong lVar8;
  FDateTime FVar9;
  FDateTime FVar10;
  UMovieGraphEvaluatedConfig *this_00;
  UMovieGraphDebugSettingNode *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  UMovieGraphAudioRendererBase *pUVar15;
  FScriptContainerElement *pFVar16;
  longlong *plVar17;
  undefined8 uVar18;
  TObjectPtr<UClass>_u_0 TVar19;
  TObjectPtr<UClass>_u_0 TVar20;
  FMovieGraphCVarManager *pFVar21;
  undefined1 auStack_348 [32];
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325 [5];
  TReferenceControllerBase<1> *local_320;
  TObjectPtr<UClass>_u_0 TStack_318;
  FString local_310;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  undefined1 local_2e8 [48];
  FMovieGraphTraversalContext local_2b8;
  undefined1 local_1c8 [128];
  undefined1 local_148 [80];
  FScriptContainerElement local_f8 [24];
  FScriptContainerElement *local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  if (param_1 == (UMoviePipelineExecutorJob *)0x0) {
    local_328 = 0;
    bVar6 = `UMovieGraphPipeline::Initialize'::__l21::<lambda_1>::operator()(&local_328);
    if (!bVar6) {
      return;
    }
  }
  pUVar7 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&param_1->GraphPreset);
  if (pUVar7 == (UMovieGraphConfig *)0x0) {
    local_327 = 0;
    bVar6 = `UMovieGraphPipeline::Initialize'::__l24::<lambda_2>::operator()(&local_327);
    if (!bVar6) {
      return;
    }
  }
  if (this->PipelineState != Uninitialized) {
    local_326 = 0;
    bVar6 = `UMovieGraphPipeline::Initialize'::__l27::<lambda_3>::operator()(&local_326);
    if (!bVar6) goto LAB_14dcd5539;
  }
  lVar8 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar8 == 0) {
    local_325[0] = 0;
    bVar6 = `UMovieGraphPipeline::Initialize'::__l30::<lambda_4>::operator()(local_325);
    if (!bVar6) {
LAB_14dcd5539:
      (**(code **)(this->_padding_ + 0x2b8))(this,1);
      return;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMovieGraphPipeline>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrame,(UMovieGraphPipeline *)local_2e8,(pmf_d557d2a7)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMovieGraphPipeline>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrame,(UMovieGraphPipeline *)(local_2e8 + 8),(pmf_d557d2a7)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CurrentJob).field0_0x0.DebugPtr = param_1;
  TVar20.DebugPtr = (UClass *)0x0;
  this->CurrentShotIndex = 0;
  FVar9 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
  (this->GraphInitializationTime).Ticks = *FVar9.Ticks;
  FVar9 = FDateTime::Now();
  FVar10 = FDateTime::UtcNow();
  (this->InitializationTimeOffset).Ticks = *(longlong *)FVar9.Ticks - *(longlong *)FVar10.Ticks;
  TStack_318.DebugPtr = ::operator_new(0x58);
  if (TStack_318.DebugPtr == (UClass *)0x0) {
    local_320 = ___xmm_00000000000000000000000000000010;
    pFVar21 = (FMovieGraphCVarManager *)&DAT_00000010;
    TStack_318 = _UNK_150651568;
    TVar19.DebugPtr = TVar20.DebugPtr;
  }
  else {
    *(atomic<int> *)&(TStack_318.DebugPtr)->_padding_ = (atomic<int>)0x1;
    pFVar21 = (FMovieGraphCVarManager *)&(TStack_318.DebugPtr)->_padding_;
    ((atomic<int> *)&(TStack_318.DebugPtr)->_padding_)[1] = (atomic<int>)0x1;
    (TStack_318.DebugPtr)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMovieGraphCVarManager_Private_MovieGraph_UE___00_SharedPointerInternals__6B_
    ;
    (TStack_318.DebugPtr)->_padding_ = 0;
    (TStack_318.DebugPtr)->_padding_ = 0;
    (TStack_318.DebugPtr)->_padding_ = 0;
    (TStack_318.DebugPtr)->_padding_ = 0;
    (TStack_318.DebugPtr)->_padding_ = 0;
    (TStack_318.DebugPtr)->_padding_ = 0;
    (TStack_318.DebugPtr)->_padding_ = 0;
    (TStack_318.DebugPtr)->_padding_ = 0;
    (TStack_318.DebugPtr)->_padding_ = 0;
    if ((pFVar21 == (FMovieGraphCVarManager *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    *(atomic<int> *)&(TStack_318.DebugPtr)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(TStack_318.DebugPtr)->_padding_ + 1);
    UNLOCK();
    TVar19.DebugPtr = TStack_318.DebugPtr;
    local_320 = (TReferenceControllerBase<1> *)pFVar21;
  }
  if (&this->CVarManager !=
      (TSharedPtr<UE::MovieGraph::Private::FMovieGraphCVarManager,1> *)&local_320) {
    (this->CVarManager).Object = pFVar21;
    local_320 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CVarManager).SharedReferenceCount,
               (FSharedReferencer<1> *)&TStack_318.ObjectPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TStack_318.DebugPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar19.DebugPtr);
  (**(code **)(this->_padding_ + 0x368))(this);
  (**(code **)(this->_padding_ + 0x370))(this);
  GetCurrentTraversalContext(this,&local_2b8,false);
  local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_310.Data.ArrayNum = 0;
  local_310.Data.ArrayMax = 0;
  pUVar7 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                     (&((this->CurrentJobDuplicate).field0_0x0.DebugPtr)->GraphPreset);
  this_00 = UMovieGraphConfig::CreateFlattenedGraph(pUVar7,&local_2b8,&local_310);
  if (this_00 == (UMovieGraphEvaluatedConfig *)0x0) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  else {
    pUVar11 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphDebugSettingNode>
                        (this_00,UMovieGraphNode::GlobalsPinName,false,true);
    if ((pUVar11 != (UMovieGraphDebugSettingNode *)0x0) &&
       (pUVar11->bCaptureUnrealInsightsTrace != false)) {
      StartUnrealInsightsCapture(this,this_00);
    }
  }
  pUVar13 = (param_2->RendererClass).Class.field0_0x0.DebugPtr;
  local_300.ComparisonIndex.Value = 0;
  local_300.Number = 0;
  TVar19.DebugPtr = TVar20.DebugPtr;
  if ((pUVar13 != (UClass *)0x0) &&
     (pUVar12 = UMovieGraphRendererBase::StaticClass(), pUVar12 != (UClass *)0x0)) {
    iVar1 = (int)pUVar12->_padding_;
    if (((int)pUVar13->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      TVar19.DebugPtr = (param_2->RendererClass).Class.field0_0x0.DebugPtr;
    }
  }
  FVar4 = local_300;
  if (local_300 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar13 = UMovieGraphRendererBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar13,TVar19.DebugPtr);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1c8,TVar19.DebugPtr);
  FVar5 = local_300;
  local_1c8._48_8_ = (UMovieGraphRenderPreviewWidget *)0x0;
  local_1c8._56_8_ = (FScriptContainerElement *)0x0;
  local_300.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_300.Number = FVar4.Number;
  local_1c8._16_4_ = local_300.ComparisonIndex.Value;
  local_1c8._20_4_ = local_300.Number;
  local_1c8._24_4_ = RF_NoFlags;
  local_1c8._40_8_ = (UClass *)0x0;
  local_1c8[0x20] = false;
  local_300 = FVar5;
  local_1c8._8_8_ = this;
  pUVar14 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
  if (local_1c8._64_8_ != 0) {
    plVar17 = (longlong *)(local_1c8 + 0x50);
    if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_1c8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  (this->GraphRendererInstance).field0_0x0.DebugPtr = (UMovieGraphRendererBase *)pUVar14;
  pUVar13 = (param_2->DataSourceClass).Class.field0_0x0.DebugPtr;
  local_2f8.ComparisonIndex.Value = 0;
  local_2f8.Number = 0;
  TVar19.DebugPtr = TVar20.DebugPtr;
  if ((pUVar13 != (UClass *)0x0) &&
     (pUVar12 = UMovieGraphDataSourceBase::StaticClass(), pUVar12 != (UClass *)0x0)) {
    iVar1 = (int)pUVar12->_padding_;
    if (((int)pUVar13->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      TVar19.DebugPtr = (param_2->DataSourceClass).Class.field0_0x0.DebugPtr;
    }
  }
  FVar4 = local_2f8;
  if (local_2f8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar13 = UMovieGraphDataSourceBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar13,TVar19.DebugPtr);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_148,TVar19.DebugPtr);
  FVar5 = local_2f8;
  local_148._48_8_ = (FObjectInstancingGraph *)0x0;
  local_148._56_8_ = 0;
  local_2f8.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_2f8.Number = FVar4.Number;
  local_148._16_4_ = local_2f8.ComparisonIndex.Value;
  local_148._20_4_ = local_2f8.Number;
  local_148._24_4_ = RF_NoFlags;
  local_148._40_8_ = (UObject *)0x0;
  local_148[0x20] = false;
  local_2f8 = FVar5;
  local_148._8_8_ = this;
  pUVar14 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
  if ((IMovieGraphOutputMerger *)local_148._64_8_ != (IMovieGraphOutputMerger *)0x0) {
    pFVar16 = local_f8;
    if (local_e0 != (FScriptContainerElement *)0x0) {
      pFVar16 = local_e0;
    }
    (**(code **)(*(longlong *)pFVar16 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  (this->GraphDataSourceInstance).field0_0x0.DebugPtr = (UMovieGraphDataSourceBase *)pUVar14;
  pUVar13 = (param_2->AudioRendererClass).Class.field0_0x0.DebugPtr;
  local_2f0.ComparisonIndex.Value = 0;
  local_2f0.Number = 0;
  if ((pUVar13 != (UClass *)0x0) &&
     (pUVar12 = UMovieGraphAudioRendererBase::StaticClass(), pUVar12 != (UClass *)0x0)) {
    iVar1 = (int)pUVar12->_padding_;
    if (((int)pUVar13->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      TVar20 = (TObjectPtr<UClass>_u_0)(param_2->AudioRendererClass).Class.field0_0x0.DebugPtr;
    }
  }
  FVar4 = local_2f0;
  if (local_2f0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar13 = UMovieGraphAudioRendererBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar13,TVar20.DebugPtr);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,TVar20.DebugPtr);
  FVar5 = local_2f0;
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_2f0.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_2f0.Number = FVar4.Number;
  local_c8._16_4_ = local_2f0.ComparisonIndex.Value;
  local_c8._20_4_ = local_2f0.Number;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_2f0 = FVar5;
  local_c8._8_8_ = this;
  pUVar15 = (UMovieGraphAudioRendererBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar17 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UMovieGraphAudioRendererBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->GraphAudioRendererInstance).field0_0x0.DebugPtr = pUVar15;
  pUVar2 = (this->GraphDataSourceInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar2 + 0x2e8))(pUVar2,param_2);
  (**(code **)(this->_padding_ + 0x358))(this);
  (**(code **)(((this->GraphAudioRendererInstance).field0_0x0.DebugPtr)->_padding_ + 0x2c8))();
  (**(code **)(this->_padding_ + 0x308))(this);
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  if ((this->ActiveShotList).ArrayNum == 0) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  else if (this_00 != (UMovieGraphEvaluatedConfig *)0x0) {
    uVar18 = 1;
    goto LAB_14dcd5b6c;
  }
  (**(code **)(this->_padding_ + 0x338))(this,3);
  uVar18 = 4;
LAB_14dcd5b6c:
  (**(code **)(this->_padding_ + 0x338))(this,uVar18);
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  if (local_2b8.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_2b8.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_2b8.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_2b8.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  return;
}

// IsPostShotCallbackNeeded @ 14dcd7580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMovieGraphPipeline::IsPostShotCallbackNeeded(UMovieGraphPipeline *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphTimeStepBase *pUVar3;
  UMovieGraphEvaluatedConfig *this_00;
  bool bVar4;
  longlong lVar5;
  UMovieGraphGlobalOutputSettingNode *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_88 [128];
  
  pFVar7 = (this->CurrentScriptInstances).AllocatorInstance.Data;
  iVar2 = (this->CurrentScriptInstances).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CurrentScriptInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphScriptBase>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    bVar4 = UMovieGraphScriptBase::IsPerShotCallbackNeeded(*(UMovieGraphScriptBase **)pFVar7);
    if (bVar4) {
      return true;
    }
    pFVar7 = pFVar7 + 8;
  }
  pUVar3 = (this->GraphTimeStepInstance).field0_0x0.DebugPtr;
  lVar5 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,local_88);
  this_00 = *(UMovieGraphEvaluatedConfig **)(lVar5 + 0x40);
  if (this_00 != (UMovieGraphEvaluatedConfig *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar6 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                       (this_00,UMovieGraphNode::GlobalsPinName,true,true);
    return pUVar6->bFlushDiskWritesPerShot;
  }
  return false;
}

// IsShutdownRequestedImpl @ 14dcd76f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMovieGraphPipeline::IsShutdownRequestedImpl(UMovieGraphPipeline *this)

{
  return this->bShutdownRequested != (FThreadSafeBool)0x0;
}

// LoadPreviewWidget @ 14dcd7880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::LoadPreviewWidget(UMovieGraphPipeline *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  size_t sVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UMovieGraphRenderPreviewWidget *this_00;
  FStaticBasicLogRecord *pFVar7;
  UClass *pUVar8;
  UClass *local_res10;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pUVar5 = (this->PreviewWidgetClassToUse).Class.field0_0x0.DebugPtr;
  pUVar8 = (UClass *)0x0;
  if ((pUVar5 == (UClass *)0x0) ||
     (pUVar3 = Z_Construct_UClass_UMovieGraphRenderPreviewWidget_NoRegister(),
     pUVar3 == (UClass *)0x0)) {
LAB_14dcd78de:
    local_28.Size = 0;
    local_18.DataPtr = (wchar_t *)0x0;
    local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
    if (DefaultPreviewWidgetAsset.Data.ArrayNum == 0) {
      local_28.DataPtr = L"";
LAB_14dcd7910:
      sVar4 = wcslen(local_28.DataPtr);
      local_28.Size = (int)sVar4;
    }
    else {
      local_28.DataPtr = (wchar_t *)DefaultPreviewWidgetAsset.Data.AllocatorInstance.Data;
      if (DefaultPreviewWidgetAsset.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14dcd7910;
    }
    pUVar5 = Z_Construct_UClass_UMovieGraphRenderPreviewWidget_NoRegister();
    pUVar5 = StaticLoadClass(pUVar5,(UObject *)0x0,&local_28,&local_18,0,(UPackageMap *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->PreviewWidgetClassToUse).Class.field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 != (UClass *)0x0) goto LAB_14dcd7979;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) ||
       (pUVar5 = (this->PreviewWidgetClassToUse).Class.field0_0x0.DebugPtr, pUVar5 == (UClass *)0x0)
       ) goto LAB_14dcd78de;
LAB_14dcd7979:
    pUVar3 = Z_Construct_UClass_UMovieGraphRenderPreviewWidget_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar5 = (this->PreviewWidgetClassToUse).Class.field0_0x0.DebugPtr,
         pUVar5 != (UClass *)0x0)) {
        pUVar3 = Z_Construct_UClass_UMovieGraphRenderPreviewWidget_NoRegister();
        if (pUVar3 != (UClass *)0x0) {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar5->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            pUVar8 = (this->PreviewWidgetClassToUse).Class.field0_0x0.DebugPtr;
          }
        }
        local_res10 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        this_00 = CreateWidget<UMovieGraphRenderPreviewWidget,UWorld_*>
                            (pUVar6,(TSubclassOf<UUserWidget>)&local_res10,(FName)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UMovieGraphRenderPreviewWidget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
          (this->PreviewWidget).field0_0x0.DebugPtr = this_00;
LAB_14dcd7a60:
          UMovieGraphRenderPreviewWidget::OnInitializedForPipeline(this_00,this);
          UUserWidget::AddToViewport((UUserWidget *)(this->PreviewWidget).field0_0x0.DebugPtr,0);
          return;
        }
        (this->PreviewWidget).field0_0x0.DebugPtr = this_00;
        if (this_00 != (UMovieGraphRenderPreviewWidget *)0x0) goto LAB_14dcd7a60;
        if ((byte)LogMovieRenderPipeline._0_1_ < 3) {
          return;
        }
        pFVar7 = &::LOG_Static;
        goto LAB_14dcd7aaa;
      }
    }
  }
  if ((byte)LogMovieRenderPipeline._0_1_ < 3) {
    return;
  }
  pFVar7 = &::LOG_Static;
LAB_14dcd7aaa:
  UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogMovieRenderPipeline);
  return;
}

// OnEngineTickBeginFrame @ 14dcd9470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::OnEngineTickBeginFrame(UMovieGraphPipeline *this)

{
  EMovieRenderPipelineState EVar1;
  code *pcVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name575,L"MovieGraphBeginFrame");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name575,false,None,Default,true);
  FMemScope::FMemScope(local_res10,&LLMScope_Name575,true);
  if (6 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  EVar1 = this->PipelineState;
  if (EVar1 == Uninitialized) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPipeline.cpp"
                       ,0x247,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (EVar1 == ProducingFrames) {
    (**(code **)(this->_padding_ + 800))(this);
  }
  else if (EVar1 == Finalize) {
    (**(code **)(this->_padding_ + 0x330))(this,0);
  }
  else if (EVar1 == Export) {
    (**(code **)(this->_padding_ + 0x328))(this,0);
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// OnEngineTickEndFrame @ 14dcd95c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::OnEngineTickEndFrame(UMovieGraphPipeline *this)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name1137,L"MovieGraphEndFrame");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name1137,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name1137,true);
  uVar2 = this->CurrentShotIndex;
  uVar5 = 0;
  if ((int)uVar2 < (this->ActiveShotList).ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar1 = *(char *)(*(longlong *)
                     ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
                   0xcc);
  if ((cVar1 != '\0') && (cVar1 != '\x05')) {
    if (6 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    (**(code **)(((this->GraphAudioRendererInstance).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
    (**(code **)(this->_padding_ + 0x300))(this);
    if (6 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// OnMoviePipelineFinishedImpl @ 14dcd9750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::OnMoviePipelineFinishedImpl(UMovieGraphPipeline *this)

{
  int iVar1;
  UMoviePipelineExecutorJob *pUVar2;
  FMovieGraphRenderOutputData *pFVar3;
  ForAnyElementType FVar4;
  UMovieGraphPipeline *pUVar5;
  undefined1 uVar6;
  FMoviePipelineShotOutputData *pFVar7;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  UMovieGraphPipeline *local_90;
  UMoviePipelineExecutorJob *local_88;
  undefined1 local_80;
  FMoviePipelineShotOutputData *local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TObjectPtr<UMoviePipelineBase>_u_0 local_58;
  UMoviePipelineExecutorJob *local_50;
  undefined1 local_48;
  ForAnyElementType local_40;
  int local_38;
  int local_34;
  ForAnyElementType local_30;
  int local_28;
  int local_24 [3];
  
  local_78 = (FMoviePipelineShotOutputData *)0x0;
  local_70 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UMovieGraphPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar2 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
  local_90 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_80 = this->bShutdownSetErrorFlag == (FThreadSafeBool)0x0;
  local_88 = pUVar2;
  if ((TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *)&local_68 !=
      &this->GeneratedOutputData) {
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)local_68.Data,(int)local_60);
    iVar1 = (this->GeneratedOutputData).ArrayNum;
    pFVar3 = (FMovieGraphRenderOutputData *)(this->GeneratedOutputData).AllocatorInstance.Data;
    local_60 = CONCAT44(local_60._4_4_,iVar1);
    if ((iVar1 == 0) && (local_60._4_4_ == 0)) {
      local_60 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar1,local_60._4_4_,&local_68,iVar1,(int *)((longlong)&local_60 + 4));
      ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
                (local_68.Data,pFVar3,iVar1);
    }
  }
  pUVar5 = local_90;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_90 != (UMovieGraphPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_90);
  }
  pUVar2 = local_88;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_88 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  pFVar7 = local_78;
  uVar6 = local_80;
  iVar1 = (int)local_70;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = (int)local_70;
  if ((int)local_70 == 0) {
    local_a4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,(int)local_70,0,&local_b0,(int)local_70,&local_a4);
    ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
              (local_b0.Data,pFVar7,iVar1);
  }
  FVar4.Data = local_68.Data;
  iVar1 = (int)local_60;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = (int)local_60;
  if ((int)local_60 == 0) {
    local_94 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,(int)local_60,0,&local_a0,(int)local_60,&local_94);
    ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
              (local_a0.Data,(FMovieGraphRenderOutputData *)FVar4.Data,iVar1);
  }
  local_58.DebugPtr = (UMoviePipelineBase *)pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMovieGraphPipeline *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_50 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  iVar1 = local_a8;
  FVar4.Data = local_b0.Data;
  local_48 = uVar6;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = local_a8;
  if (local_a8 == 0) {
    local_34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_a8,0,&local_40,local_a8,&local_34);
    ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
              (local_40.Data,(FMoviePipelineShotOutputData *)FVar4.Data,iVar1);
  }
  iVar1 = local_98;
  FVar4.Data = local_a0.Data;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = local_98;
  if (local_98 == 0) {
    local_24[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_98,0,&local_30,local_98,local_24);
    ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
              (local_30.Data,(FMovieGraphRenderOutputData *)FVar4.Data,iVar1);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>,FMoviePipelineOutputData>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
             (FMoviePipelineOutputData *)&local_58.ObjectPtr);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)local_a0.Data,local_98);
  if ((FMovieGraphRenderOutputData *)local_a0.Data != (FMovieGraphRenderOutputData *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)local_b0.Data,local_a8);
  if ((FMoviePipelineShotOutputData *)local_b0.Data != (FMoviePipelineShotOutputData *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  pUVar5 = local_90;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_90 != (UMovieGraphPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_90);
  }
  pUVar2 = local_88;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_88 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  pFVar7 = local_78;
  uVar6 = local_80;
  iVar1 = (int)local_70;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = (int)local_70;
  if ((int)local_70 == 0) {
    local_a4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,(int)local_70,0,&local_b0,(int)local_70,&local_a4);
    ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
              (local_b0.Data,pFVar7,iVar1);
  }
  FVar4.Data = local_68.Data;
  iVar1 = (int)local_60;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = (int)local_60;
  if ((int)local_60 == 0) {
    local_94 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,(int)local_60,0,&local_a0,(int)local_60,&local_94);
    ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
              (local_a0.Data,(FMovieGraphRenderOutputData *)FVar4.Data,iVar1);
  }
  local_58.DebugPtr = (UMoviePipelineBase *)pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMovieGraphPipeline *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_50 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  iVar1 = local_a8;
  FVar4.Data = local_b0.Data;
  local_48 = uVar6;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = local_a8;
  if (local_a8 == 0) {
    local_34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_a8,0,&local_40,local_a8,&local_34);
    ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
              (local_40.Data,(FMoviePipelineShotOutputData *)FVar4.Data,iVar1);
  }
  iVar1 = local_98;
  FVar4.Data = local_a0.Data;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = local_98;
  if (local_98 == 0) {
    local_24[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_98,0,&local_30,local_98,local_24);
    ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
              (local_30.Data,(FMovieGraphRenderOutputData *)FVar4.Data,iVar1);
  }
  FMoviePipelineWorkFinished_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FMoviePipelineOutputData *)&local_58.ObjectPtr);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)local_a0.Data,local_98);
  if ((FMovieGraphRenderOutputData *)local_a0.Data != (FMovieGraphRenderOutputData *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)local_b0.Data,local_a8);
  if ((FMoviePipelineShotOutputData *)local_b0.Data != (FMoviePipelineShotOutputData *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)local_68.Data,(int)local_60);
  if ((FMovieGraphRenderOutputData *)local_68.Data != (FMovieGraphRenderOutputData *)0x0) {
    FMemory::Free(local_68.Data);
  }
  DestructItems<FMoviePipelineShotOutputData,int>(local_78,(int)local_70);
  if (local_78 != (FMoviePipelineShotOutputData *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// ProcessOutstandingFinishedFrames @ 14dcda740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::ProcessOutstandingFinishedFrames(UMovieGraphPipeline *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FName FVar3;
  TObjectPtr<UObject>_u_0 TVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  FMovieGraphOutputMergerFrame *pFVar15;
  FDateTime *this_00;
  FDateTime FVar16;
  UClass *pUVar17;
  byte bVar18;
  ulonglong uVar19;
  ForElementType<FSetElementId> FVar20;
  UObject *pUVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  int iVar24;
  uint *puVar25;
  FName *pFVar26;
  undefined1 auStackY_6a8 [32];
  undefined1 local_658;
  undefined1 local_657;
  undefined1 local_656;
  undefined1 local_655 [5];
  ForAnyElementType local_650;
  undefined8 local_648;
  UObject *local_640;
  ForAnyElementType local_638;
  int local_630;
  int local_62c;
  int local_628 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_620;
  int local_600;
  undefined4 uStack_5fc;
  int iStack_5f8;
  undefined4 uStack_5f4;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_5f0;
  longlong *local_5e0;
  undefined8 uStack_5d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5d0;
  uint uStack_5c8;
  uint uStack_5c4;
  undefined8 uStack_5c0;
  int local_5b8;
  undefined4 uStack_5b4;
  int local_5b0;
  undefined1 local_5ac [20];
  FTimespan local_598;
  TObjectPtr<UObject>_u_0 local_590;
  TObjectPtr<UObject>_u_0 *local_588;
  UMovieGraphPipeline *local_580;
  UObject *local_578;
  longlong *local_570;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_568;
  undefined8 uStack_548;
  longlong *local_540;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_538;
  undefined8 uStack_518;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0 [3];
  undefined4 local_48c;
  undefined4 local_46c;
  undefined1 local_468 [256];
  undefined1 local_368 [32];
  uint *local_348;
  uint local_340;
  undefined4 local_33c;
  undefined4 local_338;
  int local_334;
  void *local_328;
  undefined4 local_320;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_318;
  undefined1 local_2c8 [64];
  void *local_288;
  undefined4 local_280;
  undefined1 local_278 [32];
  uint *local_258;
  uint local_250;
  undefined4 local_24c;
  undefined4 local_248;
  int local_244;
  undefined1 local_240 [8];
  ForElementType<FSetElementId> local_238;
  int local_230;
  FMovieGraphOutputMergerFrame local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  local_580 = this;
  do {
    iVar24 = 0;
    if (((this->OutputMerger).Object == (IMovieGraphOutputMerger *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar13 = (**(code **)(*(longlong *)(this->OutputMerger).Object + 0x38))();
    if (**(longlong **)(lVar13 + 8) == 0) {
      return;
    }
    local_468._0_8_ = (UMovieGraphEvaluatedConfig *)0x0;
    FMovieGraphTraversalContext::FMovieGraphTraversalContext
              ((FMovieGraphTraversalContext *)(local_468 + 8));
    local_468._240_8_ = (FMovieGraphRenderDataIdentifier *)0x0;
    local_468._248_4_ = 0;
    local_468._252_4_ = 0;
    local_368._0_8_ = 0;
    local_368._8_8_ = 0;
    local_348 = (uint *)0x0;
    local_340 = 0;
    local_33c = 0x80;
    local_338 = 0xffffffff;
    local_334 = 0;
    local_328 = (void *)0x0;
    local_320 = 0;
    local_318.Pairs.Elements._0_8_ = 0;
    local_318.Pairs.Elements._8_8_ = 0;
    local_318.Pairs.Elements._32_8_ = 0;
    local_318.Pairs.Elements._40_4_ = 0;
    local_318.Pairs.Elements._44_4_ = 0x80;
    local_318.Pairs.Elements._48_4_ = 0xffffffff;
    local_318.Pairs.Elements._52_4_ = 0;
    local_318.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_318.Pairs.HashSize = 0;
    local_2c8._0_8_ = 0;
    local_2c8._8_8_ = 0;
    local_2c8._32_8_ = 0;
    local_2c8._40_4_ = 0;
    local_2c8._44_4_ = 0x80;
    local_2c8._48_4_ = 0xffffffff;
    local_2c8._52_4_ = 0;
    local_288 = (void *)0x0;
    local_280 = 0;
    if (((this->OutputMerger).Object == (IMovieGraphOutputMerger *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar14 = (**(code **)(*(longlong *)(this->OutputMerger).Object + 0x38))();
    lVar13 = **(longlong **)(lVar14 + 8);
    if (lVar13 != 0) {
      UE::MovieGraph::FMovieGraphOutputMergerFrame::operator=
                ((FMovieGraphOutputMergerFrame *)local_468,
                 (FMovieGraphOutputMergerFrame *)(lVar13 + 8));
      pvVar2 = *(void **)(lVar14 + 8);
      *(longlong *)(lVar14 + 8) = lVar13;
      memset(&local_228,0,0x1f0);
      pFVar15 = UE::MovieGraph::FMovieGraphOutputMergerFrame::FMovieGraphOutputMergerFrame
                          (&local_228);
      UE::MovieGraph::FMovieGraphOutputMergerFrame::operator=
                ((FMovieGraphOutputMergerFrame *)(*(longlong *)(lVar14 + 8) + 8),pFVar15);
      UE::MovieGraph::FMovieGraphOutputMergerFrame::~FMovieGraphOutputMergerFrame(&local_228);
      if (pvVar2 != (void *)0x0) {
        UE::MovieGraph::FMovieGraphOutputMergerFrame::~FMovieGraphOutputMergerFrame
                  ((FMovieGraphOutputMergerFrame *)((longlong)pvVar2 + 8));
        ::operator_delete(pvVar2,0x1f8);
      }
    }
    this_00 = (FDateTime *)
              (**(code **)(*(longlong *)(this->GraphRendererInstance).field0_0x0.DebugPtr + 0x2d0))
                        ();
    if (this_00 == (FDateTime *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4028969783696292360>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPipeline.cpp"
                         ,0x5f8,"TimeStats");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      FVar16 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
      this_00[1].Ticks = *FVar16.Ticks;
      FDateTime::ToString(this_00,local_4c0);
      FDateTime::ToString(this_00 + 1,&local_4d0);
      local_598.Ticks = this_00[1].Ticks - this_00->Ticks;
      FTimespan::ToString(&local_598,&local_4e0);
      ::FString::FString(&local_510,L"unreal/frameRenderStartTimeUTC");
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString,FString_const_&>(&local_318,&local_510,local_4c0);
      if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_500,L"unreal/frameRenderEndTimeUTC");
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString,FString_const_&>(&local_318,&local_500,&local_4d0);
      if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_4f0,L"unreal/frameRenderDuration");
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString,FString_const_&>(&local_318,&local_4f0,&local_4e0);
      if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
      }
      if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
      }
      if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
      }
      if (local_4c0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c0[0].Data.AllocatorInstance.Data);
      }
    }
    uVar12 = local_340;
    local_278._0_8_ = 0;
    uVar10 = 1;
    local_278._8_8_ = 0;
    local_258 = (uint *)0x0;
    local_250 = 0;
    local_24c = 0x80;
    local_248 = 0xffffffff;
    local_244 = 0;
    local_238 = (ForElementType<FSetElementId>)0x0;
    local_230 = 0;
    local_620._28_4_ = 0;
    local_600 = iVar24;
    if (local_340 != 0) {
      puVar25 = (uint *)(local_368 + 0x10);
      if (local_348 != (uint *)0x0) {
        puVar25 = local_348;
      }
      uVar22 = *puVar25;
      while (uVar22 == 0) {
        iVar24 = iVar24 + 1;
        local_600 = local_600 + 0x20;
        local_620._28_4_ = local_340;
        if ((int)((local_340 - 1) + ((int)(local_340 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_14dcdabef;
        uVar22 = puVar25[iVar24];
      }
      uVar10 = ~(uVar22 - 1) & uVar22;
      uVar19 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_5b0 = (int)lVar13;
      local_620._28_4_ = local_5b0 + -1 + local_600;
      if ((int)local_340 < (int)local_620._28_4_) {
        local_620._28_4_ = local_340;
      }
    }
LAB_14dcdabef:
    local_570 = (longlong *)(local_468 + 0x100);
    uStack_5fc = local_48c;
    iStack_5f8 = local_368._8_4_ - local_334;
    TStack_568.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_368 + 0x10);
    bVar18 = (byte)local_340 & 0x1f;
    local_620.Array = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar10,iVar24);
    local_620._padding_ = CONCAT44(1 << bVar18,(int)local_340 >> 5);
    TStack_568.CurrentBitIndex = local_620._28_4_;
    TStack_568.UnvisitedBitMask = 0xffffffff;
    local_620.BaseBitIndex = local_340 & 0xffffffe0;
    local_620.CurrentBitIndex = local_340;
    local_620.UnvisitedBitMask = -1 << bVar18;
    TStack_568._padding_ = (longlong)local_620.Array;
    TStack_568._28_4_ = local_48c;
    TStack_568.BaseBitIndex = local_600;
    uStack_548 = CONCAT44(uStack_5f4,iStack_5f8);
    local_620.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_368 + 0x10);
    if (((int)local_340 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar12 != local_340) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_620);
    }
    pTVar6 = local_620.Array;
    uStack_5c0 = CONCAT44(local_620._28_4_,local_620.BaseBitIndex);
    uStack_5d8 = local_620._padding_;
    pTStack_5d0 = local_620.Array;
    uStack_5c8 = local_620.UnvisitedBitMask;
    uStack_5c4 = local_620.CurrentBitIndex;
    uVar7 = _uStack_5c8;
    uStack_5c4 = local_620.CurrentBitIndex;
    uVar12 = uStack_5c4;
    _uStack_5c8 = uVar7;
    while( true ) {
      plVar8 = local_570;
      if ((int)local_570[1] - *(int *)((longlong)local_570 + 0x34) != (int)uStack_548) {
        local_658 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_658);
      }
      uVar10 = local_250;
      uVar7 = local_468._0_8_;
      if (((TStack_568.CurrentBitIndex == uVar12) && (TStack_568.Array == pTVar6)) &&
         (plVar8 == (longlong *)(local_468 + 0x100))) break;
      pFVar26 = (FName *)((longlong)TStack_568.CurrentBitIndex * 0x58 + *plVar8);
      if (*(longlong *)((longlong)pFVar26[9] + 0x18) == 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4028969783696292332>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPipeline.cpp"
                           ,0x614,"LayerPayload");
        if (bVar9) {
code_r0x00014dcdad9f:
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if ((UMovieGraphEvaluatedConfig *)local_468._0_8_ == (UMovieGraphEvaluatedConfig *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4028969783696292327>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPipeline.cpp"
                           ,0x619,"OutputFrame.EvaluatedConfig");
        if (bVar9) goto code_r0x00014dcdad9f;
      }
      else {
        FVar3 = *pFVar26;
        pUVar17 = Z_Construct_UClass_UMovieGraphFileOutputNode_NoRegister();
        UMovieGraphEvaluatedConfig::GetSettingsForBranch
                  ((UMovieGraphEvaluatedConfig *)uVar7,&local_5f0,pUVar17,FVar3,false,false);
        uVar19 = (ulonglong)(uint)local_5f0.ArrayNum;
        local_650.Data = (FScriptContainerElement *)0x0;
        local_648 = 0;
        if (local_5f0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar19);
        }
        if (0 < local_5f0.ArrayNum) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_5f0.ArrayNum,&local_650,0,(int *)((longlong)&local_648 + 4));
          uVar19 = (ulonglong)(uint)local_5f0.ArrayNum;
        }
        iVar24 = (int)uVar19;
        pFVar1 = local_5f0.AllocatorInstance.Data + (longlong)iVar24 * 8;
        FVar23.Data = local_5f0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar19 != iVar24) {
            local_657 = 0;
            `TCheckedPointerIterator<UMovieGraphSettingNode_*,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_657);
          }
          _Src.Data = local_650.Data;
          if (FVar23.Data == pFVar1) break;
          pUVar21 = *(UObject **)FVar23.Data;
          if (pUVar21 == (UObject *)0x0) {
LAB_14dcdae59:
            pUVar21 = (UObject *)0x0;
          }
          else {
            pUVar17 = Z_Construct_UClass_UMovieGraphFileOutputNode_NoRegister();
            iVar11 = (int)pUVar17->_padding_;
            if ((*(int *)(*(longlong *)&pUVar21->field_0x10 + 0x38) < iVar11) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar21->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
                &pUVar17->_padding_)) goto LAB_14dcdae59;
          }
          local_640 = pUVar21;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar21);
          }
          if (((local_650.Data <= (FScriptContainerElement *)&local_640) &&
              ((FScriptContainerElement *)&local_640 <
               local_650.Data + (longlong)local_648._4_4_ * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((int)local_648 == local_648._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_650,(int *)((longlong)&local_648 + 4));
            local_648 = CONCAT44(local_648._4_4_,iVar11);
          }
          lVar13 = (longlong)(int)local_648;
          local_648 = CONCAT44(local_648._4_4_,(int)local_648 + 1);
          *(UObject **)(local_650.Data + lVar13 * 8) = local_640;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_640 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_640);
          }
          uVar19 = (ulonglong)(uint)local_5f0.ArrayNum;
          FVar23.Data = FVar23.Data + 8;
        }
        lVar13 = (longlong)(int)local_648;
        local_638.Data = (FScriptContainerElement *)0x0;
        local_630 = (int)local_648;
        if ((int)local_648 == 0) {
          local_62c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(int)local_648,0,&local_638,(int)local_648,&local_62c);
          memcpy(local_638.Data,_Src.Data,lVar13 << 3);
        }
        if (local_650.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_650.Data);
        }
        if (local_5f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5f0.AllocatorInstance.Data);
        }
        iVar24 = local_630;
        pFVar1 = local_638.Data + (longlong)local_630 * 8;
        FVar23.Data = local_638.Data;
        while( true ) {
          if (local_630 != iVar24) {
            local_656 = 0;
            `TCheckedPointerIterator<UMovieGraphFileOutputNode_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_656);
          }
          if (FVar23.Data == pFVar1) break;
          pUVar17 = *(UClass **)(*(longlong *)FVar23.Data + 0x10);
          if ((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar17);
          }
          TVar4 = (TObjectPtr<UObject>_u_0)(pUVar17->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar17 = Z_Construct_UClass_UMovieGraphFileOutputNode_NoRegister();
          iVar11 = (int)pUVar17->_padding_;
          if (((*(int *)(*(longlong *)&(TVar4.DebugPtr)->field_0x10 + 0x38) < iVar11) ||
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&(TVar4.DebugPtr)->field_0x10 + 0x30) +
                (longlong)iVar11 * 8) != &pUVar17->_padding_)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret->IsA(T::StaticClass())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x1181,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = ((uint)((ulonglong)TVar4.DebugPtr >> 0x14) & 0xffff ^
                   (uint)((ulonglong)TVar4.DebugPtr >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar10 = uVar10 >> 0x10 ^ uVar10;
          local_590 = TVar4;
          if (local_278._8_4_ != local_244) {
            FVar20 = (ForElementType<FSetElementId>)local_240;
            if (local_238 != (ForElementType<FSetElementId>)0x0) {
              FVar20 = local_238;
            }
            for (iVar11 = *(int *)((longlong)FVar20 + (ulonglong)(local_230 - 1U & uVar10) * 4);
                iVar11 != -1; iVar11 = *(int *)((longlong)iVar11 * 0x60 + 0x58 + local_278._0_8_)) {
              if (*(UObject **)((longlong)iVar11 * 0x60 + local_278._0_8_) == TVar4.DebugPtr) {
                if ((iVar11 != -1) &&
                   (lVar13 = (longlong)iVar11 * 0x60 + local_278._0_8_, lVar13 != 0))
                goto LAB_14dcdb14d;
                break;
              }
            }
          }
          local_588 = &local_590;
          TSet<TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<UMovieGraphFileOutputNode_*_const_&>_>
                    ((TSet<TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)local_278,(uint)local_628,
                     (TKeyInitializer<UMovieGraphFileOutputNode_*_const_&> *)(ulonglong)uVar10,
                     (bool *)&local_588);
          lVar13 = (longlong)local_628[0] * 0x60 + local_278._0_8_;
LAB_14dcdb14d:
          TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
          ::Emplace<FMovieGraphRenderDataIdentifier_const_&>
                    ((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                      *)(lVar13 + 8),(FMovieGraphRenderDataIdentifier *)local_5ac,(bool *)pFVar26);
          FVar23.Data = FVar23.Data + 8;
        }
        if (local_638.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_638.Data);
        }
      }
      TStack_568.UnvisitedBitMask = TStack_568.UnvisitedBitMask & ~TStack_568._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_568);
    }
    iVar24 = 0;
    uStack_5c0._0_4_ = 0;
    uVar12 = 1;
    uStack_5c4 = 0;
    if (local_250 != 0) {
      puVar25 = (uint *)(local_278 + 0x10);
      if (local_258 != (uint *)0x0) {
        puVar25 = local_258;
      }
      uVar22 = *puVar25;
      while (uVar22 == 0) {
        iVar24 = iVar24 + 1;
        uStack_5c0._0_4_ = (int)uStack_5c0 + 0x20;
        uStack_5c4 = local_250;
        if ((int)((local_250 - 1) + ((int)(local_250 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_14dcdb20f;
        uVar22 = puVar25[iVar24];
      }
      uVar12 = -uVar22 & uVar22;
      uVar19 = (ulonglong)uVar12 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_5ac._4_4_ = (undefined4)lVar13;
      uStack_5c4 = (int)uStack_5c0 + -1 + local_5ac._4_4_;
      if ((int)local_250 < (int)uStack_5c4) {
        uStack_5c4 = local_250;
      }
    }
LAB_14dcdb20f:
    local_5e0 = (longlong *)local_278;
    pTStack_5d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10);
    uVar22 = local_250 & 0xffffffe0;
    local_5b8 = local_278._8_4_ - local_244;
    uStack_5d8 = CONCAT44(uVar12,iVar24);
    uStack_5c8 = 0xffffffff;
    uStack_5c0._4_4_ = local_46c;
    TStack_538._padding_ = uStack_5d8;
    iVar24 = (int)local_250 >> 5;
    uStack_518 = CONCAT44(uStack_5b4,local_5b8);
    bVar18 = (byte)local_250;
    TStack_538.UnvisitedBitMask = 0xffffffff;
    TStack_538.CurrentBitIndex = uStack_5c4;
    TStack_538.BaseBitIndex = (int)uStack_5c0;
    TStack_538._28_4_ = local_46c;
    local_540 = local_5e0;
    TStack_538.Array = pTStack_5d0;
    if (((int)local_250 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this = local_580;
    if (uVar10 != local_250) {
      puVar25 = (uint *)(local_278 + 0x10);
      if (local_258 != (uint *)0x0) {
        puVar25 = local_258;
      }
      uVar12 = -1 << (bVar18 & 0x1f) & puVar25[iVar24];
      while (uVar12 == 0) {
        iVar24 = iVar24 + 1;
        uVar22 = uVar22 + 0x20;
        uVar10 = local_250;
        if ((int)(((int)(local_250 - 1) >> 0x1f & 0x1fU) + (local_250 - 1)) >> 5 < iVar24)
        goto LAB_14dcdb340;
        uVar12 = puVar25[iVar24];
      }
      uVar19 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_5ac._8_4_ = (undefined4)lVar13;
      uVar10 = (uVar22 - 1) + local_5ac._8_4_;
      if ((int)local_250 < (int)uVar10) {
        uVar10 = local_250;
      }
    }
LAB_14dcdb340:
    while( true ) {
      plVar8 = local_540;
      if ((int)local_540[1] - *(int *)((longlong)local_540 + 0x34) != (int)uStack_518) {
        local_655[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_655);
      }
      if (((TStack_538.CurrentBitIndex == uVar10) &&
          (TStack_538.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10))) &&
         (plVar8 == (longlong *)local_278)) break;
      lVar13 = *plVar8;
      pUVar21 = *(UObject **)((longlong)TStack_538.CurrentBitIndex * 0x60 + lVar13);
      (**(code **)(*(longlong *)pUVar21 + 0x380))
                (pUVar21,this,local_468,lVar13 + 8 + (longlong)TStack_538.CurrentBitIndex * 0x60);
      local_578 = pUVar21;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar21);
      }
      TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UMovieGraphFileOutputNode>_>
                (&this->OutputNodesDataSentTo,
                 (TObjectPtr<UMovieGraphFileOutputNode> *)(local_5ac + 0xc),(bool *)&local_578);
      TStack_538.UnvisitedBitMask = TStack_538.UnvisitedBitMask & ~TStack_538._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_538);
    }
    local_230 = 0;
    if (local_238 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_238);
    }
    TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_278);
    local_280 = 0;
    if (local_288 != (void *)0x0) {
      FMemory::Free(local_288);
    }
    TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2c8);
    local_318.Pairs.HashSize = 0;
    if (local_318.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_318.Pairs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_318);
    local_320 = 0;
    if (local_328 != (void *)0x0) {
      FMemory::Free(local_328);
    }
    TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_468 + 0x100));
    DestructItems<FMovieGraphRenderDataIdentifier,int>
              ((FMovieGraphRenderDataIdentifier *)local_468._240_8_,local_468._248_4_);
    if ((FMovieGraphRenderDataIdentifier *)local_468._240_8_ !=
        (FMovieGraphRenderDataIdentifier *)0x0) {
      FMemory::Free((void *)local_468._240_8_);
    }
    if ((FScriptContainerElement *)local_468._96_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_468._96_8_);
    }
    if ((FScriptContainerElement *)local_468._80_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_468._80_8_);
    }
    if ((FScriptContainerElement *)local_468._64_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_468._64_8_);
    }
    if ((FScriptContainerElement *)local_468._48_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_468._48_8_);
    }
    if ((UMovieGraphEvaluatedConfig *)local_468._0_8_ != (UMovieGraphEvaluatedConfig *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_468._0_8_);
      local_468._0_8_ = (UMovieGraphEvaluatedConfig *)0x0;
    }
  } while( true );
}

// ProcessOutstandingFutures @ 14dcdb570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::ProcessOutstandingFutures(UMovieGraphPipeline *this,bool param_1)

{
  int *piVar1;
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FMovieGraphRenderLayerOutputData *pFVar14;
  uint uVar15;
  undefined1 *puVar16;
  FWeakObjectPtr *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  FWeakObjectPtr *this_00;
  undefined1 auStackY_1a8 [32];
  uint local_154;
  ForAnyElementType local_150;
  undefined8 local_148;
  FScriptContainerElement *local_140;
  int local_138 [2];
  FSoftObjectPath local_130;
  UObject *local_110;
  FSoftObjectPath *local_108;
  FMovieGraphRenderDataIdentifier local_100;
  undefined8 local_b8;
  TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
  local_b0;
  ulonglong local_58;
  
  fVar7 = __real_3dcccccd;
  uVar6 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 0;
  local_154 = 0;
  if (0 < (this->OutstandingOutputFutures).ArrayNum) {
    do {
      uVar12 = local_154;
      pFVar17 = (FWeakObjectPtr *)0x0;
      uVar15 = 0;
      if ((int)local_154 < (this->OutstandingOutputFutures).ArrayNum) {
        uVar15 = ~local_154 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar21 = (this->OutstandingOutputFutures).AllocatorInstance.Data;
      lVar22 = (longlong)(int)uVar12 * 0x90;
      local_140 = pFVar21;
      if (param_1) {
        while ((*(longlong *)(pFVar21 + lVar22) == 0 ||
               (*(char *)(*(longlong *)(pFVar21 + lVar22) + 0x68) == '\0'))) {
          FWindowsPlatformProcess::Sleep(fVar7);
        }
      }
      else if ((*(longlong *)(pFVar21 + lVar22) == 0) ||
              (*(char *)(*(longlong *)(pFVar21 + lVar22) + 0x68) == '\0')) break;
      if (((local_150.Data <= (FScriptContainerElement *)&local_154) &&
          ((FScriptContainerElement *)&local_154 < local_150.Data + (longlong)local_148._4_4_ * 4))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (int)local_148;
      if ((int)local_148 == local_148._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_150,(int *)((longlong)&local_148 + 4));
      }
      local_148 = CONCAT44(local_148._4_4_,iVar11 + 1);
      *(uint *)(local_150.Data + (longlong)iVar11 * 4) = local_154;
      this_00 = pFVar17;
      if ((this->GeneratedOutputData).ArrayNum < 1) {
LAB_14dcdb835:
        local_b0.Elements._0_8_ = 0;
        pTVar2 = &this->GeneratedOutputData;
        local_b0.Hash.InlineData[0] = '\0';
        local_b0.Hash.InlineData[1] = '\0';
        local_b0.Hash.InlineData[2] = '\0';
        local_b0.Hash.InlineData[3] = '\0';
        local_b0.Hash._padding_ = 0;
        pFVar20 = (pTVar2->AllocatorInstance).Data;
        local_b0._72_8_ = 0;
        local_b8 = 0;
        local_b0.Elements._8_8_ = 0;
        local_b0.Elements._32_8_ = 0;
        local_b0.Elements._40_8_ = uVar5;
        local_b0.Elements._48_8_ = uVar6;
        local_b0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_b0.Elements._16_8_ = 0;
        local_b0.Elements._24_8_ = 0;
        if (((pFVar20 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 <
             pFVar20 + (longlong)(this->GeneratedOutputData).ArrayMax * 0x58)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (this->GeneratedOutputData).ArrayNum;
        piVar1 = &(this->GeneratedOutputData).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->GeneratedOutputData).ArrayNum = iVar11 + 1;
        pFVar20 = (pTVar2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar20 + (longlong)iVar11 * 0x58) = local_b8;
        TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
        ::
        TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                  ((TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                    *)(pFVar20 + (longlong)iVar11 * 0x58 + 8),&local_b0);
        local_b0._72_8_ = local_b0._72_8_ & 0xffffffff00000000;
        if (local_b0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_b0.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_b0.Elements);
        iVar11 = (this->GeneratedOutputData).ArrayNum;
        uVar15 = iVar11 - 1;
        uVar12 = 0;
        if ((int)uVar15 < iVar11) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_110 = *(UObject **)(pFVar21 + lVar22 + 0x10);
        this_00 = (FWeakObjectPtr *)
                  ((this->GeneratedOutputData).AllocatorInstance.Data +
                  (longlong)((this->GeneratedOutputData).ArrayNum + -1) * 0x58);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_110 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_110);
        }
        FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_110);
      }
      else {
        do {
          uVar15 = (uint)pFVar17;
          uVar12 = 0;
          if ((int)uVar15 < (this->GeneratedOutputData).ArrayNum) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr>::
                   UEOpEquals<UMoviePipelineExecutorShot,bool>
                             ((TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *)
                              ((this->GeneratedOutputData).AllocatorInstance.Data +
                              (longlong)(int)uVar15 * 0x58),
                              *(UMoviePipelineExecutorShot **)(local_140 + lVar22 + 0x10));
          if (bVar10) {
            uVar12 = 0;
            if ((int)uVar15 < (this->GeneratedOutputData).ArrayNum) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_00 = (FWeakObjectPtr *)
                      ((this->GeneratedOutputData).AllocatorInstance.Data +
                      (longlong)(int)uVar15 * 0x58);
          }
          pFVar17 = (FWeakObjectPtr *)(ulonglong)(uVar15 + 1);
        } while ((int)(uVar15 + 1) < (this->GeneratedOutputData).ArrayNum);
        pFVar21 = local_140;
        if (this_00 == (FWeakObjectPtr *)0x0) goto LAB_14dcdb835;
      }
      local_100.RootBranchName = *(FName *)(pFVar21 + lVar22 + 0x38);
      ::FString::FString(&local_100.LayerName,(FString *)(pFVar21 + lVar22 + 0x40));
      ::FString::FString(&local_100.RendererName,(FString *)(pFVar21 + lVar22 + 0x50));
      ::FString::FString(&local_100.SubResourceName,(FString *)(pFVar21 + lVar22 + 0x60));
      ::FString::FString(&local_100.CameraName,(FString *)(pFVar21 + lVar22 + 0x70));
      uVar12 = ::GetTypeHash(&local_100);
      pFVar14 = TMapBase<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>_>
                ::FindOrAddImpl<FMovieGraphRenderDataIdentifier_const_&>
                          ((TMapBase<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>_>
                            *)(this_00 + 1),uVar12,
                           (FMovieGraphRenderDataIdentifier *)(pFVar21 + lVar22 + 0x38));
      pFVar18 = pFVar21 + lVar22 + 0x18;
      pFVar20 = (pFVar14->FilePaths).AllocatorInstance.Data;
      if (((pFVar20 <= pFVar18) &&
          (pFVar18 < pFVar20 + (longlong)(pFVar14->FilePaths).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (pFVar14->FilePaths).ArrayNum;
      piVar1 = &(pFVar14->FilePaths).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)pFVar14,piVar1);
      }
      (pFVar14->FilePaths).ArrayNum = iVar11 + 1;
      ::FString::FString((FString *)
                         ((pFVar14->FilePaths).AllocatorInstance.Data + (longlong)iVar11 * 0x10),
                         (FString *)pFVar18);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (&pFVar14->FrameTemplatedFilePaths,(FString *)(pFVar21 + lVar22 + 0x28));
      pFVar14->RenderLayerIndex = *(int *)(pFVar21 + lVar22 + 0x88);
      local_130.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_130.AssetPath.PackageName.Number = 0;
      local_130.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_130.AssetPath.AssetName.Number = 0;
      local_130.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.SubPathString.Data.ArrayNum = 0;
      local_130.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_130,*(UObject **)(pFVar21 + lVar22 + 0x80));
      FVar9 = local_130.AssetPath.AssetName;
      uVar12 = ::GetTypeHash(local_130.AssetPath.AssetName.ComparisonIndex.Value);
      FVar8 = local_130.AssetPath.PackageName;
      uVar15 = ::GetTypeHash(local_130.AssetPath.PackageName.ComparisonIndex.Value);
      uVar15 = uVar15 + FVar8.Number;
      uVar15 = uVar15 * 0x40 + uVar12 + FVar9.Number + (uVar15 >> 2) + 0x9e3779b9 ^ uVar15;
      if (1 < local_130.SubPathString.Data.ArrayNum) {
        if (local_130.SubPathString.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = local_130.SubPathString.Data.ArrayNum + -1;
        }
        uVar12 = FCrc::Strihash_DEPRECATED<char8_t>
                           (iVar11,(uchar *)local_130.SubPathString.Data.AllocatorInstance.Data);
        uVar15 = uVar15 ^ uVar12 + uVar15 * 0x40 + -0x61c88647 + (uVar15 >> 2);
      }
      if (*(int *)&(pFVar14->NodeTypeToFilePaths).field_0x8 !=
          *(int *)&(pFVar14->NodeTypeToFilePaths).field_0x34) {
        puVar3 = *(undefined1 **)&(pFVar14->NodeTypeToFilePaths).field_0x40;
        puVar16 = &(pFVar14->NodeTypeToFilePaths).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar16 = puVar3;
        }
        iVar11 = *(int *)(puVar16 +
                         (ulonglong)
                         (*(int *)&(pFVar14->NodeTypeToFilePaths).field_0x48 - 1U & uVar15) * 4);
        while (iVar11 != -1) {
          lVar19 = (longlong)iVar11 * 0x38;
          bVar10 = FSoftObjectPath::operator==
                             ((FSoftObjectPath *)
                              (*(longlong *)&pFVar14->NodeTypeToFilePaths + lVar19),&local_130);
          if (bVar10) {
            lVar19 = *(longlong *)&pFVar14->NodeTypeToFilePaths + lVar19;
            if (lVar19 != 0) goto LAB_14dcdbc17;
            break;
          }
          iVar11 = *(int *)(lVar19 + 0x30 + *(longlong *)&pFVar14->NodeTypeToFilePaths);
        }
      }
      local_108 = &local_130;
      TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FSoftClassPath_&&>_>
                ((TSet<TTuple<FSoftClassPath,FMovieGraphStringArray>,TDefaultMapHashableKeyFuncs<FSoftClassPath,FMovieGraphStringArray,0>,FDefaultSetAllocator>
                  *)&pFVar14->NodeTypeToFilePaths,(uint)local_138,
                 (TKeyInitializer<FSoftClassPath_&&> *)(ulonglong)uVar15,(bool *)&local_108);
      lVar19 = (longlong)local_138[0] * 0x38 + *(longlong *)&pFVar14->NodeTypeToFilePaths;
LAB_14dcdbc17:
      if (local_130.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar21 = local_140;
      pFVar20 = local_140 + lVar22 + 0x18;
      if (((*(FScriptContainerElement **)(lVar19 + 0x20) <= local_140 + lVar22 + 0x18) &&
          (pFVar20 < *(FScriptContainerElement **)(lVar19 + 0x20) +
                     (longlong)*(int *)(lVar19 + 0x2c) * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = *(int *)(lVar19 + 0x28);
      if (iVar11 == *(int *)(lVar19 + 0x2c)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(lVar19 + 0x20),(int *)(lVar19 + 0x2c));
      }
      *(int *)(lVar19 + 0x28) = iVar11 + 1;
      ::FString::FString((FString *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar19 + 0x20)),
                         (FString *)pFVar20);
      if (*(longlong *)(pFVar21 + lVar22) == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x155,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(longlong *)(pFVar21 + lVar22) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar22 = *(longlong *)(pFVar21 + lVar22);
      while (*(char *)(lVar22 + 0x68) == '\0') {
        (**(code **)(**(longlong **)(lVar22 + 0x60) + 0x20))
                  (*(longlong **)(lVar22 + 0x60),0xffffffff,0);
      }
      if (*(char *)(lVar22 + 0x70) == '\0') {
        if (1 < (byte)LogMovieRenderPipeline._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
        (**(code **)(this->_padding_ + 0x2b0))(this,1);
        break;
      }
      local_154 = local_154 + 1;
    } while ((int)local_154 < (this->OutstandingOutputFutures).ArrayNum);
  }
  uVar12 = (int)local_148 - 1;
  if (-1 < (int)uVar12) {
    lVar22 = (longlong)(int)uVar12 * 4;
    do {
      uVar15 = 0;
      if ((int)uVar12 < (int)local_148) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar15 = *(uint *)(local_150.Data + lVar22);
      uVar13 = 0;
      if ((int)uVar15 < (this->OutstandingOutputFutures).ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar21 = (this->OutstandingOutputFutures).AllocatorInstance.Data +
                (longlong)(int)uVar15 * 0x90;
      UE::MovieGraph::FMovieGraphOutputFutureData::~FMovieGraphOutputFutureData
                ((FMovieGraphOutputFutureData *)(pFVar21 + 0x10));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar21 + 8));
      iVar11 = (this->OutstandingOutputFutures).ArrayNum + ~uVar15;
      if (iVar11 != 0) {
        memmove(pFVar21,pFVar21 + 0x90,(longlong)iVar11 * 0x90);
      }
      piVar1 = &(this->OutstandingOutputFutures).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,&(this->OutstandingOutputFutures).AllocatorInstance,
                 (this->OutstandingOutputFutures).ArrayNum,
                 &(this->OutstandingOutputFutures).ArrayMax);
      lVar22 = lVar22 + -4;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  if (local_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data);
  }
  return;
}

// RenderFrame @ 14dce0740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::RenderFrame(UMovieGraphPipeline *this)

{
  UMovieGraphTimeStepBase *pUVar1;
  UMovieGraphRendererBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_88 [128];
  
  if ((this->GraphRendererInstance).field0_0x0.DebugPtr == (UMovieGraphRendererBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphRendererInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPipeline.cpp"
                       ,0x487,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = (this->GraphTimeStepInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,local_88);
  pUVar2 = (this->GraphRendererInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,local_88);
  return;
}

// RequestShutdownImpl @ 14dce07c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::RequestShutdownImpl(UMovieGraphPipeline *this,bool param_1)

{
  if (param_1) {
    LOCK();
    this->bShutdownSetErrorFlag = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  LOCK();
  this->bShutdownRequested = (FThreadSafeBool)0x1;
  UNLOCK();
  if (((this->PipelineState == Finalize) || (this->PipelineState == Export)) &&
     (4 < (byte)LogMovieRenderPipeline._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    return;
  }
  return;
}

// ResolveVersionForShot @ 14dce1b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

int __thiscall
UMovieGraphPipeline::ResolveVersionForShot
          (UMovieGraphPipeline *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1,
          TObjectPtr<UMovieGraphEvaluatedConfig> *param_2)

{
  FName *pFVar1;
  int iVar2;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 TVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UMovieGraphGlobalOutputSettingNode *pUVar12;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  longlong local_3b0;
  undefined1 local_3a8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_3a0;
  FMovieGraphFilenameResolveParams local_390;
  int local_238 [8];
  FFrameRate local_218;
  int local_1d8;
  int local_1bc;
  FMovieGraphFilenameResolveParams local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  iVar10 = 1;
  FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams(&local_1b8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((param_2->field0_0x0).DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_2->field0_0x0).DebugPtr);
  }
  local_1b8.EvaluatedConfig.field0_0x0.ObjectPtr.field0_0x0 = param_2->field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((param_1->field0_0x0).DebugPtr != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_1->field0_0x0).DebugPtr);
  }
  local_1b8.Shot.field0_0x0.ObjectPtr.field0_0x0 = param_1->field0_0x0;
  TVar3 = (TObjectPtr<UMoviePipelineExecutorJob>_u_0)(this->CurrentJobDuplicate).field0_0x0.DebugPtr
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar3.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  iVar2 = (this->GraphTimeStepInstances).ArrayNum;
  uVar14 = iVar2 - 1;
  uVar9 = 0;
  if ((int)uVar14 < iVar2) {
    uVar9 = ~uVar14 >> 0x1f;
  }
  local_1b8.Job.field0_0x0 = TVar3;
  if (uVar9 == 0) {
    local_3b8 = (longlong)(int)uVar14;
    local_3b0 = (longlong)iVar2;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
  }
  plVar4 = *(longlong **)
            ((this->GraphTimeStepInstances).AllocatorInstance.Data +
            (longlong)(this->GraphTimeStepInstances).ArrayNum * 8 + -8);
  (**(code **)(*plVar4 + 0x2c8))(plVar4,local_238);
  pUVar12 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                      ((param_2->field0_0x0).DebugPtr,UMovieGraphNode::GlobalsPinName,true,true);
  local_1b8.InitializationTime.Ticks = (this->GraphInitializationTime).Ticks;
  local_1b8.InitializationTimeOffset.Ticks = (this->InitializationTimeOffset).Ticks;
  local_1b8.DefaultFrameRate = local_218;
  local_1b8.FrameNumberOffset = pUVar12->FrameNumberOffset;
  iVar2 = (((param_1->field0_0x0).DebugPtr)->InnerName).Data.ArrayNum;
  uVar9 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar9 = 0;
  }
  ::FString::AssignRange
            (&local_1b8.RenderDataIdentifier.CameraName,
             (wchar_t *)(((param_1->field0_0x0).DebugPtr)->InnerName).Data.AllocatorInstance.Data,
             uVar9);
  local_1b8.RootFrameNumber = local_1d8;
  local_1b8.ShotFrameNumber = local_1bc;
  local_1b8.RootFrameNumberRel = local_238[0];
  local_1b8.bForceRelativeFrameNumbers = false;
  local_1b8.ZeroPadFrameNumberCount = pUVar12->ZeroPadFrameNumbers;
  local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a0.ArrayNum = 0;
  local_3a0.ArrayMax = 0;
  TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
              *)&((param_2->field0_0x0).DebugPtr)->BranchConfigMapping,&local_3a0);
  uVar7 = _UNK_150631d98;
  uVar6 = ___xmm_00000000ffffffff0000008000000000;
  iVar2 = local_3a0.ArrayNum;
  uVar13 = (ulonglong)local_3a0.ArrayNum;
  pFVar1 = (FName *)(local_3a0.AllocatorInstance.Data + uVar13 * 8);
  FVar15.Data = local_3a0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar13 != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3a8);
    }
    if ((FName *)FVar15.Data == pFVar1) break;
    local_390.RenderDataIdentifier.RootBranchName = *(FName *)FVar15.Data;
    local_1b8.RenderDataIdentifier.RootBranchName = local_390.RenderDataIdentifier.RootBranchName;
    ::FString::FString(&local_390.RenderDataIdentifier.LayerName,
                       &local_1b8.RenderDataIdentifier.LayerName);
    ::FString::FString(&local_390.RenderDataIdentifier.RendererName,
                       &local_1b8.RenderDataIdentifier.RendererName);
    ::FString::FString(&local_390.RenderDataIdentifier.SubResourceName,
                       &local_1b8.RenderDataIdentifier.SubResourceName);
    ::FString::FString(&local_390.RenderDataIdentifier.CameraName,
                       &local_1b8.RenderDataIdentifier.CameraName);
    local_390.RootFrameNumber = local_1b8.RootFrameNumber;
    local_390.ShotFrameNumber = local_1b8.ShotFrameNumber;
    local_390.RootFrameNumberRel = local_1b8.RootFrameNumberRel;
    local_390.ShotFrameNumberRel = local_1b8.ShotFrameNumberRel;
    local_390.FileMetadata._0_8_ = 0;
    local_390.FileMetadata._8_8_ = 0;
    local_390.FileMetadata._32_8_ = 0;
    local_390.FileMetadata._40_8_ = uVar6;
    local_390.FileMetadata._48_8_ = uVar7;
    local_390.FileMetadata._64_8_ = 0;
    local_390.FileMetadata._72_4_ = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&local_390.FileMetadata,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&local_1b8.FileMetadata);
    local_390.Version = local_1b8.Version;
    local_390.bForceRelativeFrameNumbers = local_1b8.bForceRelativeFrameNumbers;
    ::FString::FString(&local_390.FileNameOverride,&local_1b8.FileNameOverride);
    local_390.bEnsureAbsolutePath = local_1b8.bEnsureAbsolutePath;
    local_390.InitializationTime.Ticks = local_1b8.InitializationTime.Ticks;
    local_390.InitializationTimeOffset.Ticks = local_1b8.InitializationTimeOffset.Ticks;
    local_390.ZeroPadFrameNumberCount = local_1b8.ZeroPadFrameNumberCount;
    local_390.FileNameFormatOverrides._0_8_ = 0;
    local_390.FileNameFormatOverrides._8_8_ = 0;
    local_390.FileNameFormatOverrides._32_8_ = 0;
    local_390.FileNameFormatOverrides._40_8_ = uVar6;
    local_390.FileNameFormatOverrides._48_8_ = uVar7;
    local_390.FileNameFormatOverrides._64_8_ = 0;
    local_390.FileNameFormatOverrides._72_4_ = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&local_390.FileNameFormatOverrides,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&local_1b8.FileNameFormatOverrides);
    local_390.Job.field0_0x0.DebugPtr = local_1b8.Job.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1b8.Job.field0_0x0.DebugPtr != (TObjectPtr<UMoviePipelineExecutorJob>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1b8.Job.field0_0x0);
    }
    local_390.Shot.field0_0x0.DebugPtr = local_1b8.Shot.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1b8.Shot.field0_0x0.DebugPtr != (TObjectPtr<UMoviePipelineExecutorShot>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1b8.Shot.field0_0x0);
    }
    local_390.EvaluatedConfig.field0_0x0.DebugPtr = local_1b8.EvaluatedConfig.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1b8.EvaluatedConfig.field0_0x0.DebugPtr !=
        (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1b8.EvaluatedConfig.field0_0x0);
    }
    local_390.FrameNumberOffset = local_1b8.FrameNumberOffset;
    local_390.DefaultFrameRate = local_1b8.DefaultFrameRate;
    iVar11 = UMovieGraphBlueprintLibrary::ResolveVersionNumber(&local_390,true);
    uVar13 = local_3a0._8_8_ & 0xffffffff;
    if (iVar10 < iVar11) {
      iVar10 = iVar11;
    }
    FVar15.Data = FVar15.Data + 8;
  }
  if ((FName *)local_3a0.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_3a0.AllocatorInstance.Data);
  }
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_1b8);
  return iVar10;
}

// SetPreviewWidgetVisibleImpl @ 14dce31c0

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
UMovieGraphPipeline::SetPreviewWidgetVisibleImpl(UMovieGraphPipeline *this,bool param_1)

{
  UMovieGraphRenderPreviewWidget *pUVar1;
  
  pUVar1 = (this->PreviewWidget).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieGraphRenderPreviewWidget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dce31d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,!param_1);
    return;
  }
  return;
}

// SetSoloShot @ 14dce31e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::SetSoloShot
          (UMovieGraphPipeline *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMoviePipelineExecutorJob *pUVar3;
  UMovieGraphDataSourceBase *pUVar4;
  UMovieGraphTimeStepBase *pUVar5;
  undefined1 uVar6;
  UMovieGraphGlobalOutputSettingNode *pUVar7;
  UMovieGraphWarmUpSettingNode *pUVar8;
  FScriptContainerElement *pFVar9;
  UMovieGraphEvaluatedConfig *local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  wchar_t *in_stack_ffffffffffffff28;
  undefined1 local_b8 [144];
  
  pUVar3 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
  pFVar9 = (pUVar3->ShotInfo).AllocatorInstance.Data;
  iVar2 = (pUVar3->ShotInfo).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pUVar3->ShotInfo).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar9 == pFVar1) break;
    pUVar4 = (this->GraphDataSourceInstance).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar4 + 0x308))(pUVar4,pFVar9);
    pUVar4 = (this->GraphDataSourceInstance).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar4 + 0x318))(pUVar4,pFVar9);
    pFVar9 = pFVar9 + 8;
  }
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    in_stack_ffffffffffffff28 = L"";
    if ((((param_1->field0_0x0).DebugPtr)->OuterName).Data.ArrayNum != 0) {
      in_stack_ffffffffffffff28 =
           (wchar_t *)(((param_1->field0_0x0).DebugPtr)->OuterName).Data.AllocatorInstance.Data;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  pUVar4 = (this->GraphDataSourceInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar4 + 800))(pUVar4,param_1);
  pUVar5 = (this->GraphTimeStepInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5,local_b8 + 0x10);
  local_res8 = (UMovieGraphEvaluatedConfig *)local_b8._80_8_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UMovieGraphEvaluatedConfig *)local_b8._80_8_ != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b8._80_8_);
  }
  pUVar7 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     (local_res8,UMovieGraphNode::GlobalsPinName,true,false);
  pUVar4 = (this->GraphDataSourceInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar4 + 0x2b8))(pUVar4,local_res18);
  UMovieGraphBlueprintLibrary::GetEffectiveFrameRate
            ((UMovieGraphGlobalOutputSettingNode *)local_b8,(FFrameRate *)pUVar7);
  pUVar4 = (this->GraphDataSourceInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar4 + 0x2b0))(pUVar4,local_res20);
  pUVar8 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphWarmUpSettingNode>
                     (local_res8,UMovieGraphNode::GlobalsPinName,true,false);
  pUVar5 = (this->GraphTimeStepInstance).field0_0x0.DebugPtr;
  uVar6 = (**(code **)(*(longlong *)pUVar5 + 0x2d0))(pUVar5,&local_res8);
  (**(code **)(this->_padding_ + 0x398))
            (this,param_1,pUVar7->HandleFrameCount,uVar6,
             (ulonglong)in_stack_ffffffffffffff28 & 0xffffffffffffff00,local_b8,local_res20,
             pUVar8->NumWarmUpFrames);
  return;
}

// SetupShot @ 14dce4760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::SetupShot
          (UMovieGraphPipeline *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  int *piVar1;
  int iVar2;
  UMovieGraphTimeStepBase *pUVar3;
  FMovieGraphCVarManager *pFVar4;
  UMoviePipelineExecutorShot *pUVar5;
  UMovieGraphRendererBase *pUVar6;
  code *pcVar7;
  bool bVar8;
  UMovieGraphGlobalGameOverridesNode *this_00;
  UWorld *pUVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_b8 [64];
  UMovieGraphEvaluatedConfig *local_78;
  
  (**(code **)(this->_padding_ + 0x380))();
  (**(code **)(this->_padding_ + 0x390))(this,param_1);
  pUVar3 = (this->GraphTimeStepInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,local_b8);
  this_00 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalGameOverridesNode>
                      (local_78,UMovieGraphNode::GlobalsPinName,false,true);
  if (this_00 != (UMovieGraphGlobalGameOverridesNode *)0x0) {
    pUVar9 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    UMovieGraphGlobalGameOverridesNode::ApplySettings(this_00,true,pUVar9);
  }
  if (((this->CVarManager).Object == (FMovieGraphCVarManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (this->CVarManager).Object;
  pUVar9 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pFVar4->WorldContext = pUVar9;
  if (((this->CVarManager).Object == (FMovieGraphCVarManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UE::MovieGraph::Private::FMovieGraphCVarManager::AddEvaluatedGraph
            ((this->CVarManager).Object,local_78);
  if (((this->CVarManager).Object == (FMovieGraphCVarManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar5 = (param_1->field0_0x0).DebugPtr;
  pFVar4 = (this->CVarManager).Object;
  if (pUVar5 != (UMoviePipelineExecutorShot *)0x0) {
    pUVar10 = Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
    pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar5,pUVar10);
    if (pUVar11 != (UObject *)0x0) {
      iVar2 = *(int *)&pUVar11[5].field_0x18;
      piVar12 = *(int **)&pUVar11[5].field_0x10;
      piVar1 = piVar12 + (longlong)iVar2 * 6;
      while( true ) {
        if (*(int *)&pUVar11[5].field_0x18 != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FMoviePipelineConsoleVariableEntry_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (piVar12 == piVar1) break;
        if (*(char *)(piVar12 + 5) != '\0') {
          UE::MovieGraph::Private::FMovieGraphCVarManager::AddCVar
                    (pFVar4,(FString *)piVar12,
                     *(float *)&(((FString *)(piVar12 + 4))->Data).AllocatorInstance.Data);
        }
        piVar12 = piVar12 + 6;
      }
    }
    pUVar5 = (param_1->field0_0x0).DebugPtr;
    iVar2 = (pUVar5->ConsoleVariableOverrides).ArrayNum;
    pFVar13 = (pUVar5->ConsoleVariableOverrides).AllocatorInstance.Data;
    pFVar14 = pFVar13 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((pUVar5->ConsoleVariableOverrides).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FMoviePipelineConsoleVariableEntry,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar14) break;
      if (pFVar13[0x14] != (FScriptContainerElement)0x0) {
        UE::MovieGraph::Private::FMovieGraphCVarManager::AddCVar
                  (pFVar4,(FString *)pFVar13,*(float *)&pFVar13[0x10].field_0x0);
      }
      pFVar13 = pFVar13 + 0x18;
    }
  }
  if (((this->CVarManager).Object == (FMovieGraphCVarManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UE::MovieGraph::Private::FMovieGraphCVarManager::ApplyAllCVars((this->CVarManager).Object);
  if (((this->CVarManager).Object == (FMovieGraphCVarManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (this->CVarManager).Object;
  iVar2 = (pFVar4->StartConsoleCommands).ArrayNum;
  pFVar14 = (pFVar4->StartConsoleCommands).AllocatorInstance.Data;
  pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((pFVar4->StartConsoleCommands).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar14 == pFVar13) break;
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    UKismetSystemLibrary::ExecuteConsoleCommand
              ((UObject *)pFVar4->WorldContext,(FString *)pFVar14,(APlayerController *)0x0);
    pFVar14 = pFVar14 + 0x10;
  }
  pUVar6 = (this->GraphRendererInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar6 + 0x2c0))(pUVar6,(param_1->field0_0x0).DebugPtr);
  FMoviePipelineTelemetry::SendBeginShotRenderTelemetry((param_1->field0_0x0).DebugPtr,local_78);
  return;
}

// ShutdownImpl @ 14dce4b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::ShutdownImpl(UMovieGraphPipeline *this,bool param_1)

{
  undefined1 *puVar1;
  EMovieRenderPipelineState EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TMap<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
  *this_00;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPipeline.cpp"
                         ,0x4dc,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  this->bShutdownRequested = (FThreadSafeBool)0x1;
  UNLOCK();
  if (param_1) {
    LOCK();
    this->bShutdownSetErrorFlag = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  EVar2 = this->PipelineState;
  if ((EVar2 != Uninitialized) && (EVar2 != Finished)) {
    if (EVar2 == ProducingFrames) {
      (**(code **)(this->_padding_ + 0x338))(this);
    }
    if (this->PipelineState == Finalize) {
      (**(code **)(this->_padding_ + 0x330))(this);
    }
    if (this->PipelineState == Export) {
      (**(code **)(this->_padding_ + 0x328))(this);
    }
    this_00 = &this->DuplicatedGraphs;
    bVar5 = 1 < *(int *)&(this->DuplicatedGraphs).field_0x48;
    if (!bVar5) {
      TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(this->DuplicatedGraphs).field_0xc;
    *(undefined4 *)&(this->DuplicatedGraphs).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->DuplicatedGraphs).field_0x34 = 0;
    *(undefined4 *)&(this->DuplicatedGraphs).field_0x30 = 0xffffffff;
    iVar3 = *(int *)&(this->DuplicatedGraphs).field_0x2c;
    *(undefined4 *)&(this->DuplicatedGraphs).field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(this->DuplicatedGraphs).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DuplicatedGraphs).field_0x10,0);
    }
    if (bVar5) {
      *(undefined4 *)&(this->DuplicatedGraphs).field_0x48 = 1;
      TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  return;
}

// StartUnrealInsightsCapture @ 14dce5a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::StartUnrealInsightsCapture
          (UMovieGraphPipeline *this,UMovieGraphEvaluatedConfig *param_1)

{
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 TVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  UMovieGraphDebugSettingNode *pUVar6;
  UMovieGraphGlobalOutputSettingNode *pUVar7;
  FString *pFVar8;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_4e8 [32];
  FString local_4b8;
  undefined1 local_4a8 [4];
  undefined1 local_4a4 [12];
  FString local_498;
  FMovieGraphRenderDataIdentifier local_488;
  FMovieGraphTraversalContext local_438;
  FMovieGraphTimeStepData local_350;
  FString *local_2d0;
  FString *local_2c8;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  undefined1 local_288 [32];
  void *local_268;
  undefined4 local_260;
  uint local_25c;
  undefined4 local_258;
  undefined4 local_254;
  ForElementType<FSetElementId> local_248;
  int local_240;
  undefined1 local_238 [32];
  void *local_218;
  undefined4 local_210;
  uint local_20c;
  undefined4 local_208;
  undefined4 local_204;
  void *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [32];
  void *local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  void *local_1a8;
  undefined4 local_1a0;
  FMovieGraphFilenameResolveParams local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  if ((param_1 == (UMovieGraphEvaluatedConfig *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EvaluatedConfig",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPipeline.cpp"
                         ,0x314,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar6 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphDebugSettingNode>
                     (param_1,UMovieGraphNode::GlobalsPinName,false,true);
  if ((pUVar6 != (UMovieGraphDebugSettingNode *)0x0) ||
     (bVar4 = `UMovieGraphPipeline::StartUnrealInsightsCapture'::__l10::<lambda_1>::operator()
                        (local_4a8), bVar4)) {
    pUVar7 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                       (param_1,UMovieGraphNode::GlobalsPinName,true,true);
    ::operator/(&local_498,&(pUVar7->OutputDirectory).Path,
                &pUVar6->UnrealInsightsTraceFileNameFormat);
    bVar4 = pUVar7->bOverwriteExistingOutput;
    local_25c = 0x80;
    local_288._0_8_ = (FScriptContainerElement *)0x0;
    local_288._8_8_ = 0;
    local_268 = (void *)0x0;
    local_260 = 0;
    local_254 = 0;
    local_248 = (ForElementType<FSetElementId>)0x0;
    local_240 = 0;
    local_258 = 0xffffffff;
    ::FString::FString(&local_2b0,L"utrace");
    ::FString::FString(&local_2c0,L"ext");
    local_2d0 = &local_2c0;
    local_2c8 = &local_2b0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_288,(TPairInitializer<FString_&&,FString_&&> *)local_4a4,(bool *)&local_2d0)
    ;
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    TVar1 = (TObjectPtr<UMoviePipelineExecutorJob>_u_0)
            (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
    local_488.RootBranchName = UMovieGraphNode::GlobalsPinName;
    local_438.ShotCount = (this->ActiveShotList).ArrayNum;
    local_488.LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.LayerName.Data.ArrayNum = 0;
    local_488.LayerName.Data.ArrayMax = 0;
    local_488.RendererName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.RendererName.Data.ArrayNum = 0;
    local_488.RendererName.Data.ArrayMax = 0;
    local_488.SubResourceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.SubResourceName.Data.ArrayNum = 0;
    local_488.SubResourceName.Data.ArrayMax = 0;
    local_488.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.CameraName.Data.ArrayNum = 0;
    local_488.CameraName.Data.ArrayMax = 0;
    local_438.RenderDataIdentifier.RootBranchName.ComparisonIndex.Value = 0;
    local_438.RenderDataIdentifier.RootBranchName.Number = 0;
    local_438.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_438.RenderDataIdentifier.LayerName.Data.ArrayNum = 0;
    local_438.RenderDataIdentifier.LayerName.Data.ArrayMax = 0;
    local_438.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_438.RenderDataIdentifier.RendererName.Data.ArrayNum = 0;
    local_438.RenderDataIdentifier.RendererName.Data.ArrayMax = 0;
    local_438.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_438.RenderDataIdentifier.SubResourceName.Data.ArrayNum = 0;
    local_438.RenderDataIdentifier.SubResourceName.Data.ArrayMax = 0;
    local_438.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_438.RenderDataIdentifier.CameraName.Data.ArrayNum = 0;
    local_438.RenderDataIdentifier.CameraName.Data.ArrayMax = 0;
    local_438.Time.OutputFrameNumber = 0;
    local_438.Time.ShotOutputFrameNumber = 0;
    local_438.Time.RenderedFrameNumber = 0;
    local_438.Time.FrameDeltaTime = 0.0;
    local_438.Time.WorldTimeDilation = 0.0;
    local_438.Time.bHasRelativeTimeBeenUsed = false;
    local_438.Time.WorldSeconds = 0.0;
    local_438.Time.MotionBlurFraction = 0.0;
    local_438.Time.FrameRate.Numerator = 0;
    local_438.Time.FrameRate.Denominator = 0;
    local_438.Time.TemporalSampleIndex = 0;
    local_438.Time.TemporalSampleCount = 0;
    local_438.Time.SpatialSampleIndex = 0;
    local_438.Time.SpatialSampleCount = 0;
    local_438.Time.bIsFirstTemporalSampleForFrame = false;
    local_438.Time.bIsLastTemporalSampleForFrame = false;
    local_438.Time.bDiscardOutput = false;
    local_438.Time.bRequiresAccumulator = false;
    local_438.Time.EvaluatedConfig.field0_0x0.DebugPtr =
         (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0;
    local_438.Time.RootTimeCode.Hours = 0;
    local_438.Time.RootTimeCode.Minutes = 0;
    local_438.Time.RootTimeCode.Seconds = 0;
    local_438.Time.RootTimeCode.Frames = 0;
    local_438.Time.RootTimeCode.Subframe = 0.0;
    local_438.Time.RootTimeCode.bDropFrameFormat = false;
    local_438.Time.RootFrameNumber.Value = 0;
    local_438.Time.ShotTimeCode.Hours = 0;
    local_438.Time.ShotTimeCode.Minutes = 0;
    local_438.Time.ShotTimeCode.Seconds = 0;
    local_438.Time.ShotTimeCode.Frames = 0;
    local_438.Time.ShotTimeCode.Subframe = 0.0;
    local_438.Time.ShotTimeCode.bDropFrameFormat = false;
    local_438.Time.ShotFrameNumber.Value = 0;
    local_438.ShotIndex = -1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    local_438.Shot.field0_0x0.DebugPtr = (TObjectPtr<UMoviePipelineExecutorShot>_u_0)0x0;
    local_438.Job.field0_0x0 = TVar1;
    local_438.RootGraph.field0_0x0 =
         (TObjectPtr<UMovieGraphConfig>_u_0)
         TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&(TVar1.DebugPtr)->GraphPreset);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_438.RootGraph.field0_0x0.DebugPtr != (TObjectPtr<UMovieGraphConfig>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_438.RootGraph.field0_0x0);
    }
    local_350.OutputFrameNumber = 0;
    local_350.ShotOutputFrameNumber = 0;
    local_350.RenderedFrameNumber = 0;
    local_350.FrameDeltaTime = 0.0;
    local_350.FrameRate.Numerator = 0;
    local_350.FrameRate.Denominator = 0;
    local_350.TemporalSampleIndex = 0;
    local_350.TemporalSampleCount = 0;
    local_350.WorldTimeDilation = 0.0;
    local_350.RootTimeCode.Hours = 0;
    local_350.RootTimeCode.Minutes = 0;
    local_350.RootTimeCode.Seconds = 0;
    local_350.RootTimeCode.Frames = 0;
    local_350.bHasRelativeTimeBeenUsed = false;
    local_350.RootFrameNumber.Value = 0;
    local_350.ShotTimeCode.Hours = 0;
    local_350.ShotTimeCode.Minutes = 0;
    local_350.ShotTimeCode.Seconds = 0;
    local_350.WorldSeconds = 0.0;
    local_350.MotionBlurFraction = 0.0;
    local_350.SpatialSampleIndex = 0;
    local_350.SpatialSampleCount = 0;
    local_350.bIsFirstTemporalSampleForFrame = false;
    local_350.bIsLastTemporalSampleForFrame = false;
    local_350.bDiscardOutput = false;
    local_350.bRequiresAccumulator = false;
    local_350.EvaluatedConfig.field0_0x0.DebugPtr = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0;
    local_350.RootTimeCode.Subframe = 0.0;
    local_350.RootTimeCode.bDropFrameFormat = false;
    local_350.ShotTimeCode.Frames = 0;
    local_350.ShotTimeCode.Subframe = 0.0;
    local_350.ShotTimeCode.bDropFrameFormat = false;
    local_350.ShotFrameNumber.Value = 0;
    FMovieGraphTimeStepData::operator=(&local_438.Time,&local_350);
    local_4a4._4_8_ = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UMovieGraphEvaluatedConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FMovieGraphFilenameResolveParams::MakeResolveParams
              (&local_198,&local_488,this,(TObjectPtr<UMovieGraphEvaluatedConfig> *)(local_4a4 + 4),
               &local_438,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_288);
    if (local_438.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_438.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
    }
    if (local_438.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
    }
    if (local_438.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
    }
    local_238._0_8_ = (FScriptContainerElement *)0x0;
    local_238._8_8_ = 0;
    local_218 = (void *)0x0;
    local_210 = 0;
    local_20c = 0x80;
    local_208 = 0xffffffff;
    local_204 = 0;
    local_1f8 = (void *)0x0;
    local_1f0 = 0;
    local_1e8._0_8_ = (FScriptContainerElement *)0x0;
    local_1e8._8_8_ = 0;
    local_1c8 = (void *)0x0;
    local_1c0 = 0;
    local_1bc = 0x80;
    local_1b8 = 0xffffffff;
    local_1b4 = 0;
    local_1a8 = (void *)0x0;
    local_1a0 = 0;
    UE::MoviePipeline::ValidateOutputFormatString(&local_498,false,false,false);
    UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
              (&local_4b8,&local_498,&local_198,(FMovieGraphResolveArgs *)local_238);
    bVar5 = FPaths::IsRelative(&local_4b8);
    if (bVar5) {
      pFVar8 = FPaths::ConvertRelativePathToFull(&local_2a0,&local_4b8);
      if (&local_4b8 != pFVar8) {
        if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
        }
        local_4b8.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4b8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_4b8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
      }
    }
    if (bVar4 != false) {
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_4b8.Data.ArrayNum != 0) {
        FVar10.Data = local_4b8.Data.AllocatorInstance.Data;
      }
      bVar4 = UE::MoviePipeline::CanWriteToFile((wchar_t *)FVar10.Data,false);
      if (!bVar4) {
        this_00 = FPlatformFileManager::Get();
        pIVar9 = FPlatformFileManager::GetPlatformFile(this_00);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_4b8.Data.ArrayNum != 0) {
          FVar10.Data = local_4b8.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar9 + 0x88))(pIVar9,FVar10.Data);
      }
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_4b8.Data.ArrayNum != 0) {
      FVar10.Data = local_4b8.Data.AllocatorInstance.Data;
    }
    bVar4 = FTraceAuxiliary::Start
                      (File,(wchar_t *)FVar10.Data,L"default",(FOptions *)0x0,
                       (FLogCategoryBase *)&LogCore);
    if (bVar4) {
      this->bDidStartInsightsCapture = true;
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
    }
    else if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
    local_1a0 = 0;
    if (local_1a8 != (void *)0x0) {
      FMemory::Free(local_1a8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_1e8,0,local_1e8._8_4_);
    iVar3 = SUB84(local_1e8._8_8_,4);
    local_1e8._8_8_ = local_1e8._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_1e8,0,(int *)(local_1e8 + 0xc));
    }
    local_1b8 = 0xffffffff;
    local_1b4 = 0;
    local_1c0 = 0;
    if (0x80 < local_1bc) {
      local_1bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10),0);
    }
    if (local_1c8 != (void *)0x0) {
      FMemory::Free(local_1c8);
    }
    if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1e8._0_8_);
    }
    local_1f0 = 0;
    if (local_1f8 != (void *)0x0) {
      FMemory::Free(local_1f8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_238,0,local_238._8_4_);
    iVar3 = SUB84(local_238._8_8_,4);
    local_238._8_8_ = local_238._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_238,0,(int *)(local_238 + 0xc));
    }
    local_208 = 0xffffffff;
    local_204 = 0;
    local_210 = 0;
    if (0x80 < local_20c) {
      local_20c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10),0);
    }
    if (local_218 != (void *)0x0) {
      FMemory::Free(local_218);
    }
    if ((FScriptContainerElement *)local_238._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_238._0_8_);
    }
    FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_198);
    if (local_488.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_488.SubResourceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.SubResourceName.Data.AllocatorInstance.Data);
    }
    if (local_488.RendererName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.RendererName.Data.AllocatorInstance.Data);
    }
    if (local_488.LayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.LayerName.Data.AllocatorInstance.Data);
    }
    local_240 = 0;
    if (local_248 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_248);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_288,0,local_288._8_4_);
    iVar3 = SUB84(local_288._8_8_,4);
    local_288._8_8_ = local_288._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_288,0,(int *)(local_288 + 0xc));
    }
    local_254 = 0;
    local_260 = 0;
    local_258 = 0xffffffff;
    if (0x80 < local_25c) {
      local_25c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10),0);
    }
    if (local_268 != (void *)0x0) {
      FMemory::Free(local_268);
    }
    if ((FScriptContainerElement *)local_288._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_288._0_8_);
    }
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUMovieGraphPipeline @ 14dce6690

void __cdecl UMovieGraphPipeline::StaticRegisterNativesUMovieGraphPipeline(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphPipeline_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopUnrealInsightsCapture @ 14dce6b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::StopUnrealInsightsCapture(UMovieGraphPipeline *this)

{
  FTraceAuxiliaryImpl::Stop(&GTraceAuxiliary);
  return;
}

// TeardownShot @ 14dce7320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::TeardownShot
          (UMovieGraphPipeline *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  ulonglong uVar1;
  UMovieGraphRendererBase *pUVar2;
  UMoviePipelineExecutorJob *pUVar3;
  UMovieGraphDataSourceBase *pUVar4;
  UMovieGraphTimeStepBase *pUVar5;
  longlong *plVar6;
  FMovieGraphCVarManager *pFVar7;
  UObject *pUVar8;
  code *pcVar9;
  float fVar10;
  FName FVar11;
  char cVar12;
  UMovieGraphEvaluatedConfig *this_00;
  bool bVar13;
  byte bVar14;
  UClass *pUVar15;
  UMovieGraphGlobalGameOverridesNode *this_01;
  UWorld *pUVar16;
  longlong lVar17;
  TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
  *this_02;
  int iVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  FMovieGraphRenderOutputData *pFVar23;
  byte bVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8;
  char local_1f7;
  undefined1 local_1f6;
  undefined1 local_1f5;
  undefined1 local_1f4;
  undefined1 local_1f3 [3];
  ForAnyElementType local_1f0;
  int local_1e8;
  int local_1e4;
  UMovieGraphEvaluatedConfig *local_1e0;
  TArray<IMovieGraphPostRenderNode_*,TSizedDefaultAllocator<32>_> local_1d8;
  UMovieGraphPipeline *local_1c8;
  UMoviePipelineExecutorJob *local_1c0;
  undefined1 local_1b8;
  FMoviePipelineShotOutputData *local_1b0;
  undefined8 local_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  longlong *local_190;
  int iStack_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined4 uStack_178;
  uint uStack_174;
  int local_170;
  uint uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  int local_15c;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined1 local_128 [64];
  UMovieGraphEvaluatedConfig *local_e8;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (this->bIsTearingDownShot == false) {
    this->bIsTearingDownShot = true;
    (**(code **)(((this->GraphAudioRendererInstance).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
    pUVar2 = (this->GraphRendererInstance).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,(param_1->field0_0x0).DebugPtr);
    pUVar3 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
    pFVar20 = (pUVar3->ShotInfo).AllocatorInstance.Data;
    iVar18 = (pUVar3->ShotInfo).ArrayNum;
    pFVar22 = pFVar20 + (longlong)iVar18 * 8;
    while( true ) {
      if ((pUVar3->ShotInfo).ArrayNum != iVar18) {
        local_1f8 = 0;
        `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1f8);
      }
      if (pFVar20 == pFVar22) break;
      pUVar4 = (this->GraphDataSourceInstance).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar4 + 0x310))(pUVar4,pFVar20);
      pFVar20 = pFVar20 + 8;
    }
    pUVar5 = (this->GraphTimeStepInstance).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5,local_128);
    local_1e0 = local_e8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_e8 != (UMovieGraphEvaluatedConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e8);
    }
    (**(code **)(this->_padding_ + 0x310))(this);
    local_1f7 = (**(code **)(this->_padding_ + 0x2e0))(this);
    (**(code **)(this->_padding_ + 0x340))(this,local_a8);
    uVar25 = local_80;
    iStack_188 = 0;
    local_170 = 0;
    uStack_184 = 1;
    uStack_174 = 0;
    if (local_80 != 0) {
      puVar26 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar26 = local_88;
      }
      uVar27 = *puVar26;
      while (uVar27 == 0) {
        lVar17 = (longlong)iStack_188;
        local_170 = local_170 + 0x20;
        iStack_188 = iStack_188 + 1;
        uStack_174 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_188)
        goto LAB_14dce74d0;
        uVar27 = puVar26[lVar17 + 1];
      }
      uStack_184 = -uVar27 & uVar27;
      uVar1 = (ulonglong)uStack_184 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_160 = (int)lVar17;
      uStack_174 = local_160 + -1 + local_170;
      if ((int)local_80 < (int)uStack_174) {
        uStack_174 = local_80;
      }
    }
LAB_14dce74d0:
    local_190 = (longlong *)local_a8;
    local_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    uVar27 = local_80 & 0xffffffe0;
    iStack_168 = local_a8._8_4_ - local_74;
    uStack_178 = 0xffffffff;
    TStack_150.CurrentBitIndex = uStack_174;
    TStack_150.UnvisitedBitMask = 0xffffffff;
    TStack_150._padding_ = CONCAT44(uStack_184,iStack_188);
    iVar18 = (int)local_80 >> 5;
    TStack_150._28_4_ = uStack_174;
    TStack_150.BaseBitIndex = local_170;
    uStack_130 = CONCAT44(uStack_164,iStack_168);
    bVar24 = (byte)local_80;
    uStack_16c = uStack_174;
    local_158 = local_190;
    TStack_150.Array = local_180;
    if (((int)local_80 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    cVar12 = local_1f7;
    if (uVar25 != local_80) {
      puVar26 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar26 = local_88;
      }
      uVar25 = -1 << (bVar24 & 0x1f) & puVar26[iVar18];
      while (uVar25 == 0) {
        lVar17 = (longlong)iVar18;
        uVar27 = uVar27 + 0x20;
        iVar18 = iVar18 + 1;
        uVar25 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14dce75e1;
        uVar25 = puVar26[lVar17 + 1];
      }
      uVar1 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_15c = (int)lVar17;
      uVar25 = local_15c + -1 + uVar27;
      if ((int)local_80 < (int)uVar25) {
        uVar25 = local_80;
      }
    }
LAB_14dce75e1:
    while( true ) {
      plVar6 = local_158;
      if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
        local_1f6 = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f6);
      }
      if (((TStack_150.CurrentBitIndex == uVar25) &&
          (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
         (plVar6 == (longlong *)local_a8)) break;
      plVar6 = *(longlong **)(*plVar6 + (longlong)TStack_150.CurrentBitIndex * 0x10);
      (**(code **)(*plVar6 + 0x3a0))(plVar6,this,(param_1->field0_0x0).DebugPtr,&local_1e0);
      TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
    (**(code **)(this->_padding_ + 0x318))(this,cVar12);
    this_00 = local_1e0;
    FVar11 = UMovieGraphNode::GlobalsPinName;
    pUVar15 = UMovieGraphPostRenderNode::StaticClass();
    UMovieGraphEvaluatedConfig::GetSettingsImplementing<IMovieGraphPostRenderNode>
              (this_00,&local_1d8,pUVar15,FVar11);
    iVar18 = local_1d8.ArrayNum;
    pFVar22 = local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayNum * 8;
    FVar21.Data = local_1d8.AllocatorInstance.Data;
    while( true ) {
      if (local_1d8.ArrayNum != iVar18) {
        local_1f5 = 0;
        `TCheckedPointerIterator<IMovieGraphPostRenderNode_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1f5);
      }
      fVar10 = __real_3f800000;
      if (FVar21.Data == pFVar22) break;
      (**(code **)(**(longlong **)FVar21.Data + 0x18))(*(longlong **)FVar21.Data,this);
      FVar21.Data = FVar21.Data + 8;
    }
    while( true ) {
      iVar18 = local_1d8.ArrayNum;
      bVar24 = 1;
      pFVar22 = local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayNum * 8;
      FVar21.Data = local_1d8.AllocatorInstance.Data;
      while( true ) {
        if (local_1d8.ArrayNum != iVar18) {
          local_1f4 = 0;
          `TCheckedPointerIterator<IMovieGraphPostRenderNode_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_1f4);
        }
        if (FVar21.Data == pFVar22) break;
        bVar14 = (**(code **)(**(longlong **)FVar21.Data + 0x20))();
        bVar24 = bVar24 & bVar14;
        FVar21.Data = FVar21.Data + 8;
      }
      if (bVar24 != 0) break;
      FWindowsPlatformProcess::Sleep(fVar10);
    }
    if (((this->CVarManager).Object == (FMovieGraphCVarManager *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    UE::MovieGraph::Private::FMovieGraphCVarManager::RevertAllCVars((this->CVarManager).Object);
    if (((this->CVarManager).Object == (FMovieGraphCVarManager *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar7 = (this->CVarManager).Object;
    iVar18 = (pFVar7->EndConsoleCommands).ArrayNum;
    pFVar22 = (pFVar7->EndConsoleCommands).AllocatorInstance.Data;
    pFVar20 = pFVar22 + (longlong)iVar18 * 0x10;
    while( true ) {
      if ((pFVar7->EndConsoleCommands).ArrayNum != iVar18) {
        local_1f3[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1f3);
      }
      if (pFVar22 == pFVar20) break;
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      UKismetSystemLibrary::ExecuteConsoleCommand
                ((UObject *)pFVar7->WorldContext,(FString *)pFVar22,(APlayerController *)0x0);
      pFVar22 = pFVar22 + 0x10;
    }
    UE::MoviePipeline::RestoreSkeletalMeshClothSubSteps(&this->ClothSimCache);
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&this->ClothSimCache);
    this_01 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalGameOverridesNode>
                        (local_1e0,UMovieGraphNode::GlobalsPinName,false,true);
    if (this_01 != (UMovieGraphGlobalGameOverridesNode *)0x0) {
      pUVar16 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      UMovieGraphGlobalGameOverridesNode::ApplySettings(this_01,false,pUVar16);
    }
    FMoviePipelineTelemetry::SendEndShotRenderTelemetry
              (true,this->bShutdownSetErrorFlag == (FThreadSafeBool)0x0,
               this->bShutdownRequested != (FThreadSafeBool)0x0);
    if (cVar12 != '\0') {
      (**(code **)(this->_padding_ + 0x310))(this);
      (**(code **)(this->_padding_ + 0x318))(this,cVar12);
      local_1b0 = (FMoviePipelineShotOutputData *)0x0;
      local_1a8 = 0;
      local_1a0.Data = (FScriptContainerElement *)0x0;
      local_198 = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      pUVar3 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
      local_1c8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMoviePipelineExecutorJob *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      local_1b8 = this->bShutdownSetErrorFlag == (FThreadSafeBool)0x0;
      iVar18 = this->CurrentShotIndex;
      local_1f0.Data = (FScriptContainerElement *)0x0;
      local_1e8 = 0;
      local_1e4 = 0;
      local_1c0 = pUVar3;
      if (iVar18 < (this->GeneratedOutputData).ArrayNum) {
        if ((iVar18 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar23 = (FMovieGraphRenderOutputData *)
                  ((this->GeneratedOutputData).AllocatorInstance.Data + (longlong)iVar18 * 0x58);
        if (((local_1f0.Data <= pFVar23) &&
            (pFVar23 < (FMovieGraphRenderOutputData *)(local_1f0.Data + (longlong)local_1e4 * 0x58))
            ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (local_1e8 == local_1e4) {
          local_1e8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x858,&local_1f0,&local_1e4);
        }
        *(FWeakObjectPtr *)&local_1f0.Data[(longlong)local_1e8 * 0x58].field_0x0 =
             (pFVar23->Shot).WeakPtr;
        this_02 = (TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                   *)(local_1f0.Data + (longlong)local_1e8 * 0x58 + 8);
        *(undefined8 *)&this_02->Elements = 0;
        *(undefined8 *)&(this_02->Elements).field_0x8 = 0;
        *(undefined8 *)&(this_02->Elements).field_0x20 = 0;
        *(undefined4 *)&(this_02->Elements).field_0x28 = 0;
        *(undefined4 *)&(this_02->Elements).field_0x2c = 0x80;
        *(undefined4 *)&(this_02->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this_02->Elements).field_0x34 = 0;
        (this_02->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
        this_02->HashSize = 0;
        local_1e8 = local_1e8 + 1;
        TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
        ::operator=(this_02,(TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                             *)&pFVar23->RenderLayerData);
      }
      DestructItems<FMovieGraphRenderOutputData,int>
                ((FMovieGraphRenderOutputData *)local_1a0.Data,(int)local_198);
      iVar18 = local_1e8;
      FVar21.Data = local_1f0.Data;
      local_198 = CONCAT44(local_198._4_4_,local_1e8);
      if ((local_1e8 != 0) || (local_198._4_4_ != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,local_1e8,local_198._4_4_,&local_1a0,local_1e8,
                   (int *)((longlong)&local_198 + 4));
        ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
                  (local_1a0.Data,(FMovieGraphRenderOutputData *)FVar21.Data,iVar18);
      }
      (**(code **)(this->_padding_ + 0x388))(this,&local_1c8);
      DestructItems<FMovieGraphRenderOutputData,int>
                ((FMovieGraphRenderOutputData *)local_1f0.Data,local_1e8);
      if ((FMovieGraphRenderOutputData *)local_1f0.Data != (FMovieGraphRenderOutputData *)0x0) {
        FMemory::Free(local_1f0.Data);
      }
      DestructItems<FMovieGraphRenderOutputData,int>
                ((FMovieGraphRenderOutputData *)local_1a0.Data,(int)local_198);
      if ((FMovieGraphRenderOutputData *)local_1a0.Data != (FMovieGraphRenderOutputData *)0x0) {
        FMemory::Free(local_1a0.Data);
      }
      DestructItems<FMoviePipelineShotOutputData,int>(local_1b0,(int)local_1a8);
      if (local_1b0 != (FMoviePipelineShotOutputData *)0x0) {
        FMemory::Free(local_1b0);
      }
    }
    if ((this->ActiveShotList).ArrayNum + -1 <= this->CurrentShotIndex) {
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      (**(code **)(this->_padding_ + 0x338))(this,2);
    }
    iVar18 = (this->GraphTimeStepInstances).ArrayNum;
    iVar19 = this->CurrentShotIndex + 1;
    this->CurrentShotIndex = iVar19;
    if (iVar19 < iVar18) {
      if ((iVar19 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar22 = (this->GraphTimeStepInstances).AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 = *(UObject **)(pFVar22 + (longlong)iVar19 * 8), pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      (this->PendingTimeStepInstance).field0_0x0 =
           *(TObjectPtr<UMovieGraphTimeStepBase>_u_0 *)(pFVar22 + (longlong)iVar19 * 8);
    }
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    this->bIsTearingDownShot = false;
  }
  return;
}

// TickFinalizeOutputContainers @ 14dce7c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UMovieGraphPipeline::TickFinalizeOutputContainers(UMovieGraphPipeline *this,bool param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  byte bVar13;
  uint uVar14;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  char local_1d7;
  undefined1 local_1d6 [6];
  ulonglong local_1d0;
  longlong *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  int local_194;
  int local_190;
  longlong *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  fVar4 = __real_3dcccccd;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1d0 = 1;
  local_1d7 = param_1;
LAB_14dce7cb4:
  uVar7 = (uint)local_1d0;
  bVar13 = 1;
  (**(code **)(this->_padding_ + 0x340))(this,local_e8);
  uVar11 = local_c0;
  iStack_1c0 = 0;
  local_1a8 = 0;
  uStack_1ac = 0;
  if (local_c0 != 0) {
    puVar12 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar12 = local_c8;
    }
    uVar14 = *puVar12;
    while (uVar14 == 0) {
      lVar8 = (longlong)iStack_1c0;
      local_1a8 = local_1a8 + 0x20;
      iStack_1c0 = iStack_1c0 + 1;
      uStack_1ac = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1c0)
      goto LAB_14dce7d42;
      uVar14 = puVar12[lVar8 + 1];
    }
    uVar7 = -uVar14 & uVar14;
    uVar9 = (ulonglong)uVar7 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_198 = (int)lVar8;
    uStack_1ac = local_1a8 + -1 + local_198;
    if ((int)local_c0 < (int)uStack_1ac) {
      uStack_1ac = local_c0;
    }
  }
LAB_14dce7d42:
  local_1c8 = (longlong *)local_e8;
  uVar14 = local_c0 & 0xffffffe0;
  uStack_1a4 = local_10c;
  local_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  iStack_1a0 = local_e8._8_4_ - local_b4;
  uStack_1b0 = 0xffffffff;
  TStack_180.CurrentBitIndex = uStack_1ac;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  TStack_180._padding_ = CONCAT44(uVar7,iStack_1c0);
  iVar10 = (int)local_c0 >> 5;
  TStack_180._28_4_ = local_10c;
  TStack_180.BaseBitIndex = local_1a8;
  uStack_160 = CONCAT44(uStack_19c,iStack_1a0);
  bVar6 = (byte)local_c0;
  uStack_1bc = uVar7;
  local_188 = local_1c8;
  TStack_180.Array = local_1b8;
  if (((int)local_c0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar11 != local_c0) {
    puVar12 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar12 = local_c8;
    }
    uVar11 = -1 << (bVar6 & 0x1f) & puVar12[iVar10];
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14dce7e60;
      uVar11 = puVar12[lVar8 + 1];
    }
    uVar9 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_194 = (int)lVar8;
    uVar11 = local_194 + -1 + uVar14;
    if ((int)local_c0 < (int)uVar11) {
      uVar11 = local_c0;
    }
  }
LAB_14dce7e60:
  while( true ) {
    plVar2 = local_188;
    if ((int)local_188[1] - *(int *)((longlong)local_188 + 0x34) != (int)uStack_160) {
      local_1d8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    if (((TStack_180.CurrentBitIndex == uVar11) &&
        (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar2 == (longlong *)local_e8)) break;
    bVar6 = (**(code **)(**(longlong **)(*plVar2 + (longlong)TStack_180.CurrentBitIndex * 0x10) +
                        0x3a8))();
    bVar13 = bVar13 & bVar6;
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  if (local_1d7 != '\0') {
    if (bVar13 != 0) goto LAB_14dce7f1a;
    FWindowsPlatformProcess::Sleep(fVar4);
    goto LAB_14dce7cb4;
  }
  if (bVar13 == 0) {
    return;
  }
LAB_14dce7f1a:
  (**(code **)(this->_padding_ + 0x340))(this,local_98);
  uVar11 = local_70;
  iStack_1c0 = 0;
  local_1a8 = 0;
  uVar9 = local_1d0;
  uStack_1ac = 0;
  if (local_70 != 0) {
    puVar12 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar12 = local_78;
    }
    uVar7 = *puVar12;
    while (uVar7 == 0) {
      lVar8 = (longlong)iStack_1c0;
      local_1a8 = local_1a8 + 0x20;
      iStack_1c0 = iStack_1c0 + 1;
      uStack_1ac = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1c0)
      goto LAB_14dce7fb7;
      uVar7 = puVar12[lVar8 + 1];
    }
    uVar9 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_190 = (int)lVar8;
    uStack_1ac = local_1a8 + -1 + local_190;
    if ((int)local_70 < (int)uStack_1ac) {
      uStack_1ac = local_70;
    }
  }
LAB_14dce7fb7:
  local_1c8 = (longlong *)local_98;
  uStack_1a4 = local_ec;
  local_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_1a0 = local_98._8_4_ - local_64;
  uVar14 = local_70 & 0xffffffe0;
  uStack_1b0 = 0xffffffff;
  TStack_150.CurrentBitIndex = uStack_1ac;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  uVar7 = -1 << ((byte)local_70 & 0x1f);
  uStack_1bc = (uint)uVar9;
  TStack_150._padding_ = CONCAT44(uStack_1bc,iStack_1c0);
  iVar10 = (int)local_70 >> 5;
  local_1d0 = CONCAT44(local_1d0._4_4_,uVar7);
  TStack_150._28_4_ = local_ec;
  TStack_150.BaseBitIndex = local_1a8;
  uStack_130 = CONCAT44(uStack_19c,iStack_1a0);
  local_158 = local_1c8;
  TStack_150.Array = local_1b8;
  if ((int)local_70 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = (uint)local_1d0;
  }
  if (uVar11 != local_70) {
    puVar12 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar12 = local_78;
    }
    uVar7 = uVar7 & puVar12[iVar10];
    while (uVar7 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14dce80e0;
      uVar7 = puVar12[lVar8 + 1];
    }
    uVar9 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar14;
    if ((int)local_70 < (int)uVar11) {
      uVar11 = local_70;
    }
  }
LAB_14dce80e0:
  while( true ) {
    plVar2 = local_158;
    if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d6);
    }
    if (((TStack_150.CurrentBitIndex == uVar11) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar2 == (longlong *)local_98)) break;
    plVar2 = *(longlong **)(*plVar2 + (longlong)TStack_150.CurrentBitIndex * 0x10);
    (**(code **)(*plVar2 + 0x390))(plVar2,this,&this->PostRenderEvaluatedGraph);
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphFileOutputNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  (**(code **)(this->_padding_ + 0x338))(this,3);
  return;
}

// TickPostFinalizeExport @ 14dce81c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::TickPostFinalizeExport(UMovieGraphPipeline *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphEvaluatedConfig *pUVar2;
  UObjectBaseUtility *this_00;
  code *pcVar3;
  float fVar4;
  UClass *pUVar5;
  FName FVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  FMovieGraphEvaluatedBranchConfig *this_01;
  UClass *pUVar10;
  int iVar11;
  ForAnyElementType FVar12;
  byte bVar13;
  undefined1 local_res8 [8];
  char local_res10;
  undefined1 local_res18 [8];
  FUObjectCppClassStaticFunctions local_res20;
  void *local_98;
  FName local_90;
  FName *local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> local_70 [3];
  
  local_res10 = param_1;
  if ((this->PipelineState != Export) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PipelineState == EMovieRenderPipelineState::Export",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphPipeline.cpp"
                         ,0x2c9,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f800000;
  if (5 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    fVar4 = __real_3f800000;
  }
  do {
    FVar6 = UMovieGraphNode::GlobalsPinName;
    pUVar2 = (this->PostRenderEvaluatedGraph).field0_0x0.DebugPtr;
    bVar13 = 1;
    if (Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton == (UClass *)0x0) {
      local_res20.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/MovieRenderPipelineCore",L"MovieGraphPostRenderNode",
                 &Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton,
                 UMovieGraphPostRenderNode::StaticRegisterNativesUMovieGraphPostRenderNode,0x28,8,
                 CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
                 InternalConstructor<UMovieGraphPostRenderNode>,
                 InternalVTableHelperCtorCaller<UMovieGraphPostRenderNode>,&local_res20,
                 UInterface::StaticClass,UObject::StaticClass);
    }
    pUVar5 = Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton;
    local_90 = FVar6;
    this_01 = TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
              ::Find((TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
                      *)&pUVar2->BranchConfigMapping,FVar6);
    if (this_01 == (FMovieGraphEvaluatedBranchConfig *)0x0) {
      local_88 = &local_90;
      `UMovieGraphEvaluatedConfig::GetSettingsImplementing<IMovieGraphPostRenderNode>'::__l2::
      <lambda_1>::operator()(&local_88);
      local_80.Data = (FScriptContainerElement *)0x0;
      local_78 = 0;
    }
    else {
      local_80.Data = (FScriptContainerElement *)0x0;
      local_78 = 0;
      FMovieGraphEvaluatedBranchConfig::GetNodes(this_01,local_70);
      iVar11 = (int)local_70[0]._8_8_;
      pFVar1 = local_70[0].AllocatorInstance.Data + (longlong)iVar11 * 8;
      FVar12.Data = local_70[0].AllocatorInstance.Data;
      while( true ) {
        if ((int)local_70[0]._8_8_ != iVar11) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMovieGraphNode>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (FVar12.Data == pFVar1) break;
        bVar7 = UClass::ImplementsInterface(*(UClass **)(*(longlong *)FVar12.Data + 0x10),pUVar5);
        if (bVar7) {
          this_00 = *(UObjectBaseUtility **)FVar12.Data;
          if (this_00 == (UObjectBaseUtility *)0x0) {
            local_98 = (void *)0x0;
            goto LAB_14dce846b;
          }
          pUVar10 = UMovieGraphPostRenderNode::StaticClass();
          local_98 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar10);
          if (local_98 == (void *)0x0) goto LAB_14dce846b;
          if (((local_80.Data <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 < local_80.Data + (longlong)local_78._4_4_ * 8))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = (int)local_78;
          if ((int)local_78 == local_78._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_80,(int *)((longlong)&local_78 + 4));
          }
          FVar12.Data = FVar12.Data + 8;
          local_78 = CONCAT44(local_78._4_4_,iVar9 + 1);
          *(void **)(local_80.Data + (longlong)iVar9 * 8) = local_98;
        }
        else {
LAB_14dce846b:
          FVar12.Data = FVar12.Data + 8;
        }
      }
      param_1 = (bool)local_res10;
      if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70[0].AllocatorInstance.Data);
        param_1 = (bool)local_res10;
      }
    }
    iVar11 = (int)local_78;
    pFVar1 = local_80.Data + (longlong)(int)local_78 * 8;
    FVar12.Data = local_80.Data;
    while( true ) {
      if ((int)local_78 != iVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<IMovieGraphPostRenderNode_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (FVar12.Data == pFVar1) break;
      bVar8 = (**(code **)(**(longlong **)FVar12.Data + 0x20))();
      bVar13 = bVar13 & bVar8;
      FVar12.Data = FVar12.Data + 8;
    }
    if ((param_1 == false) || (bVar13 != 0)) {
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      if (5 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      if (bVar13 != 0) {
        (**(code **)(this->_padding_ + 0x338))(this,4);
      }
      return;
    }
    FWindowsPlatformProcess::Sleep(fVar4);
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  } while( true );
}

// TickProducingFrames @ 14dce8580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphPipeline::TickProducingFrames(UMovieGraphPipeline *this)

{
  UMovieGraphEngineTimeStep *pUVar1;
  UMovieGraphEngineTimeStep *pUVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  UMovieGraphTimeStepBase *pUVar5;
  code *pcVar6;
  bool bVar7;
  
  (**(code **)(this->_padding_ + 0x310))();
  (**(code **)(this->_padding_ + 0x318))(this,0);
  if (this->bShutdownRequested != (FThreadSafeBool)0x0) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
                    /* WARNING: Could not recover jumptable at 0x00014dce85d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x338))(this,2);
    return;
  }
  pUVar1 = (UMovieGraphEngineTimeStep *)(GEngine->CustomTimeStep).field0_0x0.DebugPtr;
  pUVar2 = (this->CustomEngineTimeStep).field0_0x0.DebugPtr;
  if (pUVar2 == (UMovieGraphEngineTimeStep *)0x0) {
    bVar7 = pUVar1 == (UMovieGraphEngineTimeStep *)0x0;
  }
  else {
    bVar7 = pUVar2 == pUVar1;
  }
  if (!bVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UMovieGraphEngineTimeStep *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->PrevCustomEngineTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)pUVar1;
    UEngine::SetCustomTimeStep
              (GEngine,(UEngineCustomTimeStep *)(this->CustomEngineTimeStep).field0_0x0.DebugPtr);
  }
  if ((this->GraphTimeStepInstance).field0_0x0.DebugPtr == (UMovieGraphTimeStepBase *)0x0) {
    if ((this->GraphTimeStepInstances).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar3 = (this->GraphTimeStepInstances).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = *(UObject **)pFVar3, pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    (this->PendingTimeStepInstance).field0_0x0.DebugPtr = *(UMovieGraphTimeStepBase **)pFVar3;
  }
  if ((this->PendingTimeStepInstance).field0_0x0.DebugPtr != (UMovieGraphTimeStepBase *)0x0) {
    pUVar5 = (this->GraphTimeStepInstance).field0_0x0.DebugPtr;
    if (pUVar5 != (UMovieGraphTimeStepBase *)0x0) {
      (**(code **)(*(longlong *)pUVar5 + 0x2c0))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (UObject *)(this->PendingTimeStepInstance).field0_0x0.DebugPtr,
       pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pUVar5 = (this->PendingTimeStepInstance).field0_0x0.DebugPtr;
    (this->GraphTimeStepInstance).field0_0x0.DebugPtr = pUVar5;
    (**(code **)(*(longlong *)pUVar5 + 0x2b8))();
    (this->PendingTimeStepInstance).field0_0x0.DebugPtr = (UMovieGraphTimeStepBase *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dce873c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->GraphTimeStepInstance).field0_0x0.DebugPtr + 0x2b0))();
  return;
}

// TransitionToState @ 14dce8960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphPipeline::TransitionToState(UMovieGraphPipeline *this,EMovieRenderPipelineState param_1)

{
  EMovieRenderPipelineState EVar1;
  int iVar2;
  UMoviePipelineExecutorJob *pUVar3;
  UMovieGraphRenderPreviewWidget *pUVar4;
  UMovieGraphDataSourceBase *pUVar5;
  code *pcVar6;
  bool bVar7;
  FDateTime FVar8;
  UMovieGraphConfig *this_00;
  FMovieGraphTraversalContext *pFVar9;
  UMovieGraphEvaluatedConfig *pUVar10;
  FTimespan local_res8;
  EMovieRenderPipelineState local_res10 [16];
  FString local_188;
  UMovieGraphPipeline *local_178;
  UMoviePipelineExecutorJob *local_170;
  undefined1 local_168;
  FMoviePipelineShotOutputData *local_160;
  undefined8 local_158;
  TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> local_150;
  FMoviePipelineLightweightTickInfo local_140;
  UMovieGraphPipeline *local_128;
  EMovieRenderPipelineState *local_120;
  FString local_118;
  FMovieGraphTraversalContext local_108;
  
  if (this->bIsTransitioningState != false) {
    return;
  }
  this->bIsTransitioningState = true;
  EVar1 = this->PipelineState;
  if (EVar1 == Uninitialized) {
    this->PipelineState = param_1;
  }
  else {
    local_res10[0] = param_1;
    if (EVar1 == ProducingFrames) {
      if (param_1 == Finalize) {
        if (this->bShutdownRequested != (FThreadSafeBool)0x0) {
          iVar2 = this->CurrentShotIndex;
          if (iVar2 < (this->ActiveShotList).ArrayNum) {
            if ((iVar2 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TeardownShot(this,(TObjectPtr<UMoviePipelineExecutorShot> *)
                              ((this->ActiveShotList).AllocatorInstance.Data + (longlong)iVar2 * 8))
            ;
          }
        }
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame
                   ,this);
        FlushRenderingCommands();
        (**(code **)(this->_padding_ + 0x310))(this);
        (**(code **)(*(longlong *)(this->GraphTimeStepInstance).field0_0x0.DebugPtr + 0x2c0))();
        (this->GraphTimeStepInstance).field0_0x0.DebugPtr = (UMovieGraphTimeStepBase *)0x0;
        UEngine::SetCustomTimeStep(GEngine,(this->PrevCustomEngineTimeStep).field0_0x0.DebugPtr);
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        this_00 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                            (&((this->CurrentJobDuplicate).field0_0x0.DebugPtr)->GraphPreset);
        pFVar9 = GetCurrentTraversalContext(this,&local_108,false);
        pUVar10 = UMovieGraphConfig::CreateFlattenedGraph(this_00,pFVar9,&local_188);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UMovieGraphEvaluatedConfig *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        (this->PostRenderEvaluatedGraph).field0_0x0.DebugPtr = pUVar10;
        if (local_108.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
        }
        if (local_108.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
        }
        if (local_108.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
        }
        if (local_108.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
        }
        if (((this->PostRenderEvaluatedGraph).field0_0x0.DebugPtr ==
             (UMovieGraphEvaluatedConfig *)0x0) && (2 < (byte)LogMovieRenderPipeline._0_1_)) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
        this->PipelineState = Finalize;
        (**(code **)(this->_padding_ + 0x348))(this);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        goto LAB_14dce8e0f;
      }
    }
    else if (EVar1 == Finalize) {
      if (param_1 == Export) {
        pUVar5 = (this->GraphDataSourceInstance).field0_0x0.DebugPtr;
        this->PipelineState = Export;
        (**(code **)(*(longlong *)pUVar5 + 0x2d8))();
        (**(code **)(this->_padding_ + 0x318))(this,0);
        (**(code **)(this->_padding_ + 0x350))(this);
        local_140.bIsActive = false;
        local_140.SequenceFPS = 0.0;
        local_140.TemporalSampleCount = 1;
        local_140.TemporalSampleIndex = 0;
        FMovieRenderPipelineCoreModule::SetTickInfo(&local_140);
        goto LAB_14dce8e0f;
      }
    }
    else if ((EVar1 == Export) && (param_1 == Finished)) {
      this->PipelineState = Finished;
      local_160 = (FMoviePipelineShotOutputData *)0x0;
      local_158 = 0;
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.ArrayNum = 0;
      local_150.ArrayMax = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      pUVar3 = (this->CurrentJobDuplicate).field0_0x0.DebugPtr;
      local_178 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMoviePipelineExecutorJob *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      local_168 = this->bShutdownSetErrorFlag == (FThreadSafeBool)0x0;
      local_170 = pUVar3;
      TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_>::operator=
                (&local_150,&this->GeneratedOutputData);
      (**(code **)(this->_padding_ + 0x378))(this,&local_178);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame
                 ,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
                 this);
      pUVar4 = (this->PreviewWidget).field0_0x0.DebugPtr;
      if (pUVar4 != (UMovieGraphRenderPreviewWidget *)0x0) {
        (**(code **)(*(longlong *)pUVar4 + 0x2d0))();
        (this->PreviewWidget).field0_0x0.DebugPtr = (UMovieGraphRenderPreviewWidget *)0x0;
      }
      if (this->bDidStartInsightsCapture != false) {
        FTraceAuxiliary::Stop();
      }
      (this->PostRenderEvaluatedGraph).field0_0x0.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
      (**(code **)(((this->GraphAudioRendererInstance).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
      if (*(int *)&(this->OutputNodesDataSentTo).Elements.field_0x8 !=
          *(int *)&(this->OutputNodesDataSentTo).Elements.field_0x34) {
        TSet<TObjectPtr<UMovieGraphFileOutputNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphFileOutputNode>,0>,FDefaultSetAllocator>
        ::UnhashElements(&this->OutputNodesDataSentTo);
        iVar2 = *(int *)&(this->OutputNodesDataSentTo).Elements.field_0xc;
        *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x8 = 0;
        if (iVar2 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)&this->OutputNodesDataSentTo,0,
                     (int *)&(this->OutputNodesDataSentTo).Elements.field_0xc);
        }
        *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x34 = 0;
        *(undefined4 *)&(this->OutputNodesDataSentTo).Elements.field_0x28 = 0;
      }
      (**(code **)(*(longlong *)(this->GraphDataSourceInstance).field0_0x0.DebugPtr + 0x2f0))();
      (**(code **)(this->_padding_ + 0x2e8))(this);
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        FVar8 = FDateTime::UtcNow();
        local_res8.Ticks = *(longlong *)FVar8.Ticks - (this->GraphInitializationTime).Ticks;
        FTimespan::ToString(&local_res8,&local_118);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      DestructItems<FMovieGraphRenderOutputData,int>
                ((FMovieGraphRenderOutputData *)local_150.AllocatorInstance.Data,local_150.ArrayNum)
      ;
      if ((FMovieGraphRenderOutputData *)local_150.AllocatorInstance.Data !=
          (FMovieGraphRenderOutputData *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
      DestructItems<FMoviePipelineShotOutputData,int>(local_160,(int)local_158);
      if (local_160 != (FMoviePipelineShotOutputData *)0x0) {
        FMemory::Free(local_160);
      }
      goto LAB_14dce8e0f;
    }
    local_120 = local_res10;
    local_128 = this;
    `UMovieGraphPipeline::TransitionToState'::__l65::<lambda_1>::operator()(&local_128);
  }
LAB_14dce8e0f:
  this->bIsTransitioningState = false;
  return;
}

// UpdateLayerContentsInRenderLayerSubsystem @ 14dcec180

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
UMovieGraphPipeline::UpdateLayerContentsInRenderLayerSubsystem
          (UMovieGraphPipeline *this,UMovieGraphEvaluatedConfig *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  FName FVar3;
  UObjectBaseUtility *this_00;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  FName *pFVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  UWorld *this_01;
  UClass *pUVar13;
  FMovieGraphEvaluatedBranchConfig *this_02;
  UClass *pUVar14;
  FString *pFVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  UMovieGraphModifierBase *pUVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong *plVar24;
  FName *this_03;
  UMovieGraphRenderLayer *this_04;
  ForAnyElementType FVar25;
  undefined1 local_res8 [8];
  UMovieGraphEvaluatedConfig *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5;
  undefined1 local_1b4 [4];
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  void *local_190;
  UMovieGraphModifierBase *local_188;
  longlong *local_180;
  UMovieGraphRenderLayer *local_178;
  undefined8 local_170;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  longlong *local_158;
  FScriptContainerElement *local_150;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  longlong *local_138;
  FScriptContainerElement *local_130;
  TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> local_128;
  undefined8 *local_118;
  uint local_110;
  FName *local_108;
  uint local_100;
  longlong *local_f8;
  uint local_f0;
  TArray<UMovieGraphCollectionNode_*,TSizedDefaultAllocator<32>_> local_e8;
  FName *local_d8;
  FName local_d0;
  FName *local_c8;
  FScriptContainerElement *local_c0;
  UMovieGraphRenderLayerSubsystem *local_b8;
  FScriptContainerElement *local_b0;
  FName local_a8;
  FString local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  FString local_68;
  FString local_58;
  
  local_res10 = param_1;
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  local_b8 = UWorld::GetSubsystem<UMovieGraphRenderLayerSubsystem>(this_01);
  if (local_b8 == (UMovieGraphRenderLayerSubsystem *)0x0) {
    return;
  }
  local_15c = (local_b8->RenderLayers).ArrayNum;
  uVar16 = (ulonglong)(int)local_15c;
  pFVar17 = (local_b8->RenderLayers).AllocatorInstance.Data;
  local_b0 = pFVar17 + uVar16 * 8;
  do {
    pFVar5 = local_b0;
    uVar23 = 0;
    local_130 = pFVar17;
    if ((local_b8->RenderLayers).ArrayNum != (int)uVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMovieGraphRenderLayer_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar17 == pFVar5) {
      return;
    }
    this_04 = *(UMovieGraphRenderLayer **)pFVar17;
    FVar3 = this_04->RenderLayerName;
    local_178 = this_04;
    UMovieGraphEvaluatedConfig::GetSettingsForBranch<UMovieGraphCollectionNode>
              (param_1,&local_e8,FVar3,false,true);
    pUVar13 = Z_Construct_UClass_UMovieGraphModifierNodeInterface_NoRegister();
    local_a8 = FVar3;
    this_02 = TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
              ::Find((TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
                      *)&param_1->BranchConfigMapping,FVar3);
    if (this_02 == (FMovieGraphEvaluatedBranchConfig *)0x0) {
      local_d8 = &local_a8;
      `UMovieGraphEvaluatedConfig::GetSettingsImplementing<IMovieGraphModifierNodeInterface>'::__l2
      ::<lambda_1>::operator()(&local_d8);
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = 0;
      uVar16 = uVar23;
    }
    else {
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8 = 0;
      FMovieGraphEvaluatedBranchConfig::GetNodes(this_02,&local_128);
      iVar12 = local_128.ArrayNum;
      uVar16 = (ulonglong)local_128.ArrayNum;
      pFVar17 = local_128.AllocatorInstance.Data + uVar16 * 8;
      FVar25.Data = local_128.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar16 != iVar12) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMovieGraphNode>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        if (FVar25.Data == pFVar17) break;
        bVar10 = UClass::ImplementsInterface(*(UClass **)(*(longlong *)FVar25.Data + 0x10),pUVar13);
        if (bVar10) {
          this_00 = *(UObjectBaseUtility **)FVar25.Data;
          if (this_00 == (UObjectBaseUtility *)0x0) {
            local_190 = (void *)0x0;
            goto LAB_14dcec3cd;
          }
          pUVar14 = Z_Construct_UClass_UMovieGraphModifierNodeInterface_NoRegister();
          local_190 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar14);
          if (local_190 == (void *)0x0) goto LAB_14dcec3cd;
          if (((local_1b0.Data <= (FScriptContainerElement *)&local_190) &&
              ((FScriptContainerElement *)&local_190 <
               local_1b0.Data + (longlong)local_1a8._4_4_ * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = (int)local_1a8;
          if ((int)local_1a8 == local_1a8._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_1b0,(int *)((longlong)&local_1a8 + 4));
          }
          FVar25.Data = FVar25.Data + 8;
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar11 + 1);
          *(void **)(local_1b0.Data + (longlong)iVar11 * 8) = local_190;
          uVar16 = (ulonglong)(uint)local_128.ArrayNum;
        }
        else {
LAB_14dcec3cd:
          uVar16 = (ulonglong)(uint)local_128.ArrayNum;
          FVar25.Data = FVar25.Data + 8;
        }
      }
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      uVar16 = local_1a8 & 0xffffffff;
      this_04 = local_178;
    }
    iVar12 = (int)uVar16 / 2;
    if (0 < iVar12) {
      pFVar17 = local_1b0.Data + (longlong)((int)uVar16 + -1) * 8;
      do {
        uVar4 = *(undefined8 *)(local_1b0.Data + uVar23 * 8);
        *(undefined8 *)(local_1b0.Data + uVar23 * 8) = *(undefined8 *)pFVar17;
        uVar23 = uVar23 + 1;
        *(undefined8 *)pFVar17 = uVar4;
        pFVar17 = pFVar17 + -8;
      } while ((longlong)uVar23 < (longlong)iVar12);
      uVar16 = local_1a8 & 0xffffffff;
    }
    local_160 = (uint)uVar16;
    uVar23 = (ulonglong)(int)local_160;
    local_c0 = local_1b0.Data + uVar23 * 8;
    FVar25.Data = local_1b0.Data;
    while( true ) {
      pFVar17 = local_c0;
      local_150 = FVar25.Data;
      if ((int)uVar16 != (int)uVar23) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<IMovieGraphModifierNodeInterface_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (FVar25.Data == pFVar17) break;
      plVar19 = *(longlong **)FVar25.Data;
      local_180 = plVar19;
      cVar9 = (**(code **)(*plVar19 + 0x18))(plVar19);
      if (cVar9 == '\0') {
        (**(code **)(*plVar19 + 0x10))(plVar19,&local_118);
        uVar7 = local_110;
        uVar16 = (ulonglong)(int)local_110;
        puVar2 = local_118 + uVar16;
        puVar18 = local_118;
        while( true ) {
          if ((uint)uVar16 != uVar7) {
            local_1b8 = 0;
            `TCheckedPointerIterator<UMovieGraphModifierBase_*,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_1b8);
          }
          if (puVar18 == puVar2) break;
          UMovieGraphRenderLayer::AddLayerModifier(this_04,(UMovieGraphModifierBase *)*puVar18);
          uVar16 = (ulonglong)local_110;
          puVar18 = puVar18 + 1;
        }
        if (local_118 == (undefined8 *)0x0) goto LAB_14dcec970;
        FMemory::Free(local_118);
        uVar16 = local_1a8 & 0xffffffff;
        FVar25.Data = FVar25.Data + 8;
        uVar23 = (ulonglong)local_160;
      }
      else {
        (**(code **)(*plVar19 + 0x10))(plVar19,&local_f8);
        uVar23 = (ulonglong)(int)local_f0;
        local_164 = local_f0;
        plVar22 = local_f8 + uVar23;
        uVar16 = uVar23;
        plVar24 = local_f8;
        local_138 = plVar22;
        while( true ) {
          local_158 = plVar24;
          if ((int)uVar23 != (int)uVar16) {
            local_1b7 = 0;
            `TCheckedPointerIterator<UMovieGraphModifierBase_*,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_1b7);
          }
          if (plVar24 == plVar22) break;
          pUVar20 = (UMovieGraphModifierBase *)*plVar24;
          if (pUVar20 != (UMovieGraphModifierBase *)0x0) {
            local_188 = pUVar20;
            pUVar13 = UMovieGraphCollectionModifier::StaticClass();
            iVar12 = (int)pUVar13->_padding_;
            if ((iVar12 <= *(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
                &pUVar13->_padding_)) goto LAB_14dcec57d;
          }
          local_188 = (UMovieGraphModifierBase *)0x0;
          local_1b6 = 0;
          bVar10 = `UMovieGraphPipeline::UpdateLayerContentsInRenderLayerSubsystem'::__l25::
                   <lambda_1>::operator()(&local_1b6);
          pUVar20 = (UMovieGraphModifierBase *)0x0;
          if (bVar10) {
LAB_14dcec57d:
            puVar1 = &pUVar20[1].field_0xc;
            *(undefined4 *)&pUVar20[1].field_0x8 = 0;
            if (*(int *)puVar1 == 0) {
              *(undefined4 *)puVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,*(int *)puVar1,(ForAnyElementType *)(pUVar20 + 1),0,(int *)puVar1);
              ConstructItems<TObjectPtr<UMovieGraphCollection>,UMovieGraphCollection_*,int>
                        (*(FScriptContainerElement **)(pUVar20 + 1),(UMovieGraphCollection **)0x0,0)
              ;
            }
            local_1a0.Data = (FScriptContainerElement *)0x0;
            local_198 = 0;
            (**(code **)(*plVar19 + 0x30))(plVar19,&local_108);
            uVar23 = (ulonglong)(int)local_100;
            local_168 = local_100;
            local_c8 = local_108 + uVar23;
            uVar16 = uVar23;
            this_03 = local_108;
LAB_14dcec600:
            pFVar8 = local_c8;
            if ((int)uVar23 != (int)uVar16) {
              local_1b5 = 0;
              `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_1b5);
            }
            iVar12 = local_e8.ArrayNum;
            if (this_03 != pFVar8) {
              pFVar17 = local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 8;
              FVar25.Data = local_e8.AllocatorInstance.Data;
              do {
                if (local_e8.ArrayNum != iVar12) {
                  local_1b4[0] = 0;
                  `TCheckedPointerIterator<UMovieGraphCollectionNode_*_const,int,0>::operator!='::
                  __l2::<lambda_1>::operator()(local_1b4);
                }
                if (FVar25.Data == pFVar17) {
                  pUVar20 = local_188;
                  if (2 < (byte)LogMovieRenderPipeline._0_1_) {
                    ::FName::ToString(this_03,&local_68);
                    pUVar20 = local_188;
                    local_d0.ComparisonIndex.Value = *(uint *)&local_188->field_0x18;
                    local_d0.Number = *(uint *)&local_188->field_0x1c;
                    ::FName::ToString(&local_d0,&local_a0);
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
                    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                    }
                    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_68.Data.AllocatorInstance.Data);
                    }
                  }
                  this_03 = this_03 + 1;
                  uVar23 = (ulonglong)local_100;
                  uVar16 = (ulonglong)local_168;
                  plVar19 = local_180;
                  goto LAB_14dcec600;
                }
                lVar21 = *(longlong *)FVar25.Data;
                if ((lVar21 != 0) && (*(longlong *)(lVar21 + 0xb8) != 0)) {
                  pFVar15 = ::FString::FString(&local_58,
                                               (FString *)(*(longlong *)(lVar21 + 0xb8) + 0x28));
                  local_88 = (pFVar15->Data).AllocatorInstance.Data;
                  iVar11 = (pFVar15->Data).ArrayNum;
                  iStack_80 = iVar11 + -1;
                  if (iVar11 == 0) {
                    iStack_80 = 0;
                  }
                  local_78._12_4_ = uStack_7c;
                  local_78.Size = iStack_80;
                  local_78.DataPtr = (wchar_t *)local_88;
                  bVar10 = ::FName::Equals(*this_03,&local_78);
                  pFVar5 = (pFVar15->Data).AllocatorInstance.Data;
                  if (pFVar5 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar5);
                  }
                  plVar19 = local_180;
                  if (bVar10) goto LAB_14dcec6ca;
                }
                FVar25.Data = FVar25.Data + 8;
              } while( true );
            }
            if (local_108 != (FName *)0x0) {
              FMemory::Free(local_108);
            }
            FVar25.Data = local_1a0.Data;
            lVar21 = (longlong)(int)local_198;
            if ((int)local_198 != 0) {
              local_148.Data = (FScriptContainerElement *)0x0;
              local_140 = (int)local_198;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(int)local_198,0,&local_148,(int)local_198,&local_13c);
              memcpy(local_148.Data,FVar25.Data,lVar21 << 3);
              iVar12 = local_140;
              FVar25.Data = local_148.Data;
              *(int *)&pUVar20[1].field_0x8 = local_140;
              if ((local_140 == 0) && (*(int *)&pUVar20[1].field_0xc == 0)) {
                *(undefined4 *)&pUVar20[1].field_0xc = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,local_140,*(int *)&pUVar20[1].field_0xc,
                           (ForAnyElementType *)(pUVar20 + 1),local_140,(int *)&pUVar20[1].field_0xc
                          );
                ConstructItems<TObjectPtr<UMovieGraphCollection>,UMovieGraphCollection_*,int>
                          (*(FScriptContainerElement **)(pUVar20 + 1),
                           (UMovieGraphCollection **)FVar25.Data,iVar12);
              }
              if (local_148.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data);
              }
              UMovieGraphRenderLayer::AddLayerModifier(local_178,pUVar20);
              plVar19 = local_180;
            }
            plVar22 = local_138;
            plVar24 = local_158;
            if (local_1a0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a0.Data);
              plVar22 = local_138;
              plVar24 = local_158;
            }
          }
          uVar23 = (ulonglong)local_f0;
          plVar24 = plVar24 + 1;
          uVar16 = (ulonglong)local_164;
        }
        this_04 = local_178;
        FVar25.Data = local_150;
        if (local_f8 != (longlong *)0x0) {
          FMemory::Free(local_f8);
          this_04 = local_178;
          FVar25.Data = local_150;
        }
LAB_14dcec970:
        uVar16 = local_1a8 & 0xffffffff;
        FVar25.Data = FVar25.Data + 8;
        uVar23 = (ulonglong)local_160;
      }
    }
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    pFVar17 = local_130 + 8;
    uVar16 = (ulonglong)local_15c;
    param_1 = local_res10;
  } while( true );
LAB_14dcec6ca:
  cVar9 = (**(code **)(*local_180 + 0x20))(local_180,this_03);
  if (cVar9 != '\0') {
    local_170 = *(undefined8 *)(lVar21 + 0xb8);
    if (((local_1a0.Data <= (FScriptContainerElement *)&local_170) &&
        ((FScriptContainerElement *)&local_170 < local_1a0.Data + (longlong)local_198._4_4_ * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = (int)local_198;
    if ((int)local_198 == local_198._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_1a0,(int *)((longlong)&local_198 + 4));
    }
    local_198 = CONCAT44(local_198._4_4_,iVar12 + 1);
    *(undefined8 *)(local_1a0.Data + (longlong)iVar12 * 8) = local_170;
  }
  uVar23 = (ulonglong)local_100;
  this_03 = this_03 + 1;
  uVar16 = (ulonglong)local_168;
  pUVar20 = local_188;
  goto LAB_14dcec600;
}

// __VTableCtorCaller @ 14dceea50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMovieGraphPipeline::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMoviePipelineBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UMoviePipelineBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMoviePipelineBase *)0x0) {
    UMoviePipelineBase::UMoviePipelineBase(this,param_1);
    this->_padding_ = (longlong)&___7UMovieGraphPipeline__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegate = 0;
    *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegate.field_0x10 = 0;
    *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegate = 0;
    *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegate.field_0x10 = 0;
    *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegateNative = 0;
    *(undefined8 *)&this[1].OnMoviePipelineWorkFinishedDelegateNative.field_0x18 = 0;
    *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative = 0;
    *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x4 = 0x80;
    *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x8 = 0xffffffff;
    *(undefined4 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0xc = 0;
    *(undefined8 *)&this[1].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x18 = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegate = 0;
    *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegate.field_0x10 = 0;
    *(undefined8 *)&this[2].OnMoviePipelineShotWorkFinishedDelegate = 0;
    *(undefined8 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative = 0;
    *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0x8 = 0;
    *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0xc = 0x80;
    *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].OnMoviePipelineWorkFinishedDelegateNative.field_0x14 = 0;
    *(undefined8 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative = 0;
    *(undefined4 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x8 = 0;
    *(undefined8 *)&this[2].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x18 = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegate = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegate.field_0x10 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegate = 0;
    *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegate.field_0x10 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative.field_0x8 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative.field_0x10 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineWorkFinishedDelegateNative.field_0x18 = 0;
    *(undefined8 *)&this[3].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x10 = 0;
    *(undefined4 *)&this[3].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x18 = 0;
    *(undefined4 *)&this[3].OnMoviePipelineShotWorkFinishedDelegateNative.field_0x1c = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execGetCurrentJob @ 14dcf0a10

void __cdecl UMovieGraphPipeline::execGetCurrentJob(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[5].field_0x18;
  return;
}

// execGetCurrentTraversalContext @ 14dcf0a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieGraphPipeline::execGetCurrentTraversalContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMovieGraphTraversalContext *pFVar2;
  int local_res10 [2];
  FMovieGraphTraversalContext local_f8;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetCurrentTraversalContext((UMovieGraphPipeline *)param_1,&local_f8,local_res10[0] != 0);
  FMovieGraphTraversalContext::operator=(param_3,pFVar2);
  if (local_f8.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_f8.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_f8.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_f8.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetInitializationTime @ 14dcf0e30

void __cdecl
UMovieGraphPipeline::execGetInitializationTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xb].field_0x20;
  return;
}

// execGetInitializationTimeOffset @ 14dcf0e60

void __cdecl
UMovieGraphPipeline::execGetInitializationTimeOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xb].field_0x8;
  return;
}

// execGetRendererInstance @ 14dcf19d0

void __cdecl
UMovieGraphPipeline::execGetRendererInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x18;
  return;
}

// execGetTimeStepInstance @ 14dcf1a90

void __cdecl
UMovieGraphPipeline::execGetTimeStepInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x10;
  return;
}

// execInitialize @ 14dcf1c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UMovieGraphPipeline::execInitialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UClass>_u_0 *pTVar2;
  UMoviePipelineExecutorJob *local_res10;
  TObjectPtr<UClass>_u_0 local_28;
  UClass *local_20;
  UClass *local_18;
  undefined1 local_10;
  
  local_res10 = (UMoviePipelineExecutorJob *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.DebugPtr = UMovieGraphDefaultRenderer::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  local_20 = UMovieGraphSequenceDataSource::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_20);
  }
  local_18 = UMovieGraphDefaultAudioRenderer::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TObjectPtr<UClass>_u_0 *)param_2->MostRecentPropertyAddress != (TObjectPtr<UClass>_u_0 *)0x0)
  {
    pTVar2 = (TObjectPtr<UClass>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Initialize((UMovieGraphPipeline *)param_1,local_res10,(FMovieGraphInitConfig *)&pTVar2->ObjectPtr)
  ;
  return;
}

// execOnMoviePipelineFinishedImpl @ 14dcf2ab0

void __cdecl
UMovieGraphPipeline::execOnMoviePipelineFinishedImpl(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014dcf2ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e8))();
  return;
}

// execSetInitializationTime @ 14dcf3850

void __cdecl
UMovieGraphPipeline::execSetInitializationTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar *puVar10;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar10 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar10[0];
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  uVar6 = puVar10[4];
  uVar7 = puVar10[5];
  uVar8 = puVar10[6];
  uVar9 = puVar10[7];
  *(undefined8 *)&param_1[0xb].field_0x8 = 0;
  param_1[0xb].field_0x20 = uVar2;
  param_1[0xb].field_0x21 = uVar3;
  param_1[0xb].field_0x22 = uVar4;
  param_1[0xb].field_0x23 = uVar5;
  param_1[0xb].field_0x24 = uVar6;
  param_1[0xb].field_0x25 = uVar7;
  param_1[0xb].field_0x26 = uVar8;
  param_1[0xb].field_0x27 = uVar9;
  return;
}

// operator() @ 15058cb30

bool __thiscall
`UMovieGraphPipeline::StartUnrealInsightsCapture'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4028969783696293094>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4028969783696293094>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058cb70

bool __thiscall `UMovieGraphPipeline::Initialize'::__l21::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4028969783696293835>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4028969783696293835>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058cbb0

bool __thiscall
`UMovieGraphPipeline::UpdateLayerContentsInRenderLayerSubsystem'::__l25::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4028969783696293490>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4028969783696293490>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058cbf0

bool __thiscall `UMovieGraphPipeline::TransitionToState'::__l65::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4028969783696292414>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4028969783696292414>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15058ccf0

bool __thiscall `UMovieGraphPipeline::Initialize'::__l24::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4028969783696293829>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4028969783696293829>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058cef0

bool __thiscall `UMovieGraphPipeline::Initialize'::__l27::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4028969783696293819>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4028969783696293819>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058cf30

bool __thiscall `UMovieGraphPipeline::Initialize'::__l30::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4028969783696293812>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4028969783696293812>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

