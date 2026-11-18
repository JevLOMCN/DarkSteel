// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// StartupModule @ 1464cfe70

void __thiscall FAudioMixerModule::StartupModule(FAudioMixerModule *this)

{
  FModuleManager *pFVar1;
  FName *pFVar2;
  FName local_res10 [3];
  
  pFVar1 = FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res10,L"AudioMixerCore");
  FModuleManager::LoadModuleChecked(pFVar1,*pFVar2);
  pFVar1 = FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res10,L"SignalProcessing");
  FModuleManager::LoadModuleChecked(pFVar1,*pFVar2);
  return;
}

