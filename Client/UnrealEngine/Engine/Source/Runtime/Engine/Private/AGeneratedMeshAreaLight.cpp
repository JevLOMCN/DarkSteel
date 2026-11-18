// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14727ca30

UClass * __cdecl AGeneratedMeshAreaLight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeneratedMeshAreaLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GeneratedMeshAreaLight",
               &Z_Registration_Info_UClass_AGeneratedMeshAreaLight.InnerSingleton,
               StaticRegisterNativesAGeneratedMeshAreaLight,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGeneratedMeshAreaLight>,
               InternalVTableHelperCtorCaller<AGeneratedMeshAreaLight>,local_res8,
               ASpotLight::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeneratedMeshAreaLight.InnerSingleton;
}

// AGeneratedMeshAreaLight @ 14727f440

AGeneratedMeshAreaLight * __thiscall
AGeneratedMeshAreaLight::AGeneratedMeshAreaLight
          (AGeneratedMeshAreaLight *this,FVTableHelper *param_1)

{
  ASpotLight::ASpotLight((ASpotLight *)this,param_1);
  *(undefined ***)this = &___7AGeneratedMeshAreaLight__6B_;
  return this;
}

// ~AGeneratedMeshAreaLight @ 14727fb10

void __thiscall AGeneratedMeshAreaLight::~AGeneratedMeshAreaLight(AGeneratedMeshAreaLight *this)

{
  *(undefined ***)this = &___7AGeneratedMeshAreaLight__6B_;
  ASpotLight::~ASpotLight((ASpotLight *)this);
  return;
}

// GetPrivateStaticClass @ 1472808a0

UClass * __cdecl AGeneratedMeshAreaLight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeneratedMeshAreaLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GeneratedMeshAreaLight",
               &Z_Registration_Info_UClass_AGeneratedMeshAreaLight.InnerSingleton,
               StaticRegisterNativesAGeneratedMeshAreaLight,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGeneratedMeshAreaLight>,
               InternalVTableHelperCtorCaller<AGeneratedMeshAreaLight>,local_res8,
               ASpotLight::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeneratedMeshAreaLight.InnerSingleton;
}

// StaticRegisterNativesAGeneratedMeshAreaLight @ 147281490

void __cdecl AGeneratedMeshAreaLight::StaticRegisterNativesAGeneratedMeshAreaLight(void)

{
  return;
}

// AGeneratedMeshAreaLight @ 147ea3900

AGeneratedMeshAreaLight * __thiscall
AGeneratedMeshAreaLight::AGeneratedMeshAreaLight
          (AGeneratedMeshAreaLight *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  
  ASpotLight::ASpotLight((ASpotLight *)this,param_1);
  *(undefined ***)this = &___7AGeneratedMeshAreaLight__6B_;
  puVar1 = (uint *)(*(longlong *)&this->field_0x2c0 + 0x27c);
  *puVar1 = *puVar1 & 0xfffffffb;
  return this;
}

