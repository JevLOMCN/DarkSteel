// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 236

// `dynamic_initializer_for_'AwayText'' @ 14144e340

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__AwayText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&AwayText,L"OnlinePresence",L"Away",L"Away");
  atexit(_dynamic_atexit_destructor_for__AwayText__);
  return;
}

// `dynamic_initializer_for_'BestFit'' @ 14144e380

void __cdecl ETeamAssignmentMethod::_dynamic_initializer_for__BestFit__(void)

{
  ::FName::FName(&BestFit,L"BestFit");
  return;
}

// `dynamic_initializer_for_'CVarDelayCancellationResponse'' @ 14144e3a0

void __cdecl
SpectatorBeaconConsoleVariables::_dynamic_initializer_for__CVarDelayCancellationResponse__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDelayCancellationResponse,L"spectatorbeacon.DelayCancellationResponse",local_res8,
             L"Delay time between received cancel response and notification\nTime in secs",0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayCancellationResponse__);
  return;
}

// `dynamic_initializer_for_'CVarDelayFullResponse'' @ 14144e3f0

void __cdecl
SpectatorBeaconConsoleVariables::_dynamic_initializer_for__CVarDelayFullResponse__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDelayFullResponse,L"spectatorbeacon.DelayFullResponse",local_res8,
             L"Delay time between received full response and notification\nTime in secs",0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayFullResponse__);
  return;
}

// `dynamic_initializer_for_'CVarDelayReservationResponse'' @ 14144e440

void __cdecl
SpectatorBeaconConsoleVariables::_dynamic_initializer_for__CVarDelayReservationResponse__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDelayReservationResponse,L"spectatorbeacon.DelayReservationResponse",local_res8,
             L"Delay time between received response and notification\nTime in secs",0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayReservationResponse__);
  return;
}

// `dynamic_initializer_for_'CVarDelayUpdateResponse'' @ 14144e490

void __cdecl
SpectatorBeaconConsoleVariables::_dynamic_initializer_for__CVarDelayUpdateResponse__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDelayUpdateResponse,L"spectatorbeacon.DelayUpdateResponse",local_res8,
             L"Delay time between received update response and notification\nTime in secs",0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayUpdateResponse__);
  return;
}

// `dynamic_initializer_for_'CVarRemapReservationUpdateToExistingReservation'' @ 14144e4e0

void __cdecl
BeaconConsoleVariables::_dynamic_initializer_for__CVarRemapReservationUpdateToExistingReservation__
          (void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRemapReservationUpdateToExistingReservation,
             L"beacon.RemapReservationUpdateToExistingReservation",local_res8,
             L"Whether to remap the leader of a reservation update request to the leader of the reservation they appear in.\nEnabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRemapReservationUpdateToExistingReservation__);
  return;
}

// `dynamic_initializer_for_'ChatText'' @ 14144e530

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&ChatText,L"OnlinePresence",L"Chat",L"Chat");
  atexit(_dynamic_atexit_destructor_for__ChatText__);
  return;
}

// `dynamic_initializer_for_'DoNotDisturbText'' @ 14144e570

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DoNotDisturbText,L"OnlinePresence",L"DoNotDisturb",L"Do Not Disturb");
  atexit(_dynamic_atexit_destructor_for__DoNotDisturbText__);
  return;
}

// `dynamic_initializer_for_'FIdenitiyInterfacetFunctionalLoginLogoutTestAutomationTestInstance'' @ 14144e5b0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FIdenitiyInterfacetFunctionalLoginLogoutTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIdenitiyInterfacetFunctionalLoginLogoutTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FIdenitiyInterfacetFunctionalLoginLogoutTestAutomationTestInstance,&local_18,true);
  FIdenitiyInterfacetFunctionalLoginLogoutTestAutomationTestInstance._0_8_ =
       &___7FIdenitiyInterfacetFunctionalLoginLogoutTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FIdenitiyInterfacetFunctionalLoginLogoutTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FTestIdentityInterfaceLogoutWhileNotLoggedInAutomationTestInstance'' @ 14144e610

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FTestIdentityInterfaceLogoutWhileNotLoggedInAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTestIdentityInterfaceLogoutWhileNotLoggedIn");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FTestIdentityInterfaceLogoutWhileNotLoggedInAutomationTestInstance,&local_18,true);
  FTestIdentityInterfaceLogoutWhileNotLoggedInAutomationTestInstance._0_8_ =
       &___7FTestIdentityInterfaceLogoutWhileNotLoggedIn__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FTestIdentityInterfaceLogoutWhileNotLoggedInAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'LogPartyBeacon'' @ 14144e670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPartyBeacon__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogPartyBeacon,L"LogPartyBeacon",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPartyBeacon__);
  return;
}

// `dynamic_initializer_for_'LogSpectatorBeacon'' @ 14144e6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSpectatorBeacon__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSpectatorBeacon,L"LogSpectatorBeacon",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSpectatorBeacon__);
  return;
}

// `dynamic_initializer_for_'Manual'' @ 14144e6f0

void __cdecl ETeamAssignmentMethod::_dynamic_initializer_for__Manual__(void)

{
  ::FName::FName(&Manual,L"Manual");
  return;
}

// `dynamic_initializer_for_'NAME_ASpectatorBeaconClient_ClientCancelReservationResponse'' @ 14144e710

void __cdecl
_dynamic_initializer_for__NAME_ASpectatorBeaconClient_ClientCancelReservationResponse__(void)

{
  FName::FName(&NAME_ASpectatorBeaconClient_ClientCancelReservationResponse,
               L"ClientCancelReservationResponse");
  return;
}

// `dynamic_initializer_for_'NAME_ASpectatorBeaconClient_ClientReservationResponse'' @ 14144e730

void __cdecl _dynamic_initializer_for__NAME_ASpectatorBeaconClient_ClientReservationResponse__(void)

{
  FName::FName(&NAME_ASpectatorBeaconClient_ClientReservationResponse,L"ClientReservationResponse");
  return;
}

// `dynamic_initializer_for_'NAME_ASpectatorBeaconClient_ClientSendReservationFull'' @ 14144e750

void __cdecl _dynamic_initializer_for__NAME_ASpectatorBeaconClient_ClientSendReservationFull__(void)

{
  FName::FName(&NAME_ASpectatorBeaconClient_ClientSendReservationFull,L"ClientSendReservationFull");
  return;
}

// `dynamic_initializer_for_'NAME_ASpectatorBeaconClient_ClientSendReservationUpdates'' @ 14144e770

void __cdecl
_dynamic_initializer_for__NAME_ASpectatorBeaconClient_ClientSendReservationUpdates__(void)

{
  FName::FName(&NAME_ASpectatorBeaconClient_ClientSendReservationUpdates,
               L"ClientSendReservationUpdates");
  return;
}

// `dynamic_initializer_for_'NAME_ASpectatorBeaconClient_ServerCancelReservationRequest'' @ 14144e790

void __cdecl
_dynamic_initializer_for__NAME_ASpectatorBeaconClient_ServerCancelReservationRequest__(void)

{
  FName::FName(&NAME_ASpectatorBeaconClient_ServerCancelReservationRequest,
               L"ServerCancelReservationRequest");
  return;
}

// `dynamic_initializer_for_'NAME_ASpectatorBeaconClient_ServerReservationRequest'' @ 14144e7b0

void __cdecl _dynamic_initializer_for__NAME_ASpectatorBeaconClient_ServerReservationRequest__(void)

{
  FName::FName(&NAME_ASpectatorBeaconClient_ServerReservationRequest,L"ServerReservationRequest");
  return;
}

// `dynamic_initializer_for_'NAME_ATestBeaconClient_ClientPing'' @ 14144e7d0

void __cdecl _dynamic_initializer_for__NAME_ATestBeaconClient_ClientPing__(void)

{
  FName::FName(&NAME_ATestBeaconClient_ClientPing,L"ClientPing");
  return;
}

// `dynamic_initializer_for_'NAME_ATestBeaconClient_ServerPong'' @ 14144e7f0

void __cdecl _dynamic_initializer_for__NAME_ATestBeaconClient_ServerPong__(void)

{
  FName::FName(&NAME_ATestBeaconClient_ServerPong,L"ServerPong");
  return;
}

// `dynamic_initializer_for_'NAME_Unset'' @ 14144e810

void __cdecl _dynamic_initializer_for__NAME_Unset__(void)

{
  FName::FName(&NAME_Unset,L"UNSET");
  return;
}

// `dynamic_initializer_for_'OSSUtilsTestLog'' @ 14144e830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__OSSUtilsTestLog__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&OSSUtilsTestLog,L"OSSUtilsTestLog",All,All);
  atexit(_dynamic_atexit_destructor_for__OSSUtilsTestLog__);
  return;
}

// `dynamic_initializer_for_'OfflineText'' @ 14144e870

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__OfflineText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&OfflineText,L"OnlinePresence",L"Offline",L"Offline");
  atexit(_dynamic_atexit_destructor_for__OfflineText__);
  return;
}

// `dynamic_initializer_for_'OnlineText'' @ 14144e8b0

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__OnlineText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&OnlineText,L"OnlinePresence",L"Online",L"Online");
  atexit(_dynamic_atexit_destructor_for__OnlineText__);
  return;
}

// `dynamic_initializer_for_'Random'' @ 14144e8f0

void __cdecl ETeamAssignmentMethod::_dynamic_initializer_for__Random__(void)

{
  ::FName::FName(&Random,L"Random");
  return;
}

// `dynamic_initializer_for_'Smallest'' @ 14144e910

void __cdecl ETeamAssignmentMethod::_dynamic_initializer_for__Smallest__(void)

