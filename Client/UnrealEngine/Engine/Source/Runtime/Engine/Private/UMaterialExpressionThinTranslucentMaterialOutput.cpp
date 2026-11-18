// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472de290

UClass * __cdecl UMaterialExpressionThinTranslucentMaterialOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionThinTranslucentMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionThinTranslucentMaterialOutput
               ,0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionThinTranslucentMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionThinTranslucentMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.InnerSingleton;
}

// UMaterialExpressionThinTranslucentMaterialOutput @ 1472e2580

UMaterialExpressionThinTranslucentMaterialOutput * __thiscall
UMaterialExpressionThinTranslucentMaterialOutput::UMaterialExpressionThinTranslucentMaterialOutput
          (UMaterialExpressionThinTranslucentMaterialOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionThinTranslucentMaterialOutput__6B_;
  (this->TransmittanceColor).OutputIndex = 0;
  (this->TransmittanceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TransmittanceColor).InputName.Number = 0;
  (this->TransmittanceColor).MaskR = 0;
  (this->TransmittanceColor).MaskG = 0;
  (this->TransmittanceColor).MaskB = 0;
  (this->TransmittanceColor).MaskA = 0;
  (this->TransmittanceColor).Expression = (UMaterialExpression *)0x0;
  (this->SurfaceCoverage).OutputIndex = 0;
  (this->SurfaceCoverage).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SurfaceCoverage).InputName.Number = 0;
  (this->SurfaceCoverage).MaskR = 0;
  (this->SurfaceCoverage).MaskG = 0;
  (this->SurfaceCoverage).MaskB = 0;
  (this->SurfaceCoverage).MaskA = 0;
  (this->SurfaceCoverage).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionThinTranslucentMaterialOutput @ 1472e3640

void __thiscall
UMaterialExpressionThinTranslucentMaterialOutput::~UMaterialExpressionThinTranslucentMaterialOutput
          (UMaterialExpressionThinTranslucentMaterialOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionThinTranslucentMaterialOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 1472e62a0

UClass * __cdecl UMaterialExpressionThinTranslucentMaterialOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionThinTranslucentMaterialOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionThinTranslucentMaterialOutput
               ,0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionThinTranslucentMaterialOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionThinTranslucentMaterialOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionThinTranslucentMaterialOutput @ 1472e78f0

void __cdecl
UMaterialExpressionThinTranslucentMaterialOutput::
StaticRegisterNativesUMaterialExpressionThinTranslucentMaterialOutput(void)

{
  return;
}

// UMaterialExpressionThinTranslucentMaterialOutput @ 148aff6a0

UMaterialExpressionThinTranslucentMaterialOutput * __thiscall
UMaterialExpressionThinTranslucentMaterialOutput::UMaterialExpressionThinTranslucentMaterialOutput
          (UMaterialExpressionThinTranslucentMaterialOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionThinTranslucentMaterialOutput__6B_;
  (this->TransmittanceColor).OutputIndex = 0;
  (this->TransmittanceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TransmittanceColor).InputName.Number = 0;
  (this->TransmittanceColor).MaskR = 0;
  (this->TransmittanceColor).MaskG = 0;
  (this->TransmittanceColor).MaskB = 0;
  (this->TransmittanceColor).MaskA = 0;
  (this->TransmittanceColor).Expression = (UMaterialExpression *)0x0;
  (this->SurfaceCoverage).OutputIndex = 0;
  (this->SurfaceCoverage).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SurfaceCoverage).InputName.Number = 0;
  (this->SurfaceCoverage).MaskR = 0;
  (this->SurfaceCoverage).MaskG = 0;
  (this->SurfaceCoverage).MaskB = 0;
  (this->SurfaceCoverage).MaskA = 0;
  (this->SurfaceCoverage).Expression = (UMaterialExpression *)0x0;
  return this;
}

// GetDisplayName @ 148b008c0

FString * __thiscall
UMaterialExpressionThinTranslucentMaterialOutput::GetDisplayName
          (UMaterialExpressionThinTranslucentMaterialOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Thin Translucent Material");
  return __return_storage_ptr__;
}

// GetFunctionName @ 148b00c90

FString * __thiscall
UMaterialExpressionThinTranslucentMaterialOutput::GetFunctionName
          (UMaterialExpressionThinTranslucentMaterialOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetThinTranslucentMaterialOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b021d0

int __thiscall
UMaterialExpressionThinTranslucentMaterialOutput::GetNumOutputs
          (UMaterialExpressionThinTranslucentMaterialOutput *this)

{
  return 2;
}

