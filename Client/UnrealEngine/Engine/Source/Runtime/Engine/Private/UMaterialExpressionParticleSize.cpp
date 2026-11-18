// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b7290

UClass * __cdecl UMaterialExpressionParticleSize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleSize.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleSize",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleSize.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleSize,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleSize>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleSize>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleSize.InnerSingleton;
}

// UMaterialExpressionParticleSize @ 1472c0ba0

UMaterialExpressionParticleSize * __thiscall
UMaterialExpressionParticleSize::UMaterialExpressionParticleSize
          (UMaterialExpressionParticleSize *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleSize__6B_;
  return this;
}

// UMaterialExpressionParticleSize @ 1472c0bd0

UMaterialExpressionParticleSize * __thiscall
UMaterialExpressionParticleSize::UMaterialExpressionParticleSize
          (UMaterialExpressionParticleSize *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleSize__6B_;
  return this;
}

// ~UMaterialExpressionParticleSize @ 1472c2390

void __thiscall
UMaterialExpressionParticleSize::~UMaterialExpressionParticleSize
          (UMaterialExpressionParticleSize *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleSize__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5a70

UClass * __cdecl UMaterialExpressionParticleSize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleSize.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleSize",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleSize.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleSize,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleSize>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleSize>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleSize.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleSize @ 1472c7600

void __cdecl
UMaterialExpressionParticleSize::StaticRegisterNativesUMaterialExpressionParticleSize(void)

{
  return;
}

