// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 1

// operator() @ 14e7f3b60

bool __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(TSharedRef<IBackChannelSocketConnection,1>)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(TSharedRef<IBackChannelSocketConnection,1>)>
             *this,TSharedRef<IBackChannelSocketConnection,1> *param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_bool_void_ptr_TSharedRef<IBackChannelSocketConnection,1>_ptr *p_Var2;
  bool bVar3;
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
  bVar3 = (*p_Var2)(pvVar4,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

