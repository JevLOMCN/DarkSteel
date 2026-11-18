// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 56

// GetPresetOrigin @ 14dd2c180

UMoviePipelinePrimaryConfig * __thiscall
UMoviePipelineExecutorJob::GetPresetOrigin(UMoviePipelineExecutorJob *this)

{
  int iVar1;
  UMoviePipelinePrimaryConfig *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMoviePipelinePrimaryConfig *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->PresetOrigin);
  if (pUVar2 == (UMoviePipelinePrimaryConfig *)0x0) {
    if (*(longlong *)&(this->PresetOrigin).SoftObjectPtr.field_0x8 == 0) {
      return (UMoviePipelinePrimaryConfig *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->PresetOrigin).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (UMoviePipelinePrimaryConfig *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->PresetOrigin);
  }
  if (pUVar2 != (UMoviePipelinePrimaryConfig *)0x0) {
    pUVar3 = Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMoviePipelinePrimaryConfig *)0x0;
}

// StaticClass @ 14dd5da50

UClass * __cdecl UMoviePipelineExecutorJob::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineExecutorJob.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineExecutorJob",
               &Z_Registration_Info_UClass_UMoviePipelineExecutorJob.InnerSingleton,
               StaticRegisterNativesUMoviePipelineExecutorJob,0x170,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMoviePipelineExecutorJob>,
               InternalVTableHelperCtorCaller<UMoviePipelineExecutorJob>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineExecutorJob.InnerSingleton;
}

// UMoviePipelineExecutorJob @ 14dd6adb0

UMoviePipelineExecutorJob * __thiscall
UMoviePipelineExecutorJob::UMoviePipelineExecutorJob
          (UMoviePipelineExecutorJob *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->PresetOrigin).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMoviePipelineExecutorJob__6B_;
  (this->JobName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JobName).Data.ArrayNum = 0;
  (this->JobName).Data.ArrayMax = 0;
  (this->Sequence).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Sequence).AssetPath.PackageName.Number = 0;
  (this->Sequence).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Sequence).AssetPath.AssetName.Number = 0;
  (this->Sequence).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sequence).SubPathString.Data.ArrayNum = 0;
  (this->Sequence).SubPathString.Data.ArrayMax = 0;
  (this->Map).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Map).AssetPath.PackageName.Number = 0;
  (this->Map).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Map).AssetPath.AssetName.Number = 0;
  (this->Map).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Map).SubPathString.Data.ArrayNum = 0;
  (this->Map).SubPathString.Data.ArrayMax = 0;
  (this->Author).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.ArrayNum = 0;
  (this->Author).Data.ArrayMax = 0;
  (this->Comment).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Comment).Data.ArrayNum = 0;
  (this->Comment).Data.ArrayMax = 0;
  (this->ShotInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShotInfo).ArrayNum = 0;
  (this->ShotInfo).ArrayMax = 0;
  (this->UserData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserData).Data.ArrayNum = 0;
  (this->UserData).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnJobGraphPresetChanged = 0;
  *(undefined8 *)&(this->OnJobGraphPresetChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnJobGraphPresetChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnJobGraphPresetChanged).field_0x18 = 2;
  (this->ConsoleVariableOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleVariableOverrides).ArrayNum = 0;
  (this->ConsoleVariableOverrides).ArrayMax = 0;
  (this->StatusMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusMessage).Data.ArrayNum = 0;
  (this->StatusMessage).Data.ArrayMax = 0;
  (this->Configuration).field0_0x0.DebugPtr = (UMoviePipelinePrimaryConfig *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->PresetOrigin).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PresetOrigin).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PresetOrigin).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PresetOrigin).SoftObjectPtr.field_0x8 = 0;
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
  return this;
}

// UMoviePipelineExecutorJob @ 14dd6aef0

UMoviePipelineExecutorJob * __thiscall
UMoviePipelineExecutorJob::UMoviePipelineExecutorJob(UMoviePipelineExecutorJob *this)

