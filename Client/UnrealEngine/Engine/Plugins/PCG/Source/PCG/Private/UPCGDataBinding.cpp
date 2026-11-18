// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 46

// GetAttributeId @ 1497545a0

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
UPCGDataBinding::GetAttributeId
          (UPCGDataBinding *this,FPCGAttributeIdentifier *param_1,EPCGKernelAttributeType param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGAttributeIdentifier local_28;
  
  if (this->bTablesInitialized == (atomic<bool>)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8122861073268211627>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                       ,0x55,"bTablesInitialized");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  iVar3 = FPCGKernelAttributeTable::GetAttributeId(&this->AttributeTable,&local_28,param_2);
  return iVar3;
}

// GetStringTable @ 149762890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataBinding::GetStringTable(UPCGDataBinding *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->bTablesInitialized != (atomic<bool>)0x0) {
    return &this->StringTable;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8122861073268211622>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                     ,0x5a,"bTablesInitialized");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  return &this->StringTable;
}

// StaticClass @ 14978af90

UClass * __cdecl UPCGDataBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataBinding",
               &Z_Registration_Info_UClass_UPCGDataBinding.InnerSingleton,
               StaticRegisterNativesUPCGDataBinding,0x378,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataBinding>,
               InternalVTableHelperCtorCaller<UPCGDataBinding>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataBinding.InnerSingleton;
}

// UPCGDataBinding @ 1497e1060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDataBinding * __thiscall
UPCGDataBinding::UPCGDataBinding(UPCGDataBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataBinding__6B_;
  (this->Graph).field0_0x0.DebugPtr = (UPCGComputeGraph *)0x0;
  (this->InputDataCollection).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputDataCollection).TaggedData.ArrayNum = 0;
  (this->InputDataCollection).TaggedData.ArrayMax = 0;
  (this->InputDataCollection).bCancelExecutionOnEmpty = false;
  (this->InputDataCollection).bCancelExecution = false;
  (this->InputDataCollection).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputDataCollection).DataCrcs.ArrayNum = 0;
  (this->InputDataCollection).DataCrcs.ArrayMax = 0;
  (this->InputDataCollection).InactiveOutputPinBitmask = 0;
  (this->OutputDataCollection).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDataCollection).TaggedData.ArrayNum = 0;
  (this->OutputDataCollection).TaggedData.ArrayMax = 0;
  (this->OutputDataCollection).bCancelExecutionOnEmpty = false;
  (this->OutputDataCollection).bCancelExecution = false;
  (this->OutputDataCollection).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDataCollection).DataCrcs.ArrayNum = 0;
  (this->OutputDataCollection).DataCrcs.ArrayMax = 0;
  (this->OutputDataCollection).InactiveOutputPinBitmask = 0;
  *(undefined8 *)&this->MeshSpawnersToPrimitives = 0;
  *(undefined8 *)&(this->MeshSpawnersToPrimitives).field_0x8 = 0;
  *(undefined8 *)&(this->MeshSpawnersToPrimitives).field_0x20 = 0;
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x28 = 0;
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x34 = 0;
  *(undefined8 *)&(this->MeshSpawnersToPrimitives).field_0x40 = 0;
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x48 = 0;
  (this->CompletedMeshSpawners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompletedMeshSpawners).ArrayNum = 0;
  (this->CompletedMeshSpawners).ArrayMax = 0;
  (this->DataToDebug).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataToDebug).ArrayNum = 0;
  (this->DataToDebug).ArrayMax = 0;
  (this->DataToInspect).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataToInspect).ArrayNum = 0;
  (this->DataToInspect).ArrayMax = 0;
  (this->ContextHandle).Object = (FPCGContextHandle *)0x0;
  (this->ContextHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->AttributeTable).AttributeTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeTable).AttributeTable.ArrayNum = 0;
  (this->AttributeTable).AttributeTable.ArrayMax = 0;
  (this->StringTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringTable).ArrayNum = 0;
  (this->StringTable).ArrayMax = 0;
  *(undefined8 *)&this->SourceBufferAttributeToGraphAttributeIndex = 0;
  *(undefined8 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x8 = 0;
  *(undefined8 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x34 = 0;
  *(undefined8 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x48 = 0;
  *(undefined8 *)&this->GraphAttributeToSourceBufferAttributeIndex = 0;
  *(undefined8 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x8 = 0;
  *(undefined8 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x20 = 0;
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x28 = 0;
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x34 = 0;
  *(undefined8 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x40 = 0;
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x48 = 0;
  *(undefined8 *)&this->SourceBufferToGraphStringKey = 0;
  *(undefined8 *)&(this->SourceBufferToGraphStringKey).field_0x8 = 0;
  *(undefined8 *)&(this->SourceBufferToGraphStringKey).field_0x20 = 0;
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x28 = 0;
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x34 = 0;
  *(undefined8 *)&(this->SourceBufferToGraphStringKey).field_0x40 = 0;
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x48 = 0;
  *(undefined8 *)&this->GraphToSourceBufferStringKey = 0;
  *(undefined8 *)&(this->GraphToSourceBufferStringKey).field_0x8 = 0;
  *(undefined8 *)&(this->GraphToSourceBufferStringKey).field_0x20 = 0;
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x28 = 0;
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x34 = 0;
  *(undefined8 *)&(this->GraphToSourceBufferStringKey).field_0x40 = 0;
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x48 = 0;
  *(undefined8 *)&this->DataDescriptionCache = 0;
  *(undefined8 *)&(this->DataDescriptionCache).field_0x8 = 0;
  *(undefined8 *)&(this->DataDescriptionCache).field_0x20 = 0;
  *(undefined4 *)&(this->DataDescriptionCache).field_0x28 = 0;
  *(undefined4 *)&(this->DataDescriptionCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataDescriptionCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataDescriptionCache).field_0x34 = 0;
  *(undefined8 *)&(this->DataDescriptionCache).field_0x40 = 0;
  *(undefined4 *)&(this->DataDescriptionCache).field_0x48 = 0;
  this->bIsDataDescriptionCachePrimed = (atomic<bool>)0x0;
  this->bTablesInitialized = (atomic<bool>)0x0;
  *(undefined8 *)&(this->KernelParamsCache).KernelParams = 0;
  *(undefined8 *)&(this->KernelParamsCache).KernelParams.field_0x8 = 0;
  *(undefined8 *)&(this->KernelParamsCache).KernelParams.field_0x20 = 0;
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x28 = 0;
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x34 = 0;
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KernelParamsCache).KernelParams.field_0x40 = 0;
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x48 = 0;
  *(undefined8 *)&(this->KernelParamsCache).OverridableParamDataIndices = 0;
  *(undefined8 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x8 = 0;
  *(undefined8 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x20 = 0;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x28 = 0;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x34 = 0;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x40 = 0;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x48 = 0;
  return this;
}

// UPCGDataBinding @ 1497e1330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDataBinding * __thiscall
UPCGDataBinding::UPCGDataBinding(UPCGDataBinding *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataBinding__6B_;
  (this->Graph).field0_0x0.DebugPtr = (UPCGComputeGraph *)0x0;
  (this->InputDataCollection).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputDataCollection).TaggedData.ArrayNum = 0;
  (this->InputDataCollection).TaggedData.ArrayMax = 0;
  (this->InputDataCollection).bCancelExecutionOnEmpty = false;
  (this->InputDataCollection).bCancelExecution = false;
  (this->InputDataCollection).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputDataCollection).DataCrcs.ArrayNum = 0;
  (this->InputDataCollection).DataCrcs.ArrayMax = 0;
  (this->InputDataCollection).InactiveOutputPinBitmask = 0;
  (this->OutputDataCollection).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDataCollection).TaggedData.ArrayNum = 0;
  (this->OutputDataCollection).TaggedData.ArrayMax = 0;
  (this->OutputDataCollection).bCancelExecutionOnEmpty = false;
  (this->OutputDataCollection).bCancelExecution = false;
  (this->OutputDataCollection).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDataCollection).DataCrcs.ArrayNum = 0;
  (this->OutputDataCollection).DataCrcs.ArrayMax = 0;
  (this->OutputDataCollection).InactiveOutputPinBitmask = 0;
  *(undefined8 *)&this->MeshSpawnersToPrimitives = 0;
  *(undefined8 *)&(this->MeshSpawnersToPrimitives).field_0x8 = 0;
  *(undefined8 *)&(this->MeshSpawnersToPrimitives).field_0x20 = 0;
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x28 = 0;
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x34 = 0;
  *(undefined8 *)&(this->MeshSpawnersToPrimitives).field_0x40 = 0;
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x48 = 0;
  (this->CompletedMeshSpawners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompletedMeshSpawners).ArrayNum = 0;
  (this->CompletedMeshSpawners).ArrayMax = 0;
  (this->DataToDebug).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataToDebug).ArrayNum = 0;
  (this->DataToDebug).ArrayMax = 0;
  (this->DataToInspect).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataToInspect).ArrayNum = 0;
  (this->DataToInspect).ArrayMax = 0;
  (this->ContextHandle).Object = (FPCGContextHandle *)0x0;
  (this->ContextHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->AttributeTable).AttributeTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeTable).AttributeTable.ArrayNum = 0;
  (this->AttributeTable).AttributeTable.ArrayMax = 0;
  (this->StringTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringTable).ArrayNum = 0;
  (this->StringTable).ArrayMax = 0;
  *(undefined8 *)&this->SourceBufferAttributeToGraphAttributeIndex = 0;
  *(undefined8 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x8 = 0;
  *(undefined8 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x34 = 0;
  *(undefined8 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x48 = 0;
  *(undefined8 *)&this->GraphAttributeToSourceBufferAttributeIndex = 0;
  *(undefined8 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x8 = 0;
  *(undefined8 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x20 = 0;
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x28 = 0;
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x34 = 0;
  *(undefined8 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x40 = 0;
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x48 = 0;
  *(undefined8 *)&this->SourceBufferToGraphStringKey = 0;
  *(undefined8 *)&(this->SourceBufferToGraphStringKey).field_0x8 = 0;
  *(undefined8 *)&(this->SourceBufferToGraphStringKey).field_0x20 = 0;
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x28 = 0;
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x34 = 0;
  *(undefined8 *)&(this->SourceBufferToGraphStringKey).field_0x40 = 0;
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x48 = 0;
  *(undefined8 *)&this->GraphToSourceBufferStringKey = 0;
  *(undefined8 *)&(this->GraphToSourceBufferStringKey).field_0x8 = 0;
  *(undefined8 *)&(this->GraphToSourceBufferStringKey).field_0x20 = 0;
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x28 = 0;
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x34 = 0;
  *(undefined8 *)&(this->GraphToSourceBufferStringKey).field_0x40 = 0;
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x48 = 0;
  *(undefined8 *)&this->DataDescriptionCache = 0;
  *(undefined8 *)&(this->DataDescriptionCache).field_0x8 = 0;
  *(undefined8 *)&(this->DataDescriptionCache).field_0x20 = 0;
  *(undefined4 *)&(this->DataDescriptionCache).field_0x28 = 0;
  *(undefined4 *)&(this->DataDescriptionCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataDescriptionCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataDescriptionCache).field_0x34 = 0;
  *(undefined8 *)&(this->DataDescriptionCache).field_0x40 = 0;
  *(undefined4 *)&(this->DataDescriptionCache).field_0x48 = 0;
  this->bIsDataDescriptionCachePrimed = (atomic<bool>)0x0;
  this->bTablesInitialized = (atomic<bool>)0x0;
  *(undefined8 *)&(this->KernelParamsCache).KernelParams = 0;
  *(undefined8 *)&(this->KernelParamsCache).KernelParams.field_0x8 = 0;
  *(undefined8 *)&(this->KernelParamsCache).KernelParams.field_0x20 = 0;
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x28 = 0;
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x34 = 0;
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KernelParamsCache).KernelParams.field_0x40 = 0;
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x48 = 0;
  *(undefined8 *)&(this->KernelParamsCache).OverridableParamDataIndices = 0;
  *(undefined8 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x8 = 0;
  *(undefined8 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x20 = 0;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x28 = 0;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x34 = 0;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x40 = 0;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x48 = 0;
  return this;
}

// ~UPCGDataBinding @ 1497e2ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGDataBinding::~UPCGDataBinding(UPCGDataBinding *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  this->_padding_ = (longlong)&___7UPCGDataBinding__6B_;
  *(undefined4 *)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x48 = 0;
  pvVar3 = *(void **)&(this->KernelParamsCache).OverridableParamDataIndices.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->KernelParamsCache).OverridableParamDataIndices);
  *(undefined4 *)&(this->KernelParamsCache).KernelParams.field_0x48 = 0;
  pvVar3 = *(void **)&(this->KernelParamsCache).KernelParams.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPCGKernelParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPCGKernelParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPCGKernelParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KernelParamsCache);
  *(undefined4 *)&(this->DataDescriptionCache).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DataDescriptionCache).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataDescriptionCache);
  *(undefined4 *)&(this->GraphToSourceBufferStringKey).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GraphToSourceBufferStringKey).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GraphToSourceBufferStringKey);
  *(undefined4 *)&(this->SourceBufferToGraphStringKey).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SourceBufferToGraphStringKey).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceBufferToGraphStringKey);
  *(undefined4 *)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GraphAttributeToSourceBufferAttributeIndex).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GraphAttributeToSourceBufferAttributeIndex);
  *(undefined4 *)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SourceBufferAttributeToGraphAttributeIndex).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceBufferAttributeToGraphAttributeIndex);
  DestructItems<FString,int>
            ((FString *)(this->StringTable).AllocatorInstance.Data,(this->StringTable).ArrayNum);
  pFVar4 = (this->StringTable).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FPCGKernelAttributeKey,int>
            ((FPCGKernelAttributeKey *)(this->AttributeTable).AttributeTable.AllocatorInstance.Data,
             (this->AttributeTable).AttributeTable.ArrayNum);
  pFVar4 = (this->AttributeTable).AttributeTable.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar5 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  DestructItems<FPCGDataToDebug,int>
            ((FPCGDataToDebug *)(this->DataToInspect).AllocatorInstance.Data,
             (this->DataToInspect).ArrayNum);
  pFVar4 = (this->DataToInspect).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FPCGDataToDebug,int>
            ((FPCGDataToDebug *)(this->DataToDebug).AllocatorInstance.Data,
             (this->DataToDebug).ArrayNum);
  pFVar4 = (this->DataToDebug).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CompletedMeshSpawners).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->MeshSpawnersToPrimitives).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MeshSpawnersToPrimitives).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshSpawnersToPrimitives);
  pFVar4 = (this->OutputDataCollection).DataCrcs.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->OutputDataCollection).TaggedData.AllocatorInstance.Data,
             (this->OutputDataCollection).TaggedData.ArrayNum);
  pFVar4 = (this->OutputDataCollection).TaggedData.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->InputDataCollection).DataCrcs.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->InputDataCollection).TaggedData.AllocatorInstance.Data,
             (this->InputDataCollection).TaggedData.ArrayNum);
  pFVar4 = (this->InputDataCollection).TaggedData.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddCompletedMeshSpawnerKernel @ 1497eb1d0

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
UPCGDataBinding::AddCompletedMeshSpawnerKernel
          (UPCGDataBinding *this,TObjectPtr<UComputeKernel_const_> param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UComputeKernel_const_>,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UComputeKernel_const_>_u_0 TVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  pTVar2 = &this->CompletedMeshSpawners;
  TVar3.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar2->AllocatorInstance).Data;
  if ((TVar3.DebugPtr <= (ulonglong)param_1.field0_0x0) &&
     ((ulonglong)param_1.field0_0x0 <
      (UComputeKernel *)(&(TVar3.DebugPtr)->_padding_ + (this->CompletedMeshSpawners).ArrayMax))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->CompletedMeshSpawners).ArrayNum;
  piVar1 = &(this->CompletedMeshSpawners).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  (this->CompletedMeshSpawners).ArrayNum = iVar8 + 1;
  pUVar5 = *(UObject **)param_1.field0_0x0;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 8) = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  return;
}

