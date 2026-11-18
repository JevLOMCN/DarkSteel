// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 77

// StaticClass @ 14aba9630

UClass * __cdecl UCustomizableObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObject",
               &Z_Registration_Info_UClass_UCustomizableObject.InnerSingleton,
               StaticRegisterNativesUCustomizableObject,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCustomizableObject>,
               InternalVTableHelperCtorCaller<UCustomizableObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObject.InnerSingleton;
}

// UCustomizableObject @ 14abbd410

UCustomizableObject * __thiscall
UCustomizableObject::UCustomizableObject(UCustomizableObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObject__6B_;
  (this->LODSettings).MinLOD.Default = 0;
  (this->LODSettings).MinQualityLevelLOD._padding_ = 0;
  (this->LODSettings).MinQualityLevelLOD._padding_ = 0;
  *(undefined8 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality = 0;
  *(undefined8 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x34 = 0;
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x48 = 0;
  (this->LODSettings).MinQualityLevelLOD.Default = 0;
  (this->LowPriorityTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LowPriorityTextures).ArrayNum = 0;
  (this->LowPriorityTextures).ArrayMax = 0;
  (this->CustomizableObjectClassTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomizableObjectClassTags).ArrayNum = 0;
  (this->CustomizableObjectClassTags).ArrayMax = 0;
  (this->PopulationClassTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopulationClassTags).ArrayNum = 0;
  (this->PopulationClassTags).ArrayMax = 0;
  *(undefined8 *)&this->CustomizableObjectParametersTags = 0;
  *(undefined8 *)&(this->CustomizableObjectParametersTags).field_0x8 = 0;
  *(undefined8 *)&(this->CustomizableObjectParametersTags).field_0x20 = 0;
  this->bEnableUseRefSkeletalMeshAsPlaceholder = true;
  this->bPreserveUserLODsOnFirstGeneration = false;
  this->bEnableMeshCache = false;
  this->bEnableMeshStreaming = true;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x28 = 0;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x34 = 0;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CustomizableObjectParametersTags).field_0x40 = 0;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x48 = 0;
  (this->BulkData).field0_0x0.DebugPtr = (UCustomizableObjectBulk *)0x0;
  (this->Private).field0_0x0.DebugPtr = (UCustomizableObjectPrivate *)0x0;
  return this;
}

// UCustomizableObject @ 14abbd500

UCustomizableObject * __thiscall UCustomizableObject::UCustomizableObject(UCustomizableObject *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UCustomizableObjectPrivate *pUVar4;
  FName local_res8;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UCustomizableObject__6B_;
  (this->LODSettings).MinLOD.Default = 0;
  (this->LODSettings).MinQualityLevelLOD._padding_ = 0;
  (this->LODSettings).MinQualityLevelLOD._padding_ = 0;
  *(undefined8 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality = 0;
  *(undefined8 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x48 = 0;
  (this->LODSettings).MinQualityLevelLOD.Default = 0;
  this->bEnableUseRefSkeletalMeshAsPlaceholder = true;
  this->bPreserveUserLODsOnFirstGeneration = false;
  this->bEnableMeshCache = false;
  this->bEnableMeshStreaming = true;
  (this->LowPriorityTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LowPriorityTextures).ArrayNum = 0;
  (this->LowPriorityTextures).ArrayMax = 0;
  (this->CustomizableObjectClassTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomizableObjectClassTags).ArrayNum = 0;
  (this->CustomizableObjectClassTags).ArrayMax = 0;
  (this->PopulationClassTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopulationClassTags).ArrayNum = 0;
  (this->PopulationClassTags).ArrayMax = 0;
  *(undefined8 *)&this->CustomizableObjectParametersTags = 0;
  *(undefined8 *)&(this->CustomizableObjectParametersTags).field_0x8 = 0;
  *(undefined8 *)&(this->CustomizableObjectParametersTags).field_0x20 = 0;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x28 = 0;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x34 = 0;
  *(undefined8 *)&(this->CustomizableObjectParametersTags).field_0x40 = 0;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x48 = 0;
  (this->BulkData).field0_0x0.DebugPtr = (UCustomizableObjectBulk *)0x0;
  (this->Private).field0_0x0.DebugPtr = (UCustomizableObjectPrivate *)0x0;
  pFVar2 = ::FName::FName(&local_res8,"Private");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UCustomizableObjectPrivate_NoRegister();
  pUVar4 = (UCustomizableObjectPrivate *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UCustomizableObjectPrivate *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Private).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UCustomizableObject @ 14abbf6c0

void __thiscall UCustomizableObject::~UCustomizableObject(UCustomizableObject *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UCustomizableObject__6B_;
  *(undefined4 *)&(this->CustomizableObjectParametersTags).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CustomizableObjectParametersTags).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FParameterTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FParameterTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FParameterTags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CustomizableObjectParametersTags);
  DestructItems<FString,int>
            ((FString *)(this->PopulationClassTags).AllocatorInstance.Data,
             (this->PopulationClassTags).ArrayNum);
  pFVar2 = (this->PopulationClassTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->CustomizableObjectClassTags).AllocatorInstance.Data,
             (this->CustomizableObjectClassTags).ArrayNum);
  pFVar2 = (this->CustomizableObjectClassTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LowPriorityTextures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x48 = 0;
  pvVar1 = *(void **)&(this->LODSettings).MinQualityLevelLOD.PerQuality.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->LODSettings).MinQualityLevelLOD.PerQuality);
  pvVar1 = (void *)(this->LODSettings).MinQualityLevelLOD._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Compile @ 14abd38d0

void __thiscall UCustomizableObject::Compile(UCustomizableObject *this,FCompileParams *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 local_res18;
  undefined1 local_res1c;
  undefined4 local_res20;
  undefined1 local_res24;
  FReadAccessScope local_28;
  
  local_res18 = 1;
  local_res1c = IsCompiled(this);
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->Callback);
  if (bVar2) {
    local_res20 = local_res18;
    local_res24 = local_res1c;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->Callback,&local_res20);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->CallbackNative,
             &local_28);
  if ((*(int *)&(param_1->CallbackNative).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_1->CallbackNative).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_res18);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ContainsEnumParameterValue @ 14abd3a30

