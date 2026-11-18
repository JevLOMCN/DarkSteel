// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// StartupModule @ 14283be90

void __thiscall FSlateModule::StartupModule(FSlateModule *this)

{
  FAnimatedAttributeManager *this_00;
  
  this_00 = FAnimatedAttributeManager::Get();
  FAnimatedAttributeManager::SetupTick(this_00);
  return;
}

// ShutdownModule @ 14283beb0

void __thiscall FSlateModule::ShutdownModule(FSlateModule *this)

{
  FAnimatedAttributeManager *this_00;
  
  this_00 = FAnimatedAttributeManager::Get();
  FAnimatedAttributeManager::TeardownTick(this_00);
  return;
}

