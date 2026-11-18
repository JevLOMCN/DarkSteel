// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472a6610

UClass * __cdecl UMaterialExpressionMakeMaterialAttributes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMakeMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMakeMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionMakeMaterialAttributes.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMakeMaterialAttributes,0x4e8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMakeMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMakeMaterialAttributes>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMakeMaterialAttributes.InnerSingleton;
}

// UMaterialExpressionMakeMaterialAttributes @ 1472ae610

UMaterialExpressionMakeMaterialAttributes * __thiscall
UMaterialExpressionMakeMaterialAttributes::UMaterialExpressionMakeMaterialAttributes
          (UMaterialExpressionMakeMaterialAttributes *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMakeMaterialAttributes__6B_;
  (this->BaseColor).OutputIndex = 0;
  (this->BaseColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseColor).InputName.Number = 0;
  (this->BaseColor).MaskR = 0;
  (this->BaseColor).MaskG = 0;
  (this->BaseColor).MaskB = 0;
  (this->BaseColor).MaskA = 0;
  (this->BaseColor).Expression = (UMaterialExpression *)0x0;
  (this->Metallic).OutputIndex = 0;
  (this->Metallic).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Metallic).InputName.Number = 0;
  (this->Metallic).MaskR = 0;
  (this->Metallic).MaskG = 0;
  (this->Metallic).MaskB = 0;
  (this->Metallic).MaskA = 0;
  (this->Metallic).Expression = (UMaterialExpression *)0x0;
  (this->Specular).OutputIndex = 0;
  (this->Specular).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Specular).InputName.Number = 0;
  (this->Specular).MaskR = 0;
  (this->Specular).MaskG = 0;
  (this->Specular).MaskB = 0;
  (this->Specular).MaskA = 0;
  (this->Specular).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->Anisotropy).OutputIndex = 0;
  (this->Anisotropy).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Anisotropy).InputName.Number = 0;
  (this->Anisotropy).MaskR = 0;
  (this->Anisotropy).MaskG = 0;
  (this->Anisotropy).MaskB = 0;
  (this->Anisotropy).MaskA = 0;
  (this->Anisotropy).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->Opacity).OutputIndex = 0;
  (this->Opacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Opacity).InputName.Number = 0;
  (this->Opacity).MaskR = 0;
  (this->Opacity).MaskG = 0;
  (this->Opacity).MaskB = 0;
  (this->Opacity).MaskA = 0;
  (this->Opacity).Expression = (UMaterialExpression *)0x0;
  (this->OpacityMask).OutputIndex = 0;
  (this->OpacityMask).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->OpacityMask).InputName.Number = 0;
  (this->OpacityMask).MaskR = 0;
  (this->OpacityMask).MaskG = 0;
  (this->OpacityMask).MaskB = 0;
  (this->OpacityMask).MaskA = 0;
  (this->OpacityMask).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->Tangent).OutputIndex = 0;
  (this->Tangent).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Tangent).InputName.Number = 0;
  (this->Tangent).MaskR = 0;
  (this->Tangent).MaskG = 0;
  (this->Tangent).MaskB = 0;
  (this->Tangent).MaskA = 0;
  (this->Tangent).Expression = (UMaterialExpression *)0x0;
  (this->WorldPositionOffset).OutputIndex = 0;
  (this->WorldPositionOffset).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPositionOffset).InputName.Number = 0;
  (this->WorldPositionOffset).MaskR = 0;
  (this->WorldPositionOffset).MaskG = 0;
  (this->WorldPositionOffset).MaskB = 0;
  (this->WorldPositionOffset).MaskA = 0;
  (this->WorldPositionOffset).Expression = (UMaterialExpression *)0x0;
  (this->SubsurfaceColor).OutputIndex = 0;
  (this->SubsurfaceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SubsurfaceColor).InputName.Number = 0;
  (this->SubsurfaceColor).MaskR = 0;
  (this->SubsurfaceColor).MaskG = 0;
  (this->SubsurfaceColor).MaskB = 0;
  (this->SubsurfaceColor).MaskA = 0;
  (this->SubsurfaceColor).Expression = (UMaterialExpression *)0x0;
  (this->ClearCoat).OutputIndex = 0;
  (this->ClearCoat).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClearCoat).InputName.Number = 0;
  (this->ClearCoat).MaskR = 0;
  (this->ClearCoat).MaskG = 0;
  (this->ClearCoat).MaskB = 0;
  (this->ClearCoat).MaskA = 0;
  (this->ClearCoat).Expression = (UMaterialExpression *)0x0;
  (this->ClearCoatRoughness).OutputIndex = 0;
  (this->ClearCoatRoughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).InputName.Number = 0;
  (this->ClearCoatRoughness).MaskR = 0;
  (this->ClearCoatRoughness).MaskG = 0;
  (this->ClearCoatRoughness).MaskB = 0;
  (this->ClearCoatRoughness).MaskA = 0;
  (this->ClearCoatRoughness).Expression = (UMaterialExpression *)0x0;
  (this->AmbientOcclusion).OutputIndex = 0;
  (this->AmbientOcclusion).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AmbientOcclusion).InputName.Number = 0;
  (this->AmbientOcclusion).MaskR = 0;
  (this->AmbientOcclusion).MaskG = 0;
  (this->AmbientOcclusion).MaskB = 0;
  (this->AmbientOcclusion).MaskA = 0;
  (this->AmbientOcclusion).Expression = (UMaterialExpression *)0x0;
  (this->Refraction).OutputIndex = 0;
  (this->Refraction).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Refraction).InputName.Number = 0;
  (this->Refraction).MaskR = 0;
  (this->Refraction).MaskG = 0;
  (this->Refraction).MaskB = 0;
  (this->Refraction).MaskA = 0;
  (this->Refraction).Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[0].OutputIndex = 0;
  this->CustomizedUVs[0].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[0].InputName.Number = 0;
  this->CustomizedUVs[0].MaskR = 0;
  this->CustomizedUVs[0].MaskG = 0;
  this->CustomizedUVs[0].MaskB = 0;
  this->CustomizedUVs[0].MaskA = 0;
  this->CustomizedUVs[0].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[1].OutputIndex = 0;
  this->CustomizedUVs[1].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[1].InputName.Number = 0;
  this->CustomizedUVs[1].MaskR = 0;
  this->CustomizedUVs[1].MaskG = 0;
  this->CustomizedUVs[1].MaskB = 0;
  this->CustomizedUVs[1].MaskA = 0;
  this->CustomizedUVs[1].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[2].OutputIndex = 0;
  this->CustomizedUVs[2].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[2].InputName.Number = 0;
  this->CustomizedUVs[2].MaskR = 0;
  this->CustomizedUVs[2].MaskG = 0;
  this->CustomizedUVs[2].MaskB = 0;
  this->CustomizedUVs[2].MaskA = 0;
  this->CustomizedUVs[2].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[3].OutputIndex = 0;
  this->CustomizedUVs[3].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[3].InputName.Number = 0;
  this->CustomizedUVs[3].MaskR = 0;
  this->CustomizedUVs[3].MaskG = 0;
  this->CustomizedUVs[3].MaskB = 0;
  this->CustomizedUVs[3].MaskA = 0;
  this->CustomizedUVs[3].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[4].OutputIndex = 0;
  this->CustomizedUVs[4].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[4].InputName.Number = 0;
  this->CustomizedUVs[4].MaskR = 0;
  this->CustomizedUVs[4].MaskG = 0;
  this->CustomizedUVs[4].MaskB = 0;
  this->CustomizedUVs[4].MaskA = 0;
  this->CustomizedUVs[4].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[5].OutputIndex = 0;
  this->CustomizedUVs[5].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[5].InputName.Number = 0;
  this->CustomizedUVs[5].MaskR = 0;
  this->CustomizedUVs[5].MaskG = 0;
  this->CustomizedUVs[5].MaskB = 0;
  this->CustomizedUVs[5].MaskA = 0;
  this->CustomizedUVs[5].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[6].OutputIndex = 0;
  this->CustomizedUVs[6].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[6].InputName.Number = 0;
  this->CustomizedUVs[6].MaskR = 0;
  this->CustomizedUVs[6].MaskG = 0;
  this->CustomizedUVs[6].MaskB = 0;
  this->CustomizedUVs[6].MaskA = 0;
  this->CustomizedUVs[6].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[7].OutputIndex = 0;
  this->CustomizedUVs[7].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[7].InputName.Number = 0;
  this->CustomizedUVs[7].MaskR = 0;
  this->CustomizedUVs[7].MaskG = 0;
  this->CustomizedUVs[7].MaskB = 0;
  this->CustomizedUVs[7].MaskA = 0;
  this->CustomizedUVs[7].Expression = (UMaterialExpression *)0x0;
  (this->PixelDepthOffset).OutputIndex = 0;
  (this->PixelDepthOffset).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PixelDepthOffset).InputName.Number = 0;
  (this->PixelDepthOffset).MaskR = 0;
  (this->PixelDepthOffset).MaskG = 0;
  (this->PixelDepthOffset).MaskB = 0;
  (this->PixelDepthOffset).MaskA = 0;
  (this->PixelDepthOffset).Expression = (UMaterialExpression *)0x0;
  (this->ShadingModel).OutputIndex = 0;
  (this->ShadingModel).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ShadingModel).InputName.Number = 0;
  (this->ShadingModel).MaskR = 0;
  (this->ShadingModel).MaskG = 0;
  (this->ShadingModel).MaskB = 0;
  (this->ShadingModel).MaskA = 0;
  (this->ShadingModel).Expression = (UMaterialExpression *)0x0;
  (this->Displacement).OutputIndex = 0;
  (this->Displacement).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Displacement).InputName.Number = 0;
  (this->Displacement).MaskR = 0;
  (this->Displacement).MaskG = 0;
  (this->Displacement).MaskB = 0;
  (this->Displacement).MaskA = 0;
  (this->Displacement).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionMakeMaterialAttributes @ 1472ae9f0

