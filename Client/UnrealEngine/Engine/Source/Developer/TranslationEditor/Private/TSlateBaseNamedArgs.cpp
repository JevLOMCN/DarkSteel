// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 1

// Visibility @ 146bc3b30

FArguments * __thiscall
TSlateBaseNamedArgs<SButton>::Visibility
          (TSlateBaseNamedArgs<SButton> *this,TAttribute<EVisibility> *param_1)

{
  this->field_0x88 = (param_1->Value).Value.Value;
  this->field_0x89 = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return (FArguments *)this;
}

