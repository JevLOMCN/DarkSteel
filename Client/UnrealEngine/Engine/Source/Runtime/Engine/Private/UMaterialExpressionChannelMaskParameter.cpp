// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147295d60

UClass * __cdecl UMaterialExpressionChannelMaskParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionChannelMaskParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionChannelMaskParameter,0x160,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionChannelMaskParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionChannelMaskParameter>,local_res8,
               UMaterialExpressionVectorParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.InnerSingleton;
}

// UMaterialExpressionChannelMaskParameter @ 14729c300

UMaterialExpressionChannelMaskParameter * __thiscall
UMaterialExpressionChannelMaskParameter::UMaterialExpressionChannelMaskParameter
          (UMaterialExpressionChannelMaskParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionVectorParameter::UMaterialExpressionVectorParameter
            ((UMaterialExpressionVectorParameter *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionChannelMaskParameter__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->MaskChannel).Value = '\0';
  return this;
}

// ~UMaterialExpressionChannelMaskParameter @ 14729d790

void __thiscall
UMaterialExpressionChannelMaskParameter::~UMaterialExpressionChannelMaskParameter
          (UMaterialExpressionChannelMaskParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionChannelMaskParameter__6B_;
  UMaterialExpressionVectorParameter::~UMaterialExpressionVectorParameter
            ((UMaterialExpressionVectorParameter *)this);
  return;
}

// GetPrivateStaticClass @ 14729fc90

UClass * __cdecl UMaterialExpressionChannelMaskParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionChannelMaskParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionChannelMaskParameter,0x160,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionChannelMaskParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionChannelMaskParameter>,local_res8,
               UMaterialExpressionVectorParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.InnerSingleton;
}

// IsUsedAsChannelMask @ 1472a1a20

bool __thiscall
UMaterialExpressionChannelMaskParameter::IsUsedAsChannelMask
          (UMaterialExpressionChannelMaskParameter *this)

{
  return true;
}

// StaticRegisterNativesUMaterialExpressionChannelMaskParameter @ 1472a1c70

void __cdecl
UMaterialExpressionChannelMaskParameter::
StaticRegisterNativesUMaterialExpressionChannelMaskParameter(void)

{
  return;
}

// UMaterialExpressionChannelMaskParameter @ 148afac70

UMaterialExpressionChannelMaskParameter * __thiscall
UMaterialExpressionChannelMaskParameter::UMaterialExpressionChannelMaskParameter
          (UMaterialExpressionChannelMaskParameter *this,FObjectInitializer *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionVectorParameter__6B_;
  FText::FText((FText *)&this->_padding_);
  FText::FText((FText *)&this->_padding_);
  FText::FText((FText *)&this->_padding_);
  FText::FText((FText *)&this->_padding_);
  this->_padding_ = (longlong)&___7UMaterialExpressionChannelMaskParameter__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->MaskChannel).Value = '\0';
  this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  return this;
}

