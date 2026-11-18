// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 2

// FToolMenuEntryToolBarData @ 142c39d70

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntryToolBarData * __thiscall
FToolMenuEntryToolBarData::FToolMenuEntryToolBarData(FToolMenuEntryToolBarData *this)

{
  FText::FText((FText *)this);
  (this->LabelOverride).bIsSet = false;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  (this->StyleNameOverride).ComparisonIndex = 0;
  (this->StyleNameOverride).Number = 0;
  (this->BlockGroupName).ComparisonIndex = 0;
  (this->BlockGroupName).Number = 0;
  *(undefined8 *)&(this->ComboButtonContextMenuGenerator).OnGetContent = 0;
  *(undefined8 *)&(this->ComboButtonContextMenuGenerator).OnGetContent.field_0x8 = 0;
  *(undefined4 *)&(this->ComboButtonContextMenuGenerator).OnGetContent.field_0x10 = 0;
  *(undefined8 *)&(this->ComboButtonContextMenuGenerator).NewToolMenuWidget = 0;
  *(undefined8 *)&(this->ComboButtonContextMenuGenerator).NewToolMenuWidget.field_0x8 = 0;
  *(undefined4 *)&(this->ComboButtonContextMenuGenerator).NewToolMenuWidget.field_0x10 = 0;
  *(undefined8 *)&(this->ComboButtonContextMenuGenerator).NewToolMenu = 0;
  *(undefined8 *)&(this->ComboButtonContextMenuGenerator).NewToolMenu.field_0x8 = 0;
  *(undefined4 *)&(this->ComboButtonContextMenuGenerator).NewToolMenu.field_0x10 = 0;
  *(undefined8 *)&(this->ComboButtonContextMenuGenerator).NewMenuLegacy = 0;
  *(undefined8 *)&(this->ComboButtonContextMenuGenerator).NewMenuLegacy.field_0x8 = 0;
  *(undefined4 *)&(this->ComboButtonContextMenuGenerator).NewMenuLegacy.field_0x10 = 0;
  *(undefined8 *)&this->ConstructLegacy = 0;
  *(undefined8 *)&(this->ConstructLegacy).field_0x8 = 0;
  *(undefined4 *)&(this->ConstructLegacy).field_0x10 = 0;
  (this->OptionsDropdownData).Object = (FToolMenuEntryOptionsDropdownData *)0x0;
  (this->OptionsDropdownData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bSimpleComboBox = false;
  this->bIsFocusable = false;
  this->bForceSmallIcons = false;
  (this->PlacementOverride).Value = MenuPlacement_BelowAnchor;
  (this->PlacementOverride).bIsSet = false;
  *(undefined8 *)&(this->PlacementOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->PlacementOverride).Getter = 0;
  *(undefined8 *)&(this->PlacementOverride).Getter.field_0x8 = 0;
  (this->ResizeParams).ClippingPriority.Value = 0;
  (this->ResizeParams).ClippingPriority.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).ClippingPriority.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).ClippingPriority.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).ClippingPriority.Getter.field_0x8 = 0;
  (this->ResizeParams).AllowClipping.Value = false;
  (this->ResizeParams).AllowClipping.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).AllowClipping.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).AllowClipping.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).AllowClipping.Getter.field_0x8 = 0;
  (this->ResizeParams).VisibleInOverflow.Value = false;
  (this->ResizeParams).VisibleInOverflow.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).VisibleInOverflow.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).VisibleInOverflow.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).VisibleInOverflow.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.Allow.Value = false;
  (this->ResizeParams).Wrapping.Allow.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Allow.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Allow.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Allow.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.Priority.Value = 0;
  (this->ResizeParams).Wrapping.Priority.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Priority.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Priority.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Priority.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.Mode.Value = Preferred;
  (this->ResizeParams).Wrapping.Mode.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Mode.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Mode.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Mode.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.VerticalOverflowBehavior.bIsSet = false;
  (this->ResizeParams).Wrapping.ForceNewLine.bIsSet = false;
  (this->ActionOverride).bIsSet = false;
  return this;
}

// ~FToolMenuEntryToolBarData @ 142c3c490

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolMenuEntryToolBarData::~FToolMenuEntryToolBarData(FToolMenuEntryToolBarData *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  if ((this->ActionOverride).bIsSet != false) {
    FToolUIAction::~FToolUIAction(&(this->ActionOverride).TypedValue);
  }
  FMenuEntryResizeParams::~FMenuEntryResizeParams(&this->ResizeParams);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->PlacementOverride).Getter);
  pvVar1 = *(void **)&(this->PlacementOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PlacementOverride).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OptionsDropdownData).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ConstructLegacy);
  pvVar1 = *(void **)&(this->ConstructLegacy).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ConstructLegacy);
  FNewToolMenuChoice::~FNewToolMenuChoice(&this->ComboButtonContextMenuGenerator);
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
  return;
}

