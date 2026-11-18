// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 2

// FMaterial @ 14e629f60

/* WARNING: Type propagation algorithm not settling */

FMaterial * __thiscall GLTF::FMaterial::FMaterial(FMaterial *this,FString *param_1)

{
  FThickness *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  ::FString::FString(&this->Name,param_1);
  (this->BaseColor).TextureIndex = -1;
  (this->BaseColor).TextureTransform.Offset[0] = 0.0;
  (this->BaseColor).TextureTransform.Offset[1] = 0.0;
  (this->BaseColor).TextureTransform.Rotation = 0.0;
  (this->MetallicRoughness).Map.TexCoord = '\0';
  (this->MetallicRoughness).Map.bHasTextureTransform = false;
  (this->MetallicRoughness).Map.TextureTransform.Offset[0] = 0.0;
  (this->MetallicRoughness).Map.TextureTransform.Offset[1] = 0.0;
  (this->MetallicRoughness).Map.TextureTransform.Rotation = 0.0;
  (this->SpecularGlossiness).Map.TexCoord = '\0';
  (this->SpecularGlossiness).Map.bHasTextureTransform = false;
  (this->SpecularGlossiness).Map.TextureTransform.Offset[0] = 0.0;
  (this->SpecularGlossiness).Map.TextureTransform.Offset[1] = 0.0;
  (this->SpecularGlossiness).Map.TextureTransform.Rotation = 0.0;
  (this->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.X = 1.0;
  (this->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.Y = 1.0;
  (this->SpecularGlossiness).SpecularFactor.field0_0x0._s_0.Z = 1.0;
  (this->ClearCoat).ClearCoatFactor = 0.0;
  (this->ClearCoat).ClearCoatMap.TexCoord = '\0';
  (this->ClearCoat).ClearCoatMap.bHasTextureTransform = false;
  (this->ClearCoat).ClearCoatMap.TextureTransform.Offset[0] = 0.0;
  (this->ClearCoat).ClearCoatMap.TextureTransform.Offset[1] = 0.0;
  (this->ClearCoat).ClearCoatMap.TextureTransform.Rotation = 0.0;
  (this->ClearCoat).Roughness = 0.0;
  (this->ClearCoat).RoughnessMap.TexCoord = '\0';
  (this->ClearCoat).RoughnessMap.bHasTextureTransform = false;
  (this->ClearCoat).RoughnessMap.TextureTransform.Offset[0] = 0.0;
  (this->ClearCoat).RoughnessMap.TextureTransform.Offset[1] = 0.0;
  (this->ClearCoat).RoughnessMap.TextureTransform.Rotation = 0.0;
  (this->ClearCoat).NormalMap.TexCoord = '\0';
  (this->ClearCoat).NormalMap.bHasTextureTransform = false;
  (this->ClearCoat).NormalMap.TextureTransform.Offset[0] = 0.0;
  (this->ClearCoat).NormalMap.TextureTransform.Offset[1] = 0.0;
  (this->ClearCoat).NormalMap.TextureTransform.Rotation = 0.0;
  (this->Transmission).TransmissionFactor = 0.0;
  (this->Transmission).TransmissionMap.TexCoord = '\0';
  (this->Transmission).TransmissionMap.bHasTextureTransform = false;
  (this->Transmission).TransmissionMap.TextureTransform.Offset[0] = 0.0;
  (this->Transmission).TransmissionMap.TextureTransform.Offset[1] = 0.0;
  (this->Transmission).TransmissionMap.TextureTransform.Rotation = 0.0;
  (this->BaseColor).TexCoord = '\0';
  (this->BaseColor).bHasTextureTransform = false;
  (this->BaseColor).TextureTransform.Scale[1] = 1.0;
  (this->BaseColor).TextureTransform.Scale[0] = 1.0;
  (this->BaseColorFactor).field0_0x0._s_0.X = 1.0;
  (this->BaseColorFactor).field0_0x0._s_0.Y = 1.0;
  (this->BaseColorFactor).field0_0x0._s_0.Z = 1.0;
  *(undefined8 *)((longlong)&(this->BaseColorFactor).field0_0x0 + 0xc) = 0x3f800000;
  (this->MetallicRoughness).Map.TextureIndex = -1;
  (this->MetallicRoughness).Map.TextureTransform.Scale[1] = 1.0;
  (this->MetallicRoughness).Map.TextureTransform.Scale[0] = 1.0;
  (this->MetallicRoughness).MetallicFactor = 1.0;
  (this->MetallicRoughness).RoughnessFactor = 1.0;
  (this->SpecularGlossiness).Map.TextureIndex = -1;
  (this->SpecularGlossiness).Map.TextureTransform.Scale[1] = 1.0;
  (this->SpecularGlossiness).Map.TextureTransform.Scale[0] = 1.0;
  (this->SpecularGlossiness).GlossinessFactor = 1.0;
  (this->ClearCoat).ClearCoatMap.TextureIndex = -1;
  (this->ClearCoat).ClearCoatMap.TextureTransform.Scale[1] = 1.0;
  (this->ClearCoat).ClearCoatMap.TextureTransform.Scale[0] = 1.0;
  (this->ClearCoat).RoughnessMap.TextureIndex = -1;
  (this->ClearCoat).RoughnessMap.TextureTransform.Scale[1] = 1.0;
  (this->ClearCoat).RoughnessMap.TextureTransform.Scale[0] = 1.0;
  (this->ClearCoat).NormalMapUVScale = 1.0;
  (this->ClearCoat).NormalMap.TextureIndex = -1;
  (this->ClearCoat).NormalMap.TextureTransform.Scale[1] = 1.0;
  (this->ClearCoat).NormalMap.TextureTransform.Scale[0] = 1.0;
  (this->Transmission).TransmissionMap.TextureIndex = -1;
  (this->Transmission).TransmissionMap.TextureTransform.Scale[1] = 1.0;
  (this->Transmission).TransmissionMap.TextureTransform.Scale[0] = 1.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Sheen).SheenColorFactor.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Sheen).SheenColorFactor.field0_0x0._s_0.Y = (double)uVar2;
  (this->Sheen).SheenColorFactor.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Sheen).SheenColorMap.TextureIndex = -1;
  (this->Sheen).SheenColorMap.TexCoord = '\0';
  (this->Sheen).SheenColorMap.bHasTextureTransform = false;
  (this->Sheen).SheenColorMap.TextureTransform.Offset[0] = 0.0;
  (this->Sheen).SheenColorMap.TextureTransform.Offset[1] = 0.0;
  (this->Sheen).SheenColorMap.TextureTransform.Scale[1] = 1.0;
  (this->Sheen).SheenColorMap.TextureTransform.Scale[0] = 1.0;
  (this->Sheen).SheenColorMap.TextureTransform.Rotation = 0.0;
  (this->Sheen).SheenRoughnessFactor = 0.0;
  (this->Sheen).SheenRoughnessMap.TextureIndex = -1;
  (this->Sheen).SheenRoughnessMap.TexCoord = '\0';
  (this->Sheen).SheenRoughnessMap.bHasTextureTransform = false;
  (this->Sheen).SheenRoughnessMap.TextureTransform.Offset[0] = 0.0;
  (this->Sheen).SheenRoughnessMap.TextureTransform.Offset[1] = 0.0;
  (this->Sheen).SheenRoughnessMap.TextureTransform.Scale[1] = 1.0;
  (this->Sheen).SheenRoughnessMap.TextureTransform.Scale[0] = 1.0;
  (this->Sheen).SheenRoughnessMap.TextureTransform.Rotation = 0.0;
  (this->Specular).SpecularFactor = 1.0;
  (this->Specular).SpecularMap.TextureIndex = -1;
  (this->Specular).SpecularMap.TexCoord = '\0';
  (this->Specular).SpecularMap.bHasTextureTransform = false;
  (this->Specular).SpecularMap.TextureTransform.Offset[0] = 0.0;
  (this->Specular).SpecularMap.TextureTransform.Offset[1] = 0.0;
  (this->Specular).SpecularMap.TextureTransform.Scale[1] = 1.0;
  (this->Specular).SpecularMap.TextureTransform.Scale[0] = 1.0;
  (this->Specular).SpecularMap.TextureTransform.Rotation = 0.0;
  (this->Specular).SpecularColorFactor.field0_0x0._s_0.X = 1.0;
  (this->Specular).SpecularColorFactor.field0_0x0._s_0.Y = 1.0;
  (this->Specular).SpecularColorFactor.field0_0x0._s_0.Z = 1.0;
  (this->Specular).SpecularColorMap.TextureIndex = -1;
  (this->Specular).SpecularColorMap.TexCoord = '\0';
  (this->Specular).SpecularColorMap.bHasTextureTransform = false;
  (this->Specular).SpecularColorMap.TextureTransform.Offset[0] = 0.0;
  (this->Specular).SpecularColorMap.TextureTransform.Offset[1] = 0.0;
  (this->Specular).SpecularColorMap.TextureTransform.Scale[1] = 1.0;
  (this->Specular).SpecularColorMap.TextureTransform.Scale[0] = 1.0;
  (this->Specular).SpecularColorMap.TextureTransform.Rotation = 0.0;
  this->IOR = 1.0;
  this->EmissiveStrength = 1.0;
  (this->Normal).TextureIndex = -1;
  (this->Normal).TexCoord = '\0';
  (this->Normal).bHasTextureTransform = false;
  (this->Normal).TextureTransform.Offset[0] = 0.0;
  (this->Normal).TextureTransform.Offset[1] = 0.0;
  (this->Normal).TextureTransform.Scale[1] = 1.0;
  (this->Normal).TextureTransform.Scale[0] = 1.0;
  (this->Normal).TextureTransform.Rotation = 0.0;
  (this->Occlusion).TextureIndex = -1;
  (this->Occlusion).TexCoord = '\0';
  (this->Occlusion).bHasTextureTransform = false;
  (this->Occlusion).TextureTransform.Offset[0] = 0.0;
  (this->Occlusion).TextureTransform.Offset[1] = 0.0;
  (this->Occlusion).TextureTransform.Scale[1] = 1.0;
  (this->Occlusion).TextureTransform.Scale[0] = 1.0;
  (this->Occlusion).TextureTransform.Rotation = 0.0;
  (this->Emissive).TextureIndex = -1;
  (this->Emissive).TexCoord = '\0';
  (this->Emissive).bHasTextureTransform = false;
  (this->Emissive).TextureTransform.Offset[0] = 0.0;
  (this->Emissive).TextureTransform.Offset[1] = 0.0;
  (this->Emissive).TextureTransform.Scale[1] = 1.0;
  (this->Emissive).TextureTransform.Scale[0] = 1.0;
  (this->Emissive).TextureTransform.Rotation = 0.0;
  this->NormalScale = 1.0;
  this->OcclusionStrength = 1.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  fVar4 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsDoubleSided = false;
  this->AlphaMode = Opaque;
  this->AlphaCutoff = 0.5;
  (this->Packing).Flags = 0;
  (this->Packing).Map.TextureIndex = -1;
  (this->Packing).Map.TexCoord = '\0';
  (this->Packing).Map.bHasTextureTransform = false;
  (this->Packing).Map.TextureTransform.Offset[0] = 0.0;
  (this->Packing).Map.TextureTransform.Offset[1] = 0.0;
  (this->Packing).Map.TextureTransform.Scale[1] = 1.0;
  (this->Packing).Map.TextureTransform.Scale[0] = 1.0;
  (this->Packing).Map.TextureTransform.Rotation = 0.0;
  (this->Packing).NormalMap.TextureIndex = -1;
  (this->Packing).NormalMap.TexCoord = '\0';
  (this->Packing).NormalMap.bHasTextureTransform = false;
  (this->Packing).NormalMap.TextureTransform.Offset[0] = 0.0;
  (this->Packing).NormalMap.TextureTransform.Offset[1] = 0.0;
  (this->Packing).NormalMap.TextureTransform.Scale[1] = 1.0;
  (this->Packing).NormalMap.TextureTransform.Scale[0] = 1.0;
  (this->Packing).NormalMap.TextureTransform.Rotation = 0.0;
  (this->EmissiveFactor).field0_0x0._s_0.Y = (float)(double)uVar3;
  (this->EmissiveFactor).field0_0x0._s_0.X = (float)(double)uVar2;
  (this->EmissiveFactor).field0_0x0._s_0.Z = fVar4;
  this->bIsUnlitShadingModel = false;
  this->bHasClearCoat = false;
  this->bHasSheen = false;
  this->bHasTransmission = false;
  this->bHasIOR = false;
  this->bHasSpecular = false;
  this->bHasEmissiveStrength = false;
  (this->Iridescence).Factor = 0.0;
  (this->Iridescence).Texture.TextureIndex = -1;
  (this->Iridescence).Texture.TexCoord = '\0';
  (this->Iridescence).Texture.bHasTextureTransform = false;
  (this->Iridescence).Texture.TextureTransform.Offset[0] = 0.0;
  (this->Iridescence).Texture.TextureTransform.Offset[1] = 0.0;
  (this->Iridescence).Texture.TextureTransform.Scale[1] = 1.0;
  (this->Iridescence).Texture.TextureTransform.Scale[0] = 1.0;
  (this->Iridescence).Texture.TextureTransform.Rotation = 0.0;
  (this->Iridescence).IOR = 1.3;
  (this->Iridescence).Thickness.Minimum = 100.0;
  (this->Iridescence).Thickness.Maximum = 400.0;
  (this->Iridescence).Thickness.Texture.TextureIndex = -1;
  (this->Iridescence).Thickness.Texture.TexCoord = '\0';
  (this->Iridescence).Thickness.Texture.bHasTextureTransform = false;
  pFVar1 = &(this->Iridescence).Thickness;
  (pFVar1->Texture).TextureTransform.Offset[0] = 0.0;
  (pFVar1->Texture).TextureTransform.Offset[1] = 0.0;
  (this->Iridescence).Thickness.Texture.TextureTransform.Scale[1] = 1.0;
  (this->Iridescence).Thickness.Texture.TextureTransform.Scale[0] = 1.0;
  (this->Iridescence).Thickness.Texture.TextureTransform.Rotation = 0.0;
  (this->Iridescence).bHasIridescence = false;
  (this->Anisotropy).Texture.TextureIndex = -1;
  (this->Anisotropy).Texture.TexCoord = '\0';
  (this->Anisotropy).Texture.bHasTextureTransform = false;
  (this->Anisotropy).Texture.TextureTransform.Offset[0] = 0.0;
  (this->Anisotropy).Texture.TextureTransform.Offset[1] = 0.0;
  (this->Anisotropy).Strength = 0.0;
  (this->Anisotropy).Rotation = 0.0;
  (this->Anisotropy).bHasAnisotropy = false;
  *(undefined8 *)&this->Extras = 0;
  *(undefined8 *)&(this->Extras).field_0x8 = 0;
  *(undefined8 *)&(this->Extras).field_0x20 = 0;
  (this->Anisotropy).Texture.TextureTransform.Scale[1] = 1.0;
  (this->Anisotropy).Texture.TextureTransform.Scale[0] = 1.0;
  (this->Anisotropy).Texture.TextureTransform.Rotation = 0.0;
  *(undefined4 *)&(this->Extras).field_0x28 = 0;
  *(undefined4 *)&(this->Extras).field_0x2c = 0x80;
  *(undefined4 *)&(this->Extras).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Extras).field_0x34 = 0;
  *(undefined8 *)&(this->Extras).field_0x40 = 0;
  *(undefined4 *)&(this->Extras).field_0x48 = 0;
  (this->UniqueId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueId).Data.ArrayNum = 0;
  (this->UniqueId).Data.ArrayMax = 0;
  return this;
}

