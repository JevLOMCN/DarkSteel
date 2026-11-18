// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b7a10

UClass * __cdecl UMaterialExpressionRotator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRotator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRotator",
               &Z_Registration_Info_UClass_UMaterialExpressionRotator.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRotator,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRotator>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRotator>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRotator.InnerSingleton;
}

// UMaterialExpressionRotator @ 1472c1e80

UMaterialExpressionRotator * __thiscall
UMaterialExpressionRotator::UMaterialExpressionRotator
          (UMaterialExpressionRotator *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->CenterX = 0.5;
  this->_padding_ = (longlong)&___7UMaterialExpressionRotator__6B_;
  (this->Coordinate).OutputIndex = 0;
  (this->Coordinate).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinate).InputName.Number = 0;
  (this->Coordinate).MaskR = 0;
  (this->Coordinate).MaskG = 0;
  (this->Coordinate).MaskB = 0;
  (this->Coordinate).MaskA = 0;
  (this->Coordinate).Expression = (UMaterialExpression *)0x0;
  (this->Time).OutputIndex = 0;
  (this->Time).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Time).InputName.Number = 0;
  (this->Time).MaskR = 0;
  (this->Time).MaskG = 0;
  (this->Time).MaskB = 0;
  (this->Time).MaskA = 0;
  (this->Time).Expression = (UMaterialExpression *)0x0;
  this->CenterY = 0.5;
  *(undefined1 **)&this->Speed = &DAT_3e800000;
  return this;
}

// ~UMaterialExpressionRotator @ 1472c27b0

void __thiscall
UMaterialExpressionRotator::~UMaterialExpressionRotator(UMaterialExpressionRotator *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRotator__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c7270

UClass * __cdecl UMaterialExpressionRotator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRotator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRotator",
               &Z_Registration_Info_UClass_UMaterialExpressionRotator.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRotator,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRotator>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRotator>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRotator.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRotator @ 1472c7800

void __cdecl UMaterialExpressionRotator::StaticRegisterNativesUMaterialExpressionRotator(void)

{
  return;
}

// UMaterialExpressionRotator @ 148afdd70

UMaterialExpressionRotator * __thiscall
UMaterialExpressionRotator::UMaterialExpressionRotator
          (UMaterialExpressionRotator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->CenterX = 0.5;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionRotator__6B_;
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
  (this->Coordinate).OutputIndex = 0;
  (this->Coordinate).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinate).InputName.Number = 0;
  (this->Coordinate).MaskR = 0;
  (this->Coordinate).MaskG = 0;
  (this->Coordinate).MaskB = 0;
  (this->Coordinate).MaskA = 0;
  (this->Coordinate).Expression = (UMaterialExpression *)0x0;
  (this->Time).OutputIndex = 0;
  (this->Time).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Time).InputName.Number = 0;
  (this->Time).MaskR = 0;
  (this->Time).MaskG = 0;
  (this->Time).MaskB = 0;
  (this->Time).MaskA = 0;
  (this->Time).Expression = (UMaterialExpression *)0x0;
  this->CenterY = 0.5;
  *(undefined1 **)&this->Speed = &DAT_3e800000;
  return this;
}