{
  ::FName::FName(&Smallest,L"Smallest");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h__Script_OnlineSubsystemUtils_3018698166'' @ 14144e930

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h__Script_OnlineSubsystemUtils_3018698166__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_QuitMatchCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h__Script_OnlineSubsystemUtils_837717834'' @ 14144e970

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h__Script_OnlineSubsystemUtils_837717834__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h__Script_OnlineSubsystemUtils_402811905'' @ 14144e9b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h__Script_OnlineSubsystemUtils_402811905__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h__Script_OnlineSubsystemUtils_3242433331'' @ 14144e9f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h__Script_OnlineSubsystemUtils_3242433331__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h__Script_OnlineSubsystemUtils_465248641'' @ 14144ea30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h__Script_OnlineSubsystemUtils_465248641__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestClient_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h__Script_OnlineSubsystemUtils_4239703490'' @ 14144ea70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h__Script_OnlineSubsystemUtils_4239703490__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHostObject_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h__Script_OnlineSubsystemUtils_1650693676'' @ 14144eab0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h__Script_OnlineSubsystemUtils_1650693676__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestHost_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetConnection_h__Script_OnlineSubsystemUtils_1836769984'' @ 14144eaf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetConnection_h__Script_OnlineSubsystemUtils_1836769984__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetConnection_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h__Script_OnlineSubsystemUtils_3812972471'' @ 14144eb30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h__Script_OnlineSubsystemUtils_3812972471__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_Tests_OnlineBeaconUnitTestNetDriver_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h__Script_OnlineSubsystemUtils_1680622751'' @ 14144eb70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h__Script_OnlineSubsystemUtils_1680622751__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconHost_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h__Script_OnlineSubsystemUtils_3713249388'' @ 14144ebb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h__Script_OnlineSubsystemUtils_3713249388__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h__Script_OnlineSubsystemUtils_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h__Script_OnlineSubsystemUtils_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h__Script_OnlineSubsystemUtils_2161400736'' @ 14144ec00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h__Script_OnlineSubsystemUtils_2161400736__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h__Script_OnlineSubsystemUtils_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h__Script_OnlineSubsystemUtils_373114148'' @ 14144ec50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h__Script_OnlineSubsystemUtils_373114148__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconHost_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h__Script_OnlineSubsystemUtils_2473865045'' @ 14144ec90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h__Script_OnlineSubsystemUtils_2473865045__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h__Script_OnlineSubsystemUtils_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h__Script_OnlineSubsystemUtils_Statics
             ::EnumInfo,1);
  return;
}

// Z_Construct_UClass_ASpectatorBeaconClient @ 14eca74a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ASpectatorBeaconClient(void)

{
  if (Z_Registration_Info_UClass_ASpectatorBeaconClient.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ASpectatorBeaconClient.OuterSingleton,
               &Z_Construct_UClass_ASpectatorBeaconClient_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ASpectatorBeaconClient.OuterSingleton;
}

// Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType @ 14eca74e0

UEnum * __cdecl Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType(void)

{
  if (Z_Registration_Info_UEnum_ESpectatorClientRequestType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESpectatorClientRequestType.InnerSingleton,
               &Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ESpectatorClientRequestType.InnerSingleton;
}

// Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult @ 14eca7520

UEnum * __cdecl Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult(void)

{
  if (Z_Registration_Info_UEnum_ESpectatorReservationResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESpectatorReservationResult.InnerSingleton,
               &Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ESpectatorReservationResult.InnerSingleton;
}

// Z_Construct_UScriptStruct_FSpectatorReservation @ 14eca7560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpectatorReservation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpectatorReservation.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpectatorReservation.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpectatorReservation_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpectatorReservation.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FSpectatorReservation.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ESpectatorClientRequestType_StaticEnum @ 14eca75e0

UEnum * __cdecl ESpectatorClientRequestType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpectatorClientRequestType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_ESpectatorClientRequestType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType,
                       (UObject *)pUVar1,L"ESpectatorClientRequestType");
  }
  return Z_Registration_Info_UEnum_ESpectatorClientRequestType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14eca7990

void * __thiscall
FIdenitiyInterfacetFunctionalLoginLogoutTest::_scalar_deleting_destructor_
          (FIdenitiyInterfacetFunctionalLoginLogoutTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse @ 14eca79d0

UFunction * __cdecl
Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14eca7da0

void * __thiscall
FTestIdentityInterfaceLogoutWhileNotLoggedIn::_scalar_deleting_destructor_
          (FTestIdentityInterfaceLogoutWhileNotLoggedIn *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse @ 14eca7de0

UFunction * __cdecl Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull @ 14eca7ea0

UFunction * __cdecl Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates @ 14eca7ee0

UFunction * __cdecl Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest @ 14eca7f20

UFunction * __cdecl
Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest @ 14eca7f60

UFunction * __cdecl Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPendingReservationSent_SetBit @ 14eca7fa0

void __cdecl
Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x439) = 1;
  return;
}

// NewProp_bCancelReservation_SetBit @ 14eca7fb0

void __cdecl
Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x43a) = 1;
  return;
}

// Z_Construct_UClass_UPartyBeaconState_NoRegister @ 14eca8140

UClass * __cdecl Z_Construct_UClass_UPartyBeaconState_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPartyBeaconState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"PartyBeaconState",
               &Z_Registration_Info_UClass_UPartyBeaconState.InnerSingleton,
               UPartyBeaconState::StaticRegisterNativesUPartyBeaconState,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPartyBeaconState>,
               InternalVTableHelperCtorCaller<UPartyBeaconState>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPartyBeaconState.InnerSingleton;
}

// Z_Construct_UClass_UQuitMatchCallbackProxy_NoRegister @ 14eca8230

UClass * __cdecl Z_Construct_UClass_UQuitMatchCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UQuitMatchCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"QuitMatchCallbackProxy",
               &Z_Registration_Info_UClass_UQuitMatchCallbackProxy.InnerSingleton,
               UQuitMatchCallbackProxy::StaticRegisterNativesUQuitMatchCallbackProxy,0x88,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UQuitMatchCallbackProxy>
               ,InternalVTableHelperCtorCaller<UQuitMatchCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UQuitMatchCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_UPartyBeaconState @ 14eca83b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPartyBeaconState(void)

{
  if (Z_Registration_Info_UClass_UPartyBeaconState.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPartyBeaconState.OuterSingleton,
               &Z_Construct_UClass_UPartyBeaconState_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPartyBeaconState.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping @ 14eca83f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPartyBeaconCrossplayPlatformMapping.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPartyBeaconCrossplayPlatformMapping.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FPartyBeaconCrossplayPlatformMapping.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPartyBeaconCrossplayPlatformMapping.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPartyReservation @ 14eca8470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPartyReservation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPartyReservation.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPartyReservation.InnerSingleton,
               &Z_Construct_UScriptStruct_FPartyReservation_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPartyReservation.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPartyReservation.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EPartyReservationResult_StaticEnum @ 14eca84f0

UEnum * __cdecl EPartyReservationResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPartyReservationResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EPartyReservationResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult,
                       (UObject *)pUVar1,L"EPartyReservationResult");
  }
  return Z_Registration_Info_UEnum_EPartyReservationResult.OuterSingleton;
}

// NewStructOps @ 14eca8530

void * __cdecl Z_Construct_UScriptStruct_FPartyReservation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPartyReservation,&UE::CoreUObject::Private::Construct<FPartyReservation>,&UE::CoreUObject::Private::ConstructForTests<FPartyReservation>,&UE::CoreUObject::Private::Destruct<FPartyReservation>,&UE::CoreUObject::Private::Copy<FPartyReservation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ASpectatorBeaconHost @ 14eca85b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ASpectatorBeaconHost(void)

{
  if (Z_Registration_Info_UClass_ASpectatorBeaconHost.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ASpectatorBeaconHost.OuterSingleton,
               &Z_Construct_UClass_ASpectatorBeaconHost_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ASpectatorBeaconHost.OuterSingleton;
}

// NewProp_bLogoutOnSessionTimeout_SetBit @ 14eca86a0

void __cdecl
Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x380) = 1;
  return;
}

// NewProp_bIsValidationStrRequired_SetBit @ 14eca86b0

void __cdecl
Z_Construct_UClass_ASpectatorBeaconHost_Statics::NewProp_bIsValidationStrRequired_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x381) = 1;
  return;
}

// NewStructOps @ 14eca86c0

void * __cdecl
Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPartyBeaconCrossplayPlatformMapping,&UE::CoreUObject::Private::Construct<FPartyBeaconCrossplayPlatformMapping>,&UE::CoreUObject::Private::ConstructForTests<FPartyBeaconCrossplayPlatformMapping>,&UE::CoreUObject::Private::Destruct<FPartyBeaconCrossplayPlatformMapping>,&UE::CoreUObject::Private::Copy<FPartyBeaconCrossplayPlatformMapping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRestrictCrossConsole_SetBit @ 14eca8700

void __cdecl
Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bEnableRemovalRequests_SetBit @ 14eca8710

void __cdecl
Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bRespectCompetitiveIntegrity_SetBit @ 14eca8720

void __cdecl
Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRespectCompetitiveIntegrity_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x79) = 1;
  return;
}

// Z_Construct_UClass_USpectatorBeaconState @ 14eca8730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USpectatorBeaconState(void)

{
  if (Z_Registration_Info_UClass_USpectatorBeaconState.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USpectatorBeaconState.OuterSingleton,
               &Z_Construct_UClass_USpectatorBeaconState_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USpectatorBeaconState.OuterSingleton;
}

// ESpectatorReservationResult_StaticEnum @ 14eca8770

UEnum * __cdecl ESpectatorReservationResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpectatorReservationResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_ESpectatorReservationResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult,
                       (UObject *)pUVar1,L"ESpectatorReservationResult");
  }
  return Z_Registration_Info_UEnum_ESpectatorReservationResult.OuterSingleton;
}

// NewStructOps @ 14eca87b0

void * __cdecl Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpectatorReservation,&UE::CoreUObject::Private::Construct<FSpectatorReservation>,&UE::CoreUObject::Private::ConstructForTests<FSpectatorReservation>,&UE::CoreUObject::Private::Destruct<FSpectatorReservation>,&UE::CoreUObject::Private::Copy<FSpectatorReservation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UQuitMatchCallbackProxy @ 14eca87f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UQuitMatchCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UQuitMatchCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UQuitMatchCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UQuitMatchCallbackProxy.OuterSingleton;
}

// NewProp_bRestrictCrossConsole_SetBit @ 14eca8830

void __cdecl
Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch @ 14eca8840

UFunction * __cdecl Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ATestBeaconClient @ 14eca8940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ATestBeaconClient(void)

