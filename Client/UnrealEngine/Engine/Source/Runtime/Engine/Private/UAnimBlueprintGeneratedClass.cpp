// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 55

// StaticClass @ 1473cacb0

UClass * __cdecl UAnimBlueprintGeneratedClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.InnerSingleton,
               StaticRegisterNativesUAnimBlueprintGeneratedClass,0x5d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UAnimBlueprintGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.InnerSingleton;
}

// UAnimBlueprintGeneratedClass @ 1473d7ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAnimBlueprintGeneratedClass * __thiscall
UAnimBlueprintGeneratedClass::UAnimBlueprintGeneratedClass
          (UAnimBlueprintGeneratedClass *this,FVTableHelper *param_1)

{
  UBlueprintGeneratedClass::UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7UAnimBlueprintGeneratedClass__6B_;
  (this->BakedStateMachines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakedStateMachines).ArrayNum = 0;
  (this->BakedStateMachines).ArrayMax = 0;
  (this->TargetSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->AnimNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimNotifies).ArrayNum = 0;
  (this->AnimNotifies).ArrayMax = 0;
  *(undefined8 *)&this->OrderedSavedPoseIndicesMap = 0;
  *(undefined8 *)&(this->OrderedSavedPoseIndicesMap).field_0x8 = 0;
  *(undefined8 *)&(this->OrderedSavedPoseIndicesMap).field_0x20 = 0;
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x28 = 0;
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x34 = 0;
  *(undefined8 *)&(this->OrderedSavedPoseIndicesMap).field_0x40 = 0;
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x48 = 0;
  (this->AnimBlueprintFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBlueprintFunctions).ArrayNum = 0;
  (this->AnimBlueprintFunctions).ArrayMax = 0;
  (this->AnimNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimNodeProperties).ArrayNum = 0;
  (this->AnimNodeProperties).ArrayMax = 0;
  (this->LinkedAnimGraphNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedAnimGraphNodeProperties).ArrayNum = 0;
  (this->LinkedAnimGraphNodeProperties).ArrayMax = 0;
  (this->LinkedAnimLayerNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedAnimLayerNodeProperties).ArrayNum = 0;
  (this->LinkedAnimLayerNodeProperties).ArrayMax = 0;
  (this->PreUpdateNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreUpdateNodeProperties).ArrayNum = 0;
  (this->PreUpdateNodeProperties).ArrayMax = 0;
  (this->DynamicResetNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicResetNodeProperties).ArrayNum = 0;
  (this->DynamicResetNodeProperties).ArrayMax = 0;
  (this->StateMachineNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateMachineNodeProperties).ArrayNum = 0;
  (this->StateMachineNodeProperties).ArrayMax = 0;
  (this->InitializationNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitializationNodeProperties).ArrayNum = 0;
  (this->InitializationNodeProperties).ArrayMax = 0;
  (this->SyncGroupNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SyncGroupNames).ArrayNum = 0;
  (this->SyncGroupNames).ArrayMax = 0;
  *(undefined8 *)&this->GraphAssetPlayerInformation = 0;
  *(undefined8 *)&(this->GraphAssetPlayerInformation).field_0x8 = 0;
  *(undefined8 *)&(this->GraphAssetPlayerInformation).field_0x20 = 0;
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x28 = 0;
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x34 = 0;
  *(undefined8 *)&(this->GraphAssetPlayerInformation).field_0x40 = 0;
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x48 = 0;
  *(undefined8 *)&this->GraphBlendOptions = 0;
  *(undefined8 *)&(this->GraphBlendOptions).field_0x8 = 0;
  *(undefined8 *)&(this->GraphBlendOptions).field_0x20 = 0;
  *(undefined4 *)&(this->GraphBlendOptions).field_0x28 = 0;
  *(undefined4 *)&(this->GraphBlendOptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphBlendOptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphBlendOptions).field_0x34 = 0;
  *(undefined8 *)&(this->GraphBlendOptions).field_0x40 = 0;
  *(undefined4 *)&(this->GraphBlendOptions).field_0x48 = 0;
  (this->AnimNodeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimNodeData).ArrayNum = 0;
  (this->AnimNodeData).ArrayMax = 0;
  *(undefined8 *)&this->NodeTypeMap = 0;
  *(undefined8 *)&(this->NodeTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->NodeTypeMap).field_0x20 = 0;
  *(undefined4 *)&(this->NodeTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->NodeTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeTypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->NodeTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->NodeTypeMap).field_0x48 = 0;
  (this->MutableProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MutableProperties).ArrayNum = 0;
  (this->MutableProperties).ArrayMax = 0;
  (this->ConstantProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantProperties).ArrayNum = 0;
  (this->ConstantProperties).ArrayMax = 0;
  (this->ConstantSubsystemProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantSubsystemProperties).ArrayNum = 0;
  (this->ConstantSubsystemProperties).ArrayMax = 0;
  (this->MutableSubsystemProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MutableSubsystemProperties).ArrayNum = 0;
  (this->MutableSubsystemProperties).ArrayMax = 0;
  this->MutableNodeDataProperty = (FStructProperty *)0x0;
  (this->Subsystems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subsystems).ArrayNum = 0;
  (this->Subsystems).ArrayMax = 0;
  return this;
}

// UAnimBlueprintGeneratedClass @ 1473d8130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAnimBlueprintGeneratedClass * __thiscall
UAnimBlueprintGeneratedClass::UAnimBlueprintGeneratedClass
          (UAnimBlueprintGeneratedClass *this,FObjectInitializer *param_1)

{
  UBlueprintGeneratedClass::UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7UAnimBlueprintGeneratedClass__6B_;
  (this->BakedStateMachines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakedStateMachines).ArrayNum = 0;
  (this->BakedStateMachines).ArrayMax = 0;
  (this->TargetSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->AnimNotifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimNotifies).ArrayNum = 0;
  (this->AnimNotifies).ArrayMax = 0;
  *(undefined8 *)&this->OrderedSavedPoseIndicesMap = 0;
  *(undefined8 *)&(this->OrderedSavedPoseIndicesMap).field_0x8 = 0;
  *(undefined8 *)&(this->OrderedSavedPoseIndicesMap).field_0x20 = 0;
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x28 = 0;
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x34 = 0;
  *(undefined8 *)&(this->OrderedSavedPoseIndicesMap).field_0x40 = 0;
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x48 = 0;
  (this->AnimBlueprintFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBlueprintFunctions).ArrayNum = 0;
  (this->AnimBlueprintFunctions).ArrayMax = 0;
  (this->AnimNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimNodeProperties).ArrayNum = 0;
  (this->AnimNodeProperties).ArrayMax = 0;
  (this->LinkedAnimGraphNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedAnimGraphNodeProperties).ArrayNum = 0;
  (this->LinkedAnimGraphNodeProperties).ArrayMax = 0;
  (this->LinkedAnimLayerNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedAnimLayerNodeProperties).ArrayNum = 0;
  (this->LinkedAnimLayerNodeProperties).ArrayMax = 0;
  (this->PreUpdateNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreUpdateNodeProperties).ArrayNum = 0;
  (this->PreUpdateNodeProperties).ArrayMax = 0;
  (this->DynamicResetNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicResetNodeProperties).ArrayNum = 0;
  (this->DynamicResetNodeProperties).ArrayMax = 0;
  (this->StateMachineNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateMachineNodeProperties).ArrayNum = 0;
  (this->StateMachineNodeProperties).ArrayMax = 0;
  (this->InitializationNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitializationNodeProperties).ArrayNum = 0;
  (this->InitializationNodeProperties).ArrayMax = 0;
  (this->SyncGroupNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SyncGroupNames).ArrayNum = 0;
  (this->SyncGroupNames).ArrayMax = 0;
  *(undefined8 *)&this->GraphAssetPlayerInformation = 0;
  *(undefined8 *)&(this->GraphAssetPlayerInformation).field_0x8 = 0;
  *(undefined8 *)&(this->GraphAssetPlayerInformation).field_0x20 = 0;
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x28 = 0;
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x34 = 0;
  *(undefined8 *)&(this->GraphAssetPlayerInformation).field_0x40 = 0;
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x48 = 0;
  *(undefined8 *)&this->GraphBlendOptions = 0;
  *(undefined8 *)&(this->GraphBlendOptions).field_0x8 = 0;
  *(undefined8 *)&(this->GraphBlendOptions).field_0x20 = 0;
  *(undefined4 *)&(this->GraphBlendOptions).field_0x28 = 0;
  *(undefined4 *)&(this->GraphBlendOptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphBlendOptions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphBlendOptions).field_0x34 = 0;
  *(undefined8 *)&(this->GraphBlendOptions).field_0x40 = 0;
  *(undefined4 *)&(this->GraphBlendOptions).field_0x48 = 0;
  (this->AnimNodeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimNodeData).ArrayNum = 0;
  (this->AnimNodeData).ArrayMax = 0;
  *(undefined8 *)&this->NodeTypeMap = 0;
  *(undefined8 *)&(this->NodeTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->NodeTypeMap).field_0x20 = 0;
  *(undefined4 *)&(this->NodeTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->NodeTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeTypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->NodeTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->NodeTypeMap).field_0x48 = 0;
  (this->MutableProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MutableProperties).ArrayNum = 0;
  (this->MutableProperties).ArrayMax = 0;
  (this->ConstantProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantProperties).ArrayNum = 0;
  (this->ConstantProperties).ArrayMax = 0;
  (this->ConstantSubsystemProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstantSubsystemProperties).ArrayNum = 0;
  (this->ConstantSubsystemProperties).ArrayMax = 0;
  (this->MutableSubsystemProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MutableSubsystemProperties).ArrayNum = 0;
  (this->MutableSubsystemProperties).ArrayMax = 0;
  this->MutableNodeDataProperty = (FStructProperty *)0x0;
  (this->Subsystems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subsystems).ArrayNum = 0;
  (this->Subsystems).ArrayMax = 0;
  return this;
}