bool __thiscall
UCustomizableObject::ContainsEnumParameterValue
          (UCustomizableObject *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FMutableParameterIndex *pFVar6;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar6 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if ((pFVar6 != (FMutableParameterIndex *)0x0) && (iVar5 = pFVar6->Index, iVar5 != -1)) {
    if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = UCustomizableObjectPrivate::FindIntParameterValue
                      ((this->Private).field0_0x0.DebugPtr,iVar5,param_2);
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return iVar5 != -1;
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// ContainsParameter @ 14abd3bc0

bool __thiscall UCustomizableObject::ContainsParameter(UCustomizableObject *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMutableParameterIndex *pFVar4;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if (pFVar4 != (FMutableParameterIndex *)0x0) {
    return pFVar4->Index != -1;
  }
  return false;
}

// CreateInstance @ 14abd4c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCustomizableObjectInstance * __thiscall
UCustomizableObject::CreateInstance(UCustomizableObject *this)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UCustomizableObjectInstance *pUVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1129,"Mutable_UCustomizableObject::CreateInstance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
               ,0x469);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1129);
  }
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar5 = GetTransientPackage();
  FVar2 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UCustomizableObjectInstance::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  FVar3 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar2.ComparisonIndex.Value;
  local_a8.Number = FVar2.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar3;
  local_98._8_8_ = pUVar5;
  pUVar7 = (UCustomizableObjectInstance *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  FCustomizableObjectInstanceDescriptor::SetCustomizableObject(&pUVar7->Descriptor,this);
  UCustomizableInstancePrivate::InitCustomizableObjectData
            ((pUVar7->PrivateData).field0_0x0.DebugPtr,this);
  if (((pUVar7->PrivateData).field0_0x0.DebugPtr == (UCustomizableInstancePrivate *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UCustomizableObjectInstance *)(*pcVar1)();
    return pUVar7;
  }
  ((pUVar7->PrivateData).field0_0x0.DebugPtr)->bShowOnlyRuntimeParameters = false;
  if (5 < (byte)LogMutable._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar7;
}

// GetBoolParameterDefaultValue @ 14abd98f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCustomizableObject::GetBoolParameterDefaultValue(UCustomizableObject *this,FString *param_1)

{
  int iVar1;
  UCustomizableObjectPrivate *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FModel *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FMutableParameterIndex *pFVar7;
  FName local_res8;
  FString local_18;
  
  if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar7 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if ((pFVar7 == (FMutableParameterIndex *)0x0) || (iVar1 = pFVar7->Index, iVar1 == -1)) {
    if (1 < (byte)LogMutable._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  else {
    if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pUVar2 = (this->Private).field0_0x0.DebugPtr;
    pTVar3 = (pUVar2->MutableModel).SharedReferenceCount.ReferenceController;
    this_00 = (pUVar2->MutableModel).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FModel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x6da,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      bVar5 = false;
    }
    else {
      bVar5 = UE::Mutable::Private::FModel::GetBoolDefaultValue(this_00,iVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return bVar5;
}

// GetColorParameterDefaultValue @ 14abd9ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FLinearColor * __thiscall
UCustomizableObject::GetColorParameterDefaultValue
          (UCustomizableObject *this,FLinearColor *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  UCustomizableObjectPrivate *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FModel *this_00;
  code *pcVar4;
  bool bVar5;
  FLinearColor *pFVar6;
  FMutableParameterIndex *pFVar7;
  FName local_res8;
  FString local_38;
  TVector4<float>_u_0 local_28;
  
  if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FLinearColor *)(*pcVar4)();
    return pFVar6;
  }
  pFVar7 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if ((pFVar7 == (FMutableParameterIndex *)0x0) || (iVar1 = pFVar7->Index, iVar1 == -1)) {
    if (1 < (byte)LogMutable._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (FLinearColor_u_0_s_0)FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE;
  }
  else {
    if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar4)();
      return pFVar6;
    }
    pUVar2 = (this->Private).field0_0x0.DebugPtr;
    pTVar3 = (pUVar2->MutableModel).SharedReferenceCount.ReferenceController;
    this_00 = (pUVar2->MutableModel).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FModel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x6ee,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FLinearColor *)(*pcVar4)();
        return pFVar6;
      }
      (__return_storage_ptr__->field0_0x0)._s_0 =
           (FLinearColor_u_0_s_0)FCustomizableObjectVectorParameterValue::DEFAULT_PARAMETER_VALUE;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    else {
      local_28._0_8_ = ___xmm_3f800000000000000000000000000000;
      local_28._8_8_ = _UNK_150689648;
      UE::Mutable::Private::FModel::GetColourDefaultValue
                (this_00,iVar1,(TVector4<float> *)&local_28._s_0);
      FLinearColor::FLinearColor(__return_storage_ptr__,(TVector4<float> *)&local_28._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return __return_storage_ptr__;
}

// GetComponentCount @ 14abd9cc0

/* WARNING: Type propagation algorithm not settling */

int __thiscall UCustomizableObject::GetComponentCount(UCustomizableObject *this)

{
  UModelResources *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pUVar1 = (((this->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr;
  if (pUVar1 != (UModelResources *)0x0) {
    return (pUVar1->ComponentNamesPerObjectComponent).ArrayNum;
  }
  return 0;
}

// GetComponentMeshReferenceSkeletalMesh @ 14abd9fe0

USkeletalMesh * __thiscall
UCustomizableObject::GetComponentMeshReferenceSkeletalMesh(UCustomizableObject *this,FName *param_1)

{
  longlong lVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  USkeletalMesh *pUVar6;
  uint uVar7;
  FName *pFVar8;
  
  lVar1 = *(longlong *)((longlong)(this->Private).field0_0x0 + 0x40);
  if (lVar1 != 0) {
    pFVar2 = *(FName **)(lVar1 + 0x400);
    if (pFVar2 != pFVar2 + *(int *)(lVar1 + 0x408)) {
      pFVar8 = pFVar2;
      do {
        if (*pFVar8 == *param_1) {
          uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
          if ((int)uVar7 < 0) {
            return (USkeletalMesh *)0x0;
          }
          if (*(int *)(lVar1 + 0x30) <= (int)uVar7) {
            return (USkeletalMesh *)0x0;
          }
          uVar5 = 0;
          if ((int)uVar7 < *(int *)(lVar1 + 0x30)) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pUVar6 = (USkeletalMesh *)(*pcVar3)();
            return pUVar6;
          }
          return *(USkeletalMesh **)((longlong)(int)uVar7 * 0xe8 + *(longlong *)(lVar1 + 0x28));
        }
        pFVar8 = pFVar8 + 1;
      } while (pFVar8 != pFVar2 + *(int *)(lVar1 + 0x408));
    }
  }
  return (USkeletalMesh *)0x0;
}

// GetComponentName @ 14abda150

FName __thiscall UCustomizableObject::GetComponentName(UCustomizableObject *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint in_register_00000014;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  UCustomizableObjectPrivate::GetComponentName
            ((this->Private).field0_0x0.DebugPtr,(FCustomizableObjectComponentIndex)param_1);
  return FVar3;
}

// GetEnumParameterDefaultValue @ 14abda7c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UCustomizableObject::GetEnumParameterDefaultValue(UCustomizableObject *this,FString *param_1)

{
  UCustomizableObjectPrivate *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModel *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMutableParameterIndex *pFVar6;
  FName local_res8;
  FString local_18;
  
  if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar6 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if ((pFVar6 == (FMutableParameterIndex *)0x0) || (iVar5 = pFVar6->Index, iVar5 == -1)) {
    if (1 < (byte)LogMutable._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    iVar5 = -1;
  }
  else {
    if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    pUVar1 = (this->Private).field0_0x0.DebugPtr;
    pTVar2 = (pUVar1->MutableModel).SharedReferenceCount.ReferenceController;
    this_00 = (pUVar1->MutableModel).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FModel *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x6c6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      iVar5 = -1;
    }
    else {
      iVar5 = UE::Mutable::Private::FModel::GetIntDefaultValue(this_00,iVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  return iVar5;
}

// GetEnumParameterGroupType @ 14abda950

ECustomizableObjectGroupType __thiscall
UCustomizableObject::GetEnumParameterGroupType(UCustomizableObject *this,FString *param_1)

{
  UCustomizableObjectPrivate *pUVar1;
  UModelResources *pUVar2;
  code *pcVar3;
  bool bVar4;
  ECustomizableObjectGroupType EVar5;
  FMutableParameterIndex *pFVar6;
  FMutableParameterData *pFVar7;
  
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  pUVar2 = (pUVar1->ModelResources).field0_0x0.DebugPtr;
  if (pUVar2 != (UModelResources *)0x0) {
    if (pUVar1 == (UCustomizableObjectPrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    pFVar6 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
             ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                     *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,
                    param_1);
    if ((pFVar6 != (FMutableParameterIndex *)0x0) && (pFVar6->Index != -1)) {
      pFVar7 = TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
               ::Find((TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
                       *)&pUVar2->ParameterUIDataMap,param_1);
      if (pFVar7 != (FMutableParameterData *)0x0) {
        return pFVar7->IntegerParameterGroupType;
      }
    }
  }
  return COGT_TOGGLE;
}

// GetEnumParameterNumValues @ 14abdaa10

int __thiscall
UCustomizableObject::GetEnumParameterNumValues(UCustomizableObject *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMutableParameterIndex *pFVar4;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar4 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if ((pFVar4 != (FMutableParameterIndex *)0x0) && (iVar3 = pFVar4->Index, iVar3 != -1)) {
    if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    iVar3 = UCustomizableObjectPrivate::GetEnumParameterNumValues
                      ((this->Private).field0_0x0.DebugPtr,iVar3);
    return iVar3;
  }
  return 0;
}

// GetEnumParameterValue @ 14abdabd0

FString * __thiscall
UCustomizableObject::GetEnumParameterValue(UCustomizableObject *this,FString *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FMutableParameterIndex *pFVar5;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar5 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if ((pFVar5 != (FMutableParameterIndex *)0x0) && (iVar1 = pFVar5->Index, iVar1 != -1)) {
    if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = UCustomizableObjectPrivate::GetIntParameterAvailableOption
                       ((this->Private).field0_0x0.DebugPtr,iVar1,param_2);
    return pFVar4;
  }
  return &s_EmptyString;
}

// GetEnumParameterValueUIMetadata @ 14abdacb0

FMutableParamUIMetadata * __thiscall
UCustomizableObject::GetEnumParameterValueUIMetadata
          (UCustomizableObject *this,FMutableParamUIMetadata *__return_storage_ptr__,
          FString *param_1,FString *param_2)

{
  UCustomizableObjectPrivate *pUVar1;
  UModelResources *pUVar2;
  code *pcVar3;
  bool bVar4;
  FMutableParamUIMetadata *pFVar5;
  FMutableParameterIndex *pFVar6;
  FMutableParameterData *pFVar7;
  
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  pUVar2 = (pUVar1->ModelResources).field0_0x0.DebugPtr;
  if (pUVar2 != (UModelResources *)0x0) {
    if ((pUVar1 == (UCustomizableObjectPrivate *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMutableParamUIMetadata *)(*pcVar3)();
      return pFVar5;
    }
    pFVar6 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
             ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                     *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,
                    param_1);
    if ((pFVar6 != (FMutableParameterIndex *)0x0) && (pFVar6->Index != -1)) {
      pFVar7 = TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
               ::Find((TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
                       *)&pUVar2->ParameterUIDataMap,param_1);
      if ((pFVar7 != (FMutableParameterData *)0x0) &&
         (pFVar5 = &TMapBase<FString,FIntegerParameterUIData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIntegerParameterUIData,0>_>
                    ::Find((TMapBase<FString,FIntegerParameterUIData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIntegerParameterUIData,0>_>
                            *)&pFVar7->ArrayIntegerParameterOption,param_2)->ParamUIMetadata,
         pFVar5 != (FMutableParamUIMetadata *)0x0)) {
        FMutableParamUIMetadata::FMutableParamUIMetadata(__return_storage_ptr__,pFVar5);
        return __return_storage_ptr__;
      }
      memset(__return_storage_ptr__,0,0x118);
      FMutableParamUIMetadata::FMutableParamUIMetadata(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  memset(__return_storage_ptr__,0,0x118);
  FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)__return_storage_ptr__);
  __return_storage_ptr__->MaximumValue = 1.0;
  __return_storage_ptr__->MinimumValue = 0.0;
  (__return_storage_ptr__->GameplayTags).GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).GameplayTags.ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).GameplayTags.ArrayMax = 0;
  (__return_storage_ptr__->GameplayTags).ParentTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ParentTags.ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ParentTags.ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetFloatParameterDefaultValue @ 14abdaeb0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UCustomizableObject::GetFloatParameterDefaultValue(UCustomizableObject *this,FString *param_1)

{
  int iVar1;
  UCustomizableObjectPrivate *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FModel *this_00;
  code *pcVar4;
  bool bVar5;
  FMutableParameterIndex *pFVar6;
  float fVar7;
  FName local_res8;
  FString local_28 [2];
  
  if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar7 = (float)(*pcVar4)();
    return fVar7;
  }
  pFVar6 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if ((pFVar6 == (FMutableParameterIndex *)0x0) || (iVar1 = pFVar6->Index, iVar1 == -1)) {
    if (1 < (byte)LogMutable._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    fVar7 = 0.0;
  }
  else {
    if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      fVar7 = (float)(*pcVar4)();
      return fVar7;
    }
    pUVar2 = (this->Private).field0_0x0.DebugPtr;
    pTVar3 = (pUVar2->MutableModel).SharedReferenceCount.ReferenceController;
    this_00 = (pUVar2->MutableModel).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FModel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x6b2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        fVar7 = (float)(*pcVar4)();
        return fVar7;
      }
      fVar7 = 0.0;
    }
    else {
      fVar7 = UE::Mutable::Private::FModel::GetFloatDefaultValue(this_00,iVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return fVar7;
}

// GetMaterialParameterDefaultValue @ 14abdb950

UMaterialInterface * __thiscall
UCustomizableObject::GetMaterialParameterDefaultValue(UCustomizableObject *this,FString *param_1)

{
  int iVar1;
  UModelResources *pUVar2;
  TObjectPtr<UMaterialInterface> TVar3;
  code *pcVar4;
  bool bVar5;
  UMaterialInterface *pUVar6;
  FName *pFVar7;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar8;
  int iVar9;
  FName local_res8;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (UMaterialInterface *)(*pcVar4)();
      return pUVar6;
    }
  }
  pUVar2 = (((this->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr;
  iVar1 = (param_1->Data).ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  pFVar7 = ::FName::FName(&local_res8,iVar9,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  pTVar8 = &TMapBase<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
                    *)&pUVar2->MaterialParameterDefaultValues,*pFVar7)->field0_0x0;
  if (pTVar8 != (TObjectPtr<UMaterialInterface>_u_0 *)0x0) {
    TVar3.field0_0x0 = (TObjectPtr<UMaterialInterface>_u_0)pTVar8->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar3.field0_0x0 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
    }
    return (UMaterialInterface *)TVar3.field0_0x0;
  }
  return (UMaterialInterface *)0x0;
}

// GetParameterCount @ 14abdf050

int __thiscall UCustomizableObject::GetParameterCount(UCustomizableObject *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableObjectPrivate *)0x0) {
    return (((this->Private).field0_0x0.DebugPtr)->ParameterProperties).ArrayNum;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                     ,0x3b9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return (((this->Private).field0_0x0.DebugPtr)->ParameterProperties).ArrayNum;
}

// GetParameterName @ 14abdf0c0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall UCustomizableObject::GetParameterName(UCustomizableObject *this,int param_1)

{
  UCustomizableObjectPrivate *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  FName local_res18 [2];
  FString local_18;
  
  if (-1 < param_1) {
    if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    pUVar1 = (this->Private).field0_0x0.DebugPtr;
    if (param_1 < (pUVar1->ParameterProperties).ArrayNum) {
      if ((pUVar1 == (UCustomizableObjectPrivate *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Private",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                             ,0x3b9,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      pUVar1 = (this->Private).field0_0x0.DebugPtr;
      uVar4 = 0;
      if (param_1 < (pUVar1->ParameterProperties).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      return (FString *)
             ((pUVar1->ParameterProperties).AllocatorInstance.Data + (longlong)param_1 * 0x28);
    }
  }
  if (2 < (byte)LogMutable._0_1_) {
    local_res18[0] = (FName)this->_padding_;
    ::FName::ToString(local_res18,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return &s_EmptyString;
}

// GetParameterTypeByName @ 14abdf2e0

/* WARNING: Enum "Type": Some values do not have unique names */

EMutableParameterType __thiscall
UCustomizableObject::GetParameterTypeByName(UCustomizableObject *this,FString *param_1)

{
  int iVar1;
  UCustomizableObjectPrivate *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EMutableParameterType EVar6;
  int iVar7;
  FMutableParameterIndex *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  FName local_res8;
  FName local_res18;
  FString local_48;
  FString local_38;
  
  if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar6 = (*pcVar4)();
    return EVar6;
  }
  pFVar8 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if (pFVar8 == (FMutableParameterIndex *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = pFVar8->Index;
  }
  if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar6 = (*pcVar4)();
    return EVar6;
  }
  if ((-1 < (int)uVar9) &&
     (pUVar2 = (this->Private).field0_0x0.DebugPtr,
     (int)uVar9 < (pUVar2->ParameterProperties).ArrayNum)) {
    if ((pUVar2 == (UCustomizableObjectPrivate *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    pUVar2 = (this->Private).field0_0x0.DebugPtr;
    uVar11 = 0;
    if ((int)uVar9 < (pUVar2->ParameterProperties).ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    return (EMutableParameterType)
           (pUVar2->ParameterProperties).AllocatorInstance.Data[(longlong)(int)uVar9 * 0x28 + 0x10];
  }
  if (2 < (byte)LogMutable._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  uVar10 = 0;
  uVar12 = uVar10;
  do {
    if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    pUVar2 = (this->Private).field0_0x0.DebugPtr;
    uVar9 = (uint)uVar10;
    if ((pUVar2->ParameterProperties).ArrayNum <= (int)uVar9) {
      if (2 < (byte)LogMutable._0_1_) {
        local_res18 = (FName)this->_padding_;
        ::FName::ToString(&local_res18,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      return None;
    }
    if ((pUVar2 == (UCustomizableObjectPrivate *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    pUVar2 = (this->Private).field0_0x0.DebugPtr;
    uVar11 = 0;
    if ((int)uVar9 < (pUVar2->ParameterProperties).ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    pFVar3 = (pUVar2->ParameterProperties).AllocatorInstance.Data;
    iVar7 = (param_1->Data).ArrayNum;
    iVar1 = *(int *)(pFVar3 + uVar12 + 8);
    if (iVar1 == iVar7) {
      if (iVar1 < 2) {
LAB_14abdf5a9:
        if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Private",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                               ,0x3b9,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          EVar6 = (*pcVar4)();
          return EVar6;
        }
        pUVar2 = (this->Private).field0_0x0.DebugPtr;
        uVar11 = 0;
        if ((int)uVar9 < (pUVar2->ParameterProperties).ArrayNum) {
          uVar11 = ~uVar9 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          EVar6 = (*pcVar4)();
          return EVar6;
        }
        return (EMutableParameterType)
               (pUVar2->ParameterProperties).AllocatorInstance.Data
               [(longlong)(int)uVar9 * 0x28 + 0x10];
      }
      iVar7 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(pFVar3 + uVar12),
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar7 == 0;
    }
    else {
      bVar5 = iVar1 + iVar7 == 1;
    }
    if (bVar5) goto LAB_14abdf5a9;
    uVar10 = (ulonglong)(uVar9 + 1);
    uVar12 = uVar12 + 0x28;
  } while( true );
}

// GetParameterUIMetadata @ 14abdf6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMutableParamUIMetadata * __thiscall
UCustomizableObject::GetParameterUIMetadata
          (UCustomizableObject *this,FMutableParamUIMetadata *__return_storage_ptr__,
          FString *param_1)

{
  UModelResources *pUVar1;
  FMutableParameterData *pFVar2;
  FMutableUIMetadata *pFVar3;
  bool bVar4;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined1 local_278 [80];
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_228;
  void *local_1e8;
  undefined4 local_1e0;
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1d8;
  void *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 local_184;
  void *local_180;
  undefined8 local_178;
  void *local_170;
  undefined8 local_168;
  undefined1 local_158 [80];
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_108;
  void *local_c8;
  undefined4 local_c0;
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b8;
  void *local_78;
  undefined4 local_70;
  float local_68;
  float local_64;
  FGameplayTagContainer local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_288 = 0;
  pUVar1 = (((this->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr;
  if (pUVar1 == (UModelResources *)0x0) {
    memset(__return_storage_ptr__,0,0x118);
    FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)__return_storage_ptr__);
    __return_storage_ptr__->MinimumValue = 0.0;
    __return_storage_ptr__->MaximumValue = 1.0;
    (__return_storage_ptr__->GameplayTags).GameplayTags.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameplayTags).GameplayTags.ArrayNum = 0;
    (__return_storage_ptr__->GameplayTags).GameplayTags.ArrayMax = 0;
    (__return_storage_ptr__->GameplayTags).ParentTags.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameplayTags).ParentTags.ArrayNum = 0;
    (__return_storage_ptr__->GameplayTags).ParentTags.ArrayMax = 0;
  }
  else {
    pFVar2 = TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
             ::Find((TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
                     *)&pUVar1->ParameterUIDataMap,param_1);
    bVar4 = pFVar2 == (FMutableParameterData *)0x0;
    if (bVar4) {
      memset(local_278,0,0x118);
      FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)local_278);
      local_188 = 0;
      pFVar3 = (FMutableUIMetadata *)local_278;
      local_184 = 0x3f800000;
      local_180 = (void *)0x0;
      local_178 = 0;
      local_170 = (void *)0x0;
      local_168 = 0;
    }
    else {
      FMutableUIMetadata::FMutableUIMetadata
                ((FMutableUIMetadata *)local_158,(FMutableUIMetadata *)pFVar2);
      local_68 = (pFVar2->ParamUIMetadata).MinimumValue;
      local_64 = (pFVar2->ParamUIMetadata).MaximumValue;
      local_60.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.GameplayTags.ArrayNum = 0;
      local_60.GameplayTags.ArrayMax = 0;
      local_60.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.ParentTags.ArrayNum = 0;
      local_60.ParentTags.ArrayMax = 0;
      FGameplayTagContainer::operator=(&local_60,&(pFVar2->ParamUIMetadata).GameplayTags);
      pFVar3 = (FMutableUIMetadata *)local_158;
    }
    FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)__return_storage_ptr__,pFVar3);
    __return_storage_ptr__->MinimumValue =
         *(float *)&pFVar3[1].ObjectFriendlyName.Data.AllocatorInstance.Data;
    __return_storage_ptr__->MaximumValue =
         *(float *)((longlong)&pFVar3[1].ObjectFriendlyName.Data.AllocatorInstance.Data + 4);
    (__return_storage_ptr__->GameplayTags).GameplayTags.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameplayTags).GameplayTags.ArrayNum = 0;
    (__return_storage_ptr__->GameplayTags).GameplayTags.ArrayMax = 0;
    (__return_storage_ptr__->GameplayTags).ParentTags.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->GameplayTags).ParentTags.ArrayNum = 0;
    (__return_storage_ptr__->GameplayTags).ParentTags.ArrayMax = 0;
    FGameplayTagContainer::operator=
              (&__return_storage_ptr__->GameplayTags,
               (FGameplayTagContainer *)&pFVar3[1].ObjectFriendlyName.Data.ArrayNum);
    if (bVar4) {
      if (local_170 != (void *)0x0) {
        FMemory::Free(local_170);
      }
      if (local_180 != (void *)0x0) {
        FMemory::Free(local_180);
      }
      local_190 = 0;
      if (local_198 != (void *)0x0) {
        FMemory::Free(local_198);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1d8);
      local_1e0 = 0;
      if (local_1e8 != (void *)0x0) {
        FMemory::Free(local_1e8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_228);
      if ((void *)local_278._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_278._64_8_);
      }
      if ((FScriptContainerElement *)local_278._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_278._16_8_);
      }
      if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_278._0_8_);
      }
    }
    if (!bVar4) {
      if (local_60.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.ParentTags.AllocatorInstance.Data);
      }
      if (local_60.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.GameplayTags.AllocatorInstance.Data);
      }
      local_70 = 0;
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8);
      local_c0 = 0;
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_108);
      if ((void *)local_158._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_158._64_8_);
      }
      if ((FScriptContainerElement *)local_158._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_158._16_8_);
      }
      if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_158._0_8_);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetPrivate @ 14abdfa20

UCustomizableObjectPrivate * __thiscall UCustomizableObject::GetPrivate(UCustomizableObject *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectPrivate *pUVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableObjectPrivate *)0x0) {
    return (this->Private).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                     ,0x3c0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableObjectPrivate *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Private).field0_0x0.DebugPtr;
}

// GetPrivate @ 14abdfa80

UCustomizableObjectPrivate * __thiscall UCustomizableObject::GetPrivate(UCustomizableObject *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectPrivate *pUVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableObjectPrivate *)0x0) {
    return (this->Private).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                     ,0x3b9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableObjectPrivate *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Private).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14abdfcb0

UClass * __cdecl UCustomizableObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObject",
               &Z_Registration_Info_UClass_UCustomizableObject.InnerSingleton,
               StaticRegisterNativesUCustomizableObject,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCustomizableObject>,
               InternalVTableHelperCtorCaller<UCustomizableObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObject.InnerSingleton;
}

// GetProjectorParameterDefaultValue @ 14abe0210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FCustomizableObjectProjector * __thiscall
UCustomizableObject::GetProjectorParameterDefaultValue
          (UCustomizableObject *this,FCustomizableObjectProjector *__return_storage_ptr__,
          FString *param_1)

{
  int iVar1;
  UCustomizableObjectPrivate *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FModel *this_00;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined3 uVar8;
  float fVar9;
  undefined8 uVar10;
  bool bVar11;
  ECustomizableObjectProjectorType EVar12;
  FCustomizableObjectProjector *pFVar13;
  FMutableParameterIndex *pFVar14;
  EProjectorType local_res8 [2];
  FName local_res20;
  FString local_68;
  undefined1 local_58 [12];
  TVector<float> TStack_4c;
  undefined1 auStack_40 [12];
  TVector<float> TStack_34;
  uint local_28;
  float afStack_24 [3];
  
  if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Private",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                          ,0x3b9,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FCustomizableObjectProjector *)(*pcVar4)();
    return pFVar13;
  }
  pFVar14 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
            ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                    *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1
                  );
  if ((pFVar14 == (FMutableParameterIndex *)0x0) || (iVar1 = pFVar14->Index, iVar1 == -1)) {
    if (1 < (byte)LogMutable._0_1_) {
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_68);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    uVar6 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Up.field0_0x0._0_8_;
    uVar5 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Direction.field0_0x0
            ._4_8_;
    uVar10 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._8_8_;
    *(undefined8 *)&(__return_storage_ptr__->Position).field0_0x0 =
         FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Position.field0_0x0.
         _0_8_;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 8) = uVar10;
    uVar7 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Scale.field0_0x0.
            _4_8_;
    uVar10 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._32_8_;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Direction).field0_0x0 + 4) = uVar5;
    *(undefined8 *)&(__return_storage_ptr__->Up).field0_0x0 = uVar6;
    uVar5 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._48_8_;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Up).field0_0x0 + 8) = uVar10;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Scale).field0_0x0 + 4) = uVar7;
    uVar10 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._48_8_;
    FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.ProjectionType =
         (ECustomizableObjectProjectorType)uVar5;
    FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._49_3_ = SUB83(uVar5,1);
    uVar8 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._49_3_;
    FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Angle = SUB84(uVar5,4);
    fVar9 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Angle;
    __return_storage_ptr__->ProjectionType =
         FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.ProjectionType;
    FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._48_8_ = uVar10;
    *(undefined3 *)&__return_storage_ptr__->field_0x31 = uVar8;
    __return_storage_ptr__->Angle = fVar9;
  }
  else {
    if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Private",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                            ,0x3b9,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FCustomizableObjectProjector *)(*pcVar4)();
      return pFVar13;
    }
    pUVar2 = (this->Private).field0_0x0.DebugPtr;
    pTVar3 = (pUVar2->MutableModel).SharedReferenceCount.ReferenceController;
    this_00 = (pUVar2->MutableModel).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FModel *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                          ,0x71b,L"");
      uVar6 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Up.field0_0x0.
              _0_8_;
      uVar5 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Direction.
              field0_0x0._4_8_;
      uVar10 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._8_8_;
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FCustomizableObjectProjector *)(*pcVar4)();
        return pFVar13;
      }
      *(undefined8 *)&(__return_storage_ptr__->Position).field0_0x0 =
           FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Position.field0_0x0.
           _0_8_;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 8) = uVar10;
      uVar7 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Scale.field0_0x0.
              _4_8_;
      uVar10 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._32_8_;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Direction).field0_0x0 + 4) = uVar5;
      *(undefined8 *)&(__return_storage_ptr__->Up).field0_0x0 = uVar6;
      uVar5 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._48_8_;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Up).field0_0x0 + 8) = uVar10;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Scale).field0_0x0 + 4) = uVar7;
      uVar10 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._48_8_;
      FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.ProjectionType =
           (ECustomizableObjectProjectorType)uVar5;
      FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._49_3_ = SUB83(uVar5,1);
      uVar8 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._49_3_;
      FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Angle = SUB84(uVar5,4);
      fVar9 = FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.Angle;
      __return_storage_ptr__->ProjectionType =
           FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE.ProjectionType;
      FCustomizableObjectProjectorParameterValue::DEFAULT_PARAMETER_VALUE._48_8_ = uVar10;
      *(undefined3 *)&__return_storage_ptr__->field_0x31 = uVar8;
      __return_storage_ptr__->Angle = fVar9;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    else {
      local_28 = local_28 & 0xffffff00;
      afStack_24[0] = 6.2831855;
      local_58._0_8_ = ___xmm_3f800000000000000000000000000000;
      stack0xffffffffffffffb0 = _UNK_150689648;
      TStack_4c.field0_0x0._4_8_ = ___xmm_3f800000000000000000000000000000;
      auStack_40._0_8_ = _UNK_150689648;
      stack0xffffffffffffffc8 = ___xmm_42c80000412000004120000000000000;
      TStack_34.field0_0x0._4_8_ = _UNK_1522bb2b8;
      UE::Mutable::Private::FModel::GetProjectorDefaultValue
                (this_00,iVar1,local_res8,(TVector<float> *)local_58,&TStack_4c,
                 (TVector<float> *)auStack_40,&TStack_34,afStack_24);
      EVar12 = ProjectorUtils::GetEquivalentProjectorType(local_res8[0]);
      local_28 = CONCAT31(local_28._1_3_,EVar12);
      *(undefined8 *)&(__return_storage_ptr__->Position).field0_0x0 = local_58._0_8_;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 8) =
           stack0xffffffffffffffb0;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Direction).field0_0x0 + 4) =
           TStack_4c.field0_0x0._4_8_;
      *(undefined8 *)&(__return_storage_ptr__->Up).field0_0x0 = auStack_40._0_8_;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Up).field0_0x0 + 8) =
           stack0xffffffffffffffc8;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Scale).field0_0x0 + 4) =
           TStack_34.field0_0x0._4_8_;
      __return_storage_ptr__->ProjectionType = EVar12;
      *(undefined3 *)&__return_storage_ptr__->field_0x31 = local_28._1_3_;
      __return_storage_ptr__->Angle = afStack_24[0];
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return __return_storage_ptr__;
}

