// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a60f0

UClass * __cdecl UMaterialExpressionLogarithm10::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLogarithm10.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLogarithm10",
               &Z_Registration_Info_UClass_UMaterialExpressionLogarithm10.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLogarithm10,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLogarithm10>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLogarithm10>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLogarithm10.InnerSingleton;
}

// UMaterialExpressionLogarithm10 @ 1472ae430

UMaterialExpressionLogarithm10 * __thiscall
UMaterialExpressionLogarithm10::UMaterialExpressionLogarithm10
          (UMaterialExpressionLogarithm10 *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLogarithm10__6B_;
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

// UMaterialExpressionLogarithm10 @ 1472ae480

UMaterialExpressionLogarithm10 * __thiscall
UMaterialExpressionLogarithm10::UMaterialExpressionLogarithm10
          (UMaterialExpressionLogarithm10 *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLogarithm10__6B_;
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

// ~UMaterialExpressionLogarithm10 @ 1472afbd0

void __thiscall
UMaterialExpressionLogarithm10::~UMaterialExpressionLogarithm10
          (UMaterialExpressionLogarithm10 *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLogarithm10__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3920

UClass * __cdecl UMaterialExpressionLogarithm10::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLogarithm10.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLogarithm10",
               &Z_Registration_Info_UClass_UMaterialExpressionLogarithm10.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLogarithm10,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLogarithm10>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLogarithm10>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLogarithm10.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLogarithm10 @ 1472b4700

void __cdecl
UMaterialExpressionLogarithm10::StaticRegisterNativesUMaterialExpressionLogarithm10(void)

{
  return;
}

