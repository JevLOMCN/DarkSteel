// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147eea1c0

UClass * __cdecl UMaterialEditorOnlyData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialEditorOnlyData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialEditorOnlyData.InnerSingleton,
               StaticRegisterNativesUMaterialEditorOnlyData,0x6b8,8,CLASS_Intrinsic|CLASS_Optional,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialEditorOnlyData>,aFStackX_8,
               UMaterialInterfaceEditorOnlyData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialEditorOnlyData.InnerSingleton;
}

// UMaterialEditorOnlyData @ 147ef0990

UMaterialEditorOnlyData * __thiscall
UMaterialEditorOnlyData::UMaterialEditorOnlyData
          (UMaterialEditorOnlyData *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UMaterialInterfaceEditorOnlyData::UMaterialInterfaceEditorOnlyData
            ((UMaterialInterfaceEditorOnlyData *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialEditorOnlyData__6B_;
  puVar1 = &(this->BaseColor).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->BaseColor).field_0x10 = 0;
  *(undefined8 *)&(this->BaseColor).field_0x2c = 0;
  *(undefined8 *)&(this->BaseColor).field_0x34 = 0;
  *(undefined8 *)&(this->BaseColor).field_0x8 = 0;
  *(undefined8 *)&(this->BaseColor).field_0x18 = 0;
  *(undefined8 *)&(this->BaseColor).field_0x20 = 0;
  *(undefined8 *)&this->BaseColor = 0;
  puVar1 = &(this->Metallic).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->Specular).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->Roughness).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->Anisotropy).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->Normal).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->Metallic).field_0x8 = 0;
  *(undefined8 *)&(this->Metallic).field_0x10 = 0;
  *(undefined8 *)&(this->Metallic).field_0x18 = 0;
  *(undefined8 *)&(this->Metallic).field_0x20 = 0;
  *(undefined8 *)&this->Metallic = 0;
  *(undefined4 *)&(this->Metallic).field_0x2c = 0;
  *(undefined8 *)&(this->Specular).field_0x8 = 0;
  *(undefined8 *)&(this->Specular).field_0x10 = 0;
  *(undefined8 *)&(this->Specular).field_0x18 = 0;
  *(undefined8 *)&(this->Specular).field_0x20 = 0;
  *(undefined8 *)&this->Specular = 0;
  *(undefined4 *)&(this->Specular).field_0x2c = 0;
  *(undefined8 *)&(this->Roughness).field_0x8 = 0;
  *(undefined8 *)&(this->Roughness).field_0x10 = 0;
  *(undefined8 *)&(this->Roughness).field_0x18 = 0;
  *(undefined8 *)&(this->Roughness).field_0x20 = 0;
  *(undefined8 *)&this->Roughness = 0;
  *(undefined4 *)&(this->Roughness).field_0x2c = 0;
  *(undefined8 *)&(this->Anisotropy).field_0x8 = 0;
  *(undefined8 *)&(this->Anisotropy).field_0x10 = 0;
  *(undefined8 *)&(this->Anisotropy).field_0x18 = 0;
  *(undefined8 *)&(this->Anisotropy).field_0x20 = 0;
  *(undefined8 *)&this->Anisotropy = 0;
  *(undefined4 *)&(this->Anisotropy).field_0x2c = 0;
  *(undefined8 *)&(this->Normal).field_0x10 = 0;
  *(undefined8 *)&(this->Normal).field_0x8 = 0;
  *(undefined8 *)&(this->Normal).field_0x18 = 0;
  *(undefined8 *)&(this->Normal).field_0x20 = 0;
  *(undefined8 *)&this->Normal = 0;
  *(undefined8 *)&(this->Normal).field_0x2c = 0;
  *(undefined4 *)&(this->Normal).field_0x34 = 0;
  puVar1 = &(this->Tangent).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->Tangent).field_0x10 = 0;
  *(undefined8 *)&(this->Tangent).field_0x8 = 0;
  *(undefined8 *)&(this->Tangent).field_0x18 = 0;
  *(undefined8 *)&(this->Tangent).field_0x20 = 0;
  *(undefined8 *)&this->Tangent = 0;
  *(undefined8 *)&(this->Tangent).field_0x2c = 0;
  *(undefined4 *)&(this->Tangent).field_0x34 = 0;
  puVar1 = &(this->EmissiveColor).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->EmissiveColor).field_0x10 = 0;
  *(undefined8 *)&(this->EmissiveColor).field_0x2c = 0;
  *(undefined8 *)&(this->EmissiveColor).field_0x34 = 0;
  *(undefined8 *)&(this->EmissiveColor).field_0x8 = 0;
  *(undefined8 *)&(this->EmissiveColor).field_0x18 = 0;
  *(undefined8 *)&(this->EmissiveColor).field_0x20 = 0;
  *(undefined8 *)&this->EmissiveColor = 0;
  puVar1 = &(this->Opacity).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->Opacity).field_0x8 = 0;
  *(undefined8 *)&(this->Opacity).field_0x10 = 0;
  *(undefined8 *)&(this->Opacity).field_0x18 = 0;
  *(undefined8 *)&(this->Opacity).field_0x20 = 0;
  *(undefined8 *)&this->Opacity = 0;
  *(undefined4 *)&(this->Opacity).field_0x2c = 0;
  *(undefined8 *)&(this->OpacityMask).field_0x8 = 0;
  *(undefined8 *)&(this->OpacityMask).field_0x10 = 0;
  *(undefined8 *)&(this->OpacityMask).field_0x18 = 0;
  *(undefined8 *)&(this->OpacityMask).field_0x20 = 0;
  puVar1 = &(this->OpacityMask).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->WorldPositionOffset).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->OpacityMask = 0;
  *(undefined4 *)&(this->OpacityMask).field_0x2c = 0;
  *(undefined8 *)&(this->WorldPositionOffset).field_0x10 = 0;
  *(undefined8 *)&(this->WorldPositionOffset).field_0x8 = 0;
  *(undefined8 *)&(this->WorldPositionOffset).field_0x18 = 0;
  *(undefined8 *)&(this->WorldPositionOffset).field_0x20 = 0;
  *(undefined8 *)&this->WorldPositionOffset = 0;
  *(undefined8 *)&(this->WorldPositionOffset).field_0x2c = 0;
  *(undefined4 *)&(this->WorldPositionOffset).field_0x34 = 0;
  puVar1 = &(this->Displacement).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->SubsurfaceColor).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->Displacement).field_0x8 = 0;
  *(undefined8 *)&(this->Displacement).field_0x10 = 0;
  *(undefined8 *)&(this->Displacement).field_0x18 = 0;
  *(undefined8 *)&(this->Displacement).field_0x20 = 0;
  *(undefined8 *)&this->Displacement = 0;
  *(undefined4 *)&(this->Displacement).field_0x2c = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x10 = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x2c = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x34 = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x8 = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x18 = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x20 = 0;
  *(undefined8 *)&this->SubsurfaceColor = 0;
  puVar1 = &(this->ClearCoat).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->ClearCoatRoughness).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->AmbientOcclusion).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->Refraction).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->ClearCoat).field_0x8 = 0;
  *(undefined8 *)&(this->ClearCoat).field_0x10 = 0;
  *(undefined8 *)&(this->ClearCoat).field_0x18 = 0;
  *(undefined8 *)&(this->ClearCoat).field_0x20 = 0;
  *(undefined8 *)&this->ClearCoat = 0;
  *(undefined4 *)&(this->ClearCoat).field_0x2c = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).field_0x8 = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).field_0x10 = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).field_0x18 = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).field_0x20 = 0;
  *(undefined8 *)&this->ClearCoatRoughness = 0;
  *(undefined4 *)&(this->ClearCoatRoughness).field_0x2c = 0;
  *(undefined8 *)&(this->AmbientOcclusion).field_0x8 = 0;
  *(undefined8 *)&(this->AmbientOcclusion).field_0x10 = 0;
  *(undefined8 *)&(this->AmbientOcclusion).field_0x18 = 0;
  *(undefined8 *)&(this->AmbientOcclusion).field_0x20 = 0;
  *(undefined8 *)&this->AmbientOcclusion = 0;
  *(undefined4 *)&(this->AmbientOcclusion).field_0x2c = 0;
  *(undefined8 *)&(this->Refraction).field_0x8 = 0;
  *(undefined8 *)&(this->Refraction).field_0x10 = 0;
  *(undefined8 *)&(this->Refraction).field_0x18 = 0;
  *(undefined8 *)&(this->Refraction).field_0x20 = 0;
  *(undefined8 *)&this->Refraction = 0;
  *(undefined4 *)&(this->Refraction).field_0x2c = 0;
  puVar1 = &this->CustomizedUVs[0].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[0].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[0].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[0].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[0].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[0].field_0x20 = 0;
  *(undefined8 *)this->CustomizedUVs = 0;
  *(undefined8 *)&this->CustomizedUVs[1].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[1].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[1].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[1].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 1) = 0;
  puVar1 = &this->CustomizedUVs[1].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[1].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[2].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[2].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[2].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[2].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 2) = 0;
  puVar1 = &this->CustomizedUVs[2].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[2].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[3].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[3].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[3].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[3].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 3) = 0;
  puVar1 = &this->CustomizedUVs[3].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[3].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[4].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[4].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[4].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[4].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 4) = 0;
  puVar1 = &this->CustomizedUVs[4].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[4].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[5].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[5].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[5].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[5].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 5) = 0;
  puVar1 = &this->CustomizedUVs[5].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[5].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[6].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[6].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[6].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[6].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 6) = 0;
  puVar1 = &this->CustomizedUVs[6].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[6].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[7].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[7].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[7].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[7].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 7) = 0;
  puVar1 = &this->CustomizedUVs[7].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[7].field_0x2c = 0;
  puVar1 = &(this->PixelDepthOffset).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->ShadingModelFromMaterialExpression).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->SurfaceThickness).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->FrontMaterial).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  this->bIsSubsutrateAutoConvertedAndNotSaved = false;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes).PropertyConnectedMask = 0;
  *(undefined8 *)&(this->PixelDepthOffset).field_0x8 = 0;
  *(undefined8 *)&(this->PixelDepthOffset).field_0x10 = 0;
  *(undefined8 *)&(this->PixelDepthOffset).field_0x18 = 0;
  *(undefined8 *)&(this->PixelDepthOffset).field_0x20 = 0;
  *(undefined8 *)&this->PixelDepthOffset = 0;
  *(undefined4 *)&(this->PixelDepthOffset).field_0x2c = 0;
  *(undefined8 *)&(this->ShadingModelFromMaterialExpression).field_0x8 = 0;
  *(undefined8 *)&(this->ShadingModelFromMaterialExpression).field_0x10 = 0;
  *(undefined8 *)&(this->ShadingModelFromMaterialExpression).field_0x18 = 0;
  *(undefined8 *)&(this->ShadingModelFromMaterialExpression).field_0x20 = 0;
  *(undefined8 *)&this->ShadingModelFromMaterialExpression = 0;
  *(undefined4 *)&(this->ShadingModelFromMaterialExpression).field_0x2c = 0;
  *(undefined8 *)&(this->SurfaceThickness).field_0x8 = 0;
  *(undefined8 *)&(this->SurfaceThickness).field_0x10 = 0;
  *(undefined8 *)&(this->SurfaceThickness).field_0x18 = 0;
  *(undefined8 *)&(this->SurfaceThickness).field_0x20 = 0;
  *(undefined8 *)&this->SurfaceThickness = 0;
  *(undefined4 *)&(this->SurfaceThickness).field_0x2c = 0;
  *(undefined8 *)&(this->FrontMaterial).field_0x8 = 0;
  *(undefined8 *)&(this->FrontMaterial).field_0x10 = 0;
  *(undefined8 *)&(this->FrontMaterial).field_0x18 = 0;
  *(undefined8 *)&(this->FrontMaterial).field_0x20 = 0;
  *(undefined8 *)&this->FrontMaterial = 0;
  *(undefined4 *)&(this->FrontMaterial).field_0x2c = 0;
  (this->ExpressionCollection).Expressions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpressionCollection).Expressions.ArrayNum = 0;
  (this->ExpressionCollection).Expressions.ArrayMax = 0;
  (this->ExpressionCollection).EditorComments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExpressionCollection).EditorComments.ArrayNum = 0;
  (this->ExpressionCollection).EditorComments.ArrayMax = 0;
  (this->ExpressionCollection).ExpressionExecBegin.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
  (this->ExpressionCollection).ExpressionExecEnd.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
  (this->ParameterGroupData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterGroupData).ArrayNum = 0;
  (this->ParameterGroupData).ArrayMax = 0;
  return this;
}

