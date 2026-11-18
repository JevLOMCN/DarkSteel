// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 46

// ~SObjectTableRow<UObject_*> @ 14698fd70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectTableRow<UObject_*>::~SObjectTableRow<UObject_*>(SObjectTableRow<UObject_*> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakObjectPtr FVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  FVar3 = (FWeakObjectPtr)this->_padding_;
  this->_padding_ = (longlong)&SObjectTableRow<UObject*___ptr64>::_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&SObjectTableRow<UObject*___ptr64>::_vftable__for__FGCObject__;
  this->_padding_ = (longlong)&___7__SObjectTableRow_PEAVUObject____6B_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (FVar3 != (FWeakObjectPtr)0x0) {
      UE::GC::MarkAsReachable((UObject *)FVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar3);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  if (IObjectTableRow::ObjectRowsByUserWidget._8_4_ !=
      IObjectTableRow::ObjectRowsByUserWidget._52_4_) {
    TSet<TTuple<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>_>
              ((TSet<TTuple<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>,0>,FDefaultSetAllocator>
                *)&IObjectTableRow::ObjectRowsByUserWidget,
               local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
               (TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr> *)&local_res10);
  }
  pTVar4 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowDragCancelled);
  pvVar5 = *(void **)&(this->OnRowDragCancelled).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRowDragCancelled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowDragLeave);
  pvVar5 = *(void **)&(this->OnRowDragLeave).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRowDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowDragEnter);
  pvVar5 = *(void **)&(this->OnRowDragEnter).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRowDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowDragDetected);
  pvVar5 = *(void **)&(this->OnRowDragDetected).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRowDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowAcceptDrop);
  pvVar5 = *(void **)&(this->OnRowAcceptDrop).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRowAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowCanAcceptDrop);
  pvVar5 = *(void **)&(this->OnRowCanAcceptDrop).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRowCanAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUnhovered);
  pvVar5 = *(void **)&(this->OnUnhovered).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnhovered);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHovered);
  pvVar5 = *(void **)&(this->OnHovered).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHovered);
  SObjectWidget::~SObjectWidget((SObjectWidget *)this);
  return;
}

// AsWidget @ 1469a2a40

