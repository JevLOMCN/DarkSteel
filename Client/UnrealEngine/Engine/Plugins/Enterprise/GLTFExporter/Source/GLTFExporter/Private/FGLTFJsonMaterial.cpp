// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// FGLTFJsonMaterial @ 14e5d16f0

FGLTFJsonMaterial * __thiscall
FGLTFJsonMaterial::FGLTFJsonMaterial(FGLTFJsonMaterial *this,int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(int *)&this->_padding_ = param_1;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FGLTFJsonMaterial__6B_;
  this->ShadingModel = Default;
  (this->PBRMetallicRoughness)._padding_ = (longlong)&___7FGLTFJsonPBRMetallicRoughness__6B_;
  uVar2 = FGLTFJsonColor4::White._16_8_;
  uVar1 = FGLTFJsonColor4::White._8_8_;
  *(undefined ***)&(this->PBRMetallicRoughness).BaseColorFactor = &___7FGLTFJsonColor4__6B_;
  *(undefined8 *)&(this->PBRMetallicRoughness).BaseColorFactor.field_0x8 = uVar1;
  *(undefined8 *)&(this->PBRMetallicRoughness).BaseColorFactor.field_0x10 = uVar2;
  (this->PBRMetallicRoughness).BaseColorTexture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_
  ;
  (this->PBRMetallicRoughness).BaseColorTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->PBRMetallicRoughness).BaseColorTexture.TexCoord = 0;
  (this->PBRMetallicRoughness).BaseColorTexture.Transform._padding_ =
       (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->PBRMetallicRoughness).BaseColorTexture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->PBRMetallicRoughness).BaseColorTexture.Transform.Offset =
       &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->PBRMetallicRoughness).BaseColorTexture.Transform.Scale.field_0x8 =
       FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->PBRMetallicRoughness).BaseColorTexture.Transform.Scale =
       &___7FGLTFJsonVector2__6B_;
  (this->PBRMetallicRoughness).BaseColorTexture.Transform.Rotation = 0.0;
  (this->PBRMetallicRoughness).MetallicFactor = 1.0;
  (this->PBRMetallicRoughness).RoughnessFactor = 1.0;
  (this->PBRMetallicRoughness).MetallicRoughnessTexture._padding_ =
       (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->PBRMetallicRoughness).MetallicRoughnessTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->PBRMetallicRoughness).MetallicRoughnessTexture.TexCoord = 0;
  (this->PBRMetallicRoughness).MetallicRoughnessTexture.Transform._padding_ =
       (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->PBRMetallicRoughness).MetallicRoughnessTexture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->PBRMetallicRoughness).MetallicRoughnessTexture.Transform.Offset =
       &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->PBRMetallicRoughness).MetallicRoughnessTexture.Transform.Scale.field_0x8 =
       FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->PBRMetallicRoughness).MetallicRoughnessTexture.Transform.Scale =
       &___7FGLTFJsonVector2__6B_;
  (this->PBRMetallicRoughness).MetallicRoughnessTexture.Transform.Rotation = 0.0;
  (this->PBRSpecularGlossiness)._padding_ = (longlong)&___7FGLTFJsonSpecularGlossinessExtension__6B_
  ;
  uVar2 = FGLTFJsonColor4::White._16_8_;
  uVar1 = FGLTFJsonColor4::White._8_8_;
  *(undefined ***)&(this->PBRSpecularGlossiness).DiffuseFactor = &___7FGLTFJsonColor4__6B_;
  *(undefined8 *)&(this->PBRSpecularGlossiness).DiffuseFactor.field_0x8 = uVar1;
  *(undefined8 *)&(this->PBRSpecularGlossiness).DiffuseFactor.field_0x10 = uVar2;
  (this->PBRSpecularGlossiness).DiffuseTexture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->PBRSpecularGlossiness).DiffuseTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->PBRSpecularGlossiness).DiffuseTexture.TexCoord = 0;
  (this->PBRSpecularGlossiness).DiffuseTexture.Transform._padding_ =
       (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->PBRSpecularGlossiness).DiffuseTexture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->PBRSpecularGlossiness).DiffuseTexture.Transform.Offset =
       &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->PBRSpecularGlossiness).DiffuseTexture.Transform.Scale.field_0x8 =
       FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->PBRSpecularGlossiness).DiffuseTexture.Transform.Scale =
       &___7FGLTFJsonVector2__6B_;
  (this->PBRSpecularGlossiness).DiffuseTexture.Transform.Rotation = 0.0;
  *(undefined8 *)&(this->PBRSpecularGlossiness).SpecularFactor.field_0x8 =
       FGLTFJsonColor3::White._8_8_;
  *(undefined4 *)&(this->PBRSpecularGlossiness).SpecularFactor.field_0x10 =
       FGLTFJsonColor3::White._16_4_;
  *(undefined ***)&(this->PBRSpecularGlossiness).SpecularFactor = &___7FGLTFJsonColor3__6B_;
  (this->PBRSpecularGlossiness).GlossinessFactor = 1.0;
  (this->PBRSpecularGlossiness).SpecularGlossinessTexture._padding_ =
       (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->PBRSpecularGlossiness).SpecularGlossinessTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->PBRSpecularGlossiness).SpecularGlossinessTexture.TexCoord = 0;
  (this->PBRSpecularGlossiness).SpecularGlossinessTexture.Transform._padding_ =
       (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->PBRSpecularGlossiness).SpecularGlossinessTexture.Transform.Offset.field_0x8
       = FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->PBRSpecularGlossiness).SpecularGlossinessTexture.Transform.Offset =
       &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->PBRSpecularGlossiness).SpecularGlossinessTexture.Transform.Scale.field_0x8
       = FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->PBRSpecularGlossiness).SpecularGlossinessTexture.Transform.Scale =
       &___7FGLTFJsonVector2__6B_;
  (this->PBRSpecularGlossiness).SpecularGlossinessTexture.Transform.Rotation = 0.0;
  (this->NormalTexture)._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->NormalTexture)._padding_ = (longlong)&___7FGLTFJsonTextureTransform__6B_;
  (this->NormalTexture)._padding_ = 0;
  *(undefined4 *)&(this->NormalTexture)._padding_ = 0;
  (this->NormalTexture)._padding_ = FGLTFJsonVector2::Zero._8_8_;
  (this->NormalTexture)._padding_ = (longlong)&___7FGLTFJsonVector2__6B_;
  (this->NormalTexture)._padding_ = FGLTFJsonVector2::One._8_8_;
  (this->NormalTexture)._padding_ = (longlong)&___7FGLTFJsonVector2__6B_;
  *(undefined4 *)&(this->NormalTexture)._padding_ = 0;
  (this->NormalTexture)._padding_ = (longlong)&___7FGLTFJsonNormalTextureInfo__6B_;
  (this->NormalTexture).Scale = 1.0;
  (this->OcclusionTexture)._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->OcclusionTexture)._padding_ = (longlong)&___7FGLTFJsonTextureTransform__6B_;
  (this->OcclusionTexture)._padding_ = 0;
  *(undefined4 *)&(this->OcclusionTexture)._padding_ = 0;
  (this->OcclusionTexture)._padding_ = FGLTFJsonVector2::Zero._8_8_;
  (this->OcclusionTexture)._padding_ = (longlong)&___7FGLTFJsonVector2__6B_;
  (this->OcclusionTexture)._padding_ = FGLTFJsonVector2::One._8_8_;
  (this->OcclusionTexture)._padding_ = (longlong)&___7FGLTFJsonVector2__6B_;
  *(undefined4 *)&(this->OcclusionTexture)._padding_ = 0;
  (this->OcclusionTexture)._padding_ = (longlong)&___7FGLTFJsonOcclusionTextureInfo__6B_;
  (this->OcclusionTexture).Strength = 1.0;
  (this->EmissiveTexture)._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->EmissiveTexture).Index = (FGLTFJsonTexture *)0x0;
  (this->EmissiveTexture).TexCoord = 0;
  (this->EmissiveTexture).Transform._padding_ = (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->EmissiveTexture).Transform.Offset.field_0x8 = FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->EmissiveTexture).Transform.Offset = &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->EmissiveTexture).Transform.Scale.field_0x8 = FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->EmissiveTexture).Transform.Scale = &___7FGLTFJsonVector2__6B_;
  (this->EmissiveTexture).Transform.Rotation = 0.0;
  *(undefined8 *)&(this->EmissiveFactor).field_0x8 = FGLTFJsonColor3::Black._8_8_;
  *(undefined4 *)&(this->EmissiveFactor).field_0x10 = FGLTFJsonColor3::Black._16_4_;
  *(undefined ***)&this->EmissiveFactor = &___7FGLTFJsonColor3__6B_;
  (this->ClearCoat)._padding_ = (longlong)&___7FGLTFJsonClearCoatExtension__6B_;
  this->EmissiveStrength = 1.0;
  this->AlphaMode = Opaque;
  this->AlphaCutoff = 0.5;
  this->DoubleSided = false;
  (this->ClearCoat).ClearCoatTexture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->ClearCoat).ClearCoatTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->ClearCoat).ClearCoatTexture.TexCoord = 0;
  (this->ClearCoat).ClearCoatFactor = 0.0;
  (this->ClearCoat).ClearCoatTexture.Transform._padding_ =
       (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->ClearCoat).ClearCoatTexture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->ClearCoat).ClearCoatTexture.Transform.Offset = &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->ClearCoat).ClearCoatTexture.Transform.Scale.field_0x8 =
       FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->ClearCoat).ClearCoatTexture.Transform.Scale = &___7FGLTFJsonVector2__6B_;
  (this->ClearCoat).ClearCoatTexture.Transform.Rotation = 0.0;
  (this->ClearCoat).ClearCoatRoughnessFactor = 0.0;
  (this->ClearCoat).ClearCoatRoughnessTexture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->ClearCoat).ClearCoatRoughnessTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->ClearCoat).ClearCoatRoughnessTexture.TexCoord = 0;
  (this->ClearCoat).ClearCoatRoughnessTexture.Transform._padding_ =
       (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->ClearCoat).ClearCoatRoughnessTexture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->ClearCoat).ClearCoatRoughnessTexture.Transform.Offset =
       &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->ClearCoat).ClearCoatRoughnessTexture.Transform.Scale.field_0x8 =
       FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->ClearCoat).ClearCoatRoughnessTexture.Transform.Scale =
       &___7FGLTFJsonVector2__6B_;
  (this->ClearCoat).ClearCoatRoughnessTexture.Transform.Rotation = 0.0;
  (this->ClearCoat).ClearCoatNormalTexture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->ClearCoat).ClearCoatNormalTexture._padding_ = (longlong)&___7FGLTFJsonTextureTransform__6B_
  ;
  (this->ClearCoat).ClearCoatNormalTexture._padding_ = 0;
  *(undefined4 *)&(this->ClearCoat).ClearCoatNormalTexture._padding_ = 0;
  (this->ClearCoat).ClearCoatNormalTexture._padding_ = FGLTFJsonVector2::Zero._8_8_;
  (this->ClearCoat).ClearCoatNormalTexture._padding_ = (longlong)&___7FGLTFJsonVector2__6B_;
  (this->ClearCoat).ClearCoatNormalTexture._padding_ = FGLTFJsonVector2::One._8_8_;
  (this->ClearCoat).ClearCoatNormalTexture._padding_ = (longlong)&___7FGLTFJsonVector2__6B_;
  *(undefined4 *)&(this->ClearCoat).ClearCoatNormalTexture._padding_ = 0;
  (this->ClearCoat).ClearCoatNormalTexture._padding_ =
       (longlong)&___7FGLTFJsonNormalTextureInfo__6B_;
  (this->ClearCoat).ClearCoatNormalTexture.Scale = 1.0;
  (this->Specular)._padding_ = (longlong)&___7FGLTFJsonSpecularExtension__6B_;
  (this->Specular).Factor = 0.5;
  (this->Specular).Texture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->Specular).Texture.Index = (FGLTFJsonTexture *)0x0;
  (this->Specular).Texture.TexCoord = 0;
  (this->Specular).Texture.Transform._padding_ = (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->Specular).Texture.Transform.Offset.field_0x8 = FGLTFJsonVector2::Zero._8_8_
  ;
  *(undefined ***)&(this->Specular).Texture.Transform.Offset = &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->Specular).Texture.Transform.Scale.field_0x8 = FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->Specular).Texture.Transform.Scale = &___7FGLTFJsonVector2__6B_;
  (this->Specular).Texture.Transform.Rotation = 0.0;
  (this->IOR)._padding_ = (longlong)&___7FGLTFJsonIORExtension__6B_;
  (this->Sheen)._padding_ = (longlong)&___7FGLTFJsonSheenExtension__6B_;
  (this->IOR).Value = 1.5;
  *(undefined8 *)&(this->Sheen).ColorFactor.field_0x8 = FGLTFJsonColor3::Black._8_8_;
  *(undefined4 *)&(this->Sheen).ColorFactor.field_0x10 = FGLTFJsonColor3::Black._16_4_;
  *(undefined ***)&(this->Sheen).ColorFactor = &___7FGLTFJsonColor3__6B_;
  (this->Sheen).ColorTexture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->Sheen).ColorTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->Sheen).ColorTexture.TexCoord = 0;
  (this->Sheen).ColorTexture.Transform._padding_ = (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->Sheen).ColorTexture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->Sheen).ColorTexture.Transform.Offset = &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->Sheen).ColorTexture.Transform.Scale.field_0x8 = FGLTFJsonVector2::One._8_8_
  ;
  *(undefined ***)&(this->Sheen).ColorTexture.Transform.Scale = &___7FGLTFJsonVector2__6B_;
  (this->Sheen).ColorTexture.Transform.Rotation = 0.0;
  (this->Sheen).RoughnessFactor = 0.0;
  (this->Sheen).RoughnessTexture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->Sheen).RoughnessTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->Sheen).RoughnessTexture.TexCoord = 0;
  (this->Sheen).RoughnessTexture.Transform._padding_ = (longlong)&___7FGLTFJsonTextureTransform__6B_
  ;
  *(undefined8 *)&(this->Sheen).RoughnessTexture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->Sheen).RoughnessTexture.Transform.Offset = &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->Sheen).RoughnessTexture.Transform.Scale.field_0x8 =
       FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->Sheen).RoughnessTexture.Transform.Scale = &___7FGLTFJsonVector2__6B_;
  (this->Sheen).RoughnessTexture.Transform.Rotation = 0.0;
  (this->Transmission)._padding_ = (longlong)&___7FGLTFJsonTransmissionExtension__6B_;
  (this->Transmission).Factor = 0.0;
  (this->Transmission).Texture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->Transmission).Texture.Index = (FGLTFJsonTexture *)0x0;
  (this->Transmission).Texture.TexCoord = 0;
  (this->Transmission).Texture.Transform._padding_ = (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->Transmission).Texture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->Transmission).Texture.Transform.Offset = &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->Transmission).Texture.Transform.Scale.field_0x8 =
       FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->Transmission).Texture.Transform.Scale = &___7FGLTFJsonVector2__6B_;
  (this->Transmission).Texture.Transform.Rotation = 0.0;
  (this->Iridescence).IridescenceTexture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->Iridescence).IridescenceTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->Iridescence).IridescenceTexture.TexCoord = 0;
  (this->Iridescence).IridescenceTexture.Transform._padding_ =
       (longlong)&___7FGLTFJsonTextureTransform__6B_;
  (this->Iridescence)._padding_ = (longlong)&___7FGLTFJsonIridescenceExtension__6B_;
  (this->Iridescence).IridescenceFactor = 0.0;
  *(undefined8 *)&(this->Iridescence).IridescenceTexture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->Iridescence).IridescenceTexture.Transform.Offset =
       &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->Iridescence).IridescenceTexture.Transform.Scale.field_0x8 =
       FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->Iridescence).IridescenceTexture.Transform.Scale =
       &___7FGLTFJsonVector2__6B_;
  (this->Iridescence).IridescenceTexture.Transform.Rotation = 0.0;
  (this->Iridescence).IridescenceIOR = 1.3;
  (this->Iridescence).IridescenceThicknessMinimum = 100.0;
  (this->Iridescence).IridescenceThicknessMaximum = 400.0;
  (this->Iridescence).IridescenceThicknessTexture._padding_ =
       (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->Iridescence).IridescenceThicknessTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->Iridescence).IridescenceThicknessTexture.TexCoord = 0;
  (this->Iridescence).IridescenceThicknessTexture.Transform._padding_ =
       (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->Iridescence).IridescenceThicknessTexture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->Iridescence).IridescenceThicknessTexture.Transform.Offset =
       &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->Iridescence).IridescenceThicknessTexture.Transform.Scale.field_0x8 =
       FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->Iridescence).IridescenceThicknessTexture.Transform.Scale =
       &___7FGLTFJsonVector2__6B_;
  (this->Iridescence).IridescenceThicknessTexture.Transform.Rotation = 0.0;
  (this->Anisotropy)._padding_ = (longlong)&___7FGLTFJsonAnisotropyExtension__6B_;
  (this->Anisotropy).AnisotropyStrength = 0.0;
  (this->Anisotropy).AnisotropyRotation = 0.0;
  (this->Anisotropy).AnisotropyTexture.Index = (FGLTFJsonTexture *)0x0;
  (this->Anisotropy).AnisotropyTexture.TexCoord = 0;
  (this->Anisotropy).AnisotropyTexture._padding_ = (longlong)&___7FGLTFJsonTextureInfo__6B_;
  (this->Anisotropy).AnisotropyTexture.Transform._padding_ =
       (longlong)&___7FGLTFJsonTextureTransform__6B_;
  *(undefined8 *)&(this->Anisotropy).AnisotropyTexture.Transform.Offset.field_0x8 =
       FGLTFJsonVector2::Zero._8_8_;
  *(undefined ***)&(this->Anisotropy).AnisotropyTexture.Transform.Offset =
       &___7FGLTFJsonVector2__6B_;
  *(undefined8 *)&(this->Anisotropy).AnisotropyTexture.Transform.Scale.field_0x8 =
       FGLTFJsonVector2::One._8_8_;
  *(undefined ***)&(this->Anisotropy).AnisotropyTexture.Transform.Scale = &___7FGLTFJsonVector2__6B_
  ;
  (this->Anisotropy).AnisotropyTexture.Transform.Rotation = 0.0;
  return this;
}

