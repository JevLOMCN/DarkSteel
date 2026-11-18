// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 4

// TAttribute<FText> @ 14238d650

TAttribute<FText> * __thiscall
TAttribute<FText>::TAttribute<FText>(TAttribute<FText> *this,FText *param_1)

{
  FText::FText(&this->Value,param_1);
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<FText> @ 14238d680

TAttribute<FText> * __thiscall TAttribute<FText>::TAttribute<FText>(TAttribute<FText> *this)

{
  FText::FText(&this->Value);
  this->bIsSet = false;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// ~TAttribute<FText> @ 14238dc50

void __thiscall TAttribute<FText>::~TAttribute<FText>(TAttribute<FText> *this)

{
  ITextData *pIVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pIVar1 = (this->Value).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014238dc72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// Create @ 14238f000

TAttribute<FText> * __cdecl
TAttribute<FText>::Create
          (TAttribute<FText> *__return_storage_ptr__,
          TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  FText::FText(&__return_storage_ptr__->Value);
  __return_storage_ptr__->bIsSet = true;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>(&__return_storage_ptr__->Getter,param_1)
  ;
  return __return_storage_ptr__;
}

