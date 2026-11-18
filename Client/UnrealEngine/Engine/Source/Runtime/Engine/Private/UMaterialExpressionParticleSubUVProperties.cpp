// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b80e0

UClass * __cdecl UMaterialExpressionParticleSubUVProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleSubUVProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleSubUVProperties",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleSubUVProperties.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionParticleSubUVProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleSubUVProperties>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleSubUVProperties>,local_res8
               ,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleSubUVProperties.InnerSingleton;
}

// UMaterialExpressionParticleSubUVProperties @ 1472c0cf0

UMaterialExpressionParticleSubUVProperties * __thiscall
UMaterialExpressionParticleSubUVProperties::UMaterialExpressionParticleSubUVProperties
          (UMaterialExpressionParticleSubUVProperties *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleSubUVProperties__6B_;
  return this;
}

// ~UMaterialExpressionParticleSubUVProperties @ 1472c2410

void __thiscall
UMaterialExpressionParticleSubUVProperties::~UMaterialExpressionParticleSubUVProperties
          (UMaterialExpressionParticleSubUVProperties *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleSubUVProperties__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5d70

UClass * __cdecl UMaterialExpressionParticleSubUVProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleSubUVProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleSubUVProperties",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleSubUVProperties.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionParticleSubUVProperties,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleSubUVProperties>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleSubUVProperties>,local_res8
               ,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleSubUVProperties.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleSubUVProperties @ 1472c7640

void __cdecl
UMaterialExpressionParticleSubUVProperties::
StaticRegisterNativesUMaterialExpressionParticleSubUVProperties(void)

{
  return;
}

// UMaterialExpressionParticleSubUVProperties @ 148afd9b0

UMaterialExpressionParticleSubUVProperties * __thiscall
UMaterialExpressionParticleSubUVProperties::UMaterialExpressionParticleSubUVProperties
          (UMaterialExpressionParticleSubUVProperties *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleSubUVProperties__6B_;
  return this;
}

