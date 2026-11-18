// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472911d0

UClass * __cdecl UMaterialExpressionTextureSampleParameter2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameter2D",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureSampleParameter2D,
               0x228,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameter2D>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameter2D>,
               aFStackX_8,UMaterialExpressionTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.InnerSingleton;
}

// UMaterialExpressionTextureSampleParameter2D @ 1472e22b0

UMaterialExpressionTextureSampleParameter2D * __thiscall
UMaterialExpressionTextureSampleParameter2D::UMaterialExpressionTextureSampleParameter2D
          (UMaterialExpressionTextureSampleParameter2D *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this,param_1);
  *(undefined4 *)&this->field_0x220 = 0x20;
  *(undefined8 *)&this->field_0x200 = 0;
  *(undefined8 *)&this->field_0x208 = 0;
  *(undefined8 *)&this->field_0x210 = 0;
  *(undefined8 *)&this->field_0x218 = 0;
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameter2D__6B_;
  return this;
}

// ~UMaterialExpressionTextureSampleParameter2D @ 1472e3560

void __thiscall
UMaterialExpressionTextureSampleParameter2D::~UMaterialExpressionTextureSampleParameter2D
          (UMaterialExpressionTextureSampleParameter2D *this)

{
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameter__6B_;
  UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5d60

UClass * __cdecl UMaterialExpressionTextureSampleParameter2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameter2D",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureSampleParameter2D,
               0x228,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameter2D>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameter2D>,
               local_res8,UMaterialExpressionTextureSampleParameter::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureSampleParameter2D @ 1472e7880

void __cdecl
UMaterialExpressionTextureSampleParameter2D::
StaticRegisterNativesUMaterialExpressionTextureSampleParameter2D(void)

{
  return;
}

// UMaterialExpressionTextureSampleParameter2D @ 148aff4a0

UMaterialExpressionTextureSampleParameter2D * __thiscall
UMaterialExpressionTextureSampleParameter2D::UMaterialExpressionTextureSampleParameter2D
          (UMaterialExpressionTextureSampleParameter2D *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureSampleParameter::UMaterialExpressionTextureSampleParameter
            ((UMaterialExpressionTextureSampleParameter *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionTextureSampleParameter2D__6B_;
  return this;
}

