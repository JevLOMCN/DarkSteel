// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472bafa0

UClass * __cdecl UMaterialExpressionParticleRadius::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleRadius.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleRadius",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleRadius.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleRadius,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleRadius>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleRadius>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleRadius.InnerSingleton;
}

// UMaterialExpressionParticleRadius @ 1472c0a80

UMaterialExpressionParticleRadius * __thiscall
UMaterialExpressionParticleRadius::UMaterialExpressionParticleRadius
          (UMaterialExpressionParticleRadius *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleRadius__6B_;
  return this;
}

// UMaterialExpressionParticleRadius @ 1472c0ab0

UMaterialExpressionParticleRadius * __thiscall
UMaterialExpressionParticleRadius::UMaterialExpressionParticleRadius
          (UMaterialExpressionParticleRadius *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleRadius__6B_;
  return this;
}

// ~UMaterialExpressionParticleRadius @ 1472c2330

void __thiscall
UMaterialExpressionParticleRadius::~UMaterialExpressionParticleRadius
          (UMaterialExpressionParticleRadius *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleRadius__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5830

UClass * __cdecl UMaterialExpressionParticleRadius::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleRadius.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleRadius",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleRadius.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleRadius,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleRadius>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleRadius>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleRadius.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleRadius @ 1472c75d0

void __cdecl
UMaterialExpressionParticleRadius::StaticRegisterNativesUMaterialExpressionParticleRadius(void)

{
  return;
}

