// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ccd30

UClass * __cdecl UMaterialExpressionStaticComponentMaskParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStaticComponentMaskParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionStaticComponentMaskParameter,
               0x108,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStaticComponentMaskParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStaticComponentMaskParameter>,
               local_res8,UMaterialExpressionParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.InnerSingleton;
}

// UMaterialExpressionStaticComponentMaskParameter @ 1472d3d40

UMaterialExpressionStaticComponentMaskParameter * __thiscall
UMaterialExpressionStaticComponentMaskParameter::UMaterialExpressionStaticComponentMaskParameter
          (UMaterialExpressionStaticComponentMaskParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticComponentMaskParameter__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionStaticComponentMaskParameter @ 1472d3d90

UMaterialExpressionStaticComponentMaskParameter * __thiscall
UMaterialExpressionStaticComponentMaskParameter::UMaterialExpressionStaticComponentMaskParameter
          (UMaterialExpressionStaticComponentMaskParameter *this,FObjectInitializer *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticComponentMaskParameter__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionStaticComponentMaskParameter @ 1472d48a0

void __thiscall
UMaterialExpressionStaticComponentMaskParameter::~UMaterialExpressionStaticComponentMaskParameter
          (UMaterialExpressionStaticComponentMaskParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticComponentMaskParameter__6B_;
  UMaterialExpressionParameter::~UMaterialExpressionParameter((UMaterialExpressionParameter *)this);
  return;
}

// GetPrivateStaticClass @ 1472d82b0

UClass * __cdecl UMaterialExpressionStaticComponentMaskParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStaticComponentMaskParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionStaticComponentMaskParameter,
               0x108,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStaticComponentMaskParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStaticComponentMaskParameter>,
               local_res8,UMaterialExpressionParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionStaticComponentMaskParameter @ 1472d8a90

void __cdecl
UMaterialExpressionStaticComponentMaskParameter::
StaticRegisterNativesUMaterialExpressionStaticComponentMaskParameter(void)

{
  return;
}

