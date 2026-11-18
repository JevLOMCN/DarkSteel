// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472bab60

UClass * __cdecl UMaterialExpressionParticleMotionBlurFade::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleMotionBlurFade",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleMotionBlurFade,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleMotionBlurFade>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleMotionBlurFade>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.InnerSingleton;
}

// UMaterialExpressionParticleMotionBlurFade @ 1472c09c0

UMaterialExpressionParticleMotionBlurFade * __thiscall
UMaterialExpressionParticleMotionBlurFade::UMaterialExpressionParticleMotionBlurFade
          (UMaterialExpressionParticleMotionBlurFade *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleMotionBlurFade__6B_;
  return this;
}

// UMaterialExpressionParticleMotionBlurFade @ 1472c09f0

UMaterialExpressionParticleMotionBlurFade * __thiscall
UMaterialExpressionParticleMotionBlurFade::UMaterialExpressionParticleMotionBlurFade
          (UMaterialExpressionParticleMotionBlurFade *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleMotionBlurFade__6B_;
  return this;
}

// ~UMaterialExpressionParticleMotionBlurFade @ 1472c22f0

void __thiscall
UMaterialExpressionParticleMotionBlurFade::~UMaterialExpressionParticleMotionBlurFade
          (UMaterialExpressionParticleMotionBlurFade *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleMotionBlurFade__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c56b0

UClass * __cdecl UMaterialExpressionParticleMotionBlurFade::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleMotionBlurFade",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleMotionBlurFade,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleMotionBlurFade>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleMotionBlurFade>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleMotionBlurFade @ 1472c75b0

void __cdecl
UMaterialExpressionParticleMotionBlurFade::
StaticRegisterNativesUMaterialExpressionParticleMotionBlurFade(void)

{
  return;
}

