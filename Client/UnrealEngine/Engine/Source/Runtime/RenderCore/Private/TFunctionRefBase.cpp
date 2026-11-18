// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// operator() @ 145df6420

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(void_const_*,unsigned___int64)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(void_const_*,unsigned___int64)>
             *this,void *param_1,ulong64 param_2)

{
  TFunctionStorage<1> *pTVar1;
  _func___cdecl_void_void_ptr_void_ptr_ptr_ulong64_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<1> *pTVar4;
  void *local_res10;
  ulong64 local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<1> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<1> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,&local_res10,local_res18);
  return;
}

