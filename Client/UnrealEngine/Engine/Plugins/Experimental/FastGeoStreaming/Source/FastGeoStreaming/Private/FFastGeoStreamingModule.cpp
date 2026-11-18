// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 3

// StartupModule @ 14da068a0

void __thiscall FFastGeoStreamingModule::StartupModule(FFastGeoStreamingModule *this)

{
  FDelegateHandle FVar1;
  FFastGeoStreamingModule local_res8 [2];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
          AddRaw<FFastGeoStreamingModule>
                    ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                      *)&FWorldDelegates::OnWorldPreSendAllEndOfFrameUpdates,local_res8,
                     (pmf_f73fe944)this);
                    /* WARNING: Load size is inaccurate */
  (this->Handle_OnWorldPreSendAllEndOfFrameUpdates).ID = *FVar1.ID;
  return;
}

// ShutdownModule @ 14da068e0

void __thiscall FFastGeoStreamingModule::ShutdownModule(FFastGeoStreamingModule *this)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->Handle_OnWorldPreSendAllEndOfFrameUpdates).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPreSendAllEndOfFrameUpdates,FVar1);
    return;
  }
  return;
}

// OnWorldPreSendAllEndOfFrameUpdates @ 14da31c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFastGeoStreamingModule::OnWorldPreSendAllEndOfFrameUpdates
          (FFastGeoStreamingModule *this,UWorld *param_1)

{
  UFastGeoWorldSubsystem *this_00;
  
  this_00 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(param_1);
  if (this_00 != (UFastGeoWorldSubsystem *)0x0) {
    UFastGeoWorldSubsystem::ProcessPendingRecreate(this_00);
    return;
  }
  return;
}

