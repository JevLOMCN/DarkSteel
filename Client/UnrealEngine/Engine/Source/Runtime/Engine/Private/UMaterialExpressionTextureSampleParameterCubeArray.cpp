// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472dde80

UClass * __cdecl UMaterialExpressionTextureSampleParameterCubeArray::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCubeArray.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameterCubeArray",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCubeArray.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureSampleParameterCubeArray,0x228,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameterCubeArray>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameterCubeArray>,
               local_res8,UMaterialExpressionTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCubeArray.
         InnerSingleton;
}

// UMaterialExpressionTextureSampleParameterCubeArray @ 1472e2420

UMaterialExpressionTextureSampleParameterCubeArray * __thiscall
UMaterialExpressionTextureSampleParameterCubeArray::
UMaterialExpressionTextureSampleParameterCubeArray
          (UMaterialExpressionTextureSampleParameterCubeArray *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this,param_1);
  *(undefined4 *)&this->field_0x220 = 0x20;
  *(undefined8 *)&this->field_0x200 = 0;
  *(undefined8 *)&this->field_0x208 = 0;
  *(undefined8 *)&this->field_0x210 = 0;
  *(undefined8 *)&this->field_0x218 = 0;
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameterCubeArray__6B_;
  return this;
}

// UMaterialExpressionTextureSampleParameterCubeArray @ 1472e2470

UMaterialExpressionTextureSampleParameterCubeArray * __thiscall
UMaterialExpressionTextureSampleParameterCubeArray::
UMaterialExpressionTextureSampleParameterCubeArray
          (UMaterialExpressionTextureSampleParameterCubeArray *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureSampleParameter::UMaterialExpressionTextureSampleParameter
            ((UMaterialExpressionTextureSampleParameter *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameterCubeArray__6B_;
  return this;
}

// ~UMaterialExpressionTextureSampleParameterCubeArray @ 1472e35e0

void __thiscall
UMaterialExpressionTextureSampleParameterCubeArray::
~UMaterialExpressionTextureSampleParameterCubeArray
          (UMaterialExpressionTextureSampleParameterCubeArray *this)

{
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameter__6B_;
  UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6060

UClass * __cdecl UMaterialExpressionTextureSampleParameterCubeArray::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCubeArray.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameterCubeArray",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCubeArray.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureSampleParameterCubeArray,0x228,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameterCubeArray>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameterCubeArray>,
               local_res8,UMaterialExpressionTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCubeArray.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureSampleParameterCubeArray @ 1472e78c0

void __cdecl
UMaterialExpressionTextureSampleParameterCubeArray::
StaticRegisterNativesUMaterialExpressionTextureSampleParameterCubeArray(void)

{
  return;
}

// GetRequirements @ 148b02400

wchar_t * __thiscall
UMaterialExpressionTextureSampleParameterCubeArray::GetRequirements
          (UMaterialExpressionTextureSampleParameterCubeArray *this)

{
  return L"Requires TextureCubeArray";
}

