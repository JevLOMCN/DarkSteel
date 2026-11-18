// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FPSCTickData @ 1481c7650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPSCTickData * __thiscall FPSCTickData::FPSCTickData(FPSCTickData *this)

{
  undefined1 *puVar1;
  
  this->bCanTickConcurrent = '\0';
  this->bPendingReregister = '\0';
  this->bPendingUnregister = '\0';
  (this->PrereqComponent).field0_0x0.DebugPtr = (UActorComponent *)0x0;
  this->TickListHandle = -1;
  (this->TickGroup).Value = '\0';
  return this;
}

