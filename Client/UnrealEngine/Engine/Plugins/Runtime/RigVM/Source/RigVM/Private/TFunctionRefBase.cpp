// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// operator() @ 14a0c9bb0

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)>
             *this,TRigVMTypeIndex *param_1,FRigVMRegistryHandle *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr_TRigVMTypeIndex_ptr_FRigVMRegistryHandle_ptr *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  UNRECOVERED_JUMPTABLE = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014a0c9c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*UNRECOVERED_JUMPTABLE)(pvVar3,param_1,param_2);
  return bVar2;
}

// operator() @ 14a0c9c20

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,bool___cdecl(void_const_*,void_const_*)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,bool___cdecl(void_const_*,void_const_*)>
             *this,void *param_1,void *param_2)

{
  bool bVar1;
  void *local_res10;
  void *local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  bVar1 = (*this->Callable)((this->Storage).Ptr,&local_res10,local_res18);
  return bVar1;
}

