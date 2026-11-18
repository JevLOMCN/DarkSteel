// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ~TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_> @ 148ea68d0

void __thiscall
TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>
::
~TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>
          (TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x8);
  return;
}

// ~TTuple<wchar_t_const_*,wchar_t_const_*,TFunction<void___cdecl(FString)>_> @ 149279ae0

void __thiscall
TTuple<wchar_t_const_*,wchar_t_const_*,TFunction<void___cdecl(FString)>_>::
~TTuple<wchar_t_const_*,wchar_t_const_*,TFunction<void___cdecl(FString)>_>
          (TTuple<wchar_t_const_*,wchar_t_const_*,TFunction<void___cdecl(FString)>_> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    plVar1 = (longlong *)&this->field_0x20;
    if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x38;
    }
                    /* WARNING: Could not recover jumptable at 0x000149279af9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TTuple<FString,TFunction<FString___cdecl(FNiagaraSystemInstance_*)>_> @ 149279b10

void __thiscall
TTuple<FString,TFunction<FString___cdecl(FNiagaraSystemInstance_*)>_>::
~TTuple<FString,TFunction<FString___cdecl(FNiagaraSystemInstance_*)>_>
          (TTuple<FString,TFunction<FString___cdecl(FNiagaraSystemInstance_*)>_> *this)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0x10 != 0) {
    plVar1 = (longlong *)&this->field_0x20;
    if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