{
  if (Z_Registration_Info_UClass_ATestBeaconClient.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ATestBeaconClient.OuterSingleton,
               &Z_Construct_UClass_ATestBeaconClient_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ATestBeaconClient.OuterSingleton;
}

// Z_Construct_UFunction_ATestBeaconClient_ClientPing @ 14eca8980

UFunction * __cdecl Z_Construct_UFunction_ATestBeaconClient_ClientPing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ATestBeaconClient_ServerPong @ 14eca89c0

UFunction * __cdecl Z_Construct_UFunction_ATestBeaconClient_ServerPong(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister @ 14eca8ac0

UClass * __cdecl Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShowLoginUICallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"ShowLoginUICallbackProxy",
               &Z_Registration_Info_UClass_UShowLoginUICallbackProxy.InnerSingleton,
               UShowLoginUICallbackProxy::StaticRegisterNativesUShowLoginUICallbackProxy,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UShowLoginUICallbackProxy>,
               InternalVTableHelperCtorCaller<UShowLoginUICallbackProxy>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShowLoginUICallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver @ 14eca8c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver(void)

{
  if (Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.OuterSingleton,
               &Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.OuterSingleton;
}

// Z_Construct_UClass_ATestBeaconHost @ 14eca8d40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ATestBeaconHost(void)

{
  if (Z_Registration_Info_UClass_ATestBeaconHost.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ATestBeaconHost.OuterSingleton,
               &Z_Construct_UClass_ATestBeaconHost_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ATestBeaconHost.OuterSingleton;
}

// Z_Construct_UClass_AOnlineBeaconUnitTestHost @ 14eca8fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconUnitTestHost(void)

{
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.OuterSingleton,
               &Z_Construct_UClass_AOnlineBeaconUnitTestHost_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.OuterSingleton;
}

// Z_Construct_UClass_UShowLoginUICallbackProxy @ 14eca9000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UShowLoginUICallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UShowLoginUICallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UShowLoginUICallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UShowLoginUICallbackProxy.OuterSingleton;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature @ 14eca9040

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI @ 14eca9140

UFunction * __cdecl Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AOnlineBeaconUnitTestHostObject @ 14eca9180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconUnitTestHostObject(void)

{
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.OuterSingleton,
               &Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.OuterSingleton;
}

// Z_Construct_UClass_APartyBeaconHost @ 14eca91c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APartyBeaconHost(void)

{
  if (Z_Registration_Info_UClass_APartyBeaconHost.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APartyBeaconHost.OuterSingleton,
               &Z_Construct_UClass_APartyBeaconHost_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APartyBeaconHost.OuterSingleton;
}

// NewProp_bLogoutOnSessionTimeout_SetBit @ 14eca9200

void __cdecl
Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bLogoutOnSessionTimeout_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x380) = 1;
  return;
}

// NewProp_bIsValidationStrRequired_SetBit @ 14eca9210

void __cdecl
Z_Construct_UClass_APartyBeaconHost_Statics::NewProp_bIsValidationStrRequired_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x381) = 1;
  return;
}

// Z_Construct_UClass_AOnlineBeaconUnitTestClient @ 14eca9220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconUnitTestClient(void)

{
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.OuterSingleton,
               &Z_Construct_UClass_AOnlineBeaconUnitTestClient_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.OuterSingleton;
}

// Z_Construct_UClass_USpectatorBeaconState_NoRegister @ 14eca9260

UClass * __cdecl Z_Construct_UClass_USpectatorBeaconState_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpectatorBeaconState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconState",
               &Z_Registration_Info_UClass_USpectatorBeaconState.InnerSingleton,
               USpectatorBeaconState::StaticRegisterNativesUSpectatorBeaconState,0x60,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USpectatorBeaconState>,
               InternalVTableHelperCtorCaller<USpectatorBeaconState>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpectatorBeaconState.InnerSingleton;
}

// Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection @ 14eca9740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection(void)

{
  if (Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.OuterSingleton,
               &Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.OuterSingleton;
}

// DestructItems<FCloudFileHeader,int> @ 14eca9b90

void __cdecl DestructItems<FCloudFileHeader,int>(FCloudFileHeader *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->ExternalStorageIds).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0xb] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xb]);
      }
      if ((void *)puVar1[-0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xe]);
      }
      if ((void *)puVar1[-0x10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x10]);
      }
      if ((void *)puVar1[-0x13] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x13]);
      }
      puVar1 = puVar1 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPartyBeaconCrossplayPlatformMapping,int> @ 14eca9c30

void __cdecl
DestructItems<FPartyBeaconCrossplayPlatformMapping,int>
          (FPartyBeaconCrossplayPlatformMapping *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PlatformType).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->PlatformName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPartyReservation,int> @ 14eca9c80

