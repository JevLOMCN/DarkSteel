// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 1

// Execute @ 1423829c0

float __thiscall
TDelegate<float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>::
Execute(TDelegate<float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
        *this,TVector<double> *param_1,float param_2,int *param_3)

{
  longlong *plVar1;
  float fVar2;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,local_38);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  fVar2 = (float)(**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return fVar2;
}

