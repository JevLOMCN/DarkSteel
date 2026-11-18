// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cc5f0

UClass * __cdecl UMaterialExpressionSquareRoot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSquareRoot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSquareRoot",
               &Z_Registration_Info_UClass_UMaterialExpressionSquareRoot.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSquareRoot,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSquareRoot>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSquareRoot>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSquareRoot.InnerSingleton;
}

// UMaterialExpressionSquareRoot @ 1472d3c40

UMaterialExpressionSquareRoot * __thiscall
UMaterialExpressionSquareRoot::UMaterialExpressionSquareRoot
          (UMaterialExpressionSquareRoot *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSquareRoot__6B_;
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

// UMaterialExpressionSquareRoot @ 1472d3c90

UMaterialExpressionSquareRoot * __thiscall
UMaterialExpressionSquareRoot::UMaterialExpressionSquareRoot
          (UMaterialExpressionSquareRoot *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSquareRoot__6B_;
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

// ~UMaterialExpressionSquareRoot @ 1472d4840

void __thiscall
UMaterialExpressionSquareRoot::~UMaterialExpressionSquareRoot(UMaterialExpressionSquareRoot *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSquareRoot__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d8070

UClass * __cdecl UMaterialExpressionSquareRoot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSquareRoot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSquareRoot",
               &Z_Registration_Info_UClass_UMaterialExpressionSquareRoot.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSquareRoot,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSquareRoot>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSquareRoot>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSquareRoot.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSquareRoot @ 1472d8a60

void __cdecl UMaterialExpressionSquareRoot::StaticRegisterNativesUMaterialExpressionSquareRoot(void)

{
  return;
}

