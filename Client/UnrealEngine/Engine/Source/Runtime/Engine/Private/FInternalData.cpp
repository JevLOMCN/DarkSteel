// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FInternalData @ 1488ae280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInternalData * __thiscall FTickFunction::FInternalData::FInternalData(FInternalData *this)

{
  this->bRegistered = false;
  this->bWasInterval = false;
  this->TickVisitedGFrameCounter = (atomic<unsigned_int>)0x0;
  this->TickQueuedGFrameCounter = (atomic<unsigned_int>)0x0;
  this->TaskPointer = (void *)0x0;
  this->Next = (FTickFunction *)0x0;
  this->RelativeTickCooldown = 0.0;
  this->TickTaskLevel = (FTickTaskLevel *)0x0;
  this->TaskState = NotQueued;
  this->ActualStartTickGroup = '\0';
  (this->ActualEndTickGroup).Value = '\0';
  this->LastTickGameTimeSeconds = -1.0;
  return this;
}

