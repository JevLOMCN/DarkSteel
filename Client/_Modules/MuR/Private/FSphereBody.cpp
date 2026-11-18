// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// Serialise @ 14ab85b10

void __thiscall
UE::Mutable::Private::FSphereBody::Serialise(FSphereBody *this,FOutputArchive *param_1)

{
  uint local_res8 [2];
  
  local_res8[0] = (uint)this->_padding_;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  if (local_res8[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,this->_padding_,(ulonglong)local_res8[0] * 2);
  }
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->_padding_,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->Position,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->Position).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->Position).field0_0x0 + 8),4);
                    /* WARNING: Could not recover jumptable at 0x00014ab85bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->Radius,4);
  return;
}

// Unserialise @ 14ab8d6b0

void __thiscall
UE::Mutable::Private::FSphereBody::Unserialise(FSphereBody *this,FInputArchive *param_1)

{
  Private::operator>>(param_1,(FString *)this);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->_padding_,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->Position,4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->Position).field0_0x0 + 4),4);
  (**(code **)((longlong)*param_1->Stream + 8))
            (param_1->Stream,(undefined1 *)((longlong)&(this->Position).field0_0x0 + 8),4);
                    /* WARNING: Could not recover jumptable at 0x00014ab8d740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->Radius,4);
  return;
}

