// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0e4a0

UClass * __cdecl UMaterialExpressionSubstrateShadingModels::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateShadingModels.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateShadingModels",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateShadingModels.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateShadingModels,0x410,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateShadingModels>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateShadingModels>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateShadingModels.InnerSingleton;
}

// UMaterialExpressionSubstrateShadingModels @ 147f2bb90

UMaterialExpressionSubstrateShadingModels * __thiscall
UMaterialExpressionSubstrateShadingModels::UMaterialExpressionSubstrateShadingModels
          (UMaterialExpressionSubstrateShadingModels *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateShadingModels__6B_;
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
  (this->SubSurfaceColor).OutputIndex = 0;
  (this->SubSurfaceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SubSurfaceColor).InputName.Number = 0;
  (this->SubSurfaceColor).MaskR = 0;
  (this->SubSurfaceColor).MaskG = 0;
  (this->SubSurfaceColor).MaskB = 0;
  (this->SubSurfaceColor).MaskA = 0;
  (this->SubSurfaceColor).Expression = (UMaterialExpression *)0x0;
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
  (this->Opacity).OutputIndex = 0;
  (this->Opacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Opacity).InputName.Number = 0;
  (this->Opacity).MaskR = 0;
  (this->Opacity).MaskG = 0;
  (this->Opacity).MaskB = 0;
  (this->Opacity).MaskA = 0;
  (this->Opacity).Expression = (UMaterialExpression *)0x0;
  (this->TransmittanceColor).OutputIndex = 0;
  (this->TransmittanceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TransmittanceColor).InputName.Number = 0;
  (this->TransmittanceColor).MaskR = 0;
  (this->TransmittanceColor).MaskG = 0;
  (this->TransmittanceColor).MaskB = 0;
  (this->TransmittanceColor).MaskA = 0;
  (this->TransmittanceColor).Expression = (UMaterialExpression *)0x0;
  (this->WaterScatteringCoefficients).OutputIndex = 0;
  (this->WaterScatteringCoefficients).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WaterScatteringCoefficients).InputName.Number = 0;
  (this->WaterScatteringCoefficients).MaskR = 0;
  (this->WaterScatteringCoefficients).MaskG = 0;
  (this->WaterScatteringCoefficients).MaskB = 0;
  (this->WaterScatteringCoefficients).MaskA = 0;
  (this->WaterScatteringCoefficients).Expression = (UMaterialExpression *)0x0;
  (this->WaterAbsorptionCoefficients).OutputIndex = 0;
  (this->WaterAbsorptionCoefficients).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WaterAbsorptionCoefficients).InputName.Number = 0;
  (this->WaterAbsorptionCoefficients).MaskR = 0;
  (this->WaterAbsorptionCoefficients).MaskG = 0;
  (this->WaterAbsorptionCoefficients).MaskB = 0;
  (this->WaterAbsorptionCoefficients).MaskA = 0;
  (this->WaterAbsorptionCoefficients).Expression = (UMaterialExpression *)0x0;
  (this->WaterPhaseG).OutputIndex = 0;
  (this->WaterPhaseG).InputName.ComparisonIndex = 0;
  puVar1 = &(this->ShadingModel).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  *(undefined8 *)&(this->WaterPhaseG).InputName.Number = 0;
  (this->WaterPhaseG).MaskR = 0;
  (this->WaterPhaseG).MaskG = 0;
  (this->WaterPhaseG).MaskB = 0;
  (this->WaterPhaseG).MaskA = 0;
  (this->WaterPhaseG).Expression = (UMaterialExpression *)0x0;
  (this->ColorScaleBehindWater).OutputIndex = 0;
  (this->ColorScaleBehindWater).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ColorScaleBehindWater).InputName.Number = 0;
  (this->ColorScaleBehindWater).MaskR = 0;
  (this->ColorScaleBehindWater).MaskG = 0;
  (this->ColorScaleBehindWater).MaskB = 0;
  (this->ColorScaleBehindWater).MaskA = 0;
  (this->ColorScaleBehindWater).Expression = (UMaterialExpression *)0x0;
  (this->ClearCoatNormal).OutputIndex = 0;
  (this->ClearCoatNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClearCoatNormal).InputName.Number = 0;
  (this->ClearCoatNormal).MaskR = 0;
  (this->ClearCoatNormal).MaskG = 0;
  (this->ClearCoatNormal).MaskB = 0;
  (this->ClearCoatNormal).MaskA = 0;
  (this->ClearCoatNormal).Expression = (UMaterialExpression *)0x0;
  (this->CustomTangent).OutputIndex = 0;
  (this->CustomTangent).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CustomTangent).InputName.Number = 0;
  (this->CustomTangent).MaskR = 0;
  (this->CustomTangent).MaskG = 0;
  (this->CustomTangent).MaskB = 0;
  (this->CustomTangent).MaskA = 0;
  (this->CustomTangent).Expression = (UMaterialExpression *)0x0;
  *(undefined8 *)&(this->ShadingModel).field_0x8 = 0;
  *(undefined8 *)&(this->ShadingModel).field_0x10 = 0;
  *(undefined8 *)&(this->ShadingModel).field_0x18 = 0;
  *(undefined8 *)&(this->ShadingModel).field_0x20 = 0;
  *(undefined8 *)&this->ShadingModel = 0;
  *(undefined4 *)&(this->ShadingModel).field_0x2c = 0;
  (this->ThinTranslucentSurfaceCoverage).OutputIndex = 0;
  (this->ThinTranslucentSurfaceCoverage).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ThinTranslucentSurfaceCoverage).InputName.Number = 0;
  (this->ThinTranslucentSurfaceCoverage).MaskR = 0;
  (this->ThinTranslucentSurfaceCoverage).MaskG = 0;
  (this->ThinTranslucentSurfaceCoverage).MaskB = 0;
  (this->ThinTranslucentSurfaceCoverage).MaskA = 0;
  (this->ThinTranslucentSurfaceCoverage).Expression = (UMaterialExpression *)0x0;
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  (this->ShadingModelOverride).Value = '\x01';
  return this;
}

