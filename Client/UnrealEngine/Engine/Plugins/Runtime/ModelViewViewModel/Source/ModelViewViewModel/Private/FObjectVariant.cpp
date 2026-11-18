// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// FObjectVariant @ 14a73f520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FObjectVariant * __thiscall
UE::MVVM::FObjectVariant::FObjectVariant(FObjectVariant *this,UObject *param_1)

{
  undefined1 auStack_48 [32];
  TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
  local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this->field_0x10 = 0;
  local_28.TypeIndex = '\x02';
  local_28._padding_ = (longlong)param_1;
  TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
  ::operator=((TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
               *)this,&local_28);
  return this;
}

