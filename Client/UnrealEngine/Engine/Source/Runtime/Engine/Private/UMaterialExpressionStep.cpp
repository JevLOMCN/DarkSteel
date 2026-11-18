// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cd1c0

UClass * __cdecl UMaterialExpressionStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStep",
               &Z_Registration_Info_UClass_UMaterialExpressionStep.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionStep,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStep>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStep>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStep.InnerSingleton;
}

// UMaterialExpressionStep @ 1472d4000

UMaterialExpressionStep * __thiscall
UMaterialExpressionStep::UMaterialExpressionStep
          (UMaterialExpressionStep *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstX = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionStep__6B_;
  (this->Y).OutputIndex = 0;
  (this->Y).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Y).InputName.Number = 0;
  (this->Y).MaskR = 0;
  (this->Y).MaskG = 0;
  (this->Y).MaskB = 0;
  (this->Y).MaskA = 0;
  (this->Y).Expression = (UMaterialExpression *)0x0;
  (this->X).OutputIndex = 0;
  (this->X).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->X).InputName.Number = 0;
  (this->X).MaskR = 0;
  (this->X).MaskG = 0;
  (this->X).MaskB = 0;
  (this->X).MaskA = 0;
  (this->X).Expression = (UMaterialExpression *)0x0;
  this->ConstY = 0.0;
  return this;
}

// UMaterialExpressionStep @ 1472d4080

UMaterialExpressionStep * __thiscall
UMaterialExpressionStep::UMaterialExpressionStep
          (UMaterialExpressionStep *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstX = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionStep__6B_;
  (this->Y).OutputIndex = 0;
  (this->Y).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Y).InputName.Number = 0;
  (this->Y).MaskR = 0;
  (this->Y).MaskG = 0;
  (this->Y).MaskB = 0;
  (this->Y).MaskA = 0;
  (this->Y).Expression = (UMaterialExpression *)0x0;
  (this->X).OutputIndex = 0;
  (this->X).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->X).InputName.Number = 0;
  (this->X).MaskR = 0;
  (this->X).MaskG = 0;
  (this->X).MaskB = 0;
  (this->X).MaskA = 0;
  (this->X).Expression = (UMaterialExpression *)0x0;
  this->ConstY = 0.0;
  return this;
}

// ~UMaterialExpressionStep @ 1472d4900

void __thiscall UMaterialExpressionStep::~UMaterialExpressionStep(UMaterialExpressionStep *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionStep__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d84f0

UClass * __cdecl UMaterialExpressionStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStep",
               &Z_Registration_Info_UClass_UMaterialExpressionStep.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionStep,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStep>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStep>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStep.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionStep @ 1472d8ac0

void __cdecl UMaterialExpressionStep::StaticRegisterNativesUMaterialExpressionStep(void)

{
  return;
}

