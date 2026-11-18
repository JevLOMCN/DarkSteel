// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472a6e80

UClass * __cdecl UMaterialExpressionFontSampleParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFontSampleParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFontSampleParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionFontSampleParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFontSampleParameter,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFontSampleParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFontSampleParameter>,local_res8,
               UMaterialExpressionFontSample::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFontSampleParameter.InnerSingleton;
}

// UMaterialExpressionFontSampleParameter @ 1472ad3f0

UMaterialExpressionFontSampleParameter * __thiscall
UMaterialExpressionFontSampleParameter::UMaterialExpressionFontSampleParameter
          (UMaterialExpressionFontSampleParameter *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->SortPriority = 0x20;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionFontSampleParameter__6B_;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ExpressionGUID).A = 0;
  (this->ExpressionGUID).B = 0;
  (this->ExpressionGUID).C = 0;
  (this->ExpressionGUID).D = 0;
  (this->Group).ComparisonIndex = 0;
  (this->Group).Number = 0;
  return this;
}

// ~UMaterialExpressionFontSampleParameter @ 1472af7f0

void __thiscall
UMaterialExpressionFontSampleParameter::~UMaterialExpressionFontSampleParameter
          (UMaterialExpressionFontSampleParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionFontSample__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetParameterExpressionId @ 1472b1a50

FGuid * __thiscall
UMaterialExpressionFontSampleParameter::GetParameterExpressionId
          (UMaterialExpressionFontSampleParameter *this)

{
  return &this->ExpressionGUID;
}

// GetPrivateStaticClass @ 1472b27e0

UClass * __cdecl UMaterialExpressionFontSampleParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFontSampleParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFontSampleParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionFontSampleParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFontSampleParameter,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFontSampleParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFontSampleParameter>,local_res8,
               UMaterialExpressionFontSample::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFontSampleParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionFontSampleParameter @ 1472b4590

void __cdecl
UMaterialExpressionFontSampleParameter::StaticRegisterNativesUMaterialExpressionFontSampleParameter
          (void)

{
  return;
}

// UMaterialExpressionFontSampleParameter @ 148afc3a0

UMaterialExpressionFontSampleParameter * __thiscall
UMaterialExpressionFontSampleParameter::UMaterialExpressionFontSampleParameter
          (UMaterialExpressionFontSampleParameter *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->SortPriority = 0x20;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&___7UMaterialExpressionFontSampleParameter__6B_;
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
  this->_padding_ = 0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ExpressionGUID).A = 0;
  (this->ExpressionGUID).B = 0;
  (this->ExpressionGUID).C = 0;
  (this->ExpressionGUID).D = 0;
  (this->Group).ComparisonIndex = 0;
  (this->Group).Number = 0;
  return this;
}

// SetDefaultFont @ 148b04770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMaterialExpressionFontSampleParameter::SetDefaultFont(UMaterialExpressionFontSampleParameter *this)

{
  return;
}

