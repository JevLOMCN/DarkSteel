// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 43

// StaticClass @ 14dd5c3b0

UClass * __cdecl UMoviePipelineExecutorShot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineExecutorShot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineExecutorShot",
               &Z_Registration_Info_UClass_UMoviePipelineExecutorShot.InnerSingleton,
               StaticRegisterNativesUMoviePipelineExecutorShot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineExecutorShot>,
               InternalVTableHelperCtorCaller<UMoviePipelineExecutorShot>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineExecutorShot.InnerSingleton;
}

// UMoviePipelineExecutorShot @ 14dd6b090

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipelineExecutorShot * __thiscall
UMoviePipelineExecutorShot::UMoviePipelineExecutorShot
          (UMoviePipelineExecutorShot *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineExecutorShot__6B_;
  (this->OuterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OuterName).Data.ArrayNum = 0;
  (this->OuterName).Data.ArrayMax = 0;
  (this->InnerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InnerName).Data.ArrayNum = 0;
  (this->InnerName).Data.ArrayMax = 0;
  (this->SidecarCameras).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SidecarCameras).ArrayNum = 0;
  (this->SidecarCameras).ArrayMax = 0;
  *(undefined8 *)&this->OnShotGraphPresetChanged = 0;
  *(undefined8 *)&(this->OnShotGraphPresetChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnShotGraphPresetChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnShotGraphPresetChanged).field_0x18 = 2;
  (this->ConsoleVariableOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleVariableOverrides).ArrayNum = 0;
  (this->ConsoleVariableOverrides).ArrayMax = 0;
  FMoviePipelineCameraCutInfo::FMoviePipelineCameraCutInfo(&this->ShotInfo);
  puVar1 = &(this->ShotOverridePresetOrigin).SoftObjectPtr.field_0x18;
  (this->StatusMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ShotOverridePresetOrigin).SoftObjectPtr.field_0x20 = 0;
  (this->StatusMessage).Data.ArrayNum = 0;
  (this->StatusMessage).Data.ArrayMax = 0;
  (this->ShotOverrideConfig).field0_0x0.DebugPtr = (UMoviePipelineShotConfig *)0x0;
  *(undefined8 *)&(this->ShotOverridePresetOrigin).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ShotOverridePresetOrigin).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ShotOverridePresetOrigin).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->GraphPreset).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->GraphVariableAssignments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphVariableAssignments).ArrayNum = 0;
  (this->GraphVariableAssignments).ArrayMax = 0;
  (this->PrimaryGraphVariableAssignments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimaryGraphVariableAssignments).ArrayNum = 0;
  (this->PrimaryGraphVariableAssignments).ArrayMax = 0;
  return this;
}

// ~UMoviePipelineExecutorShot @ 14dd6bff0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::~UMoviePipelineExecutorShot(UMoviePipelineExecutorShot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineExecutorShot__6B_;
  pFVar1 = (this->PrimaryGraphVariableAssignments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GraphVariableAssignments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->GraphPreset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->ShotOverridePresetOrigin).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->StatusMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShotInfo).WorkMetrics.SegmentName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             (this->ShotInfo).OuterToInnerTransform.NestedTransforms.AllocatorInstance.Data,
             (this->ShotInfo).OuterToInnerTransform.NestedTransforms.ArrayNum);
  pFVar1 = (this->ShotInfo).OuterToInnerTransform.NestedTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShotInfo).SubSectionHierarchy.SharedReferenceCount.ReferenceController);
  DestructItems<FMoviePipelineConsoleVariableEntry,int>
            ((FMoviePipelineConsoleVariableEntry *)
             (this->ConsoleVariableOverrides).AllocatorInstance.Data,
             (this->ConsoleVariableOverrides).ArrayNum);
  pFVar1 = (this->ConsoleVariableOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnShotGraphPresetChanged).field_0x8,
             *(int *)&(this->OnShotGraphPresetChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnShotGraphPresetChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnShotGraphPresetChanged);
  DestructItems<FMoviePipelineSidecarCamera,int>
            ((FMoviePipelineSidecarCamera *)(this->SidecarCameras).AllocatorInstance.Data,
             (this->SidecarCameras).ArrayNum);
  pFVar1 = (this->SidecarCameras).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InnerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OuterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AllocateNewShotOverrideConfig @ 14dd75a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMoviePipelineShotConfig * __thiscall
