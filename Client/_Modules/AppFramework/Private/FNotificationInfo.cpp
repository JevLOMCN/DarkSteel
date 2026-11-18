// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// FNotificationInfo @ 14305c790

/* WARNING: Enum "Type": Some values do not have unique names */

FNotificationInfo * __thiscall
FNotificationInfo::FNotificationInfo
          (FNotificationInfo *this,TSharedPtr<INotificationWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->ContentWidget).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ContentWidget).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::FText(&(this->Text).Value);
  (this->Text).bIsSet = false;
  *(undefined8 *)&(this->Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Text).Getter = 0;
  *(undefined8 *)&(this->Text).Getter.field_0x8 = 0;
  FText::FText(&(this->SubText).Value);
  (this->SubText).bIsSet = false;
  *(undefined8 *)&(this->SubText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SubText).Getter = 0;
  *(undefined8 *)&(this->SubText).Getter.field_0x8 = 0;
  (this->ButtonDetails).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonDetails).ArrayNum = 0;
  (this->ButtonDetails).ArrayMax = 0;
  this->Image = (FSlateBrush *)0x0;
  this->FadeInDuration = 0.5;
  this->FadeOutDuration = 2.0;
  this->ExpireDuration = 1.0;
  this->bUseThrobber = false;
  this->bUseSuccessFailIcons = false;
  this->bUseLargeFont = false;
  this->bUseCopyToClipboard = false;
  this->bFireAndForget = true;
  (this->CheckBoxState).Value = Unchecked;
  (this->CheckBoxState).bIsSet = true;
  (this->WidthOverride).Size = 320.0;
  *(undefined8 *)&(this->CheckBoxState).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CheckBoxState).Getter = 0;
  *(undefined8 *)&(this->CheckBoxState).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->CheckBoxStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->CheckBoxStateChanged = 0;
  *(undefined8 *)&(this->CheckBoxStateChanged).field_0x8 = 0;
  FText::FText(&(this->CheckBoxText).Value);
  (this->CheckBoxText).bIsSet = false;
  *(undefined8 *)&(this->CheckBoxText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CheckBoxText).Getter = 0;
  *(undefined8 *)&(this->CheckBoxText).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->Hyperlink).field_0x10 = 0;
  *(undefined8 *)&this->Hyperlink = 0;
  *(undefined8 *)&(this->Hyperlink).field_0x8 = 0;
  FText::FText(&(this->HyperlinkText).Value);
  (this->HyperlinkText).bIsSet = false;
  *(undefined8 *)&(this->HyperlinkText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->HyperlinkText).Getter = 0;
  *(undefined8 *)&(this->HyperlinkText).Getter.field_0x8 = 0;
  (this->ForWindow).Object = (SWindow *)0x0;
  (this->ForWindow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bAllowThrottleWhenFrameRateIsLow = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

