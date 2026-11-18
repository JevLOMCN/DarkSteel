// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// operator() @ 14a8afa10

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(float)>::operator()
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(float)>
           *this,float param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr_float_ptr *p_Var2;
  bool bVar3;
  void *pvVar4;
  TFunctionStorage<0> *pTVar5;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar4 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  bVar3 = (*p_Var2)(pvVar4,local_res10);
  return bVar3;
}

