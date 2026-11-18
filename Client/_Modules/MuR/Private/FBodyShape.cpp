// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// Serialise @ 14ab85010

void __thiscall
UE::Mutable::Private::FBodyShape::Serialise(FBodyShape *this,FOutputArchive *param_1)

{
  uint local_res8 [2];
  
  local_res8[0] = (this->Name).Data.ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  if (local_res8[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->Name).Data.AllocatorInstance.Data,(ulonglong)local_res8[0] * 2
              );
  }
                    /* WARNING: Could not recover jumptable at 0x00014ab8506f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->Flags,4);
  return;
}

// Unserialise @ 14ab8cdf0

void __thiscall
UE::Mutable::Private::FBodyShape::Unserialise(FBodyShape *this,FInputArchive *param_1)

{
  Private::operator>>(param_1,&this->Name);
                    /* WARNING: Could not recover jumptable at 0x00014ab8ce26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->Flags,4);
  return;
}