{
  undefined1 *puVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UMoviePipelinePrimaryConfig *pUVar5;
  FName local_res8;
  
  UObject::UObject((UObject *)this);
  puVar1 = &(this->PresetOrigin).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMoviePipelineExecutorJob__6B_;
  (this->JobName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JobName).Data.ArrayNum = 0;
  (this->JobName).Data.ArrayMax = 0;
  (this->Sequence).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Sequence).AssetPath.PackageName.Number = 0;
  (this->Sequence).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Sequence).AssetPath.AssetName.Number = 0;
  (this->Sequence).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sequence).SubPathString.Data.ArrayNum = 0;
  (this->Sequence).SubPathString.Data.ArrayMax = 0;
  (this->Map).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Map).AssetPath.PackageName.Number = 0;
  (this->Map).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Map).AssetPath.AssetName.Number = 0;
  (this->Map).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Map).SubPathString.Data.ArrayNum = 0;
  (this->Map).SubPathString.Data.ArrayMax = 0;
  (this->Author).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.ArrayNum = 0;
  (this->Author).Data.ArrayMax = 0;
  (this->Comment).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Comment).Data.ArrayNum = 0;
  (this->Comment).Data.ArrayMax = 0;
  (this->ShotInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShotInfo).ArrayNum = 0;
  (this->ShotInfo).ArrayMax = 0;
  (this->UserData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserData).Data.ArrayNum = 0;
  (this->UserData).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnJobGraphPresetChanged = 0;
  *(undefined8 *)&(this->OnJobGraphPresetChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnJobGraphPresetChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnJobGraphPresetChanged).field_0x18 = 2;
  (this->ConsoleVariableOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleVariableOverrides).ArrayNum = 0;
  (this->ConsoleVariableOverrides).ArrayMax = 0;
  (this->StatusMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusMessage).Data.ArrayNum = 0;
  (this->StatusMessage).Data.ArrayMax = 0;
  (this->Configuration).field0_0x0.DebugPtr = (UMoviePipelinePrimaryConfig *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->PresetOrigin).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PresetOrigin).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PresetOrigin).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PresetOrigin).SoftObjectPtr.field_0x8 = 0;
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
  this->bEnabled = true;
  this->StatusProgress = 0.0;
  this->bIsConsumed = false;
  pFVar3 = ::FName::FName(&local_res8,"DefaultConfig");
  FVar2 = *pFVar3;
  pUVar4 = UMoviePipelinePrimaryConfig::StaticClass();
  pUVar5 = (UMoviePipelinePrimaryConfig *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UMoviePipelinePrimaryConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Configuration).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~UMoviePipelineExecutorJob @ 14dd6bec0

void __thiscall
UMoviePipelineExecutorJob::~UMoviePipelineExecutorJob(UMoviePipelineExecutorJob *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineExecutorJob__6B_;
  pFVar1 = (this->GraphVariableAssignments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->GraphPreset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->PresetOrigin).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->StatusMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
              &(this->OnJobGraphPresetChanged).field_0x8,
             *(int *)&(this->OnJobGraphPresetChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnJobGraphPresetChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnJobGraphPresetChanged);
  pFVar1 = (this->UserData).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShotInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Comment).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Author).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Map).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sequence).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JobName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14dd77c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipelineExecutorJob::BeginDestroy(UMoviePipelineExecutorJob *this)

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
    while (*(UMoviePipelineExecutorJob **)FVar3 != this) {
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

// GetGraphVariableAssignments @ 14dd886f0

TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelineExecutorJob::GetGraphVariableAssignments(UMoviePipelineExecutorJob *this,bool param_1)

{
  if (param_1) {
    RefreshAllVariableAssignments(this);
    return &this->GraphVariableAssignments;
  }
  return &this->GraphVariableAssignments;
}

// GetOrCreateJobVariableAssignmentsForGraph @ 14dd8af40

UMovieJobVariableAssignmentContainer * __thiscall
UMoviePipelineExecutorJob::GetOrCreateJobVariableAssignmentsForGraph
          (UMoviePipelineExecutorJob *this,UMovieGraphConfig *param_1)

{
  TObjectPtr<UMovieJobVariableAssignmentContainer> TVar1;
  
  if (param_1 != (UMovieGraphConfig *)0x0) {
    TVar1 = MoviePipeline::GetOrCreateJobVariableAssignmentsForGraph
                      ((UMovieGraphConfig *)&stack0x00000010,
                       (TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
                        *)param_1,(UObject *)&this->GraphVariableAssignments);
    return *(UMovieJobVariableAssignmentContainer **)TVar1.field0_0x0;
  }
  return (UMovieJobVariableAssignmentContainer *)0x0;
}

// GetPrivateStaticClass @ 14dd8baf0

UClass * __cdecl UMoviePipelineExecutorJob::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineExecutorJob.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineExecutorJob",
               &Z_Registration_Info_UClass_UMoviePipelineExecutorJob.InnerSingleton,
               StaticRegisterNativesUMoviePipelineExecutorJob,0x170,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMoviePipelineExecutorJob>,
               InternalVTableHelperCtorCaller<UMoviePipelineExecutorJob>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineExecutorJob.InnerSingleton;
}

