// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 6

// FFastGeoMeshComponent @ 14da18bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFastGeoMeshComponent * __thiscall
FFastGeoMeshComponent::FFastGeoMeshComponent
          (FFastGeoMeshComponent *this,FFastGeoMeshComponent *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
            ((FFastGeoPrimitiveComponent *)this,(FFastGeoPrimitiveComponent *)param_1);
  pTVar2 = &this->OverrideMaterials;
  this->_padding_ = (longlong)&___7FFastGeoMeshComponent__6B_;
  piVar1 = &(this->OverrideMaterials).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->OverrideMaterials).ArrayNum;
  pFVar4 = (param_1->OverrideMaterials).AllocatorInstance.Data;
  (this->OverrideMaterials).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar4,iVar3);
  }
  return this;
}

// FFastGeoMeshComponent @ 14da18c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFastGeoMeshComponent * __thiscall
FFastGeoMeshComponent::FFastGeoMeshComponent
          (FFastGeoMeshComponent *this,int param_1,FFastGeoElementType *param_2)

{
  FFastGeoElementType local_18;
  
  local_18.ID = param_2->ID;
  local_18._4_4_ = *(undefined4 *)&param_2->field_0x4;
  local_18.ParentType = param_2->ParentType;
  FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
            ((FFastGeoPrimitiveComponent *)this,param_1,&local_18);
  this->_padding_ = (longlong)&___7FFastGeoMeshComponent__6B_;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  return this;
}

// ~FFastGeoMeshComponent @ 14da1b6b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFastGeoMeshComponent::~FFastGeoMeshComponent(FFastGeoMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  return;
}

// GetMaterialRelevance @ 14da2a7e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialRelevance __thiscall
FFastGeoMeshComponent::GetMaterialRelevance(FFastGeoMeshComponent *this,EShaderPlatform param_1)

{
  undefined6 in_register_00000012;
  FMaterialRelevance_u_0 FVar1;
  
  FVar1.Raw._2_6_ = in_register_00000012;
  FVar1.Raw._0_2_ = param_1;
  FMeshComponentHelper::GetMaterialRelevance<FFastGeoMeshComponent>
            ((FFastGeoMeshComponent *)FVar1,(EShaderPlatform)this);
  return (FMaterialRelevance)FVar1;
}

// GetMaterialSlotsOverlayMaterial @ 14da2a810

/* WARNING: Removing unreachable block (ram,0x00014da13a57) */
/* WARNING: Removing unreachable block (ram,0x00014da13a68) */
/* WARNING: Removing unreachable block (ram,0x00014da13a6f) */
/* WARNING: Removing unreachable block (ram,0x00014da13a73) */
/* WARNING: Removing unreachable block (ram,0x00014da13a7c) */
/* WARNING: Removing unreachable block (ram,0x00014da13a89) */
/* WARNING: Removing unreachable block (ram,0x00014da13a9b) */
/* WARNING: Removing unreachable block (ram,0x00014da13aaa) */
/* WARNING: Removing unreachable block (ram,0x00014da13aad) */
/* WARNING: Removing unreachable block (ram,0x00014da13ab1) */
/* WARNING: Removing unreachable block (ram,0x00014da13ae6) */
/* WARNING: Removing unreachable block (ram,0x00014da13ae7) */
/* WARNING: Removing unreachable block (ram,0x00014da13af5) */
/* WARNING: Removing unreachable block (ram,0x00014da13afe) */
/* WARNING: Removing unreachable block (ram,0x00014da13b01) */
/* WARNING: Removing unreachable block (ram,0x00014da13b05) */
/* WARNING: Removing unreachable block (ram,0x00014da13b3a) */
/* WARNING: Removing unreachable block (ram,0x00014da13b3b) */
/* WARNING: Removing unreachable block (ram,0x00014da13b4c) */
/* WARNING: Removing unreachable block (ram,0x00014da13b4f) */
/* WARNING: Removing unreachable block (ram,0x00014da13b53) */
/* WARNING: Removing unreachable block (ram,0x00014da13b82) */
/* WARNING: Removing unreachable block (ram,0x00014da13b83) */
/* WARNING: Removing unreachable block (ram,0x00014da13b93) */
/* WARNING: Removing unreachable block (ram,0x00014da13b9b) */
/* WARNING: Removing unreachable block (ram,0x00014da13ba0) */
/* WARNING: Removing unreachable block (ram,0x00014da13ba6) */
/* WARNING: Removing unreachable block (ram,0x00014da13bb5) */
/* WARNING: Removing unreachable block (ram,0x00014da13bd8) */

void __thiscall
FFastGeoMeshComponent::GetMaterialSlotsOverlayMaterial
          (FFastGeoMeshComponent *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x100))();
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=(param_1,pTVar1);
  (**(code **)(this->_padding_ + 0xf8))(this);
  return;
}

// Serialize @ 14da34270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFastGeoMeshComponent::Serialize(FFastGeoMeshComponent *this,FArchive *param_1)

{
  FFastGeoPrimitiveComponent::Serialize((FFastGeoPrimitiveComponent *)this,param_1);
  TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            (param_1,&this->OverrideMaterials);
  return;
}

