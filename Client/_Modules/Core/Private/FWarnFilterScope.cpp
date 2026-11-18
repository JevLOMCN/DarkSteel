// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FWarnFilterScope @ 141a71fb0

FWarnFilterScope * __thiscall
FWarnFilterScope::FWarnFilterScope
          (FWarnFilterScope *this,
          TFunction<bool___cdecl(wchar_t_const_*,ELogVerbosity::Type,FName_const_&)> *param_1)

{
  longlong lVar1;
  FFeedbackContext *pFVar2;
  FFilterFeedback *this_00;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong local_38 [3];
  longlong *local_20;
  
  this->OldWarn = GWarn;
  this_00 = ::operator_new(0x170);
  if (this_00 == (FFilterFeedback *)0x0) {
    this_00 = (FFilterFeedback *)0x0;
  }
  else {
    lVar1 = *(longlong *)param_1;
    local_20 = (longlong *)0x0;
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar3)(puVar3,local_38);
    }
    pFVar2 = this->OldWarn;
    FFeedbackContext::FFeedbackContext((FFeedbackContext *)this_00);
    this_00->OldFeedback = pFVar2;
    this_00->_padding_ = (longlong)&___7FFilterFeedback__6B_;
    *(longlong *)&this_00->Handler = lVar1;
    *(undefined8 *)&(this_00->Handler).field_0x28 = 0;
    if (lVar1 != 0) {
      plVar4 = local_38;
      if (local_20 != (longlong *)0x0) {
        plVar4 = local_20;
      }
      (**(code **)*plVar4)();
    }
    if (lVar1 != 0) {
      plVar4 = local_38;
      if (local_20 != (longlong *)0x0) {
        plVar4 = local_20;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  this->Feedback = this_00;
  GWarn = (FFeedbackContext *)this_00;
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// ~FWarnFilterScope @ 141a72e30

void __thiscall FWarnFilterScope::~FWarnFilterScope(FWarnFilterScope *this)

{
  FFilterFeedback *pFVar1;
  
  GWarn = this->OldWarn;
  pFVar1 = this->Feedback;
  if (pFVar1 != (FFilterFeedback *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141a72e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

