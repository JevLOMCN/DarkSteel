// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 1

// Get @ 14cfa8d40

IAppleImageUtilsPlugin * __cdecl IAppleImageUtilsPlugin::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this;
  IAppleImageUtilsPlugin *pIVar4;
  IModuleInterface *pIVar5;
  FName local_res8;
  FName local_res10;
  FString local_18;
  
  pFVar3 = ::FName::FName(&local_res10,"AppleImageUtils");
  local_res8 = *pFVar3;
  this = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(this,local_res8);
  if (!bVar2) {
    ::FName::ToString(&local_res8,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IAppleImageUtilsPlugin *)(*pcVar1)();
      return pIVar4;
    }
  }
  pIVar5 = FModuleManager::GetModule(this,local_res8);
  return (IAppleImageUtilsPlugin *)pIVar5;
}

