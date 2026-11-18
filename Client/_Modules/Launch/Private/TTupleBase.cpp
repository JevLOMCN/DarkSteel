// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 1

// ApplyAfter<void_(__cdecl*const_&)(FInstallBundleRequestResultInfo,bool,bool,bool,bool),FInstallBundleRequestResultInfo> @ 148d99230

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,bool,bool,bool,bool>::
ApplyAfter<void_(__cdecl*const_&)(FInstallBundleRequestResultInfo,bool,bool,bool,bool),FInstallBundleRequestResultInfo>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,bool,bool,bool,bool> *this,
          _func___cdecl_void_FInstallBundleRequestResultInfo_bool_bool_bool_bool **param_1,
          FInstallBundleRequestResultInfo *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  _func___cdecl_void_FInstallBundleRequestResultInfo_bool_bool_bool_bool *p_Var5;
  FInstallBundleRequestResultInfo *pFVar6;
  FInstallBundleRequestResultInfo local_38;
  
  p_Var5 = *param_1;
  bVar1 = (bool)this->field_0x3;
  bVar2 = (bool)this->field_0x2;
  bVar3 = (bool)this->field_0x1;
  bVar4 = *(bool *)this;
  pFVar6 = FInstallBundleRequestResultInfo::FInstallBundleRequestResultInfo(&local_38,param_2);
  (*p_Var5)(pFVar6,bVar4,bVar3,bVar2,bVar1);
  return;
}

