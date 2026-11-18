// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 3

// GenerateTypedEntry<UUserWidget,SCommonButtonTableRow<UObject_*>_> @ 14a799fa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUserWidget * __thiscall
UListViewBase::GenerateTypedEntry<UUserWidget,SCommonButtonTableRow<UObject_*>_>
          (UListViewBase *this,TSubclassOf<UUserWidget> param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UUserWidget *pUVar6;
  UObject *pUVar7;
  UObject *local_res8;
  UListViewBase *local_28;
  TSharedRef<STableViewBase,1> *local_20;
  code *local_18;
  UListViewBase **local_10;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  local_28 = this;
  local_20 = param_2;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        goto LAB_14a799ffc;
      }
    }
  }
  pUVar7 = (UObject *)0x0;
LAB_14a799ffc:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UListViewBase::GenerateTypedEntry<UUserWidget,SCommonButtonTableRow<UObject_*>_>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
             ::Call;
  local_10 = &local_28;
  local_res8 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  pUVar6 = FUserWidgetPool::AddActiveWidgetInternal<UUserWidget>
                     (&this->EntryWidgetPool,(TSubclassOf<UUserWidget>)&local_res8,
                      (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                       *)&local_18);
  if (pUVar6 == (UUserWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListEntryWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                       ,0x2be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UUserWidget *)(*pcVar3)();
      return pUVar6;
    }
  }
  (**(code **)(this->_padding_ + 0x360))(this,pUVar6);
  return pUVar6;
}

// GenerateTypedEntry<UUserWidget,SObjectTableRow<UObject_*>_> @ 14a79a0c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUserWidget * __thiscall
UListViewBase::GenerateTypedEntry<UUserWidget,SObjectTableRow<UObject_*>_>
          (UListViewBase *this,TSubclassOf<UUserWidget> param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UUserWidget *pUVar6;
  UObject *pUVar7;
  UObject *local_res8;
  UListViewBase *local_28;
  TSharedRef<STableViewBase,1> *local_20;
  code *local_18;
  UListViewBase **local_10;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  local_28 = this;
  local_20 = param_2;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        goto LAB_14a79a11c;
      }
    }
  }
  pUVar7 = (UObject *)0x0;
LAB_14a79a11c:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UListViewBase::GenerateTypedEntry<UUserWidget,SObjectTableRow<UObject_*>_>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
             ::Call;
  local_10 = &local_28;
  local_res8 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  pUVar6 = FUserWidgetPool::AddActiveWidgetInternal<UUserWidget>
                     (&this->EntryWidgetPool,(TSubclassOf<UUserWidget>)&local_res8,
                      (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                       *)&local_18);
  if (pUVar6 == (UUserWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListEntryWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                       ,0x2be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UUserWidget *)(*pcVar3)();
      return pUVar6;
    }
  }
  (**(code **)(this->_padding_ + 0x360))(this,pUVar6);
  return pUVar6;
}

