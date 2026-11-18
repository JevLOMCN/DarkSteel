// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FConstraintViolatedDelegateWrapper @ 14824ea50

FConstraintViolatedDelegateWrapper * __thiscall
FConstraintViolatedDelegateWrapper::FConstraintViolatedDelegateWrapper
          (FConstraintViolatedDelegateWrapper *this,FConstraintInstanceBase *param_1)

{
  *(undefined8 *)&this->OnConstraintViolatedDelegate = 0;
  *(undefined8 *)&(this->OnConstraintViolatedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnConstraintViolatedDelegate).field_0x10 = 0;
  TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnConstraintViolatedDelegate,&param_1->OnConstraintViolatedDelegate);
  this->ConstraintIndex = param_1->ConstraintIndex;
  return this;
}

// DispatchOnViolated @ 14827aa60

void __thiscall
FConstraintViolatedDelegateWrapper::DispatchOnViolated
          (FConstraintViolatedDelegateWrapper *this,float param_1,float param_2)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_48 [2];
  
  iVar1 = this->ConstraintIndex;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,local_48);
  if ((*(int *)&(this->OnConstraintViolatedDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnConstraintViolatedDelegate).field_0x8,
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar1,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_48);
  return;
}

