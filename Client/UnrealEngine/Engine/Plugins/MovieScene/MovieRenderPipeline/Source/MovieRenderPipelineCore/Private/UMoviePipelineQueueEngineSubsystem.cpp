// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 22

// StaticClass @ 14dd5ac60

UClass * __cdecl UMoviePipelineQueueEngineSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineQueueEngineSubsystem",
               &Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUMoviePipelineQueueEngineSubsystem,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineQueueEngineSubsystem>,
               InternalVTableHelperCtorCaller<UMoviePipelineQueueEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.InnerSingleton;
}

// UMoviePipelineQueueEngineSubsystem @ 14dd6b6e0

UMoviePipelineQueueEngineSubsystem * __thiscall
UMoviePipelineQueueEngineSubsystem::UMoviePipelineQueueEngineSubsystem
          (UMoviePipelineQueueEngineSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineQueueEngineSubsystem__6B_;
  *(undefined8 *)&this->OnRenderFinished = 0;
  *(undefined8 *)&(this->OnRenderFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnRenderFinished).field_0x10 = 0;
  (this->ActiveExecutor).field0_0x0.DebugPtr = (UMoviePipelineExecutorBase *)0x0;
  (this->CurrentQueue).field0_0x0.DebugPtr = (UMoviePipelineQueue *)0x0;
  (this->CachedRenderJobResults).bIsSet = false;
  (this->CachedProgressWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UMoviePipelineQueueEngineSubsystem @ 14dd6c3f0

void __thiscall
UMoviePipelineQueueEngineSubsystem::~UMoviePipelineQueueEngineSubsystem
          (UMoviePipelineQueueEngineSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineQueueEngineSubsystem__6B_;
  if ((this->CachedRenderJobResults).bIsSet != false) {
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)
               (this->CachedRenderJobResults).TypedValue.GraphData.AllocatorInstance.Data,
               (this->CachedRenderJobResults).TypedValue.GraphData.ArrayNum);
    pFVar1 = (this->CachedRenderJobResults).TypedValue.GraphData.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)
               (this->CachedRenderJobResults).TypedValue.ShotData.AllocatorInstance.Data,
               (this->CachedRenderJobResults).TypedValue.ShotData.ArrayNum);
    pFVar1 = (this->CachedRenderJobResults).TypedValue.ShotData.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  pvVar2 = *(void **)&(this->OnRenderFinished).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRenderFinished);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// AllocateJob @ 14dd755e0

/* WARNING: Enum "Type": Some values do not have unique names */

UMoviePipelineExecutorJob * __thiscall
UMoviePipelineQueueEngineSubsystem::AllocateJob
          (UMoviePipelineQueueEngineSubsystem *this,ULevelSequence *param_1)

{
  FString *pFVar1;
  UMoviePipelineExecutorBase *this_00;
  UMoviePipelineQueue *pUVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UMoviePipelineExecutorJob *this_01;
  UObject *pUVar5;
  FString *pFVar6;
  UClass *local_res10;
  FSoftObjectPath local_38;
  
  if (param_1 == (ULevelSequence *)0x0) {
    local_res10 = (UClass *)0x0;
    FFrame::KismetExecutionMessage
              (L"AllocateJob cannot be called with a null sequence!",Error,(FName)0x0);
    return (UMoviePipelineExecutorJob *)0x0;
  }
  this_00 = (this->ActiveExecutor).field0_0x0.DebugPtr;
  if (this_00 != (UMoviePipelineExecutorBase *)0x0) {
    bVar4 = UMoviePipelineExecutorBase::IsRendering(this_00);
    if (bVar4) {
      local_res10 = (UClass *)0x0;
      FFrame::KismetExecutionMessage
                (L"AllocateJob cannot be called while rendering!",Error,(FName)0x0);
      return (UMoviePipelineExecutorJob *)0x0;
    }
  }
  pUVar2 = (this->CurrentQueue).field0_0x0.DebugPtr;
  (pUVar2->Jobs).ArrayNum = 0;
  if ((pUVar2->Jobs).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(pUVar2->Jobs).AllocatorInstance,0,&(pUVar2->Jobs).ArrayMax);
  }
  pUVar2->QueueSerialNumber = pUVar2->QueueSerialNumber + 1;
  pUVar2 = (this->CurrentQueue).field0_0x0.DebugPtr;
  local_res10 = UMoviePipelineExecutorJob::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  this_01 = UMoviePipelineQueue::AllocateNewJob
                      (pUVar2,(TSubclassOf<UMoviePipelineExecutorJob>)&local_res10);
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_38,(UObject *)param_1);
  UMoviePipelineExecutorJob::SetSequence(this_01,&local_38);
  pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_38,pUVar5);
  FSoftObjectPath::operator=(&this_01->Map,&local_38);
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  pFVar6 = FSoftObjectPath::GetAssetName(&this_01->Sequence,(FString *)&local_38);
  pFVar1 = &this_01->JobName;
  if (pFVar1 != pFVar6) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->JobName).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this_01->JobName).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_38.AssetPath.PackageName != (FName)0x0) {
    FMemory::Free((void *)local_38.AssetPath.PackageName);
  }
  return this_01;
}

