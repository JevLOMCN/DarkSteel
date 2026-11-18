// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 2

// GetType @ 14e666050

ECommandId __thiscall UE::Interchange::FErrorCommand::GetType(FErrorCommand *this)

{
  return Error;
}

// SerializeImpl @ 14e668100

void __thiscall UE::Interchange::FErrorCommand::SerializeImpl(FErrorCommand *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->ErrorMessage);
  return;
}