// GetHash @ 14e63b8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMD5Hash * __thiscall GLTF::FMaterial::GetHash(FMaterial *this,FMD5Hash *__return_storage_ptr__)

{
  undefined1 auStack_128 [32];
  undefined1 local_108;
  uchar local_107;
  undefined1 local_106;
  uchar local_105 [5];
  char local_100;
  uchar local_ff [23];
  FMD5 local_e8;
  FMD5 local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  FMD5::FMD5(&local_88);
  local_108 = (undefined1)this->ShadingModel;
  local_106 = (undefined1)this->AlphaMode;
  local_107 = this->bIsDoubleSided;
  local_105[0] = this->bIsUnlitShadingModel;
  FMD5::FMD5(&local_e8);
  FMD5::Update(&local_e8,(uchar *)&this->BaseColor,4);
  FMD5::Update(&local_e8,&(this->BaseColor).TexCoord,1);
  local_100 = 0;
  FMD5::Final(&local_e8,local_ff);
  local_100 = '\x01';
  FMD5::~FMD5(&local_e8);
  if (local_100 != '\0') {
    FMD5::Update(&local_88,local_ff,0x10);
  }
  FMD5::Update(&local_88,(uchar *)&this->BaseColorFactor,0x10);
  FMD5::Update(&local_88,&local_108,1);
  FMD5::FMD5(&local_e8);
  FMD5::Update(&local_e8,(uchar *)&this->MetallicRoughness,4);
  FMD5::Update(&local_e8,&(this->MetallicRoughness).Map.TexCoord,1);
  local_100 = 0;
  FMD5::Final(&local_e8,local_ff);
  local_100 = '\x01';
  FMD5::~FMD5(&local_e8);
  if (local_100 != '\0') {
    FMD5::Update(&local_88,local_ff,0x10);
  }
  FMD5::Update(&local_88,(uchar *)&(this->MetallicRoughness).MetallicFactor,4);
  FMD5::Update(&local_88,(uchar *)&(this->MetallicRoughness).RoughnessFactor,4);
  FMD5::FMD5(&local_e8);
  FMD5::Update(&local_e8,(uchar *)&this->SpecularGlossiness,4);
  FMD5::Update(&local_e8,&(this->SpecularGlossiness).Map.TexCoord,1);
  local_100 = 0;
  FMD5::Final(&local_e8,local_ff);
  local_100 = '\x01';
  FMD5::~FMD5(&local_e8);
  if (local_100 != '\0') {
    FMD5::Update(&local_88,local_ff,0x10);
  }
  FMD5::Update(&local_88,(uchar *)&(this->SpecularGlossiness).GlossinessFactor,4);
  FMD5::Update(&local_88,(uchar *)&(this->SpecularGlossiness).SpecularFactor,0x18);
  FMD5::FMD5(&local_e8);
  FMD5::Update(&local_e8,(uchar *)&this->Normal,4);
  FMD5::Update(&local_e8,&(this->Normal).TexCoord,1);
  local_100 = 0;
  FMD5::Final(&local_e8,local_ff);
  local_100 = '\x01';
  FMD5::~FMD5(&local_e8);
  if (local_100 != '\0') {
    FMD5::Update(&local_88,local_ff,0x10);
  }
  FMD5::Update(&local_88,(uchar *)&this->NormalScale,4);
  FMD5::FMD5(&local_e8);
  FMD5::Update(&local_e8,(uchar *)&this->Occlusion,4);
  FMD5::Update(&local_e8,&(this->Occlusion).TexCoord,1);
  local_100 = 0;
  FMD5::Final(&local_e8,local_ff);
  local_100 = '\x01';
  FMD5::~FMD5(&local_e8);
  if (local_100 != '\0') {
    FMD5::Update(&local_88,local_ff,0x10);
  }
  FMD5::Update(&local_88,(uchar *)&this->OcclusionStrength,4);
  FMD5::FMD5(&local_e8);
  FMD5::Update(&local_e8,(uchar *)&this->Emissive,4);
  FMD5::Update(&local_e8,&(this->Emissive).TexCoord,1);
  local_100 = 0;
  FMD5::Final(&local_e8,local_ff);
  local_100 = '\x01';
  FMD5::~FMD5(&local_e8);
  if (local_100 != '\0') {
    FMD5::Update(&local_88,local_ff,0x10);
  }
  FMD5::Update(&local_88,(uchar *)&this->EmissiveFactor,0xc);
  FMD5::Update(&local_88,&local_107,1);
  FMD5::Update(&local_88,&local_106,1);
  FMD5::Update(&local_88,(uchar *)&this->AlphaCutoff,4);
  FMD5::Update(&local_88,(uchar *)&this->Packing,4);
  FMD5::FMD5(&local_e8);
  FMD5::Update(&local_e8,(uchar *)&(this->Packing).Map,4);
  FMD5::Update(&local_e8,&(this->Packing).Map.TexCoord,1);
  local_100 = 0;
  FMD5::Final(&local_e8,local_ff);
  local_100 = '\x01';
  FMD5::~FMD5(&local_e8);
  if (local_100 != '\0') {
    FMD5::Update(&local_88,local_ff,0x10);
  }
  FMD5::FMD5(&local_e8);
  FMD5::Update(&local_e8,(uchar *)&(this->Packing).NormalMap,4);
  FMD5::Update(&local_e8,&(this->Packing).NormalMap.TexCoord,1);
  local_100 = 0;
  FMD5::Final(&local_e8,local_ff);
  local_100 = '\x01';
  FMD5::~FMD5(&local_e8);
  if (local_100 != '\0') {
    FMD5::Update(&local_88,local_ff,0x10);
  }
  FMD5::Update(&local_88,local_105,1);
  __return_storage_ptr__->bIsValid = false;
  FMD5::Final(&local_88,__return_storage_ptr__->Bytes);
  __return_storage_ptr__->bIsValid = true;
  FMD5::~FMD5(&local_88);
  return __return_storage_ptr__;
}

