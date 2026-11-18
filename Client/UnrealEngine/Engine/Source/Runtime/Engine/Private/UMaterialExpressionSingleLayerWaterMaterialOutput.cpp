// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472cdb80

UClass * __cdecl UMaterialExpressionSingleLayerWaterMaterialOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSingleLayerWaterMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSingleLayerWaterMaterialOutput,0x150,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSingleLayerWaterMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSingleLayerWaterMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput.InnerSingleton
  ;
}

// UMaterialExpressionSingleLayerWaterMaterialOutput @ 1472d2e00

UMaterialExpressionSingleLayerWaterMaterialOutput * __thiscall
UMaterialExpressionSingleLayerWaterMaterialOutput::UMaterialExpressionSingleLayerWaterMaterialOutput
          (UMaterialExpressionSingleLayerWaterMaterialOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSingleLayerWaterMaterialOutput__6B_;
  (this->ScatteringCoefficients).OutputIndex = 0;
  (this->ScatteringCoefficients).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ScatteringCoefficients).InputName.Number = 0;
  (this->ScatteringCoefficients).MaskR = 0;
  (this->ScatteringCoefficients).MaskG = 0;
  (this->ScatteringCoefficients).MaskB = 0;
  (this->ScatteringCoefficients).MaskA = 0;
  (this->ScatteringCoefficients).Expression = (UMaterialExpression *)0x0;
  (this->AbsorptionCoefficients).OutputIndex = 0;
  (this->AbsorptionCoefficients).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AbsorptionCoefficients).InputName.Number = 0;
  (this->AbsorptionCoefficients).MaskR = 0;
  (this->AbsorptionCoefficients).MaskG = 0;
  (this->AbsorptionCoefficients).MaskB = 0;
  (this->AbsorptionCoefficients).MaskA = 0;
  (this->AbsorptionCoefficients).Expression = (UMaterialExpression *)0x0;
  (this->PhaseG).OutputIndex = 0;
  (this->PhaseG).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PhaseG).InputName.Number = 0;
  (this->PhaseG).MaskR = 0;
  (this->PhaseG).MaskG = 0;
  (this->PhaseG).MaskB = 0;
  (this->PhaseG).MaskA = 0;
  (this->PhaseG).Expression = (UMaterialExpression *)0x0;
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

// ~UMaterialExpressionSingleLayerWaterMaterialOutput @ 1472d45e0

void __thiscall
UMaterialExpressionSingleLayerWaterMaterialOutput::
~UMaterialExpressionSingleLayerWaterMaterialOutput
          (UMaterialExpressionSingleLayerWaterMaterialOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSingleLayerWaterMaterialOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7230

UClass * __cdecl UMaterialExpressionSingleLayerWaterMaterialOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSingleLayerWaterMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSingleLayerWaterMaterialOutput,0x150,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSingleLayerWaterMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSingleLayerWaterMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSingleLayerWaterMaterialOutput.InnerSingleton
  ;
}

// StaticRegisterNativesUMaterialExpressionSingleLayerWaterMaterialOutput @ 1472d8930

void __cdecl
UMaterialExpressionSingleLayerWaterMaterialOutput::
StaticRegisterNativesUMaterialExpressionSingleLayerWaterMaterialOutput(void)

{
  return;
}

// UMaterialExpressionSingleLayerWaterMaterialOutput @ 148afe900

UMaterialExpressionSingleLayerWaterMaterialOutput * __thiscall
UMaterialExpressionSingleLayerWaterMaterialOutput::UMaterialExpressionSingleLayerWaterMaterialOutput
          (UMaterialExpressionSingleLayerWaterMaterialOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSingleLayerWaterMaterialOutput__6B_;
  (this->ScatteringCoefficients).OutputIndex = 0;
  (this->ScatteringCoefficients).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ScatteringCoefficients).InputName.Number = 0;
  (this->ScatteringCoefficients).MaskR = 0;
  (this->ScatteringCoefficients).MaskG = 0;
  (this->ScatteringCoefficients).MaskB = 0;
  (this->ScatteringCoefficients).MaskA = 0;
  (this->ScatteringCoefficients).Expression = (UMaterialExpression *)0x0;
  (this->AbsorptionCoefficients).OutputIndex = 0;
  (this->AbsorptionCoefficients).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AbsorptionCoefficients).InputName.Number = 0;
  (this->AbsorptionCoefficients).MaskR = 0;
  (this->AbsorptionCoefficients).MaskG = 0;
  (this->AbsorptionCoefficients).MaskB = 0;
  (this->AbsorptionCoefficients).MaskA = 0;
  (this->AbsorptionCoefficients).Expression = (UMaterialExpression *)0x0;
  (this->PhaseG).OutputIndex = 0;
  (this->PhaseG).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PhaseG).InputName.Number = 0;
  (this->PhaseG).MaskR = 0;
  (this->PhaseG).MaskG = 0;
  (this->PhaseG).MaskB = 0;
  (this->PhaseG).MaskA = 0;
  (this->PhaseG).Expression = (UMaterialExpression *)0x0;
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

// GetDisplayName @ 148b00830

FString * __thiscall
UMaterialExpressionSingleLayerWaterMaterialOutput::GetDisplayName
          (UMaterialExpressionSingleLayerWaterMaterialOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Single Layer Water Material");
  return __return_storage_ptr__;
}

// GetFunctionName @ 148b00c00

FString * __thiscall
UMaterialExpressionSingleLayerWaterMaterialOutput::GetFunctionName
          (UMaterialExpressionSingleLayerWaterMaterialOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetSingleLayerWaterMaterialOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b021a0

int __thiscall
UMaterialExpressionSingleLayerWaterMaterialOutput::GetNumOutputs
          (UMaterialExpressionSingleLayerWaterMaterialOutput *this)

{
  return 4;
}

