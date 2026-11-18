// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b88e0

UClass * __cdecl UMaterialExpressionNeuralNetworkOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNeuralNetworkOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNeuralNetworkOutput,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNeuralNetworkOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNeuralNetworkOutput>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkOutput.InnerSingleton;
}

// UMaterialExpressionNeuralNetworkOutput @ 1472c0440

UMaterialExpressionNeuralNetworkOutput * __thiscall
UMaterialExpressionNeuralNetworkOutput::UMaterialExpressionNeuralNetworkOutput
          (UMaterialExpressionNeuralNetworkOutput *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNeuralNetworkOutput__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionNeuralNetworkOutput @ 1472c2110

void __thiscall
UMaterialExpressionNeuralNetworkOutput::~UMaterialExpressionNeuralNetworkOutput
          (UMaterialExpressionNeuralNetworkOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionNeuralNetworkOutput__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4c30

UClass * __cdecl UMaterialExpressionNeuralNetworkOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNeuralNetworkOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNeuralNetworkOutput,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNeuralNetworkOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNeuralNetworkOutput>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNeuralNetworkOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionNeuralNetworkOutput @ 1472c74d0

void __cdecl
UMaterialExpressionNeuralNetworkOutput::StaticRegisterNativesUMaterialExpressionNeuralNetworkOutput
          (void)

{
  return;
}

// UMaterialExpressionNeuralNetworkOutput @ 148afd4e0

UMaterialExpressionNeuralNetworkOutput * __thiscall
UMaterialExpressionNeuralNetworkOutput::UMaterialExpressionNeuralNetworkOutput
          (UMaterialExpressionNeuralNetworkOutput *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNeuralNetworkOutput__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  return this;
}