// GetPrivateStaticClass @ 14dd8c240

UClass * __cdecl UMoviePipelineQueueEngineSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineQueueEngineSubsystem",
               &Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUMoviePipelineQueueEngineSubsystem,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineQueueEngineSubsystem>,
               InternalVTableHelperCtorCaller<UMoviePipelineQueueEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.InnerSingleton;
}

// OnExecutorFinished @ 14dd911b0

void __thiscall
UMoviePipelineQueueEngineSubsystem::OnExecutorFinished
          (UMoviePipelineQueueEngineSubsystem *this,UMoviePipelineExecutorBase *param_1,bool param_2
          )

{
  FScriptContainerElement *pFVar1;
  FMoviePipelineOutputData *pFVar2;
  FMoviePipelineOutputData *pFVar3;
  FMoviePipelineOutputData local_78;
  FMoviePipelineOutputData local_40;
  
  (this->ActiveExecutor).field0_0x0.DebugPtr = (UMoviePipelineExecutorBase *)0x0;
  if ((this->CachedRenderJobResults).bIsSet != false) {
    pFVar2 = FMoviePipelineOutputData::FMoviePipelineOutputData
                       (&local_78,&(this->CachedRenderJobResults).TypedValue);
    pFVar3 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_40,pFVar2);
    FMoviePipelineWorkFinished_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnRenderFinished,
               pFVar3);
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)(pFVar2->GraphData).AllocatorInstance.Data,
               (pFVar2->GraphData).ArrayNum);
    pFVar1 = (pFVar2->GraphData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)(pFVar2->ShotData).AllocatorInstance.Data,
               (pFVar2->ShotData).ArrayNum);
    pFVar1 = (pFVar2->ShotData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if ((this->CachedRenderJobResults).bIsSet != false) {
      DestructItems<FMovieGraphRenderOutputData,int>
                ((FMovieGraphRenderOutputData *)
                 (this->CachedRenderJobResults).TypedValue.GraphData.AllocatorInstance.Data,
                 (this->CachedRenderJobResults).TypedValue.GraphData.ArrayNum);
      pFVar1 = (this->CachedRenderJobResults).TypedValue.GraphData.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FMoviePipelineShotOutputData,int>
                ((FMoviePipelineShotOutputData *)
                 (this->CachedRenderJobResults).TypedValue.ShotData.AllocatorInstance.Data,
                 (this->CachedRenderJobResults).TypedValue.ShotData.ArrayNum);
      pFVar1 = (this->CachedRenderJobResults).TypedValue.ShotData.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->CachedRenderJobResults).bIsSet = false;
    }
  }
  return;
}

// OnIndividualJobFinished @ 14dd91440

