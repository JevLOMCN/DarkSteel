// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 3

// FSingleExecuteLatentCommand @ 141dc5350

FSingleExecuteLatentCommand * __thiscall
FAutomationSpecBase::FSingleExecuteLatentCommand::FSingleExecuteLatentCommand
          (FSingleExecuteLatentCommand *this,FAutomationSpecBase *param_1,
          TFunction<void___cdecl(void)> *param_2,bool param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  this->Spec = param_1;
  *(undefined ***)this = &___7FSingleExecuteLatentCommand_FAutomationSpecBase__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->Predicate = *(undefined8 *)param_2;
  *(undefined8 *)&(this->Predicate).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->Predicate).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->Predicate).field_0x14 = uVar1;
  *(undefined4 *)&(this->Predicate).field_0x18 = uVar2;
  *(undefined4 *)&(this->Predicate).field_0x1c = uVar3;
  *(undefined8 *)&(this->Predicate).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->Predicate != 0) {
    *(undefined8 *)param_2 = 0;
  }
  this->bSkipIfErrored = param_3;
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// ~FSingleExecuteLatentCommand @ 141dc65c0

void __thiscall
FAutomationSpecBase::FSingleExecuteLatentCommand::~FSingleExecuteLatentCommand
          (FSingleExecuteLatentCommand *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7FSingleExecuteLatentCommand_FAutomationSpecBase__6B_;
  if (*(longlong *)&this->Predicate != 0) {
    plVar3 = *(longlong **)&(this->Predicate).field_0x28;
    plVar4 = (longlong *)&(this->Predicate).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(undefined ***)this = &___7IAutomationLatentCommand__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141dc661e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Update @ 141dfcf00

bool __thiscall
FAutomationSpecBase::FSingleExecuteLatentCommand::Update(FSingleExecuteLatentCommand *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if ((this->bSkipIfErrored != false) &&
     (bVar3 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this->Spec), bVar3)) {
    return true;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Predicate);
  plVar1 = *(longlong **)&(this->Predicate).field_0x28;
  pcVar2 = *(code **)&this->Predicate;
  plVar5 = (longlong *)&(this->Predicate).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4);
  return true;
}

