// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147676a70

UClass * __cdecl ABlockingVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABlockingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlockingVolume",
               &Z_Registration_Info_UClass_ABlockingVolume.InnerSingleton,
               StaticRegisterNativesABlockingVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ABlockingVolume>,
               InternalVTableHelperCtorCaller<ABlockingVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABlockingVolume.InnerSingleton;
}

// ABlockingVolume @ 1476859d0

ABlockingVolume * __thiscall
ABlockingVolume::ABlockingVolume(ABlockingVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ABlockingVolume__6B_;
  return this;
}

// ABlockingVolume @ 147685a00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ABlockingVolume * __thiscall
ABlockingVolume::ABlockingVolume(ABlockingVolume *this,FObjectInitializer *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ABlockingVolume__6B_;
  UActorComponent::SetCanEverAffectNavigation(*(UActorComponent **)&this->field_0x2d8,true);
  (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
            (*(longlong **)&this->field_0x2d8,InvisibleWall_NAME,1);
  return this;
}

// ~ABlockingVolume @ 147689d70

void __thiscall ABlockingVolume::~ABlockingVolume(ABlockingVolume *this)

{
  *(undefined ***)this = &___7ABlockingVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 1476b37d0

UClass * __cdecl ABlockingVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABlockingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlockingVolume",
               &Z_Registration_Info_UClass_ABlockingVolume.InnerSingleton,
               StaticRegisterNativesABlockingVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ABlockingVolume>,
               InternalVTableHelperCtorCaller<ABlockingVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABlockingVolume.InnerSingleton;
}

// StaticRegisterNativesABlockingVolume @ 1476ca120

void __cdecl ABlockingVolume::StaticRegisterNativesABlockingVolume(void)

{
  return;
}

