// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a5ef0

UClass * __cdecl UMaterialExpressionLogarithm::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLogarithm.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLogarithm",
               &Z_Registration_Info_UClass_UMaterialExpressionLogarithm.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLogarithm,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLogarithm>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLogarithm>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLogarithm.InnerSingleton;
}

// UMaterialExpressionLogarithm @ 1472ae570

UMaterialExpressionLogarithm * __thiscall
UMaterialExpressionLogarithm::UMaterialExpressionLogarithm
          (UMaterialExpressionLogarithm *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLogarithm__6B_;
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

// UMaterialExpressionLogarithm @ 1472ae5c0

UMaterialExpressionLogarithm * __thiscall
UMaterialExpressionLogarithm::UMaterialExpressionLogarithm
          (UMaterialExpressionLogarithm *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLogarithm__6B_;
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

// ~UMaterialExpressionLogarithm @ 1472afc10

void __thiscall
UMaterialExpressionLogarithm::~UMaterialExpressionLogarithm(UMaterialExpressionLogarithm *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLogarithm__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3aa0

UClass * __cdecl UMaterialExpressionLogarithm::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLogarithm.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLogarithm",
               &Z_Registration_Info_UClass_UMaterialExpressionLogarithm.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLogarithm,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLogarithm>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLogarithm>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLogarithm.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLogarithm @ 1472b4720

void __cdecl UMaterialExpressionLogarithm::StaticRegisterNativesUMaterialExpressionLogarithm(void)

{
  return;
}

