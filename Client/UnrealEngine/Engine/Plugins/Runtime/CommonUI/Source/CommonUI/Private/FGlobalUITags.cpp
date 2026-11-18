// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// AddTags @ 14a780430

void __thiscall FGlobalUITags::AddTags(FGlobalUITags *this)

{
  FString local_res8 [2];
  FString local_18;
  
  if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
    UGameplayTagsManager::InitializeManager();
  }
  ::FString::FString(&local_18,L"Cancel");
  TTypedTagStaticImpl<FUIActionTag>::AddNativeTag(local_res8);
  this->UIAction_Cancel = (FUIActionTag)local_res8[0].Data.AllocatorInstance.Data;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"Confirm");
  TTypedTagStaticImpl<FUIActionTag>::AddNativeTag(local_res8);
  this->UIAction_Confirm = (FUIActionTag)local_res8[0].Data.AllocatorInstance.Data;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"PreviousTab");
  TTypedTagStaticImpl<FUIActionTag>::AddNativeTag(local_res8);
  this->UIAction_PreviousTab = (FUIActionTag)local_res8[0].Data.AllocatorInstance.Data;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"NextTab");
  TTypedTagStaticImpl<FUIActionTag>::AddNativeTag(local_res8);
  this->UIAction_NextTab = (FUIActionTag)local_res8[0].Data.AllocatorInstance.Data;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

