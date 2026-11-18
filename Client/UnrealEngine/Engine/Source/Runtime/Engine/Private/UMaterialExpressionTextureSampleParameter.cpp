// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// GetParameterExpressionId @ 14728f070

FGuid * __thiscall
UMaterialExpressionTextureSampleParameter::GetParameterExpressionId
          (UMaterialExpressionTextureSampleParameter *this)

{
  return &this->ExpressionGUID;
}

// StaticClass @ 1472dd210

UClass * __cdecl UMaterialExpressionTextureSampleParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureSampleParameter,0x228,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionTextureSampleParameter>
               ,InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameter>,local_res8
               ,UMaterialExpressionTextureSample::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter.InnerSingleton;
}

// UMaterialExpressionTextureSampleParameter @ 1472e2380

UMaterialExpressionTextureSampleParameter * __thiscall
UMaterialExpressionTextureSampleParameter::UMaterialExpressionTextureSampleParameter
          (UMaterialExpressionTextureSampleParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this,param_1);
  this->SortPriority = 0x20;
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureSampleParameter__6B_;
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

// ~UMaterialExpressionTextureSampleParameter @ 1472e35a0

void __thiscall
UMaterialExpressionTextureSampleParameter::~UMaterialExpressionTextureSampleParameter
          (UMaterialExpressionTextureSampleParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureSampleParameter__6B_;
  UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5ee0

UClass * __cdecl UMaterialExpressionTextureSampleParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureSampleParameter,0x228,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionTextureSampleParameter>
               ,InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameter>,local_res8
               ,UMaterialExpressionTextureSample::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureSampleParameter @ 1472e78a0

void __cdecl
UMaterialExpressionTextureSampleParameter::
StaticRegisterNativesUMaterialExpressionTextureSampleParameter(void)

{
  return;
}

// UMaterialExpressionTextureSampleParameter @ 148aff4d0

UMaterialExpressionTextureSampleParameter * __thiscall
UMaterialExpressionTextureSampleParameter::UMaterialExpressionTextureSampleParameter
          (UMaterialExpressionTextureSampleParameter *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureBase::UMaterialExpressionTextureBase
            ((UMaterialExpressionTextureBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureSample__6B_;
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
  FText::FText((FText *)&this->_padding_);
  FText::FText((FText *)&this->_padding_);
  FText::FText((FText *)&this->_padding_);
  FText::FText((FText *)&this->_padding_);
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureSampleParameter__6B_;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ExpressionGUID).A = 0;
  (this->ExpressionGUID).B = 0;
  (this->ExpressionGUID).C = 0;
  (this->ExpressionGUID).D = 0;
  (this->Group).ComparisonIndex = 0;
  (this->Group).Number = 0;
  this->SortPriority = 0x20;
  return this;
}

