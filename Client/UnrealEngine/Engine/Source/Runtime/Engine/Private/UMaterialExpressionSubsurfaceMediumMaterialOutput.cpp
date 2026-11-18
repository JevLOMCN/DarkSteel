// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472cd3c0

UClass * __cdecl UMaterialExpressionSubsurfaceMediumMaterialOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubsurfaceMediumMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubsurfaceMediumMaterialOutput,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubsurfaceMediumMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubsurfaceMediumMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput.InnerSingleton
  ;
}

// UMaterialExpressionSubsurfaceMediumMaterialOutput @ 1472d4100

UMaterialExpressionSubsurfaceMediumMaterialOutput * __thiscall
UMaterialExpressionSubsurfaceMediumMaterialOutput::UMaterialExpressionSubsurfaceMediumMaterialOutput
          (UMaterialExpressionSubsurfaceMediumMaterialOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubsurfaceMediumMaterialOutput__6B_;
  (this->MeanFreePath).OutputIndex = 0;
  (this->MeanFreePath).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MeanFreePath).InputName.Number = 0;
  (this->MeanFreePath).MaskR = 0;
  (this->MeanFreePath).MaskG = 0;
  (this->MeanFreePath).MaskB = 0;
  (this->MeanFreePath).MaskA = 0;
  (this->MeanFreePath).Expression = (UMaterialExpression *)0x0;
  (this->ScatteringDistribution).OutputIndex = 0;
  (this->ScatteringDistribution).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ScatteringDistribution).InputName.Number = 0;
  (this->ScatteringDistribution).MaskR = 0;
  (this->ScatteringDistribution).MaskG = 0;
  (this->ScatteringDistribution).MaskB = 0;
  (this->ScatteringDistribution).MaskA = 0;
  (this->ScatteringDistribution).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionSubsurfaceMediumMaterialOutput @ 1472d4920

void __thiscall
UMaterialExpressionSubsurfaceMediumMaterialOutput::
~UMaterialExpressionSubsurfaceMediumMaterialOutput
          (UMaterialExpressionSubsurfaceMediumMaterialOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubsurfaceMediumMaterialOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 1472d85b0

UClass * __cdecl UMaterialExpressionSubsurfaceMediumMaterialOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubsurfaceMediumMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubsurfaceMediumMaterialOutput,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubsurfaceMediumMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubsurfaceMediumMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubsurfaceMediumMaterialOutput.InnerSingleton
  ;
}

// StaticRegisterNativesUMaterialExpressionSubsurfaceMediumMaterialOutput @ 1472d8ad0

void __cdecl
UMaterialExpressionSubsurfaceMediumMaterialOutput::
StaticRegisterNativesUMaterialExpressionSubsurfaceMediumMaterialOutput(void)

{
  return;
}

// UMaterialExpressionSubsurfaceMediumMaterialOutput @ 148afedf0

UMaterialExpressionSubsurfaceMediumMaterialOutput * __thiscall
UMaterialExpressionSubsurfaceMediumMaterialOutput::UMaterialExpressionSubsurfaceMediumMaterialOutput
          (UMaterialExpressionSubsurfaceMediumMaterialOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubsurfaceMediumMaterialOutput__6B_;
  (this->MeanFreePath).OutputIndex = 0;
  (this->MeanFreePath).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MeanFreePath).InputName.Number = 0;
  (this->MeanFreePath).MaskR = 0;
  (this->MeanFreePath).MaskG = 0;
  (this->MeanFreePath).MaskB = 0;
  (this->MeanFreePath).MaskA = 0;
  (this->MeanFreePath).Expression = (UMaterialExpression *)0x0;
  (this->ScatteringDistribution).OutputIndex = 0;
  (this->ScatteringDistribution).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ScatteringDistribution).InputName.Number = 0;
  (this->ScatteringDistribution).MaskR = 0;
  (this->ScatteringDistribution).MaskG = 0;
  (this->ScatteringDistribution).MaskB = 0;
  (this->ScatteringDistribution).MaskA = 0;
  (this->ScatteringDistribution).Expression = (UMaterialExpression *)0x0;
  return this;
}

// GetDisplayName @ 148b00860

FString * __thiscall
UMaterialExpressionSubsurfaceMediumMaterialOutput::GetDisplayName
          (UMaterialExpressionSubsurfaceMediumMaterialOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Subsurface Medium");
  return __return_storage_ptr__;
}

// GetFunctionName @ 148b00c30

FString * __thiscall
UMaterialExpressionSubsurfaceMediumMaterialOutput::GetFunctionName
          (UMaterialExpressionSubsurfaceMediumMaterialOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetSubsurfaceMediumMaterialOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b021b0

int __thiscall
UMaterialExpressionSubsurfaceMediumMaterialOutput::GetNumOutputs
          (UMaterialExpressionSubsurfaceMediumMaterialOutput *this)

{
  return 2;
}