// GetStatusMessage @ 14dd8d200

FString * __thiscall
UMoviePipelineExecutorJob::GetStatusMessage
          (UMoviePipelineExecutorJob *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  void *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  longlong lVar3;
  void *local_18;
  undefined8 local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorJob_GetStatusMessage);
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
    (**(code **)(this->_padding_ + 0x2c8))(this,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetStatusMessage_Implementation @ 14dd8d400

FString * __thiscall
UMoviePipelineExecutorJob::GetStatusMessage_Implementation
          (UMoviePipelineExecutorJob *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->StatusMessage);
  return __return_storage_ptr__;
}

// GetStatusProgress @ 14dd8d460

float __thiscall UMoviePipelineExecutorJob::GetStatusProgress(UMoviePipelineExecutorJob *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  float fVar2;
  float local_res10 [6];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorJob_GetStatusProgress);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = 0.0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd8d4c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)(this->_padding_ + 0x2d0))(this);
  return fVar2;
}

// GetStatusProgress_Implementation @ 14dd8d560

float __thiscall
UMoviePipelineExecutorJob::GetStatusProgress_Implementation(UMoviePipelineExecutorJob *this)

{
  return this->StatusProgress;
}

// IsConsumed @ 14dd8fe00

bool __thiscall UMoviePipelineExecutorJob::IsConsumed(UMoviePipelineExecutorJob *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UMoviePipelineExecutorJob_IsConsumed);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd8fe64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2d8))(this);
  return (bool)uVar1;
}

// IsConsumed_Implementation @ 14dd8fe80

bool __thiscall
UMoviePipelineExecutorJob::IsConsumed_Implementation(UMoviePipelineExecutorJob *this)

{
  return this->bIsConsumed;
}

// IsEnabled @ 14dd8fe90

bool __thiscall UMoviePipelineExecutorJob::IsEnabled(UMoviePipelineExecutorJob *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UMoviePipelineExecutorJob_IsEnabled);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd8fef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2f0))(this);
  return (bool)uVar1;
}

// IsEnabled_Implementation @ 14dd8ff10

bool __thiscall UMoviePipelineExecutorJob::IsEnabled_Implementation(UMoviePipelineExecutorJob *this)

{
  return this->bEnabled;
}

// OnDuplicated @ 14dd91030

void __thiscall UMoviePipelineExecutorJob::OnDuplicated(UMoviePipelineExecutorJob *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorJob_OnDuplicated);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014dd91073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd91084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))(this);
  return;
}

// OnDuplicated_Implementation @ 14dd910a0

void __thiscall
UMoviePipelineExecutorJob::OnDuplicated_Implementation(UMoviePipelineExecutorJob *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  UFunction *this_00;
  UClass *pUVar3;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  
  pFVar1 = &this->UserData;
  if (pFVar1 != (FString *)local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UserData).Data.ArrayNum = 0;
    (this->UserData).Data.ArrayMax = 0;
  }
  pFVar1 = &this->StatusMessage;
  if (pFVar1 != (FString *)local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->StatusMessage).Data.ArrayNum = 0;
    (this->StatusMessage).Data.ArrayMax = 0;
  }
  this->StatusProgress = 0.0;
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UMoviePipelineExecutorJob_SetConsumed)
  ;
  pUVar3 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar3->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8[0] = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd91162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,0);
  return;
}

// OnGraphPreSave @ 14dd91360

void __thiscall
UMoviePipelineExecutorJob::OnGraphPreSave
          (UMoviePipelineExecutorJob *this,UObject *param_1,FObjectPreSaveContext param_2)

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

// OnSequenceSetEvent @ 14dd94ce0

