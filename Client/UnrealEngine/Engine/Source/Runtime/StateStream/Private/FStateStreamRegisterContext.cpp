// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 2

// Register @ 143127d80

void __thiscall
FStateStreamRegisterContext::Register
          (FStateStreamRegisterContext *this,IStateStream *param_1,bool param_2)

{
  FStateStreamManagerImpl::Render_Register(this->Manager,param_1,param_2);
  return;
}

// RegisterDependency @ 143127d90

void __thiscall
FStateStreamRegisterContext::RegisterDependency
          (FStateStreamRegisterContext *this,uint param_1,uint param_2)

{
  return;
}

