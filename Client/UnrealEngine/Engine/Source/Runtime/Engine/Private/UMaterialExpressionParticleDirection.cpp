// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ba760

UClass * __cdecl UMaterialExpressionParticleDirection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleDirection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleDirection",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleDirection.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleDirection,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleDirection>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleDirection>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleDirection.InnerSingleton;
}

// UMaterialExpressionParticleDirection @ 1472c0900

UMaterialExpressionParticleDirection * __thiscall
UMaterialExpressionParticleDirection::UMaterialExpressionParticleDirection
          (UMaterialExpressionParticleDirection *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleDirection__6B_;
  return this;
}

// UMaterialExpressionParticleDirection @ 1472c0930

UMaterialExpressionParticleDirection * __thiscall
UMaterialExpressionParticleDirection::UMaterialExpressionParticleDirection
          (UMaterialExpressionParticleDirection *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleDirection__6B_;
  return this;
}

// ~UMaterialExpressionParticleDirection @ 1472c22b0

void __thiscall
UMaterialExpressionParticleDirection::~UMaterialExpressionParticleDirection
          (UMaterialExpressionParticleDirection *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleDirection__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5530

UClass * __cdecl UMaterialExpressionParticleDirection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleDirection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleDirection",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleDirection.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleDirection,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleDirection>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleDirection>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleDirection.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleDirection @ 1472c7590

void __cdecl
UMaterialExpressionParticleDirection::StaticRegisterNativesUMaterialExpressionParticleDirection
          (void)

{
  return;
}