void __thiscall
UMoviePipelineQueueEngineSubsystem::OnIndividualJobFinished
          (UMoviePipelineQueueEngineSubsystem *this,FMoviePipelineOutputData *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if ((TOptional<FMoviePipelineOutputData> *)param_1 != &this->CachedRenderJobResults) {
    if ((this->CachedRenderJobResults).bIsSet != false) {
      DestructItems<FMovieGraphRenderOutputData,int>
                ((FMovieGraphRenderOutputData *)
                 (this->CachedRenderJobResults).TypedValue.GraphData.AllocatorInstance.Data,
                 (this->CachedRenderJobResults).TypedValue.GraphData.ArrayNum);
      pFVar1 = (this->CachedRenderJobResults).TypedValue.GraphData.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FMoviePipelineShotOutputData,int>
                ((FMoviePipelineShotOutputData *)
                 (this->CachedRenderJobResults).TypedValue.ShotData.AllocatorInstance.Data,
                 (this->CachedRenderJobResults).TypedValue.ShotData.ArrayNum);
      pFVar1 = (this->CachedRenderJobResults).TypedValue.ShotData.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    }
    FMoviePipelineOutputData::FMoviePipelineOutputData
              (&(this->CachedRenderJobResults).TypedValue,param_1);
    (this->CachedRenderJobResults).bIsSet = true;
  }
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data,
             (param_1->GraphData).ArrayNum);
  pFVar1 = (param_1->GraphData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data,
             (param_1->ShotData).ArrayNum);
  pFVar1 = (param_1->ShotData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// RenderJob @ 14dd9b260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineQueueEngineSubsystem::RenderJob
          (UMoviePipelineQueueEngineSubsystem *this,UMoviePipelineExecutorJob *param_1)

{
  UMoviePipelineQueue *pUVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  UClass *pUVar3;
  UMoviePipelineExecutorBase *pUVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  undefined1 local_a8 [80];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pUVar1 = (this->CurrentQueue).field0_0x0.DebugPtr;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = (pUVar1->Jobs).ArrayNum;
  lVar6 = (longlong)local_b0;
  _Src = (pUVar1->Jobs).AllocatorInstance.Data;
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_b0,0,&local_b8,local_b0,&local_ac);
    memcpy(local_b8.Data,_Src,lVar6 << 3);
  }
  FVar5.Data = local_b8.Data;
  do {
    if (FVar5.Data == local_b8.Data + (longlong)local_b0 * 8) {
      bVar2 = true;
LAB_14dd9b321:
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      if (bVar2) {
        local_b8.Data = (FScriptContainerElement *)0x0;
        FFrame::KismetExecutionMessage
                  (L"RenderJob cannot be called with a job not created by AllocateJob!",Error,
                   (FName)0x0);
      }
      else {
        pUVar4 = (this->ActiveExecutor).field0_0x0.DebugPtr;
        if ((pUVar4 == (UMoviePipelineExecutorBase *)0x0) ||
           (bVar2 = UMoviePipelineExecutorBase::IsRendering(pUVar4), !bVar2)) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar3 = UMoviePipelineInProcessExecutor::StaticClass();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_a8,pUVar3);
          local_a8._8_8_ = this;
          pUVar4 = (UMoviePipelineExecutorBase *)
                   StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
          if ((UMoviePipelineQueue *)local_a8._64_8_ != (UMoviePipelineQueue *)0x0) {
            plVar7 = local_58;
            if (local_40 != (longlong *)0x0) {
              plVar7 = local_40;
            }
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
          *(undefined1 *)&pUVar4[1].OnExecutorFinishedDelegate = 1;
          TMulticastDelegateRegistration<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
          ::AddUObject<UMoviePipelineQueueEngineSubsystem>
                    ((TMulticastDelegateRegistration<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
                      *)&pUVar4[1].OnExecutorFinishedDelegateNative.field_0x10,
                     (UMoviePipelineQueueEngineSubsystem *)&local_b8,(pmf_9c4d493e)this);
          RenderQueueWithExecutorInstance(this,pUVar4);
        }
        else {
          local_b8.Data = (FScriptContainerElement *)0x0;
          FFrame::KismetExecutionMessage
                    (L"RenderJob cannot be called while rendering!",Error,(FName)0x0);
        }
      }
      return;
    }
    if (*(UMoviePipelineExecutorJob **)FVar5.Data == param_1) {
      bVar2 = false;
      goto LAB_14dd9b321;
    }
    FVar5.Data = FVar5.Data + 8;
  } while( true );
}

