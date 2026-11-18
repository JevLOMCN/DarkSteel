// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a71d0

UClass * __cdecl UMaterialExpressionFresnel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFresnel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFresnel",
               &Z_Registration_Info_UClass_UMaterialExpressionFresnel.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFresnel,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFresnel>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFresnel>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFresnel.InnerSingleton;
}

// UMaterialExpressionFresnel @ 1472ad530

UMaterialExpressionFresnel * __thiscall
UMaterialExpressionFresnel::UMaterialExpressionFresnel
          (UMaterialExpressionFresnel *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Exponent = 5.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionFresnel__6B_;
  (this->ExponentIn).OutputIndex = 0;
  (this->ExponentIn).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ExponentIn).InputName.Number = 0;
  (this->ExponentIn).MaskR = 0;
  (this->ExponentIn).MaskG = 0;
  (this->ExponentIn).MaskB = 0;
  (this->ExponentIn).MaskA = 0;
  (this->ExponentIn).Expression = (UMaterialExpression *)0x0;
  (this->BaseReflectFractionIn).OutputIndex = 0;
  (this->BaseReflectFractionIn).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseReflectFractionIn).InputName.Number = 0;
  (this->BaseReflectFractionIn).MaskR = 0;
  (this->BaseReflectFractionIn).MaskG = 0;
  (this->BaseReflectFractionIn).MaskB = 0;
  (this->BaseReflectFractionIn).MaskA = 0;
  (this->BaseReflectFractionIn).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  this->BaseReflectFraction = 0.04;
  return this;
}

// UMaterialExpressionFresnel @ 1472ad5e0

UMaterialExpressionFresnel * __thiscall
UMaterialExpressionFresnel::UMaterialExpressionFresnel
          (UMaterialExpressionFresnel *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Exponent = 5.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionFresnel__6B_;
  (this->ExponentIn).OutputIndex = 0;
  (this->ExponentIn).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ExponentIn).InputName.Number = 0;
  (this->ExponentIn).MaskR = 0;
  (this->ExponentIn).MaskG = 0;
  (this->ExponentIn).MaskB = 0;
  (this->ExponentIn).MaskA = 0;
  (this->ExponentIn).Expression = (UMaterialExpression *)0x0;
  (this->BaseReflectFractionIn).OutputIndex = 0;
  (this->BaseReflectFractionIn).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseReflectFractionIn).InputName.Number = 0;
  (this->BaseReflectFractionIn).MaskR = 0;
  (this->BaseReflectFractionIn).MaskG = 0;
  (this->BaseReflectFractionIn).MaskB = 0;
  (this->BaseReflectFractionIn).MaskA = 0;
  (this->BaseReflectFractionIn).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  this->BaseReflectFraction = 0.04;
  return this;
}

// ~UMaterialExpressionFresnel @ 1472af870

void __thiscall
UMaterialExpressionFresnel::~UMaterialExpressionFresnel(UMaterialExpressionFresnel *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionFresnel__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2a20

UClass * __cdecl UMaterialExpressionFresnel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFresnel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFresnel",
               &Z_Registration_Info_UClass_UMaterialExpressionFresnel.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFresnel,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFresnel>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFresnel>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFresnel.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionFresnel @ 1472b45c0

void __cdecl UMaterialExpressionFresnel::StaticRegisterNativesUMaterialExpressionFresnel(void)

{
  return;
}

