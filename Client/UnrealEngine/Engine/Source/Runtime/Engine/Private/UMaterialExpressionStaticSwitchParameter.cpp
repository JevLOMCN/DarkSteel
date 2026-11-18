// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ccfc0

UClass * __cdecl UMaterialExpressionStaticSwitchParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStaticSwitchParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStaticSwitchParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionStaticSwitchParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionStaticSwitchParameter,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStaticSwitchParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStaticSwitchParameter>,local_res8,
               UMaterialExpressionStaticBoolParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStaticSwitchParameter.InnerSingleton;
}

// UMaterialExpressionStaticSwitchParameter @ 1472d3f20

UMaterialExpressionStaticSwitchParameter * __thiscall
UMaterialExpressionStaticSwitchParameter::UMaterialExpressionStaticSwitchParameter
          (UMaterialExpressionStaticSwitchParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticSwitchParameter__6B_;
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
  return this;
}

// UMaterialExpressionStaticSwitchParameter @ 1472d3f90

UMaterialExpressionStaticSwitchParameter * __thiscall
UMaterialExpressionStaticSwitchParameter::UMaterialExpressionStaticSwitchParameter
          (UMaterialExpressionStaticSwitchParameter *this,FObjectInitializer *param_1)

{
  UMaterialExpressionStaticBoolParameter::UMaterialExpressionStaticBoolParameter
            ((UMaterialExpressionStaticBoolParameter *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticSwitchParameter__6B_;
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
  return this;
}

// ~UMaterialExpressionStaticSwitchParameter @ 1472d48e0

void __thiscall
UMaterialExpressionStaticSwitchParameter::~UMaterialExpressionStaticSwitchParameter
          (UMaterialExpressionStaticSwitchParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticBoolParameter__6B_;
  UMaterialExpressionParameter::~UMaterialExpressionParameter((UMaterialExpressionParameter *)this);
  return;
}

// GetPrivateStaticClass @ 1472d8430

UClass * __cdecl UMaterialExpressionStaticSwitchParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStaticSwitchParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStaticSwitchParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionStaticSwitchParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionStaticSwitchParameter,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStaticSwitchParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStaticSwitchParameter>,local_res8,
               UMaterialExpressionStaticBoolParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStaticSwitchParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionStaticSwitchParameter @ 1472d8ab0

void __cdecl
UMaterialExpressionStaticSwitchParameter::
StaticRegisterNativesUMaterialExpressionStaticSwitchParameter(void)

{
  return;
}

