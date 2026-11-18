// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a5950

UClass * __cdecl UMaterialExpressionEyeAdaptationInverse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptationInverse.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionEyeAdaptationInverse",
               &Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptationInverse.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionEyeAdaptationInverse,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionEyeAdaptationInverse>,
               InternalVTableHelperCtorCaller<UMaterialExpressionEyeAdaptationInverse>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptationInverse.InnerSingleton;
}

// UMaterialExpressionEyeAdaptationInverse @ 1472ace90

UMaterialExpressionEyeAdaptationInverse * __thiscall
UMaterialExpressionEyeAdaptationInverse::UMaterialExpressionEyeAdaptationInverse
          (UMaterialExpressionEyeAdaptationInverse *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionEyeAdaptationInverse__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->LightValueInput).OutputIndex = 0;
  (this->LightValueInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->LightValueInput).InputName.Number = 0;
  (this->LightValueInput).MaskR = 0;
  (this->LightValueInput).MaskG = 0;
  (this->LightValueInput).MaskB = 0;
  (this->LightValueInput).MaskA = 0;
  (this->LightValueInput).Expression = (UMaterialExpression *)0x0;
  (this->AlphaInput).OutputIndex = 0;
  (this->AlphaInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AlphaInput).InputName.Number = 0;
  (this->AlphaInput).MaskR = 0;
  (this->AlphaInput).MaskG = 0;
  (this->AlphaInput).MaskB = 0;
  (this->AlphaInput).MaskA = 0;
  (this->AlphaInput).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionEyeAdaptationInverse @ 1472af6f0

void __thiscall
UMaterialExpressionEyeAdaptationInverse::~UMaterialExpressionEyeAdaptationInverse
          (UMaterialExpressionEyeAdaptationInverse *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionExternalCodeBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b22a0

UClass * __cdecl UMaterialExpressionEyeAdaptationInverse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptationInverse.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionEyeAdaptationInverse",
               &Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptationInverse.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionEyeAdaptationInverse,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionEyeAdaptationInverse>,
               InternalVTableHelperCtorCaller<UMaterialExpressionEyeAdaptationInverse>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptationInverse.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionEyeAdaptationInverse @ 1472b4520

void __cdecl
UMaterialExpressionEyeAdaptationInverse::
StaticRegisterNativesUMaterialExpressionEyeAdaptationInverse(void)

{
  return;
}

// UMaterialExpressionEyeAdaptationInverse @ 148afc250

UMaterialExpressionEyeAdaptationInverse * __thiscall
UMaterialExpressionEyeAdaptationInverse::UMaterialExpressionEyeAdaptationInverse
          (UMaterialExpressionEyeAdaptationInverse *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionEyeAdaptationInverse__6B_;
  (this->LightValueInput).OutputIndex = 0;
  (this->LightValueInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->LightValueInput).InputName.Number = 0;
  (this->LightValueInput).MaskR = 0;
  (this->LightValueInput).MaskG = 0;
  (this->LightValueInput).MaskB = 0;
  (this->LightValueInput).MaskA = 0;
  (this->LightValueInput).Expression = (UMaterialExpression *)0x0;
  (this->AlphaInput).OutputIndex = 0;
  (this->AlphaInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AlphaInput).InputName.Number = 0;
  (this->AlphaInput).MaskR = 0;
  (this->AlphaInput).MaskG = 0;
  (this->AlphaInput).MaskB = 0;
  (this->AlphaInput).MaskA = 0;
  (this->AlphaInput).Expression = (UMaterialExpression *)0x0;
  return this;
}

