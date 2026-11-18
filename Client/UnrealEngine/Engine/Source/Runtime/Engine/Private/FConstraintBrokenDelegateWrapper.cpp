// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FConstraintBrokenDelegateWrapper @ 14824e6a0

FConstraintBrokenDelegateWrapper * __thiscall
FConstraintBrokenDelegateWrapper::FConstraintBrokenDelegateWrapper
          (FConstraintBrokenDelegateWrapper *this,FConstraintInstanceBase *param_1)

{
  *(undefined8 *)&this->OnConstraintBrokenDelegate = 0;
  *(undefined8 *)&(this->OnConstraintBrokenDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnConstraintBrokenDelegate).field_0x10 = 0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnConstraintBrokenDelegate,&param_1->OnConstraintBrokenDelegate);
  this->ConstraintIndex = param_1->ConstraintIndex;
  return this;
}

// DispatchOnBroken @ 14827aa10

void __thiscall
FConstraintBrokenDelegateWrapper::DispatchOnBroken(FConstraintBrokenDelegateWrapper *this)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  iVar1 = this->ConstraintIndex;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&(this->OnConstraintBrokenDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnConstraintBrokenDelegate).field_0x8,
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

