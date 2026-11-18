// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 2

// GetType @ 14e666080

ECommandId __thiscall UE::Interchange::FRunTaskCommand::GetType(FRunTaskCommand *this)

{
  return RunTask;
}

// SerializeImpl @ 14e668140

void __thiscall
UE::Interchange::FRunTaskCommand::SerializeImpl(FRunTaskCommand *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  ::operator<<(param_1,&this->JsonDescription);
  piVar1 = &this->TaskIndex;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014e6681a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

