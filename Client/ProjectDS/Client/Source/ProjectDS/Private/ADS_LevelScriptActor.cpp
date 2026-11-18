// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4dc650

UClass * __cdecl ADS_LevelScriptActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LevelScriptActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelScriptActor",
               &Z_Registration_Info_UClass_ADS_LevelScriptActor.InnerSingleton,
               StaticRegisterNativesADS_LevelScriptActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_LevelScriptActor>,
               InternalVTableHelperCtorCaller<ADS_LevelScriptActor>,local_res8,
               ALevelScriptActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LevelScriptActor.InnerSingleton;
}

// ADS_LevelScriptActor @ 14b4df500

ADS_LevelScriptActor * __thiscall
ADS_LevelScriptActor::ADS_LevelScriptActor(ADS_LevelScriptActor *this,FVTableHelper *param_1)

{
  ALevelScriptActor::ALevelScriptActor((ALevelScriptActor *)this,param_1);
  *(undefined ***)this = &___7ADS_LevelScriptActor__6B_;
  return this;
}

// ~ADS_LevelScriptActor @ 14b4e0070

void __thiscall ADS_LevelScriptActor::~ADS_LevelScriptActor(ADS_LevelScriptActor *this)

{
  *(undefined ***)this = &___7ADS_LevelScriptActor__6B_;
  ALevelScriptActor::~ALevelScriptActor((ALevelScriptActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e1790

UClass * __cdecl ADS_LevelScriptActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LevelScriptActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelScriptActor",
               &Z_Registration_Info_UClass_ADS_LevelScriptActor.InnerSingleton,
               StaticRegisterNativesADS_LevelScriptActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_LevelScriptActor>,
               InternalVTableHelperCtorCaller<ADS_LevelScriptActor>,local_res8,
               ALevelScriptActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LevelScriptActor.InnerSingleton;
}

// StaticRegisterNativesADS_LevelScriptActor @ 14b4e26e0

void __cdecl ADS_LevelScriptActor::StaticRegisterNativesADS_LevelScriptActor(void)

{
  return;
}

// ADS_LevelScriptActor @ 14b998d80

ADS_LevelScriptActor * __thiscall
ADS_LevelScriptActor::ADS_LevelScriptActor(ADS_LevelScriptActor *this,FObjectInitializer *param_1)

{
  ALevelScriptActor::ALevelScriptActor((ALevelScriptActor *)this,param_1);
  *(undefined ***)this = &___7ADS_LevelScriptActor__6B_;
  return this;
}

// BeginPlay @ 14b99b570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_LevelScriptActor::BeginPlay(ADS_LevelScriptActor *this)

{
  bool bVar1;
  
  AActor::BeginPlay((AActor *)this);
  bVar1 = UReflexBlueprintLibrary::GetReflexAvailable();
  if (bVar1) {
    UReflexBlueprintLibrary::SetReflexMode(Enabled);
    return;
  }
  return;
}

