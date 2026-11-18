// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// FAsyncLatentCommand @ 14eb304b0

FAsyncLatentCommand * __thiscall
FAutomationSpecBase::FAsyncLatentCommand::FAsyncLatentCommand
          (FAsyncLatentCommand *this,FAutomationSpecBase *param_1,EAsyncExecution param_2,
          TFunction<void___cdecl(void)> *param_3,FTimespan *param_4,bool param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  this->Spec = param_1;
  this->_padding_ = (longlong)&___7FAsyncLatentCommand_FAutomationSpecBase__6B_;
  this->Execution = param_2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Predicate = *(undefined8 *)param_3;
  *(undefined8 *)&(this->Predicate).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_3->field_0x14;
  uVar2 = *(undefined4 *)&param_3->field_0x18;
  uVar3 = *(undefined4 *)&param_3->field_0x1c;
  *(undefined4 *)&(this->Predicate).field_0x10 = *(undefined4 *)&param_3->field_0x10;
  *(undefined4 *)&(this->Predicate).field_0x14 = uVar1;
  *(undefined4 *)&(this->Predicate).field_0x18 = uVar2;
  *(undefined4 *)&(this->Predicate).field_0x1c = uVar3;
  *(undefined8 *)&(this->Predicate).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->Predicate != 0) {
    *(undefined8 *)param_3 = 0;
  }
  (this->Timeout).Ticks = param_4->Ticks;
  this->bSkipIfErrored = param_5;
  this->bDone = (FThreadSafeBool)0x0;
  (this->StartedRunning).Ticks = 0;
  *(undefined8 *)&this->Future = 0;
  *(undefined8 *)&(this->Future).field_0x8 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActionCS,4000);
  if (*(longlong *)param_3 != 0) {
    plVar4 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return this;
}

