// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f09eb0

UClass * __cdecl UMaterialExpressionSubstrateConvertMaterialAttributes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertMaterialAttributes.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateConvertMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertMaterialAttributes.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateConvertMaterialAttributes,400,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateConvertMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateConvertMaterialAttributes>
               ,local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertMaterialAttributes.
         InnerSingleton;
}

// UMaterialExpressionSubstrateConvertMaterialAttributes @ 147f2a8e0

UMaterialExpressionSubstrateConvertMaterialAttributes * __thiscall
UMaterialExpressionSubstrateConvertMaterialAttributes::
UMaterialExpressionSubstrateConvertMaterialAttributes
          (UMaterialExpressionSubstrateConvertMaterialAttributes *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateConvertMaterialAttributes__6B_;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes).PropertyConnectedMask = 0;
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
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  (this->ShadingModelOverride).Value = '\x01';
  return this;
}

// UMaterialExpressionSubstrateConvertMaterialAttributes @ 147f2a9d0

UMaterialExpressionSubstrateConvertMaterialAttributes * __thiscall
UMaterialExpressionSubstrateConvertMaterialAttributes::
UMaterialExpressionSubstrateConvertMaterialAttributes
          (UMaterialExpressionSubstrateConvertMaterialAttributes *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateConvertMaterialAttributes__6B_;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes).PropertyConnectedMask = 0;
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
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  pvVar1 = ThreadLocalStoragePointer;
  (this->ShadingModelOverride).Value = '\x01';
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Strata,L"MaterialExpressionSubstrate",
                 L"Substrate Conversion",L"Substrate Conversion");
      atexit(`UMaterialExpressionSubstrateConvertMaterialAttributes::
             UMaterialExpressionSubstrateConvertMaterialAttributes'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateConvertMaterialAttributes @ 147f2ef70

void __thiscall
UMaterialExpressionSubstrateConvertMaterialAttributes::
~UMaterialExpressionSubstrateConvertMaterialAttributes
          (UMaterialExpressionSubstrateConvertMaterialAttributes *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42490

UClass * __cdecl UMaterialExpressionSubstrateConvertMaterialAttributes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertMaterialAttributes.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateConvertMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertMaterialAttributes.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateConvertMaterialAttributes,400,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateConvertMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateConvertMaterialAttributes>
               ,local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertMaterialAttributes.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateConvertMaterialAttributes @ 147f52af0

void __cdecl
UMaterialExpressionSubstrateConvertMaterialAttributes::
StaticRegisterNativesUMaterialExpressionSubstrateConvertMaterialAttributes(void)

{
  return;
}