void __cdecl DestructItems<FPartyReservation,int>(FPartyReservation *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RemovedPartyMembers;
    do {
      DestructItems<FPlayerReservation,int>
                ((FPlayerReservation *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FPlayerReservation,int>
                ((FPlayerReservation *)pTVar2[-1].AllocatorInstance.Data,pTVar2[-1].ArrayNum);
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)(pTVar2 + -4));
      pTVar2 = (TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSpectatorReservation,int> @ 14eca9cf0

void __cdecl DestructItems<FSpectatorReservation,int>(FSpectatorReservation *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->Spectator).ValidationStr;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)(pFVar2 + -3));
      FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)(pFVar2 + -6));
      pFVar2 = (FString *)((longlong)(pFVar2 + 8) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int> @ 14eca9d50

void __cdecl
DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
          (TSharedPtr<FUniqueNetId_const_,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FOnlineRecentPlayer,1>,int> @ 14eca9d90

void __cdecl
DestructItems<TSharedRef<FOnlineRecentPlayer,1>,int>
          (TSharedRef<FOnlineRecentPlayer,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<FPartyReservation_*,int,FIdentityFunctor,TDereferenceWrapper<FPartyReservation_*,`UPartyBeaconState::BestFitTeamAssignmentJiggle'::__l5::<lambda_1>_>_> @ 14ecaa080

void __cdecl
AlgoImpl::
HeapSortInternal<FPartyReservation_*,int,FIdentityFunctor,TDereferenceWrapper<FPartyReservation_*,_UPartyBeaconState::BestFitTeamAssignmentJiggle_::__l5::<lambda_1>_>_>
          (FPartyReservation **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPartyReservation_*,_protected:_virtual_void___cdecl_UPartyBeaconState::BestFitTeamAssignmentJiggle(void)_::_5_::<lambda_1>_>
          param_4)

{
  FPartyReservation *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar6 = iVar4;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar5) {
LAB_14ecaa170:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            iVar9 = 0;
            if (1 < iVar5) {
              do {
                iVar4 = iVar9 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if ((param_1[iVar6]->PartyMembers).ArrayNum <
                      (param_1[(longlong)iVar4 + 2]->PartyMembers).ArrayNum) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1[iVar9];
                if ((pFVar1->PartyMembers).ArrayNum <= (param_1[iVar6]->PartyMembers).ArrayNum)
                break;
                param_1[iVar9] = param_1[iVar6];
                param_1[iVar6] = pFVar1;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar9 + -2;
      iVar6 = iVar4;
      iVar9 = iVar5;
    }
    iVar5 = iVar4 * 2;
    iVar8 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if ((param_1[iVar8]->PartyMembers).ArrayNum <
          (param_1[(longlong)iVar5 + 2]->PartyMembers).ArrayNum) {
        iVar8 = iVar5;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1[iVar4];
    if ((pFVar1->PartyMembers).ArrayNum <= (param_1[iVar8]->PartyMembers).ArrayNum)
    goto LAB_14ecaa170;
    param_1[iVar4] = param_1[iVar8];
    iVar5 = iVar8 * 2 + 1;
    param_1[iVar8] = pFVar1;
    iVar4 = iVar8;
  } while( true );
}

// HeapSortInternal<FTeamBalanceInfo,int,FIdentityFunctor,TDereferenceWrapper<FTeamBalanceInfo,FSortTeamSizeSmallestToLargest>_> @ 14ecaa240

void __cdecl
AlgoImpl::
HeapSortInternal<FTeamBalanceInfo,int,FIdentityFunctor,TDereferenceWrapper<FTeamBalanceInfo,FSortTeamSizeSmallestToLargest>_>
          (FTeamBalanceInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTeamBalanceInfo,FSortTeamSizeSmallestToLargest> param_4)

{
  FTeamBalanceInfo FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar6 = iVar4 * 2 + 1;
  iVar9 = iVar6;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar6) {
LAB_14ecaa35b:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            FVar1 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar1;
            iVar9 = 0;
            if (1 < iVar6) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar6) {
                  if (param_1[(longlong)iVar7 + 2].TeamSize == param_1[(longlong)iVar7 + 1].TeamSize
                     ) {
                    uVar5 = rand();
                    uVar5 = uVar5 & 1;
                  }
                  else {
                    uVar5 = (uint)(param_1[(longlong)iVar7 + 2].TeamSize <
                                  param_1[(longlong)iVar7 + 1].TeamSize);
                  }
                  if (uVar5 != 0) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (param_1[iVar9].TeamSize == param_1[iVar4].TeamSize) {
                  iVar7 = rand();
                  bVar3 = (bool)((byte)iVar7 & 1);
                }
                else {
                  bVar3 = param_1[iVar9].TeamSize < param_1[iVar4].TeamSize;
                }
                if (bVar3 == false) break;
                FVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = FVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar6 = iVar9 + -2;
      iVar9 = iVar6;
      iVar7 = iVar4;
    }
    iVar6 = iVar4 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2].TeamSize == param_1[(longlong)iVar6 + 1].TeamSize) {
        uVar5 = rand();
        uVar5 = uVar5 & 1;
      }
      else {
        uVar5 = (uint)(param_1[(longlong)iVar6 + 2].TeamSize < param_1[(longlong)iVar6 + 1].TeamSize
                      );
      }
      if (uVar5 != 0) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    if (param_1[iVar4].TeamSize == param_1[iVar8].TeamSize) {
      iVar6 = rand();
      bVar3 = (bool)((byte)iVar6 & 1);
    }
    else {
      bVar3 = param_1[iVar4].TeamSize < param_1[iVar8].TeamSize;
    }
    if (bVar3 == false) goto LAB_14ecaa35b;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = FVar1;
    iVar4 = iVar8;
  } while( true );
}

// InternalConstructor<AOnlineBeaconUnitTestClient> @ 14ecaa4f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AOnlineBeaconUnitTestClient>(FObjectInitializer *param_1)

{
  AOnlineBeaconClient *this;
  
  this = (AOnlineBeaconClient *)param_1->Obj;
  if (this != (AOnlineBeaconClient *)0x0) {
    AOnlineBeaconClient::AOnlineBeaconClient(this,param_1);
    this->_padding_ = (longlong)&AOnlineBeaconUnitTestClient::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AOnlineBeaconUnitTestClient::_vftable__for__FNetworkNotify__;
  }
  return;
}

// InternalConstructor<AOnlineBeaconUnitTestHost> @ 14ecaa530

void __cdecl InternalConstructor<AOnlineBeaconUnitTestHost>(FObjectInitializer *param_1)

{
  AOnlineBeaconHost *this;
  
  this = (AOnlineBeaconHost *)param_1->Obj;
  if (this != (AOnlineBeaconHost *)0x0) {
    AOnlineBeaconHost::AOnlineBeaconHost(this,param_1);
    this->_padding_ = (longlong)&AOnlineBeaconUnitTestHost::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AOnlineBeaconUnitTestHost::_vftable__for__FNetworkNotify__;
  }
  return;
}

// InternalConstructor<AOnlineBeaconUnitTestHostObject> @ 14ecaa570

void __cdecl InternalConstructor<AOnlineBeaconUnitTestHostObject>(FObjectInitializer *param_1)

{
  int iVar1;
  AOnlineBeaconHostObject *this;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FString *pFVar7;
  FName local_res8;
  FString local_18;
  
  this = (AOnlineBeaconHostObject *)param_1->Obj;
  if (this == (AOnlineBeaconHostObject *)0x0) {
    return;
  }
  AOnlineBeaconHostObject::AOnlineBeaconHostObject(this,param_1);
  this->_padding_ = (longlong)&___7AOnlineBeaconUnitTestHostObject__6B_;
  pUVar4 = AOnlineBeaconUnitTestClient::StaticClass();
  pUVar6 = (UClass *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UClass *)0x0)) {
    (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UClass *)0x0) goto LAB_14ecaa60f;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr = pUVar4;
  }
  pUVar5 = Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr;
    }
  }
LAB_14ecaa60f:
  local_res8 = (FName)pUVar6->_padding_;
  FName::ToString(&local_res8,&local_18);
  pFVar7 = &this->BeaconTypeName;
  if (pFVar7 != &local_18) {
    pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar7->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->BeaconTypeName).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->BeaconTypeName).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// InternalConstructor<APartyBeaconHost> @ 14ecaa690

void __cdecl InternalConstructor<APartyBeaconHost>(FObjectInitializer *param_1)

{
  if ((APartyBeaconHost *)param_1->Obj != (APartyBeaconHost *)0x0) {
    APartyBeaconHost::APartyBeaconHost((APartyBeaconHost *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ASpectatorBeaconClient> @ 14ecaa6b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ASpectatorBeaconClient>(FObjectInitializer *param_1)

{
  AOnlineBeaconClient *this;
  
  this = (AOnlineBeaconClient *)param_1->Obj;
  if (this != (AOnlineBeaconClient *)0x0) {
    AOnlineBeaconClient::AOnlineBeaconClient(this,param_1);
    this->_padding_ = (longlong)&ASpectatorBeaconClient::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ASpectatorBeaconClient::_vftable__for__FNetworkNotify__;
    this[1]._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    this[1]._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<ASpectatorBeaconHost> @ 14ecaa7f0

void __cdecl InternalConstructor<ASpectatorBeaconHost>(FObjectInitializer *param_1)

{
  if ((ASpectatorBeaconHost *)param_1->Obj != (ASpectatorBeaconHost *)0x0) {
    ASpectatorBeaconHost::ASpectatorBeaconHost((ASpectatorBeaconHost *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ATestBeaconClient> @ 14ecaa810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ATestBeaconClient>(FObjectInitializer *param_1)

{
  AOnlineBeaconClient *this;
  
  this = (AOnlineBeaconClient *)param_1->Obj;
  if (this != (AOnlineBeaconClient *)0x0) {
    AOnlineBeaconClient::AOnlineBeaconClient(this,param_1);
    this->_padding_ = (longlong)&ATestBeaconClient::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ATestBeaconClient::_vftable__for__FNetworkNotify__;
  }
  return;
}

// InternalConstructor<ATestBeaconHost> @ 14ecaa850

void __cdecl InternalConstructor<ATestBeaconHost>(FObjectInitializer *param_1)

{
  int iVar1;
  AOnlineBeaconHostObject *this;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FString *pFVar7;
  FName local_res8;
  FString local_18;
  
  this = (AOnlineBeaconHostObject *)param_1->Obj;
  if (this == (AOnlineBeaconHostObject *)0x0) {
    return;
  }
  AOnlineBeaconHostObject::AOnlineBeaconHostObject(this,param_1);
  this->_padding_ = (longlong)&___7ATestBeaconHost__6B_;
  pUVar4 = ATestBeaconClient::StaticClass();
  pUVar6 = (UClass *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UClass *)0x0)) {
    (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UClass *)0x0) goto LAB_14ecaa8ef;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr = pUVar4;
  }
  pUVar5 = Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr;
    }
  }
LAB_14ecaa8ef:
  local_res8 = (FName)pUVar6->_padding_;
  FName::ToString(&local_res8,&local_18);
  pFVar7 = &this->BeaconTypeName;
  if (pFVar7 != &local_18) {
    pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar7->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->BeaconTypeName).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->BeaconTypeName).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// InternalConstructor<UOnlineBeaconUnitTestNetConnection> @ 14ecaa970

void __cdecl InternalConstructor<UOnlineBeaconUnitTestNetConnection>(FObjectInitializer *param_1)

{
  UIpConnection *this;
  
  this = (UIpConnection *)param_1->Obj;
  if (this != (UIpConnection *)0x0) {
    UIpConnection::UIpConnection(this,param_1);
    this->_padding_ = (longlong)&UOnlineBeaconUnitTestNetConnection::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UOnlineBeaconUnitTestNetConnection::_vftable__for__FExec__;
  }
  return;
}

// InternalConstructor<UOnlineBeaconUnitTestNetDriver> @ 14ecaa9b0

void __cdecl InternalConstructor<UOnlineBeaconUnitTestNetDriver>(FObjectInitializer *param_1)

{
  UIpNetDriver *this;
  
  this = (UIpNetDriver *)param_1->Obj;
  if (this != (UIpNetDriver *)0x0) {
    UIpNetDriver::UIpNetDriver(this,param_1);
    this->_padding_ = (longlong)&UOnlineBeaconUnitTestNetDriver::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UOnlineBeaconUnitTestNetDriver::_vftable__for__FExec__;
  }
  return;
}

// InternalConstructor<UPartyBeaconState> @ 14ecaa9f0

void __cdecl InternalConstructor<UPartyBeaconState>(FObjectInitializer *param_1)

{
  UObject *this;
  uint uVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPartyBeaconState__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    uVar1 = ETeamAssignmentMethod::Smallest.Number;
    *(uint *)&this[1].field_0x18 = ETeamAssignmentMethod::Smallest.ComparisonIndex.Value;
    *(uint *)&this[1].field_0x1c = uVar1;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined1 *)(this + 2) = 0;
    this[3].field_0x1 = 1;
  }
  return;
}

// InternalConstructor<UQuitMatchCallbackProxy> @ 14ecaaa70

void __cdecl InternalConstructor<UQuitMatchCallbackProxy>(FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase *this;
  
  this = (UOnlineBlueprintCallProxyBase *)param_1->Obj;
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UQuitMatchCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UShowLoginUICallbackProxy> @ 14ecaaad0

void __cdecl InternalConstructor<UShowLoginUICallbackProxy>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7UShowLoginUICallbackProxy__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USpectatorBeaconState> @ 14ecaab30

void __cdecl InternalConstructor<USpectatorBeaconState>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7USpectatorBeaconState__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestClient> @ 14ecaab80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestClient>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AOnlineBeaconClient *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AOnlineBeaconUnitTestClient::GetPrivateStaticClass();
  this = (AOnlineBeaconClient *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AOnlineBeaconClient *)0x0) {
    AOnlineBeaconClient::AOnlineBeaconClient(this,param_1);
    this->_padding_ = (longlong)&AOnlineBeaconUnitTestClient::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AOnlineBeaconUnitTestClient::_vftable__for__FNetworkNotify__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestHost> @ 14ecaac40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestHost>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AOnlineBeaconHost *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AOnlineBeaconUnitTestHost::GetPrivateStaticClass();
  this = (AOnlineBeaconHost *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AOnlineBeaconHost *)0x0) {
    AOnlineBeaconHost::AOnlineBeaconHost(this,param_1);
    this->_padding_ = (longlong)&AOnlineBeaconUnitTestHost::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AOnlineBeaconUnitTestHost::_vftable__for__FNetworkNotify__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestHostObject> @ 14ecaad00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestHostObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AOnlineBeaconHostObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AOnlineBeaconUnitTestHostObject::GetPrivateStaticClass();
  this = (AOnlineBeaconHostObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AOnlineBeaconHostObject *)0x0) {
    AOnlineBeaconHostObject::AOnlineBeaconHostObject(this,param_1);
    this->_padding_ = (longlong)&___7AOnlineBeaconUnitTestHostObject__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APartyBeaconHost> @ 14ecaadb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APartyBeaconHost>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AOnlineBeaconHostObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APartyBeaconHost::GetPrivateStaticClass();
  this = (AOnlineBeaconHostObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AOnlineBeaconHostObject *)0x0) {
    AOnlineBeaconHostObject::AOnlineBeaconHostObject(this,param_1);
    this->_padding_ = (longlong)&___7APartyBeaconHost__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ASpectatorBeaconClient> @ 14ecaaee0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ASpectatorBeaconClient>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AOnlineBeaconClient *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ASpectatorBeaconClient::GetPrivateStaticClass();
  this = (AOnlineBeaconClient *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AOnlineBeaconClient *)0x0) {
    AOnlineBeaconClient::AOnlineBeaconClient(this,param_1);
    this->_padding_ = (longlong)&ASpectatorBeaconClient::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ASpectatorBeaconClient::_vftable__for__FNetworkNotify__;
    this[1]._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    this[1]._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ASpectatorBeaconHost> @ 14ecab090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ASpectatorBeaconHost>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AOnlineBeaconHostObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ASpectatorBeaconHost::GetPrivateStaticClass();
  this = (AOnlineBeaconHostObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AOnlineBeaconHostObject *)0x0) {
    AOnlineBeaconHostObject::AOnlineBeaconHostObject(this,param_1);
    this->_padding_ = (longlong)&___7ASpectatorBeaconHost__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ATestBeaconClient> @ 14ecab1c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ATestBeaconClient>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AOnlineBeaconClient *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ATestBeaconClient::GetPrivateStaticClass();
  this = (AOnlineBeaconClient *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AOnlineBeaconClient *)0x0) {
    AOnlineBeaconClient::AOnlineBeaconClient(this,param_1);
    this->_padding_ = (longlong)&ATestBeaconClient::_vftable__for__AActor__;
    this->_padding_ = (longlong)&ATestBeaconClient::_vftable__for__FNetworkNotify__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ATestBeaconHost> @ 14ecab280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ATestBeaconHost>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AOnlineBeaconHostObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ATestBeaconHost::GetPrivateStaticClass();
  this = (AOnlineBeaconHostObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AOnlineBeaconHostObject *)0x0) {
    AOnlineBeaconHostObject::AOnlineBeaconHostObject(this,param_1);
    this->_padding_ = (longlong)&___7ATestBeaconHost__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnlineBeaconUnitTestNetConnection> @ 14ecab330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOnlineBeaconUnitTestNetConnection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UIpConnection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnlineBeaconUnitTestNetConnection::GetPrivateStaticClass();
  this = (UIpConnection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UIpConnection *)0x0) {
    UIpConnection::UIpConnection(this,param_1);
    this->_padding_ = (longlong)&UOnlineBeaconUnitTestNetConnection::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UOnlineBeaconUnitTestNetConnection::_vftable__for__FExec__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnlineBeaconUnitTestNetDriver> @ 14ecab3f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOnlineBeaconUnitTestNetDriver>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UIpNetDriver *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnlineBeaconUnitTestNetDriver::GetPrivateStaticClass();
  this = (UIpNetDriver *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UIpNetDriver *)0x0) {
    UIpNetDriver::UIpNetDriver(this,param_1);
    this->_padding_ = (longlong)&UOnlineBeaconUnitTestNetDriver::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UOnlineBeaconUnitTestNetDriver::_vftable__for__FExec__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPartyBeaconState> @ 14ecab4b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPartyBeaconState>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPartyBeaconState::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPartyBeaconState__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UQuitMatchCallbackProxy> @ 14ecab590

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UQuitMatchCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UQuitMatchCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UQuitMatchCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UShowLoginUICallbackProxy> @ 14ecab660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UShowLoginUICallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UShowLoginUICallbackProxy::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7UShowLoginUICallbackProxy__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USpectatorBeaconState> @ 14ecab730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USpectatorBeaconState>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USpectatorBeaconState::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USpectatorBeaconState__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FPartyReservation_*,int,FIdentityFunctor,TDereferenceWrapper<FPartyReservation_*,`UPartyBeaconState::BestFitTeamAssignmentJiggle'::__l5::<lambda_1>_>_> @ 14ecab7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FPartyReservation_*,int,FIdentityFunctor,TDereferenceWrapper<FPartyReservation_*,_UPartyBeaconState::BestFitTeamAssignmentJiggle_::__l5::<lambda_1>_>_>
          (FPartyReservation **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPartyReservation_*,_protected:_virtual_void___cdecl_UPartyBeaconState::BestFitTeamAssignmentJiggle(void)_::_5_::<lambda_1>_>
          param_4)

{
  FPartyReservation **ppFVar1;
  FPartyReservation *pFVar2;
  int iVar3;
  FPartyReservation ***pppFVar4;
  FPartyReservation **ppFVar5;
  FPartyReservation **ppFVar6;
  FPartyReservation **ppFVar7;
  FPartyReservation **ppFVar8;
  FPartyReservation **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FPartyReservation **local_338;
  FPartyReservation **local_328;
  FPartyReservation **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar4 = &local_328;
    do {
      ppFVar9 = pppFVar4[1];
      ppFVar5 = *pppFVar4;
      ppFVar1 = pppFVar4[2];
      iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar8 = ppFVar5;
      if ((int)local_338 != 0) {
LAB_14ecab8a0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar9 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_14ecab8d0:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x00014ecab8d9;
          goto LAB_14ecab8e7;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar9) {
            ppFVar5 = ppFVar1;
            if (((*ppFVar6)->PartyMembers).ArrayNum <= ((*ppFVar1)->PartyMembers).ArrayNum) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar9;
          *ppFVar9 = pFVar2;
        }
        goto LAB_14ecab9a3;
      }
LAB_14ecab992:
      local_338 = ppFVar1;
      HeapSortInternal<FPartyReservation_*,int,FIdentityFunctor,TDereferenceWrapper<FPartyReservation_*,_UPartyBeaconState::BestFitTeamAssignmentJiggle_::__l5::<lambda_1>_>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_14ecab9a3:
      pppFVar4 = pppFVar4 + -3;
    } while (&local_328 <= pppFVar4);
  }
  return;
code_r0x00014ecab8d9:
  if (((*ppFVar8)->PartyMembers).ArrayNum <= ((*ppFVar5)->PartyMembers).ArrayNum)
  goto LAB_14ecab8d0;
LAB_14ecab8e7:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while (((*ppFVar6)->PartyMembers).ArrayNum <= ((*ppFVar8)->PartyMembers).ArrayNum);
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_14ecab8d0;
  }
  pFVar2 = *ppFVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar8 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar9 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar9) {
      *pppFVar4 = ppFVar5;
      pppFVar4[1] = ppFVar9;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_14ecab9a3;
    ppFVar9 = ppFVar7 + -2;
    ppFVar5 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar6) {
      *pppFVar4 = ppFVar8;
      pppFVar4[1] = ppFVar7 + -2;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar9 <= ppFVar5) goto LAB_14ecab9a3;
  }
  iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_338 == 0) goto LAB_14ecab992;
  goto LAB_14ecab8a0;
}

