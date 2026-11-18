// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472bb4b0

UClass * __cdecl UMaterialExpressionMin::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMin",
               &Z_Registration_Info_UClass_UMaterialExpressionMin.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMin,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMin>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMin>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMin.InnerSingleton;
}

// UMaterialExpressionMin @ 1472bfe40

UMaterialExpressionMin * __thiscall
UMaterialExpressionMin::UMaterialExpressionMin(UMaterialExpressionMin *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstB = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionMin__6B_;
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

// UMaterialExpressionMin @ 1472bfec0

UMaterialExpressionMin * __thiscall
UMaterialExpressionMin::UMaterialExpressionMin
          (UMaterialExpressionMin *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstB = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionMin__6B_;
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

// ~UMaterialExpressionMin @ 1472c1ff0

void __thiscall UMaterialExpressionMin::~UMaterialExpressionMin(UMaterialExpressionMin *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMin__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4570

UClass * __cdecl UMaterialExpressionMin::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMin",
               &Z_Registration_Info_UClass_UMaterialExpressionMin.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMin,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMin>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMin>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMin.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMin @ 1472c7440

void __cdecl UMaterialExpressionMin::StaticRegisterNativesUMaterialExpressionMin(void)

{
  return;
}

