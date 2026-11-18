// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472862e0

UClass * __cdecl UMaterialExpressionBentNormalCustomOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBentNormalCustomOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBentNormalCustomOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionBentNormalCustomOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBentNormalCustomOutput,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBentNormalCustomOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBentNormalCustomOutput>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBentNormalCustomOutput.InnerSingleton;
}

// UMaterialExpressionBentNormalCustomOutput @ 14728cc00

UMaterialExpressionBentNormalCustomOutput * __thiscall
UMaterialExpressionBentNormalCustomOutput::UMaterialExpressionBentNormalCustomOutput
          (UMaterialExpressionBentNormalCustomOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBentNormalCustomOutput__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionBentNormalCustomOutput @ 14728d810

void __thiscall
UMaterialExpressionBentNormalCustomOutput::~UMaterialExpressionBentNormalCustomOutput
          (UMaterialExpressionBentNormalCustomOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionBentNormalCustomOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetDisplayName @ 14728efd0

FString * __thiscall
UMaterialExpressionBentNormalCustomOutput::GetDisplayName
          (UMaterialExpressionBentNormalCustomOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"BentNormal");
  return __return_storage_ptr__;
}

// GetFunctionName @ 14728f020

FString * __thiscall
UMaterialExpressionBentNormalCustomOutput::GetFunctionName
          (UMaterialExpressionBentNormalCustomOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetBentNormal");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 14728f060

int __thiscall
UMaterialExpressionBentNormalCustomOutput::GetNumOutputs
          (UMaterialExpressionBentNormalCustomOutput *this)

{
  return 1;
}

// GetPrivateStaticClass @ 147290c10

UClass * __cdecl UMaterialExpressionBentNormalCustomOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBentNormalCustomOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBentNormalCustomOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionBentNormalCustomOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBentNormalCustomOutput,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBentNormalCustomOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBentNormalCustomOutput>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBentNormalCustomOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionBentNormalCustomOutput @ 1472914c0

void __cdecl
UMaterialExpressionBentNormalCustomOutput::
StaticRegisterNativesUMaterialExpressionBentNormalCustomOutput(void)

{
  return;
}

// UMaterialExpressionBentNormalCustomOutput @ 148afa970

UMaterialExpressionBentNormalCustomOutput * __thiscall
UMaterialExpressionBentNormalCustomOutput::UMaterialExpressionBentNormalCustomOutput
          (UMaterialExpressionBentNormalCustomOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBentNormalCustomOutput__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

