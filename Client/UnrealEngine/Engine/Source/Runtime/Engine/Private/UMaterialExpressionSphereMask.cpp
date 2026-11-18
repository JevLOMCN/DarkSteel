// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cc1f0

UClass * __cdecl UMaterialExpressionSphereMask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSphereMask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSphereMask",
               &Z_Registration_Info_UClass_UMaterialExpressionSphereMask.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSphereMask,0x158,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSphereMask>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSphereMask>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSphereMask.InnerSingleton;
}

// UMaterialExpressionSphereMask @ 1472d3a40

UMaterialExpressionSphereMask * __thiscall
UMaterialExpressionSphereMask::UMaterialExpressionSphereMask
          (UMaterialExpressionSphereMask *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->AttenuationRadius = 256.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionSphereMask__6B_;
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
  (this->Radius).OutputIndex = 0;
  (this->Radius).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Radius).InputName.Number = 0;
  (this->Radius).MaskR = 0;
  (this->Radius).MaskG = 0;
  (this->Radius).MaskB = 0;
  (this->Radius).MaskA = 0;
  (this->Radius).Expression = (UMaterialExpression *)0x0;
  (this->Hardness).OutputIndex = 0;
  (this->Hardness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Hardness).InputName.Number = 0;
  (this->Hardness).MaskR = 0;
  (this->Hardness).MaskG = 0;
  (this->Hardness).MaskB = 0;
  (this->Hardness).MaskA = 0;
  (this->Hardness).Expression = (UMaterialExpression *)0x0;
  this->HardnessPercent = 100.0;
  return this;
}

// UMaterialExpressionSphereMask @ 1472d3b10

UMaterialExpressionSphereMask * __thiscall
UMaterialExpressionSphereMask::UMaterialExpressionSphereMask
          (UMaterialExpressionSphereMask *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->AttenuationRadius = 256.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionSphereMask__6B_;
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
  (this->Radius).OutputIndex = 0;
  (this->Radius).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Radius).InputName.Number = 0;
  (this->Radius).MaskR = 0;
  (this->Radius).MaskG = 0;
  (this->Radius).MaskB = 0;
  (this->Radius).MaskA = 0;
  (this->Radius).Expression = (UMaterialExpression *)0x0;
  (this->Hardness).OutputIndex = 0;
  (this->Hardness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Hardness).InputName.Number = 0;
  (this->Hardness).MaskR = 0;
  (this->Hardness).MaskG = 0;
  (this->Hardness).MaskB = 0;
  (this->Hardness).MaskA = 0;
  (this->Hardness).Expression = (UMaterialExpression *)0x0;
  this->HardnessPercent = 100.0;
  return this;
}

// ~UMaterialExpressionSphereMask @ 1472d4800

void __thiscall
UMaterialExpressionSphereMask::~UMaterialExpressionSphereMask(UMaterialExpressionSphereMask *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSphereMask__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7ef0

UClass * __cdecl UMaterialExpressionSphereMask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSphereMask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSphereMask",
               &Z_Registration_Info_UClass_UMaterialExpressionSphereMask.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSphereMask,0x158,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSphereMask>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSphereMask>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSphereMask.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSphereMask @ 1472d8a40

void __cdecl UMaterialExpressionSphereMask::StaticRegisterNativesUMaterialExpressionSphereMask(void)

{
  return;
}

