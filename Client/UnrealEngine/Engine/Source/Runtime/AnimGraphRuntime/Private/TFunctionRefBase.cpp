// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// operator() @ 146410670

float __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,float___cdecl(FRBFEntry_const_&,FRBFEntry_const_&)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,float___cdecl(FRBFEntry_const_&,FRBFEntry_const_&)>
             *this,FRBFEntry *param_1,FRBFEntry *param_2)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_float_void_ptr_FRBFEntry_ptr_FRBFEntry_ptr *UNRECOVERED_JUMPTABLE;
  void *pvVar2;
  TFunctionStorage<0> *pTVar3;
  float fVar4;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  UNRECOVERED_JUMPTABLE = this->Callable;
  pTVar3 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar3 = pTVar1;
  }
  pvVar2 = (void *)(**(code **)(*(longlong *)pTVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001464106cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (*UNRECOVERED_JUMPTABLE)(pvVar2,param_1,param_2);
  return fVar4;
}

