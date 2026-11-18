// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AssignIfInvalid @ 147e5d7f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FLevelInstanceActorGuid::AssignIfInvalid(FLevelInstanceActorGuid *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  if ((((this->ActorGuid).D == 0 && (this->ActorGuid).C == 0) && (this->ActorGuid).B == 0) &&
      (this->ActorGuid).A == 0) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->ActorGuid).A = pFVar4->A;
    (this->ActorGuid).B = uVar1;
    (this->ActorGuid).C = uVar2;
    (this->ActorGuid).D = uVar3;
  }
  return;
}

// GetGuid @ 147e67c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __thiscall FLevelInstanceActorGuid::GetGuid(FLevelInstanceActorGuid *this)

{
  code *pcVar1;
  bool bVar2;
  FGuid *pFVar3;
  
  if ((this->Actor).field0_0x0.DebugPtr == (AActor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Actor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                       ,0x1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGuid *)(*pcVar1)();
      return pFVar3;
    }
  }
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)(this->Actor).field0_0x0.DebugPtr,
                     RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar2) &&
     ((((this->ActorGuid).D == 0 && (this->ActorGuid).C == 0) && (this->ActorGuid).B == 0) &&
      (this->ActorGuid).A == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Actor->IsTemplate() || Guid.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                       ,0x19,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGuid *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->ActorGuid;
}

// GetGuid_Internal @ 147e67d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __thiscall FLevelInstanceActorGuid::GetGuid_Internal(FLevelInstanceActorGuid *this)

{
  code *pcVar1;
  bool bVar2;
  FGuid *pFVar3;
  
  if ((this->Actor).field0_0x0.DebugPtr != (AActor *)0x0) {
    return &this->ActorGuid;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Actor",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                     ,0x1f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGuid *)(*pcVar1)();
    return pFVar3;
  }
  return &this->ActorGuid;
}

// IsValid @ 147e6e410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FLevelInstanceActorGuid::IsValid(FLevelInstanceActorGuid *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Actor).field0_0x0.DebugPtr == (AActor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Actor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorGuid.cpp"
                       ,0x1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (((this->ActorGuid).D != 0 || (this->ActorGuid).C != 0) || (this->ActorGuid).B != 0) ||
         (this->ActorGuid).A != 0;
}

