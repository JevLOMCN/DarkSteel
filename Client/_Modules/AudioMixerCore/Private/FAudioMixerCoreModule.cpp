// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 1

// StartupModule @ 144525b00

void __thiscall FAudioMixerCoreModule::StartupModule(FAudioMixerCoreModule *this)

{
  FModuleManager *this_00;
  FName *pFVar1;
  FName local_res10 [3];
  
  this_00 = FModuleManager::Get();
  pFVar1 = ::FName::FName(local_res10,L"SignalProcessing");
  FModuleManager::LoadModuleChecked(this_00,*pFVar1);
  return;
}

