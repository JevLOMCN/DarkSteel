// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ddd00

UClass * __cdecl UMaterialExpressionTextureSampleParameterCube::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCube.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameterCube",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCube.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureSampleParameterCube,
               0x228,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameterCube>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameterCube>,
               local_res8,UMaterialExpressionTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCube.InnerSingleton;
}

// UMaterialExpressionTextureSampleParameterCube @ 1472e23d0

UMaterialExpressionTextureSampleParameterCube * __thiscall
UMaterialExpressionTextureSampleParameterCube::UMaterialExpressionTextureSampleParameterCube
          (UMaterialExpressionTextureSampleParameterCube *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this,param_1);
  *(undefined4 *)&this->field_0x220 = 0x20;
  *(undefined8 *)&this->field_0x200 = 0;
  *(undefined8 *)&this->field_0x208 = 0;
  *(undefined8 *)&this->field_0x210 = 0;
  *(undefined8 *)&this->field_0x218 = 0;
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameterCube__6B_;
  return this;
}

// ~UMaterialExpressionTextureSampleParameterCube @ 1472e35c0

void __thiscall
UMaterialExpressionTextureSampleParameterCube::~UMaterialExpressionTextureSampleParameterCube
          (UMaterialExpressionTextureSampleParameterCube *this)

{
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameter__6B_;
  UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5fa0

UClass * __cdecl UMaterialExpressionTextureSampleParameterCube::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCube.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameterCube",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCube.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureSampleParameterCube,
               0x228,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameterCube>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameterCube>,
               local_res8,UMaterialExpressionTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCube.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureSampleParameterCube @ 1472e78b0

void __cdecl
UMaterialExpressionTextureSampleParameterCube::
StaticRegisterNativesUMaterialExpressionTextureSampleParameterCube(void)

{
  return;
}

// UMaterialExpressionTextureSampleParameterCube @ 148aff640

UMaterialExpressionTextureSampleParameterCube * __thiscall
UMaterialExpressionTextureSampleParameterCube::UMaterialExpressionTextureSampleParameterCube
          (UMaterialExpressionTextureSampleParameterCube *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureSampleParameter::UMaterialExpressionTextureSampleParameter
            ((UMaterialExpressionTextureSampleParameter *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameterCube__6B_;
  return this;
}