// GetSkeletalMeshComponentReferenceSkeletalMesh @ 14abe0860

USkeletalMesh * __thiscall
UCustomizableObject::GetSkeletalMeshComponentReferenceSkeletalMesh
          (UCustomizableObject *this,FName *param_1)

{
  longlong lVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  USkeletalMesh *pUVar6;
  uint uVar7;
  FName *pFVar8;
  
  lVar1 = *(longlong *)((longlong)(this->Private).field0_0x0 + 0x40);
  if (lVar1 != 0) {
    pFVar2 = *(FName **)(lVar1 + 0x400);
    if (pFVar2 != pFVar2 + *(int *)(lVar1 + 0x408)) {
      pFVar8 = pFVar2;
      do {
        if (*pFVar8 == *param_1) {
          uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
          if ((int)uVar7 < 0) {
            return (USkeletalMesh *)0x0;
          }
          if (*(int *)(lVar1 + 0x30) <= (int)uVar7) {
            return (USkeletalMesh *)0x0;
          }
          uVar5 = 0;
          if ((int)uVar7 < *(int *)(lVar1 + 0x30)) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pUVar6 = (USkeletalMesh *)(*pcVar3)();
            return pUVar6;
          }
          return *(USkeletalMesh **)((longlong)(int)uVar7 * 0xe8 + *(longlong *)(lVar1 + 0x28));
        }
        pFVar8 = pFVar8 + 1;
      } while (pFVar8 != pFVar2 + *(int *)(lVar1 + 0x408));
    }
  }
  return (USkeletalMesh *)0x0;
}

