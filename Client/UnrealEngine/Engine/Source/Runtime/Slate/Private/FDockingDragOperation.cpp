// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 17

// FDockingDragOperation @ 1426fb3e0

/* WARNING: Removing unreachable block (ram,0x0001426fb591) */
/* WARNING: Enum "Type": Some values do not have unique names */

FDockingDragOperation * __thiscall
FDockingDragOperation::FDockingDragOperation
          (FDockingDragOperation *this,TSharedRef<SDockTab,1> *param_1,TVector2<double> *param_2,
          TSharedRef<SDockingArea,1> *param_3,TVector2<double> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingTabWell *pSVar2;
  SDockingTabStack *pSVar3;
  SDockingArea *pSVar4;
  FPrivateApi *pFVar5;
  code *pcVar6;
  double dVar7;
  FDeprecateVector2DParameter FVar8;
  bool bVar9;
  atomic<int> aVar10;
  bool bVar11;
  atomic<int> aVar12;
  TSharedPtr<SDockingTabWell,1> *pTVar13;
  FDockingDragOperation *pFVar14;
  FSlateApplication *pFVar15;
  longlong *plVar16;
  FArguments *pFVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  FArguments *pFVar20;
  FArguments *pFVar21;
  TSharedRef<SDockingTabStack,1> *pTVar22;
  TSharedRef<FTabManager::FArea,1> *pTVar23;
  TSharedPtr<FTabManager,1> *pTVar24;
  TSharedRef<SDockingArea,1> *pTVar25;
  TSharedRef<SBorder,1> *pTVar26;
  TSharedRef<FTabManager,1> *pTVar27;
  TSharedRef<FGlobalTabmanager,1> *pTVar28;
  SDockingTabStack *pSVar29;
  SDockingTabStack *pSVar30;
  SDockingTabStack *pSVar31;
  undefined4 local_res8 [2];
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  TSharedRef<SDockingArea,1> *local_res20;
  FLLMScope local_ac8 [2];
  undefined8 local_ac0;
  float local_ab8;
  float fStack_ab4;
  longlong local_ab0;
  FSharedReferencer<1> local_aa8;
  SWidget *local_aa0;
  TReferenceControllerBase<1> *pTStack_a98;
  SDockingTabStack *local_a90;
  SDockingTabStack *local_a88;
  TSharedRef<FTabManager,1> local_a80;
  FSlateRect local_a70;
  TSharedRef<SDockTab,1> local_a60;
  FSlateBrush *local_a50;
  undefined1 local_a48;
  undefined1 local_a40 [8];
  void *pvStack_a38;
  undefined8 local_a30;
  TRawPtrProxy<FTabManager::FStack> local_a28;
  FName local_a20;
  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> local_a18;
  FMemScope local_a10;
  FName local_a08;
  FMemScope local_a00;
  FName local_9f8;
  FMemScope local_9f0;
  SWindow *local_9e8;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  local_9e0;
  TSharedPtr<SDockingArea,1> local_9c8;
  T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&> local_9b8;
  TSharedRef<SWidget,1> local_9a8;
  TSharedRef<FTabManager::FStack,1> local_998;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 uStack_970;
  TSharedPtr<SDockingTabWell,1> local_968;
  TSharedPtr<SDockingTabWell,1> local_958;
  undefined1 local_948 [8];
  TReferenceControllerBase<1> *local_940;
  SDockingTabStack *local_938;
  TReferenceControllerBase<1> *pTStack_930;
  SDockingNode *local_928;
  TReferenceControllerBase<1> *pTStack_920;
  TSharedRef<SBorder,1> local_918;
  TSharedRef<SDockingArea,1> local_908;
  TSharedPtr<FTabManager,1> local_8f8;
  TSharedRef<FTabManager::FArea,1> local_8e8;
  TSharedRef<SDockingTabStack,1> local_8d8;
  TSharedRef<FTabManager,1> local_8c8;
  TSharedPtr<SDockTab,1> local_8b8;
  FName local_8a8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_8a0;
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  local_888;
  undefined8 local_870;
  undefined8 local_868;
  TSharedRef<SWindow,1> local_860;
  FArguments local_850;
  FArguments local_630;
  FArguments local_430;
  
  pSVar30 = (SDockingTabStack *)0x0;
  local_res8[0] = 0;
  local_res20 = param_3;
  FDragDropOperation::FDragDropOperation((FDragDropOperation *)this);
  this->_padding_ = (longlong)&___7FDockingDragOperation__6B_;
  (this->TabBeingDragged).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->TabBeingDragged).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  (this->TabGrabOffsetFraction).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->TabGrabOffsetFraction).field0_0x0._s_0.Y = dVar7;
  (this->TabOwnerAreaOfOrigin).Object = param_3->Object;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  (this->TabOwnerAreaOfOrigin).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->CursorDecoratorStackNode).Object = (SDockingTabStack *)0x0;
  (this->CursorDecoratorStackNode).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar13 = SDockTab::GetParent(param_1->Object,&local_958);
  pSVar31 = local_a88;
  if (pTVar13->Object == (SDockingTabWell *)0x0) {
    (this->TabStackOfOrigin).Object = (SDockingTabStack *)0x0;
    local_978 = 0;
    uStack_970 = 0;
    (this->TabStackOfOrigin).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    bVar9 = false;
    bVar11 = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pSVar30 = pSVar31;
  }
  else {
    pTVar13 = SDockTab::GetParent(param_1->Object,&local_968);
    if ((pTVar13->Object == (SDockingTabWell *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FDockingDragOperation *)(*pcVar6)();
      return pFVar14;
    }
    pSVar2 = pTVar13->Object;
    pSVar31 = pSVar30;
    if ((((pSVar2->ParentTabStackPtr).Object == (SDockingTabStack *)0x0) ||
        (pTVar1 = (pSVar2->ParentTabStackPtr).WeakReferenceCount.ReferenceController,
        pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
      local_a90 = (SDockingTabStack *)0x0;
      local_980 = 0;
      local_a88 = (SDockingTabStack *)0x0;
      local_988 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pSVar3 = (SDockingTabStack *)
               (pSVar2->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
      pSVar29 = pSVar3;
      if (pSVar3 != (SDockingTabStack *)0x0) {
        aVar10 = *(atomic<int> *)&pSVar3->_padding_;
        do {
          pSVar29 = pSVar30;
          if (aVar10 == (atomic<int>)0x0) goto LAB_1426fb51f;
          LOCK();
          aVar12 = *(atomic<int> *)&pSVar3->_padding_;
          bVar11 = aVar10 == aVar12;
          if (bVar11) {
            *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar10 + 1);
            aVar12 = aVar10;
          }
          UNLOCK();
          aVar10 = aVar12;
        } while (!bVar11);
        pSVar29 = pSVar3;
        pSVar31 = (SDockingTabStack *)0x0;
        if (pSVar3 != (SDockingTabStack *)0x0) {
          pSVar31 = (pSVar2->ParentTabStackPtr).Object;
        }
      }
LAB_1426fb51f:
      local_868 = 0;
      local_870 = 0;
      local_a90 = pSVar31;
      local_a88 = pSVar29;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pSVar30 = pSVar29;
    }
    bVar9 = true;
    bVar11 = true;
    (this->TabStackOfOrigin).Object = pSVar31;
    (this->TabStackOfOrigin).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pSVar30;
    if (pSVar30 != (SDockingTabStack *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar30->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar30->_padding_)[1] + 1);
      UNLOCK();
    }
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar30);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_968.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_958.SharedReferenceCount.ReferenceController);
  (this->HoveredTabPanelPtr).Object = (SDockingTabWell *)0x0;
  (this->HoveredTabPanelPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HoveredDockTarget).TargetNode.Object = (SDockingNode *)0x0;
  (this->HoveredDockTarget).TargetNode.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HoveredDockTarget).DockDirection = LeftOf;
  dVar7 = (param_4->field0_0x0)._s_0.Y;
  (this->LastContentSize).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (this->LastContentSize).field0_0x0._s_0.Y = dVar7;
  pFVar15 = FSlateApplication::Get();
  pcVar6 = *(code **)(*(longlong *)pFVar15 + 0x10);
  SWindow::MakeCursorDecorator(&local_860);
  plVar16 = (longlong *)(*pcVar6)(pFVar15,local_948);
  local_aa8.ReferenceController = (TReferenceControllerBase<1> *)plVar16[1];
  local_ab0 = *plVar16;
  if (local_aa8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_aa8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_aa8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar16 = &this->_padding_;
  if (plVar16 != &local_ab0) {
    *plVar16 = local_ab0;
    local_ab0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_aa8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_aa8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_940);
  if ((*plVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FDockingDragOperation *)(*pcVar6)();
    return pFVar14;
  }
  SWindow::SetSizingRule((SWindow *)*plVar16,FixedSize);
  if ((*plVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FDockingDragOperation *)(*pcVar6)();
    return pFVar14;
  }
  SWindow::SetOpacity((SWindow *)*plVar16,__real_3ee66666);
  if ((*plVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FDockingDragOperation *)(*pcVar6)();
    return pFVar14;
  }
  local_9e8 = (SWindow *)*plVar16;
  pFVar17 = SBorder::FArguments::FArguments(&local_430);
  pIVar18 = FAppStyle::Get();
  pcVar6 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_8a8,"Docking.Background");
  local_a50 = (FSlateBrush *)(*pcVar6)(pIVar18,*pFVar19);
  local_a30 = 0;
  local_a48 = 1;
  local_a40 = (undefined1  [8])0x0;
  pvStack_a38 = (void *)0x0;
  (pFVar17->_BorderImage).Value = local_a50;
  (pFVar17->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a40);
  if (pvStack_a38 != (void *)0x0) {
    FMemory::Free(pvStack_a38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a40);
  pFVar20 = SDockingArea::FArguments::FArguments(&local_850);
  pFVar21 = SDockingTabStack::FArguments::FArguments(&local_630);
  local_a28.Object = ::operator_new(0x50);
  if (local_a28.Object == (FStack *)0x0) {
    local_a28.Object = (FStack *)0x0;
  }
  else {
    *(undefined4 *)&(local_a28.Object)->_padding_ = 0x3f800000;
    (local_a28.Object)->_padding_ = 0;
    (local_a28.Object)->_padding_ = 0;
    (local_a28.Object)->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    ((local_a28.Object)->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_a28.Object)->Tabs).ArrayNum = 0;
    ((local_a28.Object)->Tabs).ArrayMax = 0;
    (local_a28.Object)->bHideTabWell = false;
    ((local_a28.Object)->ForegroundTabId).TabType.ComparisonIndex = 0;
    ((local_a28.Object)->ForegroundTabId).TabType.Number = 0;
    ((local_a28.Object)->ForegroundTabId).InstanceId = -1;
    ((local_a28.Object)->ForegroundTabId).Flags = SaveLayout;
    ((local_a28.Object)->ExtensionId).ComparisonIndex = 0;
    ((local_a28.Object)->ExtensionId).Number = 0;
    local_ac0 = 0;
  }
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_998,&local_a28);
  local_a18.Arg0 = &local_998;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a10,&local_a20,true);
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>::
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
            (&local_9e0,"SDockingTabStack",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x121,&local_a18);
  FMemScope::~FMemScope(&local_a10);
  FLLMScope::~FLLMScope(local_res10);
  if (local_9e0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_9e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_938 = (this->CursorDecoratorStackNode).Object;
  pTStack_930 = (this->CursorDecoratorStackNode).SharedReferenceCount.ReferenceController;
  (this->CursorDecoratorStackNode).Object = local_9e0._Widget.Object;
  (this->CursorDecoratorStackNode).SharedReferenceCount.ReferenceController =
       local_9e0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_930);
  pTVar22 = TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
            ::operator<<=(&local_9e0,&local_8d8,pFVar21);
  pTVar1 = (pTVar22->SharedReferenceCount).ReferenceController;
  pSVar30 = pTVar22->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_928 = (pFVar20->_InitialContent).Object;
  pTStack_920 = (pFVar20->_InitialContent).SharedReferenceCount.ReferenceController;
  (pFVar20->_InitialContent).Object = (SDockingNode *)pSVar30;
  (pFVar20->_InitialContent).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_920);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar23 = FTabManager::NewPrimaryArea(&local_8e8);
  if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FDockingDragOperation *)(*pcVar6)();
    return pFVar14;
  }
  pTVar24 = SDockTab::GetTabManagerPtr((this->TabBeingDragged).Object,&local_8f8);
  if ((pTVar24->Object == (FTabManager *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FDockingDragOperation *)(*pcVar6)();
    return pFVar14;
  }
  local_a80.Object = pTVar24->Object;
  local_a80.SharedReferenceCount.ReferenceController =
       (pTVar24->SharedReferenceCount).ReferenceController;
  (pTVar24->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar24->Object = (FTabManager *)0x0;
  if ((local_a80.Object == (FTabManager *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FDockingDragOperation *)(*pcVar6)();
    return pFVar14;
  }
  local_9b8.Arg0 = &local_a80;
  local_9b8.Arg1 = pTVar23;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a08 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a00,&local_a08,true);
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  ::
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
            (&local_888,"SDockingArea",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x11d,&local_9b8);
  FMemScope::~FMemScope(&local_a00);
  FLLMScope::~FLLMScope(local_res18);
  pTVar25 = TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
            ::operator<<=(&local_888,&local_908,pFVar20);
  pTVar1 = (pTVar25->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar25->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_aa0 = (pFVar17->_Content).Widget.Object;
  pTStack_a98 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)pSVar4;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a98);
  FLLMScope::FLLMScope(local_ac8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9f0,&local_9f8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_8a0,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x11a,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_9f0);
  FLLMScope::~FLLMScope(local_ac8);
  pTVar26 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_8a0,&local_918,pFVar17);
  local_9a8.Object = (SWidget *)pTVar26->Object;
  local_9a8.SharedReferenceCount.ReferenceController =
       (pTVar26->SharedReferenceCount).ReferenceController;
  if (local_9a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_9a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(local_9e8,&local_9a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_918.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8a0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_908.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_888._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a80.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_998.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_630);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_850._InitialContent.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_850._ParentWindow.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_850);
  SBorder::FArguments::~FArguments(&local_430);
  if (((this->TabOwnerAreaOfOrigin).Object == (SDockingArea *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FDockingDragOperation *)(*pcVar6)();
    return pFVar14;
  }
  pTVar27 = SDockingArea::GetTabManager((this->TabOwnerAreaOfOrigin).Object,&local_8c8);
  pFVar5 = (pTVar27->Object->PrivateApi).Object;
  FTabManager::ClearPendingLayoutSave(pFVar5->TabManager);
  pFVar5->TabManager->bCanDoDeferredLayoutSave = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8c8.SharedReferenceCount.ReferenceController);
  if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FDockingDragOperation *)(*pcVar6)();
    return pFVar14;
  }
  bVar11 = SDockTab::IsActive((this->TabBeingDragged).Object);
  if (bVar11) {
    local_8b8.Object = (SDockTab *)0x0;
    local_8b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar28 = FGlobalTabmanager::Get();
    FGlobalTabmanager::SetActiveTab(pTVar28->Object,&local_8b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if ((((this->TabStackOfOrigin).Object == (SDockingTabStack *)0x0) ||
      (pTVar1 = (this->TabStackOfOrigin).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    if ((*plVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FDockingDragOperation *)(*pcVar6)();
      return pFVar14;
    }
    local_ab8 = (float)(param_4->field0_0x0)._s_0.X;
    fStack_ab4 = (float)(param_4->field0_0x0)._s_0.Y;
    FVar8._4_4_ = fStack_ab4;
    FVar8._0_4_ = local_ab8;
    SWindow::Resize((SWindow *)*plVar16,FVar8);
    if ((*plVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FDockingDragOperation *)(*pcVar6)();
      return pFVar14;
    }
    SWindow::ShowWindow((SWindow *)*plVar16);
    if ((*plVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FDockingDragOperation *)(*pcVar6)();
      return pFVar14;
    }
    local_a70.Right = (float)(param_4->field0_0x0)._s_0.X;
    local_a70.Left = 0.0;
    local_a70.Top = 0.0;
    local_a70.Bottom = (float)(param_4->field0_0x0)._s_0.Y;
    SWindow::ReshapeWindow((SWindow *)*plVar16,&local_a70);
    if (((this->CursorDecoratorStackNode).Object == (SDockingTabStack *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FDockingDragOperation *)(*pcVar6)();
      return pFVar14;
    }
    pSVar30 = (this->CursorDecoratorStackNode).Object;
    if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FDockingDragOperation *)(*pcVar6)();
      return pFVar14;
    }
    local_a60.SharedReferenceCount.ReferenceController =
         (this->TabBeingDragged).SharedReferenceCount.ReferenceController;
    local_a60.Object = (this->TabBeingDragged).Object;
    if (local_a60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_a60.Object == (SDockTab *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FDockingDragOperation *)(*pcVar6)();
      return pFVar14;
    }
    SDockingTabStack::OpenTab(pSVar30,&local_a60,-1,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a60.SharedReferenceCount.ReferenceController);
    if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FDockingDragOperation *)(*pcVar6)();
      return pFVar14;
    }
    local_9c8.Object = (SDockingArea *)0x0;
    local_9c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SDockTab::SetDraggedOverDockArea((this->TabBeingDragged).Object,&local_9c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9c8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_res20->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FDockingDragOperation @ 1427009a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDockingDragOperation::~FDockingDragOperation(FDockingDragOperation *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FDockingDragOperation__6B_;
  if ((this->TabBeingDragged).Object != (SDockTab *)0x0) {
    DroppedOntoNothing(this);
  }
  pTVar3 = (this->HoveredDockTarget).TargetNode.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->HoveredTabPanelPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->TabStackOfOrigin).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CursorDecoratorStackNode).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabOwnerAreaOfOrigin).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabBeingDragged).SharedReferenceCount.ReferenceController);
  FDragDropOperation::~FDragDropOperation((FDragDropOperation *)this);
  return;
}

