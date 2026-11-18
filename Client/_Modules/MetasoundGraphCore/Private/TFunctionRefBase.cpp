// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// operator() @ 14ad41fd0

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName_const_&,Metasound::FInputVertexInterfaceData_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName_const_&,Metasound::FInputVertexInterfaceData_const_&)>
             *this,FName *param_1,FInputVertexInterfaceData *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_FName_ptr_FInputVertexInterfaceData_ptr *UNRECOVERED_JUMPTABLE;
  void *pvVar2;
  TFunctionStorage<0> *pTVar3;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  UNRECOVERED_JUMPTABLE = this->Callable;
  pTVar3 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar3 = pTVar1;
  }
  pvVar2 = (void *)(**(code **)(*(longlong *)pTVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014ad4202d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pvVar2,param_1,param_2);
  return;
}

// operator() @ 14ad42040

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName_const_&,Metasound::FOutputVertexInterfaceData_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName_const_&,Metasound::FOutputVertexInterfaceData_const_&)>
             *this,FName *param_1,FOutputVertexInterfaceData *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_FName_ptr_FOutputVertexInterfaceData_ptr *UNRECOVERED_JUMPTABLE;
  void *pvVar2;
  TFunctionStorage<0> *pTVar3;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  UNRECOVERED_JUMPTABLE = this->Callable;
  pTVar3 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar3 = pTVar1;
  }
  pvVar2 = (void *)(**(code **)(*(longlong *)pTVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014ad4209d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pvVar2,param_1,param_2);
  return;
}