// GetSkeletalMeshParameterDefaultValue @ 14abe0880

USkeletalMesh * __thiscall
UCustomizableObject::GetSkeletalMeshParameterDefaultValue
          (UCustomizableObject *this,FString *param_1)

{
  int iVar1;
  UModelResources *pUVar2;
  code *pcVar3;
  bool bVar4;
  USkeletalMesh *pUVar5;
  FName *pFVar6;
  TTuple<FName,TObjectPtr<USkeletalMesh>_> *pTVar7;
  int iVar8;
  undefined8 *puVar9;
  FName local_res8;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (USkeletalMesh *)(*pcVar3)();
      return pUVar5;
    }
  }
  pUVar2 = (((this->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr;
  iVar1 = (param_1->Data).ArrayNum;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  pFVar6 = ::FName::FName(&local_res8,iVar8,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  pTVar7 = TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                   *)&pUVar2->SkeletalMeshParameterDefaultValues,*pFVar6);
  puVar9 = (undefined8 *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,TObjectPtr<USkeletalMesh>_> *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (puVar9 != (undefined8 *)0x0) {
    pUVar5 = (USkeletalMesh *)*puVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    return pUVar5;
  }
  return (USkeletalMesh *)0x0;
}

// GetStateCount @ 14abe09d0

/* WARNING: Type propagation algorithm not settling */

int __thiscall UCustomizableObject::GetStateCount(UCustomizableObject *this)

{
  FModel *pFVar1;
  
  pFVar1 = (((this->Private).field0_0x0.DebugPtr)->MutableModel).Object;
  if (pFVar1 == (FModel *)0x0) {
    return 0;
  }
  return (pFVar1->m_pD->Program).States.ArrayNum;
}

// GetStateName @ 14abe09f0

FString * __thiscall
UCustomizableObject::GetStateName
          (UCustomizableObject *this,FString *__return_storage_ptr__,int param_1)

{
  UCustomizableObjectPrivate *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModel *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
  }
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pTVar2 = (pUVar1->MutableModel).SharedReferenceCount.ReferenceController;
  pFVar3 = (pUVar1->MutableModel).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pFVar3 != (FModel *)0x0) {
    pFVar3 = (pUVar1->MutableModel).Object;
    pTVar2 = (pUVar1->MutableModel).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 == (FModel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar4)();
        return pFVar6;
      }
    }
    pFVar6 = UE::Mutable::Private::FModel::GetStateName(pFVar3,param_1);
    ::FString::operator=(__return_storage_ptr__,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return __return_storage_ptr__;
}

// GetStateParameterCount @ 14abe0ba0

