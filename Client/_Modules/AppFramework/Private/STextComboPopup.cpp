// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// ~STextComboPopup @ 142f40010

void __thiscall STextComboPopup::~STextComboPopup(STextComboPopup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(&this->SelectedItem);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OkButton).SharedReferenceCount.ReferenceController);
  TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::~TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>
            (&this->StringCombo);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChosen);
  pvVar1 = *(void **)&(this->OnTextChosen).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChosen);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->Strings).AllocatorInstance.Data,
             (this->Strings).ArrayNum);
  pFVar2 = (this->Strings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

