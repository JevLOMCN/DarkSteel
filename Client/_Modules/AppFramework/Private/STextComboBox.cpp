// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// ~STextComboBox @ 142f3ff40

void __thiscall STextComboBox::~STextComboBox(STextComboBox *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Font).Getter);
  pvVar1 = *(void **)&(this->Font).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
            (&this->SelectionChanged);
  TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::~TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>
            (&this->StringCombo);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->Strings).AllocatorInstance.Data,
             (this->Strings).ArrayNum);
  pFVar2 = (this->Strings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(&this->SelectedItem);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetTextLabelForItem);
  pvVar1 = *(void **)&(this->GetTextLabelForItem).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GetTextLabelForItem);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