int __thiscall
UCustomizableObject::GetStateParameterCount(UCustomizableObject *this,FString *param_1)

{
  FModel *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = UCustomizableObjectPrivate::FindState((this->Private).field0_0x0.DebugPtr,param_1);
  this_00 = (((this->Private).field0_0x0.DebugPtr)->MutableModel).Object;
  if (this_00 != (FModel *)0x0) {
    iVar3 = UE::Mutable::Private::FModel::GetStateParameterCount(this_00,iVar3);
    return iVar3;
  }
  return 0;
}

// GetStateParameterName @ 14abe0ce0

FString * __thiscall
UCustomizableObject::GetStateParameterName
          (UCustomizableObject *this,FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  UCustomizableObjectPrivate *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModel *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = UCustomizableObjectPrivate::FindState((this->Private).field0_0x0.DebugPtr,param_1);
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar4)();
      return pFVar8;
    }
  }
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  iVar7 = 0;
  pTVar2 = (pUVar1->MutableModel).SharedReferenceCount.ReferenceController;
  pFVar3 = (pUVar1->MutableModel).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pFVar3 != (FModel *)0x0) {
    pFVar3 = (pUVar1->MutableModel).Object;
    pTVar2 = (pUVar1->MutableModel).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 == (FModel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    iVar7 = UE::Mutable::Private::FModel::GetStateParameterIndex(pFVar3,iVar6,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  pFVar8 = GetParameterName(this,iVar7);
  ::FString::FString(__return_storage_ptr__,pFVar8);
  return __return_storage_ptr__;
}

// GetStateUIMetadata @ 14abe0e40

FMutableStateUIMetadata * __thiscall
UCustomizableObject::GetStateUIMetadata
          (UCustomizableObject *this,FMutableStateUIMetadata *__return_storage_ptr__,
          FString *param_1)

{
  UModelResources *pUVar1;
  FMutableStateData *pFVar2;
  
  pUVar1 = (((this->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr;
  if (pUVar1 != (UModelResources *)0x0) {
    pFVar2 = TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
             ::Find((TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
                     *)&pUVar1->StateUIDataMap,param_1);
    if (pFVar2 != (FMutableStateData *)0x0) {
      FMutableUIMetadata::FMutableUIMetadata
                ((FMutableUIMetadata *)__return_storage_ptr__,(FMutableUIMetadata *)pFVar2);
      return __return_storage_ptr__;
    }
  }
  memset(__return_storage_ptr__,0,0xf0);
  FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTextureParameterDefaultValue @ 14abe0f00

UTexture * __thiscall
UCustomizableObject::GetTextureParameterDefaultValue(UCustomizableObject *this,FString *param_1)

{
  int iVar1;
  UModelResources *pUVar2;
  TObjectPtr<UTexture> TVar3;
  code *pcVar4;
  bool bVar5;
  UTexture *pUVar6;
  FName *pFVar7;
  TObjectPtr<UTexture>_u_0 *pTVar8;
  int iVar9;
  FName local_res8;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (UTexture *)(*pcVar4)();
      return pUVar6;
    }
  }
  pUVar2 = (((this->Private).field0_0x0.DebugPtr)->ModelResources).field0_0x0.DebugPtr;
  iVar1 = (param_1->Data).ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  pFVar7 = ::FName::FName(&local_res8,iVar9,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  pTVar8 = &TMapBase<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
                    *)&pUVar2->TextureParameterDefaultValues,*pFVar7)->field0_0x0;
  if (pTVar8 != (TObjectPtr<UTexture>_u_0 *)0x0) {
    TVar3.field0_0x0 = (TObjectPtr<UTexture>_u_0)pTVar8->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar3.field0_0x0 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
    }
    return (UTexture *)TVar3.field0_0x0;
  }
  return (UTexture *)0x0;
}

// GetTransformParameterDefaultValue @ 14abe1010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UCustomizableObject::GetTransformParameterDefaultValue
          (UCustomizableObject *this,TTransform<double> *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  UCustomizableObjectPrivate *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FModel *this_00;
  code *pcVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  FMutableParameterIndex *pFVar7;
  undefined1 auStack_138 [32];
  FName local_118;
  FString local_110;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  TMatrix<float> local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TTransform<double> *)(*pcVar4)();
    return pTVar6;
  }
  pFVar7 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if ((pFVar7 == (FMutableParameterIndex *)0x0) || (iVar1 = pFVar7->Index, iVar1 == -1)) {
    if (1 < (byte)LogMutable._0_1_) {
      local_118 = (FName)this->_padding_;
      ::FName::ToString(&local_118,&local_110);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.XY.
         m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.ZW.
         m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW.m128d_f64;
  }
  else {
    if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar4)();
      return pTVar6;
    }
    pUVar2 = (this->Private).field0_0x0.DebugPtr;
    pTVar3 = (pUVar2->MutableModel).SharedReferenceCount.ReferenceController;
    this_00 = (pUVar2->MutableModel).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FModel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x705,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar4)();
        return pTVar6;
      }
      *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
           FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.XY.m128d_f64
      ;
      *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
           FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Rotation.ZW.m128d_f64
      ;
      *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
           FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.XY.
           m128d_f64;
      *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
           FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Translation.ZW.
           m128d_f64;
      *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
           FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.XY.m128d_f64;
      *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
           FCustomizableObjectTransformParameterValue::DEFAULT_PARAMETER_VALUE.Scale3D.ZW.m128d_f64;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    else {
      UE::Mutable::Private::FModel::GetMatrixDefaultValue(this_00,&local_78,iVar1);
      local_f8._8_4_ = SUB84((double)local_78.M[0][1],0);
      local_f8._0_8_ = (double)local_78.M[0][0];
      local_f8._12_4_ = (int)((ulonglong)(double)local_78.M[0][1] >> 0x20);
      local_d8 = (double)local_78.M[1][0];
      dStack_d0 = (double)local_78.M[1][1];
      local_e8._8_4_ = SUB84((double)local_78.M[0][3],0);
      local_e8._0_8_ = (double)local_78.M[0][2];
      local_e8._12_4_ = (int)((ulonglong)(double)local_78.M[0][3] >> 0x20);
      local_b8 = (double)local_78.M[2][0];
      dStack_b0 = (double)local_78.M[2][1];
      local_c8._8_4_ = SUB84((double)local_78.M[1][3],0);
      local_c8._0_8_ = (double)local_78.M[1][2];
      local_c8._12_4_ = (int)((ulonglong)(double)local_78.M[1][3] >> 0x20);
      local_98 = (double)local_78.M[3][0];
      dStack_90 = (double)local_78.M[3][1];
      local_a8._8_4_ = SUB84((double)local_78.M[2][3],0);
      local_a8._0_8_ = (double)local_78.M[2][2];
      local_a8._12_4_ = (int)((ulonglong)(double)local_78.M[2][3] >> 0x20);
      local_88._8_4_ = SUB84((double)local_78.M[3][3],0);
      local_88._0_8_ = (double)local_78.M[3][2];
      local_88._12_4_ = (int)((ulonglong)(double)local_78.M[3][3] >> 0x20);
      UE::Math::TTransform<double>::SetFromMatrix
                (__return_storage_ptr__,(TMatrix<double> *)local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return __return_storage_ptr__;
}

// IsCompiled @ 14abe3440

bool __thiscall UCustomizableObject::IsCompiled(UCustomizableObject *this)

{
  UCustomizableObjectPrivate *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModel *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  pTVar2 = (pUVar1->MutableModel).SharedReferenceCount.ReferenceController;
  pFVar3 = (pUVar1->MutableModel).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return pFVar3 != (FModel *)0x0;
}

// IsLoading @ 14abe34d0

bool __thiscall UCustomizableObject::IsLoading(UCustomizableObject *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (((this->Private).field0_0x0.DebugPtr)->Status).CurrentState == Loading;
}

// IsParameterMultidimensional @ 14abe3e00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCustomizableObject::IsParameterMultidimensional(UCustomizableObject *this,FString *param_1)

{
  int iVar1;
  UCustomizableObjectPrivate *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FModel *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FMutableParameterIndex *pFVar7;
  FName local_res8;
  FString local_18;
  
  if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar7 = TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
           ::Find((TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
                   *)&((this->Private).field0_0x0.DebugPtr)->ParameterPropertiesLookupTable,param_1)
  ;
  if ((pFVar7 == (FMutableParameterIndex *)0x0) || (iVar1 = pFVar7->Index, iVar1 == -1)) {
    if (1 < (byte)LogMutable._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  else {
    if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pUVar2 = (this->Private).field0_0x0.DebugPtr;
    pTVar3 = (pUVar2->MutableModel).SharedReferenceCount.ReferenceController;
    this_00 = (pUVar2->MutableModel).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FModel *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      bVar5 = false;
    }
    else {
      bVar5 = UE::Mutable::Private::FModel::IsParameterMultidimensional(this_00,iVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return bVar5;
}

// PostLoad @ 14abebaf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCustomizableObject::PostLoad(UCustomizableObject *this)

{
  int iVar1;
  FText *pFVar2;
  UPackage *this_00;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  local_18 = FCustomizableObjectCustomVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar1 < 0x3a) {
    if (bShowOldCustomizableObjectWarning != false) {
      bShowOldCustomizableObjectWarning = false;
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_18,L"CustomizableObject",L"OldCustomizableObject",
                          L"Old Customizable Objects found. Please resave them to avoid future incompatibilities. See output log for more information."
                         );
      FMessageDialog::Open(Ok,pFVar2);
      if ((longlong *)local_18._0_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_18._0_8_ + 0x10))();
      }
    }
    if (2 < (byte)LogMutable._0_1_) {
      this_00 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)this_00,(FString *)&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if ((void *)local_18._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_18._0_8_);
      }
    }
  }
  return;
}

// Serialize @ 14abefb20

void __thiscall UCustomizableObject::Serialize(UCustomizableObject *this,FArchive *param_1)

