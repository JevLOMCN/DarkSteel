// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 1

// operator() @ 146b02040

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>::operator()
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
           *this)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr *UNRECOVERED_JUMPTABLE;
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
                    /* WARNING: Could not recover jumptable at 0x000146b0207d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*UNRECOVERED_JUMPTABLE)(pvVar3);
  return bVar2;
}

