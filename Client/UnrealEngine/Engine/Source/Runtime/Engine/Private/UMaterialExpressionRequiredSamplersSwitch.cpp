// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b7090

UClass * __cdecl UMaterialExpressionRequiredSamplersSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRequiredSamplersSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRequiredSamplersSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionRequiredSamplersSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRequiredSamplersSwitch,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRequiredSamplersSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRequiredSamplersSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRequiredSamplersSwitch.InnerSingleton;
}

// UMaterialExpressionRequiredSamplersSwitch @ 1472c1a60

UMaterialExpressionRequiredSamplersSwitch * __thiscall
UMaterialExpressionRequiredSamplersSwitch::UMaterialExpressionRequiredSamplersSwitch
          (UMaterialExpressionRequiredSamplersSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->RequiredSamplers = 0x10;
  this->_padding_ = (longlong)&___7UMaterialExpressionRequiredSamplersSwitch__6B_;
  (this->InputTrue).OutputIndex = 0;
  (this->InputTrue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputTrue).InputName.Number = 0;
  (this->InputTrue).MaskR = 0;
  (this->InputTrue).MaskG = 0;
  (this->InputTrue).MaskB = 0;
  (this->InputTrue).MaskA = 0;
  (this->InputTrue).Expression = (UMaterialExpression *)0x0;
  (this->InputFalse).OutputIndex = 0;
  (this->InputFalse).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputFalse).InputName.Number = 0;
  (this->InputFalse).MaskR = 0;
  (this->InputFalse).MaskG = 0;
  (this->InputFalse).MaskB = 0;
  (this->InputFalse).MaskA = 0;
  (this->InputFalse).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionRequiredSamplersSwitch @ 1472c1ae0

UMaterialExpressionRequiredSamplersSwitch * __thiscall
UMaterialExpressionRequiredSamplersSwitch::UMaterialExpressionRequiredSamplersSwitch
          (UMaterialExpressionRequiredSamplersSwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->RequiredSamplers = 0x10;
  this->_padding_ = (longlong)&___7UMaterialExpressionRequiredSamplersSwitch__6B_;
  (this->InputTrue).OutputIndex = 0;
  (this->InputTrue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputTrue).InputName.Number = 0;
  (this->InputTrue).MaskR = 0;
  (this->InputTrue).MaskG = 0;
  (this->InputTrue).MaskB = 0;
  (this->InputTrue).MaskA = 0;
  (this->InputTrue).Expression = (UMaterialExpression *)0x0;
  (this->InputFalse).OutputIndex = 0;
  (this->InputFalse).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputFalse).InputName.Number = 0;
  (this->InputFalse).MaskR = 0;
  (this->InputFalse).MaskG = 0;
  (this->InputFalse).MaskB = 0;
  (this->InputFalse).MaskA = 0;
  (this->InputFalse).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionRequiredSamplersSwitch @ 1472c2710

void __thiscall
UMaterialExpressionRequiredSamplersSwitch::~UMaterialExpressionRequiredSamplersSwitch
          (UMaterialExpressionRequiredSamplersSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRequiredSamplersSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6eb0

UClass * __cdecl UMaterialExpressionRequiredSamplersSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRequiredSamplersSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRequiredSamplersSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionRequiredSamplersSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRequiredSamplersSwitch,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRequiredSamplersSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRequiredSamplersSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRequiredSamplersSwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRequiredSamplersSwitch @ 1472c77b0

void __cdecl
UMaterialExpressionRequiredSamplersSwitch::
StaticRegisterNativesUMaterialExpressionRequiredSamplersSwitch(void)

{
  return;
}

