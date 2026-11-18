// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TOptional<float>___cdecl(void)> @ 142f39740

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TOptional<float>___cdecl(void)>::
~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TOptional<float>___cdecl(void)>
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TOptional<float>___cdecl(void)>
           *this)

{
  TFunctionStorage<0> *pTVar1;
  TFunctionStorage<0> *pTVar2;
  
  if (this->Callable != (_func___cdecl_TOptional<float>_void_ptr *)0x0) {
    pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
    pTVar2 = &this->Storage;
    if (pTVar1 != (TFunctionStorage<0> *)0x0) {
      pTVar2 = pTVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000142f39758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pTVar2 + 0x10))();
    return;
  }
  return;
}

// ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)> @ 142f39770

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>::
~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>
          (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>
           *this)

{
  TFunctionStorage<0> *pTVar1;
  TFunctionStorage<0> *pTVar2;
  
  if (this->Callable != (_func___cdecl_EVisibility_void_ptr *)0x0) {
    pTVar1 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
    pTVar2 = &this->Storage;
    if (pTVar1 != (TFunctionStorage<0> *)0x0) {
      pTVar2 = pTVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000142f39788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pTVar2 + 0x10))();
    return;
  }
  return;
}

