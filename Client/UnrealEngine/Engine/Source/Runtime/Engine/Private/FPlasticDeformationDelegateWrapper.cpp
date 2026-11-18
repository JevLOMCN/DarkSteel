// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FPlasticDeformationDelegateWrapper @ 148250020

FPlasticDeformationDelegateWrapper * __thiscall
FPlasticDeformationDelegateWrapper::FPlasticDeformationDelegateWrapper
          (FPlasticDeformationDelegateWrapper *this,FConstraintInstanceBase *param_1)

{
  *(undefined8 *)&this->OnPlasticDeformationDelegate = 0;
  *(undefined8 *)&(this->OnPlasticDeformationDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPlasticDeformationDelegate).field_0x10 = 0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnPlasticDeformationDelegate,&param_1->OnPlasticDeformationDelegate);
  this->ConstraintIndex = param_1->ConstraintIndex;
  return this;
}

// DispatchPlasticDeformation @ 14827b540

void __thiscall
FPlasticDeformationDelegateWrapper::DispatchPlasticDeformation
          (FPlasticDeformationDelegateWrapper *this)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  iVar1 = this->ConstraintIndex;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&(this->OnPlasticDeformationDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnPlasticDeformationDelegate).field_0x8,
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

