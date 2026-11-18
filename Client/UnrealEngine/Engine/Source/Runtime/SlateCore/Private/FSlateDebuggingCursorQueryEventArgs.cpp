// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateDebuggingCursorQueryEventArgs @ 14242d410

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDebuggingCursorQueryEventArgs * __thiscall
FSlateDebuggingCursorQueryEventArgs::FSlateDebuggingCursorQueryEventArgs
          (FSlateDebuggingCursorQueryEventArgs *this,TSharedPtr<SWidget_const_,1> *param_1,
          FCursorReply *param_2)

{
  this->WidgetOverridingCursor = param_1;
  this->Reply = param_2;
  return this;
}

// ToText @ 1424534d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FSlateDebuggingCursorQueryEventArgs::ToText
          (FSlateDebuggingCursorQueryEventArgs *this,FText *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  FString *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  UEnum *this_00;
  undefined1 local_res8 [8];
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  pFVar4 = FReflectionMetaData::GetWidgetDebugInfo
                     ((FString *)&local_58,this->WidgetOverridingCursor->Object);
  FText::FromString(&local_68,pFVar4);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_58.TextData.Reference);
  }
  FText::FText(__return_storage_ptr__);
  pTVar2 = (this->Reply->CursorWidget).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->Reply->CursorWidget).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (pSVar3 == (SWidget *)0x0) {
    if (iVar1 < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&InputEventFormat,L"SlateDebugger",L"CursorChangedToCursor",
                   L"Cursor Changed: To Type: {0} (By Widget: {1})");
        atexit(`FSlateDebuggingCursorQueryEventArgs::ToText'::__l7::
               _dynamic_atexit_destructor_for__InputEventFormat__);
        _Init_thread_footer(&::_TSS1);
      }
    }
    local_58.TextData.Reference = local_68.TextData.Reference;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 8))
                (local_68.TextData.Reference,local_res8);
    }
    local_58.Flags = local_68.Flags;
    this_00 = StaticEnum<enum_EMouseCursor::Type>();
    pFVar4 = UEnum::GetNameStringByValue
                       (this_00,(FString *)&local_48,(longlong)(int)this->Reply->MouseCursor);
    pFVar5 = FText::FromString(&local_18,pFVar4);
    pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_28,&InputEventFormat,Default);
    pFVar5 = FText::Format<FText,FText>(&local_38,pFVar6,pFVar5,&local_58);
    FText::operator=(__return_storage_ptr__,pFVar5);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
    }
  }
  else {
    if (iVar1 < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&InputEventFormat,L"SlateDebugger",L"CursorChangedToWidget",
                   L"{0} To Widget: {0} (Widget: {1})");
        atexit(`FSlateDebuggingCursorQueryEventArgs::ToText'::__l5::
               _dynamic_atexit_destructor_for__InputEventFormat__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_58.TextData.Reference = local_68.TextData.Reference;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 8))
                (local_68.TextData.Reference,local_res8);
    }
    local_58.Flags = local_68.Flags;
    pTVar2 = (this->Reply->CursorWidget).SharedReferenceCount.ReferenceController;
    pSVar3 = (this->Reply->CursorWidget).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4 = FReflectionMetaData::GetWidgetDebugInfo((FString *)&local_38,pSVar3);
    pFVar5 = FText::FromString(&local_28,pFVar4);
    pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_18,&InputEventFormat,Default);
    pFVar5 = FText::Format<FText,FText>(&local_48,pFVar6,pFVar5,&local_58);
    FText::operator=(__return_storage_ptr__,pFVar5);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

