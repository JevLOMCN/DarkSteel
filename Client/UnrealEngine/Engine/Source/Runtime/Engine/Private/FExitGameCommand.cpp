// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 14885f370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FExitGameCommand::Update(FExitGameCommand *this)

{
  code *pcVar1;
  UWorld *pUVar2;
  APlayerController *pAVar3;
  FString local_28;
  void *local_18 [2];
  
  pUVar2 = AutomationCommon::GetAnyGameWorld();
  pAVar3 = UGameplayStatics::GetPlayerController((UObject *)pUVar2,0);
  if (pAVar3 != (APlayerController *)0x0) {
    pcVar1 = *(code **)(pAVar3->_padding_ + 0xe00);
    ::FString::FString(&local_28,L"Exit");
    (*pcVar1)(pAVar3,local_18,&local_28,1);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

