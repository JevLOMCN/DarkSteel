// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetValueOrDefault @ 147eff100

int __thiscall
IMaterialEnumerationProvider::GetValueOrDefault
          (IMaterialEnumerationProvider *this,FName param_1,int param_2)

{
  int local_res8 [8];
  
  (**(code **)((longlong)*this + 0x10))(this,param_1,local_res8,param_2);
  return local_res8[0];
}

