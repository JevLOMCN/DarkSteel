// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b7710

UClass * __cdecl UMaterialExpressionParticleSpriteRotation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleSpriteRotation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleSpriteRotation",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleSpriteRotation.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleSpriteRotation,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleSpriteRotation>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleSpriteRotation>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleSpriteRotation.InnerSingleton;
}

// UMaterialExpressionParticleSpriteRotation @ 1472c0c60

UMaterialExpressionParticleSpriteRotation * __thiscall
UMaterialExpressionParticleSpriteRotation::UMaterialExpressionParticleSpriteRotation
          (UMaterialExpressionParticleSpriteRotation *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleSpriteRotation__6B_;
  return this;
}

// ~UMaterialExpressionParticleSpriteRotation @ 1472c23d0

void __thiscall
UMaterialExpressionParticleSpriteRotation::~UMaterialExpressionParticleSpriteRotation
          (UMaterialExpressionParticleSpriteRotation *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleSpriteRotation__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5bf0

UClass * __cdecl UMaterialExpressionParticleSpriteRotation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleSpriteRotation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleSpriteRotation",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleSpriteRotation.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleSpriteRotation,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleSpriteRotation>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleSpriteRotation>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleSpriteRotation.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleSpriteRotation @ 1472c7620

void __cdecl
UMaterialExpressionParticleSpriteRotation::
StaticRegisterNativesUMaterialExpressionParticleSpriteRotation(void)

{
  return;
}

// UMaterialExpressionParticleSpriteRotation @ 148afd980

UMaterialExpressionParticleSpriteRotation * __thiscall
UMaterialExpressionParticleSpriteRotation::UMaterialExpressionParticleSpriteRotation
          (UMaterialExpressionParticleSpriteRotation *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleSpriteRotation__6B_;
  return this;
}