// RenderQueueWithExecutor @ 14dd9b440

/* WARNING: Enum "Type": Some values do not have unique names */

UMoviePipelineExecutorBase * __thiscall
UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor
          (UMoviePipelineQueueEngineSubsystem *this,TSubclassOf<UMoviePipelineExecutorBase> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UMoviePipelineExecutorBase *pUVar6;
  FName local_res10;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) &&
     (pUVar4 = Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister(), pUVar4 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)param_1.Class.field0_0x0 != 0)) goto LAB_14dd9b4c9;
  }
  bVar3 = `UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor'::__l3::<lambda_1>::
          operator()(&local_res10);
  if (!bVar3) {
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    FFrame::KismetExecutionMessage
              (L"RenderQueueWithExecutor cannot be called with a null class type!",Error,(FName)0x0)
    ;
    return (UMoviePipelineExecutorBase *)0x0;
  }
LAB_14dd9b4c9:
  pUVar4 = (UClass *)0x0;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  if ((lVar2 != 0) &&
     (pUVar5 = Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister(), pUVar5 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar4 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar6 = NewObject<UMoviePipelineExecutorBase>
                     ((UObject *)this,pUVar4,local_res10,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  RenderQueueWithExecutorInstance(this,pUVar6);
  return (this->ActiveExecutor).field0_0x0.DebugPtr;
}

// RenderQueueWithExecutorInstance @ 14dd9b560

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance
          (UMoviePipelineQueueEngineSubsystem *this,UMoviePipelineExecutorBase *param_1)

{
  UMoviePipelineExecutorBase *pUVar1;
  UClass *pUVar2;
  bool bVar3;
  longlong local_res8;
  
  pUVar1 = (this->ActiveExecutor).field0_0x0.DebugPtr;
  if (pUVar1 != (UMoviePipelineExecutorBase *)0x0) {
    bVar3 = UMoviePipelineExecutorBase::IsRendering(pUVar1);
    if (bVar3) {
      bVar3 = `UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance'::__l3::
              <lambda_1>::operator()(&local_res8);
      if (!bVar3) {
        local_res8 = 0;
        FFrame::KismetExecutionMessage(L"Render already in progress.",Error,(FName)0x0);
        return;
      }
    }
  }
  if (param_1 == (UMoviePipelineExecutorBase *)0x0) {
    local_res8 = 0;
    FFrame::KismetExecutionMessage(L"Invalid executor supplied.",Error,(FName)0x0);
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ActiveExecutor).field0_0x0.DebugPtr = param_1;
  bVar3 = this->bCachedRenderPlayerViewport;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (this->CachedProgressWidgetClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = (this->CachedProgressWidgetClass).Class.field0_0x0.DebugPtr;
  pUVar1 = (this->ActiveExecutor).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (pUVar1->ViewportInitArgs).DebugWidgetClass.Class.field0_0x0.DebugPtr = pUVar2;
  (pUVar1->ViewportInitArgs).bRenderViewport = bVar3;
  TMulticastDelegateRegistration<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<UMoviePipelineQueueEngineSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
              *)&((this->ActiveExecutor).field0_0x0.DebugPtr)->OnExecutorFinishedDelegateNative,
             (UMoviePipelineQueueEngineSubsystem *)&local_res8,(pmf_cef27ba4)this);
  UMoviePipelineExecutorBase::Execute
            ((this->ActiveExecutor).field0_0x0.DebugPtr,(this->CurrentQueue).field0_0x0.DebugPtr);
  return;
}

// SetConfiguration @ 14dda2270

