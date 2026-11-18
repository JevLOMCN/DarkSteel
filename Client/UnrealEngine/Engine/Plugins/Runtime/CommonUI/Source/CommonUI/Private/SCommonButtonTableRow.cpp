// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 16

// Construct @ 14a7c4bb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SCommonButtonTableRow<UObject_*>::Construct
          (SCommonButtonTableRow<UObject_*> *this,FArguments *param_1,
          TSharedRef<STableViewBase,1> *param_2,UUserWidget *param_3,UListViewBase *param_4)

{
  undefined1 uVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FArguments *pFVar9;
  UClass *pUVar10;
  UButton *pUVar11;
  undefined1 local_res10 [8];
  FArguments local_2e8;
  
  pFVar9 = SObjectTableRow<UObject_*>::FArguments::FArguments(&local_2e8);
  pFVar9->_bAllowDragging = param_1->_bAllowDragging;
  pFVar9->_bAllowDragDrop = param_1->_bAllowDragDrop;
  pFVar9->_bAllowKeepPreselectedItems = param_1->_bAllowKeepPreselectedItems;
  TDelegate<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar9->_OnHovered,&param_1->_OnHovered);
  TDelegate<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar9->_OnUnhovered,&param_1->_OnUnhovered);
  TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,UUserWidget_&),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar9->_OnRowCanAcceptDrop,&param_1->_OnRowCanAcceptDrop);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,UUserWidget_&),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar9->_OnRowAcceptDrop,&param_1->_OnRowAcceptDrop);
  TDelegate<UDragDropOperation_*___cdecl(FGeometry_const_&,FPointerEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar9->_OnRowDragDetected,&param_1->_OnRowDragDetected);
  TDelegate<void___cdecl(FDragDropEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>::
  operator=(&pFVar9->_OnRowDragLeave,&param_1->_OnRowDragLeave);
  TDelegate<void___cdecl(FDragDropEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>::
  operator=(&pFVar9->_OnRowDragEnter,&param_1->_OnRowDragEnter);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar9->_OnRowDragCancelled,&param_1->_OnRowDragCancelled);
  pSVar2 = (param_1->_Content).Widget.Object;
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar9->_Content).Widget.Object = pSVar2;
  (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SObjectTableRow<UObject_*>::Construct
            ((SObjectTableRow<UObject_*> *)this,pFVar9,param_2,param_3,param_4);
  SObjectTableRow<UObject_*>::FArguments::~FArguments(&local_2e8);
  if (param_3 != (UUserWidget *)0x0) {
    pUVar10 = UCommonButtonBase::StaticClass();
    iVar8 = (int)pUVar10->_padding_;
    if ((iVar8 <= *(int *)(param_3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar10->_padding_)) goto LAB_14a7c4d4d;
  }
  param_3 = (UUserWidget *)0x0;
  bVar6 = `SCommonButtonTableRow<UObject_*>::Construct'::__l3::<lambda_1>::operator()(local_res10);
  if (!bVar6) {
    return;
  }
LAB_14a7c4d4d:
  iVar8 = (**(code **)(*(longlong *)&this->field_0x2f0 + 0x78))();
  if ((iVar8 == 2) || (iVar8 == 3)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  UCommonButtonBase::SetIsToggleable((UCommonButtonBase *)param_3,bVar6);
  bVar6 = iVar8 != 0;
  if (((bVar6 != ((UCommonButtonBase *)param_3)->bSelectable) &&
      (((UCommonButtonBase *)param_3)->field_0x4d0 =
            ((UCommonButtonBase *)param_3)->field_0x4d0 & 0xfb | bVar6 << 2, param_3->bSelected != 0
      )) && (iVar8 == 0)) {
    UCommonButtonBase::SetSelectedInternal((UCommonButtonBase *)param_3,false,true,true);
  }
  uVar1 = ((UCommonButtonBase *)param_3)->field_0x4d0;
  if (((bVar6 != ((UCommonButtonBase *)param_3)->bInteractableWhenSelected) &&
      (((UCommonButtonBase *)param_3)->field_0x4d0 = uVar1 & 0xef | bVar6 << 4,
      param_3->bSelected != 0)) && (((UCommonButtonBase *)param_3)->bToggleable == '\0')) {
    UCommonButtonBase::SetIsInteractionEnabled((UCommonButtonBase *)param_3,bVar6);
  }
  bVar6 = param_1->_bAllowDragDrop;
  bVar7 = FWeakObjectPtr::IsValid(&(((UCommonButtonBase *)param_3)->RootButton).WeakPtr);
  if (bVar7) {
    pUVar11 = (UButton *)FWeakObjectPtr::Get(&(((UCommonButtonBase *)param_3)->RootButton).WeakPtr);
    UButton::SetAllowDragDrop(pUVar11,bVar6);
  }
  (((UCommonButtonBase *)param_3)->TouchMethod).Value = '\x02';
  bVar6 = FWeakObjectPtr::IsValid(&(((UCommonButtonBase *)param_3)->RootButton).WeakPtr);
  if (bVar6) {
    pUVar11 = (UButton *)FWeakObjectPtr::Get(&(((UCommonButtonBase *)param_3)->RootButton).WeakPtr);
    UButton::SetTouchMethod(pUVar11,PreciseTap);
  }
  return;
}

// DetectItemSelectionChanged @ 14a7d3940

void __thiscall
SCommonButtonTableRow<UObject_*>::DetectItemSelectionChanged(SCommonButtonTableRow<UObject_*> *this)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  byte bVar4;
  char cVar5;
  atomic<int> aVar6;
  undefined8 *puVar7;
  UClass *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  undefined8 local_res8;
  FString local_28;
  
  SObjectTableRow<UObject_*>::DetectItemSelectionChanged((SObjectTableRow<UObject_*> *)this);
  pTVar11 = *(TReferenceControllerBase<1> **)&this->field_0x3c8;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = pTVar12;
  pTVar9 = pTVar11;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_14a7d3995:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar11 = pTVar9;
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar13)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      pTVar9 = pTVar12;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14a7d3995;
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar13 = aVar3 == aVar6;
      if (bVar13) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar13);
    pTVar10 = *(TReferenceControllerBase<1> **)&this->field_0x3c0;
    pTVar9 = pTVar11;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_14a7d3995;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar9 = (TReferenceControllerBase<1> *)&this->field_0x2f0;
  if (this == (SCommonButtonTableRow<UObject_*> *)0x0) {
    pTVar9 = pTVar12;
  }
  puVar7 = (undefined8 *)(**(code **)(pTVar10->_padding_ + 0x48))(pTVar10,pTVar9);
  if (puVar7 == (undefined8 *)0x0) {
    cVar5 = (**(code **)(pTVar10->_padding_ + 200))(pTVar10);
    if (cVar5 == '\0') {
      FReflectionMetaData::GetWidgetPath(&local_28,(SWidget *)this,false,false);
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerTable->Private_IsPendingRefresh()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                          ,0x32c,
                          L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                         );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar13) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    if (*(longlong *)&this->field_0x2b8 != 0) {
      pUVar8 = UCommonButtonBase::StaticClass();
      bVar13 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x2b8,pUVar8);
      if (bVar13) {
        lVar1 = *(longlong *)&this->field_0x2b8;
        local_res8 = *puVar7;
        bVar4 = (**(code **)(pTVar10->_padding_ + 0x10))(pTVar10,&local_res8);
        if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x4e1) & 1) != bVar4)) {
          (**(code **)(*(longlong *)this + 0x280))(this,bVar4);
        }
        goto LAB_14a7d3b1b;
      }
    }
    local_res8 = *puVar7;
    (**(code **)(pTVar10->_padding_ + 0x10))(pTVar10,&local_res8);
  }
LAB_14a7d3b1b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// HandleButtonClicked @ 14a7ea720

void __thiscall
SCommonButtonTableRow<UObject_*>::HandleButtonClicked(SCommonButtonTableRow<UObject_*> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  FString local_18;
  
  pTVar8 = *(TReferenceControllerBase<1> **)&this->field_0x3c8;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar9;
  pTVar6 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      pTVar6 = pTVar9;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7ea775;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x3c0;
    pTVar6 = pTVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_14a7ea7be;
  }
LAB_14a7ea775:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar8 = pTVar6;
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14a7ea7be:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar6 = (TReferenceControllerBase<1> *)&this->field_0x2f0;
  if (this == (SCommonButtonTableRow<UObject_*> *)0x0) {
    pTVar6 = pTVar9;
  }
  puVar5 = (undefined8 *)(**(code **)(pTVar7->_padding_ + 0x48))(pTVar7,pTVar6);
  if (puVar5 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(pTVar7->_padding_ + 200))(pTVar7);
    if (cVar3 == '\0') {
      FReflectionMetaData::GetWidgetPath(&local_18,(SWidget *)this,false,false);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerTable->Private_IsPendingRefresh()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                          ,0x32c,
                          L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                         );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    (**(code **)(pTVar7->_padding_ + 0xa8))(pTVar7,*puVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// HandleButtonDoubleClicked @ 14a7ea9e0

void __thiscall
SCommonButtonTableRow<UObject_*>::HandleButtonDoubleClicked(SCommonButtonTableRow<UObject_*> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  FString local_18;
  
  pTVar8 = *(TReferenceControllerBase<1> **)&this->field_0x3c8;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar9;
  pTVar6 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      pTVar6 = pTVar9;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7eaa35;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x3c0;
    pTVar6 = pTVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_14a7eaa7e;
  }
LAB_14a7eaa35:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar8 = pTVar6;
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14a7eaa7e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar6 = (TReferenceControllerBase<1> *)&this->field_0x2f0;
  if (this == (SCommonButtonTableRow<UObject_*> *)0x0) {
    pTVar6 = pTVar9;
  }
  puVar5 = (undefined8 *)(**(code **)(pTVar7->_padding_ + 0x48))(pTVar7,pTVar6);
  if (puVar5 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(pTVar7->_padding_ + 200))(pTVar7);
    if (cVar3 == '\0') {
      FReflectionMetaData::GetWidgetPath(&local_18,(SWidget *)this,false,false);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerTable->Private_IsPendingRefresh()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                          ,0x32c,
                          L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                         );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    (**(code **)(pTVar7->_padding_ + 0xb0))(pTVar7,*puVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// HandleButtonHovered @ 14a7eb0f0

void __thiscall
SCommonButtonTableRow<UObject_*>::HandleButtonHovered(SCommonButtonTableRow<UObject_*> *this)

{
  undefined8 uVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  uVar1 = *(undefined8 *)&this->field_0x2b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x2f8,&local_28)
  ;
  if ((*(int *)&this->field_0x308 != 0) &&
     (plVar2 = *(longlong **)&this->field_0x300, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// HandleButtonSelectionChanged @ 14a7eb790

void __thiscall
SCommonButtonTableRow<UObject_*>::HandleButtonSelectionChanged
          (SCommonButtonTableRow<UObject_*> *this,bool param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  atomic<int> aVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 uVar12;
  wchar_t *in_R9;
  undefined7 uVar13;
  TReferenceControllerBase<1> *pTVar14;
  FString local_38;
  
  pTVar9 = (TReferenceControllerBase<1> *)&this->field_0x2f0;
  iVar5 = (**(code **)(*(longlong *)pTVar9 + 0x78))(pTVar9);
  if (iVar5 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2152431802512310061>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Public\\SCommonButtonTableRow.h"
                       ,0xd3,"SelectionMode != ESelectionMode::None");
    if (!bVar3) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cVar4 = (**(code **)(*(longlong *)pTVar9 + 0x30))(pTVar9);
  if (param_1 == (bool)cVar4) {
    return;
  }
  pTVar11 = *(TReferenceControllerBase<1> **)&this->field_0x3c8;
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar14;
  pTVar10 = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar11->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      pTVar10 = pTVar14;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a7eb855;
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar3 = aVar2 == aVar6;
      if (bVar3) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar3);
    pTVar8 = *(TReferenceControllerBase<1> **)&this->field_0x3c0;
    pTVar10 = pTVar11;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) goto LAB_14a7eb89e;
  }
LAB_14a7eb855:
  in_R9 = L"";
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar11 = pTVar10;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    in_R9 = L"";
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_14a7eb89e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (this == (SCommonButtonTableRow<UObject_*> *)0x0) {
    pTVar9 = pTVar14;
  }
  puVar7 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0x48))(pTVar8,pTVar9);
  if (puVar7 == (undefined8 *)0x0) {
    cVar4 = (**(code **)(pTVar8->_padding_ + 200))(pTVar8);
    if (cVar4 == '\0') {
      FReflectionMetaData::GetWidgetPath(&local_38,(SWidget *)this,false,false);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerTable->Private_IsPendingRefresh()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                         ,0x32c,
                         L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                        );
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    if (param_1) {
      if (iVar5 != 3) {
        (**(code **)(pTVar8->_padding_ + 0x30))(pTVar8);
      }
      uVar13 = (undefined7)((ulonglong)in_R9 >> 8);
      uVar12 = 1;
    }
    else {
      uVar13 = (undefined7)((ulonglong)in_R9 >> 8);
      uVar12 = 0;
    }
    (**(code **)(pTVar8->_padding_ + 0x28))(pTVar8,*puVar7,uVar12,CONCAT71(uVar13,1));
    (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8,3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// HandleButtonUnhovered @ 14a7eb9b0

void __thiscall
SCommonButtonTableRow<UObject_*>::HandleButtonUnhovered(SCommonButtonTableRow<UObject_*> *this)

{
  undefined8 uVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  uVar1 = *(undefined8 *)&this->field_0x2b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x310,&local_28)
  ;
  if ((*(int *)&this->field_0x320 != 0) &&
     (plVar2 = *(longlong **)&this->field_0x318, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// InitializeObjectRow @ 14a7f3750

/* WARNING: Removing unreachable block (ram,0x00014a7f3b83) */

void __thiscall
SCommonButtonTableRow<UObject_*>::InitializeObjectRow(SCommonButtonTableRow<UObject_*> *this)

{
  undefined1 *puVar1;
  UCommonButtonBase *this_00;
  SWidget *pSVar2;
  UObjectBaseUtility *this_01;
  bool bVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  TSharedRef<SWidget,1> *pTVar10;
  ulong64 uVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  SWidget *pSVar15;
  SWidget *local_res8;
  TReferenceControllerBase<1> *pTStack_60;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  bVar3 = false;
  bVar14 = false;
  bVar13 = false;
  local_res8 = (SWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  SObjectTableRow<UObject_*>::InitializeObjectRow((SObjectTableRow<UObject_*> *)this);
  if (*(longlong *)&this->field_0x2b8 == 0) {
    return;
  }
  pUVar8 = UCommonButtonBase::StaticClass();
  bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x2b8,pUVar8);
  if (!bVar5) {
    return;
  }
  this_00 = *(UCommonButtonBase **)&this->field_0x2b8;
  if (this_00 == (UCommonButtonBase *)0x0) {
    return;
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SCommonButtonTableRow<UObject_*>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this_00->OnClickedEvent,(SCommonButtonTableRow<UObject_*> *)&local_res8,
             (pmf_b0fa6a9c *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SCommonButtonTableRow<UObject_*>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this_00->OnDoubleClickedEvent,(SCommonButtonTableRow<UObject_*> *)&local_res8,
             (pmf_b0fa6a9c *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SCommonButtonTableRow<UObject_*>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this_00->OnHoveredEvent,(SCommonButtonTableRow<UObject_*> *)&local_res8,
             (pmf_b0fa6a9c *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SCommonButtonTableRow<UObject_*>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this_00->OnUnhoveredEvent,(SCommonButtonTableRow<UObject_*> *)&local_res8,
             (pmf_b0fa6a9c *)this);
  pTStack_60 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_60 & 0xffffffff00000000);
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddSP<SCommonButtonTableRow<UObject_*>_>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &this_00->OnIsSelectedChangedEvent,(SCommonButtonTableRow<UObject_*> *)&local_res8,
             (pmf_aeeae9c0 *)this);
  if (this->field_0x3d9 != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->OnDragDetectedEvent,(FWriteAccessScope *)&local_48);
    local_30 = &(this_00->OnDragDetectedEvent).field_0x8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
    pSVar15 = local_res8;
    if (puVar9 != (undefined8 *)0x0) {
      pTStack_60 = local_58.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_58);
      pSVar15 = (SWidget *)(pTVar10->SharedReferenceCount).ReferenceController;
      pSVar2 = pTVar10->Object;
      if (pSVar15 != (SWidget *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar15->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar15->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pSVar15->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar15->_padding_ + 1);
        UNLOCK();
      }
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = pSVar2;
      puVar9[4] = pSVar15;
      if (pSVar15 != (SWidget *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar15->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar15->_padding_)[1] + 1);
        UNLOCK();
      }
      bVar3 = true;
      bVar14 = true;
      bVar13 = true;
      puVar9[5] = SObjectTableRow<UObject*___ptr64>::_vcall__184__flat______;
      puVar9[6] = pTStack_60;
    }
    if (bVar14) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    bVar3 = false;
    bVar14 = false;
    bVar13 = false;
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->OnDragEnterEvent,
               (FWriteAccessScope *)&local_48);
    local_30 = &(this_00->OnDragEnterEvent).field_0x8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
    pSVar15 = local_res8;
    if (puVar9 != (undefined8 *)0x0) {
      pTStack_60 = local_58.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_58);
      pSVar15 = (SWidget *)(pTVar10->SharedReferenceCount).ReferenceController;
      local_res8 = pTVar10->Object;
      if (pSVar15 != (SWidget *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar15->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar15->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pSVar15->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar15->_padding_ + 1);
        UNLOCK();
      }
      bVar13 = true;
      bVar3 = true;
      bVar14 = true;
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = local_res8;
      puVar9[4] = pSVar15;
      if (pSVar15 != (SWidget *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar15->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar15->_padding_)[1] + 1);
        UNLOCK();
      }
      puVar9[5] = SObjectTableRow<UObject*___ptr64>::_vcall__192__flat______;
      puVar9[6] = pTStack_60;
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
    }
    if (bVar14) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    bVar14 = false;
    bVar13 = false;
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->OnDragLeaveEvent,
               (FWriteAccessScope *)&local_48);
    local_30 = &(this_00->OnDragLeaveEvent).field_0x8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
    pSVar15 = local_res8;
    if (puVar9 != (undefined8 *)0x0) {
      pTStack_60 = local_58.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_58);
      pSVar15 = (SWidget *)(pTVar10->SharedReferenceCount).ReferenceController;
      local_res8 = pTVar10->Object;
      if (pSVar15 != (SWidget *)0x0) {
        LOCK();
        *(int *)&pSVar15->_padding_ = (int)pSVar15->_padding_ + 1;
        UNLOCK();
        LOCK();
        *(int *)&pSVar15->_padding_ = (int)pSVar15->_padding_ + 1;
        UNLOCK();
      }
      bVar14 = true;
      bVar13 = true;
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__0A_V__SCommonButtonTableRow_PEAVUObject_____00__A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = local_res8;
      puVar9[4] = pSVar15;
      if (pSVar15 != (SWidget *)0x0) {
        LOCK();
        puVar1 = (undefined1 *)((longlong)&pSVar15->_padding_ + 4);
        *(int *)puVar1 = *(int *)puVar1 + 1;
        UNLOCK();
      }
      puVar9[5] = SObjectTableRow<UObject*___ptr64>::_vcall__200__flat______;
      puVar9[6] = pTStack_60;
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
    }
    if (bVar14) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    uVar4 = (ulonglong)pTStack_60 >> 0x20;
    pTStack_60 = (TReferenceControllerBase<1> *)(uVar4 << 0x20);
    local_58.Object = (SWidget *)SObjectTableRow<UObject*___ptr64>::_vcall__208__flat______;
    local_58.SharedReferenceCount.ReferenceController = pTStack_60;
    TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
    ::BindSP<SCommonButtonTableRow<UObject_*>_>
              ((TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->OnDragOverEvent,this,(pmf_262bbc68 *)&local_58);
    pTStack_60 = (TReferenceControllerBase<1> *)(uVar4 << 0x20);
    local_58.Object = (SWidget *)SObjectTableRow<UObject*___ptr64>::_vcall__216__flat______;
    local_58.SharedReferenceCount.ReferenceController = pTStack_60;
    TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
    ::BindSP<SCommonButtonTableRow<UObject_*>_>
              ((TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->OnDropEvent,this,(pmf_262bbc68 *)&local_58);
  }
  this_01 = *(UObjectBaseUtility **)&this->field_0x2b8;
  if (this_01 != (UObjectBaseUtility *)0x0) {
    pUVar8 = Z_Construct_UClass_UUserListEntry_NoRegister();
    plVar12 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar8);
    if ((plVar12 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*plVar12 + 0x10))(plVar12), cVar6 == '\0')) {
      if (this_00->bSelectable == '\0') {
        return;
      }
      this_00->field_0x4d0 = this_00->field_0x4d0 & 0xfb;
      if (this_00->bSelected == 0) {
        return;
      }
      bVar14 = true;
      bVar7 = false;
      bVar13 = true;
      goto LAB_14a7f3c83;
    }
  }
  bVar7 = (**(code **)(*(longlong *)&this->field_0x2f0 + 0x30))();
  if (bVar7 == this_00->bSelected) {
    return;
  }
  bVar14 = false;
  bVar13 = false;
LAB_14a7f3c83:
  UCommonButtonBase::SetSelectedInternal(this_00,(bool)bVar7,bVar13,bVar14);
  return;
}

// OnItemSelectionChanged @ 14a7fd070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SCommonButtonTableRow<UObject_*>::OnItemSelectionChanged
          (SCommonButtonTableRow<UObject_*> *this,bool param_1)

{
  undefined1 *this_00;
  UCommonButtonBase *this_01;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = &this->field_0x2b8;
  if (*(UUserWidget **)this_00 != (UUserWidget *)0x0) {
    IUserListEntry::UpdateItemSelection(*(UUserWidget **)this_00,param_1);
  }
  if (*(longlong *)this_00 != 0) {
    pUVar2 = UCommonButtonBase::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (((bVar1) && (this_01 = *(UCommonButtonBase **)this_00, this_01 != (UCommonButtonBase *)0x0))
       && (this_01->bSelected != param_1)) {
      UCommonButtonBase::SetSelectedInternal(this_01,param_1,false,true);
    }
  }
  return;
}

// OnMouseButtonDoubleClick @ 14a7fd210

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCommonButtonTableRow<UObject_*>::OnMouseButtonDoubleClick
          (SCommonButtonTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14a7fd3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SCommonButtonTableRow<UObject_*>::OnMouseButtonDown
          (SCommonButtonTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  SObjectWidget::OnMouseButtonDown((SObjectWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14a7fd4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SCommonButtonTableRow<UObject_*>::OnMouseButtonUp
          (SCommonButtonTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  SObjectWidget::OnMouseButtonUp((SObjectWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseEnter @ 14a7fd5f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SCommonButtonTableRow<UObject_*>::OnMouseEnter
          (SCommonButtonTableRow<UObject_*> *this,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  
  SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
  if (*(UWidget **)&this->field_0x2b8 != (UWidget *)0x0) {
    bVar1 = UWidget::CanSafelyRouteCall(*(UWidget **)&this->field_0x2b8);
    if (bVar1) {
      (**(code **)(**(longlong **)&this->field_0x2b8 + 0x418))
                (*(longlong **)&this->field_0x2b8,param_1,param_2);
    }
  }
  return;
}

// OnMouseLeave @ 14a7fd740

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SCommonButtonTableRow<UObject_*>::OnMouseLeave
          (SCommonButtonTableRow<UObject_*> *this,FPointerEvent *param_1)

{
  bool bVar1;
  
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  if (*(UWidget **)&this->field_0x2b8 != (UWidget *)0x0) {
    bVar1 = UWidget::CanSafelyRouteCall(*(UWidget **)&this->field_0x2b8);
    if (bVar1) {
      (**(code **)(**(longlong **)&this->field_0x2b8 + 0x420))
                (*(longlong **)&this->field_0x2b8,param_1);
    }
  }
  return;
}

// ResetObjectRow @ 14a814db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SCommonButtonTableRow<UObject_*>::ResetObjectRow(SCommonButtonTableRow<UObject_*> *this)

{
  UCommonButtonBase *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this->field_0x3d5 = 0;
  if (*(UUserWidget **)&this->field_0x2b8 != (UUserWidget *)0x0) {
    IUserListEntry::ReleaseEntry(*(UUserWidget **)&this->field_0x2b8);
  }
  if (*(longlong *)&this->field_0x2b8 != 0) {
    pUVar2 = UCommonButtonBase::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x2b8,pUVar2);
    if ((bVar1) &&
       (this_00 = *(UCommonButtonBase **)&this->field_0x2b8, this_00 != (UCommonButtonBase *)0x0)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->OnClickedEvent,this
                );
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnDoubleClickedEvent,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->OnHoveredEvent,this
                );
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00->OnUnhoveredEvent,
                 this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnIsSelectedChangedEvent,this);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->OnDragDetectedEvent);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->OnDragEnterEvent);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->OnDragLeaveEvent);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->OnDragOverEvent);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->OnDropEvent);
      if (this_00->bSelected != 0) {
        UCommonButtonBase::SetSelectedInternal(this_00,false,false,false);
      }
    }
  }
  return;
}

// operator() @ 1505552a0

bool __thiscall
`SCommonButtonTableRow<UObject_*>::Construct'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2152431802512310212>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2152431802512310212>,
                       &`public:___cdecl_`public:_void___cdecl_SCommonButtonTableRow<UObject*___ptr64>::Construct(SCommonButtonTableRow<class_UObject*___ptr64>::FArguments_const&___ptr64,TSharedRef<STableViewBase,1>_const&___ptr64,UUserWidget&___ptr64,UListViewBase*___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