// operator() @ 14a7b4bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedRef<SCommonButtonTableRow<UObject_*>,1> * __thiscall
`UListViewBase::GenerateTypedEntry<UUserWidget,SCommonButtonTableRow<UObject_*>_>'::__l2::<lambda_1>
::operator()(void *this,TSharedRef<SCommonButtonTableRow<UObject_*>,1> *__return_storage_ptr__,
            UUserWidget *param_1,TSharedRef<SWidget,1> *param_2)

{
  UObject *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  TSharedRef<SWidget,1> *pTVar5;
  SCommonButtonTableRow<UObject_*> *pSVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<SCommonButtonTableRow<UObject_*>,1> *pTVar13;
  UObject *local_res8;
  UObject *local_res10;
  UUserWidget *local_res18;
  TSharedRef<SWidget,1> *local_res20;
  FMemScope local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  SWidget *local_498;
  undefined8 uStack_490;
  TSlateDecl<SCommonButtonTableRow<UObject_*>,RequiredArgs::T3RequiredArgs<TSharedRef<STableViewBase,1>_const_&,UUserWidget_&,UListViewBase_*_const_&&>_>
  local_488;
  UObject *local_470;
  UObject *local_468;
  UObject *local_460;
  UObject *local_458;
  UObject *local_450;
  UObject *local_448;
  FName local_440;
  T3RequiredArgs<TSharedRef<STableViewBase,1>_const_&,UUserWidget_&,UListViewBase_*_const_&&>
  local_438;
  FDestructionSentinel local_420;
  undefined1 *local_408;
  FDestructionSentinel local_400;
  undefined1 *local_3e8;
  FDestructionSentinel local_3e0;
  undefined1 *local_3c8;
  FDestructionSentinel local_3c0;
  undefined1 *local_3a8;
  FDestructionSentinel local_3a0;
  undefined1 *local_388;
  FDestructionSentinel local_380;
  undefined1 *local_368;
  FDestructionSentinel local_360;
  undefined1 *local_348;
  FDestructionSentinel local_340;
  undefined1 *local_328;
  undefined1 local_320 [512];
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  FSharedReferencer<1> local_58;
  
  local_res18 = param_1;
  local_res20 = param_2;
  pFVar10 = SCommonButtonTableRow<UObject_*>::FArguments::FArguments((FArguments *)local_320);
  uStack_4a0 = 0;
  pFVar10->_bAllowDragging = *(bool *)(*(longlong *)this + 0x210);
  pFVar10->_bAllowDragDrop = *(bool *)(*(longlong *)this + 0x211);
  pFVar10->_bAllowKeepPreselectedItems = *(bool *)(*(longlong *)this + 0x242);
  pUVar1 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__800__flat______;
  uStack_49c = uStack_490._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnHovered,
             (FWriteAccessScope *)&local_420);
  local_408 = &(pFVar10->_OnHovered).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_408);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    puVar11[3] = 0;
    local_res8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res8);
    *(FMemScope *)(puVar11 + 4) = local_4a8;
    puVar11[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_420.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_420.Accessor,&local_420);
  }
  pUVar1 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__808__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnUnhovered,
             (FWriteAccessScope *)&local_400);
  local_3e8 = &(pFVar10->_OnUnhovered).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_3e8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    puVar11[3] = 0;
    local_res10 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res10);
    *(FMemScope *)(puVar11 + 4) = local_4a8;
    puVar11[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  pUVar1 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__816__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnRowDragDetected,
             (FWriteAccessScope *)&local_3e0);
  local_3c8 = &(pFVar10->_OnRowDragDetected).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_3c8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6APEAVUDragDropOperation__AEBUFGeometry__AEBUFPointerEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6APEAVUDragDropOperation__AEBUFGeometry__AEBUFPointerEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    puVar11[3] = 0;
    local_470 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_470);
    *(FMemScope *)(puVar11 + 4) = local_4a8;
    puVar11[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_3e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
  }
  pUVar1 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__824__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnRowCanAcceptDrop
             ,(FWriteAccessScope *)&local_3c0);
  local_3a8 = &(pFVar10->_OnRowCanAcceptDrop).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_3a8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_W4EItemDropZone____AEBVFDragDropEvent__W4EItemDropZone__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6A_AU__TOptional_W4EItemDropZone____AEBVFDragDropEvent__W4EItemDropZone__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    puVar11[3] = 0;
    local_468 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_468);
    *(FMemScope *)(puVar11 + 4) = local_4a8;
    puVar11[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_3c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c0.Accessor,&local_3c0);
  }
  pUVar1 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__832__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnRowAcceptDrop,
             (FWriteAccessScope *)&local_3a0);
  local_388 = &(pFVar10->_OnRowAcceptDrop).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_388);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBVFDragDropEvent__W4EItemDropZone__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6A_AVFReply__AEBVFDragDropEvent__W4EItemDropZone__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    puVar11[3] = 0;
    local_460 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_460);
    *(FMemScope *)(puVar11 + 4) = local_4a8;
    puVar11[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_3a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a0.Accessor,&local_3a0);
  }
  pUVar1 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__840__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnRowDragEnter,
             (FWriteAccessScope *)&local_380);
  local_368 = &(pFVar10->_OnRowDragEnter).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_368);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6AXAEBVFDragDropEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    puVar11[3] = 0;
    local_458 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_458);
    *(FMemScope *)(puVar11 + 4) = local_4a8;
    puVar11[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_380.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_380.Accessor,&local_380);
  }
  pUVar1 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__848__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnRowDragLeave,
             (FWriteAccessScope *)&local_360);
  local_348 = &(pFVar10->_OnRowDragLeave).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_348);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6AXAEBVFDragDropEvent__AEAVUUserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    puVar11[3] = 0;
    local_450 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_450);
    *(FMemScope *)(puVar11 + 4) = local_4a8;
    puVar11[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
  }
  pUVar1 = *(UObject **)this;
  local_4a8 = (FMemScope)UListViewBase::_vcall__856__flat______;
  uStack_49c = uStack_490._4_4_;
  uStack_4a0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnRowDragCancelled
             ,(FWriteAccessScope *)&local_340);
  local_328 = &(pFVar10->_OnRowDragCancelled).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_328);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListViewBase____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    puVar11[3] = 0;
    local_448 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_448);
    *(FMemScope *)(puVar11 + 4) = local_4a8;
    puVar11[5] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (local_340.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_340.Accessor,&local_340);
  }
  pTVar5 = local_res20;
  pTVar2 = (local_res20->SharedReferenceCount).ReferenceController;
  pSVar3 = local_res20->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_498 = (pFVar10->_Content).Widget.Object;
  uStack_490 = (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar10->_Content).Widget.Object = pSVar3;
  (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_490);
  local_438.Arg0 = *(TSharedRef<STableViewBase,1> **)((longlong)this + 8);
  local_438.Arg1 = local_res18;
  local_438.Arg2 = this;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_440 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4a8,&local_440,true);
  TSlateDecl<SCommonButtonTableRow<UObject_*>,RequiredArgs::T3RequiredArgs<TSharedRef<STableViewBase,1>_const_&,UUserWidget_&,UListViewBase_*_const_&&>_>
  ::
  TSlateDecl<SCommonButtonTableRow<UObject_*>,RequiredArgs::T3RequiredArgs<TSharedRef<STableViewBase,1>_const_&,UUserWidget_&,UListViewBase_*_const_&&>_>
            (&local_488,"ObjectTableRowT",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x2ae,&local_438);
  FMemScope::~FMemScope(&local_4a8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
  pSVar6 = local_488._Widget.Object;
  if (local_488._Widget.Object == (SCommonButtonTableRow<UObject_*> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SCommonButtonTableRow<UObject_*>,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_488._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SCommonButtonTableRow<UObject_*>::Construct
            (local_488._Widget.Object,pFVar10,(local_488._RequiredArgs)->Arg0,
             (local_488._RequiredArgs)->Arg1,*(local_488._RequiredArgs)->Arg2);
  if (local_488._Widget.Object == (SCommonButtonTableRow<UObject_*> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SCommonButtonTableRow<UObject_*>,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  if (((local_488._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar8 = (**(code **)(*(longlong *)local_488._Widget.Object + 0x228))(local_488._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14a7b5401;
  }
  bVar9 = 0x20;
LAB_14a7b5401:
  (local_488._Widget.Object)->field_0x30 = (local_488._Widget.Object)->field_0x30 & 0xdf;
  (local_488._Widget.Object)->field_0x30 = (local_488._Widget.Object)->field_0x30 | bVar9;
  if (local_488._Widget.Object == (SCommonButtonTableRow<UObject_*> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SCommonButtonTableRow<UObject_*>,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  (local_488._Widget.Object)->field_0x31 = (local_488._Widget.Object)->field_0x31 | 4;
  if (local_488._Widget.Object == (SCommonButtonTableRow<UObject_*> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SCommonButtonTableRow<UObject_*>,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_488._Widget.SharedReferenceCount.ReferenceController;
  __return_storage_ptr__->Object = local_488._Widget.Object;
  local_488._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_488._Widget.Object = (SCommonButtonTableRow<UObject_*> *)0x0;
  if (pSVar6 == (SCommonButtonTableRow<UObject_*> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<SCommonButtonTableRow<UObject_*>,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  if ((void *)local_a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c0);
  if ((void *)local_c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d8);
  if ((void *)local_d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
  if ((void *)local_f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_108);
  if ((void *)local_108._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_120);
  if ((void *)local_120._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_120._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_120);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_320);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar5->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

