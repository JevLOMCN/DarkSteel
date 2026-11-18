// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b78d0

UClass * __cdecl UMaterialExpressionMultiply::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMultiply.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMultiply",
               &Z_Registration_Info_UClass_UMaterialExpressionMultiply.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMultiply,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMultiply>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMultiply>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMultiply.InnerSingleton;
}

// UMaterialExpressionMultiply @ 1472c0070

UMaterialExpressionMultiply * __thiscall
UMaterialExpressionMultiply::UMaterialExpressionMultiply
          (UMaterialExpressionMultiply *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstB = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionMultiply__6B_;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->B).OutputIndex = 0;
  (this->B).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->B).InputName.Number = 0;
  (this->B).MaskR = 0;
  (this->B).MaskG = 0;
  (this->B).MaskB = 0;
  (this->B).MaskA = 0;
  (this->B).Expression = (UMaterialExpression *)0x0;
  this->ConstA = 0.0;
  return this;
}

// UMaterialExpressionMultiply @ 1472c00f0

UMaterialExpressionMultiply * __thiscall
UMaterialExpressionMultiply::UMaterialExpressionMultiply
          (UMaterialExpressionMultiply *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstB = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionMultiply__6B_;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->B).OutputIndex = 0;
  (this->B).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->B).InputName.Number = 0;
  (this->B).MaskR = 0;
  (this->B).MaskG = 0;
  (this->B).MaskB = 0;
  (this->B).MaskA = 0;
  (this->B).Expression = (UMaterialExpression *)0x0;
  this->ConstA = 0.0;
  return this;
}

// ~UMaterialExpressionMultiply @ 1472c2050

void __thiscall
UMaterialExpressionMultiply::~UMaterialExpressionMultiply(UMaterialExpressionMultiply *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMultiply__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c47b0

UClass * __cdecl UMaterialExpressionMultiply::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMultiply.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMultiply",
               &Z_Registration_Info_UClass_UMaterialExpressionMultiply.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMultiply,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMultiply>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMultiply>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMultiply.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMultiply @ 1472c7470

void __cdecl UMaterialExpressionMultiply::StaticRegisterNativesUMaterialExpressionMultiply(void)

{
  return;
}

