// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// ConstructListView<SDS_ListView> @ 14bc77010

TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> * __thiscall
UListView::ConstructListView<SDS_ListView>
          (UListView *this,
          TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *__return_storage_ptr__)

{
  TSharedPtr<SListView<UObject_*>,1> *pTVar1;
  SListView<UObject_*> *pSVar2;
  SDS_TableViewBase<SListView,UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *pTVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UListView *local_res8;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  SDS_TableViewBase<SListView,UObject_*> *local_e0;
  FSharedReferencer<1> local_d8 [2];
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  bool local_b8;
  FListViewConstructArgs local_a8;
  TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  ITypedUMGListView<UObject_*>::FListViewConstructArgs::FListViewConstructArgs(&local_a8);
  local_a8.bAllowFocus = this->bIsFocusable;
  local_a8.ScrollBarPadding.Left = (this->ScrollBarPadding).Left;
  local_a8.ScrollBarPadding.Top = (this->ScrollBarPadding).Top;
  local_a8.ScrollBarPadding.Right = (this->ScrollBarPadding).Right;
  local_a8.ScrollBarPadding.Bottom = (this->ScrollBarPadding).Bottom;
  local_a8.SelectionMode = (Type)(this->SelectionMode).Value;
  local_a8.bClearSelectionOnClick = this->bClearSelectionOnClick;
  local_a8.ConsumeMouseWheel = this->ConsumeMouseWheel;
  local_a8.bReturnFocusToSelection = this->bReturnFocusToSelection;
  local_a8.bClearScrollVelocityOnSelection = this->bClearScrollVelocityOnSelection;
  local_a8.Orientation = (EOrientation)(this->Orientation).Value;
  local_a8.ListViewStyle = &this->WidgetStyle;
  local_a8.ScrollBarStyle = &this->ScrollBarStyle;
  local_a8.ShadowBoxStyle = &this->ShadowBrushStyle;
  local_a8.bEnableShadowBoxStyle = this->bEnableShadowBrush;
  local_a8.ScrollIntoViewAlignment = this->ScrollIntoViewAlignment;
  pTVar7 = ITypedUMGListView<UObject_*>::ConstructListView<SDS_ListView,UListView>
                     (&local_58,this,
                      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->ListItems,&local_a8);
  local_d8[0].ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_e0 = pTVar7->Object;
  if (local_d8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_d8[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyListView;
  if (pTVar1 != (TSharedPtr<SListView<UObject_*>,1> *)&local_e0) {
    pTVar1->Object = (SListView<UObject_*> *)local_e0;
    local_e0 = (SDS_TableViewBase<SListView,UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyListView).SharedReferenceCount,local_d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                      local_58.SharedReferenceCount.ReferenceController._0_4_));
  if (pTVar1->Object == (SListView<UObject_*> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pSVar2 = pTVar1->Object;
  local_c8 = HandleOnEntryInitializedInternal;
  uStack_bc = local_58.SharedReferenceCount.ReferenceController._4_4_;
  uStack_c0 = 0;
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_f0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_f0);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res8);
    puVar8[4] = local_c8;
    puVar8[5] = CONCAT44(uStack_bc,uStack_c0);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=(&pSVar2->OnEntryInitialized,
            (TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)local_f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_c8);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_bc,uStack_c0),
               (FDestructionSentinel *)&local_c8);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  if (pTVar1->Object == (SListView<UObject_*> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pSVar3 = (SDS_TableViewBase<SListView,UObject_*> *)pTVar1->Object;
  pTVar4 = (this->MyListView).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SDS_TableViewBase<SListView,UObject_*> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