// AddInputDataAttributesToTable @ 1497ebec0

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
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall UPCGDataBinding::AddInputDataAttributesToTable(UPCGDataBinding *this)

{
  FName *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPCGProxyForGPUDataCollection *pFVar3;
  code *pcVar4;
  EPCGMetadataDomainFlag EVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UClass *pUVar10;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> *pTVar11;
  UPCGMetadata *this_00;
  FPCGMetadataDomain *pFVar12;
  ulonglong uVar13;
  longlong *plVar14;
  FObjectPtr_u_0 FVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  FObjectPtr_u_0 FVar18;
  EPCGMetadataDomainFlag EVar19;
  longlong lVar20;
  undefined8 uVar21;
  FScriptContainerElement *pFVar22;
  FPCGKernelAttributeDesc *pFVar23;
  FObjectPtr_u_0 FVar24;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [4];
  int local_244;
  uint local_240;
  FScriptContainerElement *local_238;
  int local_230 [2];
  UPCGDataBinding *local_228;
  TArray<FPCGAttributeIdentifier,TSizedDefaultAllocator<32>_> local_220;
  uint local_210;
  FObjectPtr_u_0 local_208;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_200;
  FName local_1f0;
  undefined1 auStack_1e8 [16];
  int local_1d8 [2];
  FRDGPooledBuffer *local_1d0;
  undefined1 local_1c8 [8];
  FScriptContainerElement *local_1c0;
  undefined1 local_1b8 [40];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  FString *local_170;
  undefined8 local_168;
  undefined1 local_160;
  FPCGProxyForGPUDataCollection *local_158;
  TReferenceControllerBase<1> *local_150;
  int local_148;
  undefined1 local_140 [40];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  FString *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  FPCGProxyForGPUDataCollection **local_e0;
  int *local_d8;
  int *local_d0;
  int *local_c8;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> local_c0;
  FPCGDataDesc local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pFVar22 = (this->InputDataCollection).TaggedData.AllocatorInstance.Data;
  local_210 = (this->InputDataCollection).TaggedData.ArrayNum;
  uVar13 = (ulonglong)(int)local_210;
  local_1c0 = pFVar22 + uVar13 * 0x78;
  local_228 = this;
LAB_1497ebf1a:
  do {
    pFVar6 = local_1c0;
    FVar18.Handle = (UObject *)0x0;
    local_238 = pFVar22;
    if ((this->InputDataCollection).TaggedData.ArrayNum != (int)uVar13) {
      local_248[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_248);
    }
    if (pFVar22 == pFVar6) {
      if ((0x60 < (this->AttributeTable).AttributeTable.ArrayNum) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<9049822076394799590>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                             ,0x1e6,
                             "AttributeTable.Num() <= PCGDataCollectionPackingConstants::MAX_NUM_CUSTOM_ATTRS"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      return;
    }
    local_208.Handle = *(UObject **)pFVar22;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1497ebf60:
      if ((UPCGProxyForGPUData *)local_208.Handle == (UPCGProxyForGPUData *)0x0) goto LAB_1497ebf80;
      pUVar10 = UPCGProxyForGPUData::StaticClass();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_208,pUVar10);
      FVar15 = local_208;
      if (!bVar7) goto LAB_1497ebf80;
    }
    else {
      if ((UPCGProxyForGPUData *)local_208.Handle != (UPCGProxyForGPUData *)0x0) {
        UE::GC::MarkAsReachable(local_208.Handle);
        goto LAB_1497ebf60;
      }
LAB_1497ebf80:
      FVar15.Handle = FVar18.Handle;
    }
    if ((UPCGProxyForGPUData *)FVar15.Handle != (UPCGProxyForGPUData *)0x0) {
      pTVar11 = UPCGProxyForGPUData::GetGPUInfoMutable
                          ((UPCGProxyForGPUData *)FVar15.Handle,&local_c0);
      pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
      pFVar3 = pTVar11->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.SharedReferenceCount.ReferenceController);
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_a8.Type,Point);
      local_a8.ElementDimension = One;
      local_a8.AttributeDescs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.AttributeDescs.ArrayNum = 0;
      local_a8.AttributeDescs.ArrayMax = 0;
      local_a8.AllocatedPointProperties = None;
      local_a8.TagStringKeys.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_a8.TagStringKeys.ArrayNum = 0;
      local_a8.TagStringKeys.ArrayMax = 4;
      local_a8.ElementCount.field0_0x0._s_0 = UE::Math::TIntVector4<int>::ZeroValue.field0_0x0;
      if (pFVar3 != (FPCGProxyForGPUDataCollection *)0x0) {
        bVar7 = UPCGProxyForGPUData::GetDescription((UPCGProxyForGPUData *)FVar15.Handle,&local_a8);
        FVar16.Data = local_a8.AttributeDescs.AllocatorInstance.Data;
        if (bVar7) {
          lVar20 = (longlong)local_a8.AttributeDescs.ArrayNum;
          if ((local_a8.AttributeDescs.ArrayNum < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar23 = (FPCGKernelAttributeDesc *)(FVar16.Data + lVar20 * 0x78);
          pFVar22 = local_238;
          for (; local_238 = pFVar22, (FPCGKernelAttributeDesc *)FVar16.Data != pFVar23;
              FVar16.Data = FVar16.Data + 0x78) {
            if (((FPCGKernelAttributeDesc *)FVar16.Data)->AttributeId < 0x20) {
              local_244 = -1;
            }
            else {
              local_140._0_8_ =
                   (((FPCGKernelAttributeDesc *)FVar16.Data)->AttributeKey).Identifier.Name;
              local_140[8] = (((FPCGKernelAttributeDesc *)FVar16.Data)->AttributeKey).Identifier.
                             MetadataDomain.Flag;
              local_140._9_3_ =
                   *(undefined3 *)
                    &(((FPCGKernelAttributeDesc *)FVar16.Data)->AttributeKey).Identifier.
                     MetadataDomain.field_0x1;
              local_140._12_4_ =
                   (((FPCGKernelAttributeDesc *)FVar16.Data)->AttributeKey).Identifier.
                   MetadataDomain.CustomFlag;
              local_244 = ((FPCGKernelAttributeDesc *)FVar16.Data)->AttributeId + -0x20;
              local_140._16_8_ =
                   (((FPCGKernelAttributeDesc *)FVar16.Data)->AttributeKey).Identifier.
                   MetadataDomain.DebugName;
              local_140[0x18] = (((FPCGKernelAttributeDesc *)FVar16.Data)->AttributeKey).Type;
              local_140._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
              local_118 = 0;
              local_110 = 0;
              local_108 = 0;
              local_100 = 0;
              local_f8 = (FString *)0x0;
              local_f0 = 0;
              local_e8 = 0;
              iVar8 = FPCGKernelAttributeTable::AddAttribute
                                (&this->AttributeTable,(FPCGKernelAttributeKey *)local_140);
              DestructItems<FString,int>(local_f8,(int)local_f0);
              if (local_f8 != (FString *)0x0) {
                FMemory::Free(local_f8);
              }
              local_230[0] = iVar8;
              if (iVar8 != local_244) {
                if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar2->SharedReferenceCount =
                       (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_148 = local_244;
                local_e0 = &local_158;
                local_d8 = local_230;
                local_158 = pFVar3;
                local_150 = pTVar2;
                TSet<TTuple<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>_&&,int_const_&>_>
                          ((TSet<TTuple<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,0>,FDefaultSetAllocator>
                            *)&this->SourceBufferAttributeToGraphAttributeIndex,
                           (TPairInitializer<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>_&&,int_const_&>
                            *)local_1c8,(bool *)&local_e0);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_150);
                local_1d8[0] = local_230[0];
                local_1d0 = (pFVar3->Buffer).Reference;
                if (local_1d0 != (FRDGPooledBuffer *)0x0) {
                  LOCK();
                  *(int *)&local_1d0->_padding_ = (int)local_1d0->_padding_ + 1;
                  UNLOCK();
                }
                local_d0 = local_1d8;
                local_c8 = &local_244;
                TSet<TTuple<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>_&&,int_const_&>_>
                          ((TSet<TTuple<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>,FDefaultSetAllocator>
                            *)&this->GraphAttributeToSourceBufferAttributeIndex,
                           (TPairInitializer<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>_&&,int_const_&>
                            *)(local_1c8 + 4),(bool *)&local_d0);
                if (local_1d0 != (FRDGPooledBuffer *)0x0) {
                  plVar14 = &local_1d0->_padding_;
                  LOCK();
                  lVar20 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((((int)lVar20 == 1) && (plVar14 != (longlong *)0x0)) &&
                     (local_1d0 != (FRDGPooledBuffer *)0x0)) {
                    (**(code **)local_1d0->_padding_)(local_1d0,1);
                  }
                }
              }
            }
            pFVar22 = local_238;
          }
        }
        if (local_a8.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_a8.TagStringKeys.AllocatorInstance.SecondaryData);
        }
      }
      DestructItems<FPCGKernelAttributeDesc,int>
                ((FPCGKernelAttributeDesc *)local_a8.AttributeDescs.AllocatorInstance.Data,
                 local_a8.AttributeDescs.ArrayNum);
      if ((FPCGKernelAttributeDesc *)local_a8.AttributeDescs.AllocatorInstance.Data !=
          (FPCGKernelAttributeDesc *)0x0) {
        FMemory::Free(local_a8.AttributeDescs.AllocatorInstance.Data);
      }
      if (local_a8.Type.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Type.Ids.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar13 = (ulonglong)local_210;
      pFVar22 = pFVar22 + 0x78;
      goto LAB_1497ebf1a;
    }
    lVar20 = *(longlong *)pFVar22;
    if (lVar20 != 0) {
      pUVar10 = Z_Construct_UClass_UPCGParamData_NoRegister();
      iVar8 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)iVar8 * 8)
          != &pUVar10->_padding_)) {
        pUVar10 = UPCGBasePointData::StaticClass();
        iVar8 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) goto LAB_1497ec5b9;
      }
      this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)pFVar22 + 800))();
      if (this_00 != (UPCGMetadata *)0x0) {
        pFVar12 = UPCGMetadata::GetConstMetadataDomain(this_00,&PCGMetadataDomainID::Default);
        local_1f0 = *(FName *)&pFVar12->DomainID;
        local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_220.ArrayNum = 0;
        local_220.ArrayMax = 0;
        auStack_1e8._0_4_ = (pFVar12->DomainID).DebugName.ComparisonIndex;
        auStack_1e8._4_4_ = (pFVar12->DomainID).DebugName.Number;
        local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_200.ArrayNum = 0;
        local_200.ArrayMax = 0;
        UPCGMetadata::GetAllAttributes(this_00,&local_220,&local_200);
        if (0 < local_220.ArrayNum) {
          EVar5 = (EPCGMetadataDomainFlag)local_1f0.ComparisonIndex.Value;
          local_240 = local_1f0.Number;
          FVar15.Handle = FVar18.Handle;
          FVar24.Handle = FVar18.Handle;
          iVar8 = local_220.ArrayNum;
          do {
            uVar17 = FVar18._0_4_;
            uVar9 = 0;
            if ((int)uVar17 < iVar8) {
              uVar9 = ~uVar17 >> 0x1f;
            }
            if (uVar9 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar8 = local_220.ArrayNum;
            }
            uVar21 = *(undefined8 *)
                      ((longlong)&(FVar15.Handle)->field_0x8 + local_220.AllocatorInstance.Data);
            EVar19 = (EPCGMetadataDomainFlag)uVar21;
            pFVar1 = (FName *)(local_220.AllocatorInstance.Data +
                              (longlong)&(FVar15.Handle)->field_0x0);
            local_1f0 = *pFVar1;
            auStack_1e8._8_8_ =
                 *(undefined8 *)
                  ((longlong)&(FVar15.Handle)->field_0x10 + local_220.AllocatorInstance.Data);
            auStack_1e8._0_4_ = pFVar1[1].ComparisonIndex;
            auStack_1e8._4_4_ = pFVar1[1].Number;
            uVar9 = (uint)((ulonglong)uVar21 >> 0x20);
            if (((EVar19 == PCGMetadataDomainID::Default.Flag) &&
                (uVar9 == PCGMetadataDomainID::Default.CustomFlag)) ||
               ((EVar19 == EVar5 && (uVar9 == local_240)))) {
              if ((EVar19 == EVar5) && (uVar9 == local_240)) {
                uVar21 = CONCAT44(PCGMetadataDomainID::Default.CustomFlag,
                                  PCGMetadataDomainID::Default._0_4_);
                auStack_1e8._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
                auStack_1e8._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
                auStack_1e8._0_8_ = uVar21;
                EVar19 = PCGMetadataDomainID::Default.Flag;
              }
              uVar9 = 0;
              if ((int)uVar17 < local_200.ArrayNum) {
                uVar9 = ~uVar17 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              switch(local_200.AllocatorInstance.Data[(longlong)&(FVar24.Handle)->field_0x0]) {
              case (FScriptContainerElement)0x0:
              case (FScriptContainerElement)0x1:
                local_1b8[0x18] = Float;
                break;
              case (FScriptContainerElement)0x2:
              case (FScriptContainerElement)0x3:
                local_1b8[0x18] = Int;
                break;
              case (FScriptContainerElement)0x4:
                local_1b8[0x18] = Float2;
                break;
              case (FScriptContainerElement)0x5:
                local_1b8[0x18] = Float3;
                break;
              case (FScriptContainerElement)0x6:
                local_1b8[0x18] = Float4;
                break;
              case (FScriptContainerElement)0x7:
                local_1b8[0x18] = Quat;
                break;
              case (FScriptContainerElement)0x8:
                local_1b8[0x18] = Transform;
                break;
              case (FScriptContainerElement)0x9:
              case (FScriptContainerElement)0xd:
              case (FScriptContainerElement)0xe:
                local_1b8[0x18] = StringKey;
                break;
              case (FScriptContainerElement)0xa:
                local_1b8[0x18] = Bool;
                break;
              case (FScriptContainerElement)0xb:
                local_1b8[0x18] = Rotator;
                break;
              case (FScriptContainerElement)0xc:
                local_1b8[0x18] = Name;
                break;
              default:
                local_1b8[0x18] = Invalid;
              }
              local_1b8._0_4_ = local_1f0.ComparisonIndex.Value;
              local_1b8._4_4_ = local_1f0.Number;
              local_1b8._9_2_ = auStack_1e8._1_2_;
              local_1b8[0xb] = auStack_1e8[3];
              local_1b8._16_8_ = auStack_1e8._8_8_;
              local_1b8._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
              local_1b8._12_4_ = (undefined4)((ulonglong)uVar21 >> 0x20);
              local_190 = 0;
              local_188 = 0;
              local_180 = 0;
              local_178 = 0;
              local_170 = (FString *)0x0;
              local_168 = 0;
              local_160 = 0;
              local_1b8[8] = EVar19;
              iVar8 = FPCGKernelAttributeTable::AddAttribute
                                (&local_228->AttributeTable,(FPCGKernelAttributeKey *)local_1b8);
              DestructItems<FString,int>(local_170,(int)local_168);
              if (local_170 != (FString *)0x0) {
                FMemory::Free(local_170);
              }
              if (iVar8 == -1) {
                pFVar22 = local_238;
                this = local_228;
                if (1 < (byte)LogPCG._0_1_) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  pFVar22 = local_238;
                  this = local_228;
                }
                break;
              }
              iVar8 = local_220.ArrayNum;
            }
            FVar18._0_4_ = uVar17 + 1;
            FVar18._4_4_ = 0;
            FVar24.Handle = (UObject *)&(FVar24.Handle)->field_0x1;
            FVar15.Handle = (UObject *)&(FVar15.Handle)->field_0x18;
            pFVar22 = local_238;
            this = local_228;
          } while ((int)FVar18._0_4_ < iVar8);
        }
        if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.AllocatorInstance.Data);
        }
        if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.AllocatorInstance.Data);
        }
      }
    }
