// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// FInterchangeTaskLambda @ 14e68fc50

FInterchangeTaskLambda * __thiscall
UE::Interchange::FInterchangeTaskLambda::FInterchangeTaskLambda
          (FInterchangeTaskLambda *this,EInterchangeTaskThread param_1,
          TFunction<void___cdecl(void)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->_padding_ = -1;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FInterchangeTaskLambda_Interchange_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->TaskThread = param_1;
  *(undefined8 *)&this->ExecuteLambda = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ExecuteLambda).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->ExecuteLambda).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->ExecuteLambda).field_0x14 = uVar1;
  *(undefined4 *)&(this->ExecuteLambda).field_0x18 = uVar2;
  *(undefined4 *)&(this->ExecuteLambda).field_0x1c = uVar3;
  *(undefined8 *)&(this->ExecuteLambda).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->ExecuteLambda != 0) {
    *(undefined8 *)param_2 = 0;
    return this;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return this;
}

// Execute @ 14e69b220

void __thiscall UE::Interchange::FInterchangeTaskLambda::Execute(FInterchangeTaskLambda *this)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  Core::Private::Function::CheckCallable(*(void **)&this->ExecuteLambda);
  UNRECOVERED_JUMPTABLE = *(code **)&this->ExecuteLambda;
  plVar1 = *(longlong **)&(this->ExecuteLambda).field_0x28;
  plVar3 = (longlong *)&(this->ExecuteLambda).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014e69b262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}

// GetTaskThread @ 14e6a1e10

EInterchangeTaskThread __thiscall
UE::Interchange::FInterchangeTaskLambda::GetTaskThread(FInterchangeTaskLambda *this)

{
  return this->TaskThread;
}

