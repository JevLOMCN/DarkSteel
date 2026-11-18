// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FActorSpawnParameters @ 1489b3420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorSpawnParameters * __thiscall
FActorSpawnParameters::FActorSpawnParameters(FActorSpawnParameters *this)

{
  undefined1 *puVar1;
  
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->bRemoteOwned = '\0';
  this->bForceGloballyUniqueName = '\0';
  this->bAllowDuringConstructionScript = '\0';
  this->bDeferConstruction = '\0';
  this->bNoFail = '\0';
  this->Template = (AActor *)0x0;
  this->Owner = (AActor *)0x0;
  this->Instigator = (APawn *)0x0;
  this->OverrideLevel = (ULevel *)0x0;
  this->OverrideParentComponent = (UChildActorComponent *)0x0;
  this->NameMode = Required_Fatal;
  *(undefined8 *)&this->CustomPreSpawnInitalization = 0;
  *(undefined8 *)&(this->CustomPreSpawnInitalization).field_0x28 = 0;
  this->SpawnCollisionHandlingOverride = Undefined;
  this->TransformScaleMethod = MultiplyWithRoot;
  this->ObjectFlags = RF_Transactional;
  return this;
}