// IntroSortInternal<FTeamBalanceInfo,int,FIdentityFunctor,TDereferenceWrapper<FTeamBalanceInfo,FSortTeamSizeSmallestToLargest>_> @ 14ecaba50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FTeamBalanceInfo,int,FIdentityFunctor,TDereferenceWrapper<FTeamBalanceInfo,FSortTeamSizeSmallestToLargest>_>
          (FTeamBalanceInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTeamBalanceInfo,FSortTeamSizeSmallestToLargest> param_4)

{
  FTeamBalanceInfo FVar1;
  bool bVar2;
  int iVar3;
  FTeamBalanceInfo *pFVar4;
  FTeamBalanceInfo *pFVar5;
  int iVar6;
  FTeamBalanceInfo **ppFVar7;
  FTeamBalanceInfo *pFVar8;
  FTeamBalanceInfo *pFVar9;
  FTeamBalanceInfo *pFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FTeamBalanceInfo *local_358;
  FTeamBalanceInfo *local_348;
  FTeamBalanceInfo *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppFVar7 = &local_348;
    do {
      pFVar4 = ppFVar7[1];
      pFVar10 = *ppFVar7;
      local_358 = ppFVar7[2];
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar10 >> 3) + 1;
      pFVar9 = pFVar10;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14ecabb10:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar8 = pFVar4 + 1;
          FVar1 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar1;
          pFVar5 = pFVar9;
LAB_14ecabb40:
          pFVar10 = pFVar5 + 1;
          if (pFVar10 <= pFVar4) goto code_r0x00014ecabb49;
          goto LAB_14ecabb63;
        }
        for (; pFVar8 = pFVar9, pFVar10 = pFVar9, pFVar9 < pFVar4; pFVar4 = pFVar4 + -1) {
          while (pFVar5 = pFVar8, pFVar10 = pFVar10 + 1, pFVar10 <= pFVar4) {
            if (pFVar5->TeamSize == pFVar10->TeamSize) {
              iVar6 = rand();
              bVar2 = (bool)((byte)iVar6 & 1);
            }
            else {
              bVar2 = pFVar5->TeamSize < pFVar10->TeamSize;
            }
            pFVar8 = pFVar10;
            if (bVar2 == false) {
              pFVar8 = pFVar5;
            }
          }
          FVar1 = *pFVar5;
          *pFVar5 = *pFVar4;
          *pFVar4 = FVar1;
        }
        goto LAB_14ecabc32;
      }
LAB_14ecabc21:
      HeapSortInternal<FTeamBalanceInfo,int,FIdentityFunctor,TDereferenceWrapper<FTeamBalanceInfo,FSortTeamSizeSmallestToLargest>_>
                (pFVar10,iVar3,param_3,param_4);
LAB_14ecabc32:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_348 <= ppFVar7);
  }
  return;
code_r0x00014ecabb49:
  if (pFVar9->TeamSize == pFVar5[1].TeamSize) {
    iVar3 = rand();
    bVar2 = (bool)((byte)iVar3 & 1);
  }
  else {
    bVar2 = pFVar9->TeamSize < pFVar5[1].TeamSize;
  }
  pFVar5 = pFVar10;
  if (bVar2 == false) goto LAB_14ecabb40;
