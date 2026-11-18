// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// ConstructTreeView<SDS_TreeView> @ 14bc797d0

TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> * __thiscall
UTreeView::ConstructTreeView<SDS_TreeView>
          (UTreeView *this,
          TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *__return_storage_ptr__)

{
  TSharedPtr<STreeView<UObject_*>,1> *pTVar1;
  STreeView<UObject_*> *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDS_TableViewBase<SCommonTreeView,UObject_*> *pSVar4;
  code *pcVar5;
  ISlateStyle *pIVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  FName *pFVar9;
  longlong lVar10;
  TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *pTVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  UTreeView *local_res8;
  FName local_res10;
  FName local_res18 [2];
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  SDS_TableViewBase<SCommonTreeView,UObject_*> *local_d0;
  FSharedReferencer<1> local_c8;
  STreeView<UObject_*> *local_c0;
  FSharedReferencer<1> local_b8 [2];
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  bool local_98;
  FTreeViewConstructArgs local_88;
  TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  pIVar6 = FUMGCoreStyle::Instance.Object;
  pFVar9 = ::FName::FName(&local_res10,"TreeView");
  lVar10 = (**(code **)((longlong)*pIVar6 + 0xa0))(pIVar6,FTableViewStyle::TypeName,*pFVar9,0,1);
  if (lVar10 == 0) {
    FTableViewStyle::GetDefault();
  }
  pIVar6 = FUMGCoreStyle::Instance.Object;
  pFVar9 = ::FName::FName(local_res18,"ScrollBar");
  lVar10 = (**(code **)((longlong)*pIVar6 + 0xa0))(pIVar6,FScrollBarStyle::TypeName,*pFVar9,0,1);
  if (lVar10 == 0) {
    FScrollBarStyle::GetDefault();
  }
  local_88.bClearSelectionOnClick = *(bool *)((longlong)&this->_padding_ + 3);
  local_88.SelectionMode = (Type)*(byte *)((longlong)&this->_padding_ + 1);
  local_88.ConsumeMouseWheel = *(EConsumeMouseWheel *)((longlong)&this->_padding_ + 2);
  local_88.bReturnFocusToSelection = *(bool *)((longlong)&this->_padding_ + 6);
  local_88.TreeViewStyle = (FTableViewStyle *)&this->_padding_;
  local_88.ScrollBarStyle = (FScrollBarStyle *)&this->_padding_;
  pTVar11 = ITypedUMGListView<UObject_*>::ConstructTreeView<SDS_TreeView,UTreeView>
                      (&local_70,this,
                       (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_88);
  local_c8.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
  local_d0 = pTVar11->Object;
  if (local_c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyTreeView;
  if (pTVar1 != (TSharedPtr<STreeView<UObject_*>,1> *)&local_d0) {
    pTVar1->Object = (STreeView<UObject_*> *)local_d0;
    local_d0 = (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyTreeView).SharedReferenceCount,&local_c8);
  }
  FVar7.ReferenceController = local_c8.ReferenceController;
  local_b8[0].ReferenceController = (this->MyTreeView).SharedReferenceCount.ReferenceController;
  local_c0 = pTVar1->Object;
  if (local_b8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_b8[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((STreeView<UObject_*> **)&this->_padding_ != &local_c0) {
    this->_padding_ = (longlong)local_c0;
    local_c0 = (STreeView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,local_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_70.SharedReferenceCount.ReferenceController._4_4_,
                      local_70.SharedReferenceCount.ReferenceController._0_4_));
  if (((this->MyTreeView).Object == (STreeView<UObject_*> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *)(*pcVar5)();
    return pTVar11;
  }
  pSVar2 = (this->MyTreeView).Object;
  local_a8 = UListView::HandleOnEntryInitializedInternal;
  uStack_9c = local_70.SharedReferenceCount.ReferenceController._4_4_;
  uStack_a0 = 0;
  local_e8 = (undefined1  [8])0x0;
  local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_e0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_e0);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res8);
    puVar12[4] = local_a8;
    puVar12[5] = CONCAT44(uStack_9c,uStack_a0);
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)&pSVar2->field_0x740,
            (TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)local_e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_a8);
  if ((local_e0.DelegateSize != 0) &&
     (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e0,0,0,0x10);
    local_e0.DelegateSize = 0;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_9c,uStack_a0),
               (FDestructionSentinel *)&local_a8);
  }
  if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
  if (((this->MyTreeView).Object == (STreeView<UObject_*> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *)(*pcVar5)();
    return pTVar11;
  }
  pTVar3 = (this->MyTreeView).SharedReferenceCount.ReferenceController;
  pSVar4 = (SDS_TableViewBase<SCommonTreeView,UObject_*> *)(this->MyTreeView).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 == (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *)(*pcVar5)();
    return pTVar11;
  }
  __return_storage_ptr__->Object = pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

