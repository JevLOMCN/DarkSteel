// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 2

// FMenuEntryParams @ 142c37980

FMenuEntryParams * __thiscall FMenuEntryParams::FMenuEntryParams(FMenuEntryParams *this)

{
  FUIAction::FUIAction((FUIAction *)this);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  FText::FText(&(this->LabelOverride).Value);
  (this->LabelOverride).bIsSet = false;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  FText::FText(&(this->ToolTipOverride).Value);
  (this->ToolTipOverride).bIsSet = false;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  FText::FText(&(this->InputBindingOverride).Value);
  (this->InputBindingOverride).bIsSet = false;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  (this->Visibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->Visibility).bIsSet = false;
  *(undefined8 *)&(this->Visibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Visibility).Getter = 0;
  *(undefined8 *)&(this->Visibility).Getter.field_0x8 = 0;
  FSlateIcon::FSlateIcon(&this->IconOverride);
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  (this->EntryWidget).Object = (SWidget *)0x0;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bOpenSubMenuOnClick = false;
  this->bCloseSelfOnly = false;
  (this->Extender).Object = (FExtender *)0x0;
  (this->Extender).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TutorialHighlightName).ComparisonIndex = 0;
  (this->TutorialHighlightName).Number = 0;
  this->bIsSubMenu = false;
  this->bIsRecursivelySearchable = true;
  this->bShouldCloseWindowAfterMenuSelection = true;
  *(undefined1 *)&this->_padding_ = 4;
  return this;
}

// ~FMenuEntryParams @ 142c3bdf0

void __thiscall FMenuEntryParams::~FMenuEntryParams(FMenuEntryParams *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Extender).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EntryWidget).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MenuBuilder);
  pvVar1 = *(void **)&(this->MenuBuilder).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MenuBuilder);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EntryBuilder);
  pvVar1 = *(void **)&(this->EntryBuilder).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EntryBuilder);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Visibility).Getter);
  pvVar1 = *(void **)&(this->Visibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Visibility).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->InputBindingOverride).Getter);
  pvVar1 = *(void **)&(this->InputBindingOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->InputBindingOverride).Getter);
  pIVar2 = (this->InputBindingOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTipOverride).Getter);
  pvVar1 = *(void **)&(this->ToolTipOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTipOverride).Getter);
  pIVar2 = (this->ToolTipOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelOverride).Getter);
  pvVar1 = *(void **)&(this->LabelOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelOverride).Getter);
  pIVar2 = (this->LabelOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FUIAction::~FUIAction((FUIAction *)this);
  return;
}

