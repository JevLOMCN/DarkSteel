// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472cb810

UClass * __cdecl UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSparseVolumeTextureSampleParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSampleParameter,0x1b0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSparseVolumeTextureSampleParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSparseVolumeTextureSampleParameter>
               ,local_res8,UMaterialExpressionSparseVolumeTextureSample::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.
         InnerSingleton;
}

// UMaterialExpressionSparseVolumeTextureSampleParameter @ 1472d3830

UMaterialExpressionSparseVolumeTextureSampleParameter * __thiscall
UMaterialExpressionSparseVolumeTextureSampleParameter::
UMaterialExpressionSparseVolumeTextureSampleParameter
          (UMaterialExpressionSparseVolumeTextureSampleParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionSparseVolumeTextureSample::UMaterialExpressionSparseVolumeTextureSample
            ((UMaterialExpressionSparseVolumeTextureSample *)this,param_1);
  this->SortPriority = 0x20;
  this->_padding_ = (longlong)&___7UMaterialExpressionSparseVolumeTextureSampleParameter__6B_;
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

// ~UMaterialExpressionSparseVolumeTextureSampleParameter @ 1472d47c0

void __thiscall
UMaterialExpressionSparseVolumeTextureSampleParameter::
~UMaterialExpressionSparseVolumeTextureSampleParameter
          (UMaterialExpressionSparseVolumeTextureSampleParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSparseVolumeTextureBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetParameterExpressionId @ 1472d6020

FGuid * __thiscall
UMaterialExpressionSparseVolumeTextureSampleParameter::GetParameterExpressionId
          (UMaterialExpressionSparseVolumeTextureSampleParameter *this)

{
  return &this->ExpressionGUID;
}

// GetPrivateStaticClass @ 1472d7d70

UClass * __cdecl UMaterialExpressionSparseVolumeTextureSampleParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSparseVolumeTextureSampleParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSampleParameter,0x1b0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSparseVolumeTextureSampleParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSparseVolumeTextureSampleParameter>
               ,local_res8,UMaterialExpressionSparseVolumeTextureSample::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSampleParameter @ 1472d8a20

void __cdecl
UMaterialExpressionSparseVolumeTextureSampleParameter::
StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSampleParameter(void)

{
  return;
}

// UMaterialExpressionSparseVolumeTextureSampleParameter @ 148afebe0

UMaterialExpressionSparseVolumeTextureSampleParameter * __thiscall
UMaterialExpressionSparseVolumeTextureSampleParameter::
UMaterialExpressionSparseVolumeTextureSampleParameter
          (UMaterialExpressionSparseVolumeTextureSampleParameter *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UMaterialExpressionSparseVolumeTextureBase::UMaterialExpressionSparseVolumeTextureBase
            ((UMaterialExpressionSparseVolumeTextureBase *)this,param_1);
  this->SortPriority = 0x20;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&___7UMaterialExpressionSparseVolumeTextureSampleParameter__6B_;
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

