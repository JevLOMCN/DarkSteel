// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f09af0

UClass * __cdecl UMaterialExpressionSubstrateSingleLayerWaterBSDF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateSingleLayerWaterBSDF.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateSingleLayerWaterBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateSingleLayerWaterBSDF.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSubstrateSingleLayerWaterBSDF
               ,0x268,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateSingleLayerWaterBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateSingleLayerWaterBSDF>,
               local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateSingleLayerWaterBSDF.InnerSingleton;
}

// UMaterialExpressionSubstrateSingleLayerWaterBSDF @ 147f2c570

UMaterialExpressionSubstrateSingleLayerWaterBSDF * __thiscall
UMaterialExpressionSubstrateSingleLayerWaterBSDF::UMaterialExpressionSubstrateSingleLayerWaterBSDF
          (UMaterialExpressionSubstrateSingleLayerWaterBSDF *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateSingleLayerWaterBSDF__6B_;
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
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->TopMaterialOpacity).OutputIndex = 0;
  (this->TopMaterialOpacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TopMaterialOpacity).InputName.Number = 0;
  (this->TopMaterialOpacity).MaskR = 0;
  (this->TopMaterialOpacity).MaskG = 0;
  (this->TopMaterialOpacity).MaskB = 0;
  (this->TopMaterialOpacity).MaskA = 0;
  (this->TopMaterialOpacity).Expression = (UMaterialExpression *)0x0;
  (this->WaterAlbedo).OutputIndex = 0;
  (this->WaterAlbedo).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WaterAlbedo).InputName.Number = 0;
  (this->WaterAlbedo).MaskR = 0;
  (this->WaterAlbedo).MaskG = 0;
  (this->WaterAlbedo).MaskB = 0;
  (this->WaterAlbedo).MaskA = 0;
  (this->WaterAlbedo).Expression = (UMaterialExpression *)0x0;
  (this->WaterExtinction).OutputIndex = 0;
  (this->WaterExtinction).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WaterExtinction).InputName.Number = 0;
  (this->WaterExtinction).MaskR = 0;
  (this->WaterExtinction).MaskG = 0;
  (this->WaterExtinction).MaskB = 0;
  (this->WaterExtinction).MaskA = 0;
  (this->WaterExtinction).Expression = (UMaterialExpression *)0x0;
  (this->WaterPhaseG).OutputIndex = 0;
  (this->WaterPhaseG).InputName.ComparisonIndex = 0;
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
  return this;
}

// UMaterialExpressionSubstrateSingleLayerWaterBSDF @ 147f2c720

UMaterialExpressionSubstrateSingleLayerWaterBSDF * __thiscall
UMaterialExpressionSubstrateSingleLayerWaterBSDF::UMaterialExpressionSubstrateSingleLayerWaterBSDF
          (UMaterialExpressionSubstrateSingleLayerWaterBSDF *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateSingleLayerWaterBSDF__6B_;
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
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->TopMaterialOpacity).OutputIndex = 0;
  (this->TopMaterialOpacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TopMaterialOpacity).InputName.Number = 0;
  (this->TopMaterialOpacity).MaskR = 0;
  (this->TopMaterialOpacity).MaskG = 0;
  (this->TopMaterialOpacity).MaskB = 0;
  (this->TopMaterialOpacity).MaskA = 0;
  (this->TopMaterialOpacity).Expression = (UMaterialExpression *)0x0;
  (this->WaterAlbedo).OutputIndex = 0;
  (this->WaterAlbedo).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WaterAlbedo).InputName.Number = 0;
  (this->WaterAlbedo).MaskR = 0;
  (this->WaterAlbedo).MaskG = 0;
  (this->WaterAlbedo).MaskB = 0;
  (this->WaterAlbedo).MaskA = 0;
  (this->WaterAlbedo).Expression = (UMaterialExpression *)0x0;
  (this->WaterExtinction).OutputIndex = 0;
  (this->WaterExtinction).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WaterExtinction).InputName.Number = 0;
  (this->WaterExtinction).MaskR = 0;
  (this->WaterExtinction).MaskG = 0;
  (this->WaterExtinction).MaskB = 0;
  (this->WaterExtinction).MaskA = 0;
  (this->WaterExtinction).Expression = (UMaterialExpression *)0x0;
  (this->WaterPhaseG).OutputIndex = 0;
  (this->WaterPhaseG).InputName.ComparisonIndex = 0;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate BSDFs",L"Substrate BSDFs");
      atexit(`UMaterialExpressionSubstrateSingleLayerWaterBSDF::
             UMaterialExpressionSubstrateSingleLayerWaterBSDF'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateSingleLayerWaterBSDF @ 147f2f0f0

void __thiscall
UMaterialExpressionSubstrateSingleLayerWaterBSDF::~UMaterialExpressionSubstrateSingleLayerWaterBSDF
          (UMaterialExpressionSubstrateSingleLayerWaterBSDF *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42d90

UClass * __cdecl UMaterialExpressionSubstrateSingleLayerWaterBSDF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateSingleLayerWaterBSDF.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateSingleLayerWaterBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateSingleLayerWaterBSDF.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSubstrateSingleLayerWaterBSDF
               ,0x268,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateSingleLayerWaterBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateSingleLayerWaterBSDF>,
               local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateSingleLayerWaterBSDF.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateSingleLayerWaterBSDF @ 147f52bb0

void __cdecl
UMaterialExpressionSubstrateSingleLayerWaterBSDF::
StaticRegisterNativesUMaterialExpressionSubstrateSingleLayerWaterBSDF(void)

{
  return;
}

