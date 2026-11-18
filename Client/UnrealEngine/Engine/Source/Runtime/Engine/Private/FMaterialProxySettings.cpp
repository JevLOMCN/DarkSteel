// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 147e8c8c0

UScriptStruct * __cdecl FMaterialProxySettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialProxySettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialProxySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialProxySettings,(UObject *)pUVar1,
                         L"MaterialProxySettings");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialProxySettings.OuterSingleton;
}

// FMaterialProxySettings @ 147ea6070

FMaterialProxySettings * __thiscall
FMaterialProxySettings::FMaterialProxySettings(FMaterialProxySettings *this)

{
  undefined1 *puVar1;
  
  this->bOpacityMap = '\0';
  this->bAmbientOcclusionMap = '\0';
  this->bOpacityMaskMap = '\0';
  this->MeshMinDrawDistance = 10000.0;
  (this->TextureSizingType).Value = '\0';
  (this->TextureSize).field0_0x0._s_0.X = 0x400;
  (this->TextureSize).field0_0x0._s_0.Y = 0x400;
  this->TargetTexelDensityPerMeter = 5.0;
  this->MeshMaxScreenSizePercent = 0.5;
  this->GutterSpace = 4.0;
  this->MetallicConstant = 0.0;
  this->RoughnessConstant = 0.5;
  this->AnisotropyConstant = 0.0;
  this->SpecularConstant = 0.5;
  this->OpacityConstant = 1.0;
  this->OpacityMaskConstant = 1.0;
  this->AmbientOcclusionConstant = 1.0;
  this->MaterialMergeType = '\0';
  this->BlendMode = '\0';
  puVar1 = &this->field_0x42;
  this->bAllowTwoSidedMaterial = '\x01';
  this->bEmissiveMap = '\0';
  this->bSpecularMap = '\0';
  this->bAnisotropyMap = '\0';
  this->bRoughnessMap = '\0';
  this->bMetallicMap = '\0';
  this->bTangentMap = '\0';
  this->bNormalMap = '\x01';
  (this->DiffuseTextureSize).field0_0x0._s_0.X = 0x400;
  (this->DiffuseTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->NormalTextureSize).field0_0x0._s_0.X = 0x400;
  (this->NormalTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->TangentTextureSize).field0_0x0._s_0.X = 0x400;
  (this->TangentTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->MetallicTextureSize).field0_0x0._s_0.X = 0x400;
  (this->MetallicTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->RoughnessTextureSize).field0_0x0._s_0.X = 0x400;
  (this->RoughnessTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->AnisotropyTextureSize).field0_0x0._s_0.X = 0x400;
  (this->AnisotropyTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->SpecularTextureSize).field0_0x0._s_0.X = 0x400;
  (this->SpecularTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->EmissiveTextureSize).field0_0x0._s_0.X = 0x400;
  (this->EmissiveTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->OpacityTextureSize).field0_0x0._s_0.X = 0x400;
  (this->OpacityTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->OpacityMaskTextureSize).field0_0x0._s_0.X = 0x400;
  (this->OpacityMaskTextureSize).field0_0x0._s_0.Y = 0x400;
  (this->AmbientOcclusionTextureSize).field0_0x0._s_0.X = 0x400;
  (this->AmbientOcclusionTextureSize).field0_0x0._s_0.Y = 0x400;
  return this;
}

// operator== @ 147eaa2c0