// WriteObject @ 14e61bc50

/* WARNING: Type propagation algorithm not settling */

void __thiscall FGLTFJsonMaterial::WriteObject(FGLTFJsonMaterial *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  float fVar2;
  EGLTFJsonAlphaMode EVar3;
  EGLTFJsonShadingModel EVar4;
  bool bVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  FString *pFVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  float fVar14;
  bool local_res8 [8];
  bool local_res10 [8];
  bool local_res18 [8];
  bool local_res20 [8];
  bool local_208 [8];
  EGLTFJsonShadingModel local_200;
  bool local_1fc [12];
  EGLTFJsonExtension local_1f0;
  EGLTFJsonExtension local_1ec;
  EGLTFJsonExtension local_1e8;
  EGLTFJsonExtension local_1e4;
  EGLTFJsonExtension local_1e0;
  EGLTFJsonExtension local_1dc;
  EGLTFJsonExtension local_1d8;
  EGLTFJsonExtension local_1d4;
  EGLTFJsonExtension local_1d0;
  EGLTFJsonExtension local_1cc;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [4];
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_1c8,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_1c8);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->ShadingModel != None) && (this->ShadingModel != SpecularGlossiness)) {
    ::FString::FString(&local_1b8,L"pbrMetallicRoughness");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_1b8);
    (**(code **)((this->PBRMetallicRoughness)._padding_ + 8))(&this->PBRMetallicRoughness,param_1);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->NormalTexture)._padding_ != 0) {
    ::FString::FString(&local_1a8,L"normalTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_1a8);
    (**(code **)((this->NormalTexture)._padding_ + 8))(&this->NormalTexture,param_1);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->OcclusionTexture)._padding_ != 0) {
    ::FString::FString(&local_198,L"occlusionTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_198);
    (**(code **)((this->OcclusionTexture)._padding_ + 8))(&this->OcclusionTexture,param_1);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  if ((this->EmissiveTexture).Index != (FGLTFJsonTexture *)0x0) {
    ::FString::FString(&local_188,L"emissiveTexture");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_188);
    (**(code **)((this->EmissiveTexture)._padding_ + 8))(&this->EmissiveTexture,param_1);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar12 = 0;
  uVar10 = uVar12;
  do {
    if (param_1->DefaultTolerance <
        (float)((uint)(*(float *)(&(this->EmissiveFactor).field_0x8 + uVar10) -
                      *(float *)(&FGLTFJsonColor3::Black.field_0x8 + uVar10)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      ::FString::FString(&local_178,L"emissiveFactor");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_178);
      (**(code **)(*(longlong *)&this->EmissiveFactor + 8))(&this->EmissiveFactor,param_1);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      break;
    }
    uVar10 = uVar10 + 4;
  } while (uVar10 < 0xc);
  fVar2 = __real_3f000000;
  EVar3 = this->AlphaMode;
  if (EVar3 != Opaque) {
    ::FString::FString(&local_168,L"alphaMode");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_168);
    if (EVar3 == Opaque) {
      pwVar13 = L"OPAQUE";
    }
    else if (EVar3 == Mask) {
      pwVar13 = L"MASK";
    }
    else if (EVar3 == Blend) {
      pwVar13 = L"BLEND";
    }
    else {
      pwVar13 = L"";
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                         ,0x27,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pcVar6 = *(code **)(param_1->_padding_ + 0x18);
    pFVar11 = ::FString::FString(local_78,pwVar13);
    (*pcVar6)(param_1,pFVar11);
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if ((this->AlphaMode == Mask) &&
       (fVar1 = this->AlphaCutoff, fVar14 = (float)((uint)(fVar1 - fVar2) & uVar7),
       param_1->DefaultTolerance <= fVar14 && fVar14 != param_1->DefaultTolerance)) {
      ::FString::FString(&local_158,L"alphaCutoff");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_158);
      (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar8 = this->DoubleSided;
  if (bVar8 != false) {
    ::FString::FString(&local_148,L"doubleSided");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_148);
    (**(code **)(param_1->_padding_ + 0x38))(param_1,bVar8);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  fVar1 = __real_322bcc77;
  EVar4 = this->ShadingModel;
  fVar14 = (float)((uint)(this->EmissiveStrength - __real_3f800000) & uVar7);
  bVar8 = fVar14 != param_1->DefaultTolerance;
  bVar5 = param_1->DefaultTolerance <= fVar14;
  if ((EVar4 != Unlit) && (EVar4 != ClearCoat)) {
    if (EVar4 == Transmission) {
      if (((float)((uint)(this->Transmission).Factor & uVar7) <= __real_322bcc77) &&
         ((this->Transmission).Texture.Index == (FGLTFJsonTexture *)0x0)) {
LAB_14e61c039:
        if ((!bVar5 || !bVar8) &&
           ((((((fVar14 = (this->Specular).Factor, (float)((uint)(fVar14 - fVar2) & uVar7) <= fVar1
                || ((float)((uint)(fVar14 - __real_3f800000) & uVar7) <= fVar1)) &&
               ((this->Specular).Texture.Index == (FGLTFJsonTexture *)0x0)) &&
              (((float)((uint)((this->IOR).Value - __real_3fc00000) & uVar7) <= fVar1 &&
               (bVar9 = FGLTFJsonSheenExtension::HasValue(&this->Sheen), !bVar9)))) &&
             (bVar9 = FGLTFJsonIridescenceExtension::HasValue(&this->Iridescence), !bVar9)) &&
            ((((float)((uint)(this->Anisotropy).AnisotropyStrength & uVar7) <= fVar1 &&
              ((float)((uint)(this->Anisotropy).AnisotropyRotation & uVar7) <= fVar1)) &&
             ((this->Anisotropy).AnisotropyTexture.Index == (FGLTFJsonTexture *)0x0)))))) {
          return;
        }
      }
    }
    else if ((EVar4 != SpecularGlossiness) ||
            (bVar9 = FGLTFJsonSpecularGlossinessExtension::HasValue(&this->PBRSpecularGlossiness),
            !bVar9)) goto LAB_14e61c039;
  }
  ::FString::FString(&local_138,L"extensions");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_138);
  (**(code **)(param_1->_padding_ + 0x48))(param_1);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (((this->ShadingModel != Unlit) && (this->ShadingModel != SpecularGlossiness)) &&
     (((fVar14 = (this->Specular).Factor, fVar1 < (float)((uint)(fVar14 - fVar2) & uVar7) &&
       (fVar1 < (float)((uint)(fVar14 - __real_3f800000) & uVar7))) ||
      ((this->Specular).Texture.Index != (FGLTFJsonTexture *)0x0)))) {
    local_res8[0] = true;
    local_res8[1] = false;
    local_res8[2] = false;
    local_res8[3] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,&local_1f0,local_res8);
    ::FString::FString(&local_128,L"KHR_materials_specular");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_128);
    (**(code **)((this->Specular)._padding_ + 8))(&this->Specular,param_1);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if (((this->ShadingModel != Unlit) && (this->ShadingModel != SpecularGlossiness)) &&
     (fVar1 < (float)((uint)((this->IOR).Value - __real_3fc00000) & uVar7))) {
    local_res10[0] = true;
    local_res10[1] = false;
    local_res10[2] = false;
    local_res10[3] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,&local_1ec,local_res10);
    ::FString::FString(&local_118,L"KHR_materials_ior");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_118);
    (**(code **)((this->IOR)._padding_ + 8))(&this->IOR,param_1);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if ((this->ShadingModel != Unlit) && (this->ShadingModel != SpecularGlossiness)) {
    do {
      if (__real_38d1b717 <
          (float)((uint)(*(float *)(&(this->Sheen).ColorFactor.field_0x8 + uVar12) -
                        *(float *)(&FGLTFJsonColor3::Black.field_0x8 + uVar12)) & uVar7))
      goto LAB_14e61c29d;
      uVar12 = uVar12 + 4;
    } while (uVar12 < 0xc);
    if ((((this->Sheen).ColorTexture.Index != (FGLTFJsonTexture *)0x0) ||
        (fVar1 < (float)((uint)(this->Sheen).RoughnessFactor & uVar7))) ||
       ((this->Sheen).RoughnessTexture.Index != (FGLTFJsonTexture *)0x0)) {
LAB_14e61c29d:
      local_res18[0] = true;
      local_res18[1] = false;
      local_res18[2] = false;
      local_res18[3] = false;
      TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>
      ::Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,&local_1e8,local_res18);
      ::FString::FString(&local_108,L"KHR_materials_sheen");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_108);
      (**(code **)((this->Sheen)._padding_ + 8))(&this->Sheen,param_1);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
  }
  if (((this->ShadingModel != Unlit) && (this->ShadingModel != SpecularGlossiness)) &&
     (((fVar1 < (float)((uint)(this->Iridescence).IridescenceFactor & uVar7) ||
       ((((this->Iridescence).IridescenceTexture.Index != (FGLTFJsonTexture *)0x0 ||
         (fVar1 < (float)((uint)((this->Iridescence).IridescenceIOR - __real_3fa66666) & uVar7))) ||
        (fVar1 < (float)((uint)((this->Iridescence).IridescenceThicknessMinimum - __real_42c80000) &
                        uVar7))))) ||
      ((fVar1 < (float)((uint)((this->Iridescence).IridescenceThicknessMaximum - __real_43c80000) &
                       uVar7) ||
       ((this->Iridescence).IridescenceThicknessTexture.Index != (FGLTFJsonTexture *)0x0)))))) {
    local_res20[0] = true;
    local_res20[1] = false;
    local_res20[2] = false;
    local_res20[3] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,&local_1e4,local_res20);
    ::FString::FString(&local_f8,L"KHR_materials_iridescence");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_f8);
    (**(code **)((this->Iridescence)._padding_ + 8))(&this->Iridescence,param_1);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((this->ShadingModel != Unlit) && (this->ShadingModel != SpecularGlossiness)) &&
     ((fVar1 < (float)((uint)(this->Anisotropy).AnisotropyStrength & uVar7) ||
      ((fVar1 < (float)((uint)(this->Anisotropy).AnisotropyRotation & uVar7) ||
       ((this->Anisotropy).AnisotropyTexture.Index != (FGLTFJsonTexture *)0x0)))))) {
    local_208[0] = true;
    local_208[1] = false;
    local_208[2] = false;
    local_208[3] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,&local_1e0,local_208);
    ::FString::FString(&local_e8,L"KHR_materials_anisotropy");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_e8);
    (**(code **)((this->Anisotropy)._padding_ + 8))(&this->Anisotropy,param_1);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  EVar4 = this->ShadingModel;
  if (EVar4 == Unlit) {
    local_208[4] = true;
    local_208[5] = false;
    local_208[6] = false;
    local_208[7] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,&local_1dc,local_208 + 4);
    ::FString::FString(&local_d8,L"KHR_materials_unlit");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_d8);
    (**(code **)(param_1->_padding_ + 0x48))(param_1);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    (**(code **)(param_1->_padding_ + 0x50))(param_1);
    goto LAB_14e61c630;
  }
  if (EVar4 == ClearCoat) {
    local_200 = EVar4;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,&local_1d8,(bool *)&local_200);
    ::FString::FString(&local_c8,L"KHR_materials_clearcoat");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_c8);
    (**(code **)((this->ClearCoat)._padding_ + 8))(&this->ClearCoat,param_1);
  }
  else if (EVar4 == Transmission) {
    if (((float)((uint)(this->Transmission).Factor & uVar7) <= fVar1) &&
       ((this->Transmission).Texture.Index == (FGLTFJsonTexture *)0x0)) goto LAB_14e61c630;
    local_1fc[0] = true;
    local_1fc[1] = false;
    local_1fc[2] = false;
    local_1fc[3] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,&local_1d4,local_1fc);
    ::FString::FString(&local_b8,L"KHR_materials_transmission");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_b8);
    (**(code **)((this->Transmission)._padding_ + 8))(&this->Transmission,param_1);
    local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
  }
  else {
    if ((EVar4 != SpecularGlossiness) ||
       (bVar9 = FGLTFJsonSpecularGlossinessExtension::HasValue(&this->PBRSpecularGlossiness), !bVar9
       )) goto LAB_14e61c630;
    local_1fc[4] = true;
    local_1fc[5] = false;
    local_1fc[6] = false;
    local_1fc[7] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,&local_1d0,local_1fc + 4);
    ::FString::FString(&local_a8,L"KHR_materials_pbrSpecularGlossiness");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_a8);
    (**(code **)((this->PBRSpecularGlossiness)._padding_ + 8))(&this->PBRSpecularGlossiness,param_1)
    ;
    local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_14e61c630:
  if (bVar5 && bVar8) {
    local_1fc[8] = true;
    local_1fc[9] = false;
    local_1fc[10] = false;
    local_1fc[0xb] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,&local_1cc,local_1fc + 8);
    ::FString::FString(&local_98,L"KHR_materials_emissive_strength");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_98);
    (**(code **)(param_1->_padding_ + 0x48))(param_1);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    fVar2 = this->EmissiveStrength;
    ::FString::FString(&local_88,L"emissiveStrength");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_88);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar2);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    (**(code **)(param_1->_padding_ + 0x50))(param_1);
  }
  (**(code **)(param_1->_padding_ + 0x50))(param_1);
  return;
}

