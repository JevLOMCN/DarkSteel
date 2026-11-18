// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// GetSettings @ 14a7e7bb0

UCommonUISettings * __cdecl ICommonUIModule::GetSettings(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FModuleManager *pFVar5;
  IModuleInterface *pIVar6;
  UCommonUISettings *pUVar7;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_18;
  
  bVar3 = IsInGameThread();
  if (bVar3) {
    pFVar4 = ::FName::FName(&local_res10,"CommonUI");
    FVar1 = *pFVar4;
    pFVar5 = FModuleManager::Get();
    pIVar6 = FModuleManager::LoadModuleChecked(pFVar5,FVar1);
  }
  else {
    pFVar4 = ::FName::FName(&local_res18,"CommonUI");
    local_res8 = *pFVar4;
    pFVar5 = FModuleManager::Get();
    bVar3 = FModuleManager::IsModuleLoaded(pFVar5,local_res8);
    if (!bVar3) {
      ::FName::ToString(&local_res8,&local_18);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModuleManager.IsModuleLoaded(ModuleName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                         ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar7 = (UCommonUISettings *)(*pcVar2)();
        return pUVar7;
      }
    }
    pIVar6 = FModuleManager::GetModule(pFVar5,local_res8);
  }
  pUVar7 = (UCommonUISettings *)(**(code **)((longlong)*pIVar6 + 0x50))(pIVar6);
  if ((pUVar7 == (UCommonUISettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Public\\ICommonUIModule.h"
                         ,0x31,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar7 = (UCommonUISettings *)(*pcVar2)();
    return pUVar7;
  }
  return pUVar7;
}

