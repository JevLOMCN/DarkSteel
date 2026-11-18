// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 1

// GetModuleChecked<ResonanceAudio::FResonanceAudioModule> @ 14f042790

FResonanceAudioModule * __cdecl
FModuleManager::GetModuleChecked<ResonanceAudio::FResonanceAudioModule>(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *this;
  FResonanceAudioModule *pFVar3;
  FName local_res8;
  FString local_18;
  
  local_res8 = param_1;
  this = Get();
  bVar2 = IsModuleLoaded(this,local_res8);
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
      pFVar3 = (FResonanceAudioModule *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = (FResonanceAudioModule *)GetModule(this,local_res8);
  return pFVar3;
}