LAB_1497ec5b9:
    pFVar22 = pFVar22 + 0x78;
    uVar13 = (ulonglong)local_210;
  } while( true );
}

// AddInputDataStringsToTable @ 1497ec680

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

void __thiscall UPCGDataBinding::AddInputDataStringsToTable(UPCGDataBinding *this)

{
  longlong *plVar1;
  IPCGAttributeAccessorKeys *pIVar2;
  FName *pFVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  FPCGProxyForGPUDataCollection *pFVar7;
  EPCGMetadataDomainFlag EVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  UClass *pUVar13;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> *pTVar14;
  ForAnyElementType FVar15;
  UPCGMetadata *this_00;
  FPCGMetadataDomain *pFVar16;
  FPCGMetadataDomain *pFVar17;
  EPCGMetadataDomainFlag *pEVar18;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar19;
  EPCGMetadataDomainFlag EVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ForElementType<FSetElementId> FVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  ulonglong uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  bool bVar32;
  undefined1 auStackY_238 [32];
  undefined1 local_1e7 [3];
  uint local_1e4;
  TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> local_1e0;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  uint local_1c0 [2];
  FScriptContainerElement *local_1b8;
  TArray<FPCGAttributeIdentifier,TSizedDefaultAllocator<32>_> local_1b0;
  FName local_1a0;
  FPCGMetadataDomainID FStack_198;
  int local_188;
  uint local_184;
  FObjectPtr_u_0 local_180;
  undefined1 local_178 [16];
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_168;
  FPCGAttributePropertySelector local_158;
  FPCGMetadataDomain *local_118;
  UPCGMetadata *local_110;
  FRDGPooledBuffer *local_108;
  uint local_100;
  FRDGPooledBuffer *local_f8;
  uint local_f0;
  undefined1 local_e8 [8];
  FPCGMetadataDomainID *local_e0;
  undefined1 local_d8 [24];
  FRDGPooledBuffer **local_c0;
  uint *local_b8;
  FRDGPooledBuffer **local_b0;
  FPCGCrc local_a8;
  TSharedPtr<FPCGProxyForGPUDataCollection,1> local_a0;
  TSet<TTuple<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar32 = -1 < CpuChannel->Enabled;
  local_178._8_8_ = this;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId491,"UPCGDataBinding::AddInputDataStringsToTable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
               ,0x1eb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId491);
  }
  if (((this->Graph).field0_0x0.DebugPtr == (UPCGComputeGraph *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Graph",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                          ,0x1ec,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_184 = (this->InputDataCollection).TaggedData.ArrayNum;
  uVar22 = (ulonglong)(int)local_184;
  pFVar26 = (this->InputDataCollection).TaggedData.AllocatorInstance.Data;
  local_1d0.Data = (FScriptContainerElement *)0x0;
  pFVar29 = pFVar26 + uVar22 * 0x78;
  local_1c8 = 0;
  local_d8._16_8_ = pFVar29;
  do {
    while( true ) {
      uVar28 = 0;
      local_1b8 = pFVar26;
      if ((this->InputDataCollection).TaggedData.ArrayNum != (int)uVar22) {
        local_1e7[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1e7);
      }
      if (pFVar26 == pFVar29) {
        DestructItems<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>
                  ((TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> *)local_1d0.Data,
                   (int)local_1c8);
        if ((TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> *)local_1d0.Data !=
            (TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> *)0x0) {
          FMemory::Free(local_1d0.Data);
        }
        if (bVar32) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      local_180.Handle = *(UObject **)pFVar26;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if ((UPCGProxyForGPUData *)local_180.Handle != (UPCGProxyForGPUData *)0x0) {
        UE::GC::MarkAsReachable(local_180.Handle);
        break;
      }
LAB_1497ecb68:
      if ((*(longlong **)pFVar26 != (longlong *)0x0) &&
         (this_00 = (UPCGMetadata *)(**(code **)(**(longlong **)pFVar26 + 800))(),
         local_110 = this_00, this_00 != (UPCGMetadata *)0x0)) {
        pFVar16 = UPCGMetadata::GetConstMetadataDomain(this_00,&PCGMetadataDomainID::Default);
        local_1a0 = *(FName *)&pFVar16->DomainID;
        local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.ArrayNum = 0;
        local_1b0.ArrayMax = 0;
        FStack_198._0_8_ = (pFVar16->DomainID).DebugName;
        local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.ArrayNum = 0;
        local_168.ArrayMax = 0;
        UPCGMetadata::GetAllAttributes(this_00,&local_1b0,&local_168);
        local_88.Elements._0_8_ = 0;
        local_88.Elements._8_8_ = 0;
        local_88.Elements._32_8_ = 0;
        local_88.Elements._40_4_ = 0;
        local_88.Elements._44_4_ = 0x80;
        local_88.Elements._48_4_ = 0xffffffff;
        local_88.Elements._52_4_ = 0;
        local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_88.HashSize = 0;
        if (0 < local_1b0.ArrayNum) {
          uVar12 = local_1a0.Number;
          EVar8 = (EPCGMetadataDomainFlag)local_1a0.ComparisonIndex.Value;
          uVar22 = uVar28;
          uVar31 = uVar28;
          do {
            uVar27 = (uint)uVar28;
            uVar21 = 0;
            if ((int)uVar27 < local_1b0.ArrayNum) {
              uVar21 = ~uVar27 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar3 = (FName *)(local_1b0.AllocatorInstance.Data + uVar22);
            local_1a0 = *pFVar3;
            uVar21 = pFVar3[1].Number;
            FStack_198.DebugName = *(FName *)(local_1b0.AllocatorInstance.Data + uVar22 + 0x10);
            FStack_198._0_8_ = pFVar3[1];
            EVar20 = (EPCGMetadataDomainFlag)pFVar3[1].ComparisonIndex.Value;
            if (((EVar20 == PCGMetadataDomainID::Default.Flag) &&
                (uVar21 == PCGMetadataDomainID::Default.CustomFlag)) ||
               ((EVar20 == EVar8 && (uVar21 == uVar12)))) {
              if ((EVar20 == EVar8) && (uVar21 == uVar12)) {
                FStack_198.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
                FStack_198.Flag = PCGMetadataDomainID::Default.Flag;
                FStack_198._1_3_ = PCGMetadataDomainID::Default._1_3_;
                FStack_198.DebugName = PCGMetadataDomainID::Default.DebugName;
              }
              uVar21 = 0;
              if ((int)uVar27 < local_168.ArrayNum) {
                uVar21 = ~uVar27 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              switch(local_168.AllocatorInstance.Data[uVar31]) {
              case (FScriptContainerElement)0x9:
              case (FScriptContainerElement)0xc:
              case (FScriptContainerElement)0xd:
              case (FScriptContainerElement)0xe:
                pFVar16 = UPCGMetadata::GetConstMetadataDomain(this_00,&FStack_198);
                pFVar17 = (FPCGMetadataDomain *)
                          FPCGMetadataDomain::GetConstAttribute(pFVar16,local_1a0);
                if (((pFVar16 == (FPCGMetadataDomain *)0x0) ||
                    (pFVar17 == (FPCGMetadataDomain *)0x0)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("MetadataDomain && AttributeBase",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                                        ,0x237,L""), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                PCGAttributeAccessorHelpers::CreateConstAccessor
                          ((FPCGMetadataAttributeBase *)local_178,pFVar17,SUB81(pFVar16,0));
                uVar23 = (uint)FStack_198.Flag - FStack_198.CustomFlag ^
                         (uint)FStack_198.CustomFlag >> 0xd;
                uVar21 = (-0x61c88647 - uVar23) - FStack_198.CustomFlag ^ uVar23 << 8;
                uVar30 = (FStack_198.CustomFlag - uVar21) - uVar23 ^ uVar21 >> 0xd;
                uVar23 = (uVar23 - uVar30) - uVar21 ^ uVar30 >> 0xc;
                uVar21 = (uVar21 - uVar23) - uVar30 ^ uVar23 << 0x10;
                uVar30 = (uVar30 - uVar21) - uVar23 ^ uVar21 >> 5;
                uVar23 = (uVar23 - uVar30) - uVar21 ^ uVar30 >> 3;
                uVar21 = (uVar21 - uVar23) - uVar30 ^ uVar23 << 10;
                uVar21 = (uVar30 - uVar21) - uVar23 ^ uVar21 >> 0xf;
                if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
                  FVar24 = (ForElementType<FSetElementId>)&local_88.Hash;
                  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar24 = local_88.Hash.SecondaryData;
                  }
                  uVar4 = *(int *)((longlong)FVar24 +
                                  (ulonglong)(local_88.HashSize - 1U & uVar21) * 4);
                  while (uVar4 != 0xffffffff) {
                    pEVar18 = (EPCGMetadataDomainFlag *)
                              ((longlong)(int)uVar4 * 0x20 + local_88.Elements._0_8_);
                    if ((*pEVar18 == FStack_198.Flag) &&
                       (*(undefined4 *)(pEVar18 + 4) == FStack_198.CustomFlag)) {
                      if ((uVar4 != 0xffffffff) && (pEVar18 != (EPCGMetadataDomainFlag *)0x0))
                      goto LAB_1497ecee3;
                      break;
                    }
                    uVar4 = *(undefined4 *)(pEVar18 + 0x18);
                  }
                }
                local_e0 = &FStack_198;
                TSet<TTuple<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<FPCGMetadataDomainID_const_&>_>
                          (&local_88,(uint)&local_188,
                           (TKeyInitializer<FPCGMetadataDomainID_const_&> *)(ulonglong)uVar21,
                           (bool *)&local_e0);
                pEVar18 = (EPCGMetadataDomainFlag *)
                          ((longlong)local_188 * 0x20 + local_88.Elements._0_8_);
LAB_1497ecee3:
                FVar9 = local_1a0;
                pIVar2 = (IPCGAttributeAccessorKeys *)(pEVar18 + 0x10);
                if (*(undefined8 *)(pEVar18 + 0x10) == Default) {
                  local_158._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
                  local_118 = (FPCGMetadataDomain *)0x0;
                  local_158.Selection = Attribute;
                  local_158.DomainName.ComparisonIndex.Value = 0;
                  local_158.DomainName.Number = 0;
                  local_158.AttributeName.ComparisonIndex.Value = 0;
                  local_158.AttributeName.Number = 0;
                  local_158.PropertyName.ComparisonIndex.Value = 0;
                  local_158.PropertyName.Number = 0;
                  local_158.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_158.ExtraNames.ArrayNum = 0;
                  local_158.ExtraNames.ArrayMax = 0;
                  local_158.ExtraProperty = Index;
                  FPCGAttributePropertySelector::SetDomainName(&local_158,(FName)0x0,true);
                  FPCGAttributePropertySelector::SetAttributeName(&local_158,FVar9,true);
                  DestructItems<FString,int>
                            ((FString *)local_158.ExtraNames.AllocatorInstance.Data,
                             local_158.ExtraNames.ArrayNum);
                  iVar11 = local_158.ExtraNames.ArrayMax;
                  local_158.ExtraNames._8_8_ =
                       (ulonglong)(uint)local_158.ExtraNames.ArrayMax << 0x20;
                  if (iVar11 == 0) {
                    local_158.ExtraNames.ArrayNum = 0;
                    local_158.ExtraNames.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,0,iVar11,&local_158.ExtraNames.AllocatorInstance,0,
                               &local_158.ExtraNames.ArrayMax);
                    ConstructItems<FString,FString,int>
                              (local_158.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
                  }
                  pFVar26 = local_1b8;
                  (**(code **)(**(longlong **)local_1b8 + 0x350))
                            (*(longlong **)local_1b8,&FStack_198,&local_158);
                  TVar19 = PCGAttributeAccessorHelpers::CreateConstKeys
                                     ((UPCGData *)local_d8,
                                      *(FPCGAttributePropertySelector **)pFVar26);
                  if (pIVar2 != TVar19.Ptr) {
                    puVar5 = (undefined8 *)pIVar2->_padding_;
                    pIVar2->_padding_ = (TVar19.Ptr)->_padding_;
                    (TVar19.Ptr)->_padding_ = 0;
                    if (puVar5 != (undefined8 *)0x0) {
                      (**(code **)*puVar5)(puVar5,1);
                    }
                  }
                  if ((undefined8 *)local_d8._0_8_ != (undefined8 *)0x0) {
                    (*(code *)**(undefined8 **)local_d8._0_8_)(local_d8._0_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_158.ExtraNames.AllocatorInstance.Data,
                             local_158.ExtraNames.ArrayNum);
                  if (local_158.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_158.ExtraNames.AllocatorInstance.Data);
                  }
                }
                if ((((IPCGAttributeAccessor *)local_178._0_8_ == (IPCGAttributeAccessor *)0x0) ||
                    (pIVar2->_padding_ == 0)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Accessor && Keys",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                                        ,0x242,L""), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_d8._8_8_ = local_178._8_8_ + 0x130;
                PCGMetadataElementCommon::
                ApplyOnAccessorRange<FString,_PCGMetadataElementCommon::ApplyOnAccessor<FString,_UPCGDataBinding::AddInputDataStringsToTable_::__l43::<lambda_1>_>_::__l2::<lambda_1>_>
                          ((IPCGAttributeAccessorKeys *)pIVar2->_padding_,
                           (IPCGAttributeAccessor *)local_178._0_8_,(<lambda_1> *)(local_d8 + 8),
                           StrictType,0x100,-1);
                this_00 = local_110;
                if ((IPCGAttributeAccessor *)local_178._0_8_ != (IPCGAttributeAccessor *)0x0) {
                  (**(code **)*(longlong *)local_178._0_8_)(local_178._0_8_,1);
                  this_00 = local_110;
                }
              }
            }
            uVar28 = (ulonglong)(uVar27 + 1);
            uVar31 = uVar31 + 1;
            uVar22 = uVar22 + 0x18;
            pFVar26 = local_1b8;
            pFVar29 = (FScriptContainerElement *)local_d8._16_8_;
          } while ((int)(uVar27 + 1) < local_1b0.ArrayNum);
        }
        local_88.HashSize = 0;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_88.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_88.Elements);
        if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
        this = (UPCGDataBinding *)local_178._8_8_;
        if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.AllocatorInstance.Data);
          this = (UPCGDataBinding *)local_178._8_8_;
        }
      }
      uVar22 = (ulonglong)local_184;
      pFVar26 = pFVar26 + 0x78;
    }
    if ((UPCGProxyForGPUData *)local_180.Handle == (UPCGProxyForGPUData *)0x0) goto LAB_1497ecb68;
    pUVar13 = UPCGProxyForGPUData::StaticClass();
    bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_180,pUVar13);
    if ((!bVar10) || ((UPCGProxyForGPUData *)local_180.Handle == (UPCGProxyForGPUData *)0x0))
    goto LAB_1497ecb68;
    pTVar14 = UPCGProxyForGPUData::GetGPUInfoMutable
                        ((UPCGProxyForGPUData *)local_180.Handle,
                         (TSharedPtr<FPCGProxyForGPUDataCollection,1> *)(local_d8 + 0x38));
    local_1e0.Object = pTVar14->Object;
    local_1e0.SharedReferenceCount.ReferenceController =
         (pTVar14->SharedReferenceCount).ReferenceController;
    if (local_1e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
    if (local_1e0.Object != (FPCGProxyForGPUDataCollection *)0x0) {
      for (FVar15.Data = local_1d0.Data;
          (TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> *)FVar15.Data !=
          (TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> *)
          (local_1d0.Data + (longlong)(int)local_1c8 * 0x10); FVar15.Data = FVar15.Data + 0x10) {
        if (((TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> *)FVar15.Data)->Object ==
            local_1e0.Object) goto LAB_1497ecb52;
      }
      iVar11 = (int)local_1c8;
      if ((local_1d0.Data <= &local_1e0) &&
         (&local_1e0 <
          (TSharedPtr<FPCGProxyForGPUDataCollection_const_,1> *)
          (local_1d0.Data + (longlong)local_1c8._4_4_ * 0x10))) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (int)local_1c8;
      }
      if (iVar11 == local_1c8._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_1d0,(int *)((longlong)&local_1c8 + 4));
      }
      local_1c8 = CONCAT44(local_1c8._4_4_,iVar11 + 1);
      *(FPCGProxyForGPUDataCollection **)&local_1d0.Data[(longlong)iVar11 * 0x10].field_0x0 =
           local_1e0.Object;
      *(TReferenceControllerBase<1> **)(local_1d0.Data + (longlong)iVar11 * 0x10 + 8) =
           local_1e0.SharedReferenceCount.ReferenceController;
      if (local_1e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1e4 = 1;
      while( true ) {
        if ((local_1e0.Object == (FPCGProxyForGPUDataCollection *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar26 = local_1b8;
        if (((local_1e0.Object)->StringTable).ArrayNum <= (int)local_1e4) break;
        if ((local_1e0.Object == (FPCGProxyForGPUDataCollection *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar7 = local_1e0.Object;
        lVar25 = (longlong)(int)local_1e4;
        uVar12 = 0;
        if ((int)local_1e4 < ((local_1e0.Object)->StringTable).ArrayNum) {
          uVar12 = ~local_1e4 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_1c0[0] = TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                                 (&this->StringTable,
                                  (FString *)
                                  ((pFVar7->StringTable).AllocatorInstance.Data + lVar25 * 0x10));
        if (local_1c0[0] != local_1e4) {
          if ((local_1e0.Object == (FPCGProxyForGPUDataCollection *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_108 = ((local_1e0.Object)->Buffer).Reference;
          if (local_108 != (FRDGPooledBuffer *)0x0) {
            LOCK();
            *(int *)&local_108->_padding_ = (int)local_108->_padding_ + 1;
            UNLOCK();
          }
          local_100 = local_1e4;
          local_c0 = &local_108;
          local_b8 = local_1c0;
          TSet<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>_&&,int_const_&>_>
                    ((TSet<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>,FDefaultSetAllocator>
                      *)&this->SourceBufferToGraphStringKey,
                     (TPairInitializer<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>_&&,int_const_&> *)
                     local_e8,(bool *)(local_d8 + 0x18));
          if (local_108 != (FRDGPooledBuffer *)0x0) {
            plVar1 = &local_108->_padding_;
            LOCK();
            lVar25 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar25 == 1) && (plVar1 != (longlong *)0x0)) {
              (**(code **)local_108->_padding_)(local_108,1);
            }
          }
          if ((local_1e0.Object == (FPCGProxyForGPUDataCollection *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_f8 = ((local_1e0.Object)->Buffer).Reference;
          if (local_f8 != (FRDGPooledBuffer *)0x0) {
            LOCK();
            *(int *)&local_f8->_padding_ = (int)local_f8->_padding_ + 1;
            UNLOCK();
          }
          local_f0 = local_1c0[0];
          local_b0 = &local_f8;
          local_a8 = (FPCGCrc)&local_1e4;
          TSet<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>_&&,int_const_&>_>
                    ((TSet<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>,FDefaultSetAllocator>
                      *)&this->GraphToSourceBufferStringKey,
                     (TPairInitializer<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>_&&,int_const_&> *)
                     (local_e8 + 4),(bool *)(local_d8 + 0x28));
          if (local_f8 != (FRDGPooledBuffer *)0x0) {
            plVar1 = &local_f8->_padding_;
            LOCK();
            lVar25 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar25 == 1) && (plVar1 != (longlong *)0x0)) {
              (**(code **)local_f8->_padding_)(local_f8,1);
            }
          }
        }
        local_1e4 = local_1e4 + 1;
      }
    }
LAB_1497ecb52:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e0.SharedReferenceCount.ReferenceController);
    uVar22 = (ulonglong)local_184;
    pFVar26 = pFVar26 + 0x78;
  } while( true );
}

// AddInputDataTagsToTable @ 1497ed1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGDataBinding::AddInputDataTagsToTable(UPCGDataBinding *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res20 = (this->InputDataCollection).TaggedData.ArrayNum;
  uVar7 = (ulonglong)(int)local_res20;
  pFVar9 = (this->InputDataCollection).TaggedData.AllocatorInstance.Data;
  pFVar16 = pFVar9 + 0x30;
  pFVar12 = pFVar9 + uVar7 * 0x78;
  do {
    if ((this->InputDataCollection).TaggedData.ArrayNum != (int)uVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar12) {
      return;
    }
    uVar11 = *(uint *)(pFVar16 + 8);
    iVar6 = 0;
    iVar13 = 0;
    uVar4 = 1;
    uVar5 = 0;
    if (uVar11 != 0) {
      pFVar15 = *(FScriptContainerElement **)pFVar16;
      if (*(FScriptContainerElement **)pFVar16 == (FScriptContainerElement *)0x0) {
        pFVar15 = pFVar16 + -0x10;
      }
      uVar5 = *(uint *)pFVar15;
      while (uVar5 == 0) {
        lVar8 = (longlong)iVar6;
        iVar13 = iVar13 + 0x20;
        iVar6 = iVar6 + 1;
        uVar5 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
        goto LAB_1497ed271;
        uVar5 = *(uint *)(pFVar15 + (lVar8 + 1) * 4);
      }
      uVar4 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uVar4 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar5 = iVar13 + -1 + (int)lVar8;
      if ((int)uVar11 < (int)uVar5) {
        uVar5 = uVar11;
      }
    }
LAB_1497ed271:
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar16 + -0x10);
    uVar10 = uVar11 & 0xffffffe0;
    TStack_98._padding_ = CONCAT44(uVar4,iVar6);
    TStack_98.CurrentBitIndex = uVar5;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = iVar13;
    uStack_78 = CONCAT44(uStack_a4,*(int *)(pFVar16 + -0x18) - *(int *)(pFVar16 + 0x14));
    iVar6 = (int)uVar11 >> 5;
    TStack_98.Array = pTVar1;
    if (((int)uVar11 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = *(uint *)(pFVar16 + 8);
    if (uVar11 != uVar5) {
      pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar16;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar16 ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar6 * 4);
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar6;
        uVar10 = uVar10 + 0x20;
        iVar6 = iVar6 + 1;
        uVar11 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
        goto LAB_1497ed371;
        uVar11 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uVar7 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar11 = (int)lVar8 + -1 + uVar10;
      if ((int)uVar5 < (int)uVar11) {
        uVar11 = uVar5;
      }
    }
LAB_1497ed371:
    while( true ) {
      if (*(int *)(pFVar16 + -0x18) - *(int *)(pFVar16 + 0x14) != (int)uStack_78) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_98.CurrentBitIndex == uVar11) && (TStack_98.Array == pTVar1)) break;
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (&this->StringTable,
                 (FString *)
                 (*(longlong *)(pFVar16 + -0x20) + (longlong)TStack_98.CurrentBitIndex * 0x18));
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    pFVar9 = pFVar9 + 0x78;
    pFVar16 = pFVar16 + 0x78;
    uVar7 = (ulonglong)local_res20;
  } while( true );
}

// AddMeshSpawnerPrimitives @ 1497ed410

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
UPCGDataBinding::AddMeshSpawnerPrimitives
          (UPCGDataBinding *this,TObjectPtr<UComputeKernel_const_> param_1,
          FPCGSpawnerPrimitives *param_2)

{
  TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
  ::Emplace<TObjectPtr<UComputeKernel_const_>_const_&,FPCGSpawnerPrimitives>
            ((TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
              *)&this->MeshSpawnersToPrimitives,
             (TObjectPtr<UComputeKernel_const_> *)param_1.field0_0x0,param_2);
  return;
}

// AddMeshSpawnerPrimitives @ 1497ed430

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
UPCGDataBinding::AddMeshSpawnerPrimitives
          (UPCGDataBinding *this,TObjectPtr<UComputeKernel_const_> param_1,
          FPCGSpawnerPrimitives *param_2)

{
  TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
  ::Emplace<TObjectPtr<UComputeKernel_const_>_const_&,FPCGSpawnerPrimitives_const_&>
            ((TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
              *)&this->MeshSpawnersToPrimitives,
             (TObjectPtr<UComputeKernel_const_> *)param_1.field0_0x0,param_2);
  return;
}

// ComputeKernelBindingDataDesc @ 1497f31d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGDataBinding::ComputeKernelBindingDataDesc
          (UPCGDataBinding *this,TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__
          ,int param_1)

{
  UPCGComputeGraph *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint local_res18 [2];
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_28;
  uint *local_18;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *local_10;
  
  local_res18[0] = param_1;
  if ((this->bIsDataDescriptionCachePrimed != (atomic<bool>)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9049822076394799248>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                         ,0x90,"!bIsDataDescriptionCachePrimed"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((this->bTablesInitialized == (atomic<bool>)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9049822076394799249>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                         ,0x91,"bTablesInitialized"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
    return pTVar5;
  }
  this_00 = (this->Graph).field0_0x0.DebugPtr;
  if (this_00 == (UPCGComputeGraph *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799251>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0x93,"Graph");
    if (!bVar3) {
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
    return pTVar5;
  }
  if (*(int *)&(this->DataDescriptionCache).field_0x8 !=
      *(int *)&(this->DataDescriptionCache).field_0x34) {
    puVar7 = *(undefined1 **)&(this->DataDescriptionCache).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->DataDescriptionCache).field_0x38;
    }
    uVar4 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->DataDescriptionCache).field_0x48 - 1U &
                               local_res18[0]) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x20 +
                         *(longlong *)&(this->DataDescriptionCache).field_0x0);
        if (*puVar6 == local_res18[0]) {
          puVar8 = puVar6 + 2;
          if (puVar6 == (uint *)0x0) {
            puVar8 = (uint *)0x0;
          }
          if (puVar8 != (uint *)0x0) {
            __return_storage_ptr__->Object = *(FPCGDataCollectionDesc **)puVar8;
            pTVar1 = *(TReferenceControllerBase<1> **)(puVar8 + 2);
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
            if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        uVar4 = puVar6[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  UPCGComputeGraph::ComputeKernelBindingDataDesc(this_00,&local_28,local_res18[0],this);
  local_18 = local_res18;
  local_10 = &local_28;
  TSet<TTuple<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_&>_>
            ((TSet<TTuple<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>,0>,FDefaultSetAllocator>
              *)&this->DataDescriptionCache,
             (TPairInitializer<int_const_&,TSharedPtr<FPCGDataCollectionDesc_const_,1>_const_&> *)
             &stack0x00000008,(bool *)&local_18);
  __return_storage_ptr__->Object = local_28.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ComputeKernelPinDataDesc @ 1497f33b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGDataBinding::ComputeKernelPinDataDesc
          (UPCGDataBinding *this,TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__
          ,FPCGKernelPin *param_1)

{
  UPCGComputeGraph *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar4;
  FString local_18;
  
  this_00 = (this->Graph).field0_0x0.DebugPtr;
  if (this_00 == (UPCGComputeGraph *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799228>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0x7c,"Graph");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  else {
    iVar3 = UPCGComputeGraph::GetBindingIndex(this_00,param_1);
    if (iVar3 != -1) {
      ComputeKernelBindingDataDesc(this,__return_storage_ptr__,iVar3);
      return __return_storage_ptr__;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&param_1->PinLabel,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// DebugLogDataDescriptions @ 1497fee60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGDataBinding::DebugLogDataDescriptions(UPCGDataBinding *this)

{
  UPCGComputeGraph *pUVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  if ((this->bIsDataDescriptionCachePrimed == (atomic<bool>)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9049822076394799708>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                         ,0x25c,"IsDataDescriptionCachePrimed()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar1 = (this->Graph).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPCGComputeGraph *)0x0) && (pUVar1->bLogDataDescriptions != false)) {
    if (3 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    FPCGKernelAttributeTable::DebugLog(&this->AttributeTable);
    if (3 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    uVar6 = 0;
    bVar4 = LogPCG._0_1_;
    if (0 < (this->StringTable).ArrayNum) {
      do {
        if (3 < bVar4) {
          uVar5 = 0;
          if ((int)uVar6 < (this->StringTable).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          bVar4 = LogPCG._0_1_;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (this->StringTable).ArrayNum);
    }
    if (3 < bVar4) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    UPCGComputeGraph::DebugLogDataDescriptions((this->Graph).field0_0x0.DebugPtr,this);
    return;
  }
  return;
}

// FindMeshSpawnerPrimitives @ 149802b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGSpawnerPrimitives * __thiscall
UPCGDataBinding::FindMeshSpawnerPrimitives
          (UPCGDataBinding *this,TObjectPtr<UComputeKernel_const_> param_1)

{
  TObjectPtr<UComputeKernel_const_>_u_0 TVar1;
  int iVar2;
  FPCGSpawnerPrimitives *pFVar3;
  uint uVar4;
  FPCGSpawnerPrimitives *pFVar5;
  TObjectPtr<UComputeKernel_const_>_u_0 local_res8;
  
                    /* WARNING: Load size is inaccurate */
  TVar1.DebugPtr = *param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar1.DebugPtr != (UComputeKernel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar1.DebugPtr != (UComputeKernel *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UComputeKernel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UComputeKernel_const_>_>
                    ((TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
                      *)&this->MeshSpawnersToPrimitives,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UComputeKernel_const_> *)&local_res8.ObjectPtr);
  pFVar5 = (FPCGSpawnerPrimitives *)0x0;
  if (iVar2 != -1) {
    pFVar5 = (FPCGSpawnerPrimitives *)
             ((longlong)iVar2 * 0x60 + *(longlong *)&this->MeshSpawnersToPrimitives);
  }
  pFVar3 = (FPCGSpawnerPrimitives *)&(pFVar5->PrimitiveFactory).SharedReferenceCount;
  if (pFVar5 == (FPCGSpawnerPrimitives *)0x0) {
    pFVar3 = (FPCGSpawnerPrimitives *)0x0;
  }
  return pFVar3;
}

// FindOrAddMeshSpawnerPrimitives @ 149802be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGSpawnerPrimitives * __thiscall
UPCGDataBinding::FindOrAddMeshSpawnerPrimitives
          (UPCGDataBinding *this,TObjectPtr<UComputeKernel_const_> param_1)

{
  TMap<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
  *this_00;
  UObject *pUVar1;
  int iVar2;
  longlong lVar3;
  FPCGSpawnerPrimitives *pFVar4;
  uint uVar5;
  
  this_00 = &this->MeshSpawnersToPrimitives;
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar5 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  iVar2 = TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UComputeKernel_const_>_>
                    ((TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
                      *)this_00,uVar5,(TObjectPtr<UComputeKernel_const_> *)param_1.field0_0x0);
  if ((iVar2 != -1) &&
     (lVar3 = (longlong)iVar2 * 0x60 + *(longlong *)&this_00->field_0x0, lVar3 != 0)) {
    return (FPCGSpawnerPrimitives *)(lVar3 + 8);
  }
  pFVar4 = TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
           ::EmplaceByHash<TObjectPtr<UComputeKernel_const_>_const_&>
                     ((TMapBase<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>_>
                       *)this_00,uVar5,(TObjectPtr<UComputeKernel_const_> *)param_1.field0_0x0);
  return pFVar4;
}

// GetCachedKernelParams @ 149811f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGKernelParams * __thiscall
UPCGDataBinding::GetCachedKernelParams(UPCGDataBinding *this,int param_1)

{
  int iVar1;
  FPCGKernelParams *pFVar2;
  FPCGKernelParams *pFVar3;
  undefined1 *puVar4;
  FPCGKernelParams *pFVar5;
  
  pFVar5 = (FPCGKernelParams *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->KernelParamsCache).KernelParams.field_0x8 !=
      *(int *)&(this->KernelParamsCache).KernelParams.field_0x34) {
    puVar4 = *(undefined1 **)&(this->KernelParamsCache).KernelParams.field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->KernelParamsCache).KernelParams.field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->KernelParamsCache).KernelParams.field_0x48 - 1U &
                              param_1) * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FPCGKernelParams *)
                 ((longlong)iVar1 * 0x78 + *(longlong *)&(this->KernelParamsCache).KernelParams);
        if ((pFVar2->WeakSettings).WeakPtr.ObjectIndex == param_1) break;
        iVar1 = *(int *)&pFVar2[1].OverriddenValues.Value.ScriptStruct.field0_0x0;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FPCGKernelParams *)&pFVar2->OverriddenValues;
  if (pFVar2 == (FPCGKernelParams *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// GetCachedKernelParams @ 149811fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGKernelParams * __thiscall
UPCGDataBinding::GetCachedKernelParams(UPCGDataBinding *this,UPCGComputeKernel *param_1)

{
  int iVar1;
  FPCGKernelParams *pFVar2;
  undefined1 *puVar3;
  FPCGKernelParams *pFVar4;
  FPCGKernelParams *pFVar5;
  
  pFVar5 = (FPCGKernelParams *)0x0;
  if (param_1 == (UPCGComputeKernel *)0x0) {
    return (FPCGKernelParams *)0x0;
  }
  pFVar4 = pFVar5;
  if (*(int *)&(this->KernelParamsCache).KernelParams.field_0x8 !=
      *(int *)&(this->KernelParamsCache).KernelParams.field_0x34) {
    puVar3 = *(undefined1 **)&(this->KernelParamsCache).KernelParams.field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->KernelParamsCache).KernelParams.field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->KernelParamsCache).KernelParams.field_0x48 - 1U &
                              param_1->KernelIndex) * 4);
    if (iVar1 != -1) {
      do {
        pFVar4 = (FPCGKernelParams *)
                 ((longlong)iVar1 * 0x78 + *(longlong *)&(this->KernelParamsCache).KernelParams);
        if ((pFVar4->WeakSettings).WeakPtr.ObjectIndex == param_1->KernelIndex) break;
        iVar1 = *(int *)&pFVar4[1].OverriddenValues.Value.ScriptStruct.field0_0x0;
        pFVar4 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar2 = (FPCGKernelParams *)&pFVar4->OverriddenValues;
  if (pFVar4 == (FPCGKernelParams *)0x0) {
    pFVar2 = pFVar5;
  }
  return pFVar2;
}

// GetCachedKernelPinDataDesc @ 149812030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGDataBinding::GetCachedKernelPinDataDesc
          (UPCGDataBinding *this,TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__
          ,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *piVar8;
  bool bVar9;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId177,"UPCGDataBinding::GetCachedKernelPinDataDesc",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
               ,0xb1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId177);
  }
  if (this->bIsDataDescriptionCachePrimed == (atomic<bool>)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799283>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0xb3,"bIsDataDescriptionCachePrimed");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    if (*(int *)&(this->DataDescriptionCache).field_0x8 !=
        *(int *)&(this->DataDescriptionCache).field_0x34) {
      puVar7 = *(undefined1 **)&(this->DataDescriptionCache).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->DataDescriptionCache).field_0x38;
      }
      iVar4 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->DataDescriptionCache).field_0x48 - 1U & param_1) *
                                4);
      if (iVar4 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)&this->DataDescriptionCache);
          if (*piVar6 == param_1) {
            piVar8 = piVar6 + 2;
            if (piVar6 == (int *)0x0) {
              piVar8 = (int *)0x0;
            }
            if (piVar8 != (int *)0x0) {
              __return_storage_ptr__->Object = *(FPCGDataCollectionDesc **)piVar8;
              pTVar1 = *(TReferenceControllerBase<1> **)(piVar8 + 2);
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
              if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
                UNLOCK();
              }
              goto LAB_14981216d;
            }
            break;
          }
          iVar4 = piVar6[6];
        } while (iVar4 != -1);
      }
    }
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14981216d:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetCachedKernelPinDataDesc @ 1498121d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGDataBinding::GetCachedKernelPinDataDesc
          (UPCGDataBinding *this,TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__
          ,UPCGComputeKernel *param_1,FName param_2,bool param_3)

{
  UPCGComputeGraph *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar4;
  FPCGKernelPin local_18;
  
  this_00 = (this->Graph).field0_0x0.DebugPtr;
  if (this_00 == (UPCGComputeGraph *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799271>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0xa7,"Graph");
    if (!bVar2) {
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
  }
  else {
    if (param_1 != (UPCGComputeKernel *)0x0) {
      local_18.KernelIndex = param_1->KernelIndex;
      local_18.bIsInput = param_3;
      local_18.PinLabel = param_2;
      iVar3 = UPCGComputeGraph::GetBindingIndex(this_00,&local_18);
      GetCachedKernelPinDataDesc(this,__return_storage_ptr__,iVar3);
      return __return_storage_ptr__;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9049822076394799271>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0xa7,"InKernel");
    if (!bVar2) {
      __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)(*pcVar1)();
  return pTVar4;
}

// GetComputeGraph @ 149812460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGComputeGraph * __thiscall UPCGDataBinding::GetComputeGraph(UPCGDataBinding *this)

{
  return (this->Graph).field0_0x0.DebugPtr;
}

// GetDataToDebugMutable @ 149812ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGDataToDebug,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataBinding::GetDataToDebugMutable(UPCGDataBinding *this)

{
  return &this->DataToDebug;
}

// GetDataToInspectMutable @ 149812cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGDataToDebug,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataBinding::GetDataToInspectMutable(UPCGDataBinding *this)

{
  return &this->DataToInspect;
}

// GetExecutionSource @ 1498148e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IPCGGraphExecutionSource * __thiscall UPCGDataBinding::GetExecutionSource(UPCGDataBinding *this)

{
  FPCGContextHandle *pFVar1;
  FPCGContext *pFVar2;
  IPCGGraphExecutionSource *pIVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar6->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149814912;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar4 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar7);
    pFVar1 = (this->ContextHandle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) &&
       (pFVar2 = pFVar1->Context, pFVar2 != (FPCGContext *)0x0)) {
      if (((pFVar2->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
         (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar2->ExecutionSource), bVar7)) {
        pIVar3 = (pFVar2->ExecutionSource).InterfaceInstance;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        return pIVar3;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return (IPCGGraphExecutionSource *)0x0;
    }
  }
LAB_149814912:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (IPCGGraphExecutionSource *)0x0;
}

// GetFirstInputDataIndex @ 149814bb0

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
UPCGDataBinding::GetFirstInputDataIndex
          (UPCGDataBinding *this,UPCGComputeKernel *param_1,FName param_2)

{
  UPCGComputeGraph *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FPCGKernelPin local_18;
  
  this_00 = (this->Graph).field0_0x0.DebugPtr;
  if (this_00 != (UPCGComputeGraph *)0x0) {
    local_18.KernelIndex = param_1->KernelIndex;
    local_18.bIsInput = true;
    local_18.PinLabel = param_2;
    iVar4 = UPCGComputeGraph::GetBindingIndex(this_00,&local_18);
    if (iVar4 != -1) {
      pFVar5 = UPCGComputeGraph::GetVirtualPinLabelFromBindingIndex
                         ((this->Graph).field0_0x0.DebugPtr,iVar4);
      if (pFVar5 == (FName *)0x0) {
        return -1;
      }
      pFVar1 = (this->InputDataCollection).TaggedData.AllocatorInstance.Data;
      if (pFVar1 != pFVar1 + (longlong)(this->InputDataCollection).TaggedData.ArrayNum * 0x78) {
        pFVar6 = pFVar1;
        do {
          if (*(FName *)(pFVar6 + 0x60) == *pFVar5) {
            lVar7 = SUB168(SEXT816(-0x7777777777777777) *
                           SEXT816((longlong)pFVar6 - (longlong)pFVar1),8) +
                    ((longlong)pFVar6 - (longlong)pFVar1);
            return (int)(lVar7 >> 6) - (int)(lVar7 >> 0x3f);
          }
          pFVar6 = pFVar6 + 0x78;
        } while (pFVar6 != pFVar1 + (longlong)(this->InputDataCollection).TaggedData.ArrayNum * 0x78
                );
      }
      return -1;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<9049822076394799379>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                     ,0x113,"BindingIndex != INDEX_NONE");
  if (!bVar3) {
    return -1;
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// GetGraphAttributeToSourceBufferAttributeIndex @ 149815080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TMap<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>_>
* __thiscall UPCGDataBinding::GetGraphAttributeToSourceBufferAttributeIndex(UPCGDataBinding *this)

{
  return &this->GraphAttributeToSourceBufferAttributeIndex;
}

// GetGraphToSourceBufferStringKey @ 149815090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TMap<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
* __thiscall UPCGDataBinding::GetGraphToSourceBufferStringKey(UPCGDataBinding *this)

{
  return &this->GraphToSourceBufferStringKey;
}

// GetInputDataCollection @ 1498150a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGDataCollection * __thiscall UPCGDataBinding::GetInputDataCollection(UPCGDataBinding *this)

{
  return &this->InputDataCollection;
}

// GetInputDataCollectionMutable @ 1498150e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGDataCollection * __thiscall
UPCGDataBinding::GetInputDataCollectionMutable(UPCGDataBinding *this)

{
  return &this->InputDataCollection;
}

// GetOutputDataCollection @ 149816790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGDataCollection * __thiscall UPCGDataBinding::GetOutputDataCollection(UPCGDataBinding *this)

{
  return &this->OutputDataCollection;
}

// GetPinInputDataIndices @ 149816ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataBinding::GetPinInputDataIndices
          (UPCGDataBinding *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPCGComputeKernel *param_1,FName param_2)

{
  int *piVar1;
  uint uVar2;
  UPCGComputeGraph *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint local_38;
  FPCGKernelPin local_34;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  this_00 = (this->Graph).field0_0x0.DebugPtr;
  if (this_00 != (UPCGComputeGraph *)0x0) {
    local_34.KernelIndex = param_1->KernelIndex;
    local_34.bIsInput = true;
    local_34.PinLabel = param_2;
    iVar6 = UPCGComputeGraph::GetBindingIndex(this_00,&local_34);
    if (iVar6 != -1) {
      pFVar8 = UPCGComputeGraph::GetVirtualPinLabelFromBindingIndex
                         ((this->Graph).field0_0x0.DebugPtr,iVar6);
      if (pFVar8 == (FName *)0x0) {
        return __return_storage_ptr__;
      }
      uVar2 = (this->InputDataCollection).TaggedData.ArrayNum;
      if (-1 < (int)uVar2) {
        if (*piVar1 < (int)uVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar2,&__return_storage_ptr__->AllocatorInstance,
                     __return_storage_ptr__->ArrayNum,piVar1);
        }
        local_38 = 0;
        if ((this->InputDataCollection).TaggedData.ArrayNum < 1) {
          return __return_storage_ptr__;
        }
        while( true ) {
          uVar2 = local_38;
          uVar7 = 0;
          if ((int)local_38 < (this->InputDataCollection).TaggedData.ArrayNum) {
            uVar7 = ~local_38 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) break;
          if (*(FName *)((this->InputDataCollection).TaggedData.AllocatorInstance.Data +
                        (longlong)(int)uVar2 * 0x78 + 0x60) == *pFVar8) {
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
                ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar1 * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar9;
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
            }
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
                 local_38;
          }
          local_38 = local_38 + 1;
          if ((this->InputDataCollection).TaggedData.ArrayNum <= (int)local_38) {
            return __return_storage_ptr__;
          }
        }
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<9049822076394799399>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                     ,0x127,"BindingIndex != INDEX_NONE");
  if (!bVar5) {
    return __return_storage_ptr__;
  }
  pcVar4 = (code *)swi(3);
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
  return pTVar9;
}

// GetPrivateStaticClass @ 149817810

UClass * __cdecl UPCGDataBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataBinding",
               &Z_Registration_Info_UClass_UPCGDataBinding.InnerSingleton,
               StaticRegisterNativesUPCGDataBinding,0x378,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataBinding>,
               InternalVTableHelperCtorCaller<UPCGDataBinding>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataBinding.InnerSingleton;
}

// GetSourceBufferAttributeToGraphAttributeIndex @ 14981b840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TMap<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,0>_>
* __thiscall UPCGDataBinding::GetSourceBufferAttributeToGraphAttributeIndex(UPCGDataBinding *this)

{
  return &this->SourceBufferAttributeToGraphAttributeIndex;
}

// GetSourceBufferToGraphStringKey @ 14981b850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TMap<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>_>
* __thiscall UPCGDataBinding::GetSourceBufferToGraphStringKey(UPCGDataBinding *this)

{
  return &this->SourceBufferToGraphStringKey;
}

// Initialize @ 14981e380

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
UPCGDataBinding::Initialize(UPCGDataBinding *this,UPCGComputeGraph *param_1,FPCGContext *param_2)

{
  atomic<int> *paVar1;
  FPCGDataCollection *pFVar2;
  int *piVar3;
  atomic<int> aVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  UPCGData *pUVar7;
  FPCGTaggedData *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TWeakPtr<FPCGContextHandle,1> *pTVar12;
  FPCGDataTypeBaseId *pFVar13;
  FPCGDataTypeIdentifier *pFVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  FPCGTaggedData *pFVar17;
  FPCGTaggedData *pFVar18;
  bool bVar19;
  undefined1 local_res18 [8];
  uint local_res20;
  FName local_d0;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FPCGDataTypeIdentifier local_a0;
  undefined1 local_88 [8];
  TWeakPtr<FPCGContextHandle,1> local_80;
  FString local_70;
  FPCGDataTypeIdentifier local_60;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId24,"UPCGDataBinding::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
               ,0x18);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId24);
  }
  if ((param_1 == (UPCGComputeGraph *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InComputeGraph",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                          ,0x19,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_2 == (FPCGContext *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                          ,0x1a,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGComputeGraph *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Graph).field0_0x0.DebugPtr = param_1;
  pTVar12 = FPCGContext::GetOrCreateHandle(param_2,&local_80);
  if (&this->ContextHandle != pTVar12) {
    (this->ContextHandle).Object = pTVar12->Object;
    pTVar12->Object = (FPCGContextHandle *)0x0;
    pTVar6 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
    (this->ContextHandle).WeakReferenceCount.ReferenceController =
         (pTVar12->WeakReferenceCount).ReferenceController;
    (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_80.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_80.WeakReferenceCount.ReferenceController,1);
    }
  }
  uVar5 = (param_2->InputData).TaggedData.ArrayNum;
  pFVar2 = &this->InputDataCollection;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar3 = &(this->InputDataCollection).TaggedData.ArrayMax;
  if ((this->InputDataCollection).TaggedData.ArrayMax < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,uVar5,(ForAnyElementType *)pFVar2,
               (this->InputDataCollection).TaggedData.ArrayNum,piVar3);
  }
  local_res20 = (param_2->InputData).TaggedData.ArrayNum;
  uVar15 = (ulonglong)(int)local_res20;
  pFVar18 = (FPCGTaggedData *)(param_2->InputData).TaggedData.AllocatorInstance.Data;
  pFVar17 = pFVar18 + uVar15;
  do {
    if ((param_2->InputData).TaggedData.ArrayNum != (int)uVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar18 == pFVar17) {
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pUVar7 = (pFVar18->Data).Data.field0_0x0.DebugPtr;
    if (pUVar7 != (UPCGData *)0x0) {
      pFVar13 = (FPCGDataTypeBaseId *)(**(code **)(pUVar7->_padding_ + 0x2b8))();
      pFVar14 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_60,pFVar13);
      bVar10 = PCGComputeHelpers::IsTypeAllowedAsInput(pFVar14);
      if (local_60.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Ids.AllocatorInstance.Data);
      }
      if (bVar10) {
        pFVar14 = TMapBase<FName,FPCGDataTypeIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>_>
                  ::Find((TMapBase<FName,FPCGDataTypeIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataTypeIdentifier,0>_>
                          *)&((this->Graph).field0_0x0.DebugPtr)->VirtualInputPinToType,pFVar18->Pin
                        );
        pUVar7 = (pFVar18->Data).Data.field0_0x0.DebugPtr;
        pFVar13 = (FPCGDataTypeBaseId *)(**(code **)(pUVar7->_padding_ + 0x2f0))(pUVar7,local_88);
        FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_a0,pFVar13);
        if ((pFVar14 == (FPCGDataTypeIdentifier *)0x0) ||
           (bVar10 = FPCGDataTypeIdentifier::IsChildOf(&local_a0,pFVar14), !bVar10)) {
          FVar16.Data = local_a0.Ids.AllocatorInstance.Data;
          if (2 < (byte)LogPCG._0_1_) {
            ::FName::ToString(&pFVar18->Pin,&local_70);
            local_c8 = (FName)((pFVar18->Data).Data.field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_c8,&local_b0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            FVar16.Data = local_a0.Ids.AllocatorInstance.Data;
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
              FVar16.Data = local_a0.Ids.AllocatorInstance.Data;
            }
          }
        }
        else {
          pFVar8 = (FPCGTaggedData *)(pFVar2->TaggedData).AllocatorInstance.Data;
          if (((pFVar8 <= pFVar18) && (pFVar18 < pFVar8 + *piVar3)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar11 = (this->InputDataCollection).TaggedData.ArrayNum;
          if (iVar11 == *piVar3) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)pFVar2,piVar3);
          }
          (this->InputDataCollection).TaggedData.ArrayNum = iVar11 + 1;
          FPCGTaggedData::FPCGTaggedData
                    ((FPCGTaggedData *)
                     ((pFVar2->TaggedData).AllocatorInstance.Data + (longlong)iVar11 * 0x78),pFVar18
                    );
          FVar16.Data = local_a0.Ids.AllocatorInstance.Data;
        }
      }
      else {
        if ((byte)LogPCG._0_1_ < 3) goto LAB_14981e75d;
        local_d0 = (FName)((pFVar18->Data).Data.field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_d0,&local_c0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FVar16.Data = local_c0.Data.AllocatorInstance.Data;
      }
      if (FVar16.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar16.Data);
      }
    }
LAB_14981e75d:
    uVar15 = (ulonglong)local_res20;
    pFVar18 = pFVar18 + 1;
  } while( true );
}

// InitializeKernelParams @ 14981f560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGDataBinding::InitializeKernelParams(UPCGDataBinding *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId188,"FPCGKernelParamsCache::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
               ,0xbc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId188);
  }
  if (this == (UPCGDataBinding *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<920666848813383870>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGKernelParamsCache.cpp"
                       ,0xbe,"InDataBinding");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    FPCGKernelParamsCache::CacheOverridableParamDataIndices(&this->KernelParamsCache,param_1,this);
    bVar2 = FPCGKernelParamsCache::ReadbackOverridableParamData(&this->KernelParamsCache,this);
    if (!bVar2) {
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return false;
    }
    FPCGKernelParamsCache::CreateAndCacheKernelParams(&this->KernelParamsCache,param_1,this);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// InitializeTables @ 14981f660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGDataBinding::InitializeTables(UPCGDataBinding *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FString local_18;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId62,"UPCGDataBinding::InitializeTables",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
               ,0x3e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId62);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                         ,0x3f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->AttributeTable).AttributeTable,
             &(((this->Graph).field0_0x0.DebugPtr)->StaticAttributeTable).AttributeTable);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  DestructItems<FString,int>
            ((FString *)(this->StringTable).AllocatorInstance.Data,(this->StringTable).ArrayNum);
  TArray<FString,TSizedDefaultAllocator<32>_>::CopyToEmpty<FString,int>
            (&this->StringTable,&local_18,1,(this->StringTable).ArrayMax);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (&this->StringTable,&((this->Graph).field0_0x0.DebugPtr)->StringTable);
  AddInputDataAttributesToTable(this);
  AddInputDataStringsToTable(this);
  AddInputDataTagsToTable(this);
  LOCK();
  this->bTablesInitialized = (atomic<bool>)0x1;
  UNLOCK();
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsMeshSpawnerKernelComplete @ 149820b80

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
UPCGDataBinding::IsMeshSpawnerKernelComplete
          (UPCGDataBinding *this,TObjectPtr<UComputeKernel_const_> param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->CompletedMeshSpawners).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->CompletedMeshSpawners).ArrayNum * 8;
  if (pFVar2 != pFVar1) {
    do {
      if (*(longlong *)pFVar2 == *(longlong *)param_1.field0_0x0) {
        return true;
      }
      pFVar2 = pFVar2 + 8;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// PrimeDataDescriptionCache @ 1498259e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGDataBinding::PrimeDataDescriptionCache(UPCGDataBinding *this)

{
  UPCGComputeGraph *pUVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  FPCGKernelPin *pFVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<FPCGKernelPin,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_28;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId97,"UPCGDataBinding::PrimeDataDescriptionCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
               ,0x61);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId97);
  }
  if ((this->bIsDataDescriptionCachePrimed == (atomic<bool>)0x0) &&
     (*(int *)&(this->DataDescriptionCache).field_0x8 ==
      *(int *)&(this->DataDescriptionCache).field_0x34)) {
    pUVar1 = (this->Graph).field0_0x0.DebugPtr;
    if (pUVar1 == (UPCGComputeGraph *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9049822076394799209>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                         ,0x69,"Graph");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FPCGKernelPin,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGKernelPin,int,0>_>
                  *)&pUVar1->KernelPinToFirstBinding,&local_38);
      iVar3 = local_38.ArrayNum;
      uVar5 = (ulonglong)local_38.ArrayNum;
      pFVar6 = (FPCGKernelPin *)(local_38.AllocatorInstance.Data + uVar5 * 0x10);
      FVar7.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar5 != iVar3) {
          `TCheckedPointerIterator<FPCGKernelPin,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if ((FPCGKernelPin *)FVar7.Data == pFVar6) break;
        ComputeKernelPinDataDesc(this,&local_28,(FPCGKernelPin *)FVar7.Data);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        uVar5 = local_38._8_8_ & 0xffffffff;
        FVar7.Data = FVar7.Data + 0x10;
      }
      if ((FPCGKernelPin *)local_38.AllocatorInstance.Data != (FPCGKernelPin *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
    LOCK();
    this->bIsDataDescriptionCachePrimed = (atomic<bool>)0x1;
    UNLOCK();
  }
  else {
    `UPCGDataBinding::PrimeDataDescriptionCache'::__l5::<lambda_1>::operator()(local_res10);
  }
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ReadbackInputDataToCPU @ 149826ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGDataBinding::ReadbackInputDataToCPU(UPCGDataBinding *this,int param_1)

{
  FPCGContextHandle *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  atomic<int> aVar7;
  UClass *pUVar8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  FPCGContext *pFVar12;
  FObjectPtr_u_0 this_00;
  longlong lVar13;
  undefined1 auStackY_f8 [32];
  FObjectPtr_u_0 local_c8 [2];
  FReadbackResult local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (param_1 < 0) {
    return true;
  }
  if ((this->InputDataCollection).TaggedData.ArrayNum <= param_1) {
    return true;
  }
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (this->InputDataCollection).TaggedData.ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  lVar13 = (longlong)param_1 * 0x78;
  local_c8[0] = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)
                ((this->InputDataCollection).TaggedData.AllocatorInstance.Data + lVar13))->Handle;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149826f4a:
    if ((UPCGProxyForGPUData *)local_c8[0].Handle == (UPCGProxyForGPUData *)0x0) goto LAB_149826f6c;
    pUVar8 = UPCGProxyForGPUData::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)local_c8,pUVar8);
    this_00 = local_c8[0];
    if (!bVar4) goto LAB_149826f6c;
  }
  else {
    if ((UPCGProxyForGPUData *)local_c8[0].Handle != (UPCGProxyForGPUData *)0x0) {
      UE::GC::MarkAsReachable(local_c8[0].Handle);
      goto LAB_149826f4a;
    }
LAB_149826f6c:
    this_00.Handle = (UObject *)0x0;
  }
  if ((UPCGProxyForGPUData *)this_00.Handle == (UPCGProxyForGPUData *)0x0) {
    return true;
  }
  pTVar11 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149826fa3;
      }
      LOCK();
      aVar7 = pTVar11->SharedReferenceCount;
      bVar4 = aVar3 == aVar7;
      if (bVar4) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar4);
    pFVar1 = (this->ContextHandle).Object;
    if (pFVar1 != (FPCGContextHandle *)0x0) {
      pFVar12 = pFVar1->Context;
      goto LAB_149826fa6;
    }
  }
