// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ba150

UClass * __cdecl UMaterialExpressionPanner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPanner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPanner",
               &Z_Registration_Info_UClass_UMaterialExpressionPanner.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPanner,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPanner>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPanner>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPanner.InnerSingleton;
}

// UMaterialExpressionPanner @ 1472c07e0

UMaterialExpressionPanner * __thiscall
UMaterialExpressionPanner::UMaterialExpressionPanner
          (UMaterialExpressionPanner *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPanner__6B_;
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
  (this->Speed).OutputIndex = 0;
  (this->Speed).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Speed).InputName.Number = 0;
  (this->Speed).MaskR = 0;
  (this->Speed).MaskG = 0;
  (this->Speed).MaskB = 0;
  (this->Speed).MaskA = 0;
  (this->Speed).Expression = (UMaterialExpression *)0x0;
  this->ConstCoordinate = 0;
  return this;
}

// ~UMaterialExpressionPanner @ 1472c2250

void __thiscall
UMaterialExpressionPanner::~UMaterialExpressionPanner(UMaterialExpressionPanner *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionPanner__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c52f0

UClass * __cdecl UMaterialExpressionPanner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPanner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPanner",
               &Z_Registration_Info_UClass_UMaterialExpressionPanner.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPanner,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPanner>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPanner>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPanner.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPanner @ 1472c7560

void __cdecl UMaterialExpressionPanner::StaticRegisterNativesUMaterialExpressionPanner(void)

{
  return;
}

// UMaterialExpressionPanner @ 148afd770

UMaterialExpressionPanner * __thiscall
UMaterialExpressionPanner::UMaterialExpressionPanner
          (UMaterialExpressionPanner *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPanner__6B_;
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
  (this->Speed).OutputIndex = 0;
  (this->Speed).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Speed).InputName.Number = 0;
  (this->Speed).MaskR = 0;
  (this->Speed).MaskG = 0;
  (this->Speed).MaskB = 0;
  (this->Speed).MaskA = 0;
  (this->Speed).Expression = (UMaterialExpression *)0x0;
  this->ConstCoordinate = 0;
  return this;
}

