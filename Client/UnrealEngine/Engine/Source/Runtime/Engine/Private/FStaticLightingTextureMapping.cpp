// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FStaticLightingTextureMapping @ 147ea6930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticLightingTextureMapping * __thiscall
FStaticLightingTextureMapping::FStaticLightingTextureMapping
          (FStaticLightingTextureMapping *this,FStaticLightingMesh *param_1,UObject *param_2,
          int param_3,int param_4,int param_5,bool param_6)

{
  int iVar1;
  
  *(undefined ***)this = &FStaticLightingMapping::_vftable__for__FStaticLightingMapping__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &FStaticLightingMapping::_vftable__for__FRefCountedObject__;
  *(uint *)&this->field_0x20 = *(uint *)&this->field_0x20 & 0xfffffffc;
  *(undefined ***)this = &_vftable__for__FStaticLightingMapping__;
  *(FStaticLightingMesh **)&this->field_0x10 = param_1;
  *(UObject **)&this->field_0x18 = param_2;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__FRefCountedObject__;
  iVar1 = AdjustTextureMappingSize(param_3);
  this->SizeX = iVar1;
  iVar1 = AdjustTextureMappingSize(param_4);
  this->SizeY = iVar1;
  this->LightmapTextureCoordinateIndex = param_5;
  this->bBilinearFilter = param_6;
  return this;
}

// GetDescription @ 147ebf540

FString * __thiscall
FStaticLightingTextureMapping::GetDescription
          (FStaticLightingTextureMapping *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"TextureMapping");
  return __return_storage_ptr__;
}

// GetTexelCount @ 147ec6ca0

int __thiscall FStaticLightingTextureMapping::GetTexelCount(FStaticLightingTextureMapping *this)

{
  return this->SizeY * this->SizeX;
}

// GetTextureMapping @ 147ec6cf0

FStaticLightingTextureMapping * __thiscall
FStaticLightingTextureMapping::GetTextureMapping(FStaticLightingTextureMapping *this)

{
  return this;
}

// IsTextureMapping @ 147ecdfa0

bool __thiscall FStaticLightingTextureMapping::IsTextureMapping(FStaticLightingTextureMapping *this)

{
  return true;
}

// IsValidMapping @ 147ece060

bool __thiscall FStaticLightingTextureMapping::IsValidMapping(FStaticLightingTextureMapping *this)

{
  return true;
}

