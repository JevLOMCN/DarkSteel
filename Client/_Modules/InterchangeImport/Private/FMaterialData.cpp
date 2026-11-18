// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// FMaterialData @ 14e6e01e0

FMaterialData * __thiscall
FObjData::FMaterialData::FMaterialData(FMaterialData *this,FMaterialData *param_1)

{
  float fVar1;
  
  this->IlluminationModel = param_1->IlluminationModel;
  *(undefined8 *)&(this->DiffuseColor).field0_0x0 =
       *(undefined8 *)&(param_1->DiffuseColor).field0_0x0;
  (this->DiffuseColor).field0_0x0._s_0.Z = (param_1->DiffuseColor).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->AmbientColor).field0_0x0 =
       *(undefined8 *)&(param_1->AmbientColor).field0_0x0;
  (this->AmbientColor).field0_0x0._s_0.Z = (param_1->AmbientColor).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->SpecularColor).field0_0x0 =
       *(undefined8 *)&(param_1->SpecularColor).field0_0x0;
  (this->SpecularColor).field0_0x0._s_0.Z = (param_1->SpecularColor).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->EmissiveColor).field0_0x0 =
       *(undefined8 *)&(param_1->EmissiveColor).field0_0x0;
  (this->EmissiveColor).field0_0x0._s_0.Z = (param_1->EmissiveColor).field0_0x0._s_0.Z;
  (this->DiffuseTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiffuseTexture).Path.Data.AllocatorInstance.Data =
       (param_1->DiffuseTexture).Path.Data.AllocatorInstance.Data;
  (param_1->DiffuseTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiffuseTexture).Path.Data.ArrayNum = (param_1->DiffuseTexture).Path.Data.ArrayNum;
  (this->DiffuseTexture).Path.Data.ArrayMax = (param_1->DiffuseTexture).Path.Data.ArrayMax;
  (param_1->DiffuseTexture).Path.Data.ArrayNum = 0;
  (param_1->DiffuseTexture).Path.Data.ArrayMax = 0;
  fVar1 = (param_1->DiffuseTexture).BumpMultiplier;
  (this->AmbientTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiffuseTexture).BumpMultiplier = fVar1;
  (this->AmbientTexture).Path.Data.AllocatorInstance.Data =
       (param_1->AmbientTexture).Path.Data.AllocatorInstance.Data;
  (param_1->AmbientTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AmbientTexture).Path.Data.ArrayNum = (param_1->AmbientTexture).Path.Data.ArrayNum;
  (this->AmbientTexture).Path.Data.ArrayMax = (param_1->AmbientTexture).Path.Data.ArrayMax;
  (param_1->AmbientTexture).Path.Data.ArrayNum = 0;
  (param_1->AmbientTexture).Path.Data.ArrayMax = 0;
  fVar1 = (param_1->AmbientTexture).BumpMultiplier;
  (this->SpecularTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AmbientTexture).BumpMultiplier = fVar1;
  (this->SpecularTexture).Path.Data.AllocatorInstance.Data =
       (param_1->SpecularTexture).Path.Data.AllocatorInstance.Data;
  (param_1->SpecularTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecularTexture).Path.Data.ArrayNum = (param_1->SpecularTexture).Path.Data.ArrayNum;
  (this->SpecularTexture).Path.Data.ArrayMax = (param_1->SpecularTexture).Path.Data.ArrayMax;
  (param_1->SpecularTexture).Path.Data.ArrayNum = 0;
  (param_1->SpecularTexture).Path.Data.ArrayMax = 0;
  fVar1 = (param_1->SpecularTexture).BumpMultiplier;
  (this->EmissiveTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecularTexture).BumpMultiplier = fVar1;
  (this->EmissiveTexture).Path.Data.AllocatorInstance.Data =
       (param_1->EmissiveTexture).Path.Data.AllocatorInstance.Data;
  (param_1->EmissiveTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmissiveTexture).Path.Data.ArrayNum = (param_1->EmissiveTexture).Path.Data.ArrayNum;
  (this->EmissiveTexture).Path.Data.ArrayMax = (param_1->EmissiveTexture).Path.Data.ArrayMax;
  (param_1->EmissiveTexture).Path.Data.ArrayNum = 0;
  (param_1->EmissiveTexture).Path.Data.ArrayMax = 0;
  fVar1 = (param_1->EmissiveTexture).BumpMultiplier;
  (this->OpacityTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmissiveTexture).BumpMultiplier = fVar1;
  (this->OpacityTexture).Path.Data.AllocatorInstance.Data =
       (param_1->OpacityTexture).Path.Data.AllocatorInstance.Data;
  (param_1->OpacityTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpacityTexture).Path.Data.ArrayNum = (param_1->OpacityTexture).Path.Data.ArrayNum;
  (this->OpacityTexture).Path.Data.ArrayMax = (param_1->OpacityTexture).Path.Data.ArrayMax;
  (param_1->OpacityTexture).Path.Data.ArrayNum = 0;
  (param_1->OpacityTexture).Path.Data.ArrayMax = 0;
  fVar1 = (param_1->OpacityTexture).BumpMultiplier;
  (this->TransparencyTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpacityTexture).BumpMultiplier = fVar1;
  (this->TransparencyTexture).Path.Data.AllocatorInstance.Data =
       (param_1->TransparencyTexture).Path.Data.AllocatorInstance.Data;
  (param_1->TransparencyTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransparencyTexture).Path.Data.ArrayNum = (param_1->TransparencyTexture).Path.Data.ArrayNum
  ;
  (this->TransparencyTexture).Path.Data.ArrayMax = (param_1->TransparencyTexture).Path.Data.ArrayMax
  ;
  (param_1->TransparencyTexture).Path.Data.ArrayNum = 0;
  (param_1->TransparencyTexture).Path.Data.ArrayMax = 0;
  (this->SpecularExponentTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransparencyTexture).BumpMultiplier = (param_1->TransparencyTexture).BumpMultiplier;
  (this->SpecularExponentTexture).Path.Data.AllocatorInstance.Data =
       (param_1->SpecularExponentTexture).Path.Data.AllocatorInstance.Data;
  (param_1->SpecularExponentTexture).Path.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpecularExponentTexture).Path.Data.ArrayNum =
       (param_1->SpecularExponentTexture).Path.Data.ArrayNum;
  (this->SpecularExponentTexture).Path.Data.ArrayMax =
       (param_1->SpecularExponentTexture).Path.Data.ArrayMax;
  (param_1->SpecularExponentTexture).Path.Data.ArrayNum = 0;
  (param_1->SpecularExponentTexture).Path.Data.ArrayMax = 0;
  (this->SpecularExponentTexture).BumpMultiplier = (param_1->SpecularExponentTexture).BumpMultiplier
  ;
  *(undefined8 *)&(this->TransmissionFilter).field0_0x0 =
       *(undefined8 *)&(param_1->TransmissionFilter).field0_0x0;
  (this->TransmissionFilter).field0_0x0._s_0.Z = (param_1->TransmissionFilter).field0_0x0._s_0.Z;
  this->IndexOfRefraction = param_1->IndexOfRefraction;
  this->Opacity = param_1->Opacity;
  this->Transparency = param_1->Transparency;
  this->SpecularExponent = param_1->SpecularExponent;
  this->Roughness = param_1->Roughness;
  (this->RoughnessTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RoughnessTexture).Path.Data.AllocatorInstance.Data =
       (param_1->RoughnessTexture).Path.Data.AllocatorInstance.Data;
  (param_1->RoughnessTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RoughnessTexture).Path.Data.ArrayNum = (param_1->RoughnessTexture).Path.Data.ArrayNum;
  (this->RoughnessTexture).Path.Data.ArrayMax = (param_1->RoughnessTexture).Path.Data.ArrayMax;
  (param_1->RoughnessTexture).Path.Data.ArrayNum = 0;
  (param_1->RoughnessTexture).Path.Data.ArrayMax = 0;
  (this->RoughnessTexture).BumpMultiplier = (param_1->RoughnessTexture).BumpMultiplier;
  this->Metallic = param_1->Metallic;
  (this->MetallicTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetallicTexture).Path.Data.AllocatorInstance.Data =
       (param_1->MetallicTexture).Path.Data.AllocatorInstance.Data;
  (param_1->MetallicTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetallicTexture).Path.Data.ArrayNum = (param_1->MetallicTexture).Path.Data.ArrayNum;
  (this->MetallicTexture).Path.Data.ArrayMax = (param_1->MetallicTexture).Path.Data.ArrayMax;
  (param_1->MetallicTexture).Path.Data.ArrayNum = 0;
  (param_1->MetallicTexture).Path.Data.ArrayMax = 0;
  fVar1 = (param_1->MetallicTexture).BumpMultiplier;
  (this->BumpmapTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetallicTexture).BumpMultiplier = fVar1;
  (this->BumpmapTexture).Path.Data.AllocatorInstance.Data =
       (param_1->BumpmapTexture).Path.Data.AllocatorInstance.Data;
  (param_1->BumpmapTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BumpmapTexture).Path.Data.ArrayNum = (param_1->BumpmapTexture).Path.Data.ArrayNum;
  (this->BumpmapTexture).Path.Data.ArrayMax = (param_1->BumpmapTexture).Path.Data.ArrayMax;
  (param_1->BumpmapTexture).Path.Data.ArrayNum = 0;
  (param_1->BumpmapTexture).Path.Data.ArrayMax = 0;
  (this->BumpmapTexture).BumpMultiplier = (param_1->BumpmapTexture).BumpMultiplier;
  (this->NormalmapTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalmapTexture).Path.Data.AllocatorInstance.Data =
       (param_1->NormalmapTexture).Path.Data.AllocatorInstance.Data;
  (param_1->NormalmapTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalmapTexture).Path.Data.ArrayNum = (param_1->NormalmapTexture).Path.Data.ArrayNum;
  (this->NormalmapTexture).Path.Data.ArrayMax = (param_1->NormalmapTexture).Path.Data.ArrayMax;
  (param_1->NormalmapTexture).Path.Data.ArrayNum = 0;
  (param_1->NormalmapTexture).Path.Data.ArrayMax = 0;
  (this->NormalmapTexture).BumpMultiplier = (param_1->NormalmapTexture).BumpMultiplier;
  this->ClearCoatThickness = param_1->ClearCoatThickness;
  this->ClearCoatRoughness = param_1->ClearCoatRoughness;
  this->Anisotropy = param_1->Anisotropy;
  return this;
}

