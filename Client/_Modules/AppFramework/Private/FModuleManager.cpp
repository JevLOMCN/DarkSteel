// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// LoadModuleChecked<ISlateReflectorModule> @ 143049e70

ISlateReflectorModule * __cdecl
FModuleManager::LoadModuleChecked<ISlateReflectorModule>(FName param_1)

{
  FModuleManager *this;
  IModuleInterface *pIVar1;
  
  this = Get();
  pIVar1 = LoadModuleChecked(this,param_1);
  return (ISlateReflectorModule *)pIVar1;
}

