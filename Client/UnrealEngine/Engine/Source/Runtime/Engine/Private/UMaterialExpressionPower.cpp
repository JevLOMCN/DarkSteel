// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b9f10

UClass * __cdecl UMaterialExpressionPower::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPower.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPower",
               &Z_Registration_Info_UClass_UMaterialExpressionPower.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPower,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPower>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPower>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPower.InnerSingleton;
}

// UMaterialExpressionPower @ 1472c1330

UMaterialExpressionPower * __thiscall
UMaterialExpressionPower::UMaterialExpressionPower
          (UMaterialExpressionPower *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstExponent = 2.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionPower__6B_;
  (this->Base).OutputIndex = 0;
  (this->Base).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Base).InputName.Number = 0;
  (this->Base).MaskR = 0;
  (this->Base).MaskG = 0;
  (this->Base).MaskB = 0;
  (this->Base).MaskA = 0;
  (this->Base).Expression = (UMaterialExpression *)0x0;
  (this->Exponent).OutputIndex = 0;
  (this->Exponent).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Exponent).InputName.Number = 0;
  (this->Exponent).MaskR = 0;
  (this->Exponent).MaskG = 0;
  (this->Exponent).MaskB = 0;
  (this->Exponent).MaskA = 0;
  (this->Exponent).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionPower @ 1472c13b0

UMaterialExpressionPower * __thiscall
UMaterialExpressionPower::UMaterialExpressionPower
          (UMaterialExpressionPower *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstExponent = 2.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionPower__6B_;
  (this->Base).OutputIndex = 0;
  (this->Base).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Base).InputName.Number = 0;
  (this->Base).MaskR = 0;
  (this->Base).MaskG = 0;
  (this->Base).MaskB = 0;
  (this->Base).MaskA = 0;
  (this->Base).Expression = (UMaterialExpression *)0x0;
  (this->Exponent).OutputIndex = 0;
  (this->Exponent).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Exponent).InputName.Number = 0;
  (this->Exponent).MaskR = 0;
  (this->Exponent).MaskG = 0;
  (this->Exponent).MaskB = 0;
  (this->Exponent).MaskA = 0;
  (this->Exponent).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionPower @ 1472c25b0

void __thiscall UMaterialExpressionPower::~UMaterialExpressionPower(UMaterialExpressionPower *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionPower__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6670

UClass * __cdecl UMaterialExpressionPower::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPower.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPower",
               &Z_Registration_Info_UClass_UMaterialExpressionPower.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPower,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPower>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPower>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPower.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPower @ 1472c7700

void __cdecl UMaterialExpressionPower::StaticRegisterNativesUMaterialExpressionPower(void)

{
  return;
}

