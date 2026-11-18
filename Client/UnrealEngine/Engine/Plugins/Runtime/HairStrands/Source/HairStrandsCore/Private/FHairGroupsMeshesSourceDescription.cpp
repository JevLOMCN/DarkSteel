// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticStruct @ 14df93c60

UScriptStruct * __cdecl FHairGroupsMeshesSourceDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairGroupsMeshesSourceDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairGroupsMeshesSourceDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription,
                         (UObject *)pUVar1,L"HairGroupsMeshesSourceDescription");
  }
  return Z_Registration_Info_UScriptStruct_FHairGroupsMeshesSourceDescription.OuterSingleton;
}

// FHairGroupsMeshesSourceDescription @ 14dfacb80

FHairGroupsMeshesSourceDescription * __thiscall
FHairGroupsMeshesSourceDescription::FHairGroupsMeshesSourceDescription
          (FHairGroupsMeshesSourceDescription *this)

{
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Textures).Layout = Layout0;
  (this->Textures).Textures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).Textures.ArrayNum = 0;
  (this->Textures).Textures.ArrayMax = 0;
  (this->Textures).DepthTexture_DEPRECATED.field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->Textures).CoverageTexture_DEPRECATED.field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->Textures).TangentTexture_DEPRECATED.field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->Textures).AttributeTexture_DEPRECATED.field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->Textures).AuxilaryDataTexture_DEPRECATED.field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->Textures).MaterialTexture_DEPRECATED.field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->Textures).bNeedToBeSaved = false;
  (this->ImportedMeshKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedMeshKey).Data.ArrayNum = 0;
  (this->ImportedMeshKey).Data.ArrayMax = 0;
  (this->ImportedMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->MaterialSlotName).ComparisonIndex = 0;
  (this->MaterialSlotName).Number = 0;
  this->GroupIndex = 0;
  this->LODIndex = -1;
  return this;
}

// operator== @ 14dfb1f10

bool __thiscall
FHairGroupsMeshesSourceDescription::operator==
          (FHairGroupsMeshesSourceDescription *this,FHairGroupsMeshesSourceDescription *param_1)

{
  if ((((this->GroupIndex == param_1->GroupIndex) && (this->LODIndex == param_1->LODIndex)) &&
      (this->MaterialSlotName == param_1->MaterialSlotName)) &&
     ((this->ImportedMesh).field0_0x0.DebugPtr == (param_1->ImportedMesh).field0_0x0.DebugPtr)) {
    return true;
  }
  return false;
}

// GetMeshKey @ 14dfc7a20

FString * __thiscall
FHairGroupsMeshesSourceDescription::GetMeshKey
          (FHairGroupsMeshesSourceDescription *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"INVALID_MESH");
  return __return_storage_ptr__;
}

// HasMeshChanged @ 14dfcb140

bool __thiscall
FHairGroupsMeshesSourceDescription::HasMeshChanged(FHairGroupsMeshesSourceDescription *this)

{
  return false;
}

// UpdateMeshKey @ 14dfdae60

void __thiscall
FHairGroupsMeshesSourceDescription::UpdateMeshKey(FHairGroupsMeshesSourceDescription *this)

{
  return;
}