// FMaterialData @ 14e6e0570

FMaterialData * __thiscall FObjData::FMaterialData::FMaterialData(FMaterialData *this)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  this->IlluminationModel = 2;
  uVar3 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  uVar1 = __xmm_80000000800000008000000080000000;
  (this->DiffuseColor).field0_0x0._s_0.X =
       (float)((uint)UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X ^
              __xmm_80000000800000008000000080000000);
  (this->DiffuseColor).field0_0x0._s_0.Y = (float)(uVar2 ^ uVar1);
  (this->DiffuseColor).field0_0x0._s_0.Z = (float)(uVar3 ^ uVar1);
  uVar3 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  (this->AmbientColor).field0_0x0._s_0.X =
       (float)((uint)UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X ^ uVar1);
  (this->AmbientColor).field0_0x0._s_0.Y = (float)(uVar2 ^ uVar1);
  (this->AmbientColor).field0_0x0._s_0.Z = (float)(uVar3 ^ uVar1);
  uVar3 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  (this->SpecularColor).field0_0x0._s_0.X =
       (float)((uint)UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X ^ uVar1);
  (this->SpecularColor).field0_0x0._s_0.Y = (float)(uVar2 ^ uVar1);
  (this->SpecularColor).field0_0x0._s_0.Z = (float)(uVar3 ^ uVar1);
  uVar3 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  (this->EmissiveColor).field0_0x0._s_0.X =
       (float)((uint)UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X ^ uVar1);
  (this->DiffuseTexture).Path.Data.ArrayNum = 0;
  (this->DiffuseTexture).Path.Data.ArrayMax = 0;
  (this->DiffuseTexture).BumpMultiplier = 1.0;
  (this->AmbientTexture).Path.Data.ArrayNum = 0;
  (this->AmbientTexture).Path.Data.ArrayMax = 0;
  (this->AmbientTexture).BumpMultiplier = 1.0;
  (this->SpecularTexture).Path.Data.ArrayNum = 0;
  (this->SpecularTexture).Path.Data.ArrayMax = 0;
  (this->SpecularTexture).BumpMultiplier = 1.0;
  (this->EmissiveTexture).Path.Data.ArrayNum = 0;
  (this->EmissiveTexture).Path.Data.ArrayMax = 0;
  (this->EmissiveTexture).BumpMultiplier = 1.0;
  (this->OpacityTexture).Path.Data.ArrayNum = 0;
  (this->OpacityTexture).Path.Data.ArrayMax = 0;
  (this->OpacityTexture).BumpMultiplier = 1.0;
  (this->TransparencyTexture).Path.Data.ArrayNum = 0;
  (this->TransparencyTexture).Path.Data.ArrayMax = 0;
  (this->TransparencyTexture).BumpMultiplier = 1.0;
  (this->SpecularExponentTexture).Path.Data.ArrayNum = 0;
  (this->SpecularExponentTexture).Path.Data.ArrayMax = 0;
  (this->SpecularExponentTexture).BumpMultiplier = 1.0;
  (this->DiffuseTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AmbientTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecularTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmissiveTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpacityTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransparencyTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecularExponentTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmissiveColor).field0_0x0._s_0.Y = (float)(uVar2 ^ uVar1);
  (this->EmissiveColor).field0_0x0._s_0.Z = (float)(uVar3 ^ uVar1);
  uVar3 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  (this->TransmissionFilter).field0_0x0._s_0.X =
       (float)((uint)UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X ^ uVar1);
  (this->TransmissionFilter).field0_0x0._s_0.Y = (float)(uVar2 ^ uVar1);
  (this->TransmissionFilter).field0_0x0._s_0.Z = (float)(uVar3 ^ uVar1);
  this->IndexOfRefraction = -1.0;
  this->Opacity = -1.0;
  this->Transparency = -1.0;
  this->SpecularExponent = -1.0;
  this->Roughness = -1.0;
  (this->RoughnessTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RoughnessTexture).Path.Data.ArrayNum = 0;
  (this->RoughnessTexture).Path.Data.ArrayMax = 0;
  (this->RoughnessTexture).BumpMultiplier = 1.0;
  this->Metallic = -1.0;
  (this->MetallicTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetallicTexture).Path.Data.ArrayNum = 0;
  (this->MetallicTexture).Path.Data.ArrayMax = 0;
  (this->MetallicTexture).BumpMultiplier = 1.0;
  (this->BumpmapTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BumpmapTexture).Path.Data.ArrayNum = 0;
  (this->BumpmapTexture).Path.Data.ArrayMax = 0;
  (this->BumpmapTexture).BumpMultiplier = 1.0;
  (this->NormalmapTexture).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalmapTexture).Path.Data.ArrayNum = 0;
  (this->NormalmapTexture).Path.Data.ArrayMax = 0;
  (this->NormalmapTexture).BumpMultiplier = 1.0;
  return this;
}

// ~FMaterialData @ 14e6e13a0

void __thiscall FObjData::FMaterialData::~FMaterialData(FMaterialData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NormalmapTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BumpmapTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MetallicTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RoughnessTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpecularExponentTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TransparencyTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OpacityTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmissiveTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpecularTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AmbientTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DiffuseTexture).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