TSharedRef<SWidget,1> * __thiscall
SObjectTableRow<UObject_*>::AsWidget
          (SObjectTableRow<UObject_*> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this[-1]._padding_,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Construct @ 1469ab870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectTableRow<UObject_*>::Construct
          (SObjectTableRow<UObject_*> *this,FArguments *param_1,
          TSharedRef<STableViewBase,1> *param_2,UUserWidget *param_3,UListViewBase *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UClass *this_00;
  STableViewBase *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  SWidget *pSVar6;
  code *pcVar7;
  STextBlock *pSVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  UClass *pUVar11;
  FArguments *pFVar12;
  FText *pFVar13;
  TSharedRef<STextBlock,1> *pTVar14;
  ITypedTableView<UObject_*> *pIVar15;
  FArguments *pFVar16;
  undefined8 *puVar17;
  TSharedRef<SWidget,1> *pTVar18;
  ulong64 uVar19;
  ITypedTableView<UObject_*> *pIVar20;
  TReferenceControllerBase<1> *pTVar21;
  uint local_res20;
  undefined4 uStackX_24;
  T0RequiredArgs local_9c8 [4];
  FLLMScope local_9c4;
  undefined1 local_9c0 [8];
  ForAnyElementType local_9b8;
  int local_9b0;
  undefined1 local_9a8 [8];
  ForAnyElementType local_9a0;
  int local_998;
  undefined1 local_990 [8];
  ForAnyElementType local_988;
  int local_980;
  STextBlock *local_978;
  FSharedReferencer<1> local_970;
  FWeakObjectPtr local_968;
  code *local_960;
  FSharedReferencer<1> FStack_958;
  FGeometry *local_950;
  TReferenceControllerBase<1> *local_948;
  undefined1 local_940 [8];
  FDelegateAllocation local_938;
  TPairInitializer<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>_&&,TWeakPtr<IObjectTableRow_const_,1>_&&>
  local_928;
  FMemScope local_918;
  UUserWidget *local_910;
  UListViewBase *local_908;
  undefined8 local_900;
  FSharedReferencer<1> local_8f8;
  FWeakObjectPtr *local_8f0;
  FGeometry **local_8e8;
  TSharedRef<FActiveTimerHandle,1> local_8e0;
  FDestructionSentinel local_8d0;
  FDestructionSentinel local_8b8;
  FDestructionSentinel local_8a0;
  FDestructionSentinel local_888;
  FDelegateAllocation *local_870;
  TAttribute<FText> local_868;
  TSharedRef<STextBlock,1> local_838;
  FText local_828;
  TSharedRef<SWidget,1> local_818;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_808;
  SWidget *local_7f0;
  TReferenceControllerBase<1> *pTStack_7e8;
  TSharedRef<SWidget,1> local_7e0;
  FReadAccessScope local_7d0;
  FReadAccessScope local_7b8;
  FReadAccessScope local_7a0;
  FArguments local_788;
  FArguments local_580;
  
  pIVar20 = (ITypedTableView<UObject_*> *)0x0;
  local_res20 = 0;
  this_00 = (UClass *)param_3->_padding_;
  local_970.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this_00 == (UClass *)0x0) {
LAB_1469ab8d0:
    local_res20 = local_res20 & 0xffffff00;
    bVar10 = `SObjectTableRow<UObject_*>::Construct'::__l3::<lambda_1>::operator()(&local_res20);
    if (!bVar10) {
      pFVar12 = STextBlock::FArguments::FArguments(&local_580);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_828,L"SObjectTableRow",L"InvalidWidgetClass",
                           L"Any UserWidget generated as a table row must implement the IUserListEntry interface"
                          );
      FText::FText(&local_868.Value,pFVar13);
      local_868.bIsSet = true;
      local_868.Getter._16_8_ = 0;
      local_868.Getter._0_8_ = 0;
      local_868.Getter._8_8_ = 0;
      pFVar12 = STextBlock::FArguments::Text(pFVar12,&local_868);
      FLLMScope::FLLMScope(&local_9c4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
      ;
      local_928._4_8_ = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_918,(FName *)((longlong)&local_928.Key + 4),true);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                (&local_808,"STextBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                 ,0x6e,local_9c8);
      FMemScope::~FMemScope(&local_918);
      FLLMScope::~FLLMScope(&local_9c4);
      pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_808,&local_838,pFVar12);
      local_8f8.ReferenceController = (pTVar14->SharedReferenceCount).ReferenceController;
      local_978 = pTVar14->Object;
      if (local_8f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_8f8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_8f8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_900 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_970,&local_8f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_8f8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_838.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_808._Widget.SharedReferenceCount.ReferenceController);
      if (local_828.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_828.TextData.Reference + 0x10))();
      }
      STextBlock::FArguments::~FArguments(&local_580);
      goto LAB_1469abf17;
    }
  }
  else {
    pUVar11 = Z_Construct_UClass_UUserListEntry_NoRegister();
    bVar10 = UClass::ImplementsInterface(this_00,pUVar11);
    if (!bVar10) goto LAB_1469ab8d0;
  }
  pTVar18 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_818);
  pTVar21 = (pTVar18->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar18->Object;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_818.SharedReferenceCount.ReferenceController);
  if (pSVar6 == (SWidget *)0x0) {
    local_950 = (FGeometry *)0x0;
  }
  else {
    local_950 = &pSVar6[1].PersistentState.DesktopGeometry;
  }
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_948 = pTVar21;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  local_968.ObjectIndex = 0;
  local_968.ObjectSerialNumber = 0;
  local_910 = param_3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&local_968,(FObjectPtr)&local_910);
  local_8f0 = &local_968;
  local_8e8 = &local_950;
  TSet<TTuple<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>_&&,TWeakPtr<IObjectTableRow_const_,1>_&&>_>
            ((TSet<TTuple<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr>,TWeakPtr<IObjectTableRow_const_,1>,0>,FDefaultSetAllocator>
              *)&IObjectTableRow::ObjectRowsByUserWidget,&local_928,(bool *)&local_8f0);
  if (local_948 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_948->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_948->_padding_ + 8))(local_948,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  local_908 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UListViewBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  FWeakObjectPtr::operator=(&(this->OwnerListView).WeakPtr,(FObjectPtr)&local_908);
  pTVar21 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar3 = param_2->Object;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar15 = pIVar20;
  if (pSVar3 != (STableViewBase *)0x0) {
    pIVar15 = (ITypedTableView<UObject_*> *)&pSVar3[1].field_0x8;
  }
  (this->OwnerTablePtr).Object = pIVar15;
  if (pTVar21 != (this->OwnerTablePtr).WeakReferenceCount.ReferenceController) {
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->OwnerTablePtr).WeakReferenceCount.ReferenceController = pTVar21;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  this->bAllowDragging = param_1->_bAllowDragging;
  this->bAllowDragDrop = param_1->_bAllowDragDrop;
  this->bAllowKeepPreselectedItems = param_1->_bAllowKeepPreselectedItems;
  TDelegate<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnHovered,&param_1->_OnHovered);
  TDelegate<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnUnhovered,&param_1->_OnUnhovered);
  if (&param_1->_OnRowCanAcceptDrop != &this->OnRowCanAcceptDrop) {
    local_9c0 = (undefined1  [8])0x0;
    local_9b8.Data = (FScriptContainerElement *)0x0;
    local_9b0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnRowCanAcceptDrop,&local_7b8);
    if ((*(int *)&(param_1->_OnRowCanAcceptDrop).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(param_1->_OnRowCanAcceptDrop).field_0x8, plVar5 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar5 + 0x50))(plVar5,local_9c0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_7b8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowCanAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c0,
               (FWriteAccessScope *)&local_8d0);
    if ((local_9b0 != 0) && (local_9b8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_9b8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9b8,0,0,0x10);
      local_9b0 = 0;
    }
    if (local_8d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8d0.Accessor,&local_8d0);
    }
    if (local_9b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9c0);
  }
  if (&param_1->_OnRowAcceptDrop != &this->OnRowAcceptDrop) {
    local_9a8 = (undefined1  [8])0x0;
    local_9a0.Data = (FScriptContainerElement *)0x0;
    local_998 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnRowAcceptDrop,
               &local_7a0);
    if ((*(int *)&(param_1->_OnRowAcceptDrop).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(param_1->_OnRowAcceptDrop).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x50))(plVar5,local_9a8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_7a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9a8,
               (FWriteAccessScope *)&local_8b8);
    if ((local_998 != 0) && (local_9a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_9a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9a0,0,0,0x10);
      local_998 = 0;
    }
    if (local_8b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8b8.Accessor,&local_8b8);
    }
    if (local_9a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9a8);
  }
  if (&param_1->_OnRowDragDetected != &this->OnRowDragDetected) {
    local_990 = (undefined1  [8])0x0;
    local_988.Data = (FScriptContainerElement *)0x0;
    local_980 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnRowDragDetected,&local_7d0);
    if ((*(int *)&(param_1->_OnRowDragDetected).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(param_1->_OnRowDragDetected).field_0x8, plVar5 != (longlong *)0x0))
    {
      (**(code **)(*plVar5 + 0x50))(plVar5,local_990);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_7d0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowDragDetected,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_990);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_990,
               (FWriteAccessScope *)&local_8a0);
    if ((local_980 != 0) && (local_988.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_988.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_988,0,0,0x10);
      local_980 = 0;
    }
    if (local_8a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8a0.Accessor,&local_8a0);
    }
    if (local_988.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_990);
  }
  TDelegate<void___cdecl(FDragDropEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnRowDragLeave,&param_1->_OnRowDragLeave);
  TDelegate<void___cdecl(FDragDropEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnRowDragEnter,&param_1->_OnRowDragEnter);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnRowDragCancelled,&param_1->_OnRowDragCancelled);
  FStack_958.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_978 = (STextBlock *)(param_1->_Content).Widget.Object;
  if (FStack_958.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_958.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_958.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_960 = (code *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_970,&FStack_958);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_958.ReferenceController);
LAB_1469abf17:
  pFVar16 = SObjectWidget::FArguments::FArguments(&local_788);
  pSVar8 = local_978;
  if ((local_978 == (STextBlock *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar9.ReferenceController = local_970.ReferenceController;
  if (local_970.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_970.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_970.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar8 == (STextBlock *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7f0 = (pFVar16->_Content).Widget.Object;
  pTStack_7e8 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = (SWidget *)pSVar8;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7e8);
  SObjectWidget::Construct((SObjectWidget *)this,pFVar16,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_788._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_788);
  local_940 = (undefined1  [8])0x0;
  local_938.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_938.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_940,
             (FWriteAccessScope *)&local_888);
  local_870 = &local_938;
  puVar17 = UE::Core::Private::DelegateAllocate(0x38,&local_938);
  if (puVar17 == (undefined8 *)0x0) {
    pTVar21 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_24,local_res20);
  }
  else {
    local_960 = DetectItemSelectionChanged;
    FStack_958.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_8e0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar18 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_7e0);
    pTVar21 = (pTVar18->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar18->Object;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar19;
    *puVar17 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SObjectTableRow_PEAVUObject_____00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar17[3] = pSVar6;
    puVar17[4] = pTVar21;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
      UNLOCK();
    }
    pIVar20 = (ITypedTableView<UObject_*> *)0x7;
    puVar17[5] = local_960;
    puVar17[6] = FStack_958.ReferenceController;
  }
  if (((ulonglong)pIVar20 & 4) != 0) {
    pIVar20 = (ITypedTableView<UObject_*> *)(ulonglong)((uint)pIVar20 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if (((ulonglong)pIVar20 & 2) != 0) {
    pIVar20 = (ITypedTableView<UObject_*> *)(ulonglong)((uint)pIVar20 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if (((ulonglong)pIVar20 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7e0.SharedReferenceCount.ReferenceController);
  }
  if (local_888.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_888.Accessor,&local_888);
  }
  SWidget::RegisterActiveTimer
            ((SWidget *)this,&local_8e0,0.0,
             (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *)
             local_940);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_8e0.SharedReferenceCount.ReferenceController._4_4_,
                      local_8e0.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_970.ReferenceController);
  return;
}

// DetectItemSelectionChanged @ 1469be340

void __thiscall
SObjectTableRow<UObject_*>::DetectItemSelectionChanged(SObjectTableRow<UObject_*> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  ITypedTableView<UObject_*> *pIVar2;
  code *pcVar3;
  atomic<int> aVar4;
  char cVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  ulonglong local_res8;
  FString local_28;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_res8 = local_res8 & 0xffffffff00000000;
  pTVar1 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar8 = pTVar9;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1469be4b4;
      LOCK();
      aVar6 = pTVar1->SharedReferenceCount;
      bVar10 = aVar4 == aVar6;
      if (bVar10) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar10);
    pIVar2 = (this->OwnerTablePtr).Object;
    pTVar8 = pTVar1;
    if (pIVar2 != (ITypedTableView<UObject_*> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pTVar8 = (TReferenceControllerBase<1> *)&this->_padding_;
      if (this == (SObjectTableRow<UObject_*> *)0x0) {
        pTVar8 = pTVar9;
      }
      pTVar7 = (TReferenceControllerBase<1> *)(**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,pTVar8)
      ;
      if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
         (cVar5 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2), pTVar7 = pTVar9, cVar5 == '\0')) {
        FReflectionMetaData::GetWidgetPath(&local_28,(SWidget *)this,false,false);
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                            ,0x32c,
                            L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                           );
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      pTVar8 = pTVar1;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        if ((pIVar2 == (ITypedTableView<UObject_*> *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_res8 = pTVar7->_padding_;
        cVar5 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,&local_res8);
        if (this->bIsAppearingSelected != (bool)cVar5) {
          this->bIsAppearingSelected = this->bIsAppearingSelected == false;
          (**(code **)(this->_padding_ + 0x280))(this);
        }
      }
    }
  }
LAB_1469be4b4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// DetectItemSelectionChanged @ 1469be4e0

EActiveTimerReturnType __thiscall
SObjectTableRow<UObject_*>::DetectItemSelectionChanged
          (SObjectTableRow<UObject_*> *this,double param_1,float param_2)

{
  (**(code **)(this->_padding_ + 0x250))();
  return Continue;
}

// DoesItemHaveChildren @ 1469be940

int __thiscall SObjectTableRow<UObject_*>::DoesItemHaveChildren(SObjectTableRow<UObject_*> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  byte bVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uVar7;
  bool bVar8;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  uVar7 = 0;
  pTVar6 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469be973;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    plVar2 = (longlong *)this->_padding_;
    pTVar6 = pTVar1;
    if (plVar2 != (longlong *)0x0) {
      bVar4 = (**(code **)(*plVar2 + 0x68))(plVar2,(int)this->_padding_);
      uVar7 = (uint)bVar4;
    }
  }
LAB_1469be973:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return uVar7;
}

// GetContent @ 1469ce7d0

TSharedPtr<SWidget,1> * __thiscall
SObjectTableRow<UObject_*>::GetContent
          (SObjectTableRow<UObject_*> *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)&this[-1].OnUnhovered + 0x10))
                     (&this[-1].OnUnhovered,local_18,0);
  __return_storage_ptr__->Object = (SWidget *)*puVar2;
  pTVar1 = (TReferenceControllerBase<1> *)puVar2[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetIndentLevel @ 1469d1360

int __thiscall SObjectTableRow<UObject_*>::GetIndentLevel(SObjectTableRow<UObject_*> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  iVar5 = 0;
  pTVar6 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469d1393;
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    plVar2 = (longlong *)this->_padding_;
    pTVar6 = pTVar1;
    if (plVar2 != (longlong *)0x0) {
      iVar5 = (**(code **)(*plVar2 + 0x88))(plVar2,(int)this->_padding_);
    }
  }
LAB_1469d1393:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return iVar5;
}

// GetIndexInList @ 1469d1590

int __thiscall SObjectTableRow<UObject_*>::GetIndexInList(SObjectTableRow<UObject_*> *this)

{
  return (int)this->_padding_;
}

// GetItemForThis @ 1469d1810

TObjectPtr<UObject> * __thiscall
SObjectTableRow<UObject_*>::GetItemForThis
          (SObjectTableRow<UObject_*> *this,TSharedRef<ITypedTableView<UObject_*>,1> *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  TObjectPtr<UObject> *pTVar4;
  longlong *plVar5;
  FString local_18;
  
  plVar5 = &this->_padding_;
  if (this == (SObjectTableRow<UObject_*> *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  pTVar4 = (TObjectPtr<UObject> *)
           (**(code **)((longlong)*param_1->Object + 0x48))(param_1->Object,plVar5);
  if (pTVar4 == (TObjectPtr<UObject> *)0x0) {
    cVar2 = (**(code **)((longlong)*param_1->Object + 200))();
    if (cVar2 == '\0') {
      FReflectionMetaData::GetWidgetPath(&local_18,(SWidget *)this,false,false);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerTable->Private_IsPendingRefresh()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                         ,0x32c,
                         L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TObjectPtr<UObject> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar4 = (TObjectPtr<UObject> *)0x0;
  }
  return pTVar4;
}

// GetOwningListView @ 1469d2f00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UListViewBase * __thiscall
SObjectTableRow<UObject_*>::GetOwningListView(SObjectTableRow<UObject_*> *this)

{
  bool bVar1;
  UListViewBase *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = (UListViewBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    return pUVar2;
  }
  return (UListViewBase *)0x0;
}

// GetRowSizeForColumn @ 1469d6fc0

TVector2<double> * __thiscall
SObjectTableRow<UObject_*>::GetRowSizeForColumn
          (SObjectTableRow<UObject_*> *this,TVector2<double> *__return_storage_ptr__,FName *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetSelectionMode @ 1469d83a0

Type __thiscall SObjectTableRow<UObject_*>::GetSelectionMode(SObjectTableRow<UObject_*> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  Type TVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  TVar4 = None;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469d83d3;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar5 = pTVar1;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      TVar4 = (**(code **)(*(longlong *)this->_padding_ + 0xb8))();
    }
  }
LAB_1469d83d3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return TVar4;
}

// GetUserWidget @ 1469d9750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall SObjectTableRow<UObject_*>::GetUserWidget(SObjectTableRow<UObject_*> *this)

{
  return *(UUserWidget **)&this[-1].OnRowDragCancelled.field_0x10;
}

// GetWiresNeededByDepth @ 1469da400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBitArray<FDefaultBitArrayAllocator> * __thiscall
SObjectTableRow<UObject_*>::GetWiresNeededByDepth
          (SObjectTableRow<UObject_*> *this,
          TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  bool bVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  void *pvVar7;
  ForElementType<unsigned_int> FVar8;
  ForElementType<unsigned_int> _Src;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70 [16];
  void *local_60;
  undefined4 local_58;
  undefined4 local_54;
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  local_78 = 0;
  pTVar9 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1469da466;
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    pTVar9 = pTVar10;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      pvVar7 = (void *)(**(code **)(*(longlong *)this->_padding_ + 0x90))();
      local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_50.MaxBits = 0;
      local_50.NumBits = 0;
      uVar6 = *(int *)((longlong)pvVar7 + 0x18) + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar6) {
        local_50.MaxBits = 0x80;
        if (0x80 < (int)uVar6) {
          local_50.MaxBits = uVar6;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
      }
      local_50.NumBits = *(int *)((longlong)pvVar7 + 0x18);
      if (local_50.NumBits != 0) {
        if (*(void **)((longlong)pvVar7 + 0x10) != (void *)0x0) {
          pvVar7 = *(void **)((longlong)pvVar7 + 0x10);
        }
        FVar8 = (ForElementType<unsigned_int>)&local_50;
        if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_50.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar8,pvVar7,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
      }
      FVar8 = (ForElementType<unsigned_int>)&local_50;
      bVar3 = true;
      bVar12 = false;
      goto LAB_1469da486;
    }
  }
LAB_1469da466:
  local_60 = (void *)0x0;
  local_54 = 0x80;
  FVar8 = (ForElementType<unsigned_int>)local_70;
  local_58 = 0;
  bVar3 = false;
  bVar12 = true;
  pTVar10 = pTVar9;
LAB_1469da486:
  pvVar7 = local_60;
  iVar1 = *(int *)((longlong)FVar8 + 0x18);
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  __return_storage_ptr__->NumBits = 0;
  __return_storage_ptr__->MaxBits = 0;
  uVar6 = iVar1 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar6) {
    uVar11 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar11 = uVar6;
    }
    __return_storage_ptr__->MaxBits = uVar11;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(__return_storage_ptr__,0);
  }
  iVar1 = *(int *)((longlong)FVar8 + 0x18);
  __return_storage_ptr__->NumBits = iVar1;
  if (iVar1 != 0) {
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    _Src = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      _Src = FVar8;
    }
    FVar8 = (ForElementType<unsigned_int>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar8 = FVar2;
    }
    memcpy((void *)FVar8,(void *)_Src,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  if ((bVar12) && (pvVar7 != (void *)0x0)) {
    FMemory::Free(pvVar7);
  }
  if ((bVar3) && (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// HandleEntryDragged @ 1469dad50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SObjectTableRow<UObject_*>::HandleEntryDragged
          (SObjectTableRow<UObject_*> *this,UDragDropOperation *param_1)

{
  UClass *pUVar1;
  UObject *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UDragDropOperation *pUStackX_8;
  
  this_00 = (UObject *)this->_padding_;
  if (this_00 == (UObject *)0x0) {
    return;
  }
  pUVar1 = *(UClass **)&this_00->field_0x10;
  if (pUVar1 != (UClass *)0x0) {
    pUVar4 = UUserListEntry::StaticClass();
    bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
    if (bVar3) {
      pUVar1 = *(UClass **)&this_00->field_0x10;
      pUVar4 = UUserListEntry::StaticClass();
      bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0x6d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar5 = UObject::FindFunction(this_00,NAME_UUserListEntry_BP_OnEntryDragged);
      if (pUVar5 != (UFunction *)0x0) {
        pUStackX_8 = param_1;
        (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar5,&pUStackX_8);
      }
    }
  }
  return;
}

// HandleEntryDropped @ 1469dad70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SObjectTableRow<UObject_*>::HandleEntryDropped
          (SObjectTableRow<UObject_*> *this,UDragDropOperation *param_1)

{
  UClass *pUVar1;
  UObject *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UDragDropOperation *pUStackX_8;
  
  this_00 = (UObject *)this->_padding_;
  if (this_00 == (UObject *)0x0) {
    return;
  }
  pUVar1 = *(UClass **)&this_00->field_0x10;
  if (pUVar1 != (UClass *)0x0) {
    pUVar4 = UUserListEntry::StaticClass();
    bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
    if (bVar3) {
      pUVar1 = *(UClass **)&this_00->field_0x10;
      pUVar4 = UUserListEntry::StaticClass();
      bVar3 = UClass::ImplementsInterface(pUVar1,pUVar4);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0xf2,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar5 = UObject::FindFunction(this_00,NAME_UUserListEntry_BP_OnEntryDropped);
      if (pUVar5 != (UFunction *)0x0) {
        pUStackX_8 = param_1;
        (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar5,&pUStackX_8);
      }
    }
  }
  return;
}

// InitializeObjectRow @ 1469e0240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall SObjectTableRow<UObject_*>::InitializeObjectRow(SObjectTableRow<UObject_*> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  ITypedTableView<UObject_*> *pIVar2;
  UObject *pUVar3;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong *plVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  ulonglong local_res8;
  FString local_28;
  
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  local_res8 = local_res8 & 0xffffffff00000000;
  pTVar1 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar12 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar1->SharedReferenceCount;
    do {
      pTVar12 = pTVar13;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1469e0472;
      LOCK();
      aVar7 = pTVar1->SharedReferenceCount;
      bVar14 = aVar5 == aVar7;
      if (bVar14) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar14);
    pIVar2 = (this->OwnerTablePtr).Object;
    pTVar12 = pTVar1;
    if (pIVar2 != (ITypedTableView<UObject_*> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pTVar12 = (TReferenceControllerBase<1> *)&this->_padding_;
      if (this == (SObjectTableRow<UObject_*> *)0x0) {
        pTVar12 = pTVar13;
      }
      pTVar8 = (TReferenceControllerBase<1> *)
               (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,pTVar12);
      if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
         (cVar6 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2), pTVar8 = pTVar13, cVar6 == '\0'))
      {
        FReflectionMetaData::GetWidgetPath(&local_28,(SWidget *)this,false,false);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                            ,0x32c,
                            L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                           );
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      pTVar12 = pTVar1;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        pUVar3 = (UObject *)pTVar8->_padding_;
        pUVar10 = *(UClass **)(this->_padding_ + 0x10);
        if (pUVar10 != (UClass *)0x0) {
          pUVar9 = Z_Construct_UClass_UUserObjectListEntry_NoRegister();
          bVar14 = UClass::ImplementsInterface(pUVar10,pUVar9);
          if (bVar14) {
            IUserObjectListEntry::SetListItemObject((UUserWidget *)this->_padding_,pUVar3);
          }
        }
        if ((pIVar2 == (ITypedTableView<UObject_*> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_res8 = pTVar8->_padding_;
        cVar6 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,&local_res8);
        if ((cVar6 != '\0') &&
           (this_00 = (UObjectBaseUtility *)this->_padding_, this_00 != (UObjectBaseUtility *)0x0))
        {
          pUVar10 = Z_Construct_UClass_UUserListEntry_NoRegister();
          plVar11 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar10);
          if ((plVar11 != (longlong *)0x0) &&
             (cVar6 = (**(code **)(*plVar11 + 0x10))(plVar11), cVar6 == '\0')) {
            bVar14 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5391091646278401293>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                                ,0x2f3,
                                "!OwnerTable->Private_IsItemSelected(*MyItemPtr) || IsItemSelectable()"
                               );
            if (bVar14) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((pIVar2 == (ITypedTableView<UObject_*> *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,pTVar8->_padding_,0,0);
          }
        }
      }
    }
  }
LAB_1469e0472:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// InitializeRow @ 1469e04a0

void __thiscall SObjectTableRow<UObject_*>::InitializeRow(SObjectTableRow<UObject_*> *this)

{
  if (*(longlong *)&this[-1].OnRowDragCancelled.field_0x10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001469e04b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this[-1]._padding_ + 0x270))();
    return;
  }
  return;
}

// IsItemExpanded @ 1469e1920

bool __thiscall SObjectTableRow<UObject_*>::IsItemExpanded(SObjectTableRow<UObject_*> *this)

{
  SObjectTableRow<UObject_*> *pSVar1;
  code *pcVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  SObjectTableRow<UObject_*> *pSVar7;
  SObjectTableRow<UObject_*> *pSVar8;
  SObjectTableRow<UObject_*> *pSVar9;
  SObjectTableRow<UObject_*> *pSVar10;
  SObjectTableRow<UObject_*> *pSVar11;
  bool bVar12;
  SObjectTableRow<UObject_*> *local_res8;
  FString local_28;
  
  pSVar9 = (SObjectTableRow<UObject_*> *)0x0;
  local_res8 = (SObjectTableRow<UObject_*> *)((ulonglong)local_res8 & 0xffffffff00000000);
  pSVar1 = (SObjectTableRow<UObject_*> *)this->_padding_;
  pSVar8 = pSVar1;
  pSVar10 = pSVar9;
  pSVar7 = pSVar9;
  pSVar11 = local_res8;
  if (pSVar1 != (SObjectTableRow<UObject_*> *)0x0) {
    iVar3 = (int)pSVar1->_padding_;
    do {
      pSVar8 = pSVar9;
      pSVar10 = (SObjectTableRow<UObject_*> *)0x0;
      if (iVar3 == 0) goto LAB_1469e196a;
      LOCK();
      iVar6 = (int)pSVar1->_padding_;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *(int *)&pSVar1->_padding_ = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar6;
    } while (!bVar12);
    pSVar10 = (SObjectTableRow<UObject_*> *)this->_padding_;
    pSVar8 = pSVar1;
    if (pSVar10 != (SObjectTableRow<UObject_*> *)0x0) {
      LOCK();
      *(int *)&pSVar1->_padding_ = (int)pSVar1->_padding_ + 1;
      UNLOCK();
      pSVar8 = this;
      if (&this[-1]._padding_ == (longlong *)0x0) {
        pSVar8 = pSVar9;
      }
      pSVar7 = (SObjectTableRow<UObject_*> *)
               (**(code **)(pSVar10->_padding_ + 0x48))(pSVar10,pSVar8);
      if ((pSVar7 == (SObjectTableRow<UObject_*> *)0x0) &&
         (cVar5 = (**(code **)(pSVar10->_padding_ + 200))(pSVar10), pSVar7 = pSVar9, cVar5 == '\0'))
      {
        FReflectionMetaData::GetWidgetPath(&local_28,(SWidget *)&this[-1]._padding_,false,false);
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                            ,0x32c,
                            L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                           );
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar12) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pSVar9 = (SObjectTableRow<UObject_*> *)&DAT_00000001;
      pSVar8 = pSVar1;
      pSVar11 = pSVar1;
    }
  }
LAB_1469e196a:
  if (pSVar9 != (SObjectTableRow<UObject_*> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
  }
  if (pSVar7 == (SObjectTableRow<UObject_*> *)0x0) {
    uVar4 = 0;
  }
  else {
    if ((pSVar10 == (SObjectTableRow<UObject_*> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res8 = (SObjectTableRow<UObject_*> *)pSVar7->_padding_;
    uVar4 = (**(code **)(pSVar10->_padding_ + 0x60))(pSVar10,&local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return (bool)uVar4;
}

// IsItemSelectable @ 1469e1d30

bool __thiscall SObjectTableRow<UObject_*>::IsItemSelectable(SObjectTableRow<UObject_*> *this)

{
  UObjectBaseUtility *this_00;
  undefined1 uVar1;
  UClass *pUVar2;
  longlong *plVar3;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar2 = Z_Construct_UClass_UUserListEntry_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469e1d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,*(code **)(*plVar3 + 0x10));
      return (bool)uVar1;
    }
  }
  return true;
}

// IsItemSelected @ 1469e1d80

bool __thiscall SObjectTableRow<UObject_*>::IsItemSelected(SObjectTableRow<UObject_*> *this)

{
  SObjectTableRow<UObject_*> *pSVar1;
  code *pcVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  SObjectTableRow<UObject_*> *pSVar7;
  SObjectTableRow<UObject_*> *pSVar8;
  SObjectTableRow<UObject_*> *pSVar9;
  SObjectTableRow<UObject_*> *pSVar10;
  SObjectTableRow<UObject_*> *pSVar11;
  bool bVar12;
  SObjectTableRow<UObject_*> *local_res8;
  FString local_28;
  
  pSVar9 = (SObjectTableRow<UObject_*> *)0x0;
  local_res8 = (SObjectTableRow<UObject_*> *)((ulonglong)local_res8 & 0xffffffff00000000);
  pSVar1 = (SObjectTableRow<UObject_*> *)this->_padding_;
  pSVar8 = pSVar1;
  pSVar10 = pSVar9;
  pSVar7 = pSVar9;
  pSVar11 = local_res8;
  if (pSVar1 != (SObjectTableRow<UObject_*> *)0x0) {
    iVar3 = (int)pSVar1->_padding_;
    do {
      pSVar8 = pSVar9;
      pSVar10 = (SObjectTableRow<UObject_*> *)0x0;
      if (iVar3 == 0) goto LAB_1469e1dca;
      LOCK();
      iVar6 = (int)pSVar1->_padding_;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *(int *)&pSVar1->_padding_ = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar6;
    } while (!bVar12);
    pSVar10 = (SObjectTableRow<UObject_*> *)this->_padding_;
    pSVar8 = pSVar1;
    if (pSVar10 != (SObjectTableRow<UObject_*> *)0x0) {
      LOCK();
      *(int *)&pSVar1->_padding_ = (int)pSVar1->_padding_ + 1;
      UNLOCK();
      pSVar8 = this;
      if (&this[-1]._padding_ == (longlong *)0x0) {
        pSVar8 = pSVar9;
      }
      pSVar7 = (SObjectTableRow<UObject_*> *)
               (**(code **)(pSVar10->_padding_ + 0x48))(pSVar10,pSVar8);
      if ((pSVar7 == (SObjectTableRow<UObject_*> *)0x0) &&
         (cVar5 = (**(code **)(pSVar10->_padding_ + 200))(pSVar10), pSVar7 = pSVar9, cVar5 == '\0'))
      {
        FReflectionMetaData::GetWidgetPath(&local_28,(SWidget *)&this[-1]._padding_,false,false);
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                            ,0x32c,
                            L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                           );
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar12) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pSVar9 = (SObjectTableRow<UObject_*> *)&DAT_00000001;
      pSVar8 = pSVar1;
      pSVar11 = pSVar1;
    }
  }
LAB_1469e1dca:
  if (pSVar9 != (SObjectTableRow<UObject_*> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
  }
  if (pSVar7 == (SObjectTableRow<UObject_*> *)0x0) {
    uVar4 = 0;
  }
  else {
    if ((pSVar10 == (SObjectTableRow<UObject_*> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_res8 = (SObjectTableRow<UObject_*> *)pSVar7->_padding_;
    uVar4 = (**(code **)(pSVar10->_padding_ + 0x10))(pSVar10,&local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return (bool)uVar4;
}

// IsLastChild @ 1469e2190

bool __thiscall SObjectTableRow<UObject_*>::IsLastChild(SObjectTableRow<UObject_*> *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469e21c0;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    plVar1 = (longlong *)this->_padding_;
    if (plVar1 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar1 + 0x98))(plVar1,(int)this->_padding_);
      goto LAB_1469e21c3;
    }
  }
LAB_1469e21c0:
  uVar3 = 1;
LAB_1469e21c3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (bool)uVar3;
}

// NotifyItemExpansionChanged @ 1469e4c70

void __thiscall
SObjectTableRow<UObject_*>::NotifyItemExpansionChanged
          (SObjectTableRow<UObject_*> *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  undefined1 auStackX_8 [8];
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return;
  }
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar3 = UUserListEntry::StaticClass();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014694aa72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x20))(plVar4,param_1,*(code **)(*plVar4 + 0x20));
      return;
    }
  }
  pUVar3 = *(UClass **)&this_00->field_0x10;
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = UUserListEntry::StaticClass();
    bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
    if (bVar2) {
      pUVar3 = *(UClass **)&this_00->field_0x10;
      pUVar5 = UUserListEntry::StaticClass();
      bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0x161,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pUVar6 = UObject::FindFunction
                         ((UObject *)this_00,NAME_UUserListEntry_BP_OnItemExpansionChanged);
      if (pUVar6 != (UFunction *)0x0) {
        auStackX_8[0] = param_1;
        (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar6,auStackX_8);
      }
    }
  }
  return;
}

// OnDragCancelled @ 1469e5f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectTableRow<UObject_*>::OnDragCancelled
          (SObjectTableRow<UObject_*> *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  SObjectWidget::OnDragCancelled((SObjectWidget *)this,param_1,param_2);
  if (this->_padding_ != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRowDragCancelled,
               &local_28);
    if ((*(int *)&(this->OnRowDragCancelled).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnRowDragCancelled).field_0x8, plVar2 != (longlong *)0x0)) {
      cVar1 = (**(code **)(*plVar2 + 0x38))();
      if (cVar1 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        IUserListEntry::EndEntryDropOperation((UUserWidget *)this->_padding_,false);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnRowDragCancelled,&local_28);
        if (*(int *)&(this->OnRowDragCancelled).field_0x10 == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)&(this->OnRowDragCancelled).field_0x8;
        }
        (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OnDragDetected @ 1469e5fb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectTableRow<UObject_*>::OnDragDetected
          (SObjectTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  SObjectWidget *pSVar5;
  UUserWidget *this_00;
  atomic<int> aVar6;
  FSharedReferencer<1> FVar7;
  atomic<int> aVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FReply *pFVar10;
  UDragDropOperation *pUVar11;
  UClass *pUVar12;
  longlong *plVar13;
  TReferenceControllerBase<1> *pTVar14;
  ITypedTableView<UObject_*> *pIVar15;
  bool bVar16;
  float fVar17;
  float local_res8;
  float fStackX_c;
  TSharedPtr<SObjectWidget,1> local_398;
  TSharedRef<FUMGDragDropOp,1> local_388;
  TVector2<double>_u_0 local_378;
  TSharedRef<SWidget,1> local_368;
  TVector2<double>_u_0 local_358;
  FReadAccessScope local_348;
  FReply local_328;
  FReply local_268;
  FReply local_1b0;
  FReply local_f8;
  
  FReply::FReply(&local_328,false);
  if ((this->bAllowDragging != false) || (this->bAllowDragDrop != false)) {
    pTVar14 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
    pIVar15 = (ITypedTableView<UObject_*> *)0x0;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar14->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1469e6034;
        }
        LOCK();
        aVar8 = pTVar14->SharedReferenceCount;
        bVar16 = aVar6 == aVar8;
        if (bVar16) {
          pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar8 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar8;
      } while (!bVar16);
      pIVar15 = (this->OwnerTablePtr).Object;
    }
LAB_1469e6034:
    if (this->bProcessingSelectionTouch != false) {
      this->bProcessingSelectionTouch = false;
      if (pIVar15 == (ITypedTableView<UObject_*> *)0x0) {
        FReply::FReply(&local_f8,false);
        FReply::FReply(__return_storage_ptr__,&local_f8);
        FReply::~FReply(&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
      }
      else {
        FReply::FReply(&local_268,true);
        pTVar9 = (TSharedRef<SWidget,1> *)
                 (**(code **)((longlong)*pIVar15 + 0xe8))(pIVar15,&local_378);
        pFVar10 = FReply::CaptureMouse(&local_268,pTVar9);
        pFVar10 = FReply::FReply(&local_1b0,pFVar10);
        FReply::FReply(__return_storage_ptr__,pFVar10);
        FReply::~FReply(&local_1b0);
        FReply::~FReply(&local_268);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
      }
      goto LAB_1469e6406;
    }
    bVar16 = SWidget::HasMouseCapture((SWidget *)this);
    if (((bVar16) && (this->bChangedSelectionOnMouseDown != false)) &&
       (this->bDragWasDetected = true, pIVar15 != (ITypedTableView<UObject_*> *)0x0)) {
      (**(code **)((longlong)*pIVar15 + 0x40))(pIVar15,2);
    }
    pFVar10 = SObjectWidget::OnDragDetected((SObjectWidget *)this,&local_1b0,param_1,param_2);
    FReply::operator=(&local_328,pFVar10);
    FReply::~FReply(&local_1b0);
    if ((((char)local_328._padding_ == '\0') && (this->bAllowDragDrop != false)) &&
       ((bVar16 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowDragDetected),
        bVar16 && (lVar3 = this->_padding_, lVar3 != 0)))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRowDragDetected,
                 &local_348);
      if (*(int *)&(this->OnRowDragDetected).field_0x10 == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = *(longlong **)&(this->OnRowDragDetected).field_0x8;
      }
      pUVar11 = (UDragDropOperation *)(**(code **)(*plVar13 + 0x60))(plVar13,param_1,param_2,lVar3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_348);
      if (pUVar11 == (UDragDropOperation *)0x0) {
        FReply::FReply(__return_storage_ptr__,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
      }
      else {
        IUserListEntry::UpdateEntryDragOverState((UUserWidget *)this->_padding_,true);
        local_378._s_0.X = (double)*(float *)&param_2->ScreenSpacePosition;
        local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
        fStackX_c = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
        local_378._s_0.Y = (double)*(float *)&(param_2->ScreenSpacePosition).field_0x4;
        local_358._s_0.X =
             (double)(fStackX_c * (param_1->AccumulatedRenderTransform).M.M[1][0] +
                      local_res8 * (param_1->AccumulatedRenderTransform).M.M[0][0] +
                     (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
        local_358._s_0.Y =
             (double)(local_res8 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
                      fStackX_c * (param_1->AccumulatedRenderTransform).M.M[1][1] +
                     (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y);
        fVar17 = UWidgetLayoutLibrary::GetViewportScale((UObject *)this->_padding_);
        uVar1 = param_2->PointerIndex;
        pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_368);
        pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
        pSVar5 = (SObjectWidget *)pTVar9->Object;
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_368.SharedReferenceCount.ReferenceController);
        }
        else {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_368.SharedReferenceCount.ReferenceController);
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_398.Object = pSVar5;
        local_398.SharedReferenceCount.ReferenceController = pTVar4;
        FUMGDragDropOp::New(&local_388,pUVar11,uVar1,(TVector2<double> *)&local_378._s_0,
                            (TVector2<double> *)&local_358._s_0,fVar17,&local_398);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        this_00 = (UUserWidget *)(pUVar11->DefaultDragVisual).field0_0x0.DebugPtr;
        if (this_00 != (UUserWidget *)0x0) {
          pUVar12 = Z_Construct_UClass_UUserWidget_NoRegister();
          iVar2 = (int)pUVar12->_padding_;
          if (((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
               &pUVar12->_padding_)) &&
             (bVar16 = UObject::Implements<UUserObjectListEntry>((UObject *)this_00), bVar16)) {
            IUserObjectListEntry::SetListItemObject(this_00,(pUVar11->Payload).field0_0x0.DebugPtr);
          }
        }
        FReply::FReply(&local_268,true);
        FVar7.ReferenceController = local_388.SharedReferenceCount.ReferenceController;
        if (local_388.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
          LOCK();
          (local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_398.SharedReferenceCount.ReferenceController =
             local_388.SharedReferenceCount.ReferenceController;
        local_268.DragDropContent.Object = (FDragDropOperation *)local_388.Object;
        local_398.Object = (SObjectWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_268.DragDropContent.SharedReferenceCount,&local_398.SharedReferenceCount);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_398.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        FReply::FReply(__return_storage_ptr__,&local_268);
        FReply::~FReply(&local_268);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_388.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
      }
      goto LAB_1469e6406;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  this->bProcessingSelectionTouch = false;
  FReply::FReply(__return_storage_ptr__,&local_328);
LAB_1469e6406:
  FReply::~FReply(&local_328);
  return __return_storage_ptr__;
}

// OnDragEnter @ 1469e6860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectTableRow<UObject_*>::OnDragEnter
          (SObjectTableRow<UObject_*> *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  SObjectWidget::OnDragEnter((SObjectWidget *)this,param_1,param_2);
  if (this->_padding_ != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRowDragEnter,
               &local_28);
    if ((*(int *)&(this->OnRowDragEnter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnRowDragEnter).field_0x8, plVar1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar1 + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        IUserListEntry::UpdateEntryDragOverState((UUserWidget *)this->_padding_,true);
        TDelegate<void___cdecl(FDragDropEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>::
        Execute(&this->OnRowDragEnter,param_2,(UUserWidget *)this->_padding_);
        return;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OnDragLeave @ 1469e6a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectTableRow<UObject_*>::OnDragLeave(SObjectTableRow<UObject_*> *this,FDragDropEvent *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 local_28 [8];
  FReadAccessScope local_20;
  
  SObjectWidget::OnDragLeave((SObjectWidget *)this,param_1);
  if (((TOptional<EItemDropZone> *)local_28 != &this->ItemDropZone) &&
     ((this->ItemDropZone).bIsSet != false)) {
    (this->ItemDropZone).bIsSet = false;
  }
  if (this->_padding_ != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRowDragLeave,
               &local_20);
    if ((*(int *)&(this->OnRowDragLeave).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnRowDragLeave).field_0x8, plVar1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar1 + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        IUserListEntry::UpdateEntryDragOverState((UUserWidget *)this->_padding_,false);
        TDelegate<void___cdecl(FDragDropEvent_const_&,UUserWidget_&),FDefaultDelegateUserPolicy>::
        Execute(&this->OnRowDragLeave,param_1,(UUserWidget *)this->_padding_);
        return;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  return;
}

// OnDragOver @ 1469e6c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectTableRow<UObject_*>::OnDragOver
          (SObjectTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  TOptional<EItemDropZone> *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  FDeprecateSlateVector2D FVar4;
  code *pcVar5;
  atomic<int> aVar6;
  char cVar7;
  atomic<int> aVar8;
  int iVar9;
  int iVar10;
  FReply *pFVar11;
  TTransform2<float> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined8 local_178;
  EItemDropZone local_170;
  char local_16c;
  EItemDropZone local_168;
  char local_164;
  FReadAccessScope local_160;
  FReadAccessScope local_148;
  int local_130;
  FDragDropEvent local_128;
  SObjectTableRow<UObject_*> *local_98;
  TTransform2<float> local_90;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  SObjectWidget::OnDragOver((SObjectWidget *)this,__return_storage_ptr__,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRowCanAcceptDrop,
             &local_160);
  if (((*(int *)&(this->OnRowCanAcceptDrop).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->OnRowCanAcceptDrop).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*plVar2 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_160);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_160);
  if ((char)__return_storage_ptr__->_padding_ != '\0') {
    return __return_storage_ptr__;
  }
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pTVar15 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  iVar10 = 0;
  pTVar14 = pTVar15;
  pTVar16 = pTVar13;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar15->SharedReferenceCount;
    do {
      pTVar14 = pTVar13;
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1469e6d25;
      LOCK();
      aVar8 = pTVar15->SharedReferenceCount;
      bVar17 = aVar6 == aVar8;
      if (bVar17) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar17);
    pTVar16 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar14 = pTVar15;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e6d76;
  }
LAB_1469e6d25:
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar17) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FReply *)(*pcVar5)();
    return pFVar11;
  }
  pTVar15 = pTVar14;
  if ((pTVar16 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FReply *)(*pcVar5)();
    return pFVar11;
  }
LAB_1469e6d76:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar12 = Inverse<TTransform2<float>_>(&local_90,&param_1->AccumulatedRenderTransform);
  lVar3 = param_2->_padding_;
  local_178._4_4_ = (float)((ulonglong)lVar3 >> 0x20);
  local_178._0_4_ = (float)lVar3;
  fVar20 = local_178._4_4_ * (pTVar12->M).M[1][0];
  fVar18 = (float)local_178 * (pTVar12->M).M[0][0];
  fVar19 = (pTVar12->Trans).field0_0x0._s_0.X;
  fVar21 = (float)local_178 * (pTVar12->M).M[0][1] + local_178._4_4_ * (pTVar12->M).M[1][1] +
           (pTVar12->Trans).field0_0x0._s_0.Y;
  local_178 = (FDeprecateSlateVector2D)lVar3;
  iVar9 = (**(code **)(pTVar16->_padding_ + 0xc0))(pTVar16);
  FVar4 = param_1->Size;
  if (iVar9 == 0) {
    local_178._0_4_ = FVar4._0_4_;
    fVar21 = fVar20 + fVar18 + fVar19;
  }
  else {
    local_178._4_4_ = FVar4._4_4_;
    local_178._0_4_ = local_178._4_4_;
  }
  fVar19 = (float)local_178 * __real_3e800000;
  if (__real_41200000 <= (float)local_178 * __real_3e800000) {
    fVar19 = __real_41200000;
  }
  if (fVar19 <= __real_40400000) {
    fVar19 = __real_40400000;
  }
  if (fVar19 <= fVar21) {
    iVar10 = ((float)local_178 - fVar19 < fVar21) + 1;
  }
  local_178 = FVar4;
  local_130 = iVar10;
  FDragDropEvent::FDragDropEvent(&local_128,param_2);
  iVar10 = local_130;
  lVar3 = this->_padding_;
  local_98 = this;
  if (lVar3 == 0) {
    local_16c = '\0';
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRowCanAcceptDrop,
               &local_148);
    if (*(int *)&(this->OnRowCanAcceptDrop).field_0x10 != 0) {
      pTVar13 = *(TReferenceControllerBase<1> **)&(this->OnRowCanAcceptDrop).field_0x8;
    }
    local_188 = lVar3;
    (**(code **)(pTVar13->_padding_ + 0x60))(pTVar13,&local_170,&local_128,iVar10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_148);
  }
  pTVar1 = &this->ItemDropZone;
  if ((TOptional<EItemDropZone> *)&local_170 != pTVar1) {
    if (local_16c == '\0') {
      if ((this->ItemDropZone).bIsSet != false) {
        (this->ItemDropZone).bIsSet = false;
      }
    }
    else {
      pTVar1->TypedValue = local_170;
      (this->ItemDropZone).bIsSet = true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.Content.SharedReferenceCount.ReferenceController);
  FPointerEvent::~FPointerEvent((FPointerEvent *)&local_128);
  if ((UUserWidget *)this->_padding_ != (UUserWidget *)0x0) {
    local_164 = (this->ItemDropZone).bIsSet;
    if ((bool)local_164 != false) {
      local_168 = pTVar1->TypedValue;
    }
    IUserListEntry::UpdateEntryDropIndicator
              ((UUserWidget *)this->_padding_,(TOptional<EItemDropZone>)&local_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return __return_storage_ptr__;
}

// OnDrop @ 1469e77b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectTableRow<UObject_*>::OnDrop
          (SObjectTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  EOrientation EVar8;
  EItemDropZone EVar9;
  TTransform2<float> *pTVar10;
  TOptional<EItemDropZone> TVar11;
  FReply *pFVar12;
  FString *pFVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_438 [32];
  FScriptContainerElement *local_418;
  char local_408;
  undefined8 local_400;
  EItemDropZone local_3f8 [2];
  TSharedPtr<ITypedTableView<UObject_*>,1> local_3f0;
  TSharedRef<ITypedTableView<UObject_*>,1> local_3e0;
  FString local_3d0;
  undefined8 *local_3c0;
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [32];
  FReadAccessScope local_390;
  FReply local_378;
  FReply local_2b8;
  FReply local_200;
  FReply local_148;
  TTransform2<float> local_90;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_438;
  if (this->bAllowDragDrop == false) {
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  SObjectWidget::OnDrop((SObjectWidget *)this,&local_378,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRowAcceptDrop,
             (FReadAccessScope *)(local_3b0 + 8));
  if (((*(int *)&(this->OnRowAcceptDrop).field_0x10 == 0) ||
      (plVar14 = *(longlong **)&(this->OnRowAcceptDrop).field_0x8, plVar14 == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*plVar14 + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_3b0 + 8));
LAB_1469e7c8d:
    FReply::FReply(__return_storage_ptr__,&local_378);
    FReply::~FReply(&local_378);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_3b0 + 8));
  if ((char)local_378._padding_ != '\0') goto LAB_1469e7c8d;
  local_3f0.SharedReferenceCount.ReferenceController =
       (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  plVar14 = (longlong *)0x0;
  local_3f0.Object = (ITypedTableView<UObject_*> *)0x0;
  if (local_3f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = (local_3f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        local_3f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469e78a7;
      }
      LOCK();
      aVar7 = (local_3f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar15 = aVar5 == aVar7;
      if (bVar15) {
        (local_3f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar15);
    local_3f0.Object = (this->OwnerTablePtr).Object;
  }
LAB_1469e78a7:
  TSharedPtr<ITypedTableView<UObject_*>,1>::ToSharedRef(&local_3f0,&local_3e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f0.SharedReferenceCount.ReferenceController);
  if (((TOptional<EItemDropZone> *)local_3b8 != &this->ItemDropZone) &&
     ((this->ItemDropZone).bIsSet != false)) {
    (this->ItemDropZone).bIsSet = false;
  }
  local_3c0 = (undefined8 *)(**(code **)((longlong)*local_3e0.Object + 0x48))(local_3e0.Object);
  if (local_3c0 == (undefined8 *)0x0) {
    cVar6 = (**(code **)((longlong)*local_3e0.Object + 200))(local_3e0.Object);
    if (cVar6 == '\0') {
      pFVar13 = FReflectionMetaData::GetWidgetPath(&local_3d0,(SWidget *)this,false,false);
      if ((pFVar13->Data).ArrayNum == 0) {
        local_418 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_418 = (pFVar13->Data).AllocatorInstance.Data;
      }
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerTable->Private_IsPendingRefresh()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                          ,0x32c,
                          L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                         );
      if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
      }
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FReply *)(*pcVar4)();
        return pFVar12;
      }
    }
    FReply::FReply(__return_storage_ptr__,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e0.SharedReferenceCount.ReferenceController);
    FReply::~FReply(&local_378);
    return __return_storage_ptr__;
  }
  pTVar10 = Inverse<TTransform2<float>_>(&local_90,&param_1->AccumulatedRenderTransform);
  lVar3 = param_2->_padding_;
  local_400._4_4_ = (float)((ulonglong)lVar3 >> 0x20);
  local_400._0_4_ = (float)lVar3;
  fVar19 = local_400._4_4_ * (pTVar10->M).M[1][0];
  fVar18 = (float)local_400 * (pTVar10->M).M[0][1];
  fVar16 = (float)local_400 * (pTVar10->M).M[0][0];
  fVar17 = local_400._4_4_ * (pTVar10->M).M[1][1];
  fVar1 = (pTVar10->Trans).field0_0x0._s_0.X;
  fVar2 = (pTVar10->Trans).field0_0x0._s_0.Y;
  local_400 = (FDeprecateVector2DParameter)lVar3;
  EVar8 = (**(code **)((longlong)*local_3e0.Object + 0xc0))(local_3e0.Object);
  local_400._4_4_ = fVar18 + fVar17 + fVar2;
  local_400._0_4_ = fVar19 + fVar16 + fVar1;
  EVar9 = ZoneFromPointerPosition
                    (this,local_400,*(FDeprecateVector2DParameter *)&param_1->Size,EVar8);
  cVar6 = '\0';
  local_408 = '\0';
  if ((this->_padding_ == 0) ||
     (bVar15 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowCanAcceptDrop),
     !bVar15)) {
    cVar6 = '\x01';
    local_408 = '\x01';
  }
  else {
    local_418 = (FScriptContainerElement *)this->_padding_;
    TVar11 = TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,UUserWidget_&),FDefaultDelegateUserPolicy>
             ::Execute(&this->OnRowCanAcceptDrop,(FDragDropEvent *)local_3b0,(EItemDropZone)param_2,
                       (UUserWidget *)(ulonglong)EVar9);
    bVar15 = false;
    EVar9 = local_3f8[0];
    if ((TVar11 != (TOptional<EItemDropZone>)local_3f8) && (*(char *)((longlong)TVar11 + 4) != '\0')
       ) {
      cVar6 = '\x01';
      local_408 = '\x01';
      bVar15 = true;
      EVar9 = *(EItemDropZone *)TVar11;
    }
    if (!bVar15) {
      (**(code **)(this->_padding_ + 0x248))(this,param_2,0);
      FReply::FReply(&local_2b8,true);
      local_2b8.bEndDragDrop = 1;
      FReply::FReply(__return_storage_ptr__,&local_2b8);
      FReply::~FReply(&local_2b8);
      goto LAB_1469e7ba1;
    }
  }
  FReply::FReply(&local_200,false);
  FReply::operator=(&local_378,&local_200);
  FReply::~FReply(&local_200);
  local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->_padding_;
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRowAcceptDrop,
               &local_390);
    if (*(int *)&(this->OnRowAcceptDrop).field_0x10 != 0) {
      plVar14 = *(longlong **)&(this->OnRowAcceptDrop).field_0x8;
    }
    local_418 = local_3d0.Data.AllocatorInstance.Data;
    (**(code **)(*plVar14 + 0x60))(plVar14,&local_148,param_2,EVar9);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_390);
    FReply::operator=(&local_378,&local_148);
    FReply::~FReply(&local_148);
    IUserListEntry::EndEntryDropOperation
              ((UUserWidget *)this->_padding_,(char)local_378._padding_ != '\0');
    cVar6 = local_408;
  }
  if ((char)local_378._padding_ != '\0') {
    if ((cVar6 == '\0') &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar15)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FReply *)(*pcVar4)();
      return pFVar12;
    }
    if (EVar9 == OntoItem) {
      (**(code **)((longlong)*local_3e0.Object + 0x50))(local_3e0.Object,*local_3c0,1);
    }
  }
  FReply::FReply(__return_storage_ptr__,&local_378);
LAB_1469e7ba1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3e0.SharedReferenceCount.ReferenceController);
  FReply::~FReply(&local_378);
  return __return_storage_ptr__;
}

// OnItemSelectionChanged @ 1469e8d90

void __thiscall
SObjectTableRow<UObject_*>::OnItemSelectionChanged(SObjectTableRow<UObject_*> *this,bool param_1)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  undefined1 auStackX_8 [8];
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return;
  }
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar3 = UUserListEntry::StaticClass();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014694ab62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))(plVar4,param_1,*(code **)(*plVar4 + 0x18));
      return;
    }
  }
  pUVar3 = *(UClass **)&this_00->field_0x10;
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = UUserListEntry::StaticClass();
    bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
    if (bVar2) {
      pUVar3 = *(UClass **)&this_00->field_0x10;
      pUVar5 = UUserListEntry::StaticClass();
      bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0x1a6,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pUVar6 = UObject::FindFunction
                         ((UObject *)this_00,NAME_UUserListEntry_BP_OnItemSelectionChanged);
      if (pUVar6 != (UFunction *)0x0) {
        auStackX_8[0] = param_1;
        (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar6,auStackX_8);
      }
    }
  }
  return;
}

// OnMouseButtonDoubleClick @ 1469ebf10

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SObjectTableRow<UObject_*>::OnMouseButtonDoubleClick
          (SObjectTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITypedTableView<UObject_*> *pIVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  FReply *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FString local_38;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar12 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar12) {
    pTVar2 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
    pTVar10 = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar2->SharedReferenceCount;
      do {
        pTVar10 = pTVar11;
        if (aVar5 == (atomic<int>)0x0) goto LAB_1469ebf83;
        LOCK();
        aVar7 = pTVar2->SharedReferenceCount;
        bVar12 = aVar5 == aVar7;
        if (bVar12) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar7 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar7;
      } while (!bVar12);
      pIVar3 = (this->OwnerTablePtr).Object;
      pTVar10 = pTVar2;
      if (pIVar3 != (ITypedTableView<UObject_*> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        pTVar8 = (TReferenceControllerBase<1> *)(**(code **)((longlong)*pIVar3 + 0x48))(pIVar3);
        if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
           (cVar6 = (**(code **)((longlong)*pIVar3 + 200))(pIVar3), pTVar8 = pTVar11, cVar6 == '\0')
           ) {
          FReflectionMetaData::GetWidgetPath(&local_38,(SWidget *)this,false,false);
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("OwnerTable->Private_IsPendingRefresh()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                              ,0x32c,
                              L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                             );
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (bVar12) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FReply *)(*pcVar4)();
            return pFVar9;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          if ((pIVar3 == (ITypedTableView<UObject_*> *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FReply *)(*pcVar4)();
            return pFVar9;
          }
          (**(code **)((longlong)*pIVar3 + 0xb0))(pIVar3,pTVar8->_padding_);
          FReply::FReply(__return_storage_ptr__,true);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          return __return_storage_ptr__;
        }
      }
    }
LAB_1469ebf83:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1469ec910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectTableRow<UObject_*>::OnMouseButtonDown
          (SObjectTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> aVar6;
  char cVar7;
  atomic<int> aVar8;
  int iVar9;
  TObjectPtr<UObject> *pTVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FReply *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  TObjectPtr<UObject>_u_0 local_res8;
  TSharedRef<SWidget,1> local_118;
  FKey local_108;
  FReply local_f0;
  
  this->bChangedSelectionOnMouseDown = false;
  this->bDragWasDetected = false;
  SObjectWidget::OnMouseButtonDown((SObjectWidget *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ != '\0') {
    return __return_storage_ptr__;
  }
  pTVar13 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469ec990;
  aVar6 = pTVar13->SharedReferenceCount;
  do {
    if (aVar6 == (atomic<int>)0x0) {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_1469ec990;
    }
    LOCK();
    aVar8 = pTVar13->SharedReferenceCount;
    bVar14 = aVar6 == aVar8;
    if (bVar14) {
      pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
      aVar8 = aVar6;
    }
    UNLOCK();
    aVar6 = aVar8;
  } while (!bVar14);
  pSVar1 = (SWidget *)(this->OwnerTablePtr).Object;
  if (pSVar1 == (SWidget *)0x0) goto LAB_1469ec990;
  iVar9 = (**(code **)(this->_padding_ + 0x78))();
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar3 = (param_2->EffectingButton).KeyName;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar3 != EKeys::LeftMouseButton.KeyName) || (iVar9 == 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    goto LAB_1469ec990;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  bVar14 = IsItemSelectable(this);
  if (!bVar14) goto LAB_1469ec990;
  LOCK();
  pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
  UNLOCK();
  local_118.Object = pSVar1;
  local_118.SharedReferenceCount.ReferenceController = pTVar13;
  pTVar10 = GetItemForThis(this,(TSharedRef<ITypedTableView<UObject_*>,1> *)&local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (pTVar10 != (TObjectPtr<UObject> *)0x0) {
    local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar10->field0_0x0).DebugPtr;
    cVar7 = (**(code **)(pSVar1->_padding_ + 0x10))(pSVar1,&local_res8);
    if (iVar9 == 3) {
      if ((param_2->_padding_ & 3) == 0) {
        if ((param_2->_padding_ & 0xc) == 0) goto LAB_1469ecab3;
        (**(code **)(pSVar1->_padding_ + 0x28))(pSVar1,local_res8.DebugPtr,cVar7 == '\0');
      }
      else {
        (**(code **)(pSVar1->_padding_ + 0x38))(pSVar1,local_res8.DebugPtr);
      }
      this->bChangedSelectionOnMouseDown = true;
    }
LAB_1469ecab3:
    if ((cVar7 == '\0') && (this->bChangedSelectionOnMouseDown == false)) {
      if ((iVar9 != 3) || (this->bAllowKeepPreselectedItems == false)) {
        (**(code **)(pSVar1->_padding_ + 0x30))(pSVar1);
      }
      (**(code **)(pSVar1->_padding_ + 0x28))(pSVar1,local_res8.DebugPtr,1);
      this->bChangedSelectionOnMouseDown = true;
    }
  }
  FReply::FReply(&local_f0,true);
  local_108.KeyName = EKeys::LeftMouseButton.KeyName;
  local_108.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
  local_108.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_118);
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar11->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118.Object = pSVar4;
  local_118.SharedReferenceCount.ReferenceController = pTVar2;
  local_res8.DebugPtr = (UObject *)FReply::DetectDrag(&local_f0,&local_118,&local_108);
  pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_118);
  pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar11->Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118.Object = pSVar4;
  local_118.SharedReferenceCount.ReferenceController = pTVar5;
  pFVar12 = FReply::CaptureMouse((FReply *)local_res8.DebugPtr,&local_118);
  FReply::operator=(__return_storage_ptr__,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FReply::~FReply(&local_f0);
  if (pTVar10 != (TObjectPtr<UObject> *)0x0) {
    local_res8.ObjectPtr.field0_0x0 = *(FObjectPtr *)&pTVar10->field0_0x0;
    cVar7 = (**(code **)(pSVar1->_padding_ + 0x18))(pSVar1,&local_res8);
    if (cVar7 != '\0') goto LAB_1469ec990;
  }
  pTVar11 = (TSharedRef<SWidget,1> *)(**(code **)(pSVar1->_padding_ + 0xe8))(pSVar1,&local_118);
  FReply::SetUserFocus(__return_storage_ptr__,pTVar11,Mouse,false);
LAB_1469ec990:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1469ed770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectTableRow<UObject_*>::OnMouseButtonUp
          (SObjectTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  FReply *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  STableViewBase *this_00;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  longlong local_290;
  FDeprecateSlateVector2D local_288;
  longlong local_280;
  FString local_278;
  FReply local_268;
  FReply local_1b0;
  FReply local_f8;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  SObjectWidget::OnMouseButtonUp((SObjectWidget *)this,__return_storage_ptr__,param_1,param_2);
  if ((char)__return_storage_ptr__->_padding_ != '\0') {
    return __return_storage_ptr__;
  }
  pTVar1 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar12 = pTVar9;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar1->SharedReferenceCount;
    do {
      pTVar13 = pTVar9;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1469ed8bb;
      LOCK();
      aVar7 = pTVar1->SharedReferenceCount;
      bVar14 = aVar5 == aVar7;
      if (bVar14) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar14);
    pTVar12 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  }
  pTVar13 = pTVar1;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar11 = (TReferenceControllerBase<1> *)&this->_padding_;
    if (this == (SObjectTableRow<UObject_*> *)0x0) {
      pTVar11 = pTVar9;
    }
    pTVar9 = (TReferenceControllerBase<1> *)
             (**(code **)(pTVar12->_padding_ + 0x48))(pTVar12,pTVar11);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      cVar6 = (**(code **)(pTVar12->_padding_ + 200))(pTVar12);
      if (cVar6 == '\0') {
        FReflectionMetaData::GetWidgetPath(&local_278,(SWidget *)this,false,false);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                            ,0x32c,
                            L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                           );
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FReply *)(*pcVar3)();
          return pFVar10;
        }
      }
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
LAB_1469ed8bb:
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469ede30;
  iVar8 = (**(code **)(this->_padding_ + 0x78))();
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar2 == EKeys::LeftMouseButton.KeyName) &&
     (bVar14 = SWidget::HasMouseCapture((SWidget *)this), bVar14)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (this->bChangedSelectionOnMouseDown == false) {
      bVar14 = IsItemSelectable(this);
      if (bVar14) {
        local_288 = param_2->ScreenSpacePosition;
        bVar14 = FGeometry::IsUnderLocation(param_1,(FDeprecateVector2DParameter *)&local_288);
        if ((bVar14) && (this->bDragWasDetected == false)) {
          if (iVar8 == 2) {
            if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar3 = (code *)swi(3);
              pFVar10 = (FReply *)(*pcVar3)();
              return pFVar10;
            }
            (**(code **)(pTVar12->_padding_ + 0x30))(pTVar12);
            goto LAB_1469edad1;
          }
          if (iVar8 == 3) {
            if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar3 = (code *)swi(3);
              pFVar10 = (FReply *)(*pcVar3)();
              return pFVar10;
            }
            iVar8 = (**(code **)(pTVar12->_padding_ + 0x70))(pTVar12);
            if (1 < iVar8) {
              if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar14)) {
                pcVar3 = (code *)swi(3);
                pFVar10 = (FReply *)(*pcVar3)();
                return pFVar10;
              }
              local_280 = pTVar9->_padding_;
              cVar6 = (**(code **)(pTVar12->_padding_ + 0x10))(pTVar12,&local_280);
              if (((cVar6 != '\0') && ((param_2->_padding_ & 0xc) == 0)) &&
                 ((param_2->_padding_ & 3) == 0)) {
                if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar14)) {
                  pcVar3 = (code *)swi(3);
                  pFVar10 = (FReply *)(*pcVar3)();
                  return pFVar10;
                }
                (**(code **)(pTVar12->_padding_ + 0x30))(pTVar12);
                if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar14)) {
                  pcVar3 = (code *)swi(3);
                  pFVar10 = (FReply *)(*pcVar3)();
                  return pFVar10;
                }
                (**(code **)(pTVar12->_padding_ + 0x28))(pTVar12,pTVar9->_padding_,1);
                goto LAB_1469edad1;
              }
            }
          }
        }
      }
    }
    else {
LAB_1469edad1:
      if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FReply *)(*pcVar3)();
        return pFVar10;
      }
      (**(code **)(pTVar12->_padding_ + 0x40))(pTVar12,2);
      FReply::FReply(&local_268,true);
      FReply::operator=(__return_storage_ptr__,&local_268);
      FReply::~FReply(&local_268);
    }
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FReply *)(*pcVar3)();
      return pFVar10;
    }
    cVar6 = (**(code **)(pTVar12->_padding_ + 0xa8))(pTVar12,pTVar9->_padding_);
    if (cVar6 != '\0') {
      FReply::FReply(&local_1b0,true);
      FReply::operator=(__return_storage_ptr__,&local_1b0);
      FReply::~FReply(&local_1b0);
    }
    pFVar10 = FReply::ReleaseMouseCapture(__return_storage_ptr__);
    FReply::operator=(__return_storage_ptr__,pFVar10);
    goto LAB_1469ede30;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  bVar14 = false;
  pFVar10 = __return_storage_ptr__;
  if (iVar8 == 0) {
LAB_1469edc05:
    bVar4 = false;
  }
  else {
    bVar14 = true;
    FVar2 = (param_2->EffectingButton).KeyName;
    pFVar10 = (FReply *)
              (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    if (pFVar10 != (FReply *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
    }
    if (FVar2 != EKeys::RightMouseButton.KeyName) goto LAB_1469edc05;
    bVar4 = true;
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  if (bVar4) {
    this_00 = (STableViewBase *)&pTVar12[-0x5a].SharedReferenceCount;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      this_00 = (STableViewBase *)0x0;
    }
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    if ((this_00 == (STableViewBase *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FReply *)(*pcVar3)();
      return pFVar10;
    }
    bVar14 = STableViewBase::IsRightClickScrolling(this_00);
    if (bVar14) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
    else {
      bVar14 = IsItemSelectable(this);
      if (bVar14) {
        if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FReply *)(*pcVar3)();
          return pFVar10;
        }
        local_290 = pTVar9->_padding_;
        cVar6 = (**(code **)(pTVar12->_padding_ + 0x10))(pTVar12,&local_290);
        if (cVar6 == '\0') {
          if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar3 = (code *)swi(3);
            pFVar10 = (FReply *)(*pcVar3)();
            return pFVar10;
          }
          (**(code **)(pTVar12->_padding_ + 0x30))(pTVar12);
          if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar3 = (code *)swi(3);
            pFVar10 = (FReply *)(*pcVar3)();
            return pFVar10;
          }
          (**(code **)(pTVar12->_padding_ + 0x28))(pTVar12,pTVar9->_padding_,1);
          if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar3 = (code *)swi(3);
            pFVar10 = (FReply *)(*pcVar3)();
            return pFVar10;
          }
          (**(code **)(pTVar12->_padding_ + 0x40))(pTVar12,2);
        }
      }
      if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FReply *)(*pcVar3)();
        return pFVar10;
      }
      (**(code **)(pTVar12->_padding_ + 0xa0))(pTVar12,pTVar9->_padding_,param_2);
      FReply::FReply(&local_f8,true);
      FReply::operator=(__return_storage_ptr__,&local_f8);
      FReply::~FReply(&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
  }
LAB_1469ede30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return __return_storage_ptr__;
}

// OnMouseEnter @ 1469eeaa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectTableRow<UObject_*>::OnMouseEnter
          (SObjectTableRow<UObject_*> *this,FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  FReadAccessScope local_28;
  
  SObjectWidget::OnMouseEnter((SObjectWidget *)this,param_1,param_2);
  if (this->_padding_ != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHovered,&local_28)
    ;
    if ((*(int *)&(this->OnHovered).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnHovered).field_0x8, plVar1 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*plVar1 + 0x38))();
      if (cVar3 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        lVar2 = this->_padding_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHovered,
                   &local_28);
        if ((*(int *)&(this->OnHovered).field_0x10 != 0) &&
           (plVar1 = *(longlong **)&(this->OnHovered).field_0x8, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x68))(plVar1,lVar2);
        }
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OnMouseLeave @ 1469eec30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SObjectTableRow<UObject_*>::OnMouseLeave(SObjectTableRow<UObject_*> *this,FPointerEvent *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  FReadAccessScope local_28;
  
  SObjectWidget::OnMouseLeave((SObjectWidget *)this,param_1);
  if (this->_padding_ != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUnhovered,
               &local_28);
    if ((*(int *)&(this->OnUnhovered).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnUnhovered).field_0x8, plVar1 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*plVar1 + 0x38))();
      if (cVar3 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        lVar2 = this->_padding_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUnhovered,
                   &local_28);
        if ((*(int *)&(this->OnUnhovered).field_0x10 != 0) &&
           (plVar1 = *(longlong **)&(this->OnUnhovered).field_0x8, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x68))(plVar1,lVar2);
        }
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OnTouchEnded @ 1469f1be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
SObjectTableRow<UObject_*>::OnTouchEnded
          (SObjectTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  ITypedTableView<UObject_*> *pIVar2;
  UObjectBaseUtility *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  char cVar5;
  atomic<int> aVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  FReply *pFVar9;
  UClass *pUVar10;
  longlong *plVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  ulonglong local_res8;
  FString local_268;
  FReply local_258;
  FReply local_1a0;
  FReply local_e8;
  
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  local_res8 = local_res8 & 0xffffffff00000000;
  SObjectWidget::OnTouchEnded((SObjectWidget *)this,__return_storage_ptr__,param_1,param_2);
  if (this->bProcessingSelectionTouch == false) {
    return __return_storage_ptr__;
  }
  this->bProcessingSelectionTouch = false;
  pTVar1 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar12 = pTVar1;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469f1fb1;
  aVar4 = pTVar1->SharedReferenceCount;
  do {
    pTVar12 = pTVar13;
    if (aVar4 == (atomic<int>)0x0) goto LAB_1469f1fb1;
    LOCK();
    aVar6 = pTVar1->SharedReferenceCount;
    bVar14 = aVar4 == aVar6;
    if (bVar14) {
      pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
      aVar6 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar6;
  } while (!bVar14);
  pIVar2 = (this->OwnerTablePtr).Object;
  pTVar12 = pTVar1;
  if (pIVar2 == (ITypedTableView<UObject_*> *)0x0) goto LAB_1469f1fb1;
  LOCK();
  pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
  UNLOCK();
  pTVar12 = (TReferenceControllerBase<1> *)&this->_padding_;
  if (this == (SObjectTableRow<UObject_*> *)0x0) {
    pTVar12 = pTVar13;
  }
  pTVar8 = (TReferenceControllerBase<1> *)(**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,pTVar12);
  if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
     (cVar5 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2), pTVar8 = pTVar13, cVar5 == '\0')) {
    FReflectionMetaData::GetWidgetPath(&local_268,(SWidget *)this,false,false);
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("OwnerTable->Private_IsPendingRefresh()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                        ,0x32c,
                        L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                       );
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar3)();
      return pFVar9;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar12 = pTVar1;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469f1fb1;
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
LAB_1469f1d5b:
    iVar7 = (**(code **)(this->_padding_ + 0x78))();
    if (iVar7 != 0) {
      if ((pIVar2 == (ITypedTableView<UObject_*> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar3)();
        return pFVar9;
      }
      local_res8 = pTVar8->_padding_;
      cVar5 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,&local_res8);
      if (cVar5 == '\0') {
        if (iVar7 != 3) {
          if ((pIVar2 == (ITypedTableView<UObject_*> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FReply *)(*pcVar3)();
            return pFVar9;
          }
          (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2);
        }
        if ((pIVar2 == (ITypedTableView<UObject_*> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
        (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,pTVar8->_padding_,1);
        if ((pIVar2 == (ITypedTableView<UObject_*> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
        (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,2);
        FReply::FReply(&local_258,true);
        FReply::operator=(__return_storage_ptr__,&local_258);
        pFVar9 = &local_258;
      }
      else {
        if (1 < iVar7 - 2U) goto LAB_1469f1f47;
        if ((pIVar2 == (ITypedTableView<UObject_*> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
        (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,pTVar8->_padding_,1);
        if ((pIVar2 == (ITypedTableView<UObject_*> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
        (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,2);
        FReply::FReply(&local_1a0,true);
        FReply::operator=(__return_storage_ptr__,&local_1a0);
        pFVar9 = &local_1a0;
      }
      FReply::~FReply(pFVar9);
    }
  }
  else {
    pUVar10 = Z_Construct_UClass_UUserListEntry_NoRegister();
    plVar11 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar10);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar11 + 0x10))(plVar11), cVar5 != '\0')) goto LAB_1469f1d5b;
  }
LAB_1469f1f47:
  if ((pIVar2 == (ITypedTableView<UObject_*> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar3)();
    return pFVar9;
  }
  cVar5 = (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2,pTVar8->_padding_);
  if (cVar5 != '\0') {
    FReply::FReply(&local_e8,true);
    FReply::operator=(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
  }
LAB_1469f1fb1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 1469f24f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SObjectTableRow<UObject_*>::OnTouchStarted
          (SObjectTableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FReply *pFVar4;
  TSharedRef<SWidget,1> local_e8;
  FKey local_d8;
  FReply local_c0;
  
  this->bProcessingSelectionTouch = true;
  FReply::FReply(&local_c0,true);
  local_d8.KeyName = EKeys::LeftMouseButton.KeyName;
  local_d8.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
  local_d8.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8.Object = pSVar2;
  local_e8.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar4 = FReply::DetectDrag(&local_c0,&local_e8,&local_d8);
  FReply::FReply(__return_storage_ptr__,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// Private_OnExpanderArrowShiftClicked @ 1469f53c0

void __thiscall
SObjectTableRow<UObject_*>::Private_OnExpanderArrowShiftClicked(SObjectTableRow<UObject_*> *this)

{
  return;
}

// ResetObjectRow @ 146a0dcf0

void __thiscall SObjectTableRow<UObject_*>::ResetObjectRow(SObjectTableRow<UObject_*> *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  
  this->bIsAppearingSelected = false;
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return;
  }
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar3 = UUserListEntry::StaticClass();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar3);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014693a922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x28))(plVar4,*(code **)(*plVar4 + 0x28));
      return;
    }
  }
  pUVar3 = *(UClass **)&this_00->field_0x10;
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = UUserListEntry::StaticClass();
    bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
    if (bVar2) {
      pUVar3 = *(UClass **)&this_00->field_0x10;
      pUVar5 = UUserListEntry::StaticClass();
      bVar2 = UClass::ImplementsInterface(pUVar3,pUVar5);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass())",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\UMG\\UHT\\IUserListEntry.gen.cpp"
                           ,0x12e,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pUVar6 = UObject::FindFunction((UObject *)this_00,NAME_UUserListEntry_BP_OnEntryReleased);
      if (pUVar6 != (UFunction *)0x0) {
        (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar6,0);
      }
    }
  }
  return;
}

// ResetRow @ 146a0dd10

void __thiscall SObjectTableRow<UObject_*>::ResetRow(SObjectTableRow<UObject_*> *this)

{
  if (*(longlong *)&this[-1].OnRowDragCancelled.field_0x10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a0dd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this[-1]._padding_ + 0x278))();
    return;
  }
  return;
}

// SetIndexInList @ 146a156d0

void __thiscall
SObjectTableRow<UObject_*>::SetIndexInList(SObjectTableRow<UObject_*> *this,int param_1)

{
  *(int *)&this->_padding_ = param_1;
  return;
}

// SupportsKeyboardFocus @ 146a1f660

bool __thiscall SObjectTableRow<UObject_*>::SupportsKeyboardFocus(SObjectTableRow<UObject_*> *this)

{
  return true;
}

// ToggleExpansion @ 146a2a290

void __thiscall SObjectTableRow<UObject_*>::ToggleExpansion(SObjectTableRow<UObject_*> *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  char cVar5;
  atomic<int> aVar6;
  undefined8 *puVar7;
  SObjectTableRow<UObject_*> *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined8 local_res8;
  FString local_28;
  
  pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146a2a2d2;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar10 = aVar4 == aVar6;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar10);
    plVar1 = (longlong *)this->_padding_;
    if (plVar1 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,(int)this->_padding_);
      if (cVar5 != '\0') {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        pSVar8 = this;
        if (&this[-1]._padding_ == (longlong *)0x0) {
          pSVar8 = (SObjectTableRow<UObject_*> *)0x0;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar1 + 0x48))(plVar1,pSVar8);
        if (puVar7 == (undefined8 *)0x0) {
          cVar5 = (**(code **)(*plVar1 + 200))(plVar1);
          if (cVar5 == '\0') {
            FReflectionMetaData::GetWidgetPath(&local_28,(SWidget *)&this[-1]._padding_,false,false)
            ;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("OwnerTable->Private_IsPendingRefresh()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Slate\\SObjectTableRow.h"
                                ,0x32c,
                                L"We were unable to find the item for this widget. If it was removed from the source collection, the list should be pending a refresh. %s"
                               );
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
        }
        else {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
          local_res8 = *puVar7;
          lVar2 = *plVar1;
          cVar5 = (**(code **)(lVar2 + 0x60))(plVar1,&local_res8);
          (**(code **)(lVar2 + 0x50))(plVar1,*puVar7,cVar5 == '\0');
        }
      }
    }
  }
LAB_146a2a2d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// ZoneFromPointerPosition @ 146a30a40

EItemDropZone __thiscall
SObjectTableRow<UObject_*>::ZoneFromPointerPosition
          (SObjectTableRow<UObject_*> *this,FDeprecateVector2DParameter param_1,
          FDeprecateVector2DParameter param_2,EOrientation param_3)

{
  EItemDropZone EVar1;
  float fVar2;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  
  if (param_3 == Orient_Horizontal) {
    local_res10 = param_1._0_4_;
    local_res18 = param_2._0_4_;
  }
  else {
    uStackX_14 = param_1._4_4_;
    uStackX_1c = param_2._4_4_;
    local_res18 = uStackX_1c;
    local_res10 = uStackX_14;
  }
  EVar1 = AboveItem;
  fVar2 = local_res18 * __real_3e800000;
  if (__real_41200000 <= local_res18 * __real_3e800000) {
    fVar2 = __real_41200000;
  }
  if (fVar2 <= __real_40400000) {
    fVar2 = __real_40400000;
  }
  if (fVar2 <= local_res10) {
    EVar1 = (local_res18 - fVar2 < local_res10) + OntoItem;
  }
  return EVar1;
}

// operator() @ 1504f6df0

bool __thiscall `SObjectTableRow<UObject_*>::Construct'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5391091646278401960>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5391091646278401960>,
                       &`public:___cdecl_`public:_void___cdecl_SObjectTableRow<UObject*___ptr64>::Construct(SObjectTableRow<class_UObject*___ptr64>::FArguments_const&___ptr64,TSharedRef<STableViewBase,1>_const&___ptr64,UUserWidget&___ptr64,UListViewBase*___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

