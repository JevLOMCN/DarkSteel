// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 11

// TSharedPtr<FUIActionBinding,1><FUIActionBinding> @ 14a78c3d0

TSharedPtr<FUIActionBinding,1> * __thiscall
TSharedPtr<FUIActionBinding,1>::TSharedPtr<FUIActionBinding,1><FUIActionBinding>
          (TSharedPtr<FUIActionBinding,1> *this,TRawPtrProxy<FUIActionBinding> *param_1)

{
  FUIActionBinding *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFUIActionBinding__U__DefaultDeleter_UFUIActionBinding___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FCarouselDisplayItem> @ 14a78c880

TSharedPtr<FCarouselDisplayItem,1> * __thiscall
TSharedPtr<FCarouselDisplayItem,1>::operator=<FCarouselDisplayItem>
          (TSharedPtr<FCarouselDisplayItem,1> *this,TRawPtrProxy<FCarouselDisplayItem> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FCarouselDisplayItem *pFVar4;
  FCarouselDisplayItem *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FCarouselDisplayItem,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFCarouselDisplayItem__U__DefaultDeleter_UFCarouselDisplayItem___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FCarouselDisplayItem *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = pFVar4;
    local_18.Object = (FCarouselDisplayItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// operator-> @ 14a7b4930

FUIActionBinding * __thiscall
TSharedPtr<FUIActionBinding,1>::operator->(TSharedPtr<FUIActionBinding,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FUIActionBinding *pFVar3;
  
  if (this->Object != (FUIActionBinding *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUIActionBinding *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a7b4980

FActivatableTreeRoot * __thiscall
TSharedPtr<FActivatableTreeRoot,1>::operator->(TSharedPtr<FActivatableTreeRoot,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FActivatableTreeRoot *pFVar3;
  
  if (this->Object != (FActivatableTreeRoot *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FActivatableTreeRoot *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a7b49d0

FPersistentActionCollection * __thiscall
TSharedPtr<FPersistentActionCollection,1>::operator->
          (TSharedPtr<FPersistentActionCollection,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPersistentActionCollection *pFVar3;
  
  if (this->Object != (FPersistentActionCollection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPersistentActionCollection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14a7b4a20

ITableRow * __thiscall TSharedPtr<ITableRow,1>::operator->(TSharedPtr<ITableRow,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ITableRow *pIVar3;
  
  if (this->Object != (ITableRow *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ITableRow *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14a7b4a70

SCommonAnimatedSwitcher * __thiscall
TSharedPtr<SCommonAnimatedSwitcher,1>::operator->(TSharedPtr<SCommonAnimatedSwitcher,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SCommonAnimatedSwitcher *pSVar3;
  
  if (this->Object != (SCommonAnimatedSwitcher *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SCommonAnimatedSwitcher *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14a7b4ac0

SImage * __thiscall TSharedPtr<SImage,1>::operator->(TSharedPtr<SImage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SImage *pSVar3;
  
  if (this->Object != (SImage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SImage *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14a7b4b10

SScaleBox * __thiscall TSharedPtr<SScaleBox,1>::operator->(TSharedPtr<SScaleBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SScaleBox *pSVar3;
  
  if (this->Object != (SScaleBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SScaleBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14a823100

TSharedRef<SCommonButton,1> * __thiscall
TSharedPtr<SCommonButton,1>::ToSharedRef
          (TSharedPtr<SCommonButton,1> *this,TSharedRef<SCommonButton,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SCommonButton,1> *pTVar4;
  
  if (this->Object == (SCommonButton *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SCommonButton,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SCommonButton *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SCommonButton,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14a8231a0

TSharedRef<SLoadGuard,1> * __thiscall
TSharedPtr<SLoadGuard,1>::ToSharedRef
          (TSharedPtr<SLoadGuard,1> *this,TSharedRef<SLoadGuard,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SLoadGuard,1> *pTVar4;
  
  if (this->Object == (SLoadGuard *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SLoadGuard,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (SLoadGuard *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SLoadGuard,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

