// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a5890

UClass * __cdecl UMaterialExpressionLinearInterpolate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLinearInterpolate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLinearInterpolate",
               &Z_Registration_Info_UClass_UMaterialExpressionLinearInterpolate.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLinearInterpolate,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLinearInterpolate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLinearInterpolate>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLinearInterpolate.InnerSingleton;
}

// UMaterialExpressionLinearInterpolate @ 1472ae2a0

UMaterialExpressionLinearInterpolate * __thiscall
UMaterialExpressionLinearInterpolate::UMaterialExpressionLinearInterpolate
          (UMaterialExpressionLinearInterpolate *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstB = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionLinearInterpolate__6B_;
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
  (this->Alpha).OutputIndex = 0;
  (this->Alpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Alpha).InputName.Number = 0;
  (this->Alpha).MaskR = 0;
  (this->Alpha).MaskG = 0;
  (this->Alpha).MaskB = 0;
  (this->Alpha).MaskA = 0;
  (this->Alpha).Expression = (UMaterialExpression *)0x0;
  this->ConstA = 0.0;
  this->ConstAlpha = 0.5;
  return this;
}

// UMaterialExpressionLinearInterpolate @ 1472ae350

UMaterialExpressionLinearInterpolate * __thiscall
UMaterialExpressionLinearInterpolate::UMaterialExpressionLinearInterpolate
          (UMaterialExpressionLinearInterpolate *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstB = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionLinearInterpolate__6B_;
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
  (this->Alpha).OutputIndex = 0;
  (this->Alpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Alpha).InputName.Number = 0;
  (this->Alpha).MaskR = 0;
  (this->Alpha).MaskG = 0;
  (this->Alpha).MaskB = 0;
  (this->Alpha).MaskA = 0;
  (this->Alpha).Expression = (UMaterialExpression *)0x0;
  this->ConstA = 0.0;
  this->ConstAlpha = 0.5;
  return this;
}

// ~UMaterialExpressionLinearInterpolate @ 1472afb90

void __thiscall
UMaterialExpressionLinearInterpolate::~UMaterialExpressionLinearInterpolate
          (UMaterialExpressionLinearInterpolate *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLinearInterpolate__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b37a0

UClass * __cdecl UMaterialExpressionLinearInterpolate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLinearInterpolate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLinearInterpolate",
               &Z_Registration_Info_UClass_UMaterialExpressionLinearInterpolate.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLinearInterpolate,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLinearInterpolate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLinearInterpolate>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLinearInterpolate.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLinearInterpolate @ 1472b46e0

void __cdecl
UMaterialExpressionLinearInterpolate::StaticRegisterNativesUMaterialExpressionLinearInterpolate
          (void)

{
  return;
}

