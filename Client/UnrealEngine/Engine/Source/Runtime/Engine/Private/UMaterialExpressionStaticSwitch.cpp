// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cce70

UClass * __cdecl UMaterialExpressionStaticSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStaticSwitch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStaticSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionStaticSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionStaticSwitch,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStaticSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStaticSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStaticSwitch.InnerSingleton;
}

// UMaterialExpressionStaticSwitch @ 1472d3de0

UMaterialExpressionStaticSwitch * __thiscall
UMaterialExpressionStaticSwitch::UMaterialExpressionStaticSwitch
          (UMaterialExpressionStaticSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticSwitch__6B_;
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

// UMaterialExpressionStaticSwitch @ 1472d3e80

UMaterialExpressionStaticSwitch * __thiscall
UMaterialExpressionStaticSwitch::UMaterialExpressionStaticSwitch
          (UMaterialExpressionStaticSwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticSwitch__6B_;
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

// ~UMaterialExpressionStaticSwitch @ 1472d48c0

void __thiscall
UMaterialExpressionStaticSwitch::~UMaterialExpressionStaticSwitch
          (UMaterialExpressionStaticSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d8370

UClass * __cdecl UMaterialExpressionStaticSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStaticSwitch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStaticSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionStaticSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionStaticSwitch,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStaticSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStaticSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStaticSwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionStaticSwitch @ 1472d8aa0

void __cdecl
UMaterialExpressionStaticSwitch::StaticRegisterNativesUMaterialExpressionStaticSwitch(void)

{
  return;
}

