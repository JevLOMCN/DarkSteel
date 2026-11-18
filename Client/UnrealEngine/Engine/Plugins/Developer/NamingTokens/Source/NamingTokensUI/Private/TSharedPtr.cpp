// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 23

// TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1><SNamingTokensEditableTextBox::FCursorTokenData> @ 14d0e88b0

TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> * __thiscall
TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::
TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1><SNamingTokensEditableTextBox::FCursorTokenData>
          (TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *this,
          TSharedRef<SNamingTokensEditableTextBox::FCursorTokenData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1><FNamingTokensStringSyntaxHighlighterMarshaller> @ 14d0e8960

TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1> * __thiscall
TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::
TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1><FNamingTokensStringSyntaxHighlighterMarshaller>
          (TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1> *this,
          TSharedRef<FNamingTokensStringSyntaxHighlighterMarshaller,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<ITextLayoutMarshaller,1><FNamingTokensStringSyntaxHighlighterMarshaller> @ 14d0e8990

TSharedPtr<ITextLayoutMarshaller,1> * __thiscall
TSharedPtr<ITextLayoutMarshaller,1>::
TSharedPtr<ITextLayoutMarshaller,1><FNamingTokensStringSyntaxHighlighterMarshaller>
          (TSharedPtr<ITextLayoutMarshaller,1> *this,
          TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (ITextLayoutMarshaller *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SWidget,1><SMultiLineEditableText> @ 14d0e89c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SMultiLineEditableText>
          (TSharedPtr<SWidget,1> *this,TSharedPtr<SMultiLineEditableText,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<IErrorReportingWidget,1><SPopupErrorText> @ 14d0e8a50

TSharedPtr<IErrorReportingWidget,1> * __thiscall
TSharedPtr<IErrorReportingWidget,1>::TSharedPtr<IErrorReportingWidget,1><SPopupErrorText>
          (TSharedPtr<IErrorReportingWidget,1> *this,TSharedRef<SPopupErrorText,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IErrorReportingWidget *pIVar2;
  
  pIVar2 = (IErrorReportingWidget *)&param_1->Object->_padding_;
  if (param_1->Object == (SPopupErrorText *)0x0) {
    pIVar2 = (IErrorReportingWidget *)0x0;
  }
  this->Object = pIVar2;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> @ 14d0ecba0

TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> * __thiscall
TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::
TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>
          (TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *this,FNullTag *param_1)

{
  this->Object = (FCursorTokenData *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FNamingTokenDataTreeItem,1> @ 14d0ecbc0

TSharedPtr<FNamingTokenDataTreeItem,1> * __thiscall
TSharedPtr<FNamingTokenDataTreeItem,1>::TSharedPtr<FNamingTokenDataTreeItem,1>
          (TSharedPtr<FNamingTokenDataTreeItem,1> *this,
          TSharedPtr<FNamingTokenDataTreeItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> @ 14d0ef3b0

void __thiscall
TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::
~TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>
          (TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<FNamingTokenDataTreeItem,1> @ 14d0ef3e0

void __thiscall
TSharedPtr<FNamingTokenDataTreeItem,1>::~TSharedPtr<FNamingTokenDataTreeItem,1>
          (TSharedPtr<FNamingTokenDataTreeItem,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1> @ 14d0ef3f0

void __thiscall
TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::
~TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>
          (TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SNamingTokenDataTreeViewWidget,1> @ 14d0ef420

void __thiscall
TSharedPtr<SNamingTokenDataTreeViewWidget,1>::~TSharedPtr<SNamingTokenDataTreeViewWidget,1>
          (TSharedPtr<SNamingTokenDataTreeViewWidget,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SPopupErrorText,1> @ 14d0ef430

void __thiscall
TSharedPtr<SPopupErrorText,1>::~TSharedPtr<SPopupErrorText,1>(TSharedPtr<SPopupErrorText,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// operator= @ 14d0f1100

TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> * __thiscall
TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator=
          (TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *this,
          TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FCursorTokenData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 14d0f1140

TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> * __thiscall
TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator=
          (TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *this,
          TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *param_1)

{
  FCursorTokenData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> local_18;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = this->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar1;
  (this->SharedReferenceCount).ReferenceController = pTVar2;
  ~TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>(&local_18);
  return this;
}

// operator= @ 14d0f1190

TSharedPtr<FNamingTokenDataTreeItem,1> * __thiscall
TSharedPtr<FNamingTokenDataTreeItem,1>::operator=
          (TSharedPtr<FNamingTokenDataTreeItem,1> *this,
          TSharedPtr<FNamingTokenDataTreeItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNamingTokenDataTreeItem *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 14d0f11e0

TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1> * __thiscall
TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::operator=
          (TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1> *this,
          TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FNamingTokensStringSyntaxHighlighterMarshaller *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 14d0f1220

TSharedPtr<IErrorReportingWidget,1> * __thiscall
TSharedPtr<IErrorReportingWidget,1>::operator=
          (TSharedPtr<IErrorReportingWidget,1> *this,TSharedPtr<IErrorReportingWidget,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (IErrorReportingWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14d0f1400

FCursorTokenData * __thiscall
TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1>::operator->
          (TSharedPtr<SNamingTokensEditableTextBox::FCursorTokenData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCursorTokenData *pFVar3;
  
  if (this->Object != (FCursorTokenData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCursorTokenData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d0f1450

FNamingTokenData * __thiscall
TSharedPtr<FNamingTokenData,1>::operator->(TSharedPtr<FNamingTokenData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNamingTokenData *pFVar3;
  
  if (this->Object != (FNamingTokenData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNamingTokenData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d0f14a0

FNamingTokenDataTreeItem * __thiscall
TSharedPtr<FNamingTokenDataTreeItem,1>::operator->(TSharedPtr<FNamingTokenDataTreeItem,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNamingTokenDataTreeItem *pFVar3;
  
  if (this->Object != (FNamingTokenDataTreeItem *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNamingTokenDataTreeItem *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d0f14f0

FNamingTokensStringSyntaxHighlighterMarshaller * __thiscall
TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1>::operator->
          (TSharedPtr<FNamingTokensStringSyntaxHighlighterMarshaller,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNamingTokensStringSyntaxHighlighterMarshaller *pFVar3;
  
  if (this->Object != (FNamingTokensStringSyntaxHighlighterMarshaller *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNamingTokensStringSyntaxHighlighterMarshaller *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d0f1540

SNamingTokenDataTreeViewWidget * __thiscall
TSharedPtr<SNamingTokenDataTreeViewWidget,1>::operator->
          (TSharedPtr<SNamingTokenDataTreeViewWidget,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SNamingTokenDataTreeViewWidget *pSVar3;
  
  if (this->Object != (SNamingTokenDataTreeViewWidget *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SNamingTokenDataTreeViewWidget *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14d11be10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SMultiLineEditableText,1> * __thiscall
TSharedPtr<SMultiLineEditableText,1>::ToSharedRef
          (TSharedPtr<SMultiLineEditableText,1> *this,
          TSharedRef<SMultiLineEditableText,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SMultiLineEditableText,1> *pTVar4;
  
  if (this->Object == (SMultiLineEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SMultiLineEditableText,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SMultiLineEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SMultiLineEditableText,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

