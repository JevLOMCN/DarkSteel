// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 16

// TSharedPtr<FText,1><FText> @ 142d53100

TSharedPtr<FText,1> * __thiscall
TSharedPtr<FText,1>::TSharedPtr<FText,1><FText>
          (TSharedPtr<FText,1> *this,TRawPtrProxy<FText> *param_1)

{
  FText *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFText__U__DefaultDeleter_VFText___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FText> @ 142d531d0

TSharedPtr<FText,1> * __thiscall
TSharedPtr<FText,1>::operator=<FText>(TSharedPtr<FText,1> *this,TRawPtrProxy<FText> *param_1)

{
  FText *pFVar1;
  TSharedPtr<FText,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFText__U__DefaultDeleter_VFText___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 142d68b60

TSharedPtr<CheckBoxList::FItemPair,1> * __thiscall
TSharedPtr<CheckBoxList::FItemPair,1>::operator=
          (TSharedPtr<CheckBoxList::FItemPair,1> *this,
          TSharedPtr<CheckBoxList::FItemPair,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FItemPair *pFVar2;
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

// operator= @ 142d68bb0

TSharedPtr<FText,1> * __thiscall
TSharedPtr<FText,1>::operator=(TSharedPtr<FText,1> *this,TSharedPtr<FText,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FText *pFVar2;
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

// operator-> @ 142d69520

SListView<TSharedPtr<FText,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<FText,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedPtr<FText,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<FText,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedPtr<FText,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<FText,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142d69570

SListView<TSharedRef<CheckBoxList::FItemPair,1>_> * __thiscall
TSharedPtr<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142d695c0

SComplexGradient * __thiscall
TSharedPtr<SComplexGradient,1>::operator->(TSharedPtr<SComplexGradient,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SComplexGradient *pSVar3;
  
  if (this->Object != (SComplexGradient *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SComplexGradient *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142d69610

SFilterSearchBoxImpl * __thiscall
TSharedPtr<SFilterSearchBoxImpl,1>::operator->(TSharedPtr<SFilterSearchBoxImpl,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SFilterSearchBoxImpl *pSVar3;
  
  if (this->Object != (SFilterSearchBoxImpl *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SFilterSearchBoxImpl *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142d69660

SHeaderRow * __thiscall TSharedPtr<SHeaderRow,1>::operator->(TSharedPtr<SHeaderRow,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SHeaderRow *pSVar3;
  
  if (this->Object != (SHeaderRow *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SHeaderRow *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142d696b0

/* WARNING: Enum "Type": Some values do not have unique names */

SMenuAnchor * __thiscall TSharedPtr<SMenuAnchor,1>::operator->(TSharedPtr<SMenuAnchor,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SMenuAnchor *pSVar3;
  
  if (this->Object != (SMenuAnchor *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SMenuAnchor *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142d69700

SSidebarButtonText * __thiscall
TSharedPtr<SSidebarButtonText,1>::operator->(TSharedPtr<SSidebarButtonText,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSidebarButtonText *pSVar3;
  
  if (this->Object != (SSidebarButtonText *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSidebarButtonText *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142d69750

SSidebarDrawer * __thiscall
TSharedPtr<SSidebarDrawer,1>::operator->(TSharedPtr<SSidebarDrawer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SSidebarDrawer *pSVar3;
  
  if (this->Object != (SSidebarDrawer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSidebarDrawer *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142d697a0

SWrapBox * __thiscall TSharedPtr<SWrapBox,1>::operator->(TSharedPtr<SWrapBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SWrapBox *pSVar3;
  
  if (this->Object != (SWrapBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWrapBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 142dda990

TSharedRef<SCheckBox,1> * __thiscall
TSharedPtr<SCheckBox,1>::ToSharedRef
          (TSharedPtr<SCheckBox,1> *this,TSharedRef<SCheckBox,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SCheckBox,1> *pTVar4;
  
  if (this->Object == (SCheckBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SCheckBox,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SCheckBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SCheckBox,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142ddaa30

TSharedRef<SHorizontalBox,1> * __thiscall
TSharedPtr<SHorizontalBox,1>::ToSharedRef
          (TSharedPtr<SHorizontalBox,1> *this,TSharedRef<SHorizontalBox,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SHorizontalBox,1> *pTVar4;
  
  if (this->Object == (SHorizontalBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SHorizontalBox,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SHorizontalBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SHorizontalBox,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142ddaad0

TSharedRef<SSidebarButtonText,1> * __thiscall
TSharedPtr<SSidebarButtonText,1>::ToSharedRef
          (TSharedPtr<SSidebarButtonText,1> *this,
          TSharedRef<SSidebarButtonText,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SSidebarButtonText,1> *pTVar4;
  
  if (this->Object == (SSidebarButtonText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSidebarButtonText,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SSidebarButtonText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SSidebarButtonText,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

