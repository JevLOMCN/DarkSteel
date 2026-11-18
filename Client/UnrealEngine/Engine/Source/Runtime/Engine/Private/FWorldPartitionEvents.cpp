// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// BroadcastWorldPartitionInitialized @ 1489ce120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FWorldPartitionEvents::BroadcastWorldPartitionInitialized(UWorld *param_1,UWorldPartition *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                       ,0x2d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegate<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy> *)
             &param_1->OnWorldPartitionInitializedEvent,param_2);
  return;
}

// BroadcastWorldPartitionUninitialized @ 1489ce180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FWorldPartitionEvents::BroadcastWorldPartitionUninitialized
          (UWorld *param_1,UWorldPartition *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                       ,0x2df,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegate<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy> *)
             &param_1->OnWorldPartitionUninitializedEvent,param_2);
  return;
}

