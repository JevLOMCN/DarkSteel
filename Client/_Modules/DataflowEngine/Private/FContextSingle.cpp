// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 2

// GetType @ 1462defe0

FName __thiscall UE::Dataflow::FContextSingle::GetType(FContextSingle *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FContextSingle");
  return in_RDX;
}

// IsA @ 1462dfa80

bool __thiscall UE::Dataflow::FContextSingle::IsA(FContextSingle *this,FName param_1)

{
  FName local_res10;
  FName local_res18 [2];
  
  ::FName::FName(&local_res10,"FContextSingle");
  if (param_1 != local_res10) {
    ::FName::FName(local_res18,"FContext");
    if (param_1 != local_res18[0]) {
      return false;
    }
  }
  return true;
}

