// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// operator() @ 14337c1a0

TVector<double> * __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
             *this,TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_TVector<double>_void_ptr_int_ptr_TVector<double>_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  int local_res18 [2];
  
  local_res18[0] = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(__return_storage_ptr__,pvVar3,local_res18,param_2);
  return __return_storage_ptr__;
}