// ~UAnimBlueprintGeneratedClass @ 1473db0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimBlueprintGeneratedClass::~UAnimBlueprintGeneratedClass(UAnimBlueprintGeneratedClass *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7UAnimBlueprintGeneratedClass__6B_;
  pFVar1 = (this->Subsystems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MutableSubsystemProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstantSubsystemProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstantProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MutableProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NodeTypeMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NodeTypeMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeTypeMap);
  DestructItems<FAnimNodeData,int>
            ((FAnimNodeData *)(this->AnimNodeData).AllocatorInstance.Data,
             (this->AnimNodeData).ArrayNum);
  pFVar1 = (this->AnimNodeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->GraphBlendOptions).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GraphBlendOptions).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAnimGraphBlendOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAnimGraphBlendOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAnimGraphBlendOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GraphBlendOptions);
  *(undefined4 *)&(this->GraphAssetPlayerInformation).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GraphAssetPlayerInformation).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGraphAssetPlayerInformation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGraphAssetPlayerInformation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGraphAssetPlayerInformation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GraphAssetPlayerInformation);
  pFVar1 = (this->SyncGroupNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InitializationNodeProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StateMachineNodeProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicResetNodeProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreUpdateNodeProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LinkedAnimLayerNodeProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LinkedAnimGraphNodeProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimNodeProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAnimBlueprintFunction,int>
            ((FAnimBlueprintFunction *)(this->AnimBlueprintFunctions).AllocatorInstance.Data,
             (this->AnimBlueprintFunctions).ArrayNum);
  pFVar1 = (this->AnimBlueprintFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->OrderedSavedPoseIndicesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OrderedSavedPoseIndicesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCachedPoseIndices>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCachedPoseIndices>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCachedPoseIndices>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OrderedSavedPoseIndicesMap);
  DestructItems<FAnimNotifyEvent,int>
            ((FAnimNotifyEvent *)(this->AnimNotifies).AllocatorInstance.Data,
             (this->AnimNotifies).ArrayNum);
  pFVar1 = (this->AnimNotifies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBakedAnimationStateMachine,int>
            ((FBakedAnimationStateMachine *)(this->BakedStateMachines).AllocatorInstance.Data,
             (this->BakedStateMachines).ArrayNum);
  pFVar1 = (this->BakedStateMachines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAnimClassInterface__6B_;
  UBlueprintGeneratedClass::~UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this);
  return;
}

// operator() @ 1473dd930

EAnimSubsystemEnumeration __thiscall
`UAnimBlueprintGeneratedClass::OnPostLoadDefaults'::__l2::<lambda_1>::operator()
          (void *this,FAnimSubsystemInstanceContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EAnimSubsystemEnumeration EVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  FAnimSubsystem *local_28;
  FAnimSubsystemInstanceContext *local_20;
  undefined8 local_18;
  
  local_28 = param_1->Subsystem;
  lVar1 = *(longlong *)this;
  pFVar6 = (ForAnyElementType *)(lVar1 + 0x5c8);
  if ((pFVar6->Data <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar6->Data + (longlong)*(int *)(lVar1 + 0x5d4) * 8))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  iVar5 = *(int *)(lVar1 + 0x5d0);
  if (iVar5 == *(int *)(lVar1 + 0x5d4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar6,(int *)(lVar1 + 0x5d4));
  }
  *(int *)(lVar1 + 0x5d0) = iVar5 + 1;
  *(FAnimSubsystem **)(pFVar6->Data + (longlong)iVar5 * 8) = local_28;
  local_18 = *(undefined8 *)((longlong)this + 8);
  local_20 = param_1;
  (**(code **)((longlong)*param_1->Subsystem + 0x28))(param_1->Subsystem,&local_20);
  return Continue;
}

// BuildConstantProperties @ 1473eed60

void __thiscall
UAnimBlueprintGeneratedClass::BuildConstantProperties(UAnimBlueprintGeneratedClass *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar4;
  ulong64 uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  FField *pFVar9;
  FField *pFVar10;
  bool bVar11;
  int iVar12;
  UScriptStruct *pUVar13;
  UScriptStruct *pUVar14;
  FField *local_58;
  FField *local_50;
  TFieldIterator<FProperty> local_48;
  
  pTVar3 = &this->ConstantProperties;
  piVar1 = &(this->ConstantProperties).ArrayMax;
  (this->ConstantProperties).ArrayNum = 0;
  if ((this->ConstantProperties).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  pTVar4 = &this->ConstantSubsystemProperties;
  piVar2 = &(this->ConstantSubsystemProperties).ArrayMax;
  (this->ConstantSubsystemProperties).ArrayNum = 0;
  if ((this->ConstantSubsystemProperties).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar4->AllocatorInstance,0,piVar2);
  }
  local_48.Struct = (UStruct *)UClass::GetSparseClassDataStruct((UClass *)this);
  if ((UScriptStruct *)local_48.Struct != (UScriptStruct *)0x0) {
    UClass::GetSparseClassData((UClass *)this,CreateIfNull);
    local_48.Field = (FField *)((UScriptStruct *)local_48.Struct)->_padding_;
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = true;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_48);
    pFVar9 = local_48.Field;
    while (pFVar9 != (FField *)0x0) {
      local_48.Field = pFVar9;
      if (((uint)(int)pFVar9->ClassPrivate->CastFlags >> 0x14 & 1) == 0) {
        local_58 = (FField *)0x0;
      }
      else {
        local_58 = pFVar9;
        if (pFVar9 != (FField *)0x0) {
          uVar5 = pFVar9[2].Owner.Container.Unknown;
          pUVar13 = FAnimSubsystem::StaticStruct();
          if (pUVar13 != (UScriptStruct *)0x0) {
            iVar12 = (int)pUVar13->_padding_;
            if ((*(int *)(uVar5 + 0x38) < iVar12) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(uVar5 + 0x30) + (longlong)iVar12 * 8) !=
                &pUVar13->_padding_)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            if (bVar11) {
              pFVar6 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar6 <= (FScriptContainerElement *)&local_58) &&
                  ((FScriptContainerElement *)&local_58 < pFVar6 + (longlong)*piVar2 * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar12 = (this->ConstantSubsystemProperties).ArrayNum;
              if (iVar12 == *piVar2) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar4->AllocatorInstance,piVar2);
              }
              (this->ConstantSubsystemProperties).ArrayNum = iVar12 + 1;
              *(FField **)((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_58;
              goto LAB_1473ef001;
            }
          }
          pUVar14 = FAnimNodeFunctionRef::StaticStruct();
          pFVar10 = local_58;
          pUVar13 = (UScriptStruct *)local_58[2].Owner.Container.Field;
          if (pUVar13 == (UScriptStruct *)0x0) {
            bVar11 = pUVar14 == (UScriptStruct *)0x0;
          }
          else {
            bVar11 = pUVar13 == pUVar14;
          }
          if (bVar11) {
            lVar7 = this->_padding_;
            if (((int)local_58[1]._padding_ < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((lVar7 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FAnimNodeFunctionRef::Initialize
                      ((FAnimNodeFunctionRef *)
                       (*(int *)((longlong)&pFVar10[1].Owner.Container + 4) + lVar7),(UClass *)this)
            ;
          }
        }
      }
LAB_1473ef001:
      pFVar6 = (pTVar3->AllocatorInstance).Data;
      local_50 = pFVar9;
      if (((pFVar6 <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (this->ConstantProperties).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->ConstantProperties).ArrayNum = iVar12 + 1;
      *(FField **)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_50;
      local_48.Field = pFVar9->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_48);
      pFVar9 = local_48.Field;
    }
  }
  return;
}

// FindSubsystem @ 1473fd040

FAnimSubsystem * __thiscall
UAnimBlueprintGeneratedClass::FindSubsystem
          (UAnimBlueprintGeneratedClass *this,UScriptStruct *param_1)

{
  FAnimSubsystem *local_res8 [4];
  FAnimSubsystem **local_28;
  UScriptStruct *local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_28 = local_res8;
  local_10 = &local_28;
  local_res8[0] = (FAnimSubsystem *)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimBlueprintGeneratedClass::FindSubsystem'::__l2::<lambda_1>,enum_EAnimSubsystemEnumeration,FAnimSubsystemContext_const_&>
             ::Call;
  local_20 = param_1;
  (**(code **)(this->_padding_ + 0xb8))(this,&local_18);
  return local_res8[0];
}

// ForEachSubsystem @ 1473fd8f0

void __thiscall
UAnimBlueprintGeneratedClass::ForEachSubsystem
          (UAnimBlueprintGeneratedClass *this,UObject *param_1,
          TFunctionRef<EAnimSubsystemEnumeration___cdecl(FAnimSubsystemInstanceContext_const_&)>
          *param_2)

{
  longlong lVar1;
  FProperty *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_48;
  undefined8 local_40;
  void *local_38;
  longlong local_30;
  
  iVar5 = (int)this->_padding_;
  if ((iVar5 == (int)this->_padding_) && (uVar7 = 0, 0 < iVar5)) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar5) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar8 + this->_padding_);
      uVar4 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FProperty **)(lVar8 + this->_padding_);
      lVar6 = (**(code **)(this->_padding_ + 0x120))(this);
      if ((*(int *)(lVar1 + 0x30) < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((lVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = *(int *)(lVar1 + 0x44);
      local_38 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_1,0);
      local_40 = *(undefined8 *)(lVar1 + 0x70);
      local_30 = this_00[1]._padding_;
      local_48 = lVar6 + iVar5;
      iVar5 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_48);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = (int)this->_padding_;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar5);
  }
  return;
}

// ForEachSubsystem @ 1473fdaf0

void __thiscall
UAnimBlueprintGeneratedClass::ForEachSubsystem
          (UAnimBlueprintGeneratedClass *this,
          TFunctionRef<EAnimSubsystemEnumeration___cdecl(FAnimSubsystemContext_const_&)> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_28;
  undefined8 local_20;
  
  iVar5 = (int)this->_padding_;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar5) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar8 + this->_padding_);
      lVar6 = (**(code **)(this->_padding_ + 0x120))(this);
      if ((*(int *)(lVar1 + 0x30) < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((lVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_28 = *(int *)(lVar1 + 0x44) + lVar6;
      local_20 = *(undefined8 *)(lVar1 + 0x70);
      iVar5 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = (int)this->_padding_;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar5);
  }
  return;
}

// GenerateAnimationBlueprintFunctions @ 1473fe040

void __thiscall
UAnimBlueprintGeneratedClass::GenerateAnimationBlueprintFunctions
          (UAnimBlueprintGeneratedClass *this)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FAnimBlueprintFunction,TSizedDefaultAllocator<32>_> *pTVar5;
  FName *pFVar6;
  FScriptContainerElement *_Src;
  code *pcVar7;
  FName FVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  UScriptStruct *pUVar12;
  longlong lVar13;
  FName FVar14;
  FAnimBlueprintFunction *pFVar15;
  TArray<FAnimBlueprintFunction::FInputPropertyData,TSizedDefaultAllocator<32>_> *pTVar16;
  FName FVar17;
  FName FVar18;
  FName local_158;
  undefined8 local_150;
  undefined4 local_148 [2];
  FName local_140;
  undefined8 local_138;
  FName local_130;
  undefined8 local_128;
  FName local_120;
  undefined8 local_118;
  FName local_110;
  TObjectPtr<UField>_u_0 local_108;
  FName local_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined1 local_f2;
  undefined8 local_f0;
  TFieldIterator<UFunction> local_e8;
  FName local_d0;
  FName FStack_c8;
  FName local_c0;
  FName local_b8;
  FName FStack_b0;
  FName local_a8;
  FAnimBlueprintFunction local_a0;
  
  pTVar5 = &this->AnimBlueprintFunctions;
  DestructItems<FAnimBlueprintFunction,int>
            ((FAnimBlueprintFunction *)(pTVar5->AllocatorInstance).Data,
             (this->AnimBlueprintFunctions).ArrayNum);
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
  piVar1 = &(this->AnimBlueprintFunctions).ArrayMax;
  (this->AnimBlueprintFunctions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,&pTVar5->AllocatorInstance,0,piVar1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DefaultAnimGraphName,"AnimGraph");
    _Init_thread_footer(&::_TSS0);
  }
  if (this == (UAnimBlueprintGeneratedClass *)0x0) {
    local_e8.Field = (UField *)0x0;
  }
  else {
    local_e8.Field = (UField *)this->_padding_;
  }
  local_e8.InterfaceIndex = -1;
  local_e8.bIncludeSuper = true;
  local_e8.bIncludeDeprecated = true;
  local_e8.bIncludeInterface = false;
  local_e8.Struct = (UStruct *)this;
  TFieldIterator<UFunction>::IterateToNext(&local_e8);
  local_108.DebugPtr = local_e8.Field;
  do {
    if (local_108.DebugPtr == (UField *)0x0) {
      return;
    }
    bVar10 = false;
    local_120.ComparisonIndex.Value = 0;
    local_120.Number = 0;
    local_118 = 0;
    local_130.ComparisonIndex.Value = 0;
    local_130.Number = 0;
    local_128 = 0;
    local_140.ComparisonIndex.Value = 0;
    local_140.Number = 0;
    local_138 = 0;
    local_158.ComparisonIndex.Value = 0;
    local_158.Number = 0;
    local_150 = 0;
    if (local_108.DebugPtr == (UField *)0x0) {
      local_100.ComparisonIndex.Value = 0;
      local_100.Number = 0;
    }
    else {
      local_100 = (FName)local_108.DebugPtr[1]._padding_;
    }
    local_f8 = 0xffffffff;
    local_f4 = 0x101;
    local_f2 = 0;
    local_e8.Field = local_108.DebugPtr;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_108.ObjectPtr);
    FVar14 = FVar17;
    if (local_100 != (FName)0x0) {
      do {
        FVar8 = local_100;
        if (((*(uint *)(*(longlong *)((longlong)local_100 + 8) + 0x18) >> 0x14 & 1) == 0) ||
           (local_100 == (FName)0x0)) {
          bVar9 = IsThisNotNull((void *)local_100,"FField::GetFName");
          if (bVar9) {
            local_b8 = *(FName *)((longlong)FVar8 + 0x20);
          }
          else {
            local_b8.ComparisonIndex.Value = 0;
            local_b8.Number = 0;
          }
          FStack_b0 = FVar8;
          local_a8.ComparisonIndex.Value = 0;
          local_a8.Number = 0;
          if ((((ulonglong)local_158 <= &local_b8) &&
              (&local_b8 < (FName *)((longlong)local_158 + (longlong)local_150._4_4_ * 0x18))) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar11 = (int)local_150;
          if ((int)local_150 == local_150._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,(ForAnyElementType *)&local_158,
                                (int *)((longlong)&local_150 + 4));
          }
          lVar13 = (longlong)iVar11;
          local_150 = CONCAT44(local_150._4_4_,iVar11 + 1);
          pFVar6 = (FName *)((longlong)local_158 + lVar13 * 0x18);
          *pFVar6 = local_b8;
          pFVar6[1] = FStack_b0;
          FVar18 = local_a8;
LAB_1473fe5eb:
          ((FName *)((longlong)local_158 + 0x10))[lVar13 * 3] = FVar18;
        }
        else {
          lVar13 = *(longlong *)((longlong)local_100 + 0x70);
          pUVar12 = FPoseLink::StaticStruct();
          if (pUVar12 == (UScriptStruct *)0x0) {
LAB_1473fe428:
            bVar9 = IsThisNotNull((void *)FVar8,"FField::GetFName");
            if (bVar9) {
              local_d0 = *(FName *)((longlong)FVar8 + 0x20);
            }
            else {
              local_d0.ComparisonIndex.Value = 0;
              local_d0.Number = 0;
            }
            FStack_c8 = FVar8;
            local_c0.ComparisonIndex.Value = 0;
            local_c0.Number = 0;
            if ((((ulonglong)local_158 <= &local_d0) &&
                (&local_d0 < (FName *)((longlong)local_158 + (longlong)local_150._4_4_ * 0x18))) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = (int)local_150;
            if ((int)local_150 == local_150._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,(ForAnyElementType *)&local_158,
                                  (int *)((longlong)&local_150 + 4));
            }
            lVar13 = (longlong)iVar11;
            local_150 = CONCAT44(local_150._4_4_,iVar11 + 1);
            pFVar6 = (FName *)((longlong)local_158 + lVar13 * 0x18);
            *pFVar6 = local_d0;
            pFVar6[1] = FStack_c8;
            FVar18 = local_c0;
            goto LAB_1473fe5eb;
          }
          iVar11 = (int)pUVar12->_padding_;
          if ((*(int *)(lVar13 + 0x38) < iVar11) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar11 * 8) !=
              &pUVar12->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) goto LAB_1473fe428;
          if ((*(uint *)((longlong)FVar8 + 0x38) >> 8 & 1) == 0) {
            bVar9 = IsThisNotNull((void *)FVar8,"FField::GetFName");
            if (bVar9) {
              local_110 = *(FName *)((longlong)FVar8 + 0x20);
            }
            else {
              local_110.ComparisonIndex.Value = 0;
              local_110.Number = 0;
            }
            if ((((ulonglong)local_120 <= &local_110) &&
                (&local_110 < (FName *)((longlong)local_120 + (longlong)local_118._4_4_ * 8))) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = (int)local_118;
            if ((int)local_118 == local_118._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,(ForAnyElementType *)&local_120,
                                  (int *)((longlong)&local_118 + 4));
            }
            local_148[0] = 0xffffffff;
            local_118 = CONCAT44(local_118._4_4_,iVar11 + 1);
            *(FName *)((longlong)local_120 + (longlong)iVar11 * 8) = local_110;
            if ((((ulonglong)local_130 <= local_148) &&
                (local_148 < (undefined4 *)((longlong)local_130 + (longlong)local_128._4_4_ * 4)))
               && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = (int)local_128;
            if ((int)local_128 == local_128._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)&local_130,
                                  (int *)((longlong)&local_128 + 4));
            }
            local_f0 = 0;
            local_128 = CONCAT44(local_128._4_4_,iVar11 + 1);
            *(undefined4 *)((longlong)local_130 + (longlong)iVar11 * 4) = local_148[0];
            if ((((ulonglong)local_140 <= &local_f0) &&
                (&local_f0 < (undefined8 *)((longlong)local_140 + (longlong)local_138._4_4_ * 8)))
               && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = (int)local_138;
            if ((int)local_138 == local_138._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)&local_140,
                                  (int *)((longlong)&local_138 + 4));
            }
            local_138 = CONCAT44(local_138._4_4_,iVar11 + 1);
            *(undefined8 *)((longlong)local_140 + (longlong)iVar11 * 8) = local_f0;
          }
          else {
            FVar14 = FVar17;
            if (!bVar10) {
              bVar10 = true;
              FVar14 = FVar8;
            }
          }
        }
        local_100 = *(FName *)((longlong)FVar8 + 0x18);
        TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_108.ObjectPtr);
      } while (local_100 != (FName)0x0);
      if (FVar14 != (FName)0x0) {
        FVar14 = (FName)(local_e8.Field)->_padding_;
        if (FVar14 == DefaultAnimGraphName) {
          pFVar15 = (FAnimBlueprintFunction *)(pTVar5->AllocatorInstance).Data;
          local_a0.Group.ComparisonIndex.Value = 0;
          local_a0.Group.Number = 0;
          local_a0.OutputPoseNodeIndex = -1;
          local_a0.InputPoseNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.InputPoseNames.ArrayNum = 0;
          local_a0.InputPoseNames.ArrayMax = 0;
          local_a0.InputPoseNodeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.InputPoseNodeIndices.ArrayNum = 0;
          local_a0.InputPoseNodeIndices.ArrayMax = 0;
          local_a0.InputPoseNodeProperties.ArrayNum = 0;
          local_a0.InputPoseNodeProperties.ArrayMax = 0;
          local_a0.InputPropertyData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.InputPropertyData.ArrayNum = 0;
          local_a0.InputPropertyData.ArrayMax = 0;
          local_a0.InputProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.InputProperties.ArrayNum = 0;
          local_a0.InputProperties.ArrayMax = 0;
          local_a0.bImplemented = false;
          local_a0.OutputPoseNodeProperty = (FStructProperty *)0x0;
          local_a0.InputPoseNodeProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.Name = FVar14;
          if (((pFVar15 <= &local_a0) && (&local_a0 < pFVar15 + *piVar1)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar11 = (this->AnimBlueprintFunctions).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,&pTVar5->AllocatorInstance,piVar1);
          }
          _Src = (pTVar5->AllocatorInstance).Data;
          (this->AnimBlueprintFunctions).ArrayNum = iVar11 + 1;
          memmove(_Src + 0x78,_Src,(longlong)iVar11 * 0x78);
          pFVar15 = (FAnimBlueprintFunction *)(pTVar5->AllocatorInstance).Data;
          FAnimBlueprintFunction::FAnimBlueprintFunction(pFVar15,&local_a0);
          if (local_a0.InputProperties.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.InputProperties.AllocatorInstance.Data);
          }
          if (local_a0.InputPropertyData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.InputPropertyData.AllocatorInstance.Data);
          }
          if (local_a0.InputPoseNodeProperties.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.InputPoseNodeProperties.AllocatorInstance.Data);
          }
          if (local_a0.InputPoseNodeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_a0.InputPoseNodeIndices.AllocatorInstance.Data);
          }
          if (local_a0.InputPoseNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.InputPoseNames.AllocatorInstance.Data);
          }
        }
        else {
          iVar11 = (this->AnimBlueprintFunctions).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,&pTVar5->AllocatorInstance,piVar1);
          }
          (this->AnimBlueprintFunctions).ArrayNum = iVar11 + 1;
          pFVar15 = (FAnimBlueprintFunction *)
                    ((pTVar5->AllocatorInstance).Data + (longlong)iVar11 * 0x78);
          pFVar15->Name = FVar14;
          (pFVar15->Group).ComparisonIndex = 0;
          (pFVar15->Group).Number = 0;
          pFVar15->OutputPoseNodeIndex = -1;
          (pFVar15->InputPoseNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar15->InputPoseNames).ArrayNum = 0;
          (pFVar15->InputPoseNames).ArrayMax = 0;
          (pFVar15->InputPoseNodeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar15->InputPoseNodeIndices).ArrayNum = 0;
          (pFVar15->InputPoseNodeIndices).ArrayMax = 0;
          pFVar15->OutputPoseNodeProperty = (FStructProperty *)0x0;
          (pFVar15->InputPoseNodeProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0
          ;
          (pFVar15->InputPoseNodeProperties).ArrayNum = 0;
          (pFVar15->InputPoseNodeProperties).ArrayMax = 0;
          (pFVar15->InputPropertyData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar15->InputPropertyData).ArrayNum = 0;
          (pFVar15->InputPropertyData).ArrayMax = 0;
          (pFVar15->InputProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar15->InputProperties).ArrayNum = 0;
          (pFVar15->InputProperties).ArrayMax = 0;
          pFVar15->bImplemented = false;
        }
        pTVar2 = &pFVar15->InputPoseNames;
        if ((pTVar2 == (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_120) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x986,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar13 = (longlong)(int)local_118;
        if ((int)local_118 != 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,4,(int)local_118,&pTVar2->AllocatorInstance,
                              &(pFVar15->InputPoseNames).ArrayNum,
                              &(pFVar15->InputPoseNames).ArrayMax);
          memmove((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8,(void *)local_120,
                  lVar13 << 3);
          local_118 = local_118 & 0xffffffff00000000;
        }
        pTVar3 = &pFVar15->InputPoseNodeIndices;
        if ((pTVar3 == (TArray<int,TSizedDefaultAllocator<32>_> *)&local_130) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x986,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar13 = (longlong)(int)local_128;
        if ((int)local_128 != 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,(int)local_128,&pTVar3->AllocatorInstance,
                              &(pFVar15->InputPoseNodeIndices).ArrayNum,
                              &(pFVar15->InputPoseNodeIndices).ArrayMax);
          memmove((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 4,(void *)local_130,
                  lVar13 << 2);
          local_128 = local_128 & 0xffffffff00000000;
        }
        pTVar4 = &pFVar15->InputPoseNodeProperties;
        if ((pTVar4 == (TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)&local_140) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x986,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar13 = (longlong)(int)local_138;
        if ((int)local_138 != 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,(int)local_138,&pTVar4->AllocatorInstance,
                              &(pFVar15->InputPoseNodeProperties).ArrayNum,
                              &(pFVar15->InputPoseNodeProperties).ArrayMax);
          memmove((pTVar4->AllocatorInstance).Data + (longlong)iVar11 * 8,(void *)local_140,
                  lVar13 << 3);
          local_138 = local_138 & 0xffffffff00000000;
        }
        pTVar16 = &pFVar15->InputPropertyData;
        if ((pTVar16 ==
             (TArray<FAnimBlueprintFunction::FInputPropertyData,TSizedDefaultAllocator<32>_> *)
             &local_158) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x986,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar13 = (longlong)(int)local_150;
        if ((int)local_150 != 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,(int)local_150,&pTVar16->AllocatorInstance,
                              &(pFVar15->InputPropertyData).ArrayNum,
                              &(pFVar15->InputPropertyData).ArrayMax);
          memmove((pTVar16->AllocatorInstance).Data + (longlong)iVar11 * 0x18,(void *)local_158,
                  lVar13 * 0x18);
          local_150 = local_150 & 0xffffffff00000000;
        }
      }
    }
    if (local_158 != (FName)0x0) {
      FMemory::Free((void *)local_158);
    }
    if (local_140 != (FName)0x0) {
      FMemory::Free((void *)local_140);
    }
    if (local_130 != (FName)0x0) {
      FMemory::Free((void *)local_130);
    }
    if (local_120 != (FName)0x0) {
      FMemory::Free((void *)local_120);
    }
    local_e8.Field = ((local_e8.Field)->Next).field0_0x0.DebugPtr;
    TFieldIterator<UFunction>::IterateToNext(&local_e8);
    local_108.DebugPtr = local_e8.Field;
  } while( true );
}

// GetAnimBlueprintFunctions @ 1473fed30

TArray<FAnimBlueprintFunction,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetAnimBlueprintFunctions(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FAnimBlueprintFunction,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetAnimNodeProperties @ 1473feee0

TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetAnimNodeProperties(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetAnimNodePropertyCount @ 1473feef0

int __thiscall
UAnimBlueprintGeneratedClass::GetAnimNodePropertyCount
          (UAnimBlueprintGeneratedClass *this,UScriptStruct *param_1)

{
  int iVar1;
  FAnimNodeStructData *this_00;
  UScriptStruct *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = TMapBase<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,0>_>
            ::Find((TMapBase<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,0>_>
                    *)&this->_padding_,(TObjectPtr<UScriptStruct_const_>)&local_res8);
  if (this_00 != (FAnimNodeStructData *)0x0) {
    iVar1 = FAnimNodeStructData::GetNumProperties(this_00);
    return iVar1;
  }
  return 0;
}

// GetAnimNodePropertyIndex @ 1473fef70

int __thiscall
UAnimBlueprintGeneratedClass::GetAnimNodePropertyIndex
          (UAnimBlueprintGeneratedClass *this,UScriptStruct *param_1,FName param_2)

{
  int iVar1;
  FAnimNodeStructData *this_00;
  UScriptStruct *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = TMapBase<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,0>_>
            ::Find((TMapBase<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FAnimNodeStructData,0>_>
                    *)&this->_padding_,(TObjectPtr<UScriptStruct_const_>)&local_res8);
  if (this_00 != (FAnimNodeStructData *)0x0) {
    iVar1 = FAnimNodeStructData::GetPropertyIndex(this_00,param_2);
    return iVar1;
  }
  return -1;
}

// GetAnimNotifies @ 1473ff010

TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetAnimNotifies(UAnimBlueprintGeneratedClass *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  UAnimBlueprintGeneratedClass *pUVar3;
  
  do {
    pUVar3 = this;
    pUVar1 = IAnimClassInterface::GetActualAnimClass((IAnimClassInterface *)pUVar3);
    if ((pUVar1 == (UClass *)0x0) ||
       (this_00 = (UObjectBaseUtility *)pUVar1->_padding_, this_00 == (UObjectBaseUtility *)0x0))
    break;
    pUVar1 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    this = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
  } while (this != (UAnimBlueprintGeneratedClass *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001473ff060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar2 = (TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *)
           (**(code **)(pUVar3->_padding_ + 0xd0))(pUVar3);
  return pTVar2;
}

// GetAnimNotifies_Direct @ 1473ff630

TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetAnimNotifies_Direct(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetBakedStateMachines @ 147400270

TArray<FBakedAnimationStateMachine,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetBakedStateMachines(UAnimBlueprintGeneratedClass *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  TArray<FBakedAnimationStateMachine,TSizedDefaultAllocator<32>_> *pTVar2;
  UAnimBlueprintGeneratedClass *pUVar3;
  
  do {
    pUVar3 = this;
    pUVar1 = IAnimClassInterface::GetActualAnimClass((IAnimClassInterface *)pUVar3);
    if ((pUVar1 == (UClass *)0x0) ||
       (this_00 = (UObjectBaseUtility *)pUVar1->_padding_, this_00 == (UObjectBaseUtility *)0x0))
    break;
    pUVar1 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    this = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
  } while (this != (UAnimBlueprintGeneratedClass *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001474002c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar2 = (TArray<FBakedAnimationStateMachine,TSizedDefaultAllocator<32>_> *)
           (**(code **)(pUVar3->_padding_ + 200))(pUVar3);
  return pTVar2;
}

// GetBakedStateMachines_Direct @ 1474002d0

TArray<FBakedAnimationStateMachine,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetBakedStateMachines_Direct(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FBakedAnimationStateMachine,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetConstantNodeData @ 147401390

void * __thiscall
UAnimBlueprintGeneratedClass::GetConstantNodeData(UAnimBlueprintGeneratedClass *this)

{
  return *(void **)&this[-1].BakedStateMachines.ArrayNum;
}

// GetConstantNodeValueRaw @ 1474013a0

void * __thiscall
UAnimBlueprintGeneratedClass::GetConstantNodeValueRaw
          (UAnimBlueprintGeneratedClass *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  lVar1 = *(longlong *)(this->_padding_ + (longlong)param_1 * 8);
  lVar6 = (**(code **)(this->_padding_ + 0x120))(this);
  if (lVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConstantData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBlueprintGeneratedClass.cpp"
                       ,0x167,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  if (*(int *)(lVar1 + 0x30) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  if (lVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  return (void *)(*(int *)(lVar1 + 0x44) + lVar6);
}

// GetConstantsStructName @ 1474014d0

FName __cdecl UAnimBlueprintGeneratedClass::GetConstantsStructName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,L"AnimBlueprintGeneratedConstantData");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetDynamicResetNodeProperties @ 147401d70

TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetDynamicResetNodeProperties(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetGraphAssetPlayerInformation @ 147401f00

TMap<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
* __thiscall
UAnimBlueprintGeneratedClass::GetGraphAssetPlayerInformation(UAnimBlueprintGeneratedClass *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  TMap<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
  *pTVar2;
  UAnimBlueprintGeneratedClass *pUVar3;
  
  do {
    pUVar3 = this;
    pUVar1 = IAnimClassInterface::GetActualAnimClass((IAnimClassInterface *)pUVar3);
    if ((pUVar1 == (UClass *)0x0) ||
       (this_00 = (UObjectBaseUtility *)pUVar1->_padding_, this_00 == (UObjectBaseUtility *)0x0))
    break;
    pUVar1 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    this = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
  } while (this != (UAnimBlueprintGeneratedClass *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147401f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar2 = (TMap<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
            *)(**(code **)(pUVar3->_padding_ + 0xe8))(pUVar3);
  return pTVar2;
}

// GetGraphAssetPlayerInformation_Direct @ 147401f60

TMap<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
* __thiscall
UAnimBlueprintGeneratedClass::GetGraphAssetPlayerInformation_Direct
          (UAnimBlueprintGeneratedClass *this)

{
  return (TMap<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
          *)&this->_padding_;
}

// GetGraphBlendOptions @ 147401f70

TMap<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
* __thiscall UAnimBlueprintGeneratedClass::GetGraphBlendOptions(UAnimBlueprintGeneratedClass *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  TMap<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
  *pTVar2;
  UAnimBlueprintGeneratedClass *pUVar3;
  
  do {
    pUVar3 = this;
    pUVar1 = IAnimClassInterface::GetActualAnimClass((IAnimClassInterface *)pUVar3);
    if ((pUVar1 == (UClass *)0x0) ||
       (this_00 = (UObjectBaseUtility *)pUVar1->_padding_, this_00 == (UObjectBaseUtility *)0x0))
    break;
    pUVar1 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    this = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
  } while (this != (UAnimBlueprintGeneratedClass *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147401fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar2 = (TMap<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
            *)(**(code **)(pUVar3->_padding_ + 0xf0))(pUVar3);
  return pTVar2;
}

// GetGraphBlendOptions_Direct @ 147401fd0

TMap<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
* __thiscall
UAnimBlueprintGeneratedClass::GetGraphBlendOptions_Direct(UAnimBlueprintGeneratedClass *this)

{
  return (TMap<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
          *)&this->_padding_;
}

// GetInitializationNodeProperties @ 1474020c0

TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetInitializationNodeProperties(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetLinkedAnimGraphNodeProperties @ 1474024e0

TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetLinkedAnimGraphNodeProperties(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetLinkedAnimLayerNodeProperties @ 1474024f0

TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetLinkedAnimLayerNodeProperties(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetMutableNodeData @ 147402d20

FAnimBlueprintMutableData * __thiscall
UAnimBlueprintGeneratedClass::GetMutableNodeData
          (UAnimBlueprintGeneratedClass *this,UObject *param_1)

{
  FAnimBlueprintMutableData *pFVar1;
  
  if ((FProperty *)this->_padding_ != (FProperty *)0x0) {
    pFVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                       ((FProperty *)this->_padding_,param_1,0);
    return pFVar1;
  }
  return (FAnimBlueprintMutableData *)0x0;
}

// GetMutableNodeData @ 147402d40

FAnimBlueprintMutableData * __thiscall
UAnimBlueprintGeneratedClass::GetMutableNodeData
          (UAnimBlueprintGeneratedClass *this,UObject *param_1)

{
  FAnimBlueprintMutableData *pFVar1;
  
  if ((FProperty *)this->_padding_ != (FProperty *)0x0) {
    pFVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                       ((FProperty *)this->_padding_,param_1,0);
    return pFVar1;
  }
  return (FAnimBlueprintMutableData *)0x0;
}

// GetMutableNodeValueRaw @ 147402d60

void * __thiscall
UAnimBlueprintGeneratedClass::GetMutableNodeValueRaw
          (UAnimBlueprintGeneratedClass *this,int param_1,UObject *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  lVar1 = *(longlong *)(this->_padding_ + (longlong)param_1 * 8);
  lVar6 = (**(code **)(this->_padding_ + 0x118))(this,param_2);
  if (lVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MutableData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBlueprintGeneratedClass.cpp"
                       ,0x170,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  if (*(int *)(lVar1 + 0x30) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  if (lVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  return (void *)(*(int *)(lVar1 + 0x44) + lVar6);
}

// GetMutablesStructName @ 147402ea0

FName __cdecl UAnimBlueprintGeneratedClass::GetMutablesStructName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,L"AnimBlueprintGeneratedMutableData");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// GetNodeData @ 147402f30

TArrayView<FAnimNodeData_const_,int> * __thiscall
UAnimBlueprintGeneratedClass::GetNodeData
          (UAnimBlueprintGeneratedClass *this,
          TArrayView<FAnimNodeData_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FAnimNodeData_const_,int> *pTVar4;
  
  iVar1 = (int)this->_padding_;
  __return_storage_ptr__->DataPtr = (FAnimNodeData *)this->_padding_;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FAnimNodeData_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetOrderedSavedPoseNodeIndicesMap @ 147403140

TMap<FName,FCachedPoseIndices,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCachedPoseIndices,0>_>
* __thiscall
UAnimBlueprintGeneratedClass::GetOrderedSavedPoseNodeIndicesMap(UAnimBlueprintGeneratedClass *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  TMap<FName,FCachedPoseIndices,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCachedPoseIndices,0>_>
  *pTVar2;
  UAnimBlueprintGeneratedClass *pUVar3;
  
  do {
    pUVar3 = this;
    pUVar1 = IAnimClassInterface::GetActualAnimClass((IAnimClassInterface *)pUVar3);
    if ((pUVar1 == (UClass *)0x0) ||
       (this_00 = (UObjectBaseUtility *)pUVar1->_padding_, this_00 == (UObjectBaseUtility *)0x0))
    break;
    pUVar1 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    this = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
  } while (this != (UAnimBlueprintGeneratedClass *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147403190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar2 = (TMap<FName,FCachedPoseIndices,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCachedPoseIndices,0>_>
            *)(**(code **)(pUVar3->_padding_ + 0xe0))(pUVar3);
  return pTVar2;
}

// GetOrderedSavedPoseNodeIndicesMap_Direct @ 1474031a0

TMap<FName,FCachedPoseIndices,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCachedPoseIndices,0>_>
* __thiscall
UAnimBlueprintGeneratedClass::GetOrderedSavedPoseNodeIndicesMap_Direct
          (UAnimBlueprintGeneratedClass *this)

{
  return (TMap<FName,FCachedPoseIndices,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCachedPoseIndices,0>_>
          *)&this->_padding_;
}

// GetPersistentUberGraphFrame @ 1474032b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uchar * __thiscall
UAnimBlueprintGeneratedClass::GetPersistentUberGraphFrame
          (UAnimBlueprintGeneratedClass *this,UObject *param_1,UFunction *param_2)

{
  bool bVar1;
  uchar *puVar2;
  
  bVar1 = IsInGameThread();
  if (!bVar1) {
    return (uchar *)0x0;
  }
  puVar2 = UBlueprintGeneratedClass::GetPersistentUberGraphFrame
                     ((UBlueprintGeneratedClass *)this,param_1,param_2);
  return puVar2;
}

// GetPreUpdateNodeProperties @ 147403350

TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetPreUpdateNodeProperties(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetPrivateStaticClass @ 147403760

UClass * __cdecl UAnimBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.InnerSingleton,
               StaticRegisterNativesUAnimBlueprintGeneratedClass,0x5d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UAnimBlueprintGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprintGeneratedClass.InnerSingleton;
}

// GetStateMachineNodeProperties @ 147405260

TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetStateMachineNodeProperties(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetSyncGroupIndex @ 147405810

int __thiscall
UAnimBlueprintGeneratedClass::GetSyncGroupIndex(UAnimBlueprintGeneratedClass *this,FName param_1)

{
  FName *pFVar1;
  longlong *plVar2;
  FName *pFVar3;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x70))();
  pFVar1 = (FName *)*plVar2;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + (int)plVar2[1]) {
      return -1;
    }
    if (*pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 1;
  }
  return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
}

// GetSyncGroupNames @ 147405860

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetSyncGroupNames(UAnimBlueprintGeneratedClass *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  UAnimBlueprintGeneratedClass *pUVar3;
  
  do {
    pUVar3 = this;
    pUVar1 = IAnimClassInterface::GetActualAnimClass((IAnimClassInterface *)pUVar3);
    if ((pUVar1 == (UClass *)0x0) ||
       (this_00 = (UObjectBaseUtility *)pUVar1->_padding_, this_00 == (UObjectBaseUtility *)0x0))
    break;
    pUVar1 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    this = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
  } while (this != (UAnimBlueprintGeneratedClass *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001474058b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
           (**(code **)(pUVar3->_padding_ + 0xd8))(pUVar3);
  return pTVar2;
}

// GetSyncGroupNames_Direct @ 1474058c0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UAnimBlueprintGeneratedClass::GetSyncGroupNames_Direct(UAnimBlueprintGeneratedClass *this)

{
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetTargetSkeleton @ 1474058d0

USkeleton * __thiscall
UAnimBlueprintGeneratedClass::GetTargetSkeleton(UAnimBlueprintGeneratedClass *this)

{
  return (USkeleton *)this->_padding_;
}

// InitializeAnimNodeData @ 147406da0

void __thiscall
UAnimBlueprintGeneratedClass::InitializeAnimNodeData
          (UAnimBlueprintGeneratedClass *this,UObject *param_1,bool param_2)

{
  int iVar1;
  FProperty *this_00;
  longlong lVar2;
  longlong *plVar3;
  UClass *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UScriptStruct *pUVar8;
  void *pvVar9;
  UClass *pUVar10;
  IAnimClassInterface *pIVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar12 = 0;
  if (0 < (this->AnimNodeProperties).ArrayNum) {
    lVar13 = 0;
    do {
      if ((this->AnimNodeData).ArrayNum <= (int)uVar12) {
        return;
      }
      uVar7 = 0;
      if ((int)uVar12 < (this->AnimNodeProperties).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
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
      this_00 = *(FProperty **)((this->AnimNodeProperties).AllocatorInstance.Data + lVar13);
      lVar2 = this_00[1]._padding_;
      pUVar8 = FAnimNode_Base::StaticStruct();
      if (pUVar8 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pvVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_1,0);
          if ((!param_2) &&
             (plVar3 = *(longlong **)((longlong)pvVar9 + 8), plVar3 != (longlong *)0x0)) {
            if (((*plVar3 == 0) || (plVar3[1] == 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AnimClassInterface",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimNodeData.h"
                                   ,0x76,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*plVar3 == 0) {
              pIVar11 = (IAnimClassInterface *)0x0;
            }
            else {
              pIVar11 = (IAnimClassInterface *)plVar3[1];
            }
            pUVar4 = *(UClass **)&param_1->field_0x10;
            pUVar10 = IAnimClassInterface::GetActualAnimClass(pIVar11);
            if (pUVar10 == pUVar4) goto LAB_147406f4d;
          }
          uVar7 = 0;
          if ((int)uVar12 < (this->AnimNodeData).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(FScriptContainerElement **)((longlong)pvVar9 + 8) =
               (this->AnimNodeData).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x28;
        }
      }
LAB_147406f4d:
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar12 < (this->AnimNodeProperties).ArrayNum);
  }
  return;
}

// Link @ 147409780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimBlueprintGeneratedClass::Link
          (UAnimBlueprintGeneratedClass *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> *pTVar6;
  UScriptStruct *pUVar7;
  code *pcVar8;
  longlong lVar9;
  int iVar10;
  UScriptStruct *pUVar11;
  UPackage *pUVar12;
  FScriptContainerElement *pFVar13;
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  FStructProperty *local_68;
  longlong local_60;
  TObjectPtr<UScriptStruct>_u_0 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  TFieldIterator<FProperty> local_40;
  
  UBlueprintGeneratedClass::Link((UBlueprintGeneratedClass *)this,param_1,param_2);
  piVar1 = &(this->AnimNodeProperties).ArrayMax;
  (this->AnimNodeProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AnimNodeProperties).AllocatorInstance,0,piVar1);
  }
  pTVar3 = &this->LinkedAnimGraphNodeProperties;
  piVar1 = &(this->LinkedAnimGraphNodeProperties).ArrayMax;
  (this->LinkedAnimGraphNodeProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  pTVar4 = &this->LinkedAnimLayerNodeProperties;
  piVar1 = &(this->LinkedAnimLayerNodeProperties).ArrayMax;
  (this->LinkedAnimLayerNodeProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PreUpdateNodeProperties).ArrayMax;
  (this->PreUpdateNodeProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PreUpdateNodeProperties).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DynamicResetNodeProperties).ArrayMax;
  (this->DynamicResetNodeProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DynamicResetNodeProperties).AllocatorInstance,0,piVar1);
  }
  pTVar5 = &this->StateMachineNodeProperties;
  piVar1 = &(this->StateMachineNodeProperties).ArrayMax;
  (this->StateMachineNodeProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar5->AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->InitializationNodeProperties).ArrayMax;
  (this->InitializationNodeProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InitializationNodeProperties).AllocatorInstance,0,piVar1);
  }
  pTVar6 = &this->MutableProperties;
  piVar1 = &(this->MutableProperties).ArrayMax;
  (this->MutableProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar6->AllocatorInstance,0,piVar1);
  }
  piVar2 = &(this->ConstantProperties).ArrayMax;
  (this->ConstantProperties).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConstantProperties).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->MutableSubsystemProperties).ArrayMax;
  (this->MutableSubsystemProperties).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->MutableSubsystemProperties).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->ConstantSubsystemProperties).ArrayMax;
  (this->ConstantSubsystemProperties).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConstantSubsystemProperties).AllocatorInstance,0,piVar2);
  }
  local_40.Field = (FField *)this->_padding_;
  this->MutableNodeDataProperty = (FStructProperty *)0x0;
  local_40.InterfaceIndex = -1;
  local_40.bIncludeSuper = true;
  local_40.bIncludeDeprecated = true;
  local_40.bIncludeInterface = false;
  local_40.Struct = (UStruct *)this;
  TFieldIterator<FProperty>::IterateToNext(&local_40);
  do {
    if ((FStructProperty *)local_40.Field == (FStructProperty *)0x0) {
      return;
    }
    if (((FStructProperty *)local_40.Field == (FStructProperty *)0x0) ||
       ((*(uint *)(((FStructProperty *)local_40.Field)->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
      local_68 = (FStructProperty *)0x0;
    }
    else {
      local_68 = (FStructProperty *)local_40.Field;
      if ((FStructProperty *)local_40.Field != (FStructProperty *)0x0) {
        pUVar7 = (((FStructProperty *)local_40.Field)->Struct).field0_0x0.DebugPtr;
        pUVar11 = FAnimNode_Base::StaticStruct();
        if (pUVar11 == (UScriptStruct *)0x0) {
LAB_147409d21:
          pUVar7 = (local_68->Struct).field0_0x0.DebugPtr;
          if (Z_Registration_Info_UScriptStruct_FAnimBlueprintMutableData.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar12 = Z_Construct_UPackage__Script_Engine();
            Z_Registration_Info_UScriptStruct_FAnimBlueprintMutableData.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintMutableData,
                                 (UObject *)pUVar12,L"AnimBlueprintMutableData");
            if (Z_Registration_Info_UScriptStruct_FAnimBlueprintMutableData.OuterSingleton !=
                (UScriptStruct *)0x0) goto LAB_147409d64;
          }
          else {
LAB_147409d64:
            iVar10 = (int)(Z_Registration_Info_UScriptStruct_FAnimBlueprintMutableData.
                          OuterSingleton)->_padding_;
            if (((int)pUVar7->_padding_ < iVar10) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar10 * 8) !=
                &(Z_Registration_Info_UScriptStruct_FAnimBlueprintMutableData.OuterSingleton)->
                 _padding_)) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
            if (bVar15) {
              this->MutableNodeDataProperty = local_68;
              local_58 = (TObjectPtr<UScriptStruct>_u_0)(local_68->Struct).field0_0x0.DebugPtr;
              if (local_58.DebugPtr == (UScriptStruct *)0x0) {
                local_50 = 0;
              }
              else {
                local_50 = (local_58.DebugPtr)->_padding_;
              }
              local_48 = 0xffffffff;
              local_44 = 0x101;
              local_42 = 0;
              TFieldIterator<FProperty>::IterateToNext
                        ((TFieldIterator<FProperty> *)&local_58.ObjectPtr);
              lVar9 = local_50;
              while (local_50 = lVar9, lVar9 != 0) {
                pFVar13 = (pTVar6->AllocatorInstance).Data;
                local_60 = lVar9;
                if (((pFVar13 <= (FScriptContainerElement *)&local_60) &&
                    ((FScriptContainerElement *)&local_60 < pFVar13 + (longlong)*piVar1 * 8)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar10 = (this->MutableProperties).ArrayNum;
                if (iVar10 == *piVar1) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar6->AllocatorInstance,piVar1);
                }
                (this->MutableProperties).ArrayNum = iVar10 + 1;
                *(longlong *)((pTVar6->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_60;
                local_50 = *(longlong *)(lVar9 + 0x18);
                TFieldIterator<FProperty>::IterateToNext
                          ((TFieldIterator<FProperty> *)&local_58.ObjectPtr);
                lVar9 = local_50;
              }
              goto LAB_147409ee0;
            }
          }
          pUVar7 = (local_68->Struct).field0_0x0.DebugPtr;
          pUVar11 = FAnimSubsystemInstance::StaticStruct();
          if (pUVar11 != (UScriptStruct *)0x0) {
            iVar10 = (int)pUVar11->_padding_;
            if (((int)pUVar7->_padding_ < iVar10) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar10 * 8) !=
                &pUVar11->_padding_)) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
            if (bVar15) {
              pTVar14 = &this->MutableSubsystemProperties;
              goto LAB_147409c87;
            }
          }
        }
        else {
          iVar10 = (int)pUVar11->_padding_;
          if (((int)pUVar7->_padding_ < iVar10) ||
             ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar10 * 8) !=
              &pUVar11->_padding_)) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          if (!bVar15) goto LAB_147409d21;
          pUVar11 = FAnimNode_LinkedAnimGraph::StaticStruct();
          pUVar7 = (local_68->Struct).field0_0x0.DebugPtr;
          if (pUVar7 == (UScriptStruct *)0x0) {
            bVar15 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar15 = pUVar7 == pUVar11;
          }
          if (bVar15) {
            pFVar13 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar13 <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 <
                 pFVar13 + (longlong)(this->LinkedAnimGraphNodeProperties).ArrayMax * 8)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar10 = (this->LinkedAnimGraphNodeProperties).ArrayNum;
            if (iVar10 == (this->LinkedAnimGraphNodeProperties).ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar3->AllocatorInstance,
                                  &(this->LinkedAnimGraphNodeProperties).ArrayMax);
            }
            (this->LinkedAnimGraphNodeProperties).ArrayNum = iVar10 + 1;
            pFVar13 = (pTVar3->AllocatorInstance).Data;
LAB_147409c75:
            *(FStructProperty **)(pFVar13 + (longlong)iVar10 * 8) = local_68;
          }
          else {
            pUVar11 = FAnimNode_LinkedAnimLayer::StaticStruct();
            pUVar7 = (local_68->Struct).field0_0x0.DebugPtr;
            if (pUVar7 == (UScriptStruct *)0x0) {
              bVar15 = pUVar11 == (UScriptStruct *)0x0;
            }
            else {
              bVar15 = pUVar7 == pUVar11;
            }
            if (bVar15) {
              pFVar13 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar13 <= (FScriptContainerElement *)&local_68) &&
                  ((FScriptContainerElement *)&local_68 <
                   pFVar13 + (longlong)(this->LinkedAnimLayerNodeProperties).ArrayMax * 8)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar10 = (this->LinkedAnimLayerNodeProperties).ArrayNum;
              if (iVar10 == (this->LinkedAnimLayerNodeProperties).ArrayMax) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar4->AllocatorInstance,
                                    &(this->LinkedAnimLayerNodeProperties).ArrayMax);
              }
              (this->LinkedAnimLayerNodeProperties).ArrayNum = iVar10 + 1;
              pFVar13 = (pTVar4->AllocatorInstance).Data;
              goto LAB_147409c75;
            }
            pUVar11 = FAnimNode_StateMachine::StaticStruct();
            if (pUVar11 != (UScriptStruct *)0x0) {
              iVar10 = (int)pUVar11->_padding_;
              if (((int)pUVar7->_padding_ < iVar10) ||
                 ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar10 * 8) !=
                  &pUVar11->_padding_)) {
                bVar15 = false;
              }
              else {
                bVar15 = true;
              }
              if (bVar15) {
                pFVar13 = (pTVar5->AllocatorInstance).Data;
                if (((pFVar13 <= (FScriptContainerElement *)&local_68) &&
                    ((FScriptContainerElement *)&local_68 <
                     pFVar13 + (longlong)(this->StateMachineNodeProperties).ArrayMax * 8)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar10 = (this->StateMachineNodeProperties).ArrayNum;
                if (iVar10 == (this->StateMachineNodeProperties).ArrayMax) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar5->AllocatorInstance,
                                      &(this->StateMachineNodeProperties).ArrayMax);
                }
                (this->StateMachineNodeProperties).ArrayNum = iVar10 + 1;
                pFVar13 = (pTVar5->AllocatorInstance).Data;
                goto LAB_147409c75;
              }
            }
          }
          pTVar14 = &this->AnimNodeProperties;
LAB_147409c87:
          pFVar13 = (pTVar14->AllocatorInstance).Data;
          if (((pFVar13 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < pFVar13 + (longlong)pTVar14->ArrayMax * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = pTVar14->ArrayNum;
          if (iVar10 == pTVar14->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
          }
          pTVar14->ArrayNum = iVar10 + 1;
          *(FStructProperty **)((pTVar14->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_68
          ;
        }
      }
    }
LAB_147409ee0:
    local_40.Field = (local_40.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_40);
  } while( true );
}

// LinkFunctionsToDefaultObjectNodes @ 147409f30

void __thiscall
UAnimBlueprintGeneratedClass::LinkFunctionsToDefaultObjectNodes
          (UAnimBlueprintGeneratedClass *this,UObject *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  longlong *plVar7;
  FAnimNode_Root *this_00;
  FName FVar8;
  FProperty *pFVar9;
  void *pvVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar18;
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar19;
  longlong lVar20;
  undefined1 local_res18 [8];
  uint local_res20;
  FProperty *local_78;
  longlong local_70;
  longlong local_68;
  void *local_60;
  FScriptContainerElement *local_58;
  
  piVar1 = &(this->PreUpdateNodeProperties).ArrayMax;
  (this->PreUpdateNodeProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PreUpdateNodeProperties).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DynamicResetNodeProperties).ArrayMax;
  (this->DynamicResetNodeProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DynamicResetNodeProperties).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->InitializationNodeProperties).ArrayMax;
  (this->InitializationNodeProperties).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InitializationNodeProperties).AllocatorInstance,0,piVar1);
  }
  InitializeAnimNodeData(this,param_1,false);
  local_res20 = 0;
  if (0 < (this->AnimNodeProperties).ArrayNum) {
    local_70 = 0;
    do {
      lVar17 = local_70;
      uVar13 = local_res20;
      pTVar19 = &this->DynamicResetNodeProperties;
      pTVar18 = &this->PreUpdateNodeProperties;
      pTVar15 = &this->InitializationNodeProperties;
      uVar14 = 0;
      if ((int)local_res20 < (this->AnimNodeProperties).ArrayNum) {
        uVar14 = ~local_res20 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_78 = *(FProperty **)((this->AnimNodeProperties).AllocatorInstance.Data + lVar17);
      lVar17 = local_78[1]._padding_;
      pUVar6 = FAnimNode_Base::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar5 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar17 + 0x38) < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(local_78,param_1,0);
          cVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
          if (cVar4 != '\0') {
            pFVar11 = (pTVar19->AllocatorInstance).Data;
            if (((pFVar11 <= (FScriptContainerElement *)&local_78) &&
                ((FScriptContainerElement *)&local_78 <
                 pFVar11 + (longlong)(this->DynamicResetNodeProperties).ArrayMax * 8)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar5 = (this->DynamicResetNodeProperties).ArrayNum;
            if (iVar5 == (this->DynamicResetNodeProperties).ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar19->AllocatorInstance,
                                 &(this->DynamicResetNodeProperties).ArrayMax);
            }
            (this->DynamicResetNodeProperties).ArrayNum = iVar5 + 1;
            *(FProperty **)((pTVar19->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_78;
          }
          cVar4 = (**(code **)(*plVar7 + 0x38))(plVar7);
          if (cVar4 != '\0') {
            pFVar11 = (pTVar18->AllocatorInstance).Data;
            if (((pFVar11 <= (FScriptContainerElement *)&local_78) &&
                ((FScriptContainerElement *)&local_78 <
                 pFVar11 + (longlong)(this->PreUpdateNodeProperties).ArrayMax * 8)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar5 = (this->PreUpdateNodeProperties).ArrayNum;
            if (iVar5 == (this->PreUpdateNodeProperties).ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar18->AllocatorInstance,
                                 &(this->PreUpdateNodeProperties).ArrayMax);
            }
            (this->PreUpdateNodeProperties).ArrayNum = iVar5 + 1;
            *(FProperty **)((pTVar18->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_78;
          }
          cVar4 = (**(code **)(*plVar7 + 0x68))(plVar7);
          if (cVar4 != '\0') {
            pFVar11 = (pTVar15->AllocatorInstance).Data;
            if (((pFVar11 <= (FScriptContainerElement *)&local_78) &&
                ((FScriptContainerElement *)&local_78 <
                 pFVar11 + (longlong)(this->InitializationNodeProperties).ArrayMax * 8)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar5 = (this->InitializationNodeProperties).ArrayNum;
            if (iVar5 == (this->InitializationNodeProperties).ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar15->AllocatorInstance,
                                 &(this->InitializationNodeProperties).ArrayMax);
            }
            (this->InitializationNodeProperties).ArrayNum = iVar5 + 1;
            *(FProperty **)((pTVar15->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_78;
          }
        }
      }
      lVar17 = local_78[1]._padding_;
      pUVar6 = FAnimNode_Root::StaticStruct();
      if (pUVar6 == (UScriptStruct *)0x0) {
LAB_14740a374:
        lVar17 = local_78[1]._padding_;
        pUVar6 = FAnimNode_LinkedInputPose::StaticStruct();
        if (pUVar6 != (UScriptStruct *)0x0) {
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)(lVar17 + 0x38) < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pvVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal(local_78,param_1,0);
            pFVar11 = (this->AnimBlueprintFunctions).AllocatorInstance.Data;
            pFVar16 = pFVar11 + (longlong)(this->AnimBlueprintFunctions).ArrayNum * 0x78;
            local_60 = pvVar10;
            if (pFVar11 != pFVar16) {
              do {
                if (*(longlong *)pFVar11 == *(longlong *)((longlong)pvVar10 + 0x18)) {
                  if (pFVar11 != (FScriptContainerElement *)0x0) {
                    local_58 = pFVar11 + 0x20;
                    uVar14 = 0;
                    if (0 < *(int *)local_58) {
                      lVar20 = 0;
                      lVar17 = 0;
                      do {
                        uVar12 = ~uVar14 >> 0x1f;
                        uVar13 = 0;
                        if ((int)uVar14 < *(int *)(pFVar11 + 0x20)) {
                          uVar13 = uVar12;
                        }
                        if ((uVar13 == 0) &&
                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar3)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        if (*(longlong *)(lVar20 + *(longlong *)(pFVar11 + 0x18)) ==
                            *(longlong *)((longlong)pvVar10 + 0x10)) {
                          uVar13 = 0;
                          if ((int)uVar14 < *(int *)(pFVar11 + 0x30)) {
                            uVar13 = uVar12;
                          }
                          if ((uVar13 == 0) &&
                             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar3)) {
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pFVar9 = local_78;
                          *(uint *)(lVar17 + *(longlong *)(pFVar11 + 0x28)) = local_res20;
                          uVar13 = 0;
                          if ((int)uVar14 < *(int *)(pFVar11 + 0x48)) {
                            uVar13 = uVar12;
                          }
                          if ((uVar13 == 0) &&
                             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar3)) {
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          *(FProperty **)(lVar20 + *(longlong *)(pFVar11 + 0x40)) = pFVar9;
                          pvVar10 = local_60;
                        }
                        uVar14 = uVar14 + 1;
                        lVar17 = lVar17 + 4;
                        lVar20 = lVar20 + 8;
                        uVar13 = local_res20;
                      } while ((int)uVar14 < *(int *)local_58);
                    }
                    uVar14 = 0;
                    if (0 < *(int *)(pFVar11 + 0x58)) {
                      lVar17 = 0;
                      do {
                        uVar13 = 0;
                        if ((int)uVar14 < *(int *)(pFVar11 + 0x58)) {
                          uVar13 = ~uVar14 >> 0x1f;
                        }
                        if ((uVar13 == 0) &&
                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar3)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pFVar9 = UStruct::FindPropertyByName
                                           ((UStruct *)this,
                                            *(FName *)(*(longlong *)(pFVar11 + 0x50) +
                                                      (longlong)(int)uVar14 * 0x18));
                        uVar13 = 0;
                        if ((int)uVar14 < *(int *)(pFVar11 + 0x58)) {
                          uVar13 = ~uVar14 >> 0x1f;
                        }
                        if ((uVar13 == 0) &&
                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar3)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        uVar14 = uVar14 + 1;
                        *(FProperty **)(lVar17 + 0x10 + *(longlong *)(pFVar11 + 0x50)) = pFVar9;
                        lVar17 = lVar17 + 0x18;
                        uVar13 = local_res20;
                      } while ((int)uVar14 < *(int *)(pFVar11 + 0x58));
                    }
                  }
                  break;
                }
                pFVar11 = pFVar11 + 0x78;
              } while (pFVar11 != pFVar16);
            }
          }
        }
      }
      else {
        iVar5 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar17 + 0x38) < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14740a374;
        this_00 = FProperty::ContainerUObjectPtrToValuePtrInternal(local_78,param_1,0);
        FAnimNode_Root::GetName(this_00);
        pFVar11 = (this->AnimBlueprintFunctions).AllocatorInstance.Data;
        pFVar16 = pFVar11 + (longlong)(this->AnimBlueprintFunctions).ArrayNum * 0x78;
        for (; pFVar11 != pFVar16; pFVar11 = pFVar11 + 0x78) {
          if (*(longlong *)pFVar11 == local_68) {
            FVar8 = FAnimNode_Root::GetGroup(this_00);
            *(longlong *)(pFVar11 + 8) = *(longlong *)FVar8;
            *(uint *)(pFVar11 + 0x10) = uVar13;
            *(FProperty **)(pFVar11 + 0x38) = local_78;
            break;
          }
        }
      }
      local_70 = local_70 + 8;
      local_res20 = uVar13 + 1;
    } while ((int)local_res20 < (this->AnimNodeProperties).ArrayNum);
  }
  iVar5 = (this->AnimBlueprintFunctions).ArrayNum;
  pFVar11 = (this->AnimBlueprintFunctions).AllocatorInstance.Data;
  pFVar16 = pFVar11 + (longlong)iVar5 * 0x78;
  while( true ) {
    if ((this->AnimBlueprintFunctions).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FAnimBlueprintFunction,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar11 == pFVar16) break;
    if ((*(FProperty **)(pFVar11 + 0x38) != (FProperty *)0x0) &&
       (pvVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                            (*(FProperty **)(pFVar11 + 0x38),param_1,0),
       *(int *)((longlong)pvVar10 + 0x18) != -1)) {
      pFVar11[0x70] = (FScriptContainerElement)0x1;
    }
    pFVar11 = pFVar11 + 0x78;
  }
  return;
}

// OnPostLoadDefaults @ 14740d2f0

void __thiscall
UAnimBlueprintGeneratedClass::OnPostLoadDefaults
          (UAnimBlueprintGeneratedClass *this,UObject *param_1)

{
  int *piVar1;
  UAnimBlueprintGeneratedClass *local_28;
  UObject *local_20;
  code *local_18;
  UAnimBlueprintGeneratedClass **local_10;
  
  if ((this->AnimBlueprintFunctions).ArrayNum == 0) {
    GenerateAnimationBlueprintFunctions(this);
  }
  BuildConstantProperties(this);
  LinkFunctionsToDefaultObjectNodes(this,param_1);
  piVar1 = &(this->Subsystems).ArrayMax;
  (this->Subsystems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Subsystems).AllocatorInstance,0,piVar1);
  }
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimBlueprintGeneratedClass::OnPostLoadDefaults'::__l2::<lambda_1>,enum_EAnimSubsystemEnumeration,FAnimSubsystemInstanceContext_const_&>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  (**(code **)(this->_padding_ + 0xb0))(&this->_padding_,param_1,&local_18);
  return;
}

// PostLoad @ 14740d900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimBlueprintGeneratedClass::PostLoad(UAnimBlueprintGeneratedClass *this)

{
  UAnimBlueprintGeneratedClass *local_res8 [4];
  code *local_18;
  UAnimBlueprintGeneratedClass **local_10;
  
  UBlueprintGeneratedClass::PostLoad((UBlueprintGeneratedClass *)this);
  BuildConstantProperties(this);
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimBlueprintGeneratedClass::PostLoad'::__l2::<lambda_1>,enum_EAnimSubsystemEnumeration,FAnimSubsystemContext_const_&>
             ::Call;
  local_res8[0] = this;
  (**(code **)(this->_padding_ + 0xb8))(&this->_padding_,&local_18);
  return;
}

// PostLoadDefaultObject @ 14740db00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimBlueprintGeneratedClass::PostLoadDefaultObject
          (UAnimBlueprintGeneratedClass *this,UObject *param_1)

{
  int *piVar1;
  UAnimBlueprintGeneratedClass *local_28;
  UObject *local_20;
  code *local_18;
  UAnimBlueprintGeneratedClass **local_10;
  
  UBlueprintGeneratedClass::PostLoadDefaultObject((UBlueprintGeneratedClass *)this,param_1);
  if ((this->AnimBlueprintFunctions).ArrayNum == 0) {
    GenerateAnimationBlueprintFunctions(this);
  }
  BuildConstantProperties(this);
  LinkFunctionsToDefaultObjectNodes(this,param_1);
  piVar1 = &(this->Subsystems).ArrayMax;
  (this->Subsystems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Subsystems).AllocatorInstance,0,piVar1);
  }
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimBlueprintGeneratedClass::OnPostLoadDefaults'::__l2::<lambda_1>,enum_EAnimSubsystemEnumeration,FAnimSubsystemInstanceContext_const_&>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  (**(code **)(this->_padding_ + 0xb0))(&this->_padding_,param_1,&local_18);
  return;
}

// PurgeClass @ 14740e180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimBlueprintGeneratedClass::PurgeClass(UAnimBlueprintGeneratedClass *this,bool param_1)

{
  int *piVar1;
  
  UBlueprintGeneratedClass::PurgeClass((UBlueprintGeneratedClass *)this,param_1);
  DestructItems<FAnimNotifyEvent,int>
            ((FAnimNotifyEvent *)(this->AnimNotifies).AllocatorInstance.Data,
             (this->AnimNotifies).ArrayNum);
  piVar1 = &(this->AnimNotifies).ArrayMax;
  (this->AnimNotifies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,0,&(this->AnimNotifies).AllocatorInstance,0,piVar1);
  }
  (this->TargetSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  DestructItems<FBakedAnimationStateMachine,int>
            ((FBakedAnimationStateMachine *)(this->BakedStateMachines).AllocatorInstance.Data,
             (this->BakedStateMachines).ArrayNum);
  piVar1 = &(this->BakedStateMachines).ArrayMax;
  (this->BakedStateMachines).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->BakedStateMachines).AllocatorInstance,0,piVar1);
  }
  return;
}

// Serialize @ 147417ea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimBlueprintGeneratedClass::Serialize(UAnimBlueprintGeneratedClass *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  UBlueprintGeneratedClass::Serialize((UBlueprintGeneratedClass *)this,param_1);
  return;
}

// Serialize @ 147417f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimBlueprintGeneratedClass::Serialize
          (UAnimBlueprintGeneratedClass *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FReleaseObjectVersion::GUID);
  UBlueprintGeneratedClass::Serialize((UBlueprintGeneratedClass *)this,pFVar1);
  return;
}

// StaticRegisterNativesUAnimBlueprintGeneratedClass @ 147419b90

void __cdecl UAnimBlueprintGeneratedClass::StaticRegisterNativesUAnimBlueprintGeneratedClass(void)

{
  return;
}

// _getUObject @ 14741da00

UObject * __thiscall UAnimBlueprintGeneratedClass::_getUObject(UAnimBlueprintGeneratedClass *this)

{
  return (UObject *)&this[-1]._padding_;
}