// UMaterialExpressionSubstrateShadingModels @ 147f2bec0

UMaterialExpressionSubstrateShadingModels * __thiscall
UMaterialExpressionSubstrateShadingModels::UMaterialExpressionSubstrateShadingModels
          (UMaterialExpressionSubstrateShadingModels *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateShadingModels__6B_;
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
  (this->SubSurfaceColor).OutputIndex = 0;
  (this->SubSurfaceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SubSurfaceColor).InputName.Number = 0;
  (this->SubSurfaceColor).MaskR = 0;
  (this->SubSurfaceColor).MaskG = 0;
  (this->SubSurfaceColor).MaskB = 0;
  (this->SubSurfaceColor).MaskA = 0;
  (this->SubSurfaceColor).Expression = (UMaterialExpression *)0x0;
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
  (this->Opacity).OutputIndex = 0;
  (this->Opacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Opacity).InputName.Number = 0;
  (this->Opacity).MaskR = 0;
  (this->Opacity).MaskG = 0;
  (this->Opacity).MaskB = 0;
  (this->Opacity).MaskA = 0;
  (this->Opacity).Expression = (UMaterialExpression *)0x0;
  (this->TransmittanceColor).OutputIndex = 0;
  (this->TransmittanceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TransmittanceColor).InputName.Number = 0;
  (this->TransmittanceColor).MaskR = 0;
  (this->TransmittanceColor).MaskG = 0;
  (this->TransmittanceColor).MaskB = 0;
  (this->TransmittanceColor).MaskA = 0;
  (this->TransmittanceColor).Expression = (UMaterialExpression *)0x0;
  (this->WaterScatteringCoefficients).OutputIndex = 0;
  (this->WaterScatteringCoefficients).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WaterScatteringCoefficients).InputName.Number = 0;
  (this->WaterScatteringCoefficients).MaskR = 0;
  (this->WaterScatteringCoefficients).MaskG = 0;
  (this->WaterScatteringCoefficients).MaskB = 0;
  (this->WaterScatteringCoefficients).MaskA = 0;
  (this->WaterScatteringCoefficients).Expression = (UMaterialExpression *)0x0;
  (this->WaterAbsorptionCoefficients).OutputIndex = 0;
  (this->WaterAbsorptionCoefficients).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WaterAbsorptionCoefficients).InputName.Number = 0;
  (this->WaterAbsorptionCoefficients).MaskR = 0;
  (this->WaterAbsorptionCoefficients).MaskG = 0;
  (this->WaterAbsorptionCoefficients).MaskB = 0;
  (this->WaterAbsorptionCoefficients).MaskA = 0;
  (this->WaterAbsorptionCoefficients).Expression = (UMaterialExpression *)0x0;
  (this->WaterPhaseG).OutputIndex = 0;
  (this->WaterPhaseG).InputName.ComparisonIndex = 0;
  puVar1 = &(this->ShadingModel).field_0x28;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffe;
  uVar3 = (ulonglong)_tls_index;
  *(undefined8 *)&(this->WaterPhaseG).InputName.Number = 0;
  (this->WaterPhaseG).MaskR = 0;
  (this->WaterPhaseG).MaskG = 0;
  (this->WaterPhaseG).MaskB = 0;
  (this->WaterPhaseG).MaskA = 0;
  (this->WaterPhaseG).Expression = (UMaterialExpression *)0x0;
  (this->ColorScaleBehindWater).OutputIndex = 0;
  (this->ColorScaleBehindWater).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ColorScaleBehindWater).InputName.Number = 0;
  (this->ColorScaleBehindWater).MaskR = 0;
  (this->ColorScaleBehindWater).MaskG = 0;
  (this->ColorScaleBehindWater).MaskB = 0;
  (this->ColorScaleBehindWater).MaskA = 0;
  (this->ColorScaleBehindWater).Expression = (UMaterialExpression *)0x0;
  (this->ClearCoatNormal).OutputIndex = 0;
  (this->ClearCoatNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClearCoatNormal).InputName.Number = 0;
  (this->ClearCoatNormal).MaskR = 0;
  (this->ClearCoatNormal).MaskG = 0;
  (this->ClearCoatNormal).MaskB = 0;
  (this->ClearCoatNormal).MaskA = 0;
  (this->ClearCoatNormal).Expression = (UMaterialExpression *)0x0;
  (this->CustomTangent).OutputIndex = 0;
  (this->CustomTangent).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CustomTangent).InputName.Number = 0;
  (this->CustomTangent).MaskR = 0;
  (this->CustomTangent).MaskG = 0;
  (this->CustomTangent).MaskB = 0;
  (this->CustomTangent).MaskA = 0;
  (this->CustomTangent).Expression = (UMaterialExpression *)0x0;
  *(undefined8 *)&(this->ShadingModel).field_0x8 = 0;
  *(undefined8 *)&(this->ShadingModel).field_0x10 = 0;
  *(undefined8 *)&(this->ShadingModel).field_0x18 = 0;
  *(undefined8 *)&(this->ShadingModel).field_0x20 = 0;
  *(undefined8 *)&this->ShadingModel = 0;
  *(undefined4 *)&(this->ShadingModel).field_0x2c = 0;
  (this->ThinTranslucentSurfaceCoverage).OutputIndex = 0;
  (this->ThinTranslucentSurfaceCoverage).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ThinTranslucentSurfaceCoverage).InputName.Number = 0;
  (this->ThinTranslucentSurfaceCoverage).MaskR = 0;
  (this->ThinTranslucentSurfaceCoverage).MaskG = 0;
  (this->ThinTranslucentSurfaceCoverage).MaskB = 0;
  (this->ThinTranslucentSurfaceCoverage).MaskA = 0;
  (this->ThinTranslucentSurfaceCoverage).Expression = (UMaterialExpression *)0x0;
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  pvVar2 = ThreadLocalStoragePointer;
  (this->ShadingModelOverride).Value = '\x01';
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar3 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate Conversion",L"Substrate Conversion");
      atexit(`UMaterialExpressionSubstrateShadingModels::UMaterialExpressionSubstrateShadingModels'
             ::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateShadingModels @ 147f2f0b0

void __thiscall
UMaterialExpressionSubstrateShadingModels::~UMaterialExpressionSubstrateShadingModels
          (UMaterialExpressionSubstrateShadingModels *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42c10

UClass * __cdecl UMaterialExpressionSubstrateShadingModels::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateShadingModels.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateShadingModels",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateShadingModels.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateShadingModels,0x410,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateShadingModels>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateShadingModels>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateShadingModels.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateShadingModels @ 147f52b90

void __cdecl
UMaterialExpressionSubstrateShadingModels::
StaticRegisterNativesUMaterialExpressionSubstrateShadingModels(void)

{
  return;
}

