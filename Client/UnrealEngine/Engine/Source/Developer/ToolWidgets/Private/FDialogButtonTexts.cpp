// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 2

// FDialogButtonTexts @ 142d62490

FDialogButtonTexts * __thiscall FDialogButtonTexts::FDialogButtonTexts(FDialogButtonTexts *this)

{
  FText::AsLocalizable_Advanced_LocText(&this->No,L"Dialogs",L"EAppReturnTypeNo",L"No");
  FText::AsLocalizable_Advanced_LocText(&this->Yes,L"Dialogs",L"EAppReturnTypeYes",L"Yes");
  FText::AsLocalizable_Advanced_LocText(&this->YesAll,L"Dialogs",L"EAppReturnTypeYesAll",L"Yes All")
  ;
  FText::AsLocalizable_Advanced_LocText(&this->NoAll,L"Dialogs",L"EAppReturnTypeNoAll",L"No All");
  FText::AsLocalizable_Advanced_LocText(&this->Cancel,L"Dialogs",L"EAppReturnTypeCancel",L"Cancel");
  FText::AsLocalizable_Advanced_LocText(&this->Ok,L"Dialogs",L"EAppReturnTypeOk",L"OK");
  FText::AsLocalizable_Advanced_LocText(&this->Retry,L"Dialogs",L"EAppReturnTypeRetry",L"Retry");
  FText::AsLocalizable_Advanced_LocText
            (&this->Continue,L"Dialogs",L"EAppReturnTypeContinue",L"Continue");
  return this;
}

// Get @ 142daa430

FDialogButtonTexts * __cdecl FDialogButtonTexts::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText(&ButtonTexts.No,L"Dialogs",L"EAppReturnTypeNo",L"No");
      FText::AsLocalizable_Advanced_LocText(&ButtonTexts.Yes,L"Dialogs",L"EAppReturnTypeYes",L"Yes")
      ;
      FText::AsLocalizable_Advanced_LocText
                (&ButtonTexts.YesAll,L"Dialogs",L"EAppReturnTypeYesAll",L"Yes All");
      FText::AsLocalizable_Advanced_LocText
                (&ButtonTexts.NoAll,L"Dialogs",L"EAppReturnTypeNoAll",L"No All");
      FText::AsLocalizable_Advanced_LocText
                (&ButtonTexts.Cancel,L"Dialogs",L"EAppReturnTypeCancel",L"Cancel");
      FText::AsLocalizable_Advanced_LocText(&ButtonTexts.Ok,L"Dialogs",L"EAppReturnTypeOk",L"OK");
      FText::AsLocalizable_Advanced_LocText
                (&ButtonTexts.Retry,L"Dialogs",L"EAppReturnTypeRetry",L"Retry");
      FText::AsLocalizable_Advanced_LocText
                (&ButtonTexts.Continue,L"Dialogs",L"EAppReturnTypeContinue",L"Continue");
      atexit(`FDialogButtonTexts::Get'::__l2::_dynamic_atexit_destructor_for__ButtonTexts__);
      _Init_thread_footer(&::_TSS0);
      return &ButtonTexts;
    }
  }
  return &ButtonTexts;
}

