// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 1

// operator() @ 144554020

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FIcmpEchoResult)>::
operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FIcmpEchoResult)>
           *this,FIcmpEchoResult *param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_FIcmpEchoResult_ptr *p_Var2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  TFunctionStorage<0> *pTVar5;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar5 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar5 = pTVar1;
  }
  pvVar4 = (void *)(**(code **)(*(longlong *)pTVar5 + 8))();
  (*p_Var2)(pvVar4,param_1);
  pFVar3 = (param_1->ReplyFrom).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->ResolvedAddress).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