LAB_149826fa3:
  pFVar12 = (FPCGContext *)0x0;
LAB_149826fa6:
  UPCGProxyForGPUData::GetCPUData((UPCGProxyForGPUData *)this_00.Handle,&local_b8,pFVar12);
  if (local_b8.bComplete == false) {
    bVar4 = false;
  }
  else {
    if (local_b8.TaggedData.Data.Data.field0_0x0.DebugPtr == (TObjectPtr<UPCGData_const_>_u_0)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9049822076394799438>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                         ,0x14e,"Result.TaggedData.Data");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else {
      uVar6 = 0;
      if (param_1 < (this->InputDataCollection).TaggedData.ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      FPCGDataPtrWrapper::operator=
                ((FPCGDataPtrWrapper *)
                 ((this->InputDataCollection).TaggedData.AllocatorInstance.Data + lVar13),
                 &local_b8.TaggedData.Data);
      uVar6 = 0;
      if (param_1 < (this->InputDataCollection).TaggedData.ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar9 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((this->InputDataCollection).TaggedData.AllocatorInstance.Data + lVar13 + 0x10);
      if (pTVar9 != &local_b8.TaggedData.Tags) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
        Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                  (pTVar9,&local_b8.TaggedData.Tags);
      }
    }
    bVar4 = true;
  }
  local_b8.TaggedData.Tags.HashSize = 0;
  if (local_b8.TaggedData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.TaggedData.Tags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.TaggedData.Tags.Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_b8.TaggedData.Data);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return bVar4;
}

