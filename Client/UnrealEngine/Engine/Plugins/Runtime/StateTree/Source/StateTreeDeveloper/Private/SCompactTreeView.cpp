// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 24

// operator() @ 14d712010

TSharedPtr<SWidget,1> * __thiscall
`UE::StateTree::SCompactTreeView::Construct'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  longlong lVar2;
  FSharedReferencer<1> FVar3;
  char cVar4;
  longlong *plVar5;
  FReadAccessScope local_28;
  
  lVar2 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x2e8),&local_28);
  if ((*(int *)(lVar2 + 0x2f8) != 0) && (*(longlong **)(lVar2 + 0x2f0) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x2f0) + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      lVar2 = *(longlong *)this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x2e8),&local_28
                );
      if (*(int *)(lVar2 + 0x2f8) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(lVar2 + 0x2f0);
      }
      (**(code **)(*plVar5 + 0x60))(plVar5,__return_storage_ptr__);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return __return_storage_ptr__;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar3 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// operator() @ 14d712490

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::__l2::<lambda_1>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FText *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  ITextData *pIVar7;
  uint *puVar8;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  FText local_38;
  ITextData *local_28;
  uint local_20 [2];
  
  local_res8[0] = 0;
  lVar1 = *(longlong *)(*(longlong *)this + 0x300);
  if (lVar1 == 0) {
    pFVar5 = FText::GetEmpty();
    TVar6.Reference = (pFVar5->TextData).Reference;
    local_28 = TVar6.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_res8);
    }
    puVar8 = local_20;
    bVar3 = false;
    bVar4 = true;
    local_20[0] = pFVar5->Flags;
    pIVar7 = TVar6.Reference;
  }
  else {
    if (*(longlong *)(lVar1 + 0x2f8) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
    }
    SEditableText::GetText(*(SEditableText **)(lVar1 + 0x2f8),&local_38);
    puVar8 = &local_38.Flags;
    bVar3 = true;
    bVar4 = false;
    TVar6.Reference = local_38.TextData.Reference;
    pIVar7 = local_28;
  }
  (__return_storage_ptr__->TextData).Reference = TVar6.Reference;
  if (TVar6.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_res10);
  }
  __return_storage_ptr__->Flags = *puVar8;
  if ((bVar4) && (pIVar7 != (ITextData *)0x0)) {
    (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  }
  if ((bVar3) && (local_38.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CacheStates @ 14d716ad0

void __thiscall UE::StateTree::SCompactTreeView::CacheStates(SCompactTreeView *this)

{
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FStateItem *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  FStateItem *local_28;
  FSharedReferencer<1> local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x248))(this,local_18);
  local_20.ReferenceController = (TReferenceControllerBase<1> *)puVar5[1];
  local_28 = (FStateItem *)*puVar5;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->RootItem;
  if (pTVar1 != (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)&local_28) {
    pTVar1->Object = local_28;
    local_28 = (FStateItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RootItem).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  (**(code **)(this->_padding_ + 0x268))(this);
  pTVar2 = (this->RootItem).SharedReferenceCount.ReferenceController;
  pFVar3 = pTVar1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->FilteredRootItem).SharedReferenceCount.ReferenceController;
  (this->FilteredRootItem).Object = pFVar3;
  (this->FilteredRootItem).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Construct @ 14d719260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::StateTree::SCompactTreeView::Construct
          (SCompactTreeView *this,FArguments *param_1,TNotNull<UStateTree_const_*> param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  SWidget *pSVar4;
  FStateItem *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  SSearchBox *pSVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  FStateTreeStyle *this_00;
  FName *pFVar14;
  FTextBlockStyle *pFVar15;
  FSlotArguments *pFVar16;
  FArguments *pFVar17;
  undefined8 *puVar18;
  TSharedRef<SWidget,1> *pTVar19;
  ulong64 uVar20;
  FArguments *pFVar21;
  TSharedRef<SWidget_const_,1> *pTVar22;
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *pSVar23;
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *pSVar24;
  FArguments *pFVar25;
  TSharedRef<SVerticalBox,1> *pTVar26;
  FSlotArguments *pFVar27;
  FSlotArguments *pFVar28;
  TReferenceControllerBase<1> *pTVar29;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  FName local_fb8;
  undefined4 uStack_fb0;
  undefined4 uStack_fac;
  FLLMScope local_fa8;
  FLLMScope local_fa4;
  undefined1 local_fa0 [8];
  ForAnyElementType local_f98;
  int local_f90;
  SSearchBox *local_f88;
  FSharedReferencer<1> local_f80;
  FWeakObjectPtr local_f78;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> local_f70;
  FArguments *local_f58;
  FArguments *local_f50;
  TSlateDecl<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T0RequiredArgs>
  local_f48;
  TSharedRef<SVerticalBox,1> local_f30;
  undefined8 local_f20;
  FSharedReferencer<1> local_f18;
  TReferenceControllerBase<1> *local_f10;
  undefined4 uStack_f08;
  undefined4 uStack_f04;
  Type local_f00;
  undefined1 local_efc;
  undefined1 local_ef8 [8];
  void *pvStack_ef0;
  undefined8 local_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined1 local_ed0;
  undefined1 local_ec8 [8];
  ForAnyElementType FStack_ec0;
  ulonglong local_eb8;
  undefined4 local_eb0 [2];
  undefined4 local_ea8 [2];
  UStateTree *local_ea0;
  FName local_e98;
  FMemScope local_e90;
  FMemScope local_e88;
  FName local_e80;
  FMemScope local_e78;
  undefined8 local_e70;
  FSharedReferencer<1> FStack_e68;
  TSharedRef<SWidget,1> local_e60;
  FDestructionSentinel local_e50;
  FDestructionSentinel local_e38;
  FDestructionSentinel local_e20;
  undefined1 *local_e08;
  FDestructionSentinel local_e00;
  undefined1 *local_de8;
  FDestructionSentinel local_de0;
  undefined1 *local_dc8;
  FDestructionSentinel local_dc0;
  undefined1 *local_da8;
  FDestructionSentinel local_da0;
  undefined1 *local_d88;
  FDestructionSentinel local_d80;
  undefined1 *local_d68;
  FName local_d60;
  TSharedRef<SWidget_const_,1> local_d58;
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *local_d48;
  TReferenceControllerBase<1> *pTStack_d40;
  TSharedRef<SWidget_const_,1> local_d38;
  TSharedRef<SWidget,1> local_d28;
  SSearchBox *local_d18;
  TReferenceControllerBase<1> *pTStack_d10;
  TSharedRef<SWidget,1> local_d08;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_cf8;
  TSharedRef<SWidget,1> local_ce0;
  FReadAccessScope local_cd0;
  FArguments local_cb8;
  FSlotArguments local_ab0;
  FSlotArguments local_9c8;
  FArguments local_8e0;
  FArguments local_528;
  
  pFVar28 = (FSlotArguments *)0x0;
  local_res8 = 0;
  if ((GC::GIsIncrementalReachabilityPending) && (param_2.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2.Val);
  }
  local_f78.ObjectIndex = 0;
  local_f78.ObjectSerialNumber = 0;
  local_ea0 = param_2.Val;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2.Val);
  }
  FWeakObjectPtr::operator=(&local_f78,(FObjectPtr)&local_ea0);
  (this->WeakStateTree).WeakPtr = local_f78;
  pFVar15 = param_1->_TextStyle;
  if (pFVar15 == (FTextBlockStyle *)0x0) {
    this_00 = FStateTreeStyle::Get();
    pFVar14 = ::FName::FName(&local_d60,"Normal.Normal");
    pFVar15 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                        ((ISlateStyle *)this_00,*pFVar14,(char *)0x0,(FTextBlockStyle *)0x0);
  }
  this->TextStyle = pFVar15;
  if (&param_1->_OnSelectionChanged != &this->OnSelectionChanged) {
    local_fa0 = (undefined1  [8])0x0;
    local_f98.Data = (FScriptContainerElement *)0x0;
    local_f90 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnSelectionChanged,&local_cd0);
    if ((*(int *)&(param_1->_OnSelectionChanged).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnSelectionChanged).field_0x8, plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_fa0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_cd0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_fa0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fa0,
               (FWriteAccessScope *)&local_e50);
    if ((local_f90 != 0) && (local_f98.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_f98.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f98,0,0,0x10);
      local_f90 = 0;
    }
    if (local_e50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e50.Accessor,&local_e50);
    }
    if (local_f98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f98.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_fa0);
  }
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnContextMenuOpening,&param_1->_OnContextMenuOpening);
  CacheStates(this);
  local_f50 = SVerticalBox::FArguments::FArguments(&local_cb8);
  pFVar16 = SVerticalBox::Slot(&local_9c8);
  puVar1 = &pFVar16->field_0x48;
  if (local_eb0 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 0;
    pFVar16->field_0x4c = 1;
  }
  pFVar27 = pFVar28;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar27 = pFVar16;
  }
  if (local_ea8 != (undefined4 *)&pFVar27->field_0x50) {
    *(undefined4 *)&pFVar27->field_0x50 = 1;
    pFVar27->field_0x54 = 1;
  }
  uStack_ed8 = _UNK_150925358;
  local_ee0 = ___xmm_40000000408000004000000040800000;
  local_ed0 = 1;
  pFVar16 = pFVar28;
  if (pFVar27 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar16 = pFVar27;
  }
  local_eb8 = 0;
  pFVar16->field_0x28 = 1;
  local_ec8 = (undefined1  [8])0x0;
  FStack_ec0.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar16->field_0x18 = local_ee0;
  *(undefined8 *)&pFVar16->field_0x20 = uStack_ed8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ec8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ec8,
             (FWriteAccessScope *)&local_e38);
  if (((int)local_eb8 != 0) && (FStack_ec0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ec0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ec0,0,0,0x10);
    local_eb8 = local_eb8 & 0xffffffff00000000;
  }
  if (local_e38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e38.Accessor,&local_e38);
  }
  if (FStack_ec0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ec0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ec8);
  pFVar27 = pFVar28;
  if (&pFVar16->field_0x18 != (undefined1 *)0x0) {
    pFVar27 = pFVar16;
  }
  local_f58 = (FArguments *)SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar27);
  pFVar17 = SSearchBox::FArguments::FArguments(&local_8e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnTextChanged,
             (FWriteAccessScope *)&local_e20);
  local_e08 = &(pFVar17->_OnTextChanged).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_e08);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar29 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_f04 = local_f30.SharedReferenceCount.ReferenceController._4_4_;
    local_f10 = (TReferenceControllerBase<1> *)OnSearchBoxTextChanged;
    uStack_f08 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_ce0);
    pTVar29 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar19->Object;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSCompactTreeView_StateTree_UE___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar29;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar29->WeakReferenceCount = (atomic<int>)((int)pTVar29->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar28 = (FSlotArguments *)&DAT_00000007;
    puVar18[5] = local_f10;
    puVar18[6] = CONCAT44(uStack_f04,uStack_f08);
  }
  if (((ulonglong)pFVar28 & 4) != 0) {
    pFVar28 = (FSlotArguments *)(ulonglong)((uint)pFVar28 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  if (((ulonglong)pFVar28 & 2) != 0) {
    pFVar28 = (FSlotArguments *)(ulonglong)((uint)pFVar28 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  if (((ulonglong)pFVar28 & 1) != 0) {
    pFVar28 = (FSlotArguments *)(ulonglong)((uint)pFVar28 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ce0.SharedReferenceCount.ReferenceController);
  }
  if (local_e20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e20.Accessor,&local_e20);
  }
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e98 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e90,&local_e98,true);
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
            (&local_f70,"SSearchBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Widgets\\SCompactTreeView.cpp"
             ,0x27,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_e90);
  FLLMScope::~FLLMScope(local_res20);
  if (local_f70._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f70._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f70._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_d18 = (this->SearchBox).Object;
  pTStack_d10 = (this->SearchBox).SharedReferenceCount.ReferenceController;
  (this->SearchBox).Object = local_f70._Widget.Object;
  (this->SearchBox).SharedReferenceCount.ReferenceController =
       local_f70._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d10);
  pSVar9 = local_f70._Widget.Object;
  if (local_f70._Widget.Object == (SSearchBox *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_f70._Widget.Object,(FSlateBaseNamedArgs *)pFVar17);
  SSearchBox::Construct(local_f70._Widget.Object,pFVar17);
  if (local_f70._Widget.Object == (SSearchBox *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (((local_f70._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)((local_f70._Widget.Object)->_padding_ + 0x228))(local_f70._Widget.Object);
    bVar13 = 0;
    if (cVar12 != '\0') goto LAB_14d7197a3;
  }
  else {
LAB_14d7197a3:
    bVar13 = 0x20;
  }
  *(byte *)&(local_f70._Widget.Object)->_padding_ =
       (byte)(local_f70._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_f70._Widget.Object)->_padding_ =
       (byte)(local_f70._Widget.Object)->_padding_ | bVar13;
  if (local_f70._Widget.Object == (SSearchBox *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pbVar2 = (byte *)((longlong)&(local_f70._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if (local_f70._Widget.Object == (SSearchBox *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar10.ReferenceController = local_f70._Widget.SharedReferenceCount.ReferenceController;
  local_f10 = local_f70._Widget.SharedReferenceCount.ReferenceController;
  local_f70._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f70._Widget.Object = (SSearchBox *)0x0;
  if (pSVar9 == (SSearchBox *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar25 = local_f58;
  local_f88 = pSVar9;
  local_f80.ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SSearchBox **)&local_f58->_padding_ != &local_f88) {
    local_f58->_padding_ = (longlong)pSVar9;
    local_f88 = (SSearchBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_f58->_padding_,&local_f80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f80.ReferenceController);
  local_f58 = SVerticalBox::FArguments::operator+(local_f50,(FSlotArguments *)pFVar25);
  local_f50 = (FArguments *)SVerticalBox::Slot(&local_ab0);
  pFVar21 = STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::FArguments::
            FArguments(&local_528);
  local_f00 = param_1->_SelectionMode;
  local_efc = 1;
  local_ee8 = 0;
  local_ef8 = (undefined1  [8])0x0;
  pvStack_ef0 = (void *)0x0;
  (pFVar21->_SelectionMode).Value = local_f00;
  (pFVar21->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ef8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ef8);
  if (pvStack_ef0 != (void *)0x0) {
    FMemory::Free(pvStack_ef0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ef8);
  if ((this->FilteredRootItem).Object == (FStateItem *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (this->FilteredRootItem).Object;
  pFVar21->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  pFVar21->_TreeItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0;
  local_e70 = 0;
  FStack_e68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar21->_TreeItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
       *)&local_e70) {
    (pFVar21->_TreeItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar21->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_e68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_e68.ReferenceController);
  pFVar21->_TreeItemsSource_ArrayPointer = &pFVar5->Children;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnGenerateRow,
             (FWriteAccessScope *)&local_e00);
  local_de8 = &(pFVar21->_OnGenerateRow).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_de8);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar29 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_fac = local_f30.SharedReferenceCount.ReferenceController._4_4_;
    local_fb8 = (FName)GenerateStateItemRow;
    uStack_fb0 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d28);
    pTVar29 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar19->Object;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar28 = (FSlotArguments *)(ulonglong)((uint)pFVar28 | 0x38);
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSCompactTreeView_StateTree_UE___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar29;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar29->WeakReferenceCount = (atomic<int>)((int)pTVar29->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar18 + 5) = local_fb8;
    puVar18[6] = CONCAT44(uStack_fac,uStack_fb0);
  }
  if (((ulonglong)pFVar28 & 0x20) != 0) {
    pFVar28 = (FSlotArguments *)(ulonglong)((uint)pFVar28 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  if (((ulonglong)pFVar28 & 0x10) != 0) {
    pFVar28 = (FSlotArguments *)(ulonglong)((uint)pFVar28 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  if (((ulonglong)pFVar28 & 8) != 0) {
    pFVar28 = (FSlotArguments *)(ulonglong)((uint)pFVar28 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d28.SharedReferenceCount.ReferenceController);
  }
  if (local_e00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e00.Accessor,&local_e00);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnGetChildren,
             (FWriteAccessScope *)&local_de0);
  local_dc8 = &(pFVar21->_OnGetChildren).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_dc8);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar29 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_fac = local_f30.SharedReferenceCount.ReferenceController._4_4_;
    local_fb8 = (FName)GetStateItemChildren;
    uStack_fb0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d38);
    pTVar29 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar22->Object;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar28 = (FSlotArguments *)(ulonglong)((uint)pFVar28 | 0x1c0);
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00__AEAV__TArray_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSCompactTreeView_StateTree_UE___00__A6AXV__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00__AEAV__TArray_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar29;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar29->WeakReferenceCount = (atomic<int>)((int)pTVar29->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar18 + 5) = local_fb8;
    puVar18[6] = CONCAT44(uStack_fac,uStack_fb0);
  }
  if ((uint)pFVar28 >> 8 != 0) {
    pFVar28 = (FSlotArguments *)(ulonglong)((uint)pFVar28 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  if ((char)pFVar28 < '\0') {
    pFVar28 = (FSlotArguments *)(ulonglong)((uint)pFVar28 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  if (((ulonglong)pFVar28 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d38.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  bVar11 = false;
  if (local_de0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_de0.Accessor,&local_de0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_dc0);
  local_da8 = &(pFVar21->_OnSelectionChanged).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_da8);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar29 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_fac = local_f30.SharedReferenceCount.ReferenceController._4_4_;
    local_fb8 = (FName)OnStateItemSelected;
    uStack_fb0 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d08);
    pTVar29 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar19->Object;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar11 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSCompactTreeView_StateTree_UE___00__A6AXV__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar29;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar29->WeakReferenceCount = (atomic<int>)((int)pTVar29->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar18 + 5) = local_fb8;
    puVar18[6] = CONCAT44(uStack_fac,uStack_fb0);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d08.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  bVar11 = false;
  if (local_dc0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_dc0.Accessor,&local_dc0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnExpansionChanged
             ,(FWriteAccessScope *)&local_da0);
  local_d88 = &(pFVar21->_OnExpansionChanged).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_d88);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar29 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_fac = local_f30.SharedReferenceCount.ReferenceController._4_4_;
    local_fb8 = (FName)OnStateItemExpansionChanged;
    uStack_fb0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d58);
    pTVar29 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar22->Object;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar11 = true;
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSCompactTreeView_StateTree_UE___00__A6AXV__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar29;
    if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar29->WeakReferenceCount = (atomic<int>)((int)pTVar29->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar18 + 5) = local_fb8;
    puVar18[6] = CONCAT44(uStack_fac,uStack_fb0);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d58.SharedReferenceCount.ReferenceController);
  }
  if (local_da0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_da0.Accessor,&local_da0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar21->_OnContextMenuOpening,(FWriteAccessScope *)&local_d80);
  local_d68 = &(pFVar21->_OnContextMenuOpening).field_0x8;
  puVar18 = Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_d68);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::StateTree::SCompactTreeView::Construct'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar18[3] = this;
  }
  if (local_d80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d80.Accessor,&local_d80);
  }
  FLLMScope::FLLMScope(&local_fa8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_fb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e88,&local_fb8,true);
  TSlateDecl<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_f48,"STreeView<TSharedPtr<FStateItem>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Widgets\\SCompactTreeView.cpp"
             ,0x2c,local_res10);
  FMemScope::~FMemScope(&local_e88);
  FLLMScope::~FLLMScope(&local_fa8);
  if (local_f48._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f48._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f48._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_d48 = (this->StateItemTree).Object;
  pTStack_d40 = (this->StateItemTree).SharedReferenceCount.ReferenceController;
  (this->StateItemTree).Object = local_f48._Widget.Object;
  (this->StateItemTree).SharedReferenceCount.ReferenceController =
       local_f48._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d40);
  pSVar23 = TSharedPtr<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>::
            operator->(&local_f48._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar23,(FSlateBaseNamedArgs *)pFVar21);
  pSVar23 = local_f48._Widget.Object;
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::Construct
            (local_f48._Widget.Object,pFVar21);
  pSVar24 = TSharedPtr<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>::
            operator->(&local_f48._Widget);
  if ((pSVar24->field_0x30 & 0x10) == 0) {
    cVar12 = (**(code **)(*(longlong *)pSVar24 + 0x228))(pSVar24);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_14d719f70;
  }
  bVar13 = 0x20;
LAB_14d719f70:
  pSVar24->field_0x30 = pSVar24->field_0x30 & 0xdf;
  pSVar24->field_0x30 = pSVar24->field_0x30 | bVar13;
  pSVar24 = TSharedPtr<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>::
            operator->(&local_f48._Widget);
  pSVar24->field_0x31 = pSVar24->field_0x31 | 4;
  if (local_f48._Widget.Object ==
      (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar10.ReferenceController = local_f48._Widget.SharedReferenceCount.ReferenceController;
  local_f48._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f48._Widget.Object =
       (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0;
  if (pSVar23 == (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar25 = local_f50;
  local_f18.ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&local_f50->_padding_ != &local_f20) {
    local_f50->_padding_ = (longlong)pSVar23;
    local_f20 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_f50->_padding_,&local_f18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f18.ReferenceController);
  pFVar25 = SVerticalBox::FArguments::operator+(local_f58,(FSlotArguments *)pFVar25);
  FLLMScope::FLLMScope(&local_fa4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e80 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e78,&local_e80,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_cf8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Widgets\\SCompactTreeView.cpp"
             ,0x20,local_res18);
  FMemScope::~FMemScope(&local_e78);
  FLLMScope::~FLLMScope(&local_fa4);
  pTVar26 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_cf8,&local_f30,pFVar25);
  pTVar29 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_e60.Object = (SWidget *)pTVar26->Object;
  if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e60.SharedReferenceCount.ReferenceController = pTVar29;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_e60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_f30.SharedReferenceCount.ReferenceController._4_4_,
                      local_f30.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cf8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::FArguments::~FArguments
            (&local_528);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_ab0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f70._Widget.SharedReferenceCount.ReferenceController);
  SSearchBox::FArguments::~FArguments(&local_8e0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_9c8);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_cb8._Slots.AllocatorInstance.Data,local_cb8._Slots.ArrayNum);
  if ((FSlotArguments *)local_cb8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_cb8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_cb8);
  RestoreExpansionState(this);
  return;
}

// CreateNameWidgetInternal @ 14d724a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
UE::StateTree::SCompactTreeView::CreateNameWidgetInternal
          (SCompactTreeView *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1)

{
  TOptional<ETextOverflowPolicy> *pTVar1;
  FStateItem *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  FArguments *pFVar9;
  TSharedRef<SWidget,1> *pTVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<STextBlock,1> *pTVar13;
  undefined ***pppuVar14;
  undefined1 auStackY_728 [32];
  T0RequiredArgs local_6f8 [4];
  FLLMScope local_6f4;
  undefined1 local_6f0;
  undefined1 local_6ef;
  undefined1 local_6e8 [8];
  ForAnyElementType FStack_6e0;
  ulonglong local_6d8;
  undefined2 local_6d0 [4];
  FText local_6c8;
  bool local_6b8;
  undefined1 local_6b0 [8];
  ForAnyElementType FStack_6a8;
  ulonglong local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined1 local_688;
  undefined1 local_680 [8];
  ForAnyElementType FStack_678;
  ulonglong local_670;
  undefined1 local_668 [4];
  FName local_664;
  FMemScope local_658;
  FDestructionSentinel local_650;
  FDestructionSentinel local_638;
  FDestructionSentinel local_620;
  FDestructionSentinel local_608;
  undefined1 *local_5f0;
  TSharedRef<STextBlock,1> local_5e8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5d8;
  FArguments local_5c0;
  code *local_68;
  undefined **local_58;
  SCompactTreeView *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_728;
  pFVar9 = STextBlock::FArguments::FArguments(&local_5c0);
  uVar6 = _UNK_150924fd8;
  local_688 = 1;
  local_670 = 0;
  local_698 = ___xmm_00000000000000000000000040800000;
  uStack_690 = _UNK_150924fd8;
  local_680 = (undefined1  [8])0x0;
  FStack_678.Data = (FScriptContainerElement *)0x0;
  uVar5 = _UNK_150924fd4;
  (pFVar9->_Margin).Value.Left = (float)___xmm_00000000000000000000000040800000;
  uVar7 = _UNK_150924fd8;
  (pFVar9->_Margin).Value.Top = (float)uVar5;
  _UNK_150924fd8 = (undefined4)uVar6;
  _UNK_150924fdc = SUB84(uVar6,4);
  uVar5 = _UNK_150924fdc;
  (pFVar9->_Margin).Value.Right = (float)_UNK_150924fd8;
  _UNK_150924fd8 = uVar7;
  (pFVar9->_Margin).Value.Bottom = (float)uVar5;
  (pFVar9->_Margin).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Margin).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_680);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_680,
             (FWriteAccessScope *)&local_650);
  if (((int)local_670 != 0) && (FStack_678.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_678.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_678,0,0,0x10);
    local_670 = local_670 & 0xffffffff00000000;
  }
  if (local_650.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_650.Accessor,&local_650);
  }
  if (FStack_678.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_678.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_680);
  if (param_1->Object == (FStateItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pFVar2 = param_1->Object;
  local_6c8.TextData.Reference = (pFVar2->Desc).TextData.Reference;
  if (local_6c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6c8.TextData.Reference + 8))
              (local_6c8.TextData.Reference,local_668);
  }
  local_6c8.Flags = (pFVar2->Desc).Flags;
  local_6b8 = true;
  local_6a0 = 0;
  local_6b0 = (undefined1  [8])0x0;
  FStack_6a8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar9->_Text).Value,&local_6c8);
  (pFVar9->_Text).bIsSet = local_6b8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6b0,
             (FWriteAccessScope *)&local_638);
  if (((int)local_6a0 != 0) && (FStack_6a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6a8,0,0,0x10);
    local_6a0 = local_6a0 & 0xffffffff00000000;
  }
  if (local_638.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_638.Accessor,&local_638);
  }
  if (FStack_6a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b0);
  if (local_6c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6c8.TextData.Reference + 0x10))();
  }
  pFVar9->_TextStyle = this->TextStyle;
  pTVar1 = &pFVar9->_OverflowPolicy;
  if ((TOptional<ETextOverflowPolicy> *)local_6d0 != pTVar1) {
    pTVar1->TypedValue = Ellipsis;
    pTVar1->bIsSet = true;
  }
  if (param_1->Object == (FStateItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  local_6f0 = param_1->Object->bIsEnabled;
  local_6ef = 1;
  local_6d8 = 0;
  local_6e8 = (undefined1  [8])0x0;
  FStack_6e0.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)&pFVar9->_padding_ = local_6f0;
  *(undefined1 *)((longlong)&pFVar9->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6e8,
             (FWriteAccessScope *)&local_620);
  if (((int)local_6d8 != 0) && (FStack_6e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6e0,0,0,0x10);
    local_6d8 = local_6d8 & 0xffffffff00000000;
  }
  if (local_620.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_620.Accessor,&local_620);
  }
  if (FStack_6e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6e8);
  local_40 = (undefined ***)0x0;
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::StateTree::SCompactTreeView::CreateNameWidgetInternal'::__l2::<lambda_1>,FText>
             ::Call;
  (pFVar9->_HighlightText).bIsSet = true;
  local_50 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar9->_HighlightText).Getter,(FWriteAccessScope *)&local_608);
  local_5f0 = &(pFVar9->_HighlightText).Getter.field_0x8;
  puVar11 = Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_5f0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AVFText__XZ____V__6B_
    ;
    puVar11[4] = local_68;
    puVar11[9] = 0;
    if (local_68 != (code *)0x0) {
      pppuVar14 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar14 = local_40;
      }
      (*(code *)**pppuVar14)();
    }
  }
  if (local_608.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_608.Accessor,&local_608);
  }
  FLLMScope::FLLMScope(&local_6f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_664 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_658,&local_664,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5d8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Widgets\\SCompactTreeView.cpp"
             ,0x8f,local_6f8);
  FMemScope::~FMemScope(&local_658);
  FLLMScope::~FLLMScope(&local_6f4);
  pTVar13 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5d8,&local_5e8,pFVar9);
  __return_storage_ptr__->Object = (SWidget *)pTVar13->Object;
  pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d8._Widget.SharedReferenceCount.ReferenceController);
  if (local_68 != (code *)0x0) {
    pppuVar14 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar14 = local_40;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  STextBlock::FArguments::~FArguments(&local_5c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// CreateStateItemInternal @ 14d724f90

TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> * __thiscall
UE::StateTree::SCompactTreeView::CreateStateItemInternal
          (SCompactTreeView *this,
          TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> *__return_storage_ptr__)

{
  MakeShared<UE::StateTree::SCompactTreeView::FStateItem,1>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ExpandAll @ 14d728360

void __thiscall
UE::StateTree::SCompactTreeView::ExpandAll
          (SCompactTreeView *this,
          TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  longlong local_28;
  longlong local_20;
  
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if ((this->StateItemTree).Object ==
        (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar4 = &((this->StateItemTree).Object)->field_0x588;
    pcVar2 = *(code **)(*(longlong *)puVar4 + 0x50);
    local_28 = *(longlong *)pFVar5;
    local_20 = *(longlong *)(pFVar5 + 8);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (*pcVar2)(puVar4,&local_28,1);
    if (*(longlong *)pFVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ExpandAll(this,(TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
                    *)(*(longlong *)pFVar5 + 0x58));
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// FilterStateItemChildren @ 14d7286c0

int __cdecl
UE::StateTree::SCompactTreeView::FilterStateItemChildren
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
          *param_3,TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
                   *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  FLinearColor FVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FString *pFVar13;
  size_t sVar14;
  TReferenceControllerBase<1> *pTVar15;
  ulonglong uVar16;
  longlong lVar17;
  TReferenceControllerBase<1> *pTVar18;
  TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
  *pTVar19;
  FScriptContainerElement *pFVar20;
  wchar_t *_Str;
  FScriptContainerElement *pFVar21;
  TReferenceControllerBase<1> *pTVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  char local_res10;
  TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
  *local_res18;
  TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
  *local_res20;
  undefined1 local_98 [4];
  int local_94;
  TReferenceControllerBase<1> *local_90;
  TReferenceControllerBase<1> *local_88;
  TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
  local_80;
  FString local_70;
  uint local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [8];
  FScriptContainerElement *local_50;
  
  pFVar21 = (param_3->AllocatorInstance).Data;
  iVar11 = 0;
  local_60 = param_3->ArrayNum;
  uVar16 = (ulonglong)(int)local_60;
  local_94 = 0;
  local_50 = pFVar21 + uVar16 * 0x10;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
LAB_14d728710:
  pFVar23 = local_50;
  if (local_res18->ArrayNum != (int)uVar16) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (pFVar21 == pFVar23) {
    return iVar11;
  }
  if (local_res10 == '\0') {
    if ((*(longlong *)pFVar21 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      iVar11 = (*pcVar5)();
      return iVar11;
    }
    pFVar13 = FText::ToString((FText *)(*(longlong *)pFVar21 + 0x10));
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = (pFVar13->Data).ArrayNum;
    lVar17 = (longlong)local_70.Data.ArrayNum;
    pFVar23 = (pFVar13->Data).AllocatorInstance.Data;
    if (local_70.Data.ArrayNum == 0) {
      local_70.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_70.Data.ArrayNum,0,(ForAnyElementType *)&local_70,local_70.Data.ArrayNum,
                 &local_70.Data.ArrayMax);
      memcpy(local_70.Data.AllocatorInstance.Data,pFVar23,lVar17 * 2);
    }
    iVar11 = param_1->ArrayNum;
    pFVar23 = (param_1->AllocatorInstance).Data;
    pFVar20 = pFVar23 + (longlong)iVar11 * 0x10;
    do {
      if (param_1->ArrayNum != iVar11) {
        local_98[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_98);
      }
      if (pFVar23 == pFVar20) {
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        bVar9 = false;
        goto LAB_14d728851;
      }
      if (*(int *)(pFVar23 + 8) == 0) {
        _Str = L"";
LAB_14d72880a:
        sVar14 = wcslen(_Str);
        iVar12 = ::FString::Find(&local_70,_Str,(int)sVar14,IgnoreCase,FromStart,-1);
        if (iVar12 != -1) goto LAB_14d72883f;
      }
      else {
        _Str = *(wchar_t **)pFVar23;
        if (_Str != (wchar_t *)0x0) goto LAB_14d72880a;
      }
      pFVar23 = pFVar23 + 0x10;
    } while( true );
  }
  goto LAB_14d72884f;
LAB_14d72883f:
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
LAB_14d72884f:
  bVar9 = true;
LAB_14d728851:
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  if ((*(longlong *)pFVar21 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  iVar11 = FilterStateItemChildren
                     (param_1,bVar9,
                      (TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
                       *)(*(longlong *)pFVar21 + 0x58),&local_80);
  iVar11 = iVar11 + (uint)bVar9;
  if (iVar11 < 1) goto LAB_14d728cba;
  pTVar15 = ::operator_new(0x90);
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
    pTVar22 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_14d7289c5:
    if (((pTVar22->_padding_ == 0) || (*(longlong *)&pTVar22->SharedReferenceCount == 0)) ||
       (*(int *)(*(longlong *)&pTVar22->SharedReferenceCount + 8) < 1)) {
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar22->_padding_ = (longlong)pTVar22;
      if (pTVar18 != *(TReferenceControllerBase<1> **)&pTVar22->SharedReferenceCount) {
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = *(longlong **)&pTVar22->SharedReferenceCount;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pTVar22->SharedReferenceCount = pTVar18;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
  }
  else {
    pTVar15->SharedReferenceCount = (atomic<int>)0x1;
    pTVar15->WeakReferenceCount = (atomic<int>)0x1;
    pTVar15->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFStateItem_SCompactTreeView_StateTree_UE___00_SharedPointerInternals__6B_
    ;
    pTVar15[2]._padding_ = 0;
    pTVar15[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[3]._padding_ = 0;
    pTVar15[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[4]._padding_ = 0;
    pTVar15[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[5]._padding_ = 0;
    pTVar15[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[6]._padding_ = 0;
    pTVar15[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[7]._padding_ = 0;
    pTVar15[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[8]._padding_ = 0;
    pTVar15[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[1]._padding_ = 0;
    pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar15 + 2));
    FText::FText((FText *)(pTVar15 + 3));
    pTVar15[4]._padding_ = 0;
    pTVar15[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[5]._padding_ = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&pTVar15[5].SharedReferenceCount);
    pTVar15[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[7]._padding_ = 0;
    FVar7 = FLinearColor::White;
    pTVar22 = pTVar15 + 1;
    *(undefined1 *)&pTVar15[8].SharedReferenceCount = 0;
    *(FLinearColor_u_0 *)&pTVar15[7].SharedReferenceCount = (FLinearColor_u_0_s_0)FVar7.field0_0x0;
    *(undefined1 *)&pTVar15[8].WeakReferenceCount = 1;
    pTVar18 = pTVar15;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d7289c5;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      iVar11 = (*pcVar5)();
      return iVar11;
    }
  }
  pTVar19 = local_res20;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar23 = (local_res20->AllocatorInstance).Data;
  local_90 = pTVar22;
  local_88 = pTVar18;
  if (((pFVar23 <= (FScriptContainerElement *)&local_90) &&
      ((FScriptContainerElement *)&local_90 < pFVar23 + (longlong)local_res20->ArrayMax * 0x10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  iVar12 = pTVar19->ArrayNum;
  if (iVar12 == pTVar19->ArrayMax) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
  }
  pTVar19->ArrayNum = iVar12 + 1;
  pFVar23 = (pTVar19->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar23 = local_90;
  *(TReferenceControllerBase<1> **)(pFVar23 + 8) = local_88;
  local_88 = (TReferenceControllerBase<1> *)0x0;
  local_90 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  if ((*(longlong *)pFVar21 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  lVar17 = *(longlong *)pFVar21;
  if ((*(longlong *)pFVar23 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  lVar2 = *(longlong *)pFVar23;
  plVar3 = *(longlong **)(lVar17 + 0x10);
  plVar4 = *(longlong **)(lVar2 + 0x10);
  if (plVar4 != plVar3) {
    *(longlong **)(lVar2 + 0x10) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,local_5c);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar17 + 0x18);
  plVar3 = *(longlong **)(lVar17 + 0x20);
  plVar4 = *(longlong **)(lVar2 + 0x20);
  if (plVar4 != plVar3) {
    *(longlong **)(lVar2 + 0x20) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,local_58);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar17 + 0x28);
  uVar6 = *(undefined8 *)(lVar17 + 0x38);
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar17 + 0x30);
  *(undefined8 *)(lVar2 + 0x38) = uVar6;
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar17 + 0x40);
  if ((FInstancedStruct *)(lVar2 + 0x48) != (FInstancedStruct *)(lVar17 + 0x48)) {
    FInstancedStruct::InitializeAs
              ((FInstancedStruct *)(lVar2 + 0x48),
               (((FInstancedStruct *)(lVar17 + 0x48))->ScriptStruct).field0_0x0.DebugPtr,
               *(uchar **)(lVar17 + 0x50));
  }
  TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
             *)(lVar2 + 0x58),
            (TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
             *)(lVar17 + 0x58));
  uVar6 = *(undefined8 *)(lVar17 + 0x70);
  *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar17 + 0x68);
  *(undefined8 *)(lVar2 + 0x70) = uVar6;
  *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(lVar17 + 0x78);
  *(undefined1 *)(lVar2 + 0x7c) = *(undefined1 *)(lVar17 + 0x7c);
  if ((*(longlong *)pFVar23 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  lVar17 = *(longlong *)pFVar23;
  pTVar19 = (TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
             *)(lVar17 + 0x58);
  if (pTVar19 != &local_80) {
    DestructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
              ((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
               (pTVar19->AllocatorInstance).Data,*(int *)(lVar17 + 0x60));
    FVar8.Data = local_80.AllocatorInstance.Data;
    iVar12 = local_80.ArrayNum;
    piVar1 = (int *)(lVar17 + 100);
    *(int *)(lVar17 + 0x60) = local_80.ArrayNum;
    if ((local_80.ArrayNum == 0) && (*piVar1 == 0)) {
      local_94 = local_94 + iVar11;
      *piVar1 = 0;
      goto LAB_14d728cba;
    }
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_80.ArrayNum,*piVar1,(ForAnyElementType *)pTVar19,local_80.ArrayNum,
               piVar1);
    ConstructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
              ((pTVar19->AllocatorInstance).Data,
               (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)FVar8.Data,iVar12);
  }
  local_94 = local_94 + iVar11;
LAB_14d728cba:
  iVar11 = local_94;
  DestructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
            ((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
             local_80.AllocatorInstance.Data,local_80.ArrayNum);
  if ((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)local_80.AllocatorInstance.Data
      != (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  pFVar21 = pFVar21 + 0x10;
  uVar16 = (ulonglong)local_60;
  goto LAB_14d728710;
}

// FindStateByIDRecursive @ 14d7292f0

bool __cdecl
UE::StateTree::SCompactTreeView::FindStateByIDRecursive
          (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1,FGuid *param_2,
          TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FStateItem *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar10;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar11;
  undefined1 local_res8 [8];
  FGuid local_38;
  
  pTVar10 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
            (param_3->AllocatorInstance).Data;
  if (((pTVar10 <= param_1) && (param_1 < pTVar10 + param_3->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = param_3->ArrayNum;
  piVar1 = &param_3->ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_3->AllocatorInstance,piVar1);
  }
  param_3->ArrayNum = iVar7 + 1;
  pFVar9 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FStateItem **)pFVar9 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->Object == (FStateItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = param_1->Object;
  if ((((pFVar3->StateID).D != param_2->D || (pFVar3->StateID).C != param_2->C) ||
      (pFVar3->StateID).B != param_2->B) || (pFVar3->StateID).A != param_2->A) {
    if ((pFVar3 == (FStateItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar3 = param_1->Object;
    iVar7 = (pFVar3->Children).ArrayNum;
    pTVar10 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
              (pFVar3->Children).AllocatorInstance.Data;
    pTVar11 = pTVar10 + iVar7;
    while( true ) {
      if ((pFVar3->Children).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pTVar10 == pTVar11) {
        if ((param_3->ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar8 = (longlong)param_3->ArrayNum;
        pFVar9 = (param_3->AllocatorInstance).Data;
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar9 + lVar8 * 0x10 + -8);
        *(undefined8 *)(pFVar9 + lVar8 * 0x10 + -8) = 0;
        *(undefined8 *)(pFVar9 + lVar8 * 0x10 + -0x10) = 0;
        iVar7 = param_3->ArrayNum;
        pFVar9 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar9 + -8));
        iVar7 = param_3->ArrayNum - iVar7;
        if (iVar7 != 0) {
          memmove(pFVar9 + -0x10,pFVar9,(longlong)iVar7 << 4);
        }
        param_3->ArrayNum = param_3->ArrayNum + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        return false;
      }
      local_38.A = param_2->A;
      local_38.B = param_2->B;
      local_38.C = param_2->C;
      local_38.D = param_2->D;
      bVar5 = FindStateByIDRecursive(pTVar10,&local_38,param_3);
      if (bVar5) break;
      pTVar10 = pTVar10 + 1;
    }
  }
  return true;
}

// FindStatesByIDRecursive @ 14d729580

void __cdecl
UE::StateTree::SCompactTreeView::FindStatesByIDRecursive
          (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1,
          TArrayView<FGuid_const_,int> *param_2,
          TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  FStateItem *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGuid *pFVar6;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar7;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar8;
  FGuid *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TArrayView<FGuid_const_,int> local_28;
  
  if ((param_1->Object == (FStateItem *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = param_2->DataPtr;
  pFVar1 = param_1->Object;
  pFVar9 = pFVar6 + param_2->ArrayNum;
  if (pFVar6 != pFVar9) {
    do {
      if ((((pFVar1->StateID).D == pFVar6->D && (pFVar1->StateID).C == pFVar6->C) &&
          (pFVar1->StateID).B == pFVar6->B) && (pFVar1->StateID).A == pFVar6->A) {
        pTVar7 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
                 (param_3->AllocatorInstance).Data;
        if (((pTVar7 <= param_1) && (param_1 < pTVar7 + param_3->ArrayMax)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = param_3->ArrayNum;
        if (iVar5 == param_3->ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar5 + 1;
        pFVar10 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(FStateItem **)pFVar10 = param_1->Object;
        pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
        *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar9);
  }
  if ((param_1->Object == (FStateItem *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = param_1->Object;
  iVar5 = (pFVar1->Children).ArrayNum;
  pTVar7 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
           (pFVar1->Children).AllocatorInstance.Data;
  pTVar8 = pTVar7 + iVar5;
  while( true ) {
    if ((pFVar1->Children).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar7 == pTVar8) break;
    local_28.DataPtr = param_2->DataPtr;
    local_28.ArrayNum = param_2->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
    FindStatesByIDRecursive(pTVar7,&local_28,param_3);
    pTVar7 = pTVar7 + 1;
  }
  return;
}

// GenerateStateItemRow @ 14d72c2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<ITableRow,1> * __thiscall
UE::StateTree::SCompactTreeView::GenerateStateItemRow
          (SCompactTreeView *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  FStateItem *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  FSlot *this_00;
  FSlot *pFVar8;
  FSlotArguments *pFVar9;
  FArguments *pFVar10;
  TSharedRef<SImage,1> *pTVar11;
  undefined8 *puVar12;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  TSharedRef<STableViewBase,1> *local_res20;
  FLLMScope local_968 [2];
  undefined1 local_960;
  undefined1 local_95f;
  undefined1 local_958 [8];
  ForAnyElementType FStack_950;
  ulonglong local_948;
  uchar local_940;
  undefined1 local_93f;
  undefined1 local_938 [8];
  ForAnyElementType FStack_930;
  ulonglong local_928;
  SImage *local_920;
  FSharedReferencer<1> local_918;
  FSlateBrush *local_910;
  undefined1 local_908;
  undefined1 local_900 [8];
  ForAnyElementType FStack_8f8;
  ulonglong local_8f0;
  FText local_8e8;
  undefined1 local_8d8;
  undefined1 local_8d0 [8];
  ForAnyElementType FStack_8c8;
  ulonglong local_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined4 local_8a8;
  undefined1 local_8a4;
  undefined1 local_8a0 [8];
  ForAnyElementType FStack_898;
  ulonglong local_890;
  undefined8 local_888;
  FSharedReferencer<1> local_880;
  double local_878;
  double dStack_870;
  undefined1 local_868;
  undefined1 local_860;
  undefined1 local_858 [8];
  ForAnyElementType FStack_850;
  ulonglong local_848;
  undefined1 local_840 [8];
  FSlot *local_838;
  FName local_830;
  FMemScope local_828;
  FSlot *local_820;
  FName local_818;
  FMemScope local_810;
  FStateItem *local_808;
  TReferenceControllerBase<1> *local_800;
  FStateItem *local_7f8;
  TReferenceControllerBase<1> *local_7f0;
  FDestructionSentinel local_7e8;
  FDestructionSentinel local_7d0;
  FDestructionSentinel local_7b8;
  FDestructionSentinel local_7a0;
  FDestructionSentinel local_788;
  FDestructionSentinel local_770;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_758;
  undefined1 local_740 [8];
  TReferenceControllerBase<1> *local_738;
  SHorizontalBox *local_728;
  TReferenceControllerBase<1> *pTStack_720;
  TSharedRef<SHorizontalBox,1> local_718;
  TSharedRef<SImage,1> local_708;
  undefined1 local_6f8 [8];
  TReferenceControllerBase<1> *local_6f0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_6e8;
  undefined8 *local_6d0 [2];
  TReferenceControllerBase<1> *local_6c0;
  undefined1 local_6a0 [24];
  undefined4 local_688;
  undefined1 local_684;
  undefined4 local_680;
  undefined1 local_67c;
  FSlotArgumentsMixin local_678;
  undefined8 *local_5e8 [2];
  TReferenceControllerBase<1> *local_5d8;
  undefined1 local_5d0 [24];
  undefined1 local_5b8 [24];
  undefined4 local_5a0;
  undefined1 local_59c;
  undefined4 local_598;
  undefined1 local_594;
  FSlotArgumentsMixin local_590;
  FArguments local_500;
  FArguments local_2f8;
  
  local_res20 = param_2;
  pFVar6 = SHorizontalBox::FArguments::FArguments(&local_500);
  if ((param_1->Object == (FStateItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar7;
  }
  pFVar1 = param_1->Object;
  local_8e8.TextData.Reference = (pFVar1->TooltipText).TextData.Reference;
  if (local_8e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8e8.TextData.Reference + 8))
              (local_8e8.TextData.Reference,local_840);
  }
  local_8e8.Flags = (pFVar1->TooltipText).Flags;
  local_8d8 = 1;
  pFVar8 = (FSlot *)0x0;
  local_8c0 = 0;
  local_8d0 = (undefined1  [8])0x0;
  FStack_8c8.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar6,&local_8e8);
  *(undefined1 *)&pFVar6->_padding_ = local_8d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8d0,
             (FWriteAccessScope *)&local_770);
  if (((int)local_8c0 != 0) && (FStack_8c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8c8,0,0,0x10);
    local_8c0 = local_8c0 & 0xffffffff00000000;
  }
  if (local_770.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_770.Accessor,&local_770);
  }
  if (FStack_8c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8d0);
  if (local_8e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8e8.TextData.Reference + 0x10))();
  }
  this_00 = ::operator_new(0x58);
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    pFVar8 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  local_838 = pFVar8;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_5e8,(FSlot *)&local_838);
  local_5a0 = 1;
  local_59c = 1;
  local_598 = 2;
  local_594 = 1;
  pFVar9 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_5d0,0.0,__real_40000000,__real_40800000,
                      __real_40000000);
  pFVar9 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar9);
  pFVar10 = SImage::FArguments::FArguments(&local_2f8);
  if ((param_1->Object == (FStateItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar7;
  }
  local_93f = 1;
  local_940 = (uchar)EVisibility::Collapsed.Value.Value;
  if (param_1->Object->Icon != (FSlateBrush *)0x0) {
    local_940 = (uchar)EVisibility::Visible.Value.Value;
  }
  local_928 = 0;
  local_938 = (undefined1  [8])0x0;
  FStack_930.Data = (FScriptContainerElement *)0x0;
  *(uchar *)&pFVar10->_padding_ = local_940;
  *(undefined1 *)((longlong)&pFVar10->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_938);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_938,
             (FWriteAccessScope *)&local_7e8);
  if (((int)local_928 != 0) && (FStack_930.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_930.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_930,0,0,0x10);
    local_928 = local_928 & 0xffffffff00000000;
  }
  if (local_7e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7e8.Accessor,&local_7e8);
  }
  if (FStack_930.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_930.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_938);
  dVar4 = _UNK_15094b758;
  local_868 = 1;
  local_860 = 1;
  local_848 = 0;
  local_878 = ___xmm_40300000000000004030000000000000;
  dStack_870 = _UNK_15094b758;
  local_858 = (undefined1  [8])0x0;
  FStack_850.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_878 !=
      &pFVar10->_DesiredSizeOverride) {
    (pFVar10->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.X =
         ___xmm_40300000000000004030000000000000;
    (pFVar10->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.Y = dVar4;
    (pFVar10->_DesiredSizeOverride).Value.bIsSet = true;
  }
  (pFVar10->_DesiredSizeOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_DesiredSizeOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_858);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_858,
             (FWriteAccessScope *)&local_7d0);
  if (((int)local_848 != 0) && (FStack_850.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_850.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_850,0,0,0x10);
    local_848 = local_848 & 0xffffffff00000000;
  }
  if (local_7d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7d0.Accessor,&local_7d0);
  }
  if (FStack_850.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_850.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_858);
  if ((param_1->Object == (FStateItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar7;
  }
  local_910 = param_1->Object->Icon;
  local_908 = 1;
  local_8f0 = 0;
  local_900 = (undefined1  [8])0x0;
  FStack_8f8.Data = (FScriptContainerElement *)0x0;
  (pFVar10->_Image).Value = local_910;
  (pFVar10->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_900);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
             (FWriteAccessScope *)&local_7b8);
  if (((int)local_8f0 != 0) && (FStack_8f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8f8,0,0,0x10);
    local_8f0 = local_8f0 & 0xffffffff00000000;
  }
  if (local_7b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b8.Accessor,&local_7b8);
  }
  if (FStack_8f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_900);
  if ((param_1->Object == (FStateItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar7;
  }
  pFVar1 = param_1->Object;
  local_8b8 = *(undefined8 *)&(pFVar1->Color).SpecifiedColor.field0_0x0;
  uStack_8b0 = *(undefined8 *)((longlong)&(pFVar1->Color).SpecifiedColor.field0_0x0 + 8);
  local_8a8._0_1_ = (pFVar1->Color).ColorUseRule;
  local_8a8._1_1_ = (pFVar1->Color).ColorTableId;
  local_8a8._2_2_ = *(undefined2 *)&(pFVar1->Color).field_0x12;
  local_8a4 = 1;
  local_890 = 0;
  local_8a0 = (undefined1  [8])0x0;
  FStack_898.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar10->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_8b8;
  *(undefined8 *)((longlong)&(pFVar10->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_8b0;
  (pFVar10->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_8a8;
  (pFVar10->_ColorAndOpacity).Value.ColorTableId = local_8a8._1_1_;
  *(undefined2 *)&(pFVar10->_ColorAndOpacity).Value.field_0x12 = local_8a8._2_2_;
  (pFVar10->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8a0,
             (FWriteAccessScope *)&local_7a0);
  if (((int)local_890 != 0) && (FStack_898.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_898.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_898,0,0,0x10);
    local_890 = local_890 & 0xffffffff00000000;
  }
  if (local_7a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a0.Accessor,&local_7a0);
  }
  if (FStack_898.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_898.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8a0);
  if ((param_1->Object == (FStateItem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar7;
  }
  local_960 = param_1->Object->bIsEnabled;
  local_95f = 1;
  local_948 = 0;
  local_958 = (undefined1  [8])0x0;
  FStack_950.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)&pFVar10->_padding_ = local_960;
  *(undefined1 *)((longlong)&pFVar10->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_958);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_958,
             (FWriteAccessScope *)&local_788);
  if (((int)local_948 != 0) && (FStack_950.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_950.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_950,0,0,0x10);
    local_948 = local_948 & 0xffffffff00000000;
  }
  if (local_788.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_788.Accessor,&local_788);
  }
  if (FStack_950.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_950.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_958);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_830 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_828,&local_830,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_758,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Widgets\\SCompactTreeView.cpp"
             ,0xa4,local_res8);
  FMemScope::~FMemScope(&local_828);
  FLLMScope::~FLLMScope(local_res18);
  pTVar11 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_758,&local_708,pFVar10);
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_920 = pTVar11->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_918.ReferenceController = pTVar2;
  if ((SImage **)&pFVar9->field_0x8 != &local_920) {
    *(SImage **)&pFVar9->field_0x8 = local_920;
    local_920 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar9->field_0x10,&local_918);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_918.ReferenceController);
  pFVar6 = SHorizontalBox::FArguments::operator+(pFVar6,pFVar9);
  pFVar8 = ::operator_new(0x58);
  local_820 = (FSlot *)0x0;
  if (pFVar8 != (FSlot *)0x0) {
    *(undefined8 *)pFVar8 = 0;
    *(undefined8 *)&pFVar8->field_0x8 = 0;
    *(undefined8 *)&pFVar8->field_0x10 = 0;
    *(undefined8 *)&pFVar8->field_0x18 = 0;
    *(undefined8 *)&pFVar8->field_0x20 = 0;
    *(undefined8 *)&pFVar8->field_0x28 = 0;
    *(undefined8 *)&pFVar8->field_0x30 = 0;
    *(undefined8 *)&pFVar8->field_0x38 = 0;
    *(undefined8 *)&pFVar8->field_0x40 = 0;
    *(undefined8 *)&pFVar8->field_0x48 = 0;
    *(undefined8 *)&pFVar8->field_0x50 = 0;
    local_820 = SHorizontalBox::FSlot::FSlot(pFVar8);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_6d0,(FSlot *)&local_820);
  local_688 = 0;
  local_684 = 1;
  local_680 = 2;
  local_67c = 1;
  pFVar9 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_6d0);
  pcVar3 = *(code **)(this->_padding_ + 0x270);
  local_808 = param_1->Object;
  local_800 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_800 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_800->SharedReferenceCount = (atomic<int>)((int)local_800->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar12 = (undefined8 *)(*pcVar3)(this,local_6f8,&local_808);
  local_880.ReferenceController = (TReferenceControllerBase<1> *)puVar12[1];
  local_888 = *puVar12;
  if (local_880.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_880.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_880.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&pFVar9->field_0x8 != &local_888) {
    *(undefined8 *)&pFVar9->field_0x8 = local_888;
    local_888 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar9->field_0x10,&local_880);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_880.ReferenceController);
  pFVar6 = SHorizontalBox::FArguments::operator+(pFVar6,pFVar9);
  FLLMScope::FLLMScope(local_968,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_818 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_810,&local_818,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_6e8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Widgets\\SCompactTreeView.cpp"
             ,0x9a,local_res10);
  FMemScope::~FMemScope(&local_810);
  FLLMScope::~FLLMScope(local_968);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_6e8,&local_718,pFVar6)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6e8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6f0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_678);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a0);
  if ((void *)local_6a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6c0);
  if (local_6d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_6d0[0])(local_6d0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_708.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_758._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2f8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_590);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b8);
  if ((void *)local_5b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5d8);
  if (local_5e8[0] != (undefined8 *)0x0) {
    (**(code **)*local_5e8[0])(local_5e8[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_500._Slots.AllocatorInstance.Data,local_500._Slots.ArrayNum);
  if ((FSlotArguments *)local_500._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_500._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_500);
  local_728 = local_718.Object;
  pTStack_720 = local_718.SharedReferenceCount.ReferenceController;
  pcVar3 = *(code **)(this->_padding_ + 0x250);
  if (local_718.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_718.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7f8 = param_1->Object;
  local_7f0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_7f0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_7f0->SharedReferenceCount = (atomic<int>)((int)local_7f0->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar12 = (undefined8 *)(*pcVar3)(this,local_740,&local_7f8,local_res20,&local_728);
  __return_storage_ptr__->Object = (ITableRow *)*puVar12;
  pTVar2 = (TReferenceControllerBase<1> *)puVar12[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_738);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_718.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GenerateStateItemRowInternal @ 14d72cdd0

TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1> * __thiscall
UE::StateTree::SCompactTreeView::GenerateStateItemRowInternal
          (SCompactTreeView *this,
          TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
          *__return_storage_ptr__,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1
          ,TSharedRef<STableViewBase,1> *param_2,TSharedRef<SHorizontalBox,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  SHorizontalBox *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<SHorizontalBox,1> *pTVar5;
  STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *pSVar6;
  bool bVar7;
  FArguments *pFVar8;
  TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1> *pTVar9;
  FName local_res10;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res18;
  FMemScope local_res20;
  TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_368;
  undefined8 local_350;
  FSharedReferencer<1> local_348;
  TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1> local_340;
  FArguments local_330;
  
  pFVar8 = STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::FArguments::
           FArguments(&local_330);
  pTVar5 = param_3;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  pSVar2 = param_3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar8->_Content).Widget.Object = (SWidget *)pSVar2;
  (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_res18.Arg0 = param_2;
  FLLMScope::FLLMScope
            ((FLLMScope *)&param_3,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  local_368._RequiredArgs = &local_res18;
  local_368._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = MakeShared<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                     (&local_340);
  local_348.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  local_368._Widget.Object = pTVar9->Object;
  if (local_348.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_348.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_348.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_350 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_368._Widget.SharedReferenceCount,&local_348);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_348.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_340.SharedReferenceCount.ReferenceController);
  pSVar6 = local_368._Widget.Object;
  if (local_368._Widget.Object ==
      (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedRef<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>
                *)(*pcVar3)();
      return pTVar9;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar6->_padding_,"STableRow<TSharedPtr<FStateItem>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Widgets\\SCompactTreeView.cpp"
             ,0xc0,0x3f8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope((FLLMScope *)&param_3);
  TSlateDecl<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  ::operator<<=(&local_368,__return_storage_ptr__,pFVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::FArguments::~FArguments
            (&local_330);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar5->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetSelection @ 14d731050

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
UE::StateTree::SCompactTreeView::GetSelection
          (SCompactTreeView *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FGuid *pFVar1;
  FStateItem *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 *puVar10;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar11;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar12;
  undefined1 local_res8 [8];
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *local_28;
  int local_20;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->StateItemTree).Object ==
      (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
  }
  puVar10 = &((this->StateItemTree).Object)->field_0x588;
  (**(code **)(*(longlong *)puVar10 + 0xd0))(puVar10,&local_28);
  iVar6 = local_20;
  pTVar11 = local_28 + local_20;
  pTVar12 = local_28;
  while( true ) {
    if (local_20 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar12 == pTVar11) break;
    pFVar2 = pTVar12->Object;
    if (pFVar2 != (FStateItem *)0x0) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar1 = &pFVar2->StateID;
      if ((pFVar3 <= pFVar1) &&
         (pFVar1 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      uVar5 = *(undefined8 *)&(pFVar2->StateID).C;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar1;
      *(undefined8 *)(pFVar3 + 8) = uVar5;
    }
    pTVar12 = pTVar12 + 1;
  }
  DestructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>(local_28,local_20);
  if (local_28 != (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetStateItemChildren @ 14d731320

void __thiscall
UE::StateTree::SCompactTreeView::GetStateItemChildren
          (SCompactTreeView *this,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1
          ,TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
           *param_2)

{
  if (param_1->Object != (FStateItem *)0x0) {
    TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>::
    operator=(param_2,&param_1->Object->Children);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetWidgetToFocusOnOpen @ 14d7314f0

TSharedPtr<SWidget,1> * __thiscall
UE::StateTree::SCompactTreeView::GetWidgetToFocusOnOpen
          (SCompactTreeView *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWidget *)(this->SearchBox).Object;
  pTVar1 = (this->SearchBox).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// OnSearchBoxTextChanged @ 14d73a010

void __thiscall
UE::StateTree::SCompactTreeView::OnSearchBoxTextChanged(SCompactTreeView *this,FText *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *this_00;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  
  if ((this->StateItemTree).Object !=
      (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    this_00 = FText::ToString(param_1);
    ::FString::ParseIntoArrayWS(this_00,&this->FilterStrings,(wchar_t *)0x0,true);
    iVar6 = (this->FilterStrings).ArrayNum;
    lVar2 = (longlong)iVar6;
    if (iVar6 != 0) {
      pFVar1 = (this->FilterStrings).AllocatorInstance.Data;
      iVar9 = 0;
      bVar8 = 1 < *(int *)(pFVar1 + 8);
      lVar4 = 0;
      iVar6 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar7 = iVar6 + 1;
        if (lVar4 < lVar2) {
          pFVar3 = pFVar1 + lVar4 * 0x10 + 8;
          do {
            if (bVar8 != 1 < *(int *)pFVar3) break;
            iVar7 = iVar7 + 1;
            lVar4 = lVar4 + 1;
            pFVar3 = pFVar3 + 0x10;
          } while (lVar4 < lVar2);
        }
        iVar5 = iVar7 - iVar6;
        if (bVar8 == false) {
          DestructItems<FString,int>((FString *)(pFVar1 + (longlong)iVar6 * 0x10),iVar5);
        }
        else {
          if (iVar9 != iVar6) {
            memmove(pFVar1 + (longlong)iVar9 * 0x10,pFVar1 + (longlong)iVar6 * 0x10,
                    (longlong)iVar5 << 4);
          }
          iVar9 = iVar9 + iVar5;
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar6 = iVar7;
      } while (lVar4 < lVar2);
      (this->FilterStrings).ArrayNum = iVar9;
    }
    UpdateFilteredRoot(this,true);
  }
  return;
}

// OnSelectionChangedInternal @ 14d73a160

void __thiscall
UE::StateTree::SCompactTreeView::OnSelectionChangedInternal
          (SCompactTreeView *this,
          TArrayView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_const_,int> *param_1)

{
  return;
}

// OnStateItemExpansionChanged @ 14d73a170

void __thiscall
UE::StateTree::SCompactTreeView::OnStateItemExpansionChanged
          (SCompactTreeView *this,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1
          ,bool param_2)

{
  FObjectKey FVar1;
  UObject *pUVar2;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  FStateItem *pFVar3;
  ulong64 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FObjectKey local_res20;
  FWeakObjectPtr local_28;
  UObject *local_20;
  
  if ((((this->bIsRestoringExpansion == false) &&
       ((this->FilteredRootItem).Object == (this->RootItem).Object)) &&
      (pFVar3 = param_1->Object, pFVar3 != (FStateItem *)0x0)) &&
     ((((pFVar3->StateID).D != 0 || (pFVar3->StateID).C != 0) || (pFVar3->StateID).B != 0) ||
      (pFVar3->StateID).A != 0)) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WeakStateTree).WeakPtr);
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    uVar5 = 0;
    uVar6 = uVar5;
    if (pUVar2 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar2);
      }
      local_28.ObjectIndex = 0;
      local_28.ObjectSerialNumber = 0;
      local_20 = pUVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_20);
      local_res20.ObjectIndex = local_28.ObjectIndex;
      local_res20.ObjectSerialNumber = local_28.ObjectSerialNumber;
      FVar1 = local_res20;
      uVar5 = local_28.ObjectIndex;
      local_res20.ObjectSerialNumber = local_28.ObjectSerialNumber;
      uVar6 = local_res20.ObjectSerialNumber;
      local_res20 = FVar1;
    }
    uVar8 = uVar5 - uVar6 ^ uVar6 >> 0xd;
    uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
    uVar7 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 0xc;
    uVar6 = (uVar5 - uVar7) - uVar8 ^ uVar8 << 0x10;
    uVar5 = (uVar7 - uVar6) - uVar8 ^ uVar6 >> 5;
    uVar7 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 3;
    uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 << 10;
    this_00 = &TMapBase<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,0>_>
               ::FindOrAddImpl<FObjectKey>
                         ((TMapBase<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,0>_>
                           *)&StateExpansionStates,(uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xf,
                          &local_res20)->CollapsedStates;
    pFVar3 = TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>::operator->(param_1);
    if (param_2) {
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        uVar4 = CityHash64((char *)&pFVar3->StateID,0x10);
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::RemoveImpl<FGuid>
                  (this_00,(uint)uVar4,&pFVar3->StateID);
      }
    }
    else {
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (this_00,(FGuid *)&stack0x00000008,(bool *)&pFVar3->StateID);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnStateItemSelected @ 14d73a320

void __thiscall
UE::StateTree::SCompactTreeView::OnStateItemSelected
          (SCompactTreeView *this,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1
          ,Type param_2)

{
  FGuid *pFVar1;
  FStateItem *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *pSVar8;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar9;
  longlong *plVar10;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar11;
  undefined1 local_res18 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *local_78;
  int local_70;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  FReadAccessScope local_48;
  
  if ((param_2 != Direct) && (this->bIsSettingSelection == false)) {
    bVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
    if (bVar6) {
      plVar10 = (longlong *)0x0;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = 0;
      pSVar8 = TSharedPtr<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>::
               operator->(&this->StateItemTree);
      (**(code **)(*(longlong *)&pSVar8->field_0x588 + 0xd0))(&pSVar8->field_0x588,&local_78);
      iVar5 = local_70;
      pTVar11 = local_78 + local_70;
      pTVar9 = local_78;
      while( true ) {
        if (local_70 != iVar5) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        iVar7 = (int)local_80;
        if (pTVar9 == pTVar11) break;
        pFVar2 = pTVar9->Object;
        if (pFVar2 != (FStateItem *)0x0) {
          pFVar1 = &pFVar2->StateID;
          if (((local_88.Data <= pFVar1) &&
              (pFVar1 < local_88.Data + (longlong)local_80._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = (int)local_80;
          if ((int)local_80 == local_80._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&local_88,(int *)((longlong)&local_80 + 4));
          }
          local_80 = CONCAT44(local_80._4_4_,iVar7 + 1);
          uVar4 = *(undefined8 *)&(pFVar2->StateID).C;
          *(undefined8 *)(local_88.Data + (longlong)iVar7 * 0x10) = *(undefined8 *)pFVar1;
          *(undefined8 *)(local_88.Data + (longlong)iVar7 * 0x10 + 8) = uVar4;
        }
        pTVar9 = pTVar9 + 1;
      }
      local_68 = local_88.Data;
      if (((int)local_80 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_60 = iVar7;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged
                 ,&local_48);
      if (*(int *)&(this->OnSelectionChanged).field_0x10 != 0) {
        plVar10 = *(longlong **)&(this->OnSelectionChanged).field_0x8;
      }
      local_58 = (undefined4)local_68;
      uStack_54 = local_68._4_4_;
      iStack_50 = iStack_60;
      uStack_4c = uStack_5c;
      (**(code **)(*plVar10 + 0x60))(plVar10,&local_58);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      DestructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
                (local_78,local_70);
      if (local_78 != (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)0x0) {
        FMemory::Free(local_78);
      }
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdatingFilteredRootInternal @ 14d73ada0

void __thiscall
UE::StateTree::SCompactTreeView::OnUpdatingFilteredRootInternal(SCompactTreeView *this)

{
  return;
}

// Refresh @ 14d742320

void __thiscall UE::StateTree::SCompactTreeView::Refresh(SCompactTreeView *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_38;
  FGuid *local_28;
  int iStack_20;
  TArrayView<FGuid_const_,int> local_18;
  
  if ((this->StateItemTree).Object !=
      (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    GetSelection(this,&local_38);
    CacheStates(this);
    UpdateFilteredRoot(this,false);
    local_28 = (FGuid *)local_38.AllocatorInstance.Data;
    if (local_38.ArrayNum < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iStack_20 = local_38.ArrayNum;
    local_18.DataPtr = local_28;
    SetSelection(this,&local_18);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// RestoreExpansionState @ 14d7446e0

void __thiscall UE::StateTree::SCompactTreeView::RestoreExpansionState(SCompactTreeView *this)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *pSVar4;
  code *pcVar5;
  FObjectKey FVar6;
  FStateExpansionState *pFVar7;
  bool bVar8;
  UObject *pUVar9;
  FStateExpansionState *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  bool local_res10;
  int local_res18;
  int local_res20;
  FObjectKey local_118;
  TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
  local_110;
  FWeakObjectPtr local_100;
  UObject *local_f8;
  FStateExpansionState *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  FStateExpansionState *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88;
  FGuid local_78 [2];
  undefined4 local_4c;
  
  if ((this->StateItemTree).Object !=
      (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    pUVar9 = FWeakObjectPtr::Get(&(this->WeakStateTree).WeakPtr);
    iVar18 = 0;
    local_118.ObjectIndex = 0;
    local_118.ObjectSerialNumber = 0;
    uVar12 = 0;
    iVar16 = iVar18;
    if (pUVar9 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar9);
      }
      local_100.ObjectIndex = 0;
      local_100.ObjectSerialNumber = 0;
      local_f8 = pUVar9;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar9);
      }
      FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_f8);
      local_118.ObjectIndex = local_100.ObjectIndex;
      local_118.ObjectSerialNumber = local_100.ObjectSerialNumber;
      FVar6 = local_118;
      iVar16 = local_100.ObjectIndex;
      local_118.ObjectSerialNumber = local_100.ObjectSerialNumber;
      uVar12 = local_118.ObjectSerialNumber;
      local_118 = FVar6;
    }
    uVar17 = iVar16 - uVar12 ^ uVar12 >> 0xd;
    uVar11 = (-0x61c88647 - uVar17) - uVar12 ^ uVar17 << 8;
    uVar14 = (uVar12 - uVar11) - uVar17 ^ uVar11 >> 0xd;
    uVar17 = (uVar17 - uVar14) - uVar11 ^ uVar14 >> 0xc;
    uVar12 = (uVar11 - uVar14) - uVar17 ^ uVar17 << 0x10;
    uVar11 = (uVar14 - uVar12) - uVar17 ^ uVar12 >> 5;
    uVar14 = (uVar17 - uVar11) - uVar12 ^ uVar11 >> 3;
    uVar12 = (uVar12 - uVar14) - uVar11 ^ uVar14 << 10;
    pFVar10 = TMapBase<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,0>_>
              ::FindOrAddImpl<FObjectKey>
                        ((TMapBase<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,0>_>
                          *)&StateExpansionStates,(uVar11 - uVar12) - uVar14 ^ uVar12 >> 0xf,
                         &local_118);
    local_res10 = this->bIsRestoringExpansion;
    this->bIsRestoringExpansion = true;
    if (((this->FilteredRootItem).Object == (FStateItem *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ExpandAll(this,&((this->FilteredRootItem).Object)->Children);
    iVar16 = *(int *)&(pFVar10->CollapsedStates).Elements.field_0x28;
    puVar3 = &(pFVar10->CollapsedStates).Elements.field_0x10;
    uStack_e4 = 1;
    local_d0 = 0;
    iStack_d4 = iVar18;
    if (iVar16 != 0) {
      puVar20 = *(uint **)&(pFVar10->CollapsedStates).Elements.field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar3;
      }
      uVar12 = *puVar20;
      local_d0 = 0;
      iVar18 = 0;
      while (uVar12 == 0) {
        lVar13 = (longlong)iVar18;
        local_d0 = local_d0 + 0x20;
        iVar18 = iVar18 + 1;
        iStack_d4 = iVar16;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14d7448ed;
        uVar12 = puVar20[lVar13 + 1];
      }
      uStack_e4 = -uVar12 & uVar12;
      uVar2 = (ulonglong)uStack_e4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      iStack_d4 = local_d0 + -1 + local_res18;
      if (iVar16 < iStack_d4) {
        iStack_d4 = iVar16;
      }
    }
LAB_14d7448ed:
    uVar12 = *(uint *)&(pFVar10->CollapsedStates).Elements.field_0x28;
    uStack_cc = local_4c;
    uVar11 = uVar12 & 0xffffffe0;
    iStack_c8 = *(int *)&(pFVar10->CollapsedStates).Elements.field_0x8 -
                *(int *)&(pFVar10->CollapsedStates).Elements.field_0x34;
    uStack_d8 = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_e4,iVar18);
    TStack_b8.CurrentBitIndex = iStack_d4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar12 >> 5;
    TStack_b8._28_4_ = local_4c;
    TStack_b8.BaseBitIndex = local_d0;
    uStack_98 = CONCAT44(uStack_c4,iStack_c8);
    local_f0 = pFVar10;
    iStack_e8 = iVar18;
    local_e0 = puVar3;
    local_c0 = pFVar10;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar12 < 0) || (iVar16 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar14 = *(uint *)&(pFVar10->CollapsedStates).Elements.field_0x28;
    if (uVar12 != uVar14) {
      puVar19 = *(undefined1 **)&(pFVar10->CollapsedStates).Elements.field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar3;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar12 == 0) {
        lVar13 = (longlong)iVar15;
        uVar11 = uVar11 + 0x20;
        iVar15 = iVar15 + 1;
        uVar12 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14d7449fd;
        uVar12 = *(uint *)(puVar19 + lVar13 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      uVar12 = local_res20 + -1 + uVar11;
      if ((int)uVar14 < (int)uVar12) {
        uVar12 = uVar14;
      }
    }
LAB_14d7449fd:
    while( true ) {
      pFVar7 = local_c0;
      if (*(int *)&(local_c0->CollapsedStates).Elements.field_0x8 -
          *(int *)&(local_c0->CollapsedStates).Elements.field_0x34 != (int)uStack_98) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_b8.CurrentBitIndex == uVar12) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
         (pFVar7 == pFVar10)) break;
      local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.ArrayNum = 0;
      local_110.ArrayMax = 0;
      puVar1 = (undefined8 *)
               (*(longlong *)&(pFVar7->CollapsedStates).Elements +
               (longlong)TStack_b8.CurrentBitIndex * 0x18);
      local_78[0]._0_8_ = *puVar1;
      local_78[0]._8_8_ = puVar1[1];
      bVar8 = FindStateByIDRecursive(&this->FilteredRootItem,local_78,&local_110);
      if (bVar8) {
        if (((this->StateItemTree).Object ==
             (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pSVar4 = (this->StateItemTree).Object;
        uVar11 = 0;
        if ((int)(local_110.ArrayNum - 1U) < local_110.ArrayNum) {
          uVar11 = ~(local_110.ArrayNum - 1U) >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        puVar19 = &pSVar4->field_0x588;
        pcVar5 = *(code **)(*(longlong *)puVar19 + 0x50);
        local_90 = *(undefined8 *)
                    &local_110.AllocatorInstance.Data[(longlong)local_110.ArrayNum * 0x10 + -0x10].
                     field_0x0;
        local_88 = *(longlong *)
                    &local_110.AllocatorInstance.Data[(longlong)local_110.ArrayNum * 0x10 + -8].
                     field_0x0;
        if (local_88 != 0) {
          LOCK();
          *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
          UNLOCK();
        }
        (*pcVar5)(puVar19,&local_90,0);
      }
      DestructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
                ((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
                 local_110.AllocatorInstance.Data,local_110.ArrayNum);
      if ((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
          local_110.AllocatorInstance.Data !=
          (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    this->bIsRestoringExpansion = local_res10;
  }
  return;
}

// SetSelection @ 14d747b80

void __thiscall
UE::StateTree::SCompactTreeView::SetSelection
          (SCompactTreeView *this,TArrayView<FGuid_const_,int> *param_1)

{
  TSharedPtr<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1> *this_00;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  Type *pTVar4;
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *pSVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar8;
  TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
  local_88;
  FStateItem *local_78;
  TReferenceControllerBase<1> *local_70;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> local_58;
  TArrayView<FGuid_const_,int> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  this_00 = &this->StateItemTree;
  if (this_00->Object ==
      (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    return;
  }
  if (this->bIsSettingSelection != false) {
    return;
  }
  local_48.DataPtr = param_1->DataPtr;
  local_48.ArrayNum = param_1->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  FindStatesByIDRecursive(&this->FilteredRootItem,&local_48,&local_88);
  this->bIsSettingSelection = true;
  if ((this_00->Object ==
       (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar5 = this_00->Object;
  pTVar4 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar5->field_0x3e8);
  if ((*pTVar4 != None) && (*(int *)&pSVar5->field_0x810 != *(int *)&pSVar5->field_0x83c)) {
    (**(code **)(*(longlong *)&pSVar5->field_0x588 + 0x30))(&pSVar5->field_0x588);
    (**(code **)(*(longlong *)&pSVar5->field_0x588 + 0x40))(&pSVar5->field_0x588,3);
  }
  if ((this_00->Object ==
       (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar6.Data = local_88.AllocatorInstance.Data;
  lVar7 = (longlong)local_88.ArrayNum;
  pSVar5 = this_00->Object;
  if (local_88.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (local_88.ArrayNum == 0) goto LAB_14d747d4b;
  pTVar4 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar5->field_0x3e8);
  if (*pTVar4 != None) {
    pTVar8 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
             (FVar6.Data + lVar7 * 0x10);
    for (; (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)FVar6.Data != pTVar8;
        FVar6.Data = FVar6.Data + 0x10) {
      pcVar1 = *(code **)(*(longlong *)&pSVar5->field_0x588 + 0x28);
      local_78 = ((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)FVar6.Data)->Object;
      local_70 = (((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)FVar6.Data)->
                 SharedReferenceCount).ReferenceController;
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar1)(&pSVar5->field_0x588,&local_78,1,0);
    }
    (**(code **)(*(longlong *)&pSVar5->field_0x588 + 0x40))(&pSVar5->field_0x588,3);
  }
LAB_14d747d4b:
  iVar2 = local_88.ArrayNum;
  pcVar1 = *(code **)(this->_padding_ + 600);
  local_68 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
             local_88.AllocatorInstance.Data;
  if ((local_88.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_60 = iVar2;
  local_38 = (undefined4)local_68;
  uStack_34 = local_68._4_4_;
  iStack_30 = iVar2;
  uStack_2c = uStack_5c;
  (*pcVar1)(this,&local_38);
  if (local_88.ArrayNum == 1) {
    pSVar5 = TSharedPtr<STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,1>::
             operator->(this_00);
    if ((local_88.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_58.Object = *(FStateItem **)local_88.AllocatorInstance.Data;
    local_58.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(local_88.AllocatorInstance.Data + 8);
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::RequestScrollIntoView
              ((SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)pSVar5,
               &local_58,0);
  }
  this->bIsSettingSelection = false;
  DestructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
            ((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
             local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)local_88.AllocatorInstance.Data
      != (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// UpdateFilteredRoot @ 14d749cb0

void __thiscall
UE::StateTree::SCompactTreeView::UpdateFilteredRoot(SCompactTreeView *this,bool param_1)

{
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar1;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_>_>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FStateItem *pFVar4;
  STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *pSVar5;
  IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *pIVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined8 *puVar11;
  int iVar12;
  FGuid *pFVar13;
  TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
  *pTVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  undefined8 *local_res20;
  FStateItem *local_d8;
  FSharedReferencer<1> local_d0;
  undefined8 local_c8;
  FSharedReferencer<1> FStack_c0;
  FGuid *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_98;
  FStateItem *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  TArrayView<FGuid_const_,int> local_68;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_58;
  
  (**(code **)(this->_padding_ + 0x260))();
  pFVar13 = (FGuid *)0x0;
  pTVar1 = &this->FilteredRootItem;
  local_c8 = 0;
  FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)&local_c8) {
    pTVar1->Object = (FStateItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FilteredRootItem).SharedReferenceCount,&FStack_c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_c0.ReferenceController);
  iVar12 = 0;
  if (param_1) {
    pTVar10 = GetSelection(this,&local_98);
    iVar12 = 0;
    if (&local_58 != pTVar10) {
      pFVar13 = (FGuid *)(pTVar10->AllocatorInstance).Data;
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar12 = pTVar10->ArrayNum;
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  if ((this->FilterStrings).ArrayNum != 0) {
    puVar11 = (undefined8 *)(**(code **)(this->_padding_ + 0x248))(this,local_78);
    local_d0.ReferenceController = (TReferenceControllerBase<1> *)puVar11[1];
    local_d8 = (FStateItem *)*puVar11;
    if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->FilteredRootItem !=
        (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)&local_d8) {
      (this->FilteredRootItem).Object = local_d8;
      local_d8 = (FStateItem *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->FilteredRootItem).SharedReferenceCount,&local_d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    if ((this->FilteredRootItem).Object == (FStateItem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar4 = (this->FilteredRootItem).Object;
    if ((this->RootItem).Object == (FStateItem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FilterStateItemChildren
              (&this->FilterStrings,false,&((this->RootItem).Object)->Children,&pFVar4->Children);
    if ((this->StateItemTree).Object ==
        (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pSVar5 = (this->StateItemTree).Object;
    if ((this->FilteredRootItem).Object == (FStateItem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pTVar14 = &((this->FilteredRootItem).Object)->Children;
    if (pTVar14 ==
        (TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
         *)0x0) {
      local_res8[0] = 0;
      `STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SetRootItemsSource'::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pTVar2 = &pSVar5->TreeViewSource;
    pIVar6 = pTVar2->Ptr;
    if (pIVar6 == (IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
LAB_14d74a026:
      if (pTVar14 ==
          (TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        if (pTVar2 != (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_>_>
                       *)&local_a0) {
          pIVar6 = pTVar2->Ptr;
          pTVar2->Ptr = (IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)
                        0x0;
          if (pIVar6 != (IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)
                        0x0) {
            (**(code **)*pIVar6)(pIVar6,1);
          }
        }
        (**(code **)(*(longlong *)pSVar5 + 0x248))(pSVar5);
      }
      else {
        local_res20 = ::operator_new(0x10);
        if (local_res20 != (undefined8 *)0x0) {
          local_res20[1] = pTVar14;
          *local_res20 = &
                         ___7__FArrayPointer_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ItemsSource_Slate_UE__6B_
          ;
        }
        STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SetRootItemsSource
                  (pSVar5,(IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>
                           *)&local_res20);
      }
    }
    else {
      cVar9 = (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,pTVar14);
      if (cVar9 == '\0') goto LAB_14d74a026;
    }
    if ((this->FilteredRootItem).Object == (FStateItem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    ExpandAll(this,&((this->FilteredRootItem).Object)->Children);
    goto LAB_14d74a0cb;
  }
  pTVar3 = (this->RootItem).SharedReferenceCount.ReferenceController;
  pFVar4 = (this->RootItem).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = pTVar1->Object;
  pTStack_80 = (this->FilteredRootItem).SharedReferenceCount.ReferenceController;
  pTVar1->Object = pFVar4;
  (this->FilteredRootItem).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  if ((this->StateItemTree).Object ==
      (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pSVar5 = (this->StateItemTree).Object;
  if ((this->FilteredRootItem).Object == (FStateItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar14 = &((this->FilteredRootItem).Object)->Children;
  if (pTVar14 ==
      (TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
       *)0x0) {
    local_res10[0] = 0;
    `STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SetRootItemsSource'::
    __l2::<lambda_1>::operator()(local_res10);
  }
  pTVar2 = &pSVar5->TreeViewSource;
  pIVar6 = pTVar2->Ptr;
  if (pIVar6 == (IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
LAB_14d749e31:
    if (pTVar14 !=
        (TArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSizedDefaultAllocator<32>_>
         *)0x0) {
      local_res18 = ::operator_new(0x10);
      if (local_res18 != (undefined8 *)0x0) {
        local_res18[1] = pTVar14;
        *local_res18 = &
                       ___7__FArrayPointer_V__TSharedPtr_UFStateItem_SCompactTreeView_StateTree_UE___00___ItemsSource_Slate_UE__6B_
        ;
      }
      STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SetRootItemsSource
                (pSVar5,(IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)
                        &local_res18);
      RestoreExpansionState(this);
      goto LAB_14d74a0cb;
    }
    if (pTVar2 != (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_>_>
                   *)&local_a8) {
      pIVar6 = pTVar2->Ptr;
      pTVar2->Ptr = (IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0;
      if (pIVar6 != (IItemsSource<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0)
      {
        (**(code **)*pIVar6)(pIVar6,1);
      }
    }
    (**(code **)(*(longlong *)pSVar5 + 0x248))(pSVar5);
  }
  else {
    cVar9 = (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,pTVar14);
    if (cVar9 == '\0') goto LAB_14d749e31;
  }
  RestoreExpansionState(this);
LAB_14d74a0cb:
  if (param_1) {
    local_b8 = pFVar13;
    if (iVar12 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_68._12_4_ = uStack_ac;
    local_68.ArrayNum = iVar12;
    local_68.DataPtr = local_b8;
    iStack_b0 = iVar12;
    SetSelection(this,&local_68);
  }
  if ((this->StateItemTree).Object ==
      (STreeView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  (**(code **)(*(longlong *)(this->StateItemTree).Object + 0x248))();
  if (pFVar13 != (FGuid *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