UMaterialExpressionMakeMaterialAttributes * __thiscall
UMaterialExpressionMakeMaterialAttributes::UMaterialExpressionMakeMaterialAttributes
          (UMaterialExpressionMakeMaterialAttributes *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMakeMaterialAttributes__6B_;
  (this->BaseColor).OutputIndex = 0;
  (this->BaseColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseColor).InputName.Number = 0;
  (this->BaseColor).MaskR = 0;
  (this->BaseColor).MaskG = 0;
  (this->BaseColor).MaskB = 0;
  (this->BaseColor).MaskA = 0;
  (this->BaseColor).Expression = (UMaterialExpression *)0x0;
  (this->Metallic).OutputIndex = 0;
  (this->Metallic).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Metallic).InputName.Number = 0;
  (this->Metallic).MaskR = 0;
  (this->Metallic).MaskG = 0;
  (this->Metallic).MaskB = 0;
  (this->Metallic).MaskA = 0;
  (this->Metallic).Expression = (UMaterialExpression *)0x0;
  (this->Specular).OutputIndex = 0;
  (this->Specular).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Specular).InputName.Number = 0;
  (this->Specular).MaskR = 0;
  (this->Specular).MaskG = 0;
  (this->Specular).MaskB = 0;
  (this->Specular).MaskA = 0;
  (this->Specular).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->Anisotropy).OutputIndex = 0;
  (this->Anisotropy).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Anisotropy).InputName.Number = 0;
  (this->Anisotropy).MaskR = 0;
  (this->Anisotropy).MaskG = 0;
  (this->Anisotropy).MaskB = 0;
  (this->Anisotropy).MaskA = 0;
  (this->Anisotropy).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->Opacity).OutputIndex = 0;
  (this->Opacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Opacity).InputName.Number = 0;
  (this->Opacity).MaskR = 0;
  (this->Opacity).MaskG = 0;
  (this->Opacity).MaskB = 0;
  (this->Opacity).MaskA = 0;
  (this->Opacity).Expression = (UMaterialExpression *)0x0;
  (this->OpacityMask).OutputIndex = 0;
  (this->OpacityMask).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->OpacityMask).InputName.Number = 0;
  (this->OpacityMask).MaskR = 0;
  (this->OpacityMask).MaskG = 0;
  (this->OpacityMask).MaskB = 0;
  (this->OpacityMask).MaskA = 0;
  (this->OpacityMask).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->Tangent).OutputIndex = 0;
  (this->Tangent).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Tangent).InputName.Number = 0;
  (this->Tangent).MaskR = 0;
  (this->Tangent).MaskG = 0;
  (this->Tangent).MaskB = 0;
  (this->Tangent).MaskA = 0;
  (this->Tangent).Expression = (UMaterialExpression *)0x0;
  (this->WorldPositionOffset).OutputIndex = 0;
  (this->WorldPositionOffset).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPositionOffset).InputName.Number = 0;
  (this->WorldPositionOffset).MaskR = 0;
  (this->WorldPositionOffset).MaskG = 0;
  (this->WorldPositionOffset).MaskB = 0;
  (this->WorldPositionOffset).MaskA = 0;
  (this->WorldPositionOffset).Expression = (UMaterialExpression *)0x0;
  (this->SubsurfaceColor).OutputIndex = 0;
  (this->SubsurfaceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SubsurfaceColor).InputName.Number = 0;
  (this->SubsurfaceColor).MaskR = 0;
  (this->SubsurfaceColor).MaskG = 0;
  (this->SubsurfaceColor).MaskB = 0;
  (this->SubsurfaceColor).MaskA = 0;
  (this->SubsurfaceColor).Expression = (UMaterialExpression *)0x0;
  (this->ClearCoat).OutputIndex = 0;
  (this->ClearCoat).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClearCoat).InputName.Number = 0;
  (this->ClearCoat).MaskR = 0;
  (this->ClearCoat).MaskG = 0;
  (this->ClearCoat).MaskB = 0;
  (this->ClearCoat).MaskA = 0;
  (this->ClearCoat).Expression = (UMaterialExpression *)0x0;
  (this->ClearCoatRoughness).OutputIndex = 0;
  (this->ClearCoatRoughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).InputName.Number = 0;
  (this->ClearCoatRoughness).MaskR = 0;
  (this->ClearCoatRoughness).MaskG = 0;
  (this->ClearCoatRoughness).MaskB = 0;
  (this->ClearCoatRoughness).MaskA = 0;
  (this->ClearCoatRoughness).Expression = (UMaterialExpression *)0x0;
  (this->AmbientOcclusion).OutputIndex = 0;
  (this->AmbientOcclusion).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AmbientOcclusion).InputName.Number = 0;
  (this->AmbientOcclusion).MaskR = 0;
  (this->AmbientOcclusion).MaskG = 0;
  (this->AmbientOcclusion).MaskB = 0;
  (this->AmbientOcclusion).MaskA = 0;
  (this->AmbientOcclusion).Expression = (UMaterialExpression *)0x0;
  (this->Refraction).OutputIndex = 0;
  (this->Refraction).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Refraction).InputName.Number = 0;
  (this->Refraction).MaskR = 0;
  (this->Refraction).MaskG = 0;
  (this->Refraction).MaskB = 0;
  (this->Refraction).MaskA = 0;
  (this->Refraction).Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[0].OutputIndex = 0;
  this->CustomizedUVs[0].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[0].InputName.Number = 0;
  this->CustomizedUVs[0].MaskR = 0;
  this->CustomizedUVs[0].MaskG = 0;
  this->CustomizedUVs[0].MaskB = 0;
  this->CustomizedUVs[0].MaskA = 0;
  this->CustomizedUVs[0].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[1].OutputIndex = 0;
  this->CustomizedUVs[1].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[1].InputName.Number = 0;
  this->CustomizedUVs[1].MaskR = 0;
  this->CustomizedUVs[1].MaskG = 0;
  this->CustomizedUVs[1].MaskB = 0;
  this->CustomizedUVs[1].MaskA = 0;
  this->CustomizedUVs[1].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[2].OutputIndex = 0;
  this->CustomizedUVs[2].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[2].InputName.Number = 0;
  this->CustomizedUVs[2].MaskR = 0;
  this->CustomizedUVs[2].MaskG = 0;
  this->CustomizedUVs[2].MaskB = 0;
  this->CustomizedUVs[2].MaskA = 0;
  this->CustomizedUVs[2].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[3].OutputIndex = 0;
  this->CustomizedUVs[3].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[3].InputName.Number = 0;
  this->CustomizedUVs[3].MaskR = 0;
  this->CustomizedUVs[3].MaskG = 0;
  this->CustomizedUVs[3].MaskB = 0;
  this->CustomizedUVs[3].MaskA = 0;
  this->CustomizedUVs[3].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[4].OutputIndex = 0;
  this->CustomizedUVs[4].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[4].InputName.Number = 0;
  this->CustomizedUVs[4].MaskR = 0;
  this->CustomizedUVs[4].MaskG = 0;
  this->CustomizedUVs[4].MaskB = 0;
  this->CustomizedUVs[4].MaskA = 0;
  this->CustomizedUVs[4].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[5].OutputIndex = 0;
  this->CustomizedUVs[5].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[5].InputName.Number = 0;
  this->CustomizedUVs[5].MaskR = 0;
  this->CustomizedUVs[5].MaskG = 0;
  this->CustomizedUVs[5].MaskB = 0;
  this->CustomizedUVs[5].MaskA = 0;
  this->CustomizedUVs[5].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[6].OutputIndex = 0;
  this->CustomizedUVs[6].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[6].InputName.Number = 0;
  this->CustomizedUVs[6].MaskR = 0;
  this->CustomizedUVs[6].MaskG = 0;
  this->CustomizedUVs[6].MaskB = 0;
  this->CustomizedUVs[6].MaskA = 0;
  this->CustomizedUVs[6].Expression = (UMaterialExpression *)0x0;
  this->CustomizedUVs[7].OutputIndex = 0;
  this->CustomizedUVs[7].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->CustomizedUVs[7].InputName.Number = 0;
  this->CustomizedUVs[7].MaskR = 0;
  this->CustomizedUVs[7].MaskG = 0;
  this->CustomizedUVs[7].MaskB = 0;
  this->CustomizedUVs[7].MaskA = 0;
  this->CustomizedUVs[7].Expression = (UMaterialExpression *)0x0;
  (this->PixelDepthOffset).OutputIndex = 0;
  (this->PixelDepthOffset).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PixelDepthOffset).InputName.Number = 0;
  (this->PixelDepthOffset).MaskR = 0;
  (this->PixelDepthOffset).MaskG = 0;
  (this->PixelDepthOffset).MaskB = 0;
  (this->PixelDepthOffset).MaskA = 0;
  (this->PixelDepthOffset).Expression = (UMaterialExpression *)0x0;
  (this->ShadingModel).OutputIndex = 0;
  (this->ShadingModel).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ShadingModel).InputName.Number = 0;
  (this->ShadingModel).MaskR = 0;
  (this->ShadingModel).MaskG = 0;
  (this->ShadingModel).MaskB = 0;
  (this->ShadingModel).MaskA = 0;
  (this->ShadingModel).Expression = (UMaterialExpression *)0x0;
  (this->Displacement).OutputIndex = 0;
  (this->Displacement).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Displacement).InputName.Number = 0;
  (this->Displacement).MaskR = 0;
  (this->Displacement).MaskG = 0;
  (this->Displacement).MaskB = 0;
  (this->Displacement).MaskA = 0;
  (this->Displacement).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionMakeMaterialAttributes @ 1472afc30

