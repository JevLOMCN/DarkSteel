// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a8290

UClass * __cdecl UMaterialExpressionDivide::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDivide.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDivide",
               &Z_Registration_Info_UClass_UMaterialExpressionDivide.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDivide,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDivide>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDivide>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDivide.InnerSingleton;
}

// UMaterialExpressionDivide @ 1472ac9f0

UMaterialExpressionDivide * __thiscall
UMaterialExpressionDivide::UMaterialExpressionDivide
          (UMaterialExpressionDivide *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstA = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionDivide__6B_;
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
  this->ConstB = 2.0;
  return this;
}

// UMaterialExpressionDivide @ 1472aca80

UMaterialExpressionDivide * __thiscall
UMaterialExpressionDivide::UMaterialExpressionDivide
          (UMaterialExpressionDivide *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstA = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionDivide__6B_;
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
  this->ConstB = 2.0;
  return this;
}

// ~UMaterialExpressionDivide @ 1472af580

void __thiscall
UMaterialExpressionDivide::~UMaterialExpressionDivide(UMaterialExpressionDivide *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDivide__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b1ca0

UClass * __cdecl UMaterialExpressionDivide::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDivide.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDivide",
               &Z_Registration_Info_UClass_UMaterialExpressionDivide.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDivide,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDivide>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDivide>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDivide.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDivide @ 1472b44a0

void __cdecl UMaterialExpressionDivide::StaticRegisterNativesUMaterialExpressionDivide(void)

{
  return;
}