{
  UCustomizableObjectPrivate *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong64 local_res10;
  TSharedPtr<UE::Mutable::Private::FModel,1> local_58;
  FUnrealMutableInputStream local_48;
  FGuid local_38;
  FInputArchive local_28;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId427,"Mutable_UCustomizableObject::Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
               ,0x1ab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId427);
  }
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCustomizableObjectCustomVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    if (((this->Private).field0_0x0.DebugPtr == (UCustomizableObjectPrivate *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3c0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (this->Private).field0_0x0.DebugPtr;
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId932,"Mutable_UCustomizableObject::LoadEmbeddedData",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                 ,0x3a4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId932);
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res10,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_res10);
      }
    }
    else {
      local_res10 = *(ulong64 *)*plVar1;
      *plVar1 = *plVar1 + 8;
    }
    if (local_res10 == 0xffffffffffffffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1597570788632822699>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3ab,"InternalVersion != INDEX_NONE");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      FUnrealMutableInputStream::FUnrealMutableInputStream(&local_48,param_1);
      UE::Mutable::Private::FInputArchive::FInputArchive(&local_28,(FInputStream *)&local_48);
      UE::Mutable::Private::FModel::StaticUnserialise(&local_58,&local_28);
      local_38.A = 0;
      local_38.B = 0;
      local_38.C = 0;
      local_38.D = 0;
      UCustomizableObjectPrivate::SetModel(this_00,&local_58,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      local_28._padding_ = (longlong)&___7FInputArchive_Private_Mutable_UE__6B_;
      DestructItems<TSharedPtr<void,1>,int>
                ((TSharedPtr<void,1> *)local_28.History.AllocatorInstance.Data,
                 local_28.History.ArrayNum);
      if ((TSharedPtr<void,1> *)local_28.History.AllocatorInstance.Data != (TSharedPtr<void,1> *)0x0
         ) {
        FMemory::Free(local_28.History.AllocatorInstance.Data);
      }
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Serialize @ 14abefd90

void __thiscall
UCustomizableObject::Serialize(UCustomizableObject *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUCustomizableObject @ 14abf1ff0

void __cdecl UCustomizableObject::StaticRegisterNativesUCustomizableObject(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x21;
  local_18.DataPtr = Z_Construct_UClass_UCustomizableObject_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCompile @ 14abf9cd0

void __cdecl UCustomizableObject::execCompile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  uchar *puVar4;
  undefined4 local_res10;
  undefined1 local_res14;
  undefined4 local_res20;
  undefined1 local_res24;
  FDestructionSentinel local_78;
  uchar local_60 [8];
  undefined8 local_58;
  undefined2 local_50;
  FMRSWRecursiveAccessDetector local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  int local_20;
  
  local_60[0] = '\0';
  local_60[1] = '\x01';
  local_60[2] = '\0';
  local_60[3] = '\x01';
  local_58 = 0;
  local_50 = 0x103;
  local_48.State = (atomic<unsigned___int64>)0x0;
  uStack_40 = 0;
  local_38 = 0;
  local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  puVar4 = local_60;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_res10 = 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res14 = IsCompiled((UCustomizableObject *)param_1);
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(puVar4 + 0x18));
  if (bVar3) {
    local_res20 = local_res10;
    local_res24 = local_res14;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(puVar4 + 0x18),&local_res20);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar4 + 0x30),
             (FReadAccessScope *)&local_78);
  if ((*(int *)(puVar4 + 0x40) != 0) &&
     (plVar2 = *(longlong **)(puVar4 + 0x38), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_res10);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_30,(FWriteAccessScope *)&local_78);
  if ((local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48);
  return;
}

// execContainsEnumParameterValue @ 14abfa000

void __cdecl
UCustomizableObject::execContainsEnumParameterValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  void *_Src;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  FString local_48;
  FString local_38;
  void *local_28;
  undefined8 local_20;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_20;
  local_48.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_48,(int)local_20,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar7 = *(longlong *)&param_1[7].field_0x10;
  iVar6 = local_38.Data.ArrayNum + -1;
  FVar3.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
  iVar6 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                      *)(lVar7 + 0x170),uVar5,&local_38);
  if (iVar6 != -1) {
    lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(lVar7 + 0x170);
    piVar8 = (int *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      piVar8 = (int *)0x0;
    }
    if ((piVar8 != (int *)0x0) && (iVar6 = *piVar8, iVar6 != -1)) {
      if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Private",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                             ,0x3b9,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = UCustomizableObjectPrivate::FindIntParameterValue
                        (*(UCustomizableObjectPrivate **)&param_1[7].field_0x10,iVar6,&local_48);
      bVar4 = iVar6 != -1;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      goto LAB_14abfa207;
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  bVar4 = false;
LAB_14abfa207:
  *(bool *)param_3 = bVar4;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execContainsParameter @ 14abfa490

void __cdecl
UCustomizableObject::execContainsParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
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
  if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar7 = *(longlong *)&param_1[7].field_0x10;
  iVar6 = local_18.Data.ArrayNum + -1;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
  iVar6 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                      *)(lVar7 + 0x170),uVar5,&local_18);
  if (iVar6 != -1) {
    lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(lVar7 + 0x170);
    piVar8 = (int *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      piVar8 = (int *)0x0;
    }
    if (piVar8 != (int *)0x0) {
      iVar6 = *piVar8;
      goto LAB_14abfa596;
    }
  }
  iVar6 = -1;
LAB_14abfa596:
  *(bool *)param_3 = iVar6 != -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateInstance @ 14abfa990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UCustomizableObject::execCreateInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  FName local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1129,"Mutable_UCustomizableObject::CreateInstance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
               ,0x469);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1129);
  }
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  pUVar5 = GetTransientPackage();
  FVar2 = local_c8;
  if (local_c8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UCustomizableObjectInstance::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  FVar3 = local_c8;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_c8.ComparisonIndex = FVar2.ComparisonIndex.Value;
  local_c8.Number = FVar2.Number;
  local_b8._16_4_ = local_c8.ComparisonIndex.Value;
  local_b8._20_4_ = local_c8.Number;
  local_b8._24_4_ = RF_Transient;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_c8 = FVar3;
  local_b8._8_8_ = pUVar5;
  pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  FCustomizableObjectInstanceDescriptor::SetCustomizableObject
            ((FCustomizableObjectInstanceDescriptor *)&pUVar7[3].field_0x20,
             (UCustomizableObject *)param_1);
  UCustomizableInstancePrivate::InitCustomizableObjectData
            (*(UCustomizableInstancePrivate **)&pUVar7[0xd].field_0x20,
             (UCustomizableObject *)param_1);
  if ((*(longlong *)&pUVar7[0xd].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrivateData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0xce2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined1 *)(*(longlong *)&pUVar7[0xd].field_0x20 + 0x520) = 0;
  if (5 < (byte)LogMutable._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(UObject **)param_3 = pUVar7;
  return;
}

// execGetBoolParameterDefaultValue @ 14abfb180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCustomizableObject::execGetBoolParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModel *this;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = *(longlong *)&param_1[7].field_0x10;
  iVar7 = local_38.Data.ArrayNum + -1;
  FVar4.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar4.Data);
  iVar7 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                      *)(lVar8 + 0x170),uVar6,&local_38);
  if (iVar7 == -1) {
LAB_14abfb317:
    if (1 < (byte)LogMutable._0_1_) {
      local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lVar8 = (longlong)iVar7 * 0x20 + *(longlong *)(lVar8 + 0x170);
    piVar9 = (int *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      piVar9 = (int *)0x0;
    }
    if ((piVar9 == (int *)0x0) || (iVar7 = *piVar9, iVar7 == -1)) goto LAB_14abfb317;
    if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)&param_1[7].field_0x10 + 0x30);
    this = *(FModel **)(*(longlong *)&param_1[7].field_0x10 + 0x28);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FModel *)0x0) {
      bVar5 = UE::Mutable::Private::FModel::GetBoolDefaultValue(this,iVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      goto LAB_14abfb379;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x6da,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  bVar5 = false;
LAB_14abfb379:
  *(bool *)param_3 = bVar5;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetColorParameterDefaultValue @ 14abfb4b0

void __cdecl
UCustomizableObject::execGetColorParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FLinearColor *pFVar3;
  FString local_28;
  FLinearColor local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = GetColorParameterDefaultValue((UCustomizableObject *)param_1,&local_18,&local_28);
  uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)&pFVar3->field0_0x0;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetComponentCount @ 14abfb630

void __cdecl
UCustomizableObject::execGetComponentCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)&param_1[7].field_0x10 + 0x40);
  if (lVar1 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(lVar1 + 0x408);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetComponentMeshReferenceSkeletalMesh @ 14abfb6c0

void __cdecl
UCustomizableObject::execGetComponentMeshReferenceSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMesh *pUVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetComponentMeshReferenceSkeletalMesh((UCustomizableObject *)param_1,pFVar3);
  *(USkeletalMesh **)param_3 = pUVar2;
  return;
}

// execGetComponentName @ 14abfb820

void __cdecl
UCustomizableObject::execGetComponentName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  int local_res8 [4];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(*(longlong *)&param_1[7].field_0x10 + 0x40);
  if (((lVar2 != 0) && (-1 < iVar4)) && (iVar4 < *(int *)(lVar2 + 0x408))) {
    if (iVar4 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x400) + lVar6 * 8);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetEnumParameterDefaultValue @ 14abfbaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCustomizableObject::execGetEnumParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModel *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  int *piVar9;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = *(longlong *)&param_1[7].field_0x10;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  iVar6 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar7.Data);
  iVar6 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                      *)(lVar8 + 0x170),uVar5,&local_38);
  if (iVar6 == -1) {
LAB_14abfbc35:
    if (1 < (byte)LogMutable._0_1_) {
      local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lVar8 = (longlong)iVar6 * 0x20 + *(longlong *)(lVar8 + 0x170);
    piVar9 = (int *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      piVar9 = (int *)0x0;
    }
    if ((piVar9 == (int *)0x0) || (iVar6 = *piVar9, iVar6 == -1)) goto LAB_14abfbc35;
    if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)&param_1[7].field_0x10 + 0x30);
    this = *(FModel **)(*(longlong *)&param_1[7].field_0x10 + 0x28);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FModel *)0x0) {
      iVar6 = UE::Mutable::Private::FModel::GetIntDefaultValue(this,iVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      goto LAB_14abfbc97;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x6c6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  iVar6 = -1;
LAB_14abfbc97:
  *(int *)param_3 = iVar6;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetEnumParameterGroupType @ 14abfbcd0

void __cdecl
UCustomizableObject::execGetEnumParameterGroupType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  ECustomizableObjectGroupType EVar6;
  uint uVar7;
  int iVar8;
  FMutableParameterData *pFVar9;
  longlong lVar10;
  int *piVar11;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
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
  lVar2 = *(longlong *)(*(longlong *)&param_1[7].field_0x10 + 0x40);
  if (lVar2 != 0) {
    if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar10 = *(longlong *)&param_1[7].field_0x10;
    iVar8 = local_18.Data.ArrayNum + -1;
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar4.Data);
    iVar8 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                        *)(lVar10 + 0x170),uVar7,&local_18);
    if (iVar8 != -1) {
      lVar10 = (longlong)iVar8 * 0x20 + *(longlong *)(lVar10 + 0x170);
      piVar11 = (int *)(lVar10 + 0x10);
      if (lVar10 == 0) {
        piVar11 = (int *)0x0;
      }
      if (((piVar11 != (int *)0x0) && (*piVar11 != -1)) &&
         (pFVar9 = TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
                   ::Find((TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
                           *)(lVar2 + 0x218),&local_18), pFVar9 != (FMutableParameterData *)0x0)) {
        EVar6 = pFVar9->IntegerParameterGroupType;
        goto LAB_14abfbe09;
      }
    }
  }
  EVar6 = COGT_TOGGLE;
