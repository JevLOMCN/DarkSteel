// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// FVariableOutputController @ 14ae5b380

FVariableOutputController * __thiscall
Metasound::Frontend::FVariableOutputController::FVariableOutputController
          (FVariableOutputController *this,FInitParams *param_1)

{
  FBaseOutputController::FBaseOutputController((FBaseOutputController *)this,param_1);
  *(undefined ***)this = &___7FVariableOutputController_Frontend_Metasound__6B_;
  return this;
}

// ~FVariableOutputController @ 14ae5c770

void __thiscall
Metasound::Frontend::FVariableOutputController::~FVariableOutputController
          (FVariableOutputController *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014ae5c11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// IsConnectionUserModifiable @ 14ae7a3d0

bool __thiscall
Metasound::Frontend::FVariableOutputController::IsConnectionUserModifiable
          (FVariableOutputController *this)

{
  return false;
}