void __thiscall
UMoviePipelineQueueEngineSubsystem::SetConfiguration
          (UMoviePipelineQueueEngineSubsystem *this,TSubclassOf<UMovieRenderDebugWidget> param_1,
          bool param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->CachedProgressWidgetClass).Class.field0_0x0 =
       *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  this->bCachedRenderPlayerViewport = param_2;
  return;
}

// StaticRegisterNativesUMoviePipelineQueueEngineSubsystem @ 14dda67d0

void __cdecl
UMoviePipelineQueueEngineSubsystem::StaticRegisterNativesUMoviePipelineQueueEngineSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAllocateJob @ 14ddaa570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMoviePipelineQueueEngineSubsystem::execAllocateJob(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UMoviePipelineQueue *this;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  UMoviePipelineExecutorJob *this_00;
  UObject *pUVar6;
  FString *pFVar7;
  UObject *local_res10;
  UClass *local_res18;
  FSoftObjectPath local_48;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    local_res18 = (UClass *)0x0;
    FFrame::KismetExecutionMessage
              (L"AllocateJob cannot be called with a null sequence!",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
  }
  else {
    if ((*(UMoviePipelineExecutorBase **)&param_1[1].field_0x20 != (UMoviePipelineExecutorBase *)0x0
        ) && (bVar5 = UMoviePipelineExecutorBase::IsRendering
                                (*(UMoviePipelineExecutorBase **)&param_1[1].field_0x20), bVar5)) {
      local_res18 = (UClass *)0x0;
      FFrame::KismetExecutionMessage
                (L"AllocateJob cannot be called while rendering!",Error,(FName)0x0);
      *(undefined8 *)param_3 = 0;
      return;
    }
    lVar3 = *(longlong *)(param_1 + 2);
    *(undefined4 *)(lVar3 + 0x30) = 0;
    if (*(int *)(lVar3 + 0x34) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(lVar3 + 0x28),0,(int *)(lVar3 + 0x34));
    }
    *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
    this = *(UMoviePipelineQueue **)(param_1 + 2);
    local_res18 = UMoviePipelineExecutorJob::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    this_00 = UMoviePipelineQueue::AllocateNewJob
                        (this,(TSubclassOf<UMoviePipelineExecutorJob>)&local_res18);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_48,pUVar6);
    UMoviePipelineExecutorJob::SetSequence(this_00,&local_48);
    pUVar6 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_48,pUVar6);
    FSoftObjectPath::operator=(&this_00->Map,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar7 = FSoftObjectPath::GetAssetName(&this_00->Sequence,(FString *)&local_48);
    pFVar1 = &this_00->JobName;
    if (pFVar1 != pFVar7) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->JobName).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this_00->JobName).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_48.AssetPath.PackageName != (FName)0x0) {
      FMemory::Free((void *)local_48.AssetPath.PackageName);
    }
    *(UMoviePipelineExecutorJob **)param_3 = this_00;
  }
  return;
}

// execGetActiveExecutor @ 14ddab2b0

void __cdecl
UMoviePipelineQueueEngineSubsystem::execGetActiveExecutor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x20;
  return;
}

// execGetQueue @ 14ddabb00

void __cdecl
UMoviePipelineQueueEngineSubsystem::execGetQueue(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 2);
  return;
}

// execIsRendering @ 14ddad3c0

void __cdecl
UMoviePipelineQueueEngineSubsystem::execIsRendering(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UMoviePipelineExecutorBase **)&param_1[1].field_0x20 != (UMoviePipelineExecutorBase *)0x0) {
    bVar1 = UMoviePipelineExecutorBase::IsRendering
                      (*(UMoviePipelineExecutorBase **)&param_1[1].field_0x20);
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRenderJob @ 14ddad880

void __cdecl
UMoviePipelineQueueEngineSubsystem::execRenderJob(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMoviePipelineExecutorJob *local_res10;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RenderJob((UMoviePipelineQueueEngineSubsystem *)param_1,local_res10);
  return;
}

// execRenderQueueWithExecutor @ 14ddad910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMoviePipelineQueueEngineSubsystem::execRenderQueueWithExecutor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  UMoviePipelineExecutorBase *pUVar5;
  UClass *pUVar6;
  FName local_res10;
  UClass *local_res18 [2];
  
  local_res18[0] = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar6 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res18[0] != (UClass *)0x0) goto LAB_14ddad99c;