// CanDockInNode @ 1427100e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDockingDragOperation::CanDockInNode
          (FDockingDragOperation *this,TSharedRef<SDockingNode,1> *param_1,EViaTabwell param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingNode *pSVar2;
  code *pcVar3;
  bool bVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  undefined1 uVar7;
  ETabRole EVar8;
  int iVar9;
  longlong *plVar10;
  TSharedRef<FGlobalTabmanager,1> *pTVar11;
  TSharedRef<SWidget,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  uint uStackX_c;
  TSharedRef<FTabManager,1> local_88;
  TSharedRef<FTabManager,1> local_78;
  TSharedPtr<SWidget,1> local_68;
  TSharedPtr<SWidget,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TSharedRef<SWidget,1> local_38;
  
  bVar14 = false;
  plVar10 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x260))(param_1->Object,local_48);
  if (*plVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  SDockingArea::GetTabManager((SDockingArea *)*plVar10,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if ((this->TabOwnerAreaOfOrigin).Object == (SDockingArea *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  SDockingArea::GetTabManager((this->TabOwnerAreaOfOrigin).Object,&local_88);
  if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  EVar8 = SDockTab::GetTabRole((this->TabBeingDragged).Object);
  if (EVar8 == NomadTab) {
    pTVar11 = FGlobalTabmanager::Get();
    FVar5.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
    local_88.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    local_88.Object = (FTabManager *)pTVar11->Object;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
  }
  pTVar13 = (param_1->SharedReferenceCount).ReferenceController;
  local_68.Object = (SWidget *)param_1->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.SharedReferenceCount.ReferenceController = pTVar13;
  if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  pTVar12 = SDockTab::GetContent((this->TabBeingDragged).Object,&local_38);
  pTVar1 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_58.Object = pTVar12->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.SharedReferenceCount.ReferenceController = pTVar1;
  bVar6 = IsParentWidgetOf(&local_58,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (bVar6) {
LAB_1427103ab:
    bVar14 = false;
  }
  else {
    if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    EVar8 = SDockTab::GetTabRole((this->TabBeingDragged).Object);
    if (EVar8 == NomadTab) {
      if (param_2 != DockingViaTabWell) {
        pTVar11 = FGlobalTabmanager::Get();
        bVar14 = (FGlobalTabmanager *)local_78.Object != pTVar11->Object;
        goto LAB_1427103b7;
      }
    }
    else {
      if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
      }
      EVar8 = SDockTab::GetTabRole((this->TabBeingDragged).Object);
      if (EVar8 != MajorTab) {
        bVar14 = local_78.Object == local_88.Object;
        goto LAB_1427103b7;
      }
      bVar6 = local_78.Object != local_88.Object;
      iVar9 = (**(code **)(param_1->Object->_padding_ + 0x248))();
      if (iVar9 == 2) {
        pTVar13 = (param_1->SharedReferenceCount).ReferenceController;
        pSVar2 = param_1->Object;
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar14 = true;
        if ((int)pSVar2[1]._padding_ != 0) goto LAB_14271038c;
        bVar4 = true;
      }
      else {
        pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_14271038c:
        bVar4 = false;
      }
      if (bVar14) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
      }
      if ((bVar6) || ((param_2 != DockingViaTabWell && (!bVar4)))) goto LAB_1427103ab;
    }
    bVar14 = true;
  }
LAB_1427103b7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return bVar14;
}

// DesiredSizeFrom @ 14272a950

TVector2<double> * __cdecl
FDockingDragOperation::DesiredSizeFrom
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1)

{
  double dVar1;
  TVector2<double>_u_0 TVar2;
  double dVar3;
  
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  dVar1 = __real_4089000000000000 / dVar3;
  if (__real_3ff0000000000000 <= __real_4089000000000000 / dVar3) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= __real_3fb99999a0000000) {
    dVar1 = __real_3fb99999a0000000;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y * (double)(float)dVar1;
  TVar2._8_4_ = SUB84(dVar3,0);
  TVar2._s_0.X = (param_1->field0_0x0)._s_0.X * (double)(float)dVar1;
  TVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar2;
  return __return_storage_ptr__;
}

// DroppedOntoNothing @ 14272dfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDockingDragOperation::DroppedOntoNothing(FDockingDragOperation *this)

{
  float fVar1;
  float fVar2;
  FGlobalTabmanager *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  SDockingTabStack *pSVar5;
  SWindow *pSVar6;
  FPrivateApi *pFVar7;
  FTabManager *pFVar8;
  code *pcVar9;
  FDeprecateVector2DParameter FVar10;
  atomic<int> aVar11;
  double dVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  ETabRole EVar15;
  atomic<int> aVar16;
  FDeprecateSlateVector2D FVar17;
  FArguments *pFVar18;
  TSharedRef<FGlobalTabmanager,1> *pTVar19;
  FArguments *pFVar20;
  FArguments *pFVar21;
  FStack *pFVar22;
  TSharedRef<SDockingTabStack,1> *pTVar23;
  TSharedRef<FTabManager::FArea,1> *pTVar24;
  FSlateApplication *pFVar25;
  TSharedRef<SWindow,1> *pTVar26;
  undefined8 *puVar27;
  TSharedRef<FTabManager,1> *pTVar28;
  FSharedReferencer<1> FVar29;
  FSharedReferencer<1> FVar30;
  FSharedReferencer<1> FVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  TSharedRef<SWindow,1> local_a98;
  TSharedRef<SDockingArea,1> local_a88;
  TSharedPtr<FTabManager,1> local_a78;
  TSharedPtr<FTabManager,1> local_a68;
  float local_a58;
  float fStack_a54;
  undefined8 local_a50;
  TSharedRef<SDockTab,1> local_a48;
  SDockTab *local_a38;
  TReferenceControllerBase<1> *local_a30;
  undefined1 local_a28 [4];
  FName local_a24;
  FMemScope local_a18;
  TRawPtrProxy<FTabManager::FStack> local_a10;
  FName local_a08;
  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> local_a00;
  FMemScope local_9f8;
  FName local_9f0;
  FMemScope local_9e8;
  TSharedRef<SWindow,1> local_9e0;
  TSharedPtr<SWindow,1> local_9d0;
  undefined8 local_9c0;
  FSharedReferencer<1> local_9b8 [2];
  TSharedRef<FTabManager,1> local_9a8;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  local_998;
  TSharedRef<FTabManager::FStack,1> local_980;
  undefined4 local_968;
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&> local_958;
  TAttribute<FText> local_948;
  SWindow *local_908;
  TReferenceControllerBase<1> *pTStack_900;
  SDockingNode *local_8f8;
  TReferenceControllerBase<1> *pTStack_8f0;
  TSharedRef<FTabManager::FArea,1> local_8e8;
  TSharedRef<SDockingTabStack,1> local_8d8;
  TSharedRef<SWindow,1> local_8c8;
  TSharedRef<SWidget,1> local_8b8;
  TSharedRef<SWindow,1> local_8a8;
  undefined1 local_898 [16];
  TSharedRef<SWidget,1> local_888;
  undefined1 local_878 [8];
  FStack *local_870;
  TSharedRef<SWindow,1> local_868;
  TSharedRef<SWidget,1> local_858;
  TSharedRef<SWindow,1> local_848;
  undefined1 local_838 [16];
  TSharedRef<SWidget,1> local_828;
  undefined1 local_818 [8];
  TReferenceControllerBase<1> *local_810;
  TSharedRef<FTabManager,1> local_808;
  TSharedRef<FTabManager,1> local_7f8;
  undefined1 local_7e8 [16];
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_7d8;
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  local_7c0;
  TSharedRef<SWindow,1> local_7a8;
  FArguments local_798;
  FArguments local_578;
  FArguments local_378;
  
  if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  SDockTab::GetTabManagerPtr((this->TabBeingDragged).Object,&local_a68);
  if ((FGlobalTabmanager *)local_a68.Object == (FGlobalTabmanager *)0x0) goto LAB_14272ec26;
  if ((this->_padding_ == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar17 = SWindow::GetPositionInScreen((SWindow *)this->_padding_);
  fVar1 = *(float *)FVar17;
  fVar2 = *(float *)((longlong)FVar17 + 4);
  fVar32 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint(fVar1,fVar2);
  if (((FGlobalTabmanager *)local_a68.Object == (FGlobalTabmanager *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FTabManager::FPrivateApi::GetParentWindow(((local_a68.Object)->PrivateApi).Object,&local_9d0);
  pFVar18 = SWindow::FArguments::FArguments(&local_378);
  pTVar19 = FGlobalTabmanager::Get();
  pFVar3 = pTVar19->Object;
  local_948.Value.TextData.Reference = (pFVar3->AppTitle).TextData.Reference;
  if (local_948.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_948.Value.TextData.Reference + 8))
              (local_948.Value.TextData.Reference,local_a28);
  }
  local_948.Value.Flags = (pFVar3->AppTitle).Flags;
  local_948.bIsSet = true;
  local_948.Getter._16_8_ = 0;
  local_948.Getter._0_8_ = 0;
  local_948.Getter._8_8_ = 0;
  pFVar18 = SWindow::FArguments::Title(pFVar18,&local_948);
  dVar12 = __real_3ff0000000000000;
  pFVar18->_AutoCenter = None;
  local_a58 = (float)((double)fVar1 * (dVar12 / (double)fVar32));
  fStack_a54 = (float)((double)fVar2 * (dVar12 / (double)fVar32));
  FVar10._4_4_ = fStack_a54;
  FVar10._0_4_ = local_a58;
  pFVar18->_ScreenPosition = FVar10;
  if ((this->_padding_ == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  SWindow::GetSizeInScreen((SWindow *)this->_padding_);
  FVar17 = SWindow::ComputeWindowSizeForContent((FDeprecateVector2DParameter)local_838);
  pFVar18->_ClientSize = *(FDeprecateVector2DParameter *)FVar17;
  pFVar18->_CreateTitleBar = false;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a24 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a18,&local_a24,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_7d8,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x15f,local_res8);
  FMemScope::~FMemScope(&local_a18);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=(&local_7d8,&local_a98,pFVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7d8._Widget.SharedReferenceCount.ReferenceController);
  SWindow::FArguments::~FArguments(&local_378);
  local_a78.Object = (FTabManager *)0x0;
  local_a78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  EVar15 = SDockTab::GetTabRole((this->TabBeingDragged).Object);
  FVar13.ReferenceController = local_a78.SharedReferenceCount.ReferenceController;
  if (EVar15 == NomadTab) {
    pTVar19 = FGlobalTabmanager::Get();
    local_9b8[0].ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
    local_a78.Object = (FTabManager *)pTVar19->Object;
    if (local_9b8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_9b8[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_9b8[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9c0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_a78.SharedReferenceCount,local_9b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9b8[0].ReferenceController);
    if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    SDockTab::SetTabManager((this->TabBeingDragged).Object,&local_a78);
  }
  else {
    if (local_a68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a78.Object = local_a68.Object;
    local_a78.SharedReferenceCount.ReferenceController =
         local_a68.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar13.ReferenceController);
  }
  pFVar20 = SDockingArea::FArguments::FArguments(&local_798);
  FVar13.ReferenceController = local_a98.SharedReferenceCount.ReferenceController;
  if (local_a98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_908 = (pFVar20->_ParentWindow).Object;
  pTStack_900 = (pFVar20->_ParentWindow).SharedReferenceCount.ReferenceController;
  (pFVar20->_ParentWindow).Object = local_a98.Object;
  (pFVar20->_ParentWindow).SharedReferenceCount.ReferenceController =
       local_a98.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_900);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  pFVar21 = SDockingTabStack::FArguments::FArguments(&local_578);
  pFVar22 = ::operator_new(0x50);
  local_a10.Object = (FStack *)0x0;
  if (pFVar22 != (FStack *)0x0) {
    *(undefined8 *)&pFVar22->_padding_ = 0;
    pFVar22->_padding_ = 0;
    *(undefined4 *)&pFVar22->_padding_ = 0x3f800000;
    pFVar22->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    (pFVar22->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar22->Tabs).ArrayNum = 0;
    (pFVar22->Tabs).ArrayMax = 0;
    pFVar22->bHideTabWell = false;
    (pFVar22->ForegroundTabId).TabType.ComparisonIndex = 0;
    (pFVar22->ForegroundTabId).TabType.Number = 0;
    (pFVar22->ForegroundTabId).InstanceId = -1;
    (pFVar22->ForegroundTabId).Flags = SaveLayout;
    (pFVar22->ExtensionId).ComparisonIndex = 0;
    (pFVar22->ExtensionId).Number = 0;
    local_a50 = 0;
    local_a10.Object = pFVar22;
  }
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_980,&local_a10);
  local_a00.Arg0 = &local_980;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a08 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9f8,&local_a08,true);
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>::
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
            (&local_998,"SDockingTabStack",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x17c,&local_a00);
  FMemScope::~FMemScope(&local_9f8);
  FLLMScope::~FLLMScope(local_res18);
  FVar13.ReferenceController = local_998._Widget.SharedReferenceCount.ReferenceController;
  if (local_998._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_998._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_998._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar23 = TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
            ::operator<<=(&local_998,&local_8d8,pFVar21);
  pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar23->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_8f8 = (pFVar20->_InitialContent).Object;
  pTStack_8f0 = (pFVar20->_InitialContent).SharedReferenceCount.ReferenceController;
  (pFVar20->_InitialContent).Object = (SDockingNode *)pSVar5;
  (pFVar20->_InitialContent).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_8f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar24 = FTabManager::NewPrimaryArea(&local_8e8);
  if (((FGlobalTabmanager *)local_a78.Object == (FGlobalTabmanager *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_9a8.Object = local_a78.Object;
  local_9a8.SharedReferenceCount.ReferenceController =
       local_a78.SharedReferenceCount.ReferenceController;
  if (local_a78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((FGlobalTabmanager *)local_a78.Object == (FGlobalTabmanager *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_958.Arg0 = &local_9a8;
  local_958.Arg1 = pTVar24;
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9e8,&local_9f0,true);
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  ::
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
            (&local_7c0,"SDockingArea",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
             ,0x178,&local_958);
  FMemScope::~FMemScope(&local_9e8);
  FLLMScope::~FLLMScope(local_res20);
  TSlateDecl<SDockingArea,RequiredArgs::T2RequiredArgs<TSharedRef<FTabManager,1>_&&,TSharedRef<FTabManager::FArea,1>_&&>_>
  ::operator<<=(&local_7c0,&local_a88,pFVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7c0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_998._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_980.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_578);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_798._InitialContent.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_798._ParentWindow.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_798);
  if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  EVar15 = SDockTab::GetTabRole((this->TabBeingDragged).Object);
  if (EVar15 == MajorTab) {
LAB_14272e88a:
    pTVar19 = FGlobalTabmanager::Get();
    pFVar3 = pTVar19->Object;
    FVar29.ReferenceController = (pFVar3->RootWindowPtr).WeakReferenceCount.ReferenceController;
    pFVar22 = (FStack *)FVar29.ReferenceController;
    if ((FStack *)FVar29.ReferenceController == (FStack *)0x0) {
LAB_14272e8c6:
      pFVar25 = FSlateApplication::Get();
      uVar33 = SUB84(local_a98.Object,0);
      uVar34 = (undefined4)((ulonglong)local_a98.Object >> 0x20);
      uVar35 = SUB84(local_a98.SharedReferenceCount.ReferenceController,0);
      uVar36 = (undefined4)((ulonglong)local_a98.SharedReferenceCount.ReferenceController >> 0x20);
      pcVar9 = *(code **)(*(longlong *)pFVar25 + 0x10);
      if (local_a98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar27 = (undefined8 *)(*pcVar9)(pFVar25,local_818,local_7e8);
      pSVar6 = (SWindow *)*puVar27;
      local_828.Object = (SWidget *)local_a88.Object;
      local_828.SharedReferenceCount.ReferenceController =
           local_a88.SharedReferenceCount.ReferenceController;
      if (local_a88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent(pSVar6,&local_828);
      FVar30.ReferenceController = local_a98.SharedReferenceCount.ReferenceController;
      FVar31.ReferenceController = local_a88.SharedReferenceCount.ReferenceController;
      FVar29.ReferenceController = (TReferenceControllerBase<1> *)pFVar22;
    }
    else {
      aVar11 = *(atomic<int> *)&((FStack *)FVar29.ReferenceController)->_padding_;
      do {
        pFVar22 = (FStack *)0x0;
        if (aVar11 == (atomic<int>)0x0) goto LAB_14272e8c6;
        LOCK();
        aVar16 = *(atomic<int> *)&((FStack *)FVar29.ReferenceController)->_padding_;
        bVar14 = aVar11 == aVar16;
        if (bVar14) {
          *(atomic<int> *)&((FStack *)FVar29.ReferenceController)->_padding_ =
               (atomic<int>)((int)aVar11 + 1);
          aVar16 = aVar11;
        }
        UNLOCK();
        aVar11 = aVar16;
      } while (!bVar14);
      pSVar6 = (pFVar3->RootWindowPtr).Object;
      pFVar22 = (FStack *)FVar29.ReferenceController;
      if (pSVar6 == (SWindow *)0x0) goto LAB_14272e8c6;
      pFVar25 = FSlateApplication::Get();
      LOCK();
      *(atomic<int> *)&((FStack *)FVar29.ReferenceController)->_padding_ =
           (atomic<int>)
           ((int)*(atomic<int> *)&((FStack *)FVar29.ReferenceController)->_padding_ + 1);
      UNLOCK();
      local_9e0.Object = pSVar6;
      local_9e0.SharedReferenceCount.ReferenceController = FVar29.ReferenceController;
      if ((pSVar6 == (SWindow *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar33 = SUB84(local_a98.Object,0);
      uVar34 = (undefined4)((ulonglong)local_a98.Object >> 0x20);
      uVar35 = SUB84(local_a98.SharedReferenceCount.ReferenceController,0);
      uVar36 = (undefined4)((ulonglong)local_a98.SharedReferenceCount.ReferenceController >> 0x20);
      if (local_a98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar26 = FSlateApplication::AddWindowAsNativeChild
                          (pFVar25,&local_848,&local_868,&local_9e0,true);
      pSVar6 = pTVar26->Object;
      local_858.Object = (SWidget *)local_a88.Object;
      local_858.SharedReferenceCount.ReferenceController =
           local_a88.SharedReferenceCount.ReferenceController;
      if (local_a88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent(pSVar6,&local_858);
      local_810 = local_848.SharedReferenceCount.ReferenceController;
      FVar30.ReferenceController = local_a98.SharedReferenceCount.ReferenceController;
      FVar31.ReferenceController = local_a88.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_810);
  }
  else {
    if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    EVar15 = SDockTab::GetTabRole((this->TabBeingDragged).Object);
    if (EVar15 == NomadTab) goto LAB_14272e88a;
    pFVar25 = FSlateApplication::Get();
    if (local_9d0.Object == (SWindow *)0x0) {
      uVar33 = SUB84(local_a98.Object,0);
      uVar34 = (undefined4)((ulonglong)local_a98.Object >> 0x20);
      uVar35 = SUB84(local_a98.SharedReferenceCount.ReferenceController,0);
      uVar36 = (undefined4)((ulonglong)local_a98.SharedReferenceCount.ReferenceController >> 0x20);
      pcVar9 = *(code **)(*(longlong *)pFVar25 + 0x10);
      if (local_a98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar27 = (undefined8 *)(*pcVar9)(pFVar25,local_878,local_898);
      pSVar6 = (SWindow *)*puVar27;
      local_888.Object = (SWidget *)local_a88.Object;
      local_888.SharedReferenceCount.ReferenceController =
           local_a88.SharedReferenceCount.ReferenceController;
      if (local_a88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent(pSVar6,&local_888);
      FVar29.ReferenceController = (TReferenceControllerBase<1> *)local_870;
      FVar30.ReferenceController = local_a98.SharedReferenceCount.ReferenceController;
      FVar31.ReferenceController = local_a88.SharedReferenceCount.ReferenceController;
    }
    else {
      pTVar26 = TSharedPtr<SWindow,1>::ToSharedRef(&local_9d0,&local_7a8);
      uVar33 = SUB84(local_a98.Object,0);
      uVar34 = (undefined4)((ulonglong)local_a98.Object >> 0x20);
      uVar35 = SUB84(local_a98.SharedReferenceCount.ReferenceController,0);
      uVar36 = (undefined4)((ulonglong)local_a98.SharedReferenceCount.ReferenceController >> 0x20);
      if (local_a98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar26 = FSlateApplication::AddWindowAsNativeChild
                          (pFVar25,&local_8a8,&local_8c8,pTVar26,true);
      pSVar6 = pTVar26->Object;
      local_8b8.Object = (SWidget *)local_a88.Object;
      local_8b8.SharedReferenceCount.ReferenceController =
           local_a88.SharedReferenceCount.ReferenceController;
      if (local_a88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_a88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWindow::SetContent(pSVar6,&local_8b8);
      FVar29.ReferenceController = local_8a8.SharedReferenceCount.ReferenceController;
      FVar30.ReferenceController = local_a98.SharedReferenceCount.ReferenceController;
      FVar31.ReferenceController = local_a88.SharedReferenceCount.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar29.ReferenceController);
  if ((local_998._Widget.Object == (SDockingTabStack *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_a48.SharedReferenceCount.ReferenceController =
       (this->TabBeingDragged).SharedReferenceCount.ReferenceController;
  local_a48.Object = (this->TabBeingDragged).Object;
  if (local_a48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_a48.Object == (SDockTab *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  SDockingTabStack::OpenTab(local_998._Widget.Object,&local_a48,-1,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a48.SharedReferenceCount.ReferenceController);
  if (((this->TabOwnerAreaOfOrigin).Object == (SDockingArea *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar28 = SDockingArea::GetTabManager((this->TabOwnerAreaOfOrigin).Object,&local_808);
  ((pTVar28->Object->PrivateApi).Object)->TabManager->bCanDoDeferredLayoutSave = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_808.SharedReferenceCount.ReferenceController);
  if (((this->TabOwnerAreaOfOrigin).Object == (SDockingArea *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar28 = SDockingArea::GetTabManager((this->TabOwnerAreaOfOrigin).Object,&local_7f8);
  pFVar7 = (pTVar28->Object->PrivateApi).Object;
  if (FVar30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_968 = uVar33;
  uStack_964 = uVar34;
  uStack_960 = uVar35;
  uStack_95c = uVar36;
  if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_a30 = (this->TabBeingDragged).SharedReferenceCount.ReferenceController;
  local_a38 = (this->TabBeingDragged).Object;
  if (local_a30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a30->SharedReferenceCount = (atomic<int>)((int)local_a30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_a38 == (SDockTab *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar8 = pFVar7->TabManager;
  (**(code **)(pFVar8->_padding_ + 0x28))(pFVar8,&local_a38,&local_968);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(uStack_95c,uStack_960));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar31.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9d0.SharedReferenceCount.ReferenceController);
LAB_14272ec26:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a68.SharedReferenceCount.ReferenceController);
  return;
}

// GetDecoratorOffsetFromCursor @ 14273d210

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
FDockingDragOperation::GetDecoratorOffsetFromCursor
          (FDockingDragOperation *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  ETabRole EVar4;
  TVector2<double> *pTVar5;
  FDeprecateSlateVector2D FVar6;
  double dVar7;
  double dVar8;
  
  if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  EVar4 = SDockTab::GetVisualTabRole((this->TabBeingDragged).Object);
  if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FVar6 = SWidget::GetDesiredSize((SWidget *)(this->TabBeingDragged).Object);
  pTVar5 = &FDockingConstants::MaxMinorTabSize;
  if (EVar4 == MajorTab) {
    pTVar5 = &FDockingConstants::MaxMajorTabSize;
  }
  dVar8 = (pTVar5->field0_0x0)._s_0.X;
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  dVar7 = (double)*(float *)FVar6;
  if (dVar8 <= (double)*(float *)FVar6) {
    dVar7 = dVar8;
  }
  dVar8 = (double)*(float *)((longlong)FVar6 + 4);
  if (dVar1 <= (double)*(float *)((longlong)FVar6 + 4)) {
    dVar8 = dVar1;
  }
  dVar1 = (this->TabGrabOffsetFraction).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar7 * (this->TabGrabOffsetFraction).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8 * dVar1;
  return __return_storage_ptr__;
}

// GetPreviewAreaForDirection @ 142743210

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRect * __thiscall
FDockingDragOperation::GetPreviewAreaForDirection
          (FDockingDragOperation *this,FSlateRect *__return_storage_ptr__,FSlateRect *param_1,
          RelativeDirection param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = param_1->Left;
  fVar2 = param_1->Top;
  fVar3 = param_1->Right;
  fVar4 = param_1->Bottom;
  __return_storage_ptr__->Left = fVar1;
  __return_storage_ptr__->Top = fVar2;
  __return_storage_ptr__->Right = fVar3;
  __return_storage_ptr__->Bottom = fVar4;
  dVar5 = (double)(fVar3 - fVar1);
  dVar6 = (double)(fVar4 - fVar2);
  if (param_2 == LeftOf) {
    __return_storage_ptr__->Right = (float)(dVar5 * __real_3fe0000000000000 + (double)fVar1);
  }
  else {
    if (param_2 == Above) {
      __return_storage_ptr__->Bottom = (float)(dVar6 * __real_3fe0000000000000 + (double)fVar2);
      return __return_storage_ptr__;
    }
    if (param_2 == RightOf) {
      __return_storage_ptr__->Left = (float)(dVar5 * __real_3fe0000000000000 + (double)fVar1);
      return __return_storage_ptr__;
    }
    if (param_2 == Below) {
      __return_storage_ptr__->Top = (float)(dVar6 * __real_3fe0000000000000 + (double)fVar2);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetTabBeingDragged @ 1427442e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FDockingDragOperation::GetTabBeingDragged
          (FDockingDragOperation *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->TabBeingDragged).Object;
  pTVar1 = (this->TabBeingDragged).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTabGrabOffsetFraction @ 142744310

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
FDockingDragOperation::GetTabGrabOffsetFraction
          (FDockingDragOperation *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->TabGrabOffsetFraction).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->TabGrabOffsetFraction).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetTypeId @ 142745090

FString * __cdecl FDockingDragOperation::GetTypeId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString_const&___ptr64___cdecl_FDockingDragOperation::GetTypeId(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FDockingDragOperation::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FDockingDragOperation::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FDockingDragOperation::GetTypeId(void)'
                          ::__l2::Type,L"FDockingDragOperation");
      atexit(`FDockingDragOperation::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FDockingDragOperation::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FString_const&___ptr64___cdecl_FDockingDragOperation::GetTypeId(void)'
              ::__l2::Type;
    }
  }
  return &`public:_static_class_FString_const&___ptr64___cdecl_FDockingDragOperation::GetTypeId(void)'
          ::__l2::Type;
}

// IsOfTypeImpl @ 14274d240

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDockingDragOperation::IsOfTypeImpl(FDockingDragOperation *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  bool bVar4;
  
  pFVar3 = GetTypeId();
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      return true;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar4 = iVar2 == 0;
  }
  else {
    bVar4 = iVar2 + iVar1 == 1;
  }
  if (bVar4) {
    return true;
  }
  return false;
}

// New @ 14275cac0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FDockingDragOperation,1> * __cdecl
FDockingDragOperation::New
          (TSharedRef<FDockingDragOperation,1> *__return_storage_ptr__,
          TSharedRef<SDockTab,1> *param_1,TVector2<double> *param_2,
          TSharedRef<SDockingArea,1> *param_3,TVector2<double> *param_4)

{
  code *pcVar1;
  bool bVar2;
  FDockingDragOperation *this;
  TSharedRef<FDockingDragOperation,1> *pTVar3;
  TRawPtrProxy<FDockingDragOperation> local_res8;
  TSharedRef<SDockingArea,1> local_38;
  TVector2<double>_u_0 local_28;
  
  this = ::operator_new(200);
  if (this == (FDockingDragOperation *)0x0) {
    local_res8.Object = (FDockingDragOperation *)0x0;
  }
  else {
    local_38.Object = param_3->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_res8.Object =
         FDockingDragOperation(this,param_1,(TVector2<double> *)&local_28._s_0,&local_38,param_4);
    if ((((local_res8.Object != (FDockingDragOperation *)0x0) &&
         ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FDockingDragOperation,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FDockingDragOperation,1>::TSharedRef<FDockingDragOperation,1><FDockingDragOperation>
            (__return_storage_ptr__,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnDragged @ 142762fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDockingDragOperation::OnDragged(FDockingDragOperation *this,FDragDropEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  double dVar3;
  FDeprecateVector2DParameter FVar4;
  bool bVar5;
  ETabRole EVar6;
  FDeprecateSlateVector2D FVar7;
  TVector2<double> *pTVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  FSlateRect local_68 [5];
  
  if ((((this->HoveredDockTarget).TargetNode.Object == (SDockingNode *)0x0) ||
      (pTVar1 = (this->HoveredDockTarget).TargetNode.WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EVar6 = SDockTab::GetVisualTabRole((this->TabBeingDragged).Object);
    if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar7 = SWidget::GetDesiredSize((SWidget *)(this->TabBeingDragged).Object);
    pTVar8 = &FDockingConstants::MaxMinorTabSize;
    if (EVar6 == MajorTab) {
      pTVar8 = &FDockingConstants::MaxMajorTabSize;
    }
    dVar12 = (pTVar8->field0_0x0)._s_0.X;
    dVar3 = (pTVar8->field0_0x0)._s_0.Y;
    dVar9 = (double)*(float *)FVar7;
    if (dVar12 <= (double)*(float *)FVar7) {
      dVar9 = dVar12;
    }
    dVar12 = (double)*(float *)((longlong)FVar7 + 4);
    if (dVar3 <= (double)*(float *)((longlong)FVar7 + 4)) {
      dVar12 = dVar3;
    }
    fVar10 = *(float *)&param_1->_padding_ -
             (float)(dVar9 * (this->TabGrabOffsetFraction).field0_0x0._s_0.X);
    fVar11 = *(float *)((longlong)&param_1->_padding_ + 4) -
             (float)(dVar12 * (this->TabGrabOffsetFraction).field0_0x0._s_0.Y);
    if (this->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_68[0].Right = (float)((double)fVar10 + (this->LastContentSize).field0_0x0._s_0.X);
    local_68[0].Bottom = (float)((double)fVar11 + (this->LastContentSize).field0_0x0._s_0.Y);
    local_68[0].Left = fVar10;
    local_68[0].Top = fVar11;
    SWindow::UpdateMorphTargetShape((SWindow *)this->_padding_,local_68);
    if (this->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar4._4_4_ = fVar11;
    FVar4._0_4_ = fVar10;
    SWindow::MoveWindowTo((SWindow *)this->_padding_,FVar4);
  }
  return;
}

// OnDrop @ 1427632d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDockingDragOperation::OnDrop(FDockingDragOperation *this,bool param_1,FPointerEvent *param_2)

{
  TSharedPtr<SDockTab,1> *pTVar1;
  FPrivateApi *pFVar2;
  FTabManager *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<FTabManager,1> *pTVar6;
  SDockTab *local_88;
  TReferenceControllerBase<1> *local_80;
  longlong local_78;
  FSharedReferencer<1> FStack_70;
  TSharedPtr<SDockingArea,1> local_68;
  SWindow *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TSharedRef<SWindow,1> local_48;
  TSharedRef<FTabManager,1> local_38;
  TSharedRef<FTabManager,1> local_28;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CursorDecoratorWindow.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\FDockingDragOperation.cpp"
                       ,0x20,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SWindow::GetSizeInScreen((SWindow *)this->_padding_);
  pTVar1 = &this->TabBeingDragged;
  if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_68.Object = (SDockingArea *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SDockTab::SetDraggedOverDockArea(pTVar1->Object,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (param_1) {
    FInputEvent::GetWindow((FInputEvent *)param_2,&local_48);
    if ((this->TabOwnerAreaOfOrigin).Object == (SDockingArea *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar6 = SDockingArea::GetTabManager((this->TabOwnerAreaOfOrigin).Object,&local_38);
    ((pTVar6->Object->PrivateApi).Object)->TabManager->bCanDoDeferredLayoutSave = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if ((this->TabOwnerAreaOfOrigin).Object == (SDockingArea *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar6 = SDockingArea::GetTabManager((this->TabOwnerAreaOfOrigin).Object,&local_28);
    pFVar2 = (pTVar6->Object->PrivateApi).Object;
    local_58 = local_48.Object;
    pTStack_50 = local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1->Object == (SDockTab *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_80 = (this->TabBeingDragged).SharedReferenceCount.ReferenceController;
    local_88 = pTVar1->Object;
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_88 == (SDockTab *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = pFVar2->TabManager;
    (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,&local_88,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  else {
    DroppedOntoNothing(this);
  }
  FDragDropOperation::OnDrop((FDragDropOperation *)this,param_1,param_2);
  local_78 = 0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<SDockTab,1> *)&local_78) {
    pTVar1->Object = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TabBeingDragged).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  return;
}

// OnTabWellEntered @ 14276c0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDockingDragOperation::OnTabWellEntered
          (FDockingDragOperation *this,TSharedRef<SDockingTabWell,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SDockTab *this_00;
  code *pcVar5;
  bool bVar6;
  TSharedPtr<SDockingArea,1> *pTVar7;
  TSharedPtr<SWidget,1> local_48;
  TSharedPtr<SWidget,1> local_38;
  TSharedPtr<SDockingArea,1> local_28;
  TSharedPtr<SDockingArea,1> local_18;
  
  pTVar7 = SDockingTabWell::GetDockArea(param_1->Object,&local_28);
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  local_48.Object = (SWidget *)pTVar7->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->TabOwnerAreaOfOrigin).SharedReferenceCount.ReferenceController;
  local_38.Object = (SWidget *)(this->TabOwnerAreaOfOrigin).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.SharedReferenceCount.ReferenceController = pTVar3;
  local_38.SharedReferenceCount.ReferenceController = pTVar4;
  bVar6 = IsParentWidgetOf(&local_38,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (!bVar6) {
    (this->HoveredTabPanelPtr).Object = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (this->HoveredTabPanelPtr).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->HoveredTabPanelPtr).WeakReferenceCount.ReferenceController;
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
      (this->HoveredTabPanelPtr).WeakReferenceCount.ReferenceController = pTVar3;
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    SWindow::HideWindow((SWindow *)this->_padding_);
    if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = (this->TabBeingDragged).Object;
    pTVar7 = SDockingTabWell::GetDockArea(param_1->Object,&local_18);
    SDockTab::SetDraggedOverDockArea(this_00,pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnTabWellLeft @ 14276c230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDockingDragOperation::OnTabWellLeft
          (FDockingDragOperation *this,TSharedRef<SDockingTabWell,1> *param_1,FGeometry *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWindow *pSVar4;
  SDockingTabStack *this_00;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  FSlateRect *pFVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float local_res8;
  float fStackX_c;
  float local_148;
  float fStack_144;
  TSharedRef<SDockTab,1> local_128;
  TVector2<float>_u_0 local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  TVector2<float>_u_0_s_0 local_fc;
  TSharedPtr<SDockingArea,1> local_f0;
  FSlateRect local_e0;
  undefined8 local_d0 [2];
  FCurveHandle local_c0;
  FSlateRect local_b0;
  FCurveSequence local_98;
  
  if (&this->HoveredTabPanelPtr != (TWeakPtr<SDockingTabWell,1> *)local_d0) {
    pTVar3 = (this->HoveredTabPanelPtr).WeakReferenceCount.ReferenceController;
    (this->HoveredTabPanelPtr).Object = (SDockingTabWell *)0x0;
    (this->HoveredTabPanelPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SWindow::Resize((SWindow *)this->_padding_,*(FDeprecateVector2DParameter *)&param_2->Size);
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SWindow::ShowWindow((SWindow *)this->_padding_);
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_104 = param_2->Scale;
  pSVar4 = (SWindow *)this->_padding_;
  local_res8 = SUB84(param_2->Size,0);
  local_fc = (param_2->AbsolutePosition).field0_0x0._s_0;
  fStackX_c = SUB84(param_2->Size,4);
  local_118._s_0.X = local_104 * 0.0 + local_fc.X;
  local_118._s_0.Y = local_104 * 0.0 + local_fc.Y;
  local_110 = local_res8 * local_104;
  local_10c = local_104 * 0.0;
  local_108 = local_104 * 0.0;
  local_104 = fStackX_c * local_104;
  FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_118._s_0,&local_e0);
  SWindow::ReshapeWindow(pSVar4,&local_e0);
  FCurveSequence::FCurveSequence(&local_98);
  FCurveSequence::AddCurve(&local_98,&local_c0,0.0,__real_3d4ccccd,QuadOut);
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pSVar4 = (SWindow *)this->_padding_;
  if (pSVar4 == (SWindow *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = SWindow::GetMorphTargetShape((SWindow *)this->_padding_,&local_b0);
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar9 = SWindow::GetOpacity((SWindow *)this->_padding_);
  SWindow::MorphToShape(pSVar4,&local_98,fVar9,pFVar8);
  fStack_144 = SUB84(param_2->Size,4);
  local_148 = SUB84(param_2->Size,0);
  dVar12 = (double)fStack_144;
  dVar11 = (double)local_148;
  dVar6 = dVar12;
  if (dVar12 <= dVar11) {
    dVar6 = dVar11;
  }
  dVar10 = __real_4089000000000000 / dVar6;
  if (__real_3ff0000000000000 <= __real_4089000000000000 / dVar6) {
    dVar10 = __real_3ff0000000000000;
  }
  if (dVar10 <= __real_3fb99999a0000000) {
    dVar10 = __real_3fb99999a0000000;
  }
  (this->LastContentSize).field0_0x0._s_0.X = (double)(float)dVar10 * dVar11;
  (this->LastContentSize).field0_0x0._s_0.Y = (double)(float)dVar10 * dVar12;
  if ((this->CursorDecoratorStackNode).Object == (SDockingTabStack *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = (this->CursorDecoratorStackNode).Object;
  if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_128.SharedReferenceCount.ReferenceController =
       (this->TabBeingDragged).SharedReferenceCount.ReferenceController;
  local_128.Object = (this->TabBeingDragged).Object;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_128.Object == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SDockingTabStack::OpenTab(this_00,&local_128,-1,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  if ((this->TabBeingDragged).Object == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_f0.Object = (SDockingArea *)0x0;
  local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SDockTab::SetDraggedOverDockArea((this->TabBeingDragged).Object,&local_f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.SharedReferenceCount.ReferenceController);
  FCurveSequence::~FCurveSequence(&local_98);
  return;
}

// SetHoveredTarget @ 1427849c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDockingDragOperation::SetHoveredTarget
          (FDockingDragOperation *this,FDockTarget *param_1,FInputEvent *param_2)

{
  atomic<int> *paVar1;
  FDockTarget *this_00;
  atomic<int> aVar2;
  RelativeDirection RVar3;
  SWidget *pSVar4;
  SDockTab *this_01;
  SWindow *this_02;
  code *pcVar5;
  FWeakReferencer<1> *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TVector2<float>_u_0 TVar8;
  bool bVar9;
  atomic<int> aVar10;
  ISlateStyle *pIVar11;
  FName *pFVar12;
  undefined8 *puVar13;
  TSharedPtr<SDockingArea,1> *pTVar14;
  FSlateRect *pFVar15;
  SDockingNode *pSVar16;
  TReferenceControllerBase<1> *pTVar17;
  float fVar18;
  undefined1 auStack_268 [32];
  float local_238;
  float fStack_234;
  TSharedRef<SWidget,1> local_220;
  FSlateRect local_210;
  undefined8 local_200;
  float local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  float local_1ec;
  TVector2<float>_u_0 local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined8 local_1cc;
  FLinearColor_u_0 local_1c0;
  undefined1 local_1b0;
  undefined1 local_1a8 [8];
  void *pvStack_1a0;
  undefined8 local_198;
  FLinearColor_u_0 local_190;
  undefined1 local_180;
  undefined1 local_178 [8];
  void *pvStack_170;
  undefined8 local_168;
  TSharedPtr<SDockingArea,1> local_160;
  FName local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FSlateRect local_138;
  undefined1 local_128 [8];
  TReferenceControllerBase<1> *local_120;
  FCurveHandle local_118;
  FSlateRect local_108;
  FCurveSequence local_f8;
  FGeometry local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_268;
  this_00 = &this->HoveredDockTarget;
  bVar9 = TWeakPtr<SDockingNode,1>::UEOpEquals<SDockingNode>
                    (&this_00->TargetNode,&param_1->TargetNode);
  if ((!bVar9) || ((this->HoveredDockTarget).DockDirection != param_1->DockDirection)) {
    pTVar17 = (param_1->TargetNode).WeakReferenceCount.ReferenceController;
    pSVar16 = (param_1->TargetNode).Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_148 = *(undefined4 *)&(this_00->TargetNode).Object;
    uStack_144 = *(undefined4 *)((longlong)&(this->HoveredDockTarget).TargetNode.Object + 4);
    pFVar6 = &(this->HoveredDockTarget).TargetNode.WeakReferenceCount;
    uStack_140 = *(undefined4 *)&pFVar6->ReferenceController;
    uStack_13c = *(undefined4 *)
                  ((longlong)
                   &(this->HoveredDockTarget).TargetNode.WeakReferenceCount.ReferenceController + 4)
    ;
    pTVar7 = pFVar6->ReferenceController;
    (this_00->TargetNode).Object = pSVar16;
    (this->HoveredDockTarget).TargetNode.WeakReferenceCount.ReferenceController = pTVar17;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    pSVar16 = (SDockingNode *)0x0;
    (this->HoveredDockTarget).DockDirection = param_1->DockDirection;
    pTVar17 = (param_1->TargetNode).WeakReferenceCount.ReferenceController;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar17->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142784a92;
        }
        LOCK();
        aVar10 = pTVar17->SharedReferenceCount;
        bVar9 = aVar2 == aVar10;
        if (bVar9) {
          pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar10;
      } while (!bVar9);
      pSVar16 = (param_1->TargetNode).Object;
    }
LAB_142784a92:
    FCurveSequence::FCurveSequence(&local_f8);
    FCurveSequence::AddCurve(&local_f8,&local_118,0.0,__real_3dcccccd,QuadOut);
    if (pSVar16 == (SDockingNode *)0x0) {
      if ((this->_padding_ == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_02 = (SWindow *)this->_padding_;
      if ((this_02 == (SWindow *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar15 = SWindow::GetMorphTargetShape((SWindow *)this->_padding_,&local_108);
      if ((this->_padding_ == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar18 = SWindow::GetOpacity((SWindow *)this->_padding_);
      SWindow::MorphToShape(this_02,&local_f8,fVar18,pFVar15);
      if ((this->_padding_ == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_180 = 1;
      local_190 = FLinearColor::White.field0_0x0;
      local_168 = 0;
      local_178 = (undefined1  [8])0x0;
      pvStack_170 = (void *)0x0;
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&((SWidget *)this->_padding_)[1].PersistentState.InitialClipState.TypedValue.
                   ScissorRect.TypedValue.TopRight,(SWidget *)this->_padding_,
               (TAttribute<FLinearColor> *)&local_190._s_0,None);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_178);
      if (pvStack_170 != (void *)0x0) {
        FMemory::Free(pvStack_170);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_178);
      if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_160.Object = (SDockingArea *)0x0;
      local_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      SDockTab::SetDraggedOverDockArea((this->TabBeingDragged).Object,&local_160);
      local_120 = local_160.SharedReferenceCount.ReferenceController;
    }
    else {
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_220.Object = (SWidget *)pSVar16;
      local_220.SharedReferenceCount.ReferenceController = pTVar17;
      FInputEvent::FindGeometry(param_2,&local_88,&local_220);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_220.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      RVar3 = param_1->DockDirection;
      local_238 = local_88.Size._0_4_;
      local_1f8 = local_238;
      fStack_234 = local_88.Size._4_4_;
      local_1ec = fStack_234;
      local_1cc = local_88.AbsolutePosition.field0_0x0;
      TVar8._s_0 = local_1cc;
      uStack_1f4 = 0;
      uStack_1f0 = 0;
      local_1dc = local_88.Scale * 0.0;
      local_200 = 0;
      local_1cc._0_4_ = local_88.AbsolutePosition.field0_0x0._0_4_;
      local_1e8._s_0.X = local_88.Scale * 0.0 + (float)local_1cc;
      local_1d4 = fStack_234 * local_88.Scale;
      local_1cc._4_4_ = local_88.AbsolutePosition.field0_0x0._4_4_;
      local_1e8._s_0.Y = local_88.Scale * 0.0 + local_1cc._4_4_;
      local_1e0 = local_238 * local_88.Scale;
      local_1d8 = local_88.Scale * 0.0;
      local_1cc = TVar8._s_0;
      FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_1e8._s_0,&local_138);
      local_210.Left = local_138.Left;
      local_210.Top = local_138.Top;
      local_210.Right = local_138.Right;
      local_210.Bottom = local_138.Bottom;
      if (RVar3 == LeftOf) {
        local_210.Right =
             (float)((double)(local_138.Right - local_138.Left) * __real_3fe0000000000000 +
                    (double)local_138.Left);
      }
      else if (RVar3 == Above) {
        local_210.Bottom =
             (float)((double)(local_138.Bottom - local_138.Top) * __real_3fe0000000000000 +
                    (double)local_138.Top);
      }
      else if (RVar3 == RightOf) {
        local_210.Left =
             (float)((double)(local_138.Right - local_138.Left) * __real_3fe0000000000000 +
                    (double)local_138.Left);
      }
      else if (RVar3 == Below) {
        local_210.Top =
             (float)((double)(local_138.Bottom - local_138.Top) * __real_3fe0000000000000 +
                    (double)local_138.Top);
      }
      if ((this->_padding_ == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar18 = SWindow::GetOpacity((SWindow *)this->_padding_);
      if ((this->_padding_ == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SWindow::MorphToShape((SWindow *)this->_padding_,&local_f8,fVar18,&local_210);
      if ((this->_padding_ == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pSVar4 = (SWidget *)this->_padding_;
      pIVar11 = FAppStyle::Get();
      pcVar5 = *(code **)((longlong)*pIVar11 + 0x38);
      pFVar12 = ::FName::FName(&local_150,L"Docking.Cross.PreviewWindowTint");
      puVar13 = (undefined8 *)(*pcVar5)(pIVar11,*pFVar12,0);
      local_1c0._0_8_ = *puVar13;
      local_1c0._8_8_ = puVar13[1];
      local_1b0 = 1;
      local_198 = 0;
      local_1a8 = (undefined1  [8])0x0;
      pvStack_1a0 = (void *)0x0;
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&pSVar4[1].PersistentState.InitialClipState.TypedValue.ScissorRect.TypedValue.
                   TopRight,pSVar4,(TAttribute<FLinearColor> *)&local_1c0._s_0,None);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8);
      if (pvStack_1a0 != (void *)0x0) {
        FMemory::Free(pvStack_1a0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1a8);
      if (((this->TabBeingDragged).Object == (SDockTab *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = (this->TabBeingDragged).Object;
      pTVar14 = (TSharedPtr<SDockingArea,1> *)
                (**(code **)(pSVar16->_padding_ + 0x260))(pSVar16,local_128);
      SDockTab::SetDraggedOverDockArea(this_01,pTVar14);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
    FCurveSequence::~FCurveSequence(&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  return;
}

