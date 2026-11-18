// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a4670

UClass * __cdecl UMaterialExpressionInverseLinearInterpolate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionInverseLinearInterpolate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionInverseLinearInterpolate",
               &Z_Registration_Info_UClass_UMaterialExpressionInverseLinearInterpolate.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionInverseLinearInterpolate,
               0x138,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionInverseLinearInterpolate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionInverseLinearInterpolate>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionInverseLinearInterpolate.InnerSingleton;
}

// UMaterialExpressionInverseLinearInterpolate @ 1472ade00

UMaterialExpressionInverseLinearInterpolate * __thiscall
UMaterialExpressionInverseLinearInterpolate::UMaterialExpressionInverseLinearInterpolate
          (UMaterialExpressionInverseLinearInterpolate *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstB = 1.0;
  this->ConstValue = 0.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionInverseLinearInterpolate__6B_;
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
  (this->Value).OutputIndex = 0;
  (this->Value).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Value).InputName.Number = 0;
  (this->Value).MaskR = 0;
  (this->Value).MaskG = 0;
  (this->Value).MaskB = 0;
  (this->Value).MaskA = 0;
  (this->Value).Expression = (UMaterialExpression *)0x0;
  this->ConstA = 0.0;
  this->bClampResult = false;
  return this;
}

// UMaterialExpressionInverseLinearInterpolate @ 1472adeb0

UMaterialExpressionInverseLinearInterpolate * __thiscall
UMaterialExpressionInverseLinearInterpolate::UMaterialExpressionInverseLinearInterpolate
          (UMaterialExpressionInverseLinearInterpolate *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstB = 1.0;
  this->ConstValue = 0.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionInverseLinearInterpolate__6B_;
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
  (this->Value).OutputIndex = 0;
  (this->Value).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Value).InputName.Number = 0;
  (this->Value).MaskR = 0;
  (this->Value).MaskG = 0;
  (this->Value).MaskB = 0;
  (this->Value).MaskA = 0;
  (this->Value).Expression = (UMaterialExpression *)0x0;
  this->ConstA = 0.0;
  this->bClampResult = false;
  return this;
}

// ~UMaterialExpressionInverseLinearInterpolate @ 1472afa30

void __thiscall
UMaterialExpressionInverseLinearInterpolate::~UMaterialExpressionInverseLinearInterpolate
          (UMaterialExpressionInverseLinearInterpolate *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionInverseLinearInterpolate__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3260

UClass * __cdecl UMaterialExpressionInverseLinearInterpolate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionInverseLinearInterpolate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionInverseLinearInterpolate",
               &Z_Registration_Info_UClass_UMaterialExpressionInverseLinearInterpolate.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionInverseLinearInterpolate,
               0x138,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionInverseLinearInterpolate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionInverseLinearInterpolate>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionInverseLinearInterpolate.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionInverseLinearInterpolate @ 1472b4670

void __cdecl
UMaterialExpressionInverseLinearInterpolate::
StaticRegisterNativesUMaterialExpressionInverseLinearInterpolate(void)

{
  return;
}