bool __thiscall
FMaterialProxySettings::operator==(FMaterialProxySettings *this,FMaterialProxySettings *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (((((((this->TextureSize).field0_0x0._s_0.X == (param_1->TextureSize).field0_0x0._s_0.X) &&
         ((this->TextureSize).field0_0x0._s_0.Y == (param_1->TextureSize).field0_0x0._s_0.Y)) &&
        ((this->TextureSizingType).Value == (param_1->TextureSizingType).Value)) &&
       (((param_1->TargetTexelDensityPerMeter == this->TargetTexelDensityPerMeter &&
         (param_1->MeshMaxScreenSizePercent == this->MeshMaxScreenSizePercent)) &&
        ((param_1->MeshMinDrawDistance == this->MeshMinDrawDistance &&
         ((param_1->GutterSpace == this->GutterSpace &&
          (param_1->MetallicConstant == this->MetallicConstant)))))))) &&
      ((param_1->RoughnessConstant == this->RoughnessConstant &&
       (((param_1->AnisotropyConstant == this->AnisotropyConstant &&
         (param_1->SpecularConstant == this->SpecularConstant)) &&
        (param_1->OpacityConstant == this->OpacityConstant)))))) &&
     (((param_1->OpacityMaskConstant == this->OpacityMaskConstant &&
       (param_1->AmbientOcclusionConstant == this->AmbientOcclusionConstant)) &&
      (((this->MaterialMergeType).Value == (param_1->MaterialMergeType).Value &&
       ((this->BlendMode).Value == (param_1->BlendMode).Value)))))) {
    uVar1 = this->field_0x42;
    uVar2 = param_1->field_0x42;
    if ((((((this->bAllowTwoSidedMaterial ^ param_1->bAllowTwoSidedMaterial) & 1) == 0) &&
         (((uVar2 ^ uVar1) & 2) == 0)) && (((uVar2 ^ uVar1) & 4) == 0)) &&
       ((((((uVar2 ^ uVar1) & 8) == 0 && (((uVar2 ^ uVar1) & 0x10) == 0)) &&
         (((uVar2 ^ uVar1) & 0x20) == 0)) &&
        ((((uVar2 ^ uVar1) & 0x40) == 0 && (-1 < (char)(uVar2 ^ uVar1))))))) {
      uVar1 = this->field_0x43;
      uVar2 = param_1->field_0x43;
      if ((((((((this->bOpacityMap ^ param_1->bOpacityMap) & 1) == 0) &&
             ((((uVar2 ^ uVar1) & 2) == 0 && (((uVar2 ^ uVar1) & 4) == 0)))) &&
            ((this->DiffuseTextureSize).field0_0x0._s_0.X ==
             (param_1->DiffuseTextureSize).field0_0x0._s_0.X)) &&
           (((((this->DiffuseTextureSize).field0_0x0._s_0.Y ==
               (param_1->DiffuseTextureSize).field0_0x0._s_0.Y &&
              ((this->NormalTextureSize).field0_0x0._s_0.X ==
               (param_1->NormalTextureSize).field0_0x0._s_0.X)) &&
             ((this->NormalTextureSize).field0_0x0._s_0.Y ==
              (param_1->NormalTextureSize).field0_0x0._s_0.Y)) &&
            (((this->TangentTextureSize).field0_0x0._s_0.X ==
              (param_1->TangentTextureSize).field0_0x0._s_0.X &&
             ((this->TangentTextureSize).field0_0x0._s_0.Y ==
              (param_1->TangentTextureSize).field0_0x0._s_0.Y)))))) &&
          (((this->MetallicTextureSize).field0_0x0._s_0.X ==
            (param_1->MetallicTextureSize).field0_0x0._s_0.X &&
           (((this->MetallicTextureSize).field0_0x0._s_0.Y ==
             (param_1->MetallicTextureSize).field0_0x0._s_0.Y &&
            ((this->RoughnessTextureSize).field0_0x0._s_0.X ==
             (param_1->RoughnessTextureSize).field0_0x0._s_0.X)))))) &&
         (((this->RoughnessTextureSize).field0_0x0._s_0.Y ==
           (param_1->RoughnessTextureSize).field0_0x0._s_0.Y &&
          (((((((this->AnisotropyTextureSize).field0_0x0._s_0.X ==
                (param_1->AnisotropyTextureSize).field0_0x0._s_0.X &&
               ((this->AnisotropyTextureSize).field0_0x0._s_0.Y ==
                (param_1->AnisotropyTextureSize).field0_0x0._s_0.Y)) &&
              ((this->SpecularTextureSize).field0_0x0._s_0.X ==
               (param_1->SpecularTextureSize).field0_0x0._s_0.X)) &&
             (((this->SpecularTextureSize).field0_0x0._s_0.Y ==
               (param_1->SpecularTextureSize).field0_0x0._s_0.Y &&
              ((this->EmissiveTextureSize).field0_0x0._s_0.X ==
               (param_1->EmissiveTextureSize).field0_0x0._s_0.X)))) &&
            (((this->EmissiveTextureSize).field0_0x0._s_0.Y ==
              (param_1->EmissiveTextureSize).field0_0x0._s_0.Y &&
             (((this->OpacityTextureSize).field0_0x0._s_0.X ==
               (param_1->OpacityTextureSize).field0_0x0._s_0.X &&
              ((this->OpacityTextureSize).field0_0x0._s_0.Y ==
               (param_1->OpacityTextureSize).field0_0x0._s_0.Y)))))) &&
           (((this->OpacityMaskTextureSize).field0_0x0._s_0.X ==
             (param_1->OpacityMaskTextureSize).field0_0x0._s_0.X &&
            ((((this->OpacityMaskTextureSize).field0_0x0._s_0.Y ==
               (param_1->OpacityMaskTextureSize).field0_0x0._s_0.Y &&
              ((this->AmbientOcclusionTextureSize).field0_0x0._s_0.X ==
               (param_1->AmbientOcclusionTextureSize).field0_0x0._s_0.X)) &&
             ((this->AmbientOcclusionTextureSize).field0_0x0._s_0.Y ==
              (param_1->AmbientOcclusionTextureSize).field0_0x0._s_0.Y)))))))))) {
        return true;
      }
    }
  }
  return false;
}

