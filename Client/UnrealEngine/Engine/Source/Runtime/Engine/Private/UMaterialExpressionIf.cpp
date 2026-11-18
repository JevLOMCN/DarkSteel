// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a8150

UClass * __cdecl UMaterialExpressionIf::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionIf.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionIf",
               &Z_Registration_Info_UClass_UMaterialExpressionIf.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionIf,0x188,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionIf>,
               InternalVTableHelperCtorCaller<UMaterialExpressionIf>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionIf.InnerSingleton;
}

// UMaterialExpressionIf @ 1472adae0

UMaterialExpressionIf * __thiscall
UMaterialExpressionIf::UMaterialExpressionIf(UMaterialExpressionIf *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->EqualsThreshold = 1e-05;
  this->ConstB = 0.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionIf__6B_;
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
  (this->AGreaterThanB).OutputIndex = 0;
  (this->AGreaterThanB).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AGreaterThanB).InputName.Number = 0;
  (this->AGreaterThanB).MaskR = 0;
  (this->AGreaterThanB).MaskG = 0;
  (this->AGreaterThanB).MaskB = 0;
  (this->AGreaterThanB).MaskA = 0;
  (this->AGreaterThanB).Expression = (UMaterialExpression *)0x0;
  (this->AEqualsB).OutputIndex = 0;
  (this->AEqualsB).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AEqualsB).InputName.Number = 0;
  (this->AEqualsB).MaskR = 0;
  (this->AEqualsB).MaskG = 0;
  (this->AEqualsB).MaskB = 0;
  (this->AEqualsB).MaskA = 0;
  (this->AEqualsB).Expression = (UMaterialExpression *)0x0;
  (this->ALessThanB).OutputIndex = 0;
  (this->ALessThanB).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ALessThanB).InputName.Number = 0;
  (this->ALessThanB).MaskR = 0;
  (this->ALessThanB).MaskG = 0;
  (this->ALessThanB).MaskB = 0;
  (this->ALessThanB).MaskA = 0;
  (this->ALessThanB).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionIf @ 1472adbd0

UMaterialExpressionIf * __thiscall
UMaterialExpressionIf::UMaterialExpressionIf
          (UMaterialExpressionIf *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->EqualsThreshold = 1e-05;
  this->ConstB = 0.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionIf__6B_;
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
  (this->AGreaterThanB).OutputIndex = 0;
  (this->AGreaterThanB).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AGreaterThanB).InputName.Number = 0;
  (this->AGreaterThanB).MaskR = 0;
  (this->AGreaterThanB).MaskG = 0;
  (this->AGreaterThanB).MaskB = 0;
  (this->AGreaterThanB).MaskA = 0;
  (this->AGreaterThanB).Expression = (UMaterialExpression *)0x0;
  (this->AEqualsB).OutputIndex = 0;
  (this->AEqualsB).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AEqualsB).InputName.Number = 0;
  (this->AEqualsB).MaskR = 0;
  (this->AEqualsB).MaskG = 0;
  (this->AEqualsB).MaskB = 0;
  (this->AEqualsB).MaskA = 0;
  (this->AEqualsB).Expression = (UMaterialExpression *)0x0;
  (this->ALessThanB).OutputIndex = 0;
  (this->ALessThanB).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ALessThanB).InputName.Number = 0;
  (this->ALessThanB).MaskR = 0;
  (this->ALessThanB).MaskG = 0;
  (this->ALessThanB).MaskB = 0;
  (this->ALessThanB).MaskA = 0;
  (this->ALessThanB).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionIf @ 1472af9f0

void __thiscall UMaterialExpressionIf::~UMaterialExpressionIf(UMaterialExpressionIf *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionIf__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b30e0

UClass * __cdecl UMaterialExpressionIf::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionIf.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionIf",
               &Z_Registration_Info_UClass_UMaterialExpressionIf.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionIf,0x188,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionIf>,
               InternalVTableHelperCtorCaller<UMaterialExpressionIf>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionIf.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionIf @ 1472b4650

void __cdecl UMaterialExpressionIf::StaticRegisterNativesUMaterialExpressionIf(void)

{
  return;
}

