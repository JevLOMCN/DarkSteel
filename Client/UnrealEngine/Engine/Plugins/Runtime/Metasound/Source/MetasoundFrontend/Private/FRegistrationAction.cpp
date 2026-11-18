// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// FRegistrationAction @ 14ae5ace0

FRegistrationAction * __thiscall
Metasound::Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
          (FRegistrationAction *this,FRegistrationAction **param_1,
          _func___cdecl_bool_FModuleInfo_ptr *param_2,_func___cdecl_bool_FModuleInfo_ptr *param_3)

{
  this->Next = (FRegistrationAction *)0x0;
  this->Register = param_2;
  this->Unregister = param_3;
  this->Next = *param_1;
  *param_1 = this;
  return this;
}