TMulticastDelegate<void___cdecl(UMoviePipelineExecutorJob_*,ULevelSequence_*),FDefaultDelegateUserPolicy>
* __cdecl UMoviePipelineExecutorJob::OnSequenceSetEvent(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMoviePipelineExecutorJob::OnSequenceSetEvent'::__l2::
             _dynamic_atexit_destructor_for__OnSequenceSetEvent__);
      _Init_thread_footer(&::_TSS0);
      return &::OnSequenceSetEvent;
    }
  }
  return &::OnSequenceSetEvent;
}

// PostLoad @ 14dd95b70

void __thiscall UMoviePipelineExecutorJob::PostLoad(UMoviePipelineExecutorJob *this)

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
    if (*(UMoviePipelineExecutorJob **)FVar5 == this) {
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

// PreSave @ 14dd95c80

void __thiscall
UMoviePipelineExecutorJob::PreSave(UMoviePipelineExecutorJob *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  RefreshAllVariableAssignments(this);
  return;
}

// RefreshAllVariableAssignments @ 14dd985e0

void __thiscall
UMoviePipelineExecutorJob::RefreshAllVariableAssignments(UMoviePipelineExecutorJob *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  UMovieGraphConfig *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pUVar3 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&this->GraphPreset);
  MoviePipeline::RefreshVariableAssignments(pUVar3,&this->GraphVariableAssignments,(UObject *)this);
  pFVar6 = (this->ShotInfo).AllocatorInstance.Data;
  iVar2 = (this->ShotInfo).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ShotInfo).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    this_00 = *(UObjectBaseUtility **)pFVar6;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar3 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                         ((TSoftObjectPtr<UMovieGraphConfig> *)&this_00[10].field_0x20);
      MoviePipeline::RefreshVariableAssignments
                (pUVar3,(TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
                         *)&this_00[0xb].field_0x20,(UObject *)this_00);
      pUVar4 = StaticClass();
      pUVar5 = UObjectBaseUtility::GetTypedOuter(this_00,pUVar4);
      if (pUVar5 != (UObject *)0x0) {
        pUVar3 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                           ((TSoftObjectPtr<UMovieGraphConfig> *)&pUVar5[7].field_0x20);
        MoviePipeline::RefreshVariableAssignments
                  (pUVar3,(TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
                           *)&this_00[0xc].field_0x8,(UObject *)this_00);
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// SetConfiguration @ 14dda2220

void __thiscall
UMoviePipelineExecutorJob::SetConfiguration
          (UMoviePipelineExecutorJob *this,UMoviePipelinePrimaryConfig *param_1)

{
  undefined8 local_res10 [3];
  
  if (param_1 != (UMoviePipelinePrimaryConfig *)0x0) {
    (**(code **)(((this->Configuration).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
    local_res10[0] = 0;
    FSoftObjectPtr::operator=(&(this->PresetOrigin).SoftObjectPtr,(FObjectPtr)local_res10);
  }
  return;
}

// SetConsumed @ 14dda22d0

void __thiscall UMoviePipelineExecutorJob::SetConsumed(UMoviePipelineExecutorJob *this,bool param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 local_res18 [16];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UMoviePipelineExecutorJob_SetConsumed)
  ;
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dda2342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  return;
}

// SetConsumed_Implementation @ 14dda2350

void __thiscall
UMoviePipelineExecutorJob::SetConsumed_Implementation(UMoviePipelineExecutorJob *this,bool param_1)

{
  this->bIsConsumed = param_1;
  return;
}

// SetGraphPreset @ 14dda24e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorJob::SetGraphPreset
          (UMoviePipelineExecutorJob *this,UMovieGraphConfig *param_1,bool param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  UMovieGraphConfig *local_res8;
  undefined1 local_res18 [8];
  FDestructionSentinel local_48;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FSoftObjectPtr::operator=(&(this->GraphPreset).SoftObjectPtr,(FObjectPtr)&local_res8);
  }
  else {
    FSoftObjectPtr::operator=(&(this->GraphPreset).SoftObjectPtr,(FObjectPtr)&local_res8);
    if (param_1 == (UMovieGraphConfig *)0x0) {
      pFVar12 = (this->ShotInfo).AllocatorInstance.Data;
      iVar11 = (this->ShotInfo).ArrayNum;
      pFVar2 = pFVar12 + (longlong)iVar11 * 8;
      while( true ) {
        if ((this->ShotInfo).ArrayNum != iVar11) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (pFVar12 == pFVar2) break;
        UMoviePipelineExecutorShot::SetGraphPreset
                  (*(UMoviePipelineExecutorShot **)pFVar12,(UMovieGraphConfig *)0x0,true);
        pFVar12 = pFVar12 + 8;
      }
    }
  }
  if (param_2) {
    RefreshAllVariableAssignments(this);
  }
  pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->GraphPreset);
  if (pUVar9 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_UMovieGraphConfig_NoRegister();
    iVar11 = (int)pUVar10->_padding_;
    if ((iVar11 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar10->_padding_)) goto LAB_14dda2591;
  }
  pUVar9 = (UObject *)0x0;
LAB_14dda2591:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnJobGraphPresetChanged,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnJobGraphPresetChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  iVar11 = *(int *)&(this->OnJobGraphPresetChanged).field_0x10 + -1;
  if (-1 < iVar11) {
    lVar13 = (longlong)iVar11 << 4;
    bVar6 = false;
    do {
      if (*(int *)&(this->OnJobGraphPresetChanged).field_0x10 <= iVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar3 = *(longlong *)&(this->OnJobGraphPresetChanged).field_0x8;
      if ((*(int *)(lVar13 + 8 + lVar3) == 0) ||
         (plVar4 = *(longlong **)(lVar13 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_14dda2612:
        bVar6 = true;
      }
      else {
        cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,this,pUVar9);
        if (cVar8 == '\0') goto LAB_14dda2612;
      }
      lVar13 = lVar13 + -0x10;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  puVar1 = &(this->OnJobGraphPresetChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnJobGraphPresetChanged,
               false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// SetIsEnabled @ 14dda2890

void __thiscall
UMoviePipelineExecutorJob::SetIsEnabled(UMoviePipelineExecutorJob *this,bool param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 local_res18 [16];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorJob_SetIsEnabled);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dda2902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))(this,param_1);
  return;
}

// SetIsEnabled_Implementation @ 14dda2910

void __thiscall
UMoviePipelineExecutorJob::SetIsEnabled_Implementation(UMoviePipelineExecutorJob *this,bool param_1)

{
  this->bEnabled = param_1;
  return;
}

// SetPresetOrigin @ 14dda3130

void __thiscall
UMoviePipelineExecutorJob::SetPresetOrigin
          (UMoviePipelineExecutorJob *this,UMoviePipelinePrimaryConfig *param_1)

{
  UMoviePipelinePrimaryConfig *local_res10 [3];
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  if (param_1 != (UMoviePipelinePrimaryConfig *)0x0) {
    (**(code **)(((this->Configuration).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
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
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_38,(FObjectPtr)local_res10);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&this->PresetOrigin,&local_38);
    if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetSequence @ 14dda3380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMoviePipelineExecutorJob::SetSequence(UMoviePipelineExecutorJob *this,FSoftObjectPath *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  ULevelSequence *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool local_res8 [8];
  FDestructionSentinel local_48;
  
  FSoftObjectPath::operator=(&this->Sequence,param_1);
  (this->ShotInfo).ArrayNum = 0;
  if ((this->ShotInfo).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ShotInfo).AllocatorInstance,0,&(this->ShotInfo).ArrayMax);
  }
  pUVar7 = (ULevelSequence *)
           FSoftObjectPath::TryLoad(&this->Sequence,(FUObjectSerializeContext *)0x0);
  if (pUVar7 != (ULevelSequence *)0x0) {
    pUVar8 = Z_Construct_UClass_ULevelSequence_NoRegister();
    iVar10 = (int)pUVar8->_padding_;
    if ((iVar10 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar10 * 8)
        == &pUVar8->_padding_)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ::OnSequenceSetEvent._16_8_ = ___xmm_00000000000000020000000000000000;
          ::OnSequenceSetEvent._24_8_ = _UNK_150631d48;
          ::OnSequenceSetEvent._0_8_ = 0;
          ::OnSequenceSetEvent._8_8_ = 0;
          atexit(`UMoviePipelineExecutorJob::OnSequenceSetEvent'::__l2::
                 _dynamic_atexit_destructor_for__OnSequenceSetEvent__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&::OnSequenceSetEvent,
                 (FWriteAccessScope *)&local_48);
      bVar4 = false;
      iVar10 = ::OnSequenceSetEvent._28_4_ + 1;
      iVar11 = ::OnSequenceSetEvent._16_4_ + -1;
      ::OnSequenceSetEvent._28_4_ = iVar10;
      if (-1 < iVar11) {
        lVar12 = (longlong)iVar11 << 4;
        bVar4 = false;
        do {
          if ((int)::OnSequenceSetEvent._16_4_ <= iVar11) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if ((*(int *)(lVar12 + 8 + ::OnSequenceSetEvent._8_8_) == 0) ||
             (plVar1 = *(longlong **)(lVar12 + ::OnSequenceSetEvent._8_8_),
             plVar1 == (longlong *)0x0)) {
LAB_14dda34e2:
            bVar4 = true;
          }
          else {
            cVar6 = (**(code **)(*plVar1 + 0x68))(plVar1,this,pUVar7);
            if (cVar6 == '\0') goto LAB_14dda34e2;
          }
          lVar12 = lVar12 + -0x10;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
        iVar10 = ::OnSequenceSetEvent._28_4_;
      }
      ::OnSequenceSetEvent._28_4_ = iVar10 + -1;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&::OnSequenceSetEvent,false
                  );
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      local_res8[0] = false;
      UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence(pUVar7,this,local_res8);
      pUVar8 = UMoviePipelineQueue::StaticClass();
      pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
      if (pUVar9 != (UObject *)0x0) {
        *(int *)&pUVar9[2].field_0x10 = *(int *)&pUVar9[2].field_0x10 + 1;
      }
    }
  }
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetStatusMessage @ 14dda4430

void __thiscall
UMoviePipelineExecutorJob::SetStatusMessage(UMoviePipelineExecutorJob *this,FString *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  FString local_18;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorJob_SetStatusMessage);
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

// SetStatusMessage_Implementation @ 14dda4630

void __thiscall
UMoviePipelineExecutorJob::SetStatusMessage_Implementation
          (UMoviePipelineExecutorJob *this,FString *param_1)

{
  ::FString::operator=(&this->StatusMessage,param_1);
  return;
}

// SetStatusProgress @ 14dda4670

void __thiscall
UMoviePipelineExecutorJob::SetStatusProgress(UMoviePipelineExecutorJob *this,float param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  float local_res18 [4];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorJob_SetStatusProgress);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dda46e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,param_1);
  return;
}

// SetStatusProgress_Implementation @ 14dda4770

void __thiscall
UMoviePipelineExecutorJob::SetStatusProgress_Implementation
          (UMoviePipelineExecutorJob *this,float param_1)

{
  this->StatusProgress = param_1;
  return;
}

// StaticRegisterNativesUMoviePipelineExecutorJob @ 14dda6640

void __cdecl UMoviePipelineExecutorJob::StaticRegisterNativesUMoviePipelineExecutorJob(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14ddaa3c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMoviePipelineExecutorJob::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMoviePipelineExecutorJob__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 2;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[7].field_0x8,0);
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[8].field_0x10,0);
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// execGetConfiguration @ 14ddab5c0

void __cdecl
UMoviePipelineExecutorJob::execGetConfiguration(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[6].field_0x10;
  return;
}

// execGetGraphPreset @ 14ddab6f0

void __cdecl
UMoviePipelineExecutorJob::execGetGraphPreset(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieGraphConfig *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                     ((TSoftObjectPtr<UMovieGraphConfig> *)&param_1[7].field_0x20);
  *(UMovieGraphConfig **)param_3 = pUVar1;
  return;
}

// execGetOrCreateJobVariableAssignmentsForGraph @ 14ddab890

void __cdecl
UMoviePipelineExecutorJob::execGetOrCreateJobVariableAssignmentsForGraph
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UMovieJobVariableAssignmentContainer> TVar2;
  TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
  *local_res10 [2];
  
  local_res10[0] =
       (TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] !=
      (TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_> *)0x0) {
    TVar2 = MoviePipeline::GetOrCreateJobVariableAssignmentsForGraph
                      ((UMovieGraphConfig *)(local_res10 + 1),local_res10[0],
                       (UObject *)&param_1[8].field_0x20);
    *(undefined8 *)param_3 = *(undefined8 *)TVar2.field0_0x0;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetPresetOrigin @ 14ddaba50

void __cdecl
UMoviePipelineExecutorJob::execGetPresetOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[6].field_0x18);
  if (pUVar2 == (UObject *)0x0) {
    if (*(longlong *)&param_1[6].field_0x20 == 0) goto LAB_14ddabae3;
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&param_1[6].field_0x20,(FUObjectSerializeContext *)0x0);
    pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[6].field_0x18);
  }
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UMoviePipelinePrimaryConfig::StaticClass();
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
LAB_14ddabae3:
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetStatusMessage @ 14ddabc90

void __cdecl
UMoviePipelineExecutorJob::execGetStatusMessage(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_18);
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

// execGetStatusProgress @ 14ddabdb0

void __cdecl
UMoviePipelineExecutorJob::execGetStatusProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execIsConsumed @ 14ddad300

void __cdecl
UMoviePipelineExecutorJob::execIsConsumed(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsEnabled @ 14ddad340

void __cdecl
UMoviePipelineExecutorJob::execIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2f0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsUsingGraphConfiguration @ 14ddad410

void __cdecl
UMoviePipelineExecutorJob::execIsUsingGraphConfiguration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieGraphConfig *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                     ((TSoftObjectPtr<UMovieGraphConfig> *)&param_1[7].field_0x20);
  *(bool *)param_3 = pUVar1 != (UMovieGraphConfig *)0x0;
  return;
}

// execOnDuplicated @ 14ddad4e0

void __cdecl
UMoviePipelineExecutorJob::execOnDuplicated(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014ddad4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e0))();
  return;
}

// execSetConfiguration @ 14ddadc10

void __cdecl
UMoviePipelineExecutorJob::execSetConfiguration(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    (**(code **)(**(longlong **)&param_1[6].field_0x10 + 0x2b8))();
    local_res20 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&param_1[6].field_0x18,(FObjectPtr)&local_res20);
  }
  return;
}

// execSetConsumed @ 14ddaddd0

void __cdecl
UMoviePipelineExecutorJob::execSetConsumed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_res8[0] != 0);
  return;
}

// execSetGraphPreset @ 14ddade70

void __cdecl
UMoviePipelineExecutorJob::execSetGraphPreset(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetGraphPreset((UMoviePipelineExecutorJob *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execSetIsEnabled @ 14ddae030

void __cdecl
UMoviePipelineExecutorJob::execSetIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,local_res8[0] != 0);
  return;
}

// execSetPresetOrigin @ 14ddae240

void __cdecl
UMoviePipelineExecutorJob::execSetPresetOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res10;
  UObject *local_res20;
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
  if (local_res10 != (UObject *)0x0) {
    (**(code **)(**(longlong **)&param_1[6].field_0x10 + 0x2b8))();
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
    local_res20 = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_38,(FObjectPtr)&local_res20);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[6].field_0x18,&local_38);
    if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execSetSequence @ 14ddae410

void __cdecl
UMoviePipelineExecutorJob::execSetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  size_t _Size;
  FName local_48;
  FName FStack_40;
  void *local_38;
  undefined8 local_30;
  FSoftObjectPath local_28;
  
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FStack_40.ComparisonIndex.Value = 0;
  FStack_40.Number = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_38;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_30;
  local_28.SubPathString.Data.ArrayNum = (int)local_30;
  local_28.AssetPath.PackageName = local_48;
  local_28.AssetPath.AssetName = FStack_40;
  if ((int)local_30 == 0) {
    local_28.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_30,0,(ForAnyElementType *)&local_28.SubPathString,(int)local_30,
               &local_28.SubPathString.Data.ArrayMax);
    memcpy(local_28.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
  }
  SetSequence((UMoviePipelineExecutorJob *)param_1,&local_28);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execSetStatusMessage @ 14ddae7c0

void __cdecl
UMoviePipelineExecutorJob::execSetStatusMessage(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetStatusProgress @ 14ddae920

void __cdecl
UMoviePipelineExecutorJob::execSetStatusProgress(UObject *param_1,FFrame *param_2,void *param_3)

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

