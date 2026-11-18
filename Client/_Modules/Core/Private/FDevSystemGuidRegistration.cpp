// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FDevSystemGuidRegistration @ 141a6baf0

FDevSystemGuidRegistration * __thiscall
FDevSystemGuidRegistration::FDevSystemGuidRegistration
          (FDevSystemGuidRegistration *this,
          TMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
          *param_1)

{
  FDevSystemGuidRegistry *this_00;
  
  this_00 = GetSystemGuidRegistry();
  FDevSystemGuidRegistry::RegisterSystemGuids(this_00,param_1);
  return this;
}

