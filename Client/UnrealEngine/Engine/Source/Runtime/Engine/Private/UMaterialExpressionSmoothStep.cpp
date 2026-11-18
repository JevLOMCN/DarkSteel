// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cb050

UClass * __cdecl UMaterialExpressionSmoothStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSmoothStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSmoothStep",
               &Z_Registration_Info_UClass_UMaterialExpressionSmoothStep.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSmoothStep,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSmoothStep>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSmoothStep>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSmoothStep.InnerSingleton;
}

// UMaterialExpressionSmoothStep @ 1472d3380

UMaterialExpressionSmoothStep * __thiscall
UMaterialExpressionSmoothStep::UMaterialExpressionSmoothStep
          (UMaterialExpressionSmoothStep *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstMax = 1.0;
  this->ConstValue = 0.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionSmoothStep__6B_;
  (this->Min).OutputIndex = 0;
  (this->Min).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Min).InputName.Number = 0;
  (this->Min).MaskR = 0;
  (this->Min).MaskG = 0;
  (this->Min).MaskB = 0;
  (this->Min).MaskA = 0;
  (this->Min).Expression = (UMaterialExpression *)0x0;
  (this->Max).OutputIndex = 0;
  (this->Max).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Max).InputName.Number = 0;
  (this->Max).MaskR = 0;
  (this->Max).MaskG = 0;
  (this->Max).MaskB = 0;
  (this->Max).MaskA = 0;
  (this->Max).Expression = (UMaterialExpression *)0x0;
  (this->Value).OutputIndex = 0;
  (this->Value).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Value).InputName.Number = 0;
  (this->Value).MaskR = 0;
  (this->Value).MaskG = 0;
  (this->Value).MaskB = 0;
  (this->Value).MaskA = 0;
  (this->Value).Expression = (UMaterialExpression *)0x0;
  this->ConstMin = 0.0;
  return this;
}

// UMaterialExpressionSmoothStep @ 1472d3430

UMaterialExpressionSmoothStep * __thiscall
UMaterialExpressionSmoothStep::UMaterialExpressionSmoothStep
          (UMaterialExpressionSmoothStep *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstMax = 1.0;
  this->ConstValue = 0.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionSmoothStep__6B_;
  (this->Min).OutputIndex = 0;
  (this->Min).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Min).InputName.Number = 0;
  (this->Min).MaskR = 0;
  (this->Min).MaskG = 0;
  (this->Min).MaskB = 0;
  (this->Min).MaskA = 0;
  (this->Min).Expression = (UMaterialExpression *)0x0;
  (this->Max).OutputIndex = 0;
  (this->Max).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Max).InputName.Number = 0;
  (this->Max).MaskR = 0;
  (this->Max).MaskG = 0;
  (this->Max).MaskB = 0;
  (this->Max).MaskA = 0;
  (this->Max).Expression = (UMaterialExpression *)0x0;
  (this->Value).OutputIndex = 0;
  (this->Value).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Value).InputName.Number = 0;
  (this->Value).MaskR = 0;
  (this->Value).MaskG = 0;
  (this->Value).MaskB = 0;
  (this->Value).MaskA = 0;
  (this->Value).Expression = (UMaterialExpression *)0x0;
  this->ConstMin = 0.0;
  return this;
}

// ~UMaterialExpressionSmoothStep @ 1472d4700

void __thiscall
UMaterialExpressionSmoothStep::~UMaterialExpressionSmoothStep(UMaterialExpressionSmoothStep *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSmoothStep__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d78f0

UClass * __cdecl UMaterialExpressionSmoothStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSmoothStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSmoothStep",
               &Z_Registration_Info_UClass_UMaterialExpressionSmoothStep.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSmoothStep,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSmoothStep>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSmoothStep>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSmoothStep.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSmoothStep @ 1472d89c0

void __cdecl UMaterialExpressionSmoothStep::StaticRegisterNativesUMaterialExpressionSmoothStep(void)

{
  return;
}

