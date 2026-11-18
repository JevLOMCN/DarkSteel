// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472962a0

UClass * __cdecl UMaterialExpressionCrossProduct::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCrossProduct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCrossProduct",
               &Z_Registration_Info_UClass_UMaterialExpressionCrossProduct.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCrossProduct,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCrossProduct>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCrossProduct>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCrossProduct.InnerSingleton;
}

// UMaterialExpressionCrossProduct @ 14729cae0

UMaterialExpressionCrossProduct * __thiscall
UMaterialExpressionCrossProduct::UMaterialExpressionCrossProduct
          (UMaterialExpressionCrossProduct *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionCrossProduct__6B_;
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
  return this;
}

// UMaterialExpressionCrossProduct @ 14729cb50

UMaterialExpressionCrossProduct * __thiscall
UMaterialExpressionCrossProduct::UMaterialExpressionCrossProduct
          (UMaterialExpressionCrossProduct *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionCrossProduct__6B_;
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
  return this;
}

// ~UMaterialExpressionCrossProduct @ 14729da40

void __thiscall
UMaterialExpressionCrossProduct::~UMaterialExpressionCrossProduct
          (UMaterialExpressionCrossProduct *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionCrossProduct__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0950

UClass * __cdecl UMaterialExpressionCrossProduct::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCrossProduct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCrossProduct",
               &Z_Registration_Info_UClass_UMaterialExpressionCrossProduct.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCrossProduct,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCrossProduct>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCrossProduct>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCrossProduct.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionCrossProduct @ 1472a1d80

void __cdecl
UMaterialExpressionCrossProduct::StaticRegisterNativesUMaterialExpressionCrossProduct(void)

{
  return;
}