// operator!= @ 147eaa570

bool __thiscall
FMaterialProxySettings::operator!=(FMaterialProxySettings *this,FMaterialProxySettings *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// GetMaxTextureSize @ 147ec1b90

/* WARNING: Enum "Type": Some values do not have unique names */

TIntPoint<int> __thiscall FMaterialProxySettings::GetMaxTextureSize(FMaterialProxySettings *this)

{
  undefined1 *puVar1;
  uchar uVar2;
  undefined1 uVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  TIntPoint<int>_u_0 in_RDX;
  
  uVar2 = (this->TextureSizingType).Value;
  *(undefined4 *)in_RDX = 1;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  switch(uVar2) {
  case '\0':
  case '\x01':
    TVar4 = (this->TextureSize).field0_0x0._s_0;
    iVar11 = TVar4.X;
    if (iVar11 < 1) {
      iVar11 = 1;
    }
    iVar13 = TVar4.Y;
    if (iVar13 < 1) {
      iVar13 = 1;
    }
    *(ulonglong *)in_RDX = CONCAT44(iVar13,iVar11);
    return (TIntPoint<int>)in_RDX;
  case '\x02':
    TVar4 = (this->DiffuseTextureSize).field0_0x0._s_0;
    iVar11 = TVar4.X;
    if (iVar11 < 1) {
      iVar11 = 1;
    }
    iVar13 = TVar4.Y;
    if (iVar13 < 1) {
      iVar13 = 1;
    }
    *(ulonglong *)in_RDX = CONCAT44(iVar13,iVar11);
    iVar14 = iVar11;
    iVar12 = iVar13;
    if (this->bNormalMap != '\0') {
      TVar4 = (this->NormalTextureSize).field0_0x0._s_0;
      iVar14 = TVar4.X;
      if (iVar14 < iVar11) {
        iVar14 = iVar11;
      }
      iVar12 = TVar4.Y;
      if (iVar12 < iVar13) {
        iVar12 = iVar13;
      }
      *(ulonglong *)in_RDX = CONCAT44(iVar12,iVar14);
    }
    iVar11 = iVar14;
    iVar13 = iVar12;
    if (this->bTangentMap != '\0') {
      TVar4 = (this->TangentTextureSize).field0_0x0._s_0;
      iVar11 = TVar4.X;
      if (iVar11 < iVar14) {
        iVar11 = iVar14;
      }
      iVar13 = TVar4.Y;
      if (iVar13 < iVar12) {
        iVar13 = iVar12;
      }
      *(ulonglong *)in_RDX = CONCAT44(iVar13,iVar11);
    }
    iVar14 = iVar11;
    iVar12 = iVar13;
    if (this->bMetallicMap != '\0') {
      TVar4 = (this->MetallicTextureSize).field0_0x0._s_0;
      iVar14 = TVar4.X;
      if (iVar14 < iVar11) {
        iVar14 = iVar11;
      }
      iVar12 = TVar4.Y;
      if (iVar12 < iVar13) {
        iVar12 = iVar13;
      }
      *(ulonglong *)in_RDX = CONCAT44(iVar12,iVar14);
    }
    iVar11 = iVar14;
    iVar13 = iVar12;
    if (this->bRoughnessMap != '\0') {
      TVar4 = (this->RoughnessTextureSize).field0_0x0._s_0;
      iVar11 = TVar4.X;
      if (iVar11 < iVar14) {
        iVar11 = iVar14;
      }
      iVar13 = TVar4.Y;
      if (iVar13 < iVar12) {
        iVar13 = iVar12;
      }
      *(ulonglong *)in_RDX = CONCAT44(iVar13,iVar11);
    }
    iVar14 = iVar11;
    iVar12 = iVar13;
    if (this->bAnisotropyMap != '\0') {
      TVar4 = (this->AnisotropyTextureSize).field0_0x0._s_0;
      iVar14 = TVar4.X;
      if (iVar14 < iVar11) {
        iVar14 = iVar11;
      }
      iVar12 = TVar4.Y;
      if (iVar12 < iVar13) {
        iVar12 = iVar13;
      }
      *(ulonglong *)in_RDX = CONCAT44(iVar12,iVar14);
    }
    iVar11 = iVar14;
    iVar13 = iVar12;
    if (this->bSpecularMap != '\0') {
      TVar4 = (this->SpecularTextureSize).field0_0x0._s_0;
      iVar11 = TVar4.X;
      if (iVar11 < iVar14) {
        iVar11 = iVar14;
      }
      iVar13 = TVar4.Y;
      if (iVar13 < iVar12) {
        iVar13 = iVar12;
      }
      *(ulonglong *)in_RDX = CONCAT44(iVar13,iVar11);
    }
    iVar14 = iVar11;
    iVar12 = iVar13;
    if ((bool)this->bEmissiveMap) {
      TVar4 = (this->EmissiveTextureSize).field0_0x0._s_0;
      iVar14 = TVar4.X;
      if (iVar14 < iVar11) {
        iVar14 = iVar11;
      }
      iVar12 = TVar4.Y;
      if (iVar12 < iVar13) {
        iVar12 = iVar13;
      }
      *(ulonglong *)in_RDX = CONCAT44(iVar12,iVar14);
    }
    iVar11 = iVar14;
    iVar13 = iVar12;
    if (this->bOpacityMap != 0) {
      TVar4 = (this->OpacityTextureSize).field0_0x0._s_0;
      iVar11 = TVar4.X;
      if (iVar11 < iVar14) {
        iVar11 = iVar14;
      }
      iVar13 = TVar4.Y;
      if (iVar13 < iVar12) {
        iVar13 = iVar12;
      }
      *(ulonglong *)in_RDX = CONCAT44(iVar13,iVar11);
    }
    iVar14 = iVar11;
    iVar12 = iVar13;
    if (this->bOpacityMaskMap != '\0') {
      TVar4 = (this->OpacityMaskTextureSize).field0_0x0._s_0;
      iVar14 = TVar4.X;
      if (iVar14 < iVar11) {
        iVar14 = iVar11;
      }
      iVar12 = TVar4.Y;
      if (iVar12 < iVar13) {
        iVar12 = iVar13;
      }
      *(ulonglong *)in_RDX = CONCAT44(iVar12,iVar14);
    }
    if (this->bAmbientOcclusionMap != '\0') {
      TVar4 = (this->AmbientOcclusionTextureSize).field0_0x0._s_0;
      iVar11 = TVar4.X;
      if (iVar11 < iVar14) {
        iVar11 = iVar14;
      }
      iVar13 = TVar4.Y;
      if (iVar13 < iVar12) {
        iVar13 = iVar12;
      }
      *(ulonglong *)in_RDX = CONCAT44(iVar13,iVar11);
      return (TIntPoint<int>)in_RDX;
    }
    break;
  default:
    if (1 < (byte)LogMaterialMerging._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterialMerging);
    }
  }
  return (TIntPoint<int>)in_RDX;
}

