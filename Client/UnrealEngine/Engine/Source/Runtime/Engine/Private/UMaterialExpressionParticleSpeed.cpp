// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b7410

UClass * __cdecl UMaterialExpressionParticleSpeed::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleSpeed.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleSpeed",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleSpeed.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleSpeed,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleSpeed>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleSpeed>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleSpeed.InnerSingleton;
}

// UMaterialExpressionParticleSpeed @ 1472c0c00

UMaterialExpressionParticleSpeed * __thiscall
UMaterialExpressionParticleSpeed::UMaterialExpressionParticleSpeed
          (UMaterialExpressionParticleSpeed *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleSpeed__6B_;
  return this;
}

// UMaterialExpressionParticleSpeed @ 1472c0c30

UMaterialExpressionParticleSpeed * __thiscall
UMaterialExpressionParticleSpeed::UMaterialExpressionParticleSpeed
          (UMaterialExpressionParticleSpeed *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleSpeed__6B_;
  return this;
}

// ~UMaterialExpressionParticleSpeed @ 1472c23b0

void __thiscall
UMaterialExpressionParticleSpeed::~UMaterialExpressionParticleSpeed
          (UMaterialExpressionParticleSpeed *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleSpeed__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5b30

UClass * __cdecl UMaterialExpressionParticleSpeed::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleSpeed.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleSpeed",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleSpeed.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleSpeed,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleSpeed>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleSpeed>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleSpeed.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleSpeed @ 1472c7610

void __cdecl
UMaterialExpressionParticleSpeed::StaticRegisterNativesUMaterialExpressionParticleSpeed(void)

{
  return;
}