// UMaterialEditorOnlyData @ 147ef0fd0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

UMaterialEditorOnlyData * __thiscall
UMaterialEditorOnlyData::UMaterialEditorOnlyData(UMaterialEditorOnlyData *this)

{
  undefined1 *puVar1;
  double dVar2;
  undefined8 uVar3;
  FMaterialAttributeDefintion *pFVar4;
  FLinearColor *pFVar5;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  FLinearColor local_18;
  
  UMaterialInterfaceEditorOnlyData::UMaterialInterfaceEditorOnlyData
            ((UMaterialInterfaceEditorOnlyData *)this);
  this->_padding_ = (longlong)&___7UMaterialEditorOnlyData__6B_;
  puVar1 = &(this->BaseColor).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->BaseColor).field_0x10 = 0;
  *(undefined8 *)&(this->BaseColor).field_0x2c = 0;
  *(undefined8 *)&(this->BaseColor).field_0x34 = 0;
  *(undefined8 *)&(this->BaseColor).field_0x8 = 0;
  *(undefined8 *)&(this->BaseColor).field_0x18 = 0;
  *(undefined8 *)&(this->BaseColor).field_0x20 = 0;
  *(undefined8 *)&this->BaseColor = 0;
  puVar1 = &(this->Metallic).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->Specular).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->Roughness).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->Anisotropy).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->Normal).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->Metallic).field_0x8 = 0;
  *(undefined8 *)&(this->Metallic).field_0x10 = 0;
  *(undefined8 *)&(this->Metallic).field_0x18 = 0;
  *(undefined8 *)&(this->Metallic).field_0x20 = 0;
  *(undefined8 *)&this->Metallic = 0;
  *(undefined4 *)&(this->Metallic).field_0x2c = 0;
  *(undefined8 *)&(this->Specular).field_0x8 = 0;
  *(undefined8 *)&(this->Specular).field_0x10 = 0;
  *(undefined8 *)&(this->Specular).field_0x18 = 0;
  *(undefined8 *)&(this->Specular).field_0x20 = 0;
  *(undefined8 *)&this->Specular = 0;
  *(undefined4 *)&(this->Specular).field_0x2c = 0;
  *(undefined8 *)&(this->Roughness).field_0x8 = 0;
  *(undefined8 *)&(this->Roughness).field_0x10 = 0;
  *(undefined8 *)&(this->Roughness).field_0x18 = 0;
  *(undefined8 *)&(this->Roughness).field_0x20 = 0;
  *(undefined8 *)&this->Roughness = 0;
  *(undefined4 *)&(this->Roughness).field_0x2c = 0;
  *(undefined8 *)&(this->Anisotropy).field_0x8 = 0;
  *(undefined8 *)&(this->Anisotropy).field_0x10 = 0;
  *(undefined8 *)&(this->Anisotropy).field_0x18 = 0;
  *(undefined8 *)&(this->Anisotropy).field_0x20 = 0;
  *(undefined8 *)&this->Anisotropy = 0;
  *(undefined4 *)&(this->Anisotropy).field_0x2c = 0;
  *(undefined8 *)&(this->Normal).field_0x10 = 0;
  *(undefined8 *)&(this->Normal).field_0x8 = 0;
  *(undefined8 *)&(this->Normal).field_0x18 = 0;
  *(undefined8 *)&(this->Normal).field_0x20 = 0;
  *(undefined8 *)&this->Normal = 0;
  *(undefined8 *)&(this->Normal).field_0x2c = 0;
  *(undefined4 *)&(this->Normal).field_0x34 = 0;
  puVar1 = &(this->Tangent).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->Tangent).field_0x10 = 0;
  *(undefined8 *)&(this->Tangent).field_0x8 = 0;
  *(undefined8 *)&(this->Tangent).field_0x18 = 0;
  *(undefined8 *)&(this->Tangent).field_0x20 = 0;
  *(undefined8 *)&this->Tangent = 0;
  *(undefined8 *)&(this->Tangent).field_0x2c = 0;
  *(undefined4 *)&(this->Tangent).field_0x34 = 0;
  puVar1 = &(this->EmissiveColor).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->EmissiveColor).field_0x10 = 0;
  *(undefined8 *)&(this->EmissiveColor).field_0x2c = 0;
  *(undefined8 *)&(this->EmissiveColor).field_0x34 = 0;
  *(undefined8 *)&(this->EmissiveColor).field_0x8 = 0;
  *(undefined8 *)&(this->EmissiveColor).field_0x18 = 0;
  *(undefined8 *)&(this->EmissiveColor).field_0x20 = 0;
  *(undefined8 *)&this->EmissiveColor = 0;
  puVar1 = &(this->Opacity).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->Opacity).field_0x8 = 0;
  *(undefined8 *)&(this->Opacity).field_0x10 = 0;
  *(undefined8 *)&(this->Opacity).field_0x18 = 0;
  *(undefined8 *)&(this->Opacity).field_0x20 = 0;
  *(undefined8 *)&this->Opacity = 0;
  *(undefined4 *)&(this->Opacity).field_0x2c = 0;
  *(undefined8 *)&(this->OpacityMask).field_0x8 = 0;
  *(undefined8 *)&(this->OpacityMask).field_0x10 = 0;
  *(undefined8 *)&(this->OpacityMask).field_0x18 = 0;
  *(undefined8 *)&(this->OpacityMask).field_0x20 = 0;
  puVar1 = &(this->OpacityMask).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->WorldPositionOffset).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->OpacityMask = 0;
  *(undefined4 *)&(this->OpacityMask).field_0x2c = 0;
  *(undefined8 *)&(this->WorldPositionOffset).field_0x10 = 0;
  *(undefined8 *)&(this->WorldPositionOffset).field_0x8 = 0;
  *(undefined8 *)&(this->WorldPositionOffset).field_0x18 = 0;
  *(undefined8 *)&(this->WorldPositionOffset).field_0x20 = 0;
  *(undefined8 *)&this->WorldPositionOffset = 0;
  _local_28 = 0;
  *(undefined8 *)&(this->WorldPositionOffset).field_0x2c = 0;
  *(undefined4 *)&(this->WorldPositionOffset).field_0x34 = 0;
  puVar1 = &(this->Displacement).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->SubsurfaceColor).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->Displacement).field_0x8 = 0;
  *(undefined8 *)&(this->Displacement).field_0x10 = 0;
  *(undefined8 *)&(this->Displacement).field_0x18 = 0;
  *(undefined8 *)&(this->Displacement).field_0x20 = 0;
  *(undefined8 *)&this->Displacement = 0;
  *(undefined4 *)&(this->Displacement).field_0x2c = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x10 = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x2c = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x34 = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x8 = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x18 = 0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x20 = 0;
  *(undefined8 *)&this->SubsurfaceColor = 0;
  puVar1 = &(this->ClearCoat).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->ClearCoatRoughness).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->AmbientOcclusion).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->Refraction).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->ClearCoat).field_0x8 = 0;
  *(undefined8 *)&(this->ClearCoat).field_0x10 = 0;
  *(undefined8 *)&(this->ClearCoat).field_0x18 = 0;
  *(undefined8 *)&(this->ClearCoat).field_0x20 = 0;
  *(undefined8 *)&this->ClearCoat = 0;
  *(undefined4 *)&(this->ClearCoat).field_0x2c = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).field_0x8 = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).field_0x10 = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).field_0x18 = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).field_0x20 = 0;
  *(undefined8 *)&this->ClearCoatRoughness = 0;
  *(undefined4 *)&(this->ClearCoatRoughness).field_0x2c = 0;
  *(undefined8 *)&(this->AmbientOcclusion).field_0x8 = 0;
  *(undefined8 *)&(this->AmbientOcclusion).field_0x10 = 0;
  *(undefined8 *)&(this->AmbientOcclusion).field_0x18 = 0;
  *(undefined8 *)&(this->AmbientOcclusion).field_0x20 = 0;
  *(undefined8 *)&this->AmbientOcclusion = 0;
  *(undefined4 *)&(this->AmbientOcclusion).field_0x2c = 0;
  *(undefined8 *)&(this->Refraction).field_0x8 = 0;
  *(undefined8 *)&(this->Refraction).field_0x10 = 0;
  *(undefined8 *)&(this->Refraction).field_0x18 = 0;
  *(undefined8 *)&(this->Refraction).field_0x20 = 0;
  *(undefined8 *)&this->Refraction = 0;
  *(undefined4 *)&(this->Refraction).field_0x2c = 0;
  puVar1 = &this->CustomizedUVs[0].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[0].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[0].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[0].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[0].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[0].field_0x20 = 0;
  *(undefined8 *)this->CustomizedUVs = 0;
  *(undefined8 *)&this->CustomizedUVs[1].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[1].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[1].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[1].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 1) = 0;
  puVar1 = &this->CustomizedUVs[1].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[1].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[2].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[2].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[2].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[2].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 2) = 0;
  puVar1 = &this->CustomizedUVs[2].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[2].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[3].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[3].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[3].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[3].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 3) = 0;
  puVar1 = &this->CustomizedUVs[3].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[3].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[4].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[4].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[4].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[4].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 4) = 0;
  puVar1 = &this->CustomizedUVs[4].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[4].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[5].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[5].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[5].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[5].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 5) = 0;
  puVar1 = &this->CustomizedUVs[5].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[5].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[6].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[6].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[6].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[6].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 6) = 0;
  puVar1 = &this->CustomizedUVs[6].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[6].field_0x2c = 0;
  *(undefined8 *)&this->CustomizedUVs[7].field_0x8 = 0;
  *(undefined8 *)&this->CustomizedUVs[7].field_0x10 = 0;
  *(undefined8 *)&this->CustomizedUVs[7].field_0x18 = 0;
  *(undefined8 *)&this->CustomizedUVs[7].field_0x20 = 0;
  *(undefined8 *)(this->CustomizedUVs + 7) = 0;
  puVar1 = &this->CustomizedUVs[7].field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&this->CustomizedUVs[7].field_0x2c = 0;
  puVar1 = &(this->PixelDepthOffset).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->ShadingModelFromMaterialExpression).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->SurfaceThickness).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  puVar1 = &(this->FrontMaterial).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes).PropertyConnectedMask = 0;
  *(undefined8 *)&(this->PixelDepthOffset).field_0x8 = 0;
  *(undefined8 *)&(this->PixelDepthOffset).field_0x10 = 0;
  *(undefined8 *)&(this->PixelDepthOffset).field_0x18 = 0;
  *(undefined8 *)&(this->PixelDepthOffset).field_0x20 = 0;
  *(undefined8 *)&this->PixelDepthOffset = 0;
  *(undefined4 *)&(this->PixelDepthOffset).field_0x2c = 0;
  *(undefined8 *)&(this->ShadingModelFromMaterialExpression).field_0x8 = 0;
  *(undefined8 *)&(this->ShadingModelFromMaterialExpression).field_0x10 = 0;
  *(undefined8 *)&(this->ShadingModelFromMaterialExpression).field_0x18 = 0;
  *(undefined8 *)&(this->ShadingModelFromMaterialExpression).field_0x20 = 0;
  *(undefined8 *)&this->ShadingModelFromMaterialExpression = 0;
  *(undefined4 *)&(this->ShadingModelFromMaterialExpression).field_0x2c = 0;
  *(undefined8 *)&(this->SurfaceThickness).field_0x8 = 0;
  *(undefined8 *)&(this->SurfaceThickness).field_0x10 = 0;
  *(undefined8 *)&(this->SurfaceThickness).field_0x18 = 0;
  *(undefined8 *)&(this->SurfaceThickness).field_0x20 = 0;
  *(undefined8 *)&this->SurfaceThickness = 0;
  *(undefined4 *)&(this->SurfaceThickness).field_0x2c = 0;
  *(undefined8 *)&(this->FrontMaterial).field_0x8 = 0;
  *(undefined8 *)&(this->FrontMaterial).field_0x10 = 0;
  *(undefined8 *)&(this->FrontMaterial).field_0x18 = 0;
  *(undefined8 *)&(this->FrontMaterial).field_0x20 = 0;
  *(undefined8 *)&this->FrontMaterial = 0;
  *(undefined4 *)&(this->FrontMaterial).field_0x2c = 0;
  (this->ExpressionCollection).Expressions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpressionCollection).Expressions.ArrayNum = 0;
  (this->ExpressionCollection).Expressions.ArrayMax = 0;
  (this->ExpressionCollection).EditorComments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExpressionCollection).EditorComments.ArrayNum = 0;
  (this->ExpressionCollection).EditorComments.ArrayMax = 0;
  (this->ExpressionCollection).ExpressionExecBegin.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
  (this->ExpressionCollection).ExpressionExecEnd.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
  (this->ParameterGroupData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterGroupData).ArrayNum = 0;
  (this->ParameterGroupData).ArrayMax = 0;
  this->bIsSubsutrateAutoConvertedAndNotSaved = false;
  *(FLinearColor_u_0 *)&(this->BaseColor).field_0x2c =
       (FLinearColor_u_0_s_0)FLinearColor::Gray.field0_0x0;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Metallic);
  *(float *)&(this->Metallic).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Specular);
  *(float *)&(this->Specular).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Roughness)
  ;
  *(float *)&(this->Roughness).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Anisotropy
                     );
  *(float *)&(this->Anisotropy).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Normal);
  dVar2 = (pFVar4->DefaultValue).field0_0x0._s_0.Z;
  *(ulonglong *)&(this->Normal).field_0x2c =
       CONCAT44((float)(pFVar4->DefaultValue).field0_0x0._s_0.Y,
                (float)(pFVar4->DefaultValue).field0_0x0._s_0.X);
  *(float *)&(this->Normal).field_0x34 = (float)dVar2;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Tangent);
  dVar2 = (pFVar4->DefaultValue).field0_0x0._s_0.Z;
  *(ulonglong *)&(this->Tangent).field_0x2c =
       CONCAT44((float)(pFVar4->DefaultValue).field0_0x0._s_0.Y,
                (float)(pFVar4->DefaultValue).field0_0x0._s_0.X);
  *(float *)&(this->Tangent).field_0x34 = (float)dVar2;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_EmissiveColor);
  local_1c = (undefined4)(pFVar4->DefaultValue).field0_0x0._s_0.W;
  local_20 = (undefined4)(pFVar4->DefaultValue).field0_0x0._s_0.Z;
  fStack_24 = (float)(pFVar4->DefaultValue).field0_0x0._s_0.Y;
  local_28 = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar5 = FLinearColor::FLinearColor(&local_18,(TVector4<float> *)&local_28);
  uVar3 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)&(this->EmissiveColor).field_0x2c = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)&(this->EmissiveColor).field_0x34 = uVar3;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Opacity);
  *(float *)&(this->Opacity).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_OpacityMask);
  *(float *)&(this->OpacityMask).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_WorldPositionOffset);
  dVar2 = (pFVar4->DefaultValue).field0_0x0._s_0.Z;
  *(ulonglong *)&(this->WorldPositionOffset).field_0x2c =
       CONCAT44((float)(pFVar4->DefaultValue).field0_0x0._s_0.Y,
                (float)(pFVar4->DefaultValue).field0_0x0._s_0.X);
  *(float *)&(this->WorldPositionOffset).field_0x34 = (float)dVar2;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_Displacement);
  *(float *)&(this->Displacement).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_SubsurfaceColor);
  local_1c = (undefined4)(pFVar4->DefaultValue).field0_0x0._s_0.W;
  local_20 = (undefined4)(pFVar4->DefaultValue).field0_0x0._s_0.Z;
  fStack_24 = (float)(pFVar4->DefaultValue).field0_0x0._s_0.Y;
  local_28 = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar5 = FLinearColor::FLinearColor(&local_18,(TVector4<float> *)&local_28);
  uVar3 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)&(this->SubsurfaceColor).field_0x2c = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)&(this->SubsurfaceColor).field_0x34 = uVar3;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_CustomData0);
  *(float *)&(this->ClearCoat).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_CustomData1);
  *(float *)&(this->ClearCoatRoughness).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X
  ;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_AmbientOcclusion);
  *(float *)&(this->AmbientOcclusion).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,MP_Refraction
                     );
  *(float *)&(this->Refraction).field_0x2c = (float)(pFVar4->DefaultValue).field0_0x0._s_0.X;
  pFVar4 = FMaterialAttributeDefinitionMap::Find
                     (&FMaterialAttributeDefinitionMap::GMaterialPropertyAttributesMap,
                      MP_SurfaceThickness);
  dVar2 = (pFVar4->DefaultValue).field0_0x0._s_0.X;
  this->SubstrateConversionVersion = -1;
  this->SubstrateVersion = -1;
  *(float *)&(this->SurfaceThickness).field_0x2c = (float)dVar2;
  return this;
}

