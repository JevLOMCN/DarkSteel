// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 7

// StaticStruct @ 14df93c20

UScriptStruct * __cdecl FHairGroupsCardsSourceDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairGroupsCardsSourceDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairGroupsCardsSourceDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription,
                         (UObject *)pUVar1,L"HairGroupsCardsSourceDescription");
  }
  return Z_Registration_Info_UScriptStruct_FHairGroupsCardsSourceDescription.OuterSingleton;
}

// FHairGroupsCardsSourceDescription @ 14dfaca00

FHairGroupsCardsSourceDescription * __thiscall
FHairGroupsCardsSourceDescription::FHairGroupsCardsSourceDescription
          (FHairGroupsCardsSourceDescription *this)

{
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->ProceduralMesh_DEPRECATED).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->ImportedMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
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
  (this->CardsInfo).NumCards = 0;
  (this->CardsInfo).NumCardVertices = 0;
  (this->ImportedMeshKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedMeshKey).Data.ArrayNum = 0;
  (this->ImportedMeshKey).Data.ArrayMax = 0;
  this->bInvertUV = false;
  this->GuideType = Generated;
  (this->MaterialSlotName).ComparisonIndex = 0;
  (this->MaterialSlotName).Number = 0;
  this->SourceType_DEPRECATED = Imported;
  this->GroupIndex = 0;
  this->LODIndex = -1;
  return this;
}

// operator== @ 14dfb1d00

bool __thiscall
FHairGroupsCardsSourceDescription::operator==
          (FHairGroupsCardsSourceDescription *this,FHairGroupsCardsSourceDescription *param_1)

{
  if ((((this->MaterialSlotName == param_1->MaterialSlotName) &&
       (this->GroupIndex == param_1->GroupIndex)) && (this->LODIndex == param_1->LODIndex)) &&
     ((this->ImportedMesh).field0_0x0.DebugPtr == (param_1->ImportedMesh).field0_0x0.DebugPtr)) {
    return true;
  }
  return false;
}

// GetMesh @ 14dfc79e0

UStaticMesh * __thiscall
FHairGroupsCardsSourceDescription::GetMesh(FHairGroupsCardsSourceDescription *this)

{
  return (UStaticMesh *)0x0;
}

// GetMeshKey @ 14dfc79f0

FString * __thiscall
FHairGroupsCardsSourceDescription::GetMeshKey
          (FHairGroupsCardsSourceDescription *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"INVALID_MESH");
  return __return_storage_ptr__;
}

// HasMeshChanged @ 14dfcb130

bool __thiscall
FHairGroupsCardsSourceDescription::HasMeshChanged(FHairGroupsCardsSourceDescription *this)

{
  return false;
}

// UpdateMeshKey @ 14dfdae50

void __thiscall
FHairGroupsCardsSourceDescription::UpdateMeshKey(FHairGroupsCardsSourceDescription *this)

{
  return;
}

