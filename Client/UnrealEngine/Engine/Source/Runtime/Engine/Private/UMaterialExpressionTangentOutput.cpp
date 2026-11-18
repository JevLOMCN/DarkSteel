// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472db6d0

UClass * __cdecl UMaterialExpressionTangentOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTangentOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTangentOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionTangentOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTangentOutput,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTangentOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTangentOutput>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTangentOutput.InnerSingleton;
}

// UMaterialExpressionTangentOutput @ 1472e1c30

UMaterialExpressionTangentOutput * __thiscall
UMaterialExpressionTangentOutput::UMaterialExpressionTangentOutput
          (UMaterialExpressionTangentOutput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTangentOutput__6B_;
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

// ~UMaterialExpressionTangentOutput @ 1472e3380

void __thiscall
UMaterialExpressionTangentOutput::~UMaterialExpressionTangentOutput
          (UMaterialExpressionTangentOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTangentOutput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetDisplayName @ 1472e5200

FString * __thiscall
UMaterialExpressionTangentOutput::GetDisplayName
          (UMaterialExpressionTangentOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"CustomEyeTangent");
  return __return_storage_ptr__;
}

// GetFunctionName @ 1472e5230

FString * __thiscall
UMaterialExpressionTangentOutput::GetFunctionName
          (UMaterialExpressionTangentOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetTangentOutput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 1472e52d0

int __thiscall
UMaterialExpressionTangentOutput::GetNumOutputs(UMaterialExpressionTangentOutput *this)

{
  return 1;
}

// GetPrivateStaticClass @ 1472e5460

UClass * __cdecl UMaterialExpressionTangentOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTangentOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTangentOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionTangentOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTangentOutput,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTangentOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTangentOutput>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTangentOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTangentOutput @ 1472e77c0

void __cdecl
UMaterialExpressionTangentOutput::StaticRegisterNativesUMaterialExpressionTangentOutput(void)

{
  return;
}

// UMaterialExpressionTangentOutput @ 148aff010

UMaterialExpressionTangentOutput * __thiscall
UMaterialExpressionTangentOutput::UMaterialExpressionTangentOutput
          (UMaterialExpressionTangentOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTangentOutput__6B_;
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

