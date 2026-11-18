// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dd3a0

UClass * __cdecl UMaterialExpressionTextureObjectParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureObjectParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureObjectParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureObjectParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureObjectParameter,0x228,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureObjectParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureObjectParameter>,local_res8,
               UMaterialExpressionTextureSampleParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureObjectParameter.InnerSingleton;
}

// UMaterialExpressionTextureObjectParameter @ 1472e20b0

UMaterialExpressionTextureObjectParameter * __thiscall
UMaterialExpressionTextureObjectParameter::UMaterialExpressionTextureObjectParameter
          (UMaterialExpressionTextureObjectParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this,param_1);
  *(undefined4 *)&this->field_0x220 = 0x20;
  *(undefined8 *)&this->field_0x200 = 0;
  *(undefined8 *)&this->field_0x208 = 0;
  *(undefined8 *)&this->field_0x210 = 0;
  *(undefined8 *)&this->field_0x218 = 0;
  *(undefined ***)this = &___7UMaterialExpressionTextureObjectParameter__6B_;
  return this;
}

// ~UMaterialExpressionTextureObjectParameter @ 1472e34a0

void __thiscall
UMaterialExpressionTextureObjectParameter::~UMaterialExpressionTextureObjectParameter
          (UMaterialExpressionTextureObjectParameter *this)

{
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameter__6B_;
  UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5b20

UClass * __cdecl UMaterialExpressionTextureObjectParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureObjectParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureObjectParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureObjectParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureObjectParameter,0x228,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureObjectParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureObjectParameter>,local_res8,
               UMaterialExpressionTextureSampleParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureObjectParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureObjectParameter @ 1472e7850

void __cdecl
UMaterialExpressionTextureObjectParameter::
StaticRegisterNativesUMaterialExpressionTextureObjectParameter(void)

{
  return;
}

// UMaterialExpressionTextureObjectParameter @ 148aff290

UMaterialExpressionTextureObjectParameter * __thiscall
UMaterialExpressionTextureObjectParameter::UMaterialExpressionTextureObjectParameter
          (UMaterialExpressionTextureObjectParameter *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureSampleParameter::UMaterialExpressionTextureSampleParameter
            ((UMaterialExpressionTextureSampleParameter *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionTextureObjectParameter__6B_;
  return this;
}

