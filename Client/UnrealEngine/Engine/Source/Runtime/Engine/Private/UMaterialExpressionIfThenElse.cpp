// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a8350

UClass * __cdecl UMaterialExpressionIfThenElse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionIfThenElse",
               &Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionIfThenElse,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionIfThenElse>,
               InternalVTableHelperCtorCaller<UMaterialExpressionIfThenElse>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.InnerSingleton;
}

// UMaterialExpressionIfThenElse @ 1472adcc0

UMaterialExpressionIfThenElse * __thiscall
UMaterialExpressionIfThenElse::UMaterialExpressionIfThenElse
          (UMaterialExpressionIfThenElse *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionIfThenElse__6B_;
  (this->Condition).OutputIndex = 0;
  (this->Condition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Condition).InputName.Number = 0;
  (this->Condition).MaskR = 0;
  (this->Condition).MaskG = 0;
  (this->Condition).MaskB = 0;
  (this->Condition).MaskA = 0;
  (this->Condition).Expression = (UMaterialExpression *)0x0;
  (this->True).OutputIndex = 0;
  (this->True).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->True).InputName.Number = 0;
  (this->True).MaskR = 0;
  (this->True).MaskG = 0;
  (this->True).MaskB = 0;
  (this->True).MaskA = 0;
  (this->True).Expression = (UMaterialExpression *)0x0;
  (this->False).OutputIndex = 0;
  (this->False).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->False).InputName.Number = 0;
  (this->False).MaskR = 0;
  (this->False).MaskG = 0;
  (this->False).MaskB = 0;
  (this->False).MaskA = 0;
  (this->False).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionIfThenElse @ 1472add60

UMaterialExpressionIfThenElse * __thiscall
UMaterialExpressionIfThenElse::UMaterialExpressionIfThenElse
          (UMaterialExpressionIfThenElse *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionIfThenElse__6B_;
  (this->Condition).OutputIndex = 0;
  (this->Condition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Condition).InputName.Number = 0;
  (this->Condition).MaskR = 0;
  (this->Condition).MaskG = 0;
  (this->Condition).MaskB = 0;
  (this->Condition).MaskA = 0;
  (this->Condition).Expression = (UMaterialExpression *)0x0;
  (this->True).OutputIndex = 0;
  (this->True).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->True).InputName.Number = 0;
  (this->True).MaskR = 0;
  (this->True).MaskG = 0;
  (this->True).MaskB = 0;
  (this->True).MaskA = 0;
  (this->True).Expression = (UMaterialExpression *)0x0;
  (this->False).OutputIndex = 0;
  (this->False).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->False).InputName.Number = 0;
  (this->False).MaskR = 0;
  (this->False).MaskG = 0;
  (this->False).MaskB = 0;
  (this->False).MaskA = 0;
  (this->False).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionIfThenElse @ 1472afa10

void __thiscall
UMaterialExpressionIfThenElse::~UMaterialExpressionIfThenElse(UMaterialExpressionIfThenElse *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionIfThenElse__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b31a0

UClass * __cdecl UMaterialExpressionIfThenElse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionIfThenElse",
               &Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionIfThenElse,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionIfThenElse>,
               InternalVTableHelperCtorCaller<UMaterialExpressionIfThenElse>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionIfThenElse @ 1472b4660

void __cdecl UMaterialExpressionIfThenElse::StaticRegisterNativesUMaterialExpressionIfThenElse(void)

{
  return;
}

