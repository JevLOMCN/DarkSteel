// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472de090

UClass * __cdecl UMaterialExpressionTextureSampleParameterVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameterVolume",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureSampleParameterVolume,
               0x228,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameterVolume>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameterVolume>,
               local_res8,UMaterialExpressionTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.InnerSingleton;
}

// UMaterialExpressionTextureSampleParameterVolume @ 1472e2530

UMaterialExpressionTextureSampleParameterVolume * __thiscall
UMaterialExpressionTextureSampleParameterVolume::UMaterialExpressionTextureSampleParameterVolume
          (UMaterialExpressionTextureSampleParameterVolume *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this,param_1);
  *(undefined4 *)&this->field_0x220 = 0x20;
  *(undefined8 *)&this->field_0x200 = 0;
  *(undefined8 *)&this->field_0x208 = 0;
  *(undefined8 *)&this->field_0x210 = 0;
  *(undefined8 *)&this->field_0x218 = 0;
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameterVolume__6B_;
  return this;
}

// ~UMaterialExpressionTextureSampleParameterVolume @ 1472e3620

void __thiscall
UMaterialExpressionTextureSampleParameterVolume::~UMaterialExpressionTextureSampleParameterVolume
          (UMaterialExpressionTextureSampleParameterVolume *this)

{
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameter__6B_;
  UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this);
  return;
}

// GetPrivateStaticClass @ 1472e61e0

UClass * __cdecl UMaterialExpressionTextureSampleParameterVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameterVolume",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureSampleParameterVolume,
               0x228,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameterVolume>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameterVolume>,
               local_res8,UMaterialExpressionTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureSampleParameterVolume @ 1472e78e0

void __cdecl
UMaterialExpressionTextureSampleParameterVolume::
StaticRegisterNativesUMaterialExpressionTextureSampleParameterVolume(void)

{
  return;
}

// UMaterialExpressionTextureSampleParameterVolume @ 148aff670

UMaterialExpressionTextureSampleParameterVolume * __thiscall
UMaterialExpressionTextureSampleParameterVolume::UMaterialExpressionTextureSampleParameterVolume
          (UMaterialExpressionTextureSampleParameterVolume *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureSampleParameter::UMaterialExpressionTextureSampleParameter
            ((UMaterialExpressionTextureSampleParameter *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameterVolume__6B_;
  return this;
}

