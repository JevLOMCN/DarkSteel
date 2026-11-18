// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b4dba80

UClass * __cdecl ADS_LevelSequenceHeroActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LevelSequenceHeroActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelSequenceHeroActor",
               &Z_Registration_Info_UClass_ADS_LevelSequenceHeroActor.InnerSingleton,
               StaticRegisterNativesADS_LevelSequenceHeroActor,0x328,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_LevelSequenceHeroActor>,
               InternalVTableHelperCtorCaller<ADS_LevelSequenceHeroActor>,local_res8,
               ADS_PartsSystemActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LevelSequenceHeroActor.InnerSingleton;
}

// ADS_LevelSequenceHeroActor @ 14b4df530

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_LevelSequenceHeroActor * __thiscall
ADS_LevelSequenceHeroActor::ADS_LevelSequenceHeroActor
          (ADS_LevelSequenceHeroActor *this,FVTableHelper *param_1)

{
  ADS_PartsSystemActor::ADS_PartsSystemActor((ADS_PartsSystemActor *)this,param_1);
  this->HeroCharacterType = None;
  this->_padding_ = (longlong)&___7ADS_LevelSequenceHeroActor__6B_;
  return this;
}

// ADS_LevelSequenceHeroActor @ 14b4df560

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_LevelSequenceHeroActor * __thiscall
ADS_LevelSequenceHeroActor::ADS_LevelSequenceHeroActor
          (ADS_LevelSequenceHeroActor *this,FObjectInitializer *param_1)

{
  ADS_PartsSystemActor::ADS_PartsSystemActor((ADS_PartsSystemActor *)this,param_1);
  this->HeroCharacterType = None;
  this->_padding_ = (longlong)&___7ADS_LevelSequenceHeroActor__6B_;
  return this;
}

// ~ADS_LevelSequenceHeroActor @ 14b4e0090

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
ADS_LevelSequenceHeroActor::~ADS_LevelSequenceHeroActor(ADS_LevelSequenceHeroActor *this)

{
  this->_padding_ = (longlong)&___7ADS_LevelSequenceHeroActor__6B_;
  ADS_PartsSystemActor::~ADS_PartsSystemActor((ADS_PartsSystemActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e1850

UClass * __cdecl ADS_LevelSequenceHeroActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LevelSequenceHeroActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelSequenceHeroActor",
               &Z_Registration_Info_UClass_ADS_LevelSequenceHeroActor.InnerSingleton,
               StaticRegisterNativesADS_LevelSequenceHeroActor,0x328,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_LevelSequenceHeroActor>,
               InternalVTableHelperCtorCaller<ADS_LevelSequenceHeroActor>,local_res8,
               ADS_PartsSystemActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LevelSequenceHeroActor.InnerSingleton;
}

// StaticRegisterNativesADS_LevelSequenceHeroActor @ 14b4e26f0

void __cdecl ADS_LevelSequenceHeroActor::StaticRegisterNativesADS_LevelSequenceHeroActor(void)

{
  return;
}

// GetPresetIDByHeroType @ 14bc43290

int __thiscall
ADS_LevelSequenceHeroActor::GetPresetIDByHeroType
          (ADS_LevelSequenceHeroActor *this,EDS_HeroCharacterType param_1)

{
  if (param_1 == Kairos) {
    return 0x65;
  }
  if (param_1 != Freya) {
    if (param_1 != Circe) {
      return 0;
    }
    return 0x12d;
  }
  return 0xc9;
}

// IsHeroVisible @ 14bc4abc0

bool __thiscall ADS_LevelSequenceHeroActor::IsHeroVisible(ADS_LevelSequenceHeroActor *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  if (this->HeroCharacterType != None) {
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      return *(EDS_HeroCharacterType *)(pUVar2 + 6) == this->HeroCharacterType;
    }
  }
  return false;
}

// PostInitializeComponents @ 14bc55a20

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
ADS_LevelSequenceHeroActor::PostInitializeComponents(ADS_LevelSequenceHeroActor *this)

{
  EDS_HeroCharacterType EVar1;
  undefined4 uVar2;
  USkeletalMesh *pUVar3;
  
  EVar1 = this->HeroCharacterType;
  if (EVar1 == Kairos) {
    uVar2 = 0x65;
  }
  else if (EVar1 == Freya) {
    uVar2 = 0xc9;
  }
  else if (EVar1 == Circe) {
    uVar2 = 0x12d;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)&this->_padding_ = uVar2;
  pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset((USkeletalMeshComponent *)this->_padding_);
  if (pUVar3 == (USkeletalMesh *)0x0) {
    (**(code **)(this->_padding_ + 0x760))();
    AActor::PostInitializeComponents((AActor *)this);
    return;
  }
  (**(code **)(this->_padding_ + 0x770))(this);
  AActor::PostInitializeComponents((AActor *)this);
  return;
}

// RefreshPartsSystem @ 14bc58530

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_LevelSequenceHeroActor::RefreshPartsSystem(ADS_LevelSequenceHeroActor *this)

{
  UObject *pUVar1;
  bool bVar2;
  FWeakObjectPtr local_res8 [4];
  
  if (this->HeroCharacterType == None) {
    bVar2 = true;
  }
  else {
    UDS_PlayerData::GetMainPlayerData();
    bVar2 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar2) {
      pUVar1 = FWeakObjectPtr::Get(local_res8);
      bVar2 = *(EDS_HeroCharacterType *)(pUVar1 + 6) != this->HeroCharacterType;
    }
    else {
      bVar2 = true;
    }
  }
  (**(code **)(this->_padding_ + 0x368))(this,bVar2);
  bVar2 = UDS_BlueprintFunctionLibrary::IsGameRunning();
  if (bVar2) {
    if (this->HeroCharacterType != None) {
      UDS_PlayerData::GetMainPlayerData();
      bVar2 = FWeakObjectPtr::IsValid(local_res8);
      if (bVar2) {
        pUVar1 = FWeakObjectPtr::Get(local_res8);
        if (*(EDS_HeroCharacterType *)(pUVar1 + 6) == this->HeroCharacterType) goto LAB_14bc585cb;
      }
    }
    return;
  }
LAB_14bc585cb:
  ADS_PartsSystemActor::RefreshPartsSystem((ADS_PartsSystemActor *)this);
  return;
}

