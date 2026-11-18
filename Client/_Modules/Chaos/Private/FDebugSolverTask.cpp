// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FDebugSolverTask @ 143f89020

FDebugSolverTask * __thiscall
Chaos::FDebugSolverTask::FDebugSolverTask
          (FDebugSolverTask *this,TFunction<void___cdecl(void)> *param_1,FDebugSubstep *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)param_1;
  *(longlong *)&this->StepFunction = lVar1;
  *(undefined8 *)&(this->StepFunction).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  this->DebugSubstep = param_2;
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return this;
}

// DoWork @ 143faa1e0

void __thiscall Chaos::FDebugSolverTask::DoWork(FDebugSolverTask *this)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  FDebugSubstep::AssumeThisThread(this->DebugSubstep);
  FDebugSubstep::Add(this->DebugSubstep,true,L"Debug thread start");
  if (this->DebugSubstep->bIsEnabled != (FThreadSafeBool)0x0) {
    do {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->StepFunction);
      plVar3 = *(longlong **)&(this->StepFunction).field_0x28;
      pcVar1 = *(code **)&this->StepFunction;
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)&(this->StepFunction).field_0x10;
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2);
      FDebugSubstep::Add(this->DebugSubstep,true,L"Debug thread step");
    } while (this->DebugSubstep->bIsEnabled != (FThreadSafeBool)0x0);
  }
  FDebugSubstep::Add(this->DebugSubstep,true,L"Debug thread exit");
  return;
}

