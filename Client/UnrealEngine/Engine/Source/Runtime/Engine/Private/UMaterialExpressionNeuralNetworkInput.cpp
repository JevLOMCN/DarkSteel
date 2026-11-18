// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472b8720

UClass * __cdecl UMaterialExpressionNeuralNetworkInput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkInput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNeuralNetworkInput",
               &Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkInput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNeuralNetworkInput,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNeuralNetworkInput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNeuralNetworkInput>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkInput.InnerSingleton;
}

// UMaterialExpressionNeuralNetworkInput @ 1472c03a0

UMaterialExpressionNeuralNetworkInput * __thiscall
UMaterialExpressionNeuralNetworkInput::UMaterialExpressionNeuralNetworkInput
          (UMaterialExpressionNeuralNetworkInput *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNeuralNetworkInput__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->Input0).OutputIndex = 0;
  (this->Input0).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input0).InputName.Number = 0;
  (this->Input0).MaskR = 0;
  (this->Input0).MaskG = 0;
  (this->Input0).MaskB = 0;
  (this->Input0).MaskA = 0;
  (this->Input0).Expression = (UMaterialExpression *)0x0;
  (this->Mask).OutputIndex = 0;
  (this->Mask).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Mask).InputName.Number = 0;
  (this->Mask).MaskR = 0;
  (this->Mask).MaskG = 0;
  (this->Mask).MaskB = 0;
  (this->Mask).MaskA = 0;
  (this->Mask).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionNeuralNetworkInput @ 1472c20f0

void __thiscall
UMaterialExpressionNeuralNetworkInput::~UMaterialExpressionNeuralNetworkInput
          (UMaterialExpressionNeuralNetworkInput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionNeuralNetworkInput__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4b70

UClass * __cdecl UMaterialExpressionNeuralNetworkInput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkInput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNeuralNetworkInput",
               &Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkInput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNeuralNetworkInput,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNeuralNetworkInput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNeuralNetworkInput>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkInput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionNeuralNetworkInput @ 1472c74c0

void __cdecl
UMaterialExpressionNeuralNetworkInput::StaticRegisterNativesUMaterialExpressionNeuralNetworkInput
          (void)

{
  return;
}

// UMaterialExpressionNeuralNetworkInput @ 148afd440

UMaterialExpressionNeuralNetworkInput * __thiscall
UMaterialExpressionNeuralNetworkInput::UMaterialExpressionNeuralNetworkInput
          (UMaterialExpressionNeuralNetworkInput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNeuralNetworkInput__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->Input0).OutputIndex = 0;
  (this->Input0).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input0).InputName.Number = 0;
  (this->Input0).MaskR = 0;
  (this->Input0).MaskG = 0;
  (this->Input0).MaskB = 0;
  (this->Input0).MaskA = 0;
  (this->Input0).Expression = (UMaterialExpression *)0x0;
  (this->Mask).OutputIndex = 0;
  (this->Mask).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Mask).InputName.Number = 0;
  (this->Mask).MaskR = 0;
  (this->Mask).MaskG = 0;
  (this->Mask).MaskB = 0;
  (this->Mask).MaskA = 0;
  (this->Mask).Expression = (UMaterialExpression *)0x0;
  return this;
}

// GetFunctionName @ 148b00ba0

FString * __thiscall
UMaterialExpressionNeuralNetworkInput::GetFunctionName
          (UMaterialExpressionNeuralNetworkInput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetNeuralInput");
  return __return_storage_ptr__;
}

// GetNumOutputs @ 148b02180

int __thiscall
UMaterialExpressionNeuralNetworkInput::GetNumOutputs(UMaterialExpressionNeuralNetworkInput *this)

{
  return 3;
}

