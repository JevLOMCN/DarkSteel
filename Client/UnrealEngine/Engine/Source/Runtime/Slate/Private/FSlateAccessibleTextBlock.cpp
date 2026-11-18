// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// GetText @ 14287bc60

FString * __thiscall FSlateAccessibleTextBlock::GetText(FSlateAccessibleTextBlock *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  SWidget *pSVar5;
  SWidget *pSVar6;
  SWidget *pSVar7;
  bool bVar8;
  
  if (((*(longlong *)&this->field_0x18 == 0) || (*(longlong *)&this->field_0x20 == 0)) ||
     (*(int *)(*(longlong *)&this->field_0x20 + 8) < 1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FSlateAccessibleTextBlock::GetText'::__l7::
             _dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
      return &::EmptyString;
    }
    return &::EmptyString;
  }
  pSVar5 = (SWidget *)0x0;
  pSVar7 = *(SWidget **)&this->field_0x20;
  pSVar6 = pSVar7;
  if (pSVar7 != (SWidget *)0x0) {
    iVar2 = (int)pSVar7->_padding_;
    do {
      pSVar6 = pSVar5;
      if (iVar2 == 0) goto LAB_14287bcc1;
      LOCK();
      iVar3 = (int)pSVar7->_padding_;
      bVar8 = iVar2 == iVar3;
      if (bVar8) {
        *(int *)&pSVar7->_padding_ = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar8);
    pSVar5 = *(SWidget **)&this->field_0x18;
    LOCK();
    *(int *)&pSVar7->_padding_ = (int)pSVar7->_padding_ + 1;
    UNLOCK();
    pSVar6 = pSVar7;
    if (pSVar5 != (SWidget *)0x0) goto LAB_14287bce7;
  }
LAB_14287bcc1:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar7 = pSVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
LAB_14287bce7:
  if ((pSVar5[2].Tag.Number & 1) != 0) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)(pSVar5 + 1),pSVar5,Member);
  }
  pFVar4 = FText::ToString((FText *)(pSVar5 + 1));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return pFVar4;
}