LAB_14ecabb63:
  do {
    pFVar5 = pFVar8;
    pFVar8 = pFVar5 + -1;
    if (pFVar8 <= pFVar9) break;
    if (pFVar5[-1].TeamSize == pFVar9->TeamSize) {
      iVar3 = rand();
      bVar2 = (bool)((byte)iVar3 & 1);
    }
    else {
      bVar2 = pFVar5[-1].TeamSize < pFVar9->TeamSize;
    }
  } while (bVar2 == false);
  if (pFVar10 <= pFVar8) {
    FVar1 = *pFVar10;
    *pFVar10 = *pFVar8;
    *pFVar8 = FVar1;
    pFVar5 = pFVar10;
    goto LAB_14ecabb40;
  }
  FVar1 = *pFVar9;
  iVar6 = iVar6 + -1;
  *pFVar9 = *pFVar8;
  *pFVar8 = FVar1;
  if ((longlong)((longlong)pFVar8 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar4 - (longlong)pFVar10 & 0xfffffffffffffff8U)) {
    if (pFVar10 < pFVar4) {
      *ppFVar7 = pFVar10;
      ppFVar7[1] = pFVar4;
      *(int *)(ppFVar7 + 2) = iVar6;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar8 <= pFVar9 + 1) goto LAB_14ecabc32;
    pFVar4 = pFVar5 + -2;
    pFVar10 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar8) {
      *ppFVar7 = pFVar9;
      ppFVar7[1] = pFVar5 + -2;
      *(int *)(ppFVar7 + 2) = iVar6;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar4 <= pFVar10) goto LAB_14ecabc32;
  }
  iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar10 >> 3) + 1;
  pFVar9 = pFVar10;
  if (iVar6 == 0) goto LAB_14ecabc21;
  goto LAB_14ecabb10;
}

// NewObject<UPartyBeaconState> @ 14ecabd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPartyBeaconState * __cdecl
NewObject<UPartyBeaconState>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UPartyBeaconState *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UPartyBeaconState::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UPartyBeaconState *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UQuitMatchCallbackProxy> @ 14ecabe10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UQuitMatchCallbackProxy * __cdecl NewObject<UQuitMatchCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UQuitMatchCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UQuitMatchCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UQuitMatchCallbackProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UShowLoginUICallbackProxy> @ 14ecabeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UShowLoginUICallbackProxy * __cdecl NewObject<UShowLoginUICallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UShowLoginUICallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UShowLoginUICallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UShowLoginUICallbackProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USpectatorBeaconState> @ 14ecabf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USpectatorBeaconState * __cdecl
NewObject<USpectatorBeaconState>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USpectatorBeaconState *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USpectatorBeaconState::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USpectatorBeaconState *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// RemoveAll<`APartyBeaconHost::UpdatePartyReservation'::__l56::<lambda_1>_> @ 14ecac050

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<FPartyReservation,TSizedDefaultAllocator<32>_>::
RemoveAll<_APartyBeaconHost::UpdatePartyReservation_::__l56::<lambda_1>_>
          (TArray<FPartyReservation,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FUniqueNetIdWrapper *this_00;
  int iVar9;
  FString local_50;
  
  iVar1 = this->ArrayNum;
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 0;
  pFVar2 = (this->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar2 + 0x40);
  if ((iVar4 == 0) && (4 < (byte)LogPartyBeacon._0_1_)) {
    FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)(pFVar2 + 8),&local_50);
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Removing_reserv_153078d38,
               (FLogCategoryBase *)&LogPartyBeacon);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = iVar4 != 0;
  lVar3 = 0;
  iVar4 = 0;
  do {
    lVar3 = lVar3 + 1;
    iVar5 = iVar4 + 1;
    if (lVar3 < lVar8) {
      this_00 = (FUniqueNetIdWrapper *)(pFVar2 + lVar3 * 0x58 + 8);
      do {
        iVar7 = *(int *)&this_00[1].Variant.TypeIndex;
        if ((iVar7 == 0) && (4 < (byte)LogPartyBeacon._0_1_)) {
          FUniqueNetIdWrapper::ToString(this_00,&local_50);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Removing_reserv_153078d38,
                     (FLogCategoryBase *)&LogPartyBeacon);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        if (bVar6 != (iVar7 != 0)) break;
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 1;
        this_00 = (FUniqueNetIdWrapper *)&this_00[2].Variant.TypeIndex;
      } while (lVar3 < lVar8);
    }
    iVar7 = iVar5 - iVar4;
    if (bVar6 == false) {
      DestructItems<FPartyReservation,int>
                ((FPartyReservation *)(pFVar2 + (longlong)iVar4 * 0x58),iVar7);
    }
    else {
      if (iVar9 != iVar4) {
        memmove(pFVar2 + (longlong)iVar9 * 0x58,pFVar2 + (longlong)iVar4 * 0x58,
                (longlong)iVar7 * 0x58);
      }
      iVar9 = iVar9 + iVar7;
    }
    bVar6 = (bool)(bVar6 ^ 1);
    iVar4 = iVar5;
    if (lVar8 <= lVar3) {
      this->ArrayNum = iVar9;
      return iVar1 - iVar9;
    }
  } while( true );
}

// RemoveAll<`APartyBeaconHost::UpdatePartyReservation'::__l354::<lambda_2>_> @ 14ecac250

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<FPartyReservation,TSizedDefaultAllocator<32>_>::
RemoveAll<_APartyBeaconHost::UpdatePartyReservation_::__l354::<lambda_2>_>
          (TArray<FPartyReservation,TSizedDefaultAllocator<32>_> *this,<lambda_2> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FUniqueNetIdWrapper *this_00;
  int iVar9;
  FString local_50;
  
  iVar1 = this->ArrayNum;
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 0;
  pFVar2 = (this->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar2 + 0x40);
  if ((iVar4 == 0) && (4 < (byte)LogPartyBeacon._0_1_)) {
    FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)(pFVar2 + 8),&local_50);
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Removing_reserv_1530793a8,
               (FLogCategoryBase *)&LogPartyBeacon);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = iVar4 != 0;
  lVar3 = 0;
  iVar4 = 0;
  do {
    lVar3 = lVar3 + 1;
    iVar5 = iVar4 + 1;
    if (lVar3 < lVar8) {
      this_00 = (FUniqueNetIdWrapper *)(pFVar2 + lVar3 * 0x58 + 8);
      do {
        iVar7 = *(int *)&this_00[1].Variant.TypeIndex;
        if ((iVar7 == 0) && (4 < (byte)LogPartyBeacon._0_1_)) {
          FUniqueNetIdWrapper::ToString(this_00,&local_50);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Removing_reserv_1530793a8,
                     (FLogCategoryBase *)&LogPartyBeacon);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        if (bVar6 != (iVar7 != 0)) break;
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 1;
        this_00 = (FUniqueNetIdWrapper *)&this_00[2].Variant.TypeIndex;
      } while (lVar3 < lVar8);
    }
    iVar7 = iVar5 - iVar4;
    if (bVar6 == false) {
      DestructItems<FPartyReservation,int>
                ((FPartyReservation *)(pFVar2 + (longlong)iVar4 * 0x58),iVar7);
    }
    else {
      if (iVar9 != iVar4) {
        memmove(pFVar2 + (longlong)iVar9 * 0x58,pFVar2 + (longlong)iVar4 * 0x58,
                (longlong)iVar7 * 0x58);
      }
      iVar9 = iVar9 + iVar7;
    }
    bVar6 = (bool)(bVar6 ^ 1);
    iVar4 = iVar5;
    if (lVar8 <= lVar3) {
      this->ArrayNum = iVar9;
      return iVar1 - iVar9;
    }
  } while( true );
}

// StaticEnum<enum_ESpectatorClientRequestType> @ 14ecac450

UEnum * __cdecl StaticEnum<enum_ESpectatorClientRequestType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpectatorClientRequestType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_ESpectatorClientRequestType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType,
                       (UObject *)pUVar1,L"ESpectatorClientRequestType");
  }
  return Z_Registration_Info_UEnum_ESpectatorClientRequestType.OuterSingleton;
}

// StaticEnum<enum_EPartyReservationResult::Type> @ 14ecac490

UEnum * __cdecl StaticEnum<enum_EPartyReservationResult::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPartyReservationResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EPartyReservationResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult,
                       (UObject *)pUVar1,L"EPartyReservationResult");
  }
  return Z_Registration_Info_UEnum_EPartyReservationResult.OuterSingleton;
}

// StaticEnum<enum_ESpectatorReservationResult::Type> @ 14ecac4d0

UEnum * __cdecl StaticEnum<enum_ESpectatorReservationResult::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpectatorReservationResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_ESpectatorReservationResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult,
                       (UObject *)pUVar1,L"ESpectatorReservationResult");
  }
  return Z_Registration_Info_UEnum_ESpectatorReservationResult.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ecadf20

