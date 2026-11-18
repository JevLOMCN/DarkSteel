// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9790

IMachineConfig * __cdecl
BuildPatchServices::FMachineConfigFactory::Create(FString *param_1,bool param_2)

{
  IMachineConfig *pIVar1;
  
  pIVar1 = ::operator_new(0x20);
  if (pIVar1 != (IMachineConfig *)0x0) {
    *pIVar1 = (IMachineConfig)&___7FMachineConfig_BuildPatchServices__6B_;
    ::FString::FString((FString *)(pIVar1 + 1),param_1);
    *(bool *)(pIVar1 + 3) = param_2;
    return pIVar1;
  }
  return (IMachineConfig *)0x0;
}

