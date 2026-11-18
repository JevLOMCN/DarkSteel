// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// operator() @ 14ac56730

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TSharedPtr<UE::Mutable::Private::FImage,1>)>
             *this,TSharedPtr<UE::Mutable::Private::FImage,1> *param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_TSharedPtr<UE::Mutable::Private::FImage,1>_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14ac56790

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(bool)>::operator()
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(bool)>
           *this,bool param_1)

{
  TFunctionStorage<0> *pTVar1;
  _func___cdecl_void_void_ptr_bool_ptr *p_Var2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  bool local_res10 [24];
  
  local_res10[0] = param_1;
  CheckCallable(this->Callable);
  pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  p_Var2 = this->Callable;
  pTVar4 = &this->Storage;
  if (pTVar1 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar1;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var2)(pvVar3,local_res10);
  return;
}

