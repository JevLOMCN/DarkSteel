// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 147faa0a0

TPimplPtr<UE::Net::FNetResult,1> * __thiscall
TPimplPtr<UE::Net::FNetResult,1>::operator=
          (TPimplPtr<UE::Net::FNetResult,1> *this,TPimplPtr<UE::Net::FNetResult,1> *param_1)

{
  TPimplPtr<UE::Net::FNetResult,1> TVar1;
  
  if (param_1 != this) {
    TVar1 = *this;
    *this = *param_1;
    *param_1 = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    if (TVar1 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
    }
  }
  return this;
}

