// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 2

// GetType @ 1462df040

FName __thiscall UE::Dataflow::FContextThreaded::GetType(FContextThreaded *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FContextThreaded");
  return in_RDX;
}

// IsA @ 1462dfb50

bool __thiscall UE::Dataflow::FContextThreaded::IsA(FContextThreaded *this,FName param_1)

{
  FName local_res10;
  FName local_res18 [2];
  
  ::FName::FName(&local_res10,"FContextThreaded");
  if (param_1 != local_res10) {
    ::FName::FName(local_res18,"FContext");
    if (param_1 != local_res18[0]) {
      return false;
    }
  }
  return true;
}

