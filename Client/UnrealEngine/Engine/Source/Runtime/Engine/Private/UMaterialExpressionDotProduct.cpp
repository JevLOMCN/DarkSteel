// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a44b0

UClass * __cdecl UMaterialExpressionDotProduct::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDotProduct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDotProduct",
               &Z_Registration_Info_UClass_UMaterialExpressionDotProduct.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDotProduct,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDotProduct>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDotProduct>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDotProduct.InnerSingleton;
}

// UMaterialExpressionDotProduct @ 1472acb10

UMaterialExpressionDotProduct * __thiscall
UMaterialExpressionDotProduct::UMaterialExpressionDotProduct
          (UMaterialExpressionDotProduct *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDotProduct__6B_;
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

// UMaterialExpressionDotProduct @ 1472acb80

UMaterialExpressionDotProduct * __thiscall
UMaterialExpressionDotProduct::UMaterialExpressionDotProduct
          (UMaterialExpressionDotProduct *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDotProduct__6B_;
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

// ~UMaterialExpressionDotProduct @ 1472af5a0

void __thiscall
UMaterialExpressionDotProduct::~UMaterialExpressionDotProduct(UMaterialExpressionDotProduct *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDotProduct__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b1d60

UClass * __cdecl UMaterialExpressionDotProduct::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDotProduct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDotProduct",
               &Z_Registration_Info_UClass_UMaterialExpressionDotProduct.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDotProduct,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDotProduct>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDotProduct>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDotProduct.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDotProduct @ 1472b44b0

void __cdecl UMaterialExpressionDotProduct::StaticRegisterNativesUMaterialExpressionDotProduct(void)

{
  return;
}