// ReceiveDataFromGPU_GameThread @ 149827bc0

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
UPCGDataBinding::ReceiveDataFromGPU_GameThread
          (UPCGDataBinding *this,UPCGData *param_1,UPCGSettings *param_2,EPCGExportMode param_3,
          FName param_4,FName param_5)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_3c = 0x80;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  ReceiveDataFromGPU_GameThread
            (this,param_1,param_2,param_3,param_4,param_5,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// ReceiveDataFromGPU_GameThread @ 149827cf0

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

void __thiscall
UPCGDataBinding::ReceiveDataFromGPU_GameThread
          (UPCGDataBinding *this,UPCGData *param_1,UPCGSettings *param_2,EPCGExportMode param_3,
          FName param_4,FName param_5,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_6)

{
  int *piVar1;
  TArray<FPCGDataToDebug,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  FPCGDataPtrWrapper *this_00;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_1b8 [32];
  UPCGSettings *local_160;
  UPCGSettings *local_158 [2];
  UPCGData *local_148;
  UObject *local_140;
  FWeakObjectPtr local_138;
  FName local_130;
  FName local_128;
  undefined1 local_120 [32];
  void *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ForElementType<FSetElementId> local_e0;
  int local_d8;
  UPCGData *local_c8;
  UObject *local_c0;
  FWeakObjectPtr local_b8;
  FName local_b0;
  FName local_a8;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                       ,0xd7,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_3 & ComputeGraphOutput) != NoExport) {
    iVar6 = (this->OutputDataCollection).TaggedData.ArrayNum;
    piVar1 = &(this->OutputDataCollection).TaggedData.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)&this->OutputDataCollection,piVar1);
    }
    (this->OutputDataCollection).TaggedData.ArrayNum = iVar6 + 1;
    this_00 = (FPCGDataPtrWrapper *)
              ((this->OutputDataCollection).TaggedData.AllocatorInstance.Data +
              (longlong)iVar6 * 0x78);
    this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[5].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined2 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 2) = 0;
    (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
    *(undefined8 *)
     &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1))->Elements = 0
    ;
    this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
    this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
    this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
    *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
    *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
    this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
    this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
    *(undefined2 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
    *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
    *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
    this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)param_5;
    FPCGDataPtrWrapper::operator=(this_00,param_1);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1),
               param_6);
  }
  if ((param_3 & DebugVisualization) != NoExport) {
    pTVar2 = &this->DataToDebug;
    local_148 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_140 = (UObject *)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPCGSettings *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_138.ObjectIndex = 0;
    local_138.ObjectSerialNumber = 0;
    local_160 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPCGSettings *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_160);
    local_120._0_8_ = (FScriptContainerElement *)0x0;
    local_120._8_8_ = 0;
    local_100 = (void *)0x0;
    local_f8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_f0 = _UNK_150631d98;
    local_e0 = (ForElementType<FSetElementId>)0x0;
    local_d8 = 0;
    local_130 = param_4;
    local_128 = param_5;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_120,param_6);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_148) &&
       ((FScriptContainerElement *)&local_148 <
        pFVar7 + (longlong)(this->DataToDebug).ArrayMax * 0x78)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (this->DataToDebug).ArrayNum;
    piVar1 = &(this->DataToDebug).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DataToDebug).ArrayNum = iVar6 + 1;
    pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x78;
    *(UPCGData **)pFVar7 = local_148;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_148);
    }
    *(UObject **)(pFVar7 + 8) = local_140;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_140);
    }
    *(FWeakObjectPtr *)(pFVar7 + 0x10) = local_138;
    *(FName *)(pFVar7 + 0x18) = local_130;
    *(FName *)(pFVar7 + 0x20) = local_128;
    *(undefined8 *)
     &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar7 + 0x28))->Elements =
         0;
    *(undefined8 *)(pFVar7 + 0x30) = 0;
    *(undefined8 *)(pFVar7 + 0x48) = 0;
    *(undefined4 *)(pFVar7 + 0x50) = 0;
    *(undefined4 *)(pFVar7 + 0x54) = 0x80;
    *(undefined4 *)(pFVar7 + 0x58) = 0xffffffff;
    *(undefined4 *)(pFVar7 + 0x5c) = 0;
    *(undefined8 *)(pFVar7 + 0x68) = 0;
    *(undefined4 *)(pFVar7 + 0x70) = 0;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar7 + 0x28),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_120);
    local_d8 = 0;
    if (local_e0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e0);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_120,0,local_120._8_4_);
    iVar6 = SUB84(local_120._8_8_,4);
    local_120._8_8_ = local_120._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_120,0,(int *)(local_120 + 0xc));
    }
    uVar4 = local_f8._4_4_;
    uStack_f0 = 0xffffffff;
    local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
    if (0x80 < uVar4) {
      local_f8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_120 + 0x10),0);
    }
    if (local_100 != (void *)0x0) {
      FMemory::Free(local_100);
    }
    if ((FScriptContainerElement *)local_120._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_120._0_8_);
    }
  }
  if ((param_3 & Inspection) != NoExport) {
    pTVar2 = &this->DataToInspect;
    local_c8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_c0 = (UObject *)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPCGSettings *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_b8.ObjectIndex = 0;
    local_b8.ObjectSerialNumber = 0;
    local_158[0] = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPCGSettings *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)local_158);
    local_78 = ___xmm_00000000ffffffff0000008000000000;
    uStack_70 = _UNK_150631d98;
    local_b0 = param_4;
    local_a8 = param_5;
    local_a0._0_8_ = (FScriptContainerElement *)0x0;
    local_a0._8_8_ = 0;
    local_80 = (void *)0x0;
    local_60 = (ForElementType<FSetElementId>)0x0;
    local_58 = 0;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_a0,param_6);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_c8) &&
       ((FScriptContainerElement *)&local_c8 <
        pFVar7 + (longlong)(this->DataToInspect).ArrayMax * 0x78)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (this->DataToInspect).ArrayNum;
    piVar1 = &(this->DataToInspect).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x78;
    (this->DataToInspect).ArrayNum = iVar6 + 1;
    *(UPCGData **)pFVar7 = local_c8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c8);
    }
    *(UObject **)(pFVar7 + 8) = local_c0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_c0);
    }
    *(FWeakObjectPtr *)(pFVar7 + 0x10) = local_b8;
    *(FName *)(pFVar7 + 0x18) = local_b0;
    *(FName *)(pFVar7 + 0x20) = local_a8;
    *(undefined8 *)
     &((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar7 + 0x28))->Elements =
         0;
    *(undefined8 *)(pFVar7 + 0x30) = 0;
    *(undefined8 *)(pFVar7 + 0x48) = 0;
    *(undefined4 *)(pFVar7 + 0x50) = 0;
    *(undefined4 *)(pFVar7 + 0x54) = 0x80;
    *(undefined4 *)(pFVar7 + 0x58) = 0xffffffff;
    *(undefined4 *)(pFVar7 + 0x5c) = 0;
    *(undefined8 *)(pFVar7 + 0x68) = 0;
    *(undefined4 *)(pFVar7 + 0x70) = 0;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar7 + 0x28),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_a0);
    local_58 = 0;
    if (local_60 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a0,0,local_a0._8_4_);
    iVar6 = SUB84(local_a0._8_8_,4);
    local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
    }
    uVar4 = local_78._4_4_;
    uStack_70 = 0xffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    if (0x80 < uVar4) {
      local_78 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a0._0_8_);
    }
  }
  return;
}

