// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1480762e0

UClass * __cdecl APackedLevelActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APackedLevelActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PackedLevelActor",
               &Z_Registration_Info_UClass_APackedLevelActor.InnerSingleton,
               StaticRegisterNativesAPackedLevelActor,0x360,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APackedLevelActor>,
               InternalVTableHelperCtorCaller<APackedLevelActor>,local_res8,
               ALevelInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APackedLevelActor.InnerSingleton;
}

// APackedLevelActor @ 148088ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APackedLevelActor * __thiscall
APackedLevelActor::APackedLevelActor(APackedLevelActor *this,FVTableHelper *param_1)

{
  ALevelInstance::ALevelInstance((ALevelInstance *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ILevelInstanceInterface__;
  return this;
}

// APackedLevelActor @ 148088ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APackedLevelActor * __thiscall APackedLevelActor::APackedLevelActor(APackedLevelActor *this)

{
  ALevelInstance::ALevelInstance((ALevelInstance *)this);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ILevelInstanceInterface__;
  return this;
}

// ~APackedLevelActor @ 14808e5b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APackedLevelActor::~APackedLevelActor(APackedLevelActor *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ILevelInstanceInterface__;
  ALevelInstance::~ALevelInstance((ALevelInstance *)this);
  return;
}

// GetPrivateStaticClass @ 1480a93e0

UClass * __cdecl APackedLevelActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APackedLevelActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PackedLevelActor",
               &Z_Registration_Info_UClass_APackedLevelActor.InnerSingleton,
               StaticRegisterNativesAPackedLevelActor,0x360,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APackedLevelActor>,
               InternalVTableHelperCtorCaller<APackedLevelActor>,local_res8,
               ALevelInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APackedLevelActor.InnerSingleton;
}

// IsLoadingEnabled @ 1480b3c70

bool __thiscall APackedLevelActor::IsLoadingEnabled(APackedLevelActor *this)

{
  return false;
}

// Serialize @ 1480ce960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APackedLevelActor::Serialize(APackedLevelActor *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  ALevelInstance::Serialize((ALevelInstance *)this,param_1);
  return;
}

// Serialize @ 1480ce9a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
APackedLevelActor::Serialize(APackedLevelActor *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5ReleaseStreamObjectVersion::GUID);
  ALevelInstance::Serialize((ALevelInstance *)this,pFVar1);
  return;
}

// StaticRegisterNativesAPackedLevelActor @ 1480d5670

void __cdecl APackedLevelActor::StaticRegisterNativesAPackedLevelActor(void)

{
  return;
}

