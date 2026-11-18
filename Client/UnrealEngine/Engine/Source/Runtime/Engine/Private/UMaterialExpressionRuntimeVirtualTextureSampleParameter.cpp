// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472cb150

UClass * __cdecl UMaterialExpressionRuntimeVirtualTextureSampleParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSampleParameter.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRuntimeVirtualTextureSampleParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSampleParameter.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSampleParameter,0x1b0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRuntimeVirtualTextureSampleParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRuntimeVirtualTextureSampleParameter>
               ,local_res8,UMaterialExpressionRuntimeVirtualTextureSample::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSampleParameter.
         InnerSingleton;
}

// UMaterialExpressionRuntimeVirtualTextureSampleParameter @ 1472d2250

UMaterialExpressionRuntimeVirtualTextureSampleParameter * __thiscall
UMaterialExpressionRuntimeVirtualTextureSampleParameter::
UMaterialExpressionRuntimeVirtualTextureSampleParameter
          (UMaterialExpressionRuntimeVirtualTextureSampleParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionRuntimeVirtualTextureSample::UMaterialExpressionRuntimeVirtualTextureSample
            ((UMaterialExpressionRuntimeVirtualTextureSample *)this,param_1);
  this->SortPriority = 0x20;
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureSampleParameter__6B_;
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

// ~UMaterialExpressionRuntimeVirtualTextureSampleParameter @ 1472d4310

void __thiscall
UMaterialExpressionRuntimeVirtualTextureSampleParameter::
~UMaterialExpressionRuntimeVirtualTextureSampleParameter
          (UMaterialExpressionRuntimeVirtualTextureSampleParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureSample__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetParameterExpressionId @ 1472d6010

FGuid * __thiscall
UMaterialExpressionRuntimeVirtualTextureSampleParameter::GetParameterExpressionId
          (UMaterialExpressionRuntimeVirtualTextureSampleParameter *this)

{
  return &this->ExpressionGUID;
}

// GetPrivateStaticClass @ 1472d6330

UClass * __cdecl
UMaterialExpressionRuntimeVirtualTextureSampleParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSampleParameter.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRuntimeVirtualTextureSampleParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSampleParameter.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSampleParameter,0x1b0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRuntimeVirtualTextureSampleParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRuntimeVirtualTextureSampleParameter>
               ,local_res8,UMaterialExpressionRuntimeVirtualTextureSample::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureSampleParameter.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSampleParameter @ 1472d87f0

void __cdecl
UMaterialExpressionRuntimeVirtualTextureSampleParameter::
StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSampleParameter(void)

{
  return;
}

// UMaterialExpressionRuntimeVirtualTextureSampleParameter @ 148afe100

UMaterialExpressionRuntimeVirtualTextureSampleParameter * __thiscall
UMaterialExpressionRuntimeVirtualTextureSampleParameter::
UMaterialExpressionRuntimeVirtualTextureSampleParameter
          (UMaterialExpressionRuntimeVirtualTextureSampleParameter *this,FObjectInitializer *param_1
          )

{
  byte *pbVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x100;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureSampleParameter__6B_;
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
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
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

