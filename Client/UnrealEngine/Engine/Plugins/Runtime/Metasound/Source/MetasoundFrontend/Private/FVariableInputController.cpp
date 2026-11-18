// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// FVariableInputController @ 14ae1cad0

FVariableInputController * __thiscall
Metasound::Frontend::FVariableInputController::FVariableInputController
          (FVariableInputController *this,FInitParams *param_1)

{
  FBaseInputController::FBaseInputController((FBaseInputController *)this,param_1);
  *(undefined ***)this = &___7FVariableInputController_Frontend_Metasound__6B_;
  return this;
}

// ~FVariableInputController @ 14ae1dda0

void __thiscall
Metasound::Frontend::FVariableInputController::~FVariableInputController
          (FVariableInputController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0xf8);
  if (*(longlong *)&this->field_0xc0 != 0) {
    plVar3 = (longlong *)&this->field_0xd0;
    if (*(longlong **)&this->field_0xe8 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0xe8;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->field_0x80 != 0) {
    plVar3 = (longlong *)&this->field_0x90;
    if (*(longlong **)&this->field_0xa8 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0xa8;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->field_0x40 != 0) {
    plVar3 = (longlong *)&this->field_0x50;
    if (*(longlong **)&this->field_0x68 != (longlong *)0x0) {
      plVar3 = *(longlong **)&this->field_0x68;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ae1d3fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// IsConnectionUserModifiable @ 14ae3f1b0

bool __thiscall
Metasound::Frontend::FVariableInputController::IsConnectionUserModifiable
          (FVariableInputController *this)

{
  return false;
}