void __thiscall
UMaterialExpressionMakeMaterialAttributes::~UMaterialExpressionMakeMaterialAttributes
          (UMaterialExpressionMakeMaterialAttributes *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMakeMaterialAttributes__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3b60

UClass * __cdecl UMaterialExpressionMakeMaterialAttributes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMakeMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMakeMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionMakeMaterialAttributes.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMakeMaterialAttributes,0x4e8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMakeMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMakeMaterialAttributes>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMakeMaterialAttributes.InnerSingleton;
}

// Serialize @ 1472b43f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialExpressionMakeMaterialAttributes::Serialize
          (UMaterialExpressionMakeMaterialAttributes *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  Serialize(this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// StaticRegisterNativesUMaterialExpressionMakeMaterialAttributes @ 1472b4730

void __cdecl
UMaterialExpressionMakeMaterialAttributes::
StaticRegisterNativesUMaterialExpressionMakeMaterialAttributes(void)

{
  return;
}

// GetExpressionInput @ 148b00980

FExpressionInput * __thiscall
UMaterialExpressionMakeMaterialAttributes::GetExpressionInput
          (UMaterialExpressionMakeMaterialAttributes *this,EMaterialProperty param_1)

{
  switch(param_1) {
  case MP_EmissiveColor:
    return &this->EmissiveColor;
  case MP_Opacity:
    return &this->Opacity;
  case MP_OpacityMask:
    return &this->OpacityMask;
  default:
    return (FExpressionInput *)0x0;
  case MP_BaseColor:
    return &this->BaseColor;
  case MP_Metallic:
    return &this->Metallic;
  case MP_Specular:
    return &this->Specular;
  case MP_Roughness:
    return &this->Roughness;
  case MP_Anisotropy:
    return &this->Anisotropy;
  case MP_Normal:
    return &this->Normal;
  case MP_Tangent:
    return &this->Tangent;
  case MP_WorldPositionOffset:
    return &this->WorldPositionOffset;
  case MP_SubsurfaceColor:
    return &this->SubsurfaceColor;
  case MP_CustomData0:
    return &this->ClearCoat;
  case MP_CustomData1:
    return &this->ClearCoatRoughness;
  case MP_AmbientOcclusion:
    return &this->AmbientOcclusion;
  case MP_Refraction:
    return &this->Refraction;
  case MP_CustomizedUVs0:
    return this->CustomizedUVs;
  case MP_CustomizedUVs1:
    return this->CustomizedUVs + 1;
  case MP_CustomizedUVs2:
    return this->CustomizedUVs + 2;
  case MP_CustomizedUVs3:
    return this->CustomizedUVs + 3;
  case MP_CustomizedUVs4:
    return this->CustomizedUVs + 4;
  case MP_CustomizedUVs5:
    return this->CustomizedUVs + 5;
  case MP_CustomizedUVs6:
    return this->CustomizedUVs + 6;
  case MP_CustomizedUVs7:
    return this->CustomizedUVs + 7;
  case MP_PixelDepthOffset:
    return &this->PixelDepthOffset;
  case MP_ShadingModel:
    return &this->ShadingModel;
  case MP_Displacement:
    return &this->Displacement;
  }
}

// Serialize @ 148b045d0

void __thiscall
UMaterialExpressionMakeMaterialAttributes::Serialize
          (UMaterialExpressionMakeMaterialAttributes *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  FArchive *pFVar2;
  FSlotBase aFStackX_10 [3];
  
  aFStackX_10[0].StructuredArchive = (FStructuredArchive *)param_1;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId958,"UMaterialExpression_Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialExpressions.cpp"
               ,0x3be);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId958);
  }
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)aFStackX_10[0].StructuredArchive);
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(aFStackX_10);
  (**(code **)(*(longlong *)pFVar2 + 0x230))(pFVar2,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar2 + 0x230))(pFVar2,&FUE5MainStreamObjectVersion::GUID);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