LAB_14ddad9d1:
    bVar3 = `UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor'::__l3::<lambda_1>::
            operator()(&local_res10);
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    if (!bVar3) {
      FFrame::KismetExecutionMessage
                (L"RenderQueueWithExecutor cannot be called with a null class type!",Error,
                 (FName)0x0);
      *(undefined8 *)param_3 = 0;
      return;
    }
    if (pUVar6 != (UClass *)0x0) goto LAB_14ddada0a;
  }
  else {
    if (local_res18[0] == (UClass *)0x0) goto LAB_14ddad9d1;
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
LAB_14ddad99c:
    pUVar4 = Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
    if (pUVar4 == (UClass *)0x0) goto LAB_14ddad9d1;
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14ddad9d1;
LAB_14ddada0a:
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    pUVar4 = Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14ddada3b;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_14ddada3b:
  pUVar5 = NewObject<UMoviePipelineExecutorBase>
                     (param_1,pUVar6,local_res10,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  RenderQueueWithExecutorInstance((UMoviePipelineQueueEngineSubsystem *)param_1,pUVar5);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x20;
  return;
}

// execRenderQueueWithExecutorInstance @ 14ddada90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMoviePipelineQueueEngineSubsystem::execRenderQueueWithExecutorInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  bool bVar5;
  longlong local_res8;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UMoviePipelineExecutorBase **)&param_1[1].field_0x20 != (UMoviePipelineExecutorBase *)0x0) {
    bVar5 = UMoviePipelineExecutorBase::IsRendering
                      (*(UMoviePipelineExecutorBase **)&param_1[1].field_0x20);
    if (bVar5) {
      bVar5 = `UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance'::__l3::
              <lambda_1>::operator()(&local_res8);
      if (!bVar5) {
        local_res8 = 0;
        FFrame::KismetExecutionMessage(L"Render already in progress.",Error,(FName)0x0);
        return;
      }
    }
  }
  if (pUVar3 == (UObject *)0x0) {
    local_res8 = 0;
    FFrame::KismetExecutionMessage(L"Invalid executor supplied.",Error,(FName)0x0);
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)&param_1[1].field_0x20 = pUVar3;
  uVar1 = *(undefined1 *)(param_1 + 4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)&param_1[3].field_0x20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)&param_1[3].field_0x20);
  }
  pUVar3 = *(UObject **)&param_1[3].field_0x20;
  lVar4 = *(longlong *)&param_1[1].field_0x20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)(lVar4 + 0xd8) = pUVar3;
  *(undefined1 *)(lVar4 + 0xe0) = uVar1;
  TMulticastDelegateRegistration<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<UMoviePipelineQueueEngineSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
              *)(*(longlong *)&param_1[1].field_0x20 + 0x40),
             (UMoviePipelineQueueEngineSubsystem *)&local_res8,(pmf_cef27ba4)param_1);
  UMoviePipelineExecutorBase::Execute
            (*(UMoviePipelineExecutorBase **)&param_1[1].field_0x20,
             *(UMoviePipelineQueue **)(param_1 + 2));
  return;
}

// execSetConfiguration @ 14ddadcc0

void __cdecl
UMoviePipelineQueueEngineSubsystem::execSetConfiguration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  int local_res8 [2];
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pUVar2 = local_res10;
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res10 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res10);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  *(UObject **)&param_1[3].field_0x20 = pUVar2;
  *(bool *)(param_1 + 4) = bVar3;
  return;
}

// operator() @ 15058e9f0

bool __thiscall
`UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5465410884195057677>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5465410884195057677>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ea30

bool __thiscall
`UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5465410884195057689>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5465410884195057689>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

