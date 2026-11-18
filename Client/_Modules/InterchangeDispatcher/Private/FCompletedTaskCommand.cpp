// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 2

// GetType @ 14e666040

ECommandId __thiscall UE::Interchange::FCompletedTaskCommand::GetType(FCompletedTaskCommand *this)

{
  return NotifyEndTask;
}

// SerializeImpl @ 14e668010

void __thiscall
UE::Interchange::FCompletedTaskCommand::SerializeImpl(FCompletedTaskCommand *this,FArchive *param_1)

{
  ETaskState *pEVar1;
  int *piVar2;
  ETaskState *pEVar3;
  int *piVar4;
  
  pEVar1 = &this->ProcessResult;
  pEVar3 = (ETaskState *)**(undefined8 **)&param_1->field_0x8;
  if ((ETaskState *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,pEVar1);
    }
  }
  else {
    *pEVar1 = *pEVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&this->JSonMessages);
  ::operator<<(param_1,&this->JSonResult);
  piVar2 = &this->TaskIndex;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar4 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar2 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014e6680db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
  return;
}