// ~UMaterialEditorOnlyData @ 147ef27d0

void __thiscall UMaterialEditorOnlyData::~UMaterialEditorOnlyData(UMaterialEditorOnlyData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialEditorOnlyData__6B_;
  DestructItems<FParameterGroupData,int>
            ((FParameterGroupData *)(this->ParameterGroupData).AllocatorInstance.Data,
             (this->ParameterGroupData).ArrayNum);
  pFVar1 = (this->ParameterGroupData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExpressionCollection).EditorComments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExpressionCollection).Expressions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialInterfaceEditorOnlyData::~UMaterialInterfaceEditorOnlyData
            ((UMaterialInterfaceEditorOnlyData *)this);
  return;
}

// GetPrivateStaticClass @ 147efd7a0

UClass * __cdecl UMaterialEditorOnlyData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialEditorOnlyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialEditorOnlyData.InnerSingleton,
               StaticRegisterNativesUMaterialEditorOnlyData,0x6b8,8,CLASS_Intrinsic|CLASS_Optional,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialEditorOnlyData>,local_res8,
               UMaterialInterfaceEditorOnlyData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialEditorOnlyData.InnerSingleton;
}

// IsSubstrateAutoConverted @ 147f03a80

bool __thiscall UMaterialEditorOnlyData::IsSubstrateAutoConverted(UMaterialEditorOnlyData *this)

{
  return 0 < this->SubstrateConversionVersion;
}

// ResetSubstrateConversionVersion @ 147f07130

void __thiscall
UMaterialEditorOnlyData::ResetSubstrateConversionVersion(UMaterialEditorOnlyData *this)

{
  this->SubstrateConversionVersion = 0;
  return;
}

// StaticRegisterNativesUMaterialEditorOnlyData @ 147f08540

void __cdecl UMaterialEditorOnlyData::StaticRegisterNativesUMaterialEditorOnlyData(void)

{
  return;
}

