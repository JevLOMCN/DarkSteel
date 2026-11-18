// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// ~FConnectionState @ 14ec55c80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconHost::FConnectionState::~FConnectionState(FConnectionState *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  this_00 = AActor::GetWorldTimerManager((AActor *)this->BeaconHost);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->FinishHandshakeTimerHandle);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (this_00,(FTimerHandle)(this->FinishHandshakeTimerHandle).Handle);
  }
  (this->FinishHandshakeTimerHandle).Handle = 0;
  return;
}

