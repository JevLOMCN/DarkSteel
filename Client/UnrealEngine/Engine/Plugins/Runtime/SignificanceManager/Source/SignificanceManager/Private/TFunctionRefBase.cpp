// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignificanceManager
// Functions: 1

// operator() @ 14e2a1810

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(USignificanceManager::FManagedObjectInfo_*,float,float,bool)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(USignificanceManager::FManagedObjectInfo_*,float,float,bool)>
             *this,FManagedObjectInfo *param_1,float param_2,float param_3,bool param_4)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_FManagedObjectInfo_ptr_ptr_float_ptr_float_ptr_bool_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  FManagedObjectInfo *local_res10;
  float local_res18 [2];
  float local_res20 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,&local_res10,local_res18,local_res20,&param_4);
  return;
}

