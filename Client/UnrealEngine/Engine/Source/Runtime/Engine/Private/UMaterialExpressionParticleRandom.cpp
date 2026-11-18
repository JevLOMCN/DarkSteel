// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472bb260

UClass * __cdecl UMaterialExpressionParticleRandom::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleRandom.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleRandom",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleRandom.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleRandom,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleRandom>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleRandom>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleRandom.InnerSingleton;
}

// UMaterialExpressionParticleRandom @ 1472c0ae0

UMaterialExpressionParticleRandom * __thiscall
UMaterialExpressionParticleRandom::UMaterialExpressionParticleRandom
          (UMaterialExpressionParticleRandom *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleRandom__6B_;
  return this;
}

// UMaterialExpressionParticleRandom @ 1472c0b10

UMaterialExpressionParticleRandom * __thiscall
UMaterialExpressionParticleRandom::UMaterialExpressionParticleRandom
          (UMaterialExpressionParticleRandom *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleRandom__6B_;
  return this;
}

// ~UMaterialExpressionParticleRandom @ 1472c2350

void __thiscall
UMaterialExpressionParticleRandom::~UMaterialExpressionParticleRandom
          (UMaterialExpressionParticleRandom *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleRandom__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c58f0

UClass * __cdecl UMaterialExpressionParticleRandom::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleRandom.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleRandom",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleRandom.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleRandom,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleRandom>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleRandom>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleRandom.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleRandom @ 1472c75e0

void __cdecl
UMaterialExpressionParticleRandom::StaticRegisterNativesUMaterialExpressionParticleRandom(void)

{
  return;
}

