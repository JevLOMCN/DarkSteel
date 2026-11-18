// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// ~TFunction<TOptional<float>___cdecl(void)> @ 142f396c0

void __thiscall
TFunction<TOptional<float>___cdecl(void)>::~TFunction<TOptional<float>___cdecl(void)>
          (TFunction<TOptional<float>___cdecl(void)> *this)

{
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TOptional<float>___cdecl(void)>
  ::
  ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TOptional<float>___cdecl(void)>
            ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,TOptional<float>___cdecl(void)>
              *)this);
  return;
}

// ~TFunction<FText___cdecl(void)> @ 142f396e0

void __thiscall
TFunction<FText___cdecl(void)>::~TFunction<FText___cdecl(void)>
          (TFunction<FText___cdecl(void)> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000142f396f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction<enum_ECheckBoxState___cdecl(void)> @ 142f39710

void __thiscall
TFunction<enum_ECheckBoxState___cdecl(void)>::~TFunction<enum_ECheckBoxState___cdecl(void)>
          (void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000142f39728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

