// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472949a0

UClass * __cdecl UMaterialExpressionDDX::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDDX.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDDX",
               &Z_Registration_Info_UClass_UMaterialExpressionDDX.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDDX,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDDX>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDDX>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDDX.InnerSingleton;
}

// UMaterialExpressionDDX @ 14729cd60

UMaterialExpressionDDX * __thiscall
UMaterialExpressionDDX::UMaterialExpressionDDX(UMaterialExpressionDDX *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDDX__6B_;
  (this->Value).OutputIndex = 0;
  (this->Value).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Value).InputName.Number = 0;
  (this->Value).MaskR = 0;
  (this->Value).MaskG = 0;
  (this->Value).MaskB = 0;
  (this->Value).MaskA = 0;
  (this->Value).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionDDX @ 14729db70

void __thiscall UMaterialExpressionDDX::~UMaterialExpressionDDX(UMaterialExpressionDDX *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDDX__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0d10

UClass * __cdecl UMaterialExpressionDDX::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDDX.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDDX",
               &Z_Registration_Info_UClass_UMaterialExpressionDDX.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDDX,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDDX>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDDX>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDDX.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDDX @ 1472a1dd0

void __cdecl UMaterialExpressionDDX::StaticRegisterNativesUMaterialExpressionDDX(void)

{
  return;
}

// UMaterialExpressionDDX @ 148afb750

UMaterialExpressionDDX * __thiscall
UMaterialExpressionDDX::UMaterialExpressionDDX
          (UMaterialExpressionDDX *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDDX__6B_;
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
  (this->Value).OutputIndex = 0;
  (this->Value).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Value).InputName.Number = 0;
  (this->Value).MaskR = 0;
  (this->Value).MaskG = 0;
  (this->Value).MaskB = 0;
  (this->Value).MaskA = 0;
  (this->Value).Expression = (UMaterialExpression *)0x0;
  return this;
}

