// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 1

// operator() @ 141e13350

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(bool,FString_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(bool,FString_const_&)>
             *this,bool param_1,FString *param_2)

{
  TFunctionStorage<1> *pTVar1;
  _func___cdecl_void_void_ptr_bool_ptr_FString_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<1> *pTVar4;
  bool local_res10 [8];
  
  local_res10[0] = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<1> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<1> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,local_res10,param_2);
  return;
}

