// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b573010

UClass * __cdecl ADS_QuestNPC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_QuestNPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestNPC",
               &Z_Registration_Info_UClass_ADS_QuestNPC.InnerSingleton,
               StaticRegisterNativesADS_QuestNPC,0x328,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<ADS_QuestNPC>,
               InternalVTableHelperCtorCaller<ADS_QuestNPC>,local_res8,
               ADS_PartsSystemActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_QuestNPC.InnerSingleton;
}

// ADS_QuestNPC @ 14b574d90

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

ADS_QuestNPC * __thiscall ADS_QuestNPC::ADS_QuestNPC(ADS_QuestNPC *this,FVTableHelper *param_1)

{
  ADS_PartsSystemActor::ADS_PartsSystemActor((ADS_PartsSystemActor *)this,param_1);
  this->ID_NpcBase = 0;
  this->_padding_ = (longlong)&___7ADS_QuestNPC__6B_;
  this->AnimState = Idle;
  return this;
}

// ~ADS_QuestNPC @ 14b575d60

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

void __thiscall ADS_QuestNPC::~ADS_QuestNPC(ADS_QuestNPC *this)

{
  this->_padding_ = (longlong)&___7ADS_QuestNPC__6B_;
  ADS_PartsSystemActor::~ADS_PartsSystemActor((ADS_PartsSystemActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b576940

UClass * __cdecl ADS_QuestNPC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_QuestNPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestNPC",
               &Z_Registration_Info_UClass_ADS_QuestNPC.InnerSingleton,
               StaticRegisterNativesADS_QuestNPC,0x328,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<ADS_QuestNPC>,
               InternalVTableHelperCtorCaller<ADS_QuestNPC>,local_res8,
               ADS_PartsSystemActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_QuestNPC.InnerSingleton;
}

// StaticRegisterNativesADS_QuestNPC @ 14b576e80

void __cdecl ADS_QuestNPC::StaticRegisterNativesADS_QuestNPC(void)

{
  return;
}

// ADS_QuestNPC @ 14bc820e0

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

ADS_QuestNPC * __thiscall ADS_QuestNPC::ADS_QuestNPC(ADS_QuestNPC *this,FObjectInitializer *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  ADS_PartsSystemActor::ADS_PartsSystemActor((ADS_PartsSystemActor *)this,param_1);
  this->ID_NpcBase = 0;
  this->_padding_ = (longlong)&___7ADS_QuestNPC__6B_;
  this->AnimState = Idle;
  *(undefined1 *)&this->_padding_ = 0;
  pFVar1 = ::FName::FName(local_res8,L"/SpawnedActors/QuestNPC");
  this->_padding_ = (longlong)*pFVar1;
  return this;
}

// GetPresetTable @ 14bca17a0

FDS_ResourcePresetTableRow * __thiscall ADS_QuestNPC::GetPresetTable(ADS_QuestNPC *this)

{
  bool bVar1;
  FDS_NpcBaseTableRow *this_00;
  FDS_ResourcePresetTableRow *this_01;
  
  this_00 = FDS_NpcBaseTableRow::GetRef((longlong)this->ID_NpcBase,true);
  bVar1 = FDS_NpcBaseTableRow::IsValid(this_00);
  if (bVar1) {
    this_01 = FDS_NpcBaseTableRow::ID_ResourcePresetTable(this_00);
    bVar1 = FDS_ResourcePresetTableRow::IsValid(this_01);
    if (!bVar1) {
      this_01 = (FDS_ResourcePresetTableRow *)0x0;
    }
    return this_01;
  }
  return (FDS_ResourcePresetTableRow *)0x0;
}

