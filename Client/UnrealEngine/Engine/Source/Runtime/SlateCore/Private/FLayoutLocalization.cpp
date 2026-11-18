// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// GetLocalizedLayoutDirection @ 14250e1c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

EFlowDirection __cdecl FLayoutLocalization::GetLocalizedLayoutDirection(void)

{
  FCulture *this;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  EFlowDirection EVar4;
  FInternationalization *pFVar5;
  
  if (GSlateEnableLayoutLocalization == 0) {
    return LeftToRight;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FrameCoherentDirection.FrameSet = GFrameCounter;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((FrameCoherentDirection.Value.bIsSet == false) ||
     (FrameCoherentDirection.FrameSet != GFrameCounter)) {
    pFVar5 = FInternationalization::Get();
    if ((pFVar5->CurrentLanguage).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    this = (pFVar5->CurrentLanguage).Object;
    pTVar1 = (pFVar5->CurrentLanguage).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    FrameCoherentDirection.Value.TypedValue = FCulture::IsRightToLeft(this);
    FrameCoherentDirection.FrameSet = GFrameCounter;
    FrameCoherentDirection.Value.bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (FrameCoherentDirection.FrameSet != GFrameCounter) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameSet == GFrameCounter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameValue.h"
                         ,0x5a,L"Cannot get value on a different frame");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
  }
  if (FrameCoherentDirection.Value.bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return FrameCoherentDirection.Value.TypedValue;
}