LAB_14abfbe09:
  *(ECustomizableObjectGroupType *)param_3 = EVar6;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetEnumParameterNumValues @ 14abfbe40

void __cdecl
UCustomizableObject::execGetEnumParameterNumValues(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  FString local_18;
  
  iVar7 = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
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
  if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar8 = *(longlong *)&param_1[7].field_0x10;
  iVar6 = local_18.Data.ArrayNum + -1;
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
  iVar6 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                      *)(lVar8 + 0x170),uVar5,&local_18);
  if (iVar6 != -1) {
    lVar8 = (longlong)iVar6 * 0x20 + *(longlong *)(lVar8 + 0x170);
    piVar9 = (int *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      piVar9 = (int *)0x0;
    }
    if ((piVar9 != (int *)0x0) && (iVar6 = *piVar9, iVar6 != -1)) {
      if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Private",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                             ,0x3b9,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = UCustomizableObjectPrivate::GetEnumParameterNumValues
                        (*(UCustomizableObjectPrivate **)&param_1[7].field_0x10,iVar6);
    }
  }
  *(int *)param_3 = iVar7;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetEnumParameterValue @ 14abfc0c0

void __cdecl
UCustomizableObject::execGetEnumParameterValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  longlong lVar9;
  int *piVar10;
  int local_res8 [2];
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar9 = *(longlong *)&param_1[7].field_0x10;
  iVar7 = local_28.Data.ArrayNum + -1;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar3.Data);
  iVar7 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                      *)(lVar9 + 0x170),uVar6,&local_28);
  if (iVar7 != -1) {
    lVar9 = (longlong)iVar7 * 0x20 + *(longlong *)(lVar9 + 0x170);
    piVar10 = (int *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      piVar10 = (int *)0x0;
    }
    if ((piVar10 != (int *)0x0) && (iVar7 = *piVar10, iVar7 != -1)) {
      if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Private",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                             ,0x3b9,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = UCustomizableObjectPrivate::GetIntParameterAvailableOption
                         (*(UCustomizableObjectPrivate **)&param_1[7].field_0x10,iVar7,iVar4);
      goto LAB_14abfc258;
    }
  }
  pFVar8 = &s_EmptyString;
LAB_14abfc258:
  ::FString::operator=(param_3,pFVar8);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetEnumParameterValueUIMetadata @ 14abfc2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UCustomizableObject::execGetEnumParameterValueUIMetadata
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMutableParameterData *pFVar8;
  FMutableUIMetadata *pFVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 auStack_1a8 [32];
  FString local_188;
  FString local_178;
  undefined1 local_168 [80];
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_118;
  void *local_d8;
  undefined4 local_d0;
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c8;
  void *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  FGameplayTagContainer local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)(*(longlong *)&param_1[7].field_0x10 + 0x40);
  if (lVar2 != 0) {
    if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar10 = *(longlong *)&param_1[7].field_0x10;
    iVar7 = local_188.Data.ArrayNum + -1;
    FVar4.Data = local_188.Data.AllocatorInstance.Data;
    if (local_188.Data.ArrayNum == 0) {
      iVar7 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar4.Data);
    iVar7 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                        *)(lVar10 + 0x170),uVar6,&local_188);
    if (iVar7 != -1) {
      lVar10 = (longlong)iVar7 * 0x20 + *(longlong *)(lVar10 + 0x170);
      piVar11 = (int *)(lVar10 + 0x10);
      if (lVar10 == 0) {
        piVar11 = (int *)0x0;
      }
      if ((((piVar11 != (int *)0x0) && (*piVar11 != -1)) &&
          (pFVar8 = TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
                    ::Find((TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
                            *)(lVar2 + 0x218),&local_188), pFVar8 != (FMutableParameterData *)0x0))
         && (pFVar9 = (FMutableUIMetadata *)
                      TMapBase<FString,FIntegerParameterUIData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIntegerParameterUIData,0>_>
                      ::Find((TMapBase<FString,FIntegerParameterUIData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIntegerParameterUIData,0>_>
                              *)&pFVar8->ArrayIntegerParameterOption,&local_178),
            pFVar9 != (FMutableUIMetadata *)0x0)) {
        FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)local_168,pFVar9);
        local_78 = *(undefined4 *)&pFVar9[1].ObjectFriendlyName.Data.AllocatorInstance.Data;
        local_74 = *(undefined4 *)
                    ((longlong)&pFVar9[1].ObjectFriendlyName.Data.AllocatorInstance.Data + 4);
        local_70.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_70.GameplayTags.ArrayNum = 0;
        local_70.GameplayTags.ArrayMax = 0;
        local_70.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_70.ParentTags.ArrayNum = 0;
        local_70.ParentTags.ArrayMax = 0;
        FGameplayTagContainer::operator=
                  (&local_70,(FGameplayTagContainer *)&pFVar9[1].ObjectFriendlyName.Data.ArrayNum);
        goto LAB_14abfc4bc;
      }
    }
  }
  memset(local_168,0,0x118);
  FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)local_168);
  local_78 = 0;
  local_74 = 0x3f800000;
  local_70.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.GameplayTags.ArrayNum = 0;
  local_70.GameplayTags.ArrayMax = 0;
  local_70.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ParentTags.ArrayNum = 0;
  local_70.ParentTags.ArrayMax = 0;
LAB_14abfc4bc:
  FMutableUIMetadata::operator=(param_3,(FMutableUIMetadata *)local_168);
  *(undefined4 *)((longlong)param_3 + 0xf0) = local_78;
  *(undefined4 *)((longlong)param_3 + 0xf4) = local_74;
  FGameplayTagContainer::operator=((FGameplayTagContainer *)((longlong)param_3 + 0xf8),&local_70);
  if (local_70.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ParentTags.AllocatorInstance.Data);
  }
  if (local_70.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.GameplayTags.AllocatorInstance.Data);
  }
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8);
  local_d0 = 0;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118);
  if ((void *)local_168._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_168._64_8_);
  }
  if ((FScriptContainerElement *)local_168._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._16_8_);
  }
  if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetFloatParameterDefaultValue @ 14abfc710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCustomizableObject::execGetFloatParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModel *this;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  float fVar10;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = *(longlong *)&param_1[7].field_0x10;
  iVar7 = local_48.Data.ArrayNum + -1;
  FVar4.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar4.Data);
  iVar7 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                      *)(lVar8 + 0x170),uVar6,&local_48);
  if (iVar7 == -1) {
LAB_14abfc8ac:
    if (1 < (byte)LogMutable._0_1_) {
      local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res8,local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lVar8 = (longlong)iVar7 * 0x20 + *(longlong *)(lVar8 + 0x170);
    piVar9 = (int *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      piVar9 = (int *)0x0;
    }
    if ((piVar9 == (int *)0x0) || (iVar7 = *piVar9, iVar7 == -1)) goto LAB_14abfc8ac;
    if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                           ,0x3b9,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)&param_1[7].field_0x10 + 0x30);
    this = *(FModel **)(*(longlong *)&param_1[7].field_0x10 + 0x28);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FModel *)0x0) {
      fVar10 = UE::Mutable::Private::FModel::GetFloatDefaultValue(this,iVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      goto LAB_14abfc90e;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x6b2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  fVar10 = 0.0;
LAB_14abfc90e:
  *(float *)param_3 = fVar10;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetMaterialParameterDefaultValue @ 14abfccd0

void __cdecl
UCustomizableObject::execGetMaterialParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TObjectPtr<UMaterialInterface> *pTVar6;
  int iVar7;
  UMaterialInterface *pUVar8;
  FName local_res8;
  wchar_t *local_18;
  undefined8 local_10;
  
  pUVar8 = (UMaterialInterface *)0x0;
  local_18 = (wchar_t *)0x0;
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
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(*(longlong *)&param_1[7].field_0x10 + 0x40);
  iVar7 = (int)local_10 + -1;
  if ((int)local_10 == 0) {
    iVar7 = 0;
  }
  pFVar5 = ::FName::FName(&local_res8,iVar7,local_18,FNAME_Add);
  pTVar6 = TMapBase<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
           ::Find((TMapBase<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
                   *)(lVar2 + 0x550),*pFVar5);
  if (((pTVar6 != (TObjectPtr<UMaterialInterface> *)0x0) &&
      (pUVar8 = (pTVar6->field0_0x0).DebugPtr, UE::GC::GIsIncrementalReachabilityPending != false))
     && (pUVar8 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  *(UMaterialInterface **)param_3 = pUVar8;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetParameterCount @ 14abfd030

void __cdecl
UCustomizableObject::execGetParameterCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[7].field_0x10 + 0x160);
  return;
}

// execGetParameterName @ 14abfd0b0

void __cdecl
UCustomizableObject::execGetParameterName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetParameterName((UCustomizableObject *)param_1,local_res10[0]);
  ::FString::operator=(param_3,pFVar2);
  return;
}

// execGetParameterTypeByName @ 14abfd160

void __cdecl
UCustomizableObject::execGetParameterTypeByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMutableParameterType EVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
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
  EVar2 = GetParameterTypeByName((UCustomizableObject *)param_1,&local_18);
  *(EMutableParameterType *)param_3 = EVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetParameterUIMetadata @ 14abfd210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UCustomizableObject::execGetParameterUIMetadata(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMutableParamUIMetadata *pFVar2;
  undefined1 auStack_178 [32];
  FString local_158;
  undefined1 local_148 [144];
  void *local_b8;
  undefined4 local_b0;
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  void *local_68;
  undefined4 local_60;
  ForAnyElementType local_50;
  ForAnyElementType local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetParameterUIMetadata
                     ((UCustomizableObject *)param_1,(FMutableParamUIMetadata *)local_148,&local_158
                     );
  FMutableUIMetadata::operator=(param_3,(FMutableUIMetadata *)pFVar2);
  *(float *)((longlong)param_3 + 0xf0) = pFVar2->MinimumValue;
  *(float *)((longlong)param_3 + 0xf4) = pFVar2->MaximumValue;
  FGameplayTagContainer::operator=
            ((FGameplayTagContainer *)((longlong)param_3 + 0xf8),&pFVar2->GameplayTags);
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8);
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_148 + 0x50));
  if ((void *)local_148._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_148._64_8_);
  }
  if ((void *)local_148._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_148._16_8_);
  }
  if ((void *)local_148._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetProjectorParameterDefaultValue @ 14abfd5d0

void __cdecl
UCustomizableObject::execGetProjectorParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FCustomizableObjectProjector *pFVar3;
  FString local_58;
  FCustomizableObjectProjector local_48;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = GetProjectorParameterDefaultValue((UCustomizableObject *)param_1,&local_48,&local_58);
  uVar2 = *(undefined8 *)((longlong)&(pFVar3->Position).field0_0x0 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)&(pFVar3->Position).field0_0x0;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = *(undefined8 *)&(pFVar3->Up).field0_0x0;
  *(undefined8 *)((longlong)param_3 + 0x10) =
       *(undefined8 *)((longlong)&(pFVar3->Direction).field0_0x0 + 4);
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(pFVar3->Scale).field0_0x0 + 4);
  *(undefined8 *)((longlong)param_3 + 0x20) =
       *(undefined8 *)((longlong)&(pFVar3->Up).field0_0x0 + 8);
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x30) = *(undefined8 *)&pFVar3->ProjectionType;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSkeletalMeshComponentReferenceSkeletalMesh @ 14abfe1a0

