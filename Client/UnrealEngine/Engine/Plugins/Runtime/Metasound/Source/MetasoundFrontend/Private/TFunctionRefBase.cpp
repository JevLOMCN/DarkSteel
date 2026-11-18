// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// operator() @ 14ae5e580

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FName,FName)>::
operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FName,FName)>
           *this,FName param_1,FName param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr_FName_ptr_FName_ptr *p_Var2;
  bool bVar3;
  void *pvVar4;
  TFunctionStorage<0> *pTVar5;
  FName local_res10;
  FName local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar4 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  bVar3 = (*p_Var2)(pvVar4,&local_res10,local_res18);
  return bVar3;
}

