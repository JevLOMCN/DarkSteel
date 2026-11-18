// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a6400

UClass * __cdecl UMaterialExpressionLogarithm2::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLogarithm2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLogarithm2",
               &Z_Registration_Info_UClass_UMaterialExpressionLogarithm2.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLogarithm2,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLogarithm2>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLogarithm2>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLogarithm2.InnerSingleton;
}

// UMaterialExpressionLogarithm2 @ 1472ae4d0

UMaterialExpressionLogarithm2 * __thiscall
UMaterialExpressionLogarithm2::UMaterialExpressionLogarithm2
          (UMaterialExpressionLogarithm2 *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLogarithm2__6B_;
  (this->X).OutputIndex = 0;
  (this->X).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->X).InputName.Number = 0;
  (this->X).MaskR = 0;
  (this->X).MaskG = 0;
  (this->X).MaskB = 0;
  (this->X).MaskA = 0;
  (this->X).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionLogarithm2 @ 1472ae520

UMaterialExpressionLogarithm2 * __thiscall
UMaterialExpressionLogarithm2::UMaterialExpressionLogarithm2
          (UMaterialExpressionLogarithm2 *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLogarithm2__6B_;
  (this->X).OutputIndex = 0;
  (this->X).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->X).InputName.Number = 0;
  (this->X).MaskR = 0;
  (this->X).MaskG = 0;
  (this->X).MaskB = 0;
  (this->X).MaskA = 0;
  (this->X).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionLogarithm2 @ 1472afbf0

void __thiscall
UMaterialExpressionLogarithm2::~UMaterialExpressionLogarithm2(UMaterialExpressionLogarithm2 *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLogarithm2__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b39e0

UClass * __cdecl UMaterialExpressionLogarithm2::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLogarithm2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLogarithm2",
               &Z_Registration_Info_UClass_UMaterialExpressionLogarithm2.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLogarithm2,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLogarithm2>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLogarithm2>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLogarithm2.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLogarithm2 @ 1472b4710

void __cdecl UMaterialExpressionLogarithm2::StaticRegisterNativesUMaterialExpressionLogarithm2(void)

{
  return;
}

