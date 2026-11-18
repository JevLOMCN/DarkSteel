// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ba560

UClass * __cdecl UMaterialExpressionParticleColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleColor",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleColor,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleColor>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleColor.InnerSingleton;
}

// UMaterialExpressionParticleColor @ 1472c08d0

UMaterialExpressionParticleColor * __thiscall
UMaterialExpressionParticleColor::UMaterialExpressionParticleColor
          (UMaterialExpressionParticleColor *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleColor__6B_;
  return this;
}

// ~UMaterialExpressionParticleColor @ 1472c2290

void __thiscall
UMaterialExpressionParticleColor::~UMaterialExpressionParticleColor
          (UMaterialExpressionParticleColor *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleColor__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5470

UClass * __cdecl UMaterialExpressionParticleColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleColor",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleColor,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleColor>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleColor.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleColor @ 1472c7580

void __cdecl
UMaterialExpressionParticleColor::StaticRegisterNativesUMaterialExpressionParticleColor(void)

{
  return;
}

// UMaterialExpressionParticleColor @ 148afd950

UMaterialExpressionParticleColor * __thiscall
UMaterialExpressionParticleColor::UMaterialExpressionParticleColor
          (UMaterialExpressionParticleColor *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleColor__6B_;
  return this;
}