void __cdecl
UCustomizableObject::execGetSkeletalMeshComponentReferenceSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMesh *pUVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetComponentMeshReferenceSkeletalMesh((UCustomizableObject *)param_1,pFVar3);
  *(USkeletalMesh **)param_3 = pUVar2;
  return;
}

// execGetSkeletalMeshParameterDefaultValue @ 14abfe300

void __cdecl
UCustomizableObject::execGetSkeletalMeshParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TTuple<FName,TObjectPtr<USkeletalMesh>_> *pTVar6;
  UObject *pUVar7;
  int iVar8;
  UObject *pUVar9;
  FName local_res8;
  wchar_t *local_18;
  undefined8 local_10;
  
  pUVar9 = (UObject *)0x0;
  local_18 = (wchar_t *)0x0;
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
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(*(longlong *)&param_1[7].field_0x10 + 0x40);
  iVar8 = (int)local_10 + -1;
  if ((int)local_10 == 0) {
    iVar8 = 0;
  }
  pFVar5 = ::FName::FName(&local_res8,iVar8,local_18,FNAME_Add);
  pTVar6 = TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
                   *)(lVar2 + 0x500),*pFVar5);
  pUVar7 = (UObject *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<FName,TObjectPtr<USkeletalMesh>_> *)0x0) {
    pUVar7 = pUVar9;
  }
  if (((pUVar7 != (UObject *)0x0) &&
      (pUVar9 = *(UObject **)pUVar7, UE::GC::GIsIncrementalReachabilityPending != false)) &&
     (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  *(UObject **)param_3 = pUVar9;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetStateCount @ 14abfe540

void __cdecl UCustomizableObject::execGetStateCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FModel *this;
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FModel **)(*(longlong *)&param_1[7].field_0x10 + 0x28);
  if (this != (FModel *)0x0) {
    iVar1 = UE::Mutable::Private::FModel::GetStateCount(this);
    *(int *)param_3 = iVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetStateName @ 14abfe590

void __cdecl UCustomizableObject::execGetStateName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  FModel *this;
  FScriptContainerElement *_Src;
  code *pcVar6;
  bool bVar7;
  FString *pFVar8;
  int local_res8 [2];
  FString local_28;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar1 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar3 = *(longlong *)&param_1[7].field_0x10;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0x30);
  lVar5 = *(longlong *)(lVar3 + 0x28);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (lVar5 != 0) {
    this = *(FModel **)(lVar3 + 0x28);
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0x30);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this == (FModel *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar8 = UE::Mutable::Private::FModel::GetStateName(this,iVar1);
    if (&local_28 != pFVar8) {
      iVar1 = (pFVar8->Data).ArrayNum;
      _Src = (pFVar8->Data).AllocatorInstance.Data;
      local_28.Data.ArrayNum = iVar1;
      if (((iVar1 != 0) || (local_28.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,local_28.Data.ArrayMax,(ForAnyElementType *)&local_28,iVar1,
                     &local_28.Data.ArrayMax), iVar1 != 0)) {
        memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStateParameterCount @ 14abfe780

void __cdecl
UCustomizableObject::execGetStateParameterCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FModel *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString local_18;
  
  iVar5 = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
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
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = UCustomizableObjectPrivate::FindState
                    (*(UCustomizableObjectPrivate **)&param_1[7].field_0x10,&local_18);
  this = *(FModel **)(*(longlong *)&param_1[7].field_0x10 + 0x28);
  if (this != (FModel *)0x0) {
    iVar5 = UE::Mutable::Private::FModel::GetStateParameterCount(this,iVar4);
  }
  *(int *)param_3 = iVar5;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStateParameterName @ 14abfe880

void __cdecl
UCustomizableObject::execGetStateParameterName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  FModel *this;
  FScriptContainerElement *_Src;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  int local_res8 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  FString local_38;
  
  iVar9 = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar6 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = UCustomizableObjectPrivate::FindState
                    (*(UCustomizableObjectPrivate **)&param_1[7].field_0x10,&local_38);
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar2 = *(longlong *)&param_1[7].field_0x10;
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 0x30);
  lVar4 = *(longlong *)(lVar2 + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (lVar4 != 0) {
    this = *(FModel **)(lVar2 + 0x28);
    pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 0x30);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FModel *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar9 = UE::Mutable::Private::FModel::GetStateParameterIndex(this,iVar8,iVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  pFVar10 = GetParameterName((UCustomizableObject *)param_1,iVar9);
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar9 = (pFVar10->Data).ArrayNum;
  _Src = (pFVar10->Data).AllocatorInstance.Data;
  local_40 = CONCAT44(local_40._4_4_,iVar9);
  if (iVar9 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,&local_48,iVar9,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,_Src,(longlong)iVar9 * 2);
  }
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_40;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_40._4_4_;
    local_40 = 0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStateUIMetadata @ 14abfeb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UCustomizableObject::execGetStateUIMetadata(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FMutableStateData *pFVar3;
  undefined1 auStack_148 [32];
  FString local_128;
  undefined1 local_118 [80];
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c8;
  void *local_88;
  undefined4 local_80;
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_78;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)(*(longlong *)&param_1[7].field_0x10 + 0x40);
  if (lVar2 != 0) {
    pFVar3 = TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
             ::Find((TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
                     *)(lVar2 + 0x268),&local_128);
    if (pFVar3 != (FMutableStateData *)0x0) {
      FMutableUIMetadata::FMutableUIMetadata
                ((FMutableUIMetadata *)local_118,(FMutableUIMetadata *)pFVar3);
      goto LAB_14abfebd5;
    }
  }
  memset(local_118,0,0xf0);
  FMutableUIMetadata::FMutableUIMetadata((FMutableUIMetadata *)local_118);
LAB_14abfebd5:
  FMutableUIMetadata::operator=(param_3,(FMutableUIMetadata *)local_118);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSoftObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78);
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8);
  if ((void *)local_118._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_118._64_8_);
  }
  if ((FScriptContainerElement *)local_118._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._16_8_);
  }
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetTextureParameterDefaultValue @ 14abfeca0

void __cdecl
UCustomizableObject::execGetTextureParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  TObjectPtr<UTexture> *pTVar6;
  int iVar7;
  UTexture *pUVar8;
  FName local_res8;
  wchar_t *local_18;
  undefined8 local_10;
  
  pUVar8 = (UTexture *)0x0;
  local_18 = (wchar_t *)0x0;
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
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(*(longlong *)&param_1[7].field_0x10 + 0x40);
  iVar7 = (int)local_10 + -1;
  if ((int)local_10 == 0) {
    iVar7 = 0;
  }
  pFVar5 = ::FName::FName(&local_res8,iVar7,local_18,FNAME_Add);
  pTVar6 = TMapBase<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
           ::Find((TMapBase<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
                   *)(lVar2 + 0x4b0),*pFVar5);
  if (((pTVar6 != (TObjectPtr<UTexture> *)0x0) &&
      (pUVar8 = (pTVar6->field0_0x0).DebugPtr, UE::GC::GIsIncrementalReachabilityPending != false))
     && (pUVar8 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  *(UTexture **)param_3 = pUVar8;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetTransformParameterDefaultValue @ 14abfef90

void __cdecl
UCustomizableObject::execGetTransformParameterDefaultValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  FString local_78;
  TTransform<double> local_68;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetTransformParameterDefaultValue((UCustomizableObject *)param_1,&local_68,&local_78);
  dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar3->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar3->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar3->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar2;
  dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar3->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar2;
  dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar3->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar2;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsCompiled @ 14abff250

void __cdecl UCustomizableObject::execIsCompiled(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsCompiled((UCustomizableObject *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsLoading @ 14abff290

void __cdecl UCustomizableObject::execIsLoading(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                       ,0x3b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(bool *)param_3 = *(char *)(*(longlong *)&param_1[7].field_0x10 + 0x150) == '\0';
  return;
}

// execIsParameterMultidimensional @ 14abff410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCustomizableObject::execIsParameterMultidimensional(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModel *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  int *piVar9;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                         ,0x3b9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = *(longlong *)&param_1[7].field_0x10;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  iVar6 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar7.Data);
  iVar6 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
                      *)(lVar8 + 0x170),uVar5,&local_38);
  if (iVar6 != -1) {
    lVar8 = (longlong)iVar6 * 0x20 + *(longlong *)(lVar8 + 0x170);
    piVar9 = (int *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      piVar9 = (int *)0x0;
    }
    if ((piVar9 != (int *)0x0) && (iVar6 = *piVar9, iVar6 != -1)) {
      if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Private",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
                             ,0x3b9,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = *(TReferenceControllerBase<1> **)(*(longlong *)&param_1[7].field_0x10 + 0x30);
      this = *(FModel **)(*(longlong *)&param_1[7].field_0x10 + 0x28);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this == (FModel *)0x0) {
        bVar4 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        bVar4 = UE::Mutable::Private::FModel::IsParameterMultidimensional(this,iVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      goto LAB_14abff5e0;
    }
  }
  if (1 < (byte)LogMutable._0_1_) {
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = false;
LAB_14abff5e0:
  *(bool *)param_3 = bVar4;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

