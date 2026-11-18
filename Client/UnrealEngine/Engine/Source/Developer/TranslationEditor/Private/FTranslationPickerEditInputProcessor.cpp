// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 4

// ~FTranslationPickerEditInputProcessor @ 146b99080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTranslationPickerEditInputProcessor::~FTranslationPickerEditInputProcessor
          (FTranslationPickerEditInputProcessor *this)

{
  this->_padding_ = (longlong)&___7IInputProcessor__6B_;
  return;
}

// GetDebugName @ 146bac460

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall
FTranslationPickerEditInputProcessor::GetDebugName(FTranslationPickerEditInputProcessor *this)

{
  return L"TranslationPicker";
}

// HandleKeyDownEvent @ 146bb0810

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTranslationPickerEditInputProcessor::HandleKeyDownEvent
          (FTranslationPickerEditInputProcessor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  STranslationPickerEditWindow *this_00;
  bool bVar3;
  FReply local_178;
  FReply local_c0;
  
  if (this->Owner == (STranslationPickerEditWindow *)0x0) {
    return false;
  }
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar1 == EKeys::Escape.KeyName) {
    this_00 = this->Owner;
    TranslationPickerManager::RemoveOverlay();
    STranslationPickerEditWindow::Close(this_00,&local_178);
    FReply::~FReply(&local_178);
    FReply::FReply(&local_c0,true);
    FReply::~FReply(&local_c0);
    bVar3 = true;
  }
  else if (FVar1 == EKeys::Enter.KeyName) {
    STranslationPickerEditWindow::Close(this->Owner,&local_c0);
    FReply::~FReply(&local_c0);
    TranslationPickerManager::OpenPickerWindow();
    FReply::FReply(&local_178,true);
    FReply::~FReply(&local_178);
    bVar3 = true;
  }
  else if (FVar1 == EKeys::BackSpace.KeyName) {
    TranslationPickerManager::bDrawBoxes = TranslationPickerManager::bDrawBoxes == false;
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar3;
}

// Tick @ 146bc1590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTranslationPickerEditInputProcessor::Tick
          (FTranslationPickerEditInputProcessor *this,float param_1,FSlateApplication *param_2,
          TSharedRef<ICursor,1> *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

