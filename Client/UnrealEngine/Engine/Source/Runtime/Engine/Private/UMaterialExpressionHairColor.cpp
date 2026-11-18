// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a7c90

UClass * __cdecl UMaterialExpressionHairColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionHairColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionHairColor",
               &Z_Registration_Info_UClass_UMaterialExpressionHairColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionHairColor,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionHairColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionHairColor>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionHairColor.InnerSingleton;
}

// UMaterialExpressionHairColor @ 1472ad9a0

UMaterialExpressionHairColor * __thiscall
UMaterialExpressionHairColor::UMaterialExpressionHairColor
          (UMaterialExpressionHairColor *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionHairColor__6B_;
  (this->Melanin).OutputIndex = 0;
  (this->Melanin).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Melanin).InputName.Number = 0;
  (this->Melanin).MaskR = 0;
  (this->Melanin).MaskG = 0;
  (this->Melanin).MaskB = 0;
  (this->Melanin).MaskA = 0;
  (this->Melanin).Expression = (UMaterialExpression *)0x0;
  (this->Redness).OutputIndex = 0;
  (this->Redness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Redness).InputName.Number = 0;
  (this->Redness).MaskR = 0;
  (this->Redness).MaskG = 0;
  (this->Redness).MaskB = 0;
  (this->Redness).MaskA = 0;
  (this->Redness).Expression = (UMaterialExpression *)0x0;
  (this->DyeColor).OutputIndex = 0;
  (this->DyeColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DyeColor).InputName.Number = 0;
  (this->DyeColor).MaskR = 0;
  (this->DyeColor).MaskG = 0;
  (this->DyeColor).MaskB = 0;
  (this->DyeColor).MaskA = 0;
  (this->DyeColor).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionHairColor @ 1472af9b0

void __thiscall
UMaterialExpressionHairColor::~UMaterialExpressionHairColor(UMaterialExpressionHairColor *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionHairColor__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2f60

UClass * __cdecl UMaterialExpressionHairColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionHairColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionHairColor",
               &Z_Registration_Info_UClass_UMaterialExpressionHairColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionHairColor,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionHairColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionHairColor>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionHairColor.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionHairColor @ 1472b4630

void __cdecl UMaterialExpressionHairColor::StaticRegisterNativesUMaterialExpressionHairColor(void)

{
  return;
}

// UMaterialExpressionHairColor @ 148afc7f0

UMaterialExpressionHairColor * __thiscall
UMaterialExpressionHairColor::UMaterialExpressionHairColor
          (UMaterialExpressionHairColor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionHairColor__6B_;
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
  (this->Melanin).OutputIndex = 0;
  (this->Melanin).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Melanin).InputName.Number = 0;
  (this->Melanin).MaskR = 0;
  (this->Melanin).MaskG = 0;
  (this->Melanin).MaskB = 0;
  (this->Melanin).MaskA = 0;
  (this->Melanin).Expression = (UMaterialExpression *)0x0;
  (this->Redness).OutputIndex = 0;
  (this->Redness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Redness).InputName.Number = 0;
  (this->Redness).MaskR = 0;
  (this->Redness).MaskG = 0;
  (this->Redness).MaskB = 0;
  (this->Redness).MaskA = 0;
  (this->Redness).Expression = (UMaterialExpression *)0x0;
  (this->DyeColor).OutputIndex = 0;
  (this->DyeColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DyeColor).InputName.Number = 0;
  (this->DyeColor).MaskR = 0;
  (this->DyeColor).MaskG = 0;
  (this->DyeColor).MaskB = 0;
  (this->DyeColor).MaskA = 0;
  (this->DyeColor).Expression = (UMaterialExpression *)0x0;
  return this;
}