// ReleaseTransientResources @ 14982a000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGDataBinding::ReleaseTransientResources(UPCGDataBinding *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  FPCGTaggedData *pFVar5;
  FPCGDataToDebug *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 local_18 [2];
  
  TSet<TTuple<int,FPCGKernelParams>,TDefaultMapHashableKeyFuncs<int,FPCGKernelParams,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FPCGKernelParams>,TDefaultMapHashableKeyFuncs<int,FPCGKernelParams,0>,FDefaultSetAllocator>
           *)&this->KernelParamsCache);
  TSet<TTuple<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<TTuple<FPCGKernelOverridableParam,int>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&(this->KernelParamsCache).OverridableParamDataIndices);
  TSet<TTuple<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TSharedPtr<FPCGProxyForGPUDataCollection_const_,1>,int>,int,0>,FDefaultSetAllocator>
           *)&this->SourceBufferAttributeToGraphAttributeIndex);
  TSet<TTuple<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,TRefCountPtr<FRDGPooledBuffer>_>,int,0>,FDefaultSetAllocator>
           *)&this->GraphAttributeToSourceBufferAttributeIndex);
  TSet<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>,FDefaultSetAllocator>
           *)&this->SourceBufferToGraphStringKey);
  TSet<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<TRefCountPtr<FRDGPooledBuffer>,int>,int,0>,FDefaultSetAllocator>
           *)&this->GraphToSourceBufferStringKey);
  piVar1 = &(this->OutputDataCollection).TaggedData.ArrayMax;
  pFVar5 = (FPCGTaggedData *)(this->OutputDataCollection).TaggedData.AllocatorInstance.Data;
  iVar4 = (this->OutputDataCollection).TaggedData.ArrayNum;
  if ((this->OutputDataCollection).TaggedData.ArrayMax < 0) {
    DestructItems<FPCGTaggedData,int>(pFVar5,iVar4);
    (this->OutputDataCollection).TaggedData.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)&this->OutputDataCollection,0,piVar1);
    }
  }
  else {
    DestructItems<FPCGTaggedData,int>(pFVar5,iVar4);
    (this->OutputDataCollection).TaggedData.ArrayNum = 0;
  }
  piVar1 = &(this->InputDataCollection).TaggedData.ArrayMax;
  pFVar5 = (FPCGTaggedData *)(this->InputDataCollection).TaggedData.AllocatorInstance.Data;
  iVar4 = (this->InputDataCollection).TaggedData.ArrayNum;
  if ((this->InputDataCollection).TaggedData.ArrayMax < 0) {
    DestructItems<FPCGTaggedData,int>(pFVar5,iVar4);
    iVar4 = *piVar1;
    (this->InputDataCollection).TaggedData.ArrayNum = 0;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)&this->InputDataCollection,0,piVar1);
    }
  }
  else {
    DestructItems<FPCGTaggedData,int>(pFVar5,iVar4);
    (this->InputDataCollection).TaggedData.ArrayNum = 0;
  }
  TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>,TDefaultMapHashableKeyFuncs<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives,0>,FDefaultSetAllocator>
           *)&this->MeshSpawnersToPrimitives);
  piVar1 = &(this->DataToDebug).ArrayMax;
  pFVar6 = (FPCGDataToDebug *)(this->DataToDebug).AllocatorInstance.Data;
  iVar4 = (this->DataToDebug).ArrayNum;
  if ((this->DataToDebug).ArrayMax < 0) {
    DestructItems<FPCGDataToDebug,int>(pFVar6,iVar4);
    (this->DataToDebug).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,&(this->DataToDebug).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPCGDataToDebug,int>(pFVar6,iVar4);
    (this->DataToDebug).ArrayNum = 0;
  }
  piVar1 = &(this->DataToInspect).ArrayMax;
  pFVar6 = (FPCGDataToDebug *)(this->DataToInspect).AllocatorInstance.Data;
  iVar4 = (this->DataToInspect).ArrayNum;
  if ((this->DataToInspect).ArrayMax < 0) {
    DestructItems<FPCGDataToDebug,int>(pFVar6,iVar4);
    (this->DataToInspect).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,&(this->DataToInspect).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPCGDataToDebug,int>(pFVar6,iVar4);
    (this->DataToInspect).ArrayNum = 0;
  }
  if (&this->ContextHandle != (TWeakPtr<FPCGContextHandle,1> *)local_18) {
    pTVar7 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
    (this->ContextHandle).Object = (FPCGContextHandle *)0x0;
    (this->ContextHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar7->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
  }
  TSet<TTuple<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FPCGDataCollectionDesc_const_,1>,0>,FDefaultSetAllocator>
           *)&this->DataDescriptionCache);
  return;
}

// StaticRegisterNativesUPCGDataBinding @ 149847210

void __cdecl UPCGDataBinding::StaticRegisterNativesUPCGDataBinding(void)

{
  return;
}

// operator() @ 150545210

bool __thiscall
`UPCGDataBinding::PrimeDataDescriptionCache'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9049822076394799205>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9049822076394799205>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