UMoviePipelineExecutorShot::AllocateNewShotOverrideConfig
          (UMoviePipelineExecutorShot *this,TSubclassOf<UMoviePipelineShotConfig> param_1)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UMoviePipelineShotConfig *this_00;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  FName local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar6 = UMoviePipelineShotConfig::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (*(longlong *)param_1.Class.field0_0x0 != 0)) goto LAB_14dd75ad2;
  }
  bVar5 = `UMoviePipelineExecutorShot::AllocateNewShotOverrideConfig'::__l3::<lambda_1>::operator()
                    (local_b8);
  if (!bVar5) {
    pUVar6 = UMoviePipelineShotConfig::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    *(UClass **)param_1.Class.field0_0x0 = pUVar6;
  }
LAB_14dd75ad2:
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar6 = (UClass *)0x0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  if ((lVar2 != 0) && (pUVar7 = UMoviePipelineShotConfig::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar6 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  FVar3 = local_b0;
  if (local_b0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = UMoviePipelineShotConfig::StaticClass();
  CheckIsClassChildOf_Internal(pUVar7,pUVar6);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  FVar4 = local_b0;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_b0.ComparisonIndex = FVar3.ComparisonIndex.Value;
  local_b0.Number = FVar3.Number;
  local_a8._16_4_ = local_b0.ComparisonIndex.Value;
  local_a8._20_4_ = local_b0.Number;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_b0 = FVar4;
  local_a8._8_8_ = this;
  this_00 = (UMoviePipelineShotConfig *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar8 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMoviePipelineShotConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->ShotOverrideConfig).field0_0x0.DebugPtr = this_00;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transactional);
  return (this->ShotOverrideConfig).field0_0x0.DebugPtr;
}

// BeginDestroy @ 14dd77c90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipelineExecutorShot::BeginDestroy(UMoviePipelineExecutorShot *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UMoviePipelineExecutorShot **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetCameraName @ 14dd86490

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMoviePipelineExecutorShot::GetCameraName
          (UMoviePipelineExecutorShot *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  
  if ((param_1 < 0) || ((this->SidecarCameras).ArrayNum <= param_1)) {
    pFVar4 = (FScriptContainerElement *)&this->InnerName;
  }
  else {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    pFVar4 = (this->SidecarCameras).AllocatorInstance.Data + ((longlong)param_1 * 5 + 3) * 8;
  }
  ::FString::FString(__return_storage_ptr__,(FString *)pFVar4);
  return __return_storage_ptr__;
}

// GetGraphVariableAssignments @ 14dd88730

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelineExecutorShot::GetGraphVariableAssignments
          (UMoviePipelineExecutorShot *this,bool param_1)

{
  if (param_1) {
    RefreshAllVariableAssignments(this);
    return &this->GraphVariableAssignments;
  }
  return &this->GraphVariableAssignments;
}

// GetOrCreateJobVariableAssignmentsForGraph @ 14dd8af80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieJobVariableAssignmentContainer * __thiscall
UMoviePipelineExecutorShot::GetOrCreateJobVariableAssignmentsForGraph
          (UMoviePipelineExecutorShot *this,UMovieGraphConfig *param_1,bool param_2)

{
  TObjectPtr<UMovieJobVariableAssignmentContainer> TVar1;
  
  if (param_1 != (UMovieGraphConfig *)0x0) {
    TVar1 = MoviePipeline::GetOrCreateJobVariableAssignmentsForGraph
                      ((UMovieGraphConfig *)&stack0x00000010,
                       (TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
                        *)param_1,(UObject *)(&this->GraphVariableAssignments + param_2));
    return *(UMovieJobVariableAssignmentContainer **)TVar1.field0_0x0;
  }
  return (UMovieJobVariableAssignmentContainer *)0x0;
}

// GetPrimaryGraphVariableAssignments @ 14dd8ba00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelineExecutorShot::GetPrimaryGraphVariableAssignments
          (UMoviePipelineExecutorShot *this,bool param_1)

{
  if (param_1) {
    RefreshAllVariableAssignments(this);
    return &this->PrimaryGraphVariableAssignments;
  }
  return &this->PrimaryGraphVariableAssignments;
}

// GetPrivateStaticClass @ 14dd8bba0

UClass * __cdecl UMoviePipelineExecutorShot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineExecutorShot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineExecutorShot",
               &Z_Registration_Info_UClass_UMoviePipelineExecutorShot.InnerSingleton,
               StaticRegisterNativesUMoviePipelineExecutorShot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineExecutorShot>,
               InternalVTableHelperCtorCaller<UMoviePipelineExecutorShot>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineExecutorShot.InnerSingleton;
}

// GetStatusMessage @ 14dd8d300

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMoviePipelineExecutorShot::GetStatusMessage
          (UMoviePipelineExecutorShot *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  void *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  longlong lVar3;
  void *local_18;
  undefined8 local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorShot_GetStatusMessage);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = (void *)0x0;
    local_10 = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    _Src = local_18;
    lVar3 = (longlong)(int)local_10;
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_10;
    if ((int)local_10 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_10,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_10,
                 piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
      return __return_storage_ptr__;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2c0))(this,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetStatusMessage_Implementation @ 14dd8d430

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMoviePipelineExecutorShot::GetStatusMessage_Implementation
          (UMoviePipelineExecutorShot *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->StatusMessage);
  return __return_storage_ptr__;
}

// GetStatusProgress @ 14dd8d4e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

float __thiscall UMoviePipelineExecutorShot::GetStatusProgress(UMoviePipelineExecutorShot *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  float fVar2;
  float local_res10 [6];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorShot_GetStatusProgress);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = 0.0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd8d545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)(this->_padding_ + 0x2c8))(this);
  return fVar2;
}

// GetStatusProgress_Implementation @ 14dd8d570

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

float __thiscall
UMoviePipelineExecutorShot::GetStatusProgress_Implementation(UMoviePipelineExecutorShot *this)

{
  return this->Progress;
}

// IsUsingGraphConfiguration @ 14dd902e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMoviePipelineExecutorShot::IsUsingGraphConfiguration(UMoviePipelineExecutorShot *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UMovieGraphConfig *pUVar3;
  
  pUVar1 = UMoviePipelineExecutorJob::StaticClass();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  pUVar3 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&this->GraphPreset);
  if (pUVar3 != (UMovieGraphConfig *)0x0) {
    return true;
  }
  if ((pUVar2 != (UObject *)0x0) &&
     (pUVar3 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                         ((TSoftObjectPtr<UMovieGraphConfig> *)&pUVar2[7].field_0x20),
     pUVar3 != (UMovieGraphConfig *)0x0)) {
    return true;
  }
  return false;
}

// OnGraphPreSave @ 14dd913d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::OnGraphPreSave
          (UMoviePipelineExecutorShot *this,UObject *param_1,FObjectPreSaveContext param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       (((param_2.Data)->TargetFilename).Data.AllocatorInstance.Data[0x41] ==
        (FScriptContainerElement)0x0)) {
      RefreshAllVariableAssignments(this);
    }
  }
  return;
}

// PostLoad @ 14dd95b80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipelineExecutorShot::PostLoad(UMoviePipelineExecutorShot *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UMoviePipelineExecutorShot **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PreSave @ 14dd95cc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::PreSave(UMoviePipelineExecutorShot *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  RefreshAllVariableAssignments(this);
  return;
}

// RefreshAllVariableAssignments @ 14dd986d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::RefreshAllVariableAssignments(UMoviePipelineExecutorShot *this)

{
  UMovieGraphConfig *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar1 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&this->GraphPreset);
  MoviePipeline::RefreshVariableAssignments(pUVar1,&this->GraphVariableAssignments,(UObject *)this);
  pUVar2 = UMoviePipelineExecutorJob::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 != (UObject *)0x0) {
    pUVar1 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                       ((TSoftObjectPtr<UMovieGraphConfig> *)&pUVar3[7].field_0x20);
    MoviePipeline::RefreshVariableAssignments
              (pUVar1,&this->PrimaryGraphVariableAssignments,(UObject *)this);
  }
  return;
}

// SetGraphPreset @ 14dda26f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::SetGraphPreset
          (UMoviePipelineExecutorShot *this,UMovieGraphConfig *param_1,bool param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  int iVar10;
  longlong lVar11;
  UMovieGraphConfig *local_res8;
  FDestructionSentinel local_48;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=(&(this->GraphPreset).SoftObjectPtr,(FObjectPtr)&local_res8);
  if (param_2) {
    RefreshAllVariableAssignments(this);
  }
  pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->GraphPreset);
  if (pUVar8 != (UObject *)0x0) {
    pUVar9 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
    iVar10 = (int)pUVar9->_padding_;
    if ((iVar10 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar9->_padding_)) goto LAB_14dda278b;
  }
  pUVar8 = (UObject *)0x0;
LAB_14dda278b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnShotGraphPresetChanged,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnShotGraphPresetChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  iVar10 = *(int *)&(this->OnShotGraphPresetChanged).field_0x10 + -1;
  if (-1 < iVar10) {
    lVar11 = (longlong)iVar10 << 4;
    bVar5 = false;
    do {
      if ((*(int *)&(this->OnShotGraphPresetChanged).field_0x10 <= iVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnShotGraphPresetChanged).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,this,pUVar8), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar11 = lVar11 + -0x10;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  puVar1 = &(this->OnShotGraphPresetChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnShotGraphPresetChanged
               ,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// SetShotOverrideConfiguration @ 14dda35e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::SetShotOverrideConfiguration
          (UMoviePipelineExecutorShot *this,UMoviePipelineShotConfig *param_1)

{
  UMoviePipelineShotConfig *pUVar1;
  UClass *local_res8;
  
  if (param_1 == (UMoviePipelineShotConfig *)0x0) {
    (this->ShotOverrideConfig).field0_0x0.DebugPtr = (UMoviePipelineShotConfig *)0x0;
  }
  else {
    if ((this->ShotOverrideConfig).field0_0x0.DebugPtr == (UMoviePipelineShotConfig *)0x0) {
      local_res8 = UMoviePipelineShotConfig::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      AllocateNewShotOverrideConfig(this,(TSubclassOf<UMoviePipelineShotConfig>)&local_res8);
    }
    pUVar1 = (this->ShotOverrideConfig).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1,param_1);
  }
  local_res8 = (UClass *)0x0;
  FSoftObjectPtr::operator=(&(this->ShotOverridePresetOrigin).SoftObjectPtr,(FObjectPtr)&local_res8)
  ;
  return;
}

// SetShotOverridePresetOrigin @ 14dda3680

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::SetShotOverridePresetOrigin
          (UMoviePipelineExecutorShot *this,UMoviePipelineShotConfig *param_1)

{
  UClass *local_res10 [3];
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  if (param_1 == (UMoviePipelineShotConfig *)0x0) {
    *(undefined8 *)&(this->ShotOverridePresetOrigin).SoftObjectPtr = 0;
    *(undefined8 *)&(this->ShotOverridePresetOrigin).SoftObjectPtr.field_0x10 = 0;
    *(undefined8 *)&(this->ShotOverridePresetOrigin).SoftObjectPtr.field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->ShotOverridePresetOrigin).SoftObjectPtr.field_0x18,0);
  }
  else {
    if ((this->ShotOverrideConfig).field0_0x0.DebugPtr == (UMoviePipelineShotConfig *)0x0) {
      local_res10[0] = UMoviePipelineShotConfig::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_res10[0]);
      }
      AllocateNewShotOverrideConfig(this,(TSubclassOf<UMoviePipelineShotConfig>)local_res10);
    }
    (**(code **)(*(longlong *)(this->ShotOverrideConfig).field0_0x0.DebugPtr + 0x2b8))();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ObjectID.SubPathString.Data.ArrayNum = 0;
    local_38.ObjectID.SubPathString.Data.ArrayMax = 0;
    local_38.WeakPtr.ObjectIndex = 0;
    local_38.WeakPtr.ObjectSerialNumber = 0;
    local_38.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_38.ObjectID.AssetPath.AssetName.Number = 0;
    local_38.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_38.ObjectID.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_38.ObjectID.SubPathString,0);
    local_res10[0] = (UClass *)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_38,(FObjectPtr)local_res10);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ShotOverridePresetOrigin,&local_38);
    if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// SetStatusMessage @ 14dda4530

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::SetStatusMessage(UMoviePipelineExecutorShot *this,FString *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  FString local_18;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorShot_SetStatusMessage);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    if (&local_18 != param_1) {
      uVar1 = (param_1->Data).ArrayNum;
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_18.Data.ArrayMax = 0;
      local_18.Data.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
        memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2b0))(this,param_1);
  }
  return;
}

// SetStatusMessage_Implementation @ 14dda4650

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::SetStatusMessage_Implementation
          (UMoviePipelineExecutorShot *this,FString *param_1)

{
  ::FString::operator=(&this->StatusMessage,param_1);
  return;
}

// SetStatusProgress @ 14dda46f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::SetStatusProgress(UMoviePipelineExecutorShot *this,float param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  float local_res18 [4];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorShot_SetStatusProgress);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dda4762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,param_1);
  return;
}

// SetStatusProgress_Implementation @ 14dda4780

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorShot::SetStatusProgress_Implementation
          (UMoviePipelineExecutorShot *this,float param_1)

{
  this->Progress = param_1;
  return;
}

// StaticRegisterNativesUMoviePipelineExecutorShot @ 14dda6680

void __cdecl UMoviePipelineExecutorShot::StaticRegisterNativesUMoviePipelineExecutorShot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineExecutorShot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAllocateNewShotOverrideConfig @ 14ddaa830

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineExecutorShot::execAllocateNewShotOverrideConfig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMoviePipelineShotConfig *pUVar2;
  UObject *local_res10;
  UObject *local_res18 [2];
  
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
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar2 = AllocateNewShotOverrideConfig
                     ((UMoviePipelineExecutorShot *)param_1,
                      (TSubclassOf<UMoviePipelineShotConfig>)local_res18);
  *(UMoviePipelineShotConfig **)param_3 = pUVar2;
  return;
}

// execGetCameraName @ 14ddab410

void __cdecl
UMoviePipelineExecutorShot::execGetCameraName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint local_res10 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_res10[0];
  if (((int)local_res10[0] < 0) || (*(int *)&param_1[2].field_0x8 <= (int)local_res10[0])) {
    iVar1 = *(int *)&param_1[1].field_0x20;
    _Src = *(void **)&param_1[1].field_0x18;
    local_20 = CONCAT44(local_20._4_4_,iVar1);
  }
  else {
    uVar5 = 0;
    if ((int)local_res10[0] < *(int *)&param_1[2].field_0x8) {
      uVar5 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 2) + 0x20 + lVar6 * 0x28);
    _Src = *(void **)(*(longlong *)(param_1 + 2) + 0x18 + lVar6 * 0x28);
    local_20 = CONCAT44(local_20._4_4_,iVar1);
  }
  if (iVar1 == 0) {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = local_20 & 0xffffffff;
  }
  else {
    local_28.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// execGetGraphPreset @ 14ddab730

void __cdecl
UMoviePipelineExecutorShot::execGetGraphPreset(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieGraphConfig *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                     ((TSoftObjectPtr<UMovieGraphConfig> *)&param_1[10].field_0x20);
  *(UMovieGraphConfig **)param_3 = pUVar1;
  return;
}

// execGetOrCreateJobVariableAssignmentsForGraph @ 14ddab950

void __cdecl
UMoviePipelineExecutorShot::execGetOrCreateJobVariableAssignmentsForGraph
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UMovieJobVariableAssignmentContainer> TVar2;
  longlong lVar3;
  int local_res10 [2];
  TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
  *local_res18 [2];
  
  local_res18[0] =
       (TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
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
  if (local_res18[0] !=
      (TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *)0x0) {
    lVar3 = 0x1d8;
    if (local_res10[0] != 0) {
      lVar3 = 0x1e8;
    }
    TVar2 = MoviePipeline::GetOrCreateJobVariableAssignmentsForGraph
                      ((UMovieGraphConfig *)(local_res18 + 1),local_res18[0],
                       (UObject *)(&param_1->field_0x0 + lVar3));
    *(undefined8 *)param_3 = *(undefined8 *)TVar2.field0_0x0;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetShotOverrideConfiguration @ 14ddabbe0

void __cdecl
UMoviePipelineExecutorShot::execGetShotOverrideConfiguration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[9].field_0x18;
  return;
}

// execGetShotOverridePresetOrigin @ 14ddabc10

void __cdecl
UMoviePipelineExecutorShot::execGetShotOverridePresetOrigin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[9].field_0x20);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UMoviePipelineShotConfig::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(UObject **)param_3 = pUVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetStatusMessage @ 14ddabd20

void __cdecl
UMoviePipelineExecutorShot::execGetStatusMessage(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetStatusProgress @ 14ddabdf0

void __cdecl
UMoviePipelineExecutorShot::execGetStatusProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execIsUsingGraphConfiguration @ 14ddad450

void __cdecl
UMoviePipelineExecutorShot::execIsUsingGraphConfiguration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UMovieGraphConfig *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UMoviePipelineExecutorJob::StaticClass();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
  pUVar3 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                     ((TSoftObjectPtr<UMovieGraphConfig> *)&param_1[10].field_0x20);
  if (pUVar3 == (UMovieGraphConfig *)0x0) {
    if (pUVar2 != (UObject *)0x0) {
      pUVar3 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                         ((TSoftObjectPtr<UMovieGraphConfig> *)&pUVar2[7].field_0x20);
      if (pUVar3 != (UMovieGraphConfig *)0x0) goto LAB_14ddad4c7;
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
LAB_14ddad4c7:
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetGraphPreset @ 14ddadf50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineExecutorShot::execSetGraphPreset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UMovieGraphConfig *local_res20;
  
  local_res20 = (UMovieGraphConfig *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
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
  SetGraphPreset((UMoviePipelineExecutorShot *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execSetShotOverrideConfiguration @ 14ddae530

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineExecutorShot::execSetShotOverrideConfiguration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong local_res8;
  UClass *local_res10;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8 == 0) {
    *(undefined8 *)&param_1[9].field_0x18 = 0;
  }
  else {
    if (*(longlong *)&param_1[9].field_0x18 == 0) {
      local_res10 = UMoviePipelineShotConfig::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      AllocateNewShotOverrideConfig
                ((UMoviePipelineExecutorShot *)param_1,
                 (TSubclassOf<UMoviePipelineShotConfig>)&local_res10);
    }
    (**(code **)(**(longlong **)&param_1[9].field_0x18 + 0x2b8))
              (*(longlong **)&param_1[9].field_0x18,lVar2);
  }
  local_res10 = (UClass *)0x0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&param_1[9].field_0x20,(FObjectPtr)&local_res10);
  return;
}

// execSetShotOverridePresetOrigin @ 14ddae630

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineExecutorShot::execSetShotOverridePresetOrigin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res10;
  UClass *local_res20;
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
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
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    *(undefined8 *)&param_1[9].field_0x20 = 0;
    *(undefined8 *)&param_1[10].field_0x8 = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    FUtf8String::Reset((FUtf8String *)&param_1[10].field_0x10,0);
  }
  else {
    if (*(longlong *)&param_1[9].field_0x18 == 0) {
      local_res20 = UMoviePipelineShotConfig::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      AllocateNewShotOverrideConfig
                ((UMoviePipelineExecutorShot *)param_1,
                 (TSubclassOf<UMoviePipelineShotConfig>)&local_res20);
    }
    (**(code **)(**(longlong **)&param_1[9].field_0x18 + 0x2b8))();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ObjectID.SubPathString.Data.ArrayNum = 0;
    local_38.ObjectID.SubPathString.Data.ArrayMax = 0;
    local_38.WeakPtr.ObjectIndex = 0;
    local_38.WeakPtr.ObjectSerialNumber = 0;
    local_38.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_38.ObjectID.AssetPath.AssetName.Number = 0;
    local_38.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_38.ObjectID.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_38.ObjectID.SubPathString,0);
    local_res20 = (UClass *)pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_38,(FObjectPtr)&local_res20);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[9].field_0x20,&local_38);
    if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// execSetStatusMessage @ 14ddae870

void __cdecl
UMoviePipelineExecutorShot::execSetStatusMessage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetStatusProgress @ 14ddae9b0

void __cdecl
UMoviePipelineExecutorShot::execSetStatusProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8[0]);
  return;
}

// execShouldRender @ 14ddaf8f0

void __cdecl
UMoviePipelineExecutorShot::execShouldRender(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 1);
  return;
}

// operator() @ 15058e930

bool __thiscall
`UMoviePipelineExecutorShot::AllocateNewShotOverrideConfig'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1138960898094792317>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1138960898094792317>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

