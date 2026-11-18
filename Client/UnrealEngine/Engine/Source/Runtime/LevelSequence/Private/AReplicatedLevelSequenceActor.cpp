// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 6

// StaticClass @ 146c45c80

UClass * __cdecl AReplicatedLevelSequenceActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"ReplicatedLevelSequenceActor",
               &Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.InnerSingleton,
               StaticRegisterNativesAReplicatedLevelSequenceActor,0x368,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AReplicatedLevelSequenceActor>,
               InternalVTableHelperCtorCaller<AReplicatedLevelSequenceActor>,local_res8,
               ALevelSequenceActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.InnerSingleton;
}

// AReplicatedLevelSequenceActor @ 146c4df60

AReplicatedLevelSequenceActor * __thiscall
AReplicatedLevelSequenceActor::AReplicatedLevelSequenceActor
          (AReplicatedLevelSequenceActor *this,FVTableHelper *param_1)

{
  ALevelSequenceActor::ALevelSequenceActor((ALevelSequenceActor *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__IMovieScenePlaybackClient__;
  *(undefined ***)&this->field_0x2c8 = &_vftable__for__IMovieSceneBindingOwnerInterface__;
  *(undefined ***)&this->field_0x2d0 = &_vftable__for__IWorldPartitionObjectResolver__;
  return this;
}

// AReplicatedLevelSequenceActor @ 146c4dfc0

AReplicatedLevelSequenceActor * __thiscall
AReplicatedLevelSequenceActor::AReplicatedLevelSequenceActor
          (AReplicatedLevelSequenceActor *this,FObjectInitializer *param_1)

{
  ALevelSequenceActor::ALevelSequenceActor((ALevelSequenceActor *)this,param_1);
  this->field_0x58 = this->field_0x58 | 8;
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__IMovieScenePlaybackClient__;
  *(undefined ***)&this->field_0x2c8 = &_vftable__for__IMovieSceneBindingOwnerInterface__;
  *(undefined ***)&this->field_0x2d0 = &_vftable__for__IWorldPartitionObjectResolver__;
  return this;
}

// ~AReplicatedLevelSequenceActor @ 146c4ee60

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
AReplicatedLevelSequenceActor::~AReplicatedLevelSequenceActor(AReplicatedLevelSequenceActor *this)

{
  *(undefined ***)this = &ALevelSequenceActor::_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2d0 = &___7IWorldPartitionObjectResolver__6B_;
  *(undefined ***)&this->field_0x2c8 = &___7IMovieSceneBindingOwnerInterface__6B_;
  *(undefined ***)&this->field_0x2c0 = &___7IMovieScenePlaybackClient__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 146c55470

UClass * __cdecl AReplicatedLevelSequenceActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"ReplicatedLevelSequenceActor",
               &Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.InnerSingleton,
               StaticRegisterNativesAReplicatedLevelSequenceActor,0x368,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AReplicatedLevelSequenceActor>,
               InternalVTableHelperCtorCaller<AReplicatedLevelSequenceActor>,local_res8,
               ALevelSequenceActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.InnerSingleton;
}

// StaticRegisterNativesAReplicatedLevelSequenceActor @ 146c5c520

void __cdecl AReplicatedLevelSequenceActor::StaticRegisterNativesAReplicatedLevelSequenceActor(void)

{
  return;
}

