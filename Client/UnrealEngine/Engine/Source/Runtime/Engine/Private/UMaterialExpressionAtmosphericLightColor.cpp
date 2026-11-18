// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147285d90

UClass * __cdecl UMaterialExpressionAtmosphericLightColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAtmosphericLightColor",
               &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAtmosphericLightColor,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAtmosphericLightColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAtmosphericLightColor>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.InnerSingleton;
}

// UMaterialExpressionAtmosphericLightColor @ 14728cb40

UMaterialExpressionAtmosphericLightColor * __thiscall
UMaterialExpressionAtmosphericLightColor::UMaterialExpressionAtmosphericLightColor
          (UMaterialExpressionAtmosphericLightColor *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionAtmosphericLightColor__6B_;
  return this;
}

// UMaterialExpressionAtmosphericLightColor @ 14728cb70

UMaterialExpressionAtmosphericLightColor * __thiscall
UMaterialExpressionAtmosphericLightColor::UMaterialExpressionAtmosphericLightColor
          (UMaterialExpressionAtmosphericLightColor *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionAtmosphericLightColor__6B_;
  return this;
}

// ~UMaterialExpressionAtmosphericLightColor @ 14728d7d0

void __thiscall
UMaterialExpressionAtmosphericLightColor::~UMaterialExpressionAtmosphericLightColor
          (UMaterialExpressionAtmosphericLightColor *this)

{
  *(undefined ***)this = &___7UMaterialExpressionAtmosphericLightColor__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 147290a90

UClass * __cdecl UMaterialExpressionAtmosphericLightColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAtmosphericLightColor",
               &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAtmosphericLightColor,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAtmosphericLightColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAtmosphericLightColor>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionAtmosphericLightColor @ 1472914a0

void __cdecl
UMaterialExpressionAtmosphericLightColor::
StaticRegisterNativesUMaterialExpressionAtmosphericLightColor(void)

{
  return;
}