/* [thunk]:public: virtual void * __ptr64 __cdecl UOnlineBeaconUnitTestNetConnection::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UOnlineBeaconUnitTestNetConnection::_vector_deleting_destructor__adjustor_40__
          (UOnlineBeaconUnitTestNetConnection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UOnlineBeaconUnitTestNetConnection *)&this[-1].field_0x1ff8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ecadf30

/* [thunk]:public: virtual void * __ptr64 __cdecl UOnlineBeaconUnitTestNetDriver::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UOnlineBeaconUnitTestNetDriver::_vector_deleting_destructor__adjustor_40__
          (UOnlineBeaconUnitTestNetDriver *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UOnlineBeaconUnitTestNetDriver *)&this[-1].field_0xae0,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ecadf40

void * __thiscall
IBaseDelegateInstance<void___cdecl(FUniqueNetId_const_&,FString_const_&,bool,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FUniqueNetId_const_&,FString_const_&,bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecadf70

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecadfa0

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecadfd0

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae000

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae030

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,TSharedRef<FSharedContentHandle,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,TSharedRef<FSharedContentHandle,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae060

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`APartyBeaconHost::NotifyReservationEventNextFrame'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae0a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`ASpectatorBeaconHost::NotifyReservationEventNextFrame'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae0e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`ASpectatorBeaconClient::ClientCancelReservationResponse_Implementation'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae110

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`ASpectatorBeaconClient::ClientReservationResponse_Implementation'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae140

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`ASpectatorBeaconClient::ClientSendReservationFull_Implementation'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae170

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`ASpectatorBeaconClient::ClientSendReservationUpdates_Implementation'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae1a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestCloudInterface,void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestCloudInterface,void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae1d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestCloudInterface,void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestCloudInterface,void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae200

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestCloudInterface,void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestCloudInterface,void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae230

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestCloudInterface,void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,TSharedRef<FSharedContentHandle,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestCloudInterface,void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,TSharedRef<FSharedContentHandle,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae260

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestExternalUIInterface,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestExternalUIInterface,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae290

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestExternalUIInterface,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestExternalUIInterface,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae2c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestExternalUIInterface,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestExternalUIInterface,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae2f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestExternalUIInterface,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestExternalUIInterface,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae320

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestFriendsInterface,void___cdecl(FUniqueNetId_const_&,FString_const_&,bool,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestFriendsInterface,void___cdecl(FUniqueNetId_const_&,FString_const_&,bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae350

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestFriendsInterface,void___cdecl(FUniqueNetId_const_&,bool,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestFriendsInterface,void___cdecl(FUniqueNetId_const_&,bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae380

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestFriendsInterface,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestFriendsInterface,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae3b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestFriendsInterface,void___cdecl(int,bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestFriendsInterface,void___cdecl(int,bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae3e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestFriendsInterface,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestFriendsInterface,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae410

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae440

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae470

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae4a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,FString_const_&,bool,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,FString_const_&,bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae4d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae500

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae530

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae560

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae590

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,TSharedRef<FSharedContentHandle,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,TSharedRef<FSharedContentHandle,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTestIdentityInterfaceLoginOut,SharedPointerInternals::DefaultDeleter<FTestIdentityInterfaceLoginOut>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTestIdentityInterfaceLoginOut,SharedPointerInternals::DefaultDeleter<FTestIdentityInterfaceLoginOut>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AOnlineBeaconUnitTestClient::_scalar_deleting_destructor_
          (AOnlineBeaconUnitTestClient *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  AOnlineBeaconClient::~AOnlineBeaconClient((AOnlineBeaconClient *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae670

void * __thiscall
AOnlineBeaconUnitTestHost::_scalar_deleting_destructor_
          (AOnlineBeaconUnitTestHost *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  AOnlineBeaconHost::~AOnlineBeaconHost((AOnlineBeaconHost *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae6e0

void * __thiscall
AOnlineBeaconUnitTestHostObject::_scalar_deleting_destructor_
          (AOnlineBeaconUnitTestHostObject *this,uint param_1)

{
  *(undefined ***)this = &___7AOnlineBeaconUnitTestHostObject__6B_;
  AOnlineBeaconHostObject::~AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae740

void * __thiscall
APartyBeaconHost::_scalar_deleting_destructor_(APartyBeaconHost *this,uint param_1)

{
  this->_padding_ = (longlong)&___7APartyBeaconHost__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ValidatePlayers);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NewPlayerAddedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DuplicateReservation);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CancelationReceived);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationsFull);
  AOnlineBeaconHostObject::~AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae7f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ASpectatorBeaconClient::_scalar_deleting_destructor_(ASpectatorBeaconClient *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  pFVar1 = (this->PendingReservation).Spectator.Platform.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingReservation).Spectator.ValidationStr.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&(this->PendingReservation).Spectator.UniqueId);
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&(this->PendingReservation).SpectatorId);
  pFVar1 = (this->DestSessionId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationFull);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationCountUpdate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationRequestComplete);
  AOnlineBeaconClient::~AOnlineBeaconClient((AOnlineBeaconClient *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x468);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae8e0

void * __thiscall
ASpectatorBeaconHost::_scalar_deleting_destructor_(ASpectatorBeaconHost *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ASpectatorBeaconHost__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ValidatePlayers);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NewPlayerAddedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DuplicateReservation);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CancelationReceived);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationsFull);
  AOnlineBeaconHostObject::~AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecae990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ATestBeaconClient::_scalar_deleting_destructor_(ATestBeaconClient *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FNetworkNotify__;
  AOnlineBeaconClient::~AOnlineBeaconClient((AOnlineBeaconClient *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecaea00

void * __thiscall ATestBeaconHost::_scalar_deleting_destructor_(ATestBeaconHost *this,uint param_1)

{
  *(undefined ***)this = &___7ATestBeaconHost__6B_;
  AOnlineBeaconHostObject::~AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecaea60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FTestIdentityInterfaceLoginOut::_scalar_deleting_destructor_
          (FTestIdentityInterfaceLoginOut *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecaead0

void * __thiscall
UOnlineBeaconUnitTestNetConnection::_scalar_deleting_destructor_
          (UOnlineBeaconUnitTestNetConnection *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  UIpConnection::~UIpConnection((UIpConnection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2020);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecaeb40

void * __thiscall
UOnlineBeaconUnitTestNetDriver::_scalar_deleting_destructor_
          (UOnlineBeaconUnitTestNetDriver *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  UIpNetDriver::~UIpNetDriver((UIpNetDriver *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb08);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecaebb0

void * __thiscall
UPartyBeaconState::_scalar_deleting_destructor_(UPartyBeaconState *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPartyBeaconState__6B_;
  DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
            ((TSharedPtr<FUniqueNetId_const_,1> *)(this->PlayersPendingJoin).AllocatorInstance.Data,
             (this->PlayersPendingJoin).ArrayNum);
  pFVar1 = (this->PlayersPendingJoin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPartyReservation,int>
            ((FPartyReservation *)(this->Reservations).AllocatorInstance.Data,
             (this->Reservations).ArrayNum);
  pFVar1 = (this->Reservations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPartyBeaconCrossplayPlatformMapping,int>
            ((FPartyBeaconCrossplayPlatformMapping *)
             (this->PlatformTypeMapping).AllocatorInstance.Data,(this->PlatformTypeMapping).ArrayNum
            );
  pFVar1 = (this->PlatformTypeMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PlatformCrossplayRestrictions).AllocatorInstance.Data,
             (this->PlatformCrossplayRestrictions).ArrayNum);
  pFVar1 = (this->PlatformCrossplayRestrictions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecaec90

void * __thiscall
UQuitMatchCallbackProxy::_scalar_deleting_destructor_(UQuitMatchCallbackProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UQuitMatchCallbackProxy__6B_;
  pFVar1 = (this->MatchID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecaed40

void * __thiscall
UShowLoginUICallbackProxy::_scalar_deleting_destructor_
          (UShowLoginUICallbackProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UShowLoginUICallbackProxy__6B_;
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecaede0

void * __thiscall
USpectatorBeaconState::_scalar_deleting_destructor_(USpectatorBeaconState *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USpectatorBeaconState__6B_;
  DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
            ((TSharedPtr<FUniqueNetId_const_,1> *)(this->PlayersPendingJoin).AllocatorInstance.Data,
             (this->PlayersPendingJoin).ArrayNum);
  pFVar1 = (this->PlayersPendingJoin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSpectatorReservation,int>
            ((FSpectatorReservation *)(this->Reservations).AllocatorInstance.Data,
             (this->Reservations).ArrayNum);
  pFVar1 = (this->Reservations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestClient @ 14ecb77b0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestClient(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestHost @ 14ecb77c0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestHost(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestHostObject @ 14ecb77d0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestHostObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestNetConnection @ 14ecb77e0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestNetConnection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestNetDriver @ 14ecb77f0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBeaconUnitTestNetDriver(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePartyBeaconHost @ 14ecb7800

void __cdecl EmptyLinkFunctionForGeneratedCodePartyBeaconHost(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePartyBeaconState @ 14ecb7810

void __cdecl EmptyLinkFunctionForGeneratedCodePartyBeaconState(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeQuitMatchCallbackProxy @ 14ecb7820

void __cdecl EmptyLinkFunctionForGeneratedCodeQuitMatchCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeShowLoginUICallbackProxy @ 14ecb7830

void __cdecl EmptyLinkFunctionForGeneratedCodeShowLoginUICallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpectatorBeaconClient @ 14ecb7840

void __cdecl EmptyLinkFunctionForGeneratedCodeSpectatorBeaconClient(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpectatorBeaconHost @ 14ecb7850

void __cdecl EmptyLinkFunctionForGeneratedCodeSpectatorBeaconHost(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSpectatorBeaconState @ 14ecb7860

void __cdecl EmptyLinkFunctionForGeneratedCodeSpectatorBeaconState(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTestBeaconClient @ 14ecb7870

void __cdecl EmptyLinkFunctionForGeneratedCodeTestBeaconClient(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTestBeaconHost @ 14ecb7880

void __cdecl EmptyLinkFunctionForGeneratedCodeTestBeaconHost(void)

{
  return;
}

// FOnlineShowLoginUIResult_DelegateWrapper @ 14ecb8b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FOnlineShowLoginUIResult_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,APlayerController *param_2)

{
  APlayerController *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetOSSNamesForTesting @ 14ecb9b40

void __cdecl
OSSUtilsTestHelper::GetOSSNamesForTesting
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  FOnlineSubsystemModule *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  ForAnyElementType this;
  undefined1 local_res20 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_d8;
  uint local_c8;
  FString local_c0;
  FName *local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  ::FName::FName(&local_a8,L"MCP");
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(&local_d8,&local_a8);
  ::FName::FName(&local_a0,L"Null");
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(&local_d8,&local_a0);
  ::FName::FName(&local_98,L"Steam");
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(&local_d8,&local_98);
  ::FName::FName(&local_90,L"Facebook");
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(&local_d8,&local_90);
  ::FName::FName(&local_88,L"IOS");
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(&local_d8,&local_88);
  ::FName::FName(&local_80,L"GooglePlay");
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(&local_d8,&local_80);
  ::FName::FName(&local_78,L"Live");
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(&local_d8,&local_78);
  ::FName::FName(&local_70,L"Thunderhead");
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(&local_d8,&local_70);
  ::FName::FName(&local_68,L"Amazon");
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(&local_d8,&local_68);
  uVar7 = (ulonglong)local_d8.ArrayNum;
  local_c8 = local_d8.ArrayNum;
  pFVar10 = (FName *)(local_d8.AllocatorInstance.Data + uVar7 * 8);
  uVar8 = uVar7;
  this.Data = local_d8.AllocatorInstance.Data;
  local_b0 = pFVar10;
  do {
    if ((int)uVar7 != (int)uVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((FName *)this.Data == pFVar10) {
      if ((FName *)local_d8.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
      _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pFVar4 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                       (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                        ::__l2::OnlineSubsystemModuleName);
    lVar5 = (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,*(FName *)this.Data);
    if (lVar5 != 0) {
      ::FString::PrintfImpl(&local_60,L".%s");
      ::FName::ToString((FName *)this.Data,&local_50);
      ::FString::PrintfImpl(&local_c0,L"%s%s");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_c0) &&
          ((FScriptContainerElement *)&local_c0 < pFVar9 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = param_1->ArrayNum;
      if (iVar3 == param_1->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      _Src.Data = local_c0.Data.AllocatorInstance.Data;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
      param_1->ArrayNum = iVar3 + 1;
      *(undefined8 *)&pFVar9->field_0x0 = 0;
      iVar3 = local_c0.Data.ArrayNum;
      *(int *)&pFVar9[8].field_0x0 = iVar3;
      if (iVar3 == 0) {
        *(int *)(pFVar9 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,0,(ForAnyElementType *)pFVar9,iVar3,(int *)(pFVar9 + 0xc));
        memcpy(*(void **)&pFVar9->field_0x0,_Src.Data,(longlong)iVar3 * 2);
      }
      pFVar6 = (FScriptContainerElement *)::FName::ToString(this.Data,&local_40);
      pFVar9 = (param_2->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar6) && (pFVar6 < pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = param_2->ArrayNum;
      if (iVar3 == param_2->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar3 + 1;
      pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 =
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = *(int *)&pFVar6[8].field_0x0;
      *(int *)(pFVar9 + 0xc) = *(int *)&pFVar6[0xc].field_0x0;
      *(undefined8 *)&pFVar6[8].field_0x0 = 0;
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      pFVar10 = local_b0;
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
        pFVar10 = local_b0;
      }
    }
    uVar7 = local_d8._8_8_ & 0xffffffff;
    this.Data = this.Data + 8;
    uVar8 = (ulonglong)local_c8;
  } while( true );
}

// GetUserInfo @ 14ecbc920

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl OSSUtilsTestHelper::GetUserInfo(FString *param_1,FString *param_2)

{
  wchar_t *pwVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FString local_18;
  
  ::FString::operator=(param_1,L"");
  ::FString::operator=(param_2,L"");
  pwVar1 = FCommandLine::Get();
  ::FString::FString(&local_18,pwVar1);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  FParse::Value((wchar_t *)FVar2.Data,L"OSSIDTESTUSER=",param_1,true,(wchar_t **)0x0);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  FParse::Value((wchar_t *)FVar2.Data,L"OSSIDTESTPSSWD=",param_2,true,(wchar_t **)0x0);
  if (((param_1->Data).ArrayNum < 2) || ((param_2->Data).ArrayNum < 2)) {
    if (1 < (byte)OSSUtilsTestLog._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&OSSUtilsTestLog);
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// Z_Construct_UClass_AOnlineBeaconUnitTestClient_NoRegister @ 14ecd2dd0

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconUnitTestClient_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestClient",
               &Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.InnerSingleton,
               AOnlineBeaconUnitTestClient::StaticRegisterNativesAOnlineBeaconUnitTestClient,0x358,8
               ,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconUnitTestClient>,
               InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestClient.InnerSingleton;
}

// Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_NoRegister @ 14ecd2e90

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconUnitTestHostObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestHostObject",
               &Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.InnerSingleton,
               AOnlineBeaconUnitTestHostObject::StaticRegisterNativesAOnlineBeaconUnitTestHostObject
               ,0x2e8,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconUnitTestHostObject>,
               InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestHostObject>,local_res8,
               AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.InnerSingleton;
}

// Z_Construct_UClass_AOnlineBeaconUnitTestHost_NoRegister @ 14ecd2f50

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconUnitTestHost_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestHost",
               &Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.InnerSingleton,
               AOnlineBeaconUnitTestHost::StaticRegisterNativesAOnlineBeaconUnitTestHost,0x400,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconUnitTestHost>,
               InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestHost>,local_res8,
               AOnlineBeaconHost::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestHost.InnerSingleton;
}

// Z_Construct_UClass_APartyBeaconHost_NoRegister @ 14ecd3010

UClass * __cdecl Z_Construct_UClass_APartyBeaconHost_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APartyBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"PartyBeaconHost",
               &Z_Registration_Info_UClass_APartyBeaconHost.InnerSingleton,
               APartyBeaconHost::StaticRegisterNativesAPartyBeaconHost,0x390,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APartyBeaconHost>,
               InternalVTableHelperCtorCaller<APartyBeaconHost>,local_res8,
               AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APartyBeaconHost.InnerSingleton;
}

// Z_Construct_UClass_ASpectatorBeaconClient_NoRegister @ 14ecd30d0

UClass * __cdecl Z_Construct_UClass_ASpectatorBeaconClient_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpectatorBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconClient",
               &Z_Registration_Info_UClass_ASpectatorBeaconClient.InnerSingleton,
               ASpectatorBeaconClient::StaticRegisterNativesASpectatorBeaconClient,0x468,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ASpectatorBeaconClient>,
               InternalVTableHelperCtorCaller<ASpectatorBeaconClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpectatorBeaconClient.InnerSingleton;
}

// Z_Construct_UClass_ASpectatorBeaconHost_NoRegister @ 14ecd3190

UClass * __cdecl Z_Construct_UClass_ASpectatorBeaconHost_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpectatorBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconHost",
               &Z_Registration_Info_UClass_ASpectatorBeaconHost.InnerSingleton,
               ASpectatorBeaconHost::StaticRegisterNativesASpectatorBeaconHost,0x390,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ASpectatorBeaconHost>,
               InternalVTableHelperCtorCaller<ASpectatorBeaconHost>,local_res8,
               AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpectatorBeaconHost.InnerSingleton;
}

// Z_Construct_UClass_ATestBeaconClient_NoRegister @ 14ecd3250

UClass * __cdecl Z_Construct_UClass_ATestBeaconClient_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATestBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"TestBeaconClient",
               &Z_Registration_Info_UClass_ATestBeaconClient.InnerSingleton,
               ATestBeaconClient::StaticRegisterNativesATestBeaconClient,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATestBeaconClient>,
               InternalVTableHelperCtorCaller<ATestBeaconClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATestBeaconClient.InnerSingleton;
}

// Z_Construct_UClass_ATestBeaconHost_NoRegister @ 14ecd3310

UClass * __cdecl Z_Construct_UClass_ATestBeaconHost_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATestBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"TestBeaconHost",
               &Z_Registration_Info_UClass_ATestBeaconHost.InnerSingleton,
               ATestBeaconHost::StaticRegisterNativesATestBeaconHost,0x2e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATestBeaconHost>,InternalVTableHelperCtorCaller<ATestBeaconHost>,
               local_res8,AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATestBeaconHost.InnerSingleton;
}

// Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_NoRegister @ 14ecd33d0

UClass * __cdecl Z_Construct_UClass_UOnlineBeaconUnitTestNetConnection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestNetConnection",
               &Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.InnerSingleton,
               UOnlineBeaconUnitTestNetConnection::
               StaticRegisterNativesUOnlineBeaconUnitTestNetConnection,0x2020,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnlineBeaconUnitTestNetConnection>,
               InternalVTableHelperCtorCaller<UOnlineBeaconUnitTestNetConnection>,local_res8,
               UIpConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetConnection.InnerSingleton;
}

// Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_NoRegister @ 14ecd3490

UClass * __cdecl Z_Construct_UClass_UOnlineBeaconUnitTestNetDriver_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetDriver::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestNetDriver",
               &Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.InnerSingleton,
               UOnlineBeaconUnitTestNetDriver::StaticRegisterNativesUOnlineBeaconUnitTestNetDriver,
               0xb08,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnlineBeaconUnitTestNetDriver>,
               InternalVTableHelperCtorCaller<UOnlineBeaconUnitTestNetDriver>,local_res8,
               UIpNetDriver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineBeaconUnitTestNetDriver.InnerSingleton;
}

// Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult @ 14ecd3550

UEnum * __cdecl Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult(void)

{
  if (Z_Registration_Info_UEnum_EPartyReservationResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPartyReservationResult.InnerSingleton,
               &Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPartyReservationResult.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'AwayText'' @ 150470a60

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__AwayText__(void)

{
  if (AwayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*AwayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayCancellationResponse'' @ 150470a80

void __cdecl
SpectatorBeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarDelayCancellationResponse__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayCancellationResponse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayFullResponse'' @ 150470aa0

void __cdecl
SpectatorBeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarDelayFullResponse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayFullResponse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayReservationResponse'' @ 150470ac0

void __cdecl
SpectatorBeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarDelayReservationResponse__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayReservationResponse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayUpdateResponse'' @ 150470ae0

void __cdecl
SpectatorBeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarDelayUpdateResponse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayUpdateResponse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRemapReservationUpdateToExistingReservation'' @ 150470b00

void __cdecl
BeaconConsoleVariables::
_dynamic_atexit_destructor_for__CVarRemapReservationUpdateToExistingReservation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRemapReservationUpdateToExistingReservation);
  return;
}

// `dynamic_atexit_destructor_for_'ChatText'' @ 150470b20

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__ChatText__(void)

{
  if (ChatText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ChatText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DoNotDisturbText'' @ 150470b40

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__DoNotDisturbText__(void)

{
  if (DoNotDisturbText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DoNotDisturbText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FIdenitiyInterfacetFunctionalLoginLogoutTestAutomationTestInstance'' @ 150470b60

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FIdenitiyInterfacetFunctionalLoginLogoutTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FIdenitiyInterfacetFunctionalLoginLogoutTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTestIdentityInterfaceLogoutWhileNotLoggedInAutomationTestInstance'' @ 150470b80

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTestIdentityInterfaceLogoutWhileNotLoggedInAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FTestIdentityInterfaceLogoutWhileNotLoggedInAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogPartyBeacon'' @ 150470ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPartyBeacon__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPartyBeacon);
  return;
}

// `dynamic_atexit_destructor_for_'LogSpectatorBeacon'' @ 150470bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSpectatorBeacon__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSpectatorBeacon);
  return;
}

// `dynamic_atexit_destructor_for_'OSSUtilsTestLog'' @ 150470be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__OSSUtilsTestLog__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&OSSUtilsTestLog);
  return;
}

// `dynamic_atexit_destructor_for_'OfflineText'' @ 150470c00

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__OfflineText__(void)

{
  if (OfflineText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OfflineText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OnlineText'' @ 150470c20

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__OnlineText__(void)

{
  if (OnlineText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OnlineText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

