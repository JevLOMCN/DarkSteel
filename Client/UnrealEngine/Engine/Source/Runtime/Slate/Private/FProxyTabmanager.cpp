// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// DrawAttention @ 14272cec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProxyTabmanager::DrawAttention(FProxyTabmanager *this,TSharedRef<SDockTab,1> *param_1)

{
  TSharedPtr<SDockTab,1> local_18;
  
  FTabManager::DrawAttention((FTabManager *)this,param_1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TMulticastDelegate<void___cdecl(TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnAttentionDrawnToTab,&local_18);
  return;
}

// IsTabSupported @ 14274e6e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FProxyTabmanager::IsTabSupported(FProxyTabmanager *this,FTabId *param_1)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(FTabId,bool_&),FDefaultDelegateUserPolicy> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  FName FVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  FName local_58;
  undefined8 uStack_50;
  FDestructionSentinel local_48 [2];
  
  this_00 = &this->OnIsTabSupported;
  local_res8[0] = 1;
  bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar7) {
    FVar5 = param_1->TabType;
    uVar6._0_4_ = param_1->InstanceId;
    uVar6._4_1_ = param_1->Flags;
    uVar6._5_3_ = *(undefined3 *)&param_1->field_0xd;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)local_48);
    puVar1 = &(this->OnIsTabSupported).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar7 = false;
    uVar12 = *(int *)&(this->OnIsTabSupported).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 << 4;
      bVar7 = false;
      do {
        uVar11 = 0;
        if ((int)uVar12 < *(int *)&(this->OnIsTabSupported).field_0x10) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        lVar2 = *(longlong *)&(this->OnIsTabSupported).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar13) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar13), plVar3 == (longlong *)0x0)) ||
           (local_58 = FVar5, uStack_50 = uVar6,
           cVar10 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_58,local_res8), cVar10 == '\0')) {
          bVar7 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(this->OnIsTabSupported).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_48[0].bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48[0].Accessor,local_48);
    }
  }
  return (bool)local_res8[0];
}

// OpenUnmanagedTab @ 14276f860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProxyTabmanager::OpenUnmanagedTab
          (FProxyTabmanager *this,FName param_1,FSearchPreference *param_2,
          TSharedRef<SDockTab,1> *param_3)

{
  FGlobalTabmanager *this_00;
  FArea *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDockTab *this_01;
  code *pcVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  SWindow *this_02;
  atomic<int> aVar6;
  TSharedRef<FGlobalTabmanager,1> *pTVar7;
  FTabId *pFVar8;
  TSharedRef<FTabManager::FArea,1> *pTVar9;
  FStack *pFVar10;
  TSharedRef<FTabManager::FStack,1> *pTVar11;
  TSharedRef<SWidget,1> *pTVar12;
  longlong lVar13;
  longlong *plVar14;
  TSharedPtr<SDockingTabWell,1> *this_03;
  SDockingTabWell *this_04;
  TSharedPtr<SDockingTabStack,1> *this_05;
  SDockingTabStack *this_06;
  int iVar15;
  FStack *pFVar16;
  int iVar17;
  bool bVar18;
  TSharedPtr<SWindow,1> local_188;
  TSharedPtr<SDockingArea,1> local_178;
  TSharedPtr<FTabManager::FArea,1> local_168;
  TSharedRef<SWidget,1> local_158;
  TRawPtrProxy<FTabManager::FStack> local_148;
  TSharedRef<SDockTab,1> *local_140;
  int local_138;
  TSharedRef<SDockTab,1> *local_130;
  int local_128;
  TSharedRef<FTabManager::FArea,1> local_120;
  TSharedRef<FTabManager::FArea,1> local_108;
  TSharedRef<FTabManager::FLayoutNode,1> local_f8;
  TSharedRef<FTabManager::FStack,1> local_e8;
  TSharedPtr<SDockTab,1> local_d8;
  TSharedRef<FTabManager::FArea,1> local_c8;
  FTabId local_b8;
  TSharedRef<FTabManager::FArea,1> local_a8;
  TSharedRef<FTabManager::FStack,1> local_98;
  TSharedRef<SWidget,1> local_88;
  TSharedPtr<SDockingTabStack,1> local_78;
  TSharedPtr<SDockingTabWell,1> local_68;
  FTabId local_58;
  FTabId local_48;
  FTabId local_38;
  
  local_188.SharedReferenceCount.ReferenceController =
       (this->ParentWindow).WeakReferenceCount.ReferenceController;
  pFVar16 = (FStack *)0x0;
  local_188.Object = (SWindow *)0x0;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14276f8cb;
      }
      LOCK();
      aVar6 = (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar18 = aVar5 == aVar6;
      if (bVar18) {
        (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar18);
    if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_188.Object = (this->ParentWindow).Object;
    }
  }
LAB_14276f8cb:
  if (local_188.Object == (SWindow *)0x0) {
    bVar18 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6813193255430123856>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                        ,0xeb0,"ParentWindowPtr.IsValid()");
    if (bVar18) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pTVar7 = FGlobalTabmanager::Get();
    this_00 = pTVar7->Object;
    pFVar8 = SDockTab::GetLayoutIdentifier(param_3->Object,&local_58);
    FTabManager::GetAreaFromInitialLayoutWithTabType((FTabManager *)this_00,&local_168,pFVar8);
    pFVar1 = local_168.Object;
    iVar17 = 0;
    if (local_168.Object == (FArea *)0x0) {
      pTVar9 = FTabManager::NewPrimaryArea(&local_c8);
      iVar15 = 2;
    }
    else {
      if ((local_168.Object == (FArea *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_108.Object = local_168.Object;
      local_108.SharedReferenceCount.ReferenceController =
           local_168.SharedReferenceCount.ReferenceController;
      if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar1 == (FArea *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar9 = &local_108;
      iVar15 = iVar17;
      iVar17 = 1;
    }
    pFVar1 = pTVar9->Object;
    local_120.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    if (local_120.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_120.Object = pFVar1;
    if (iVar15 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    if (iVar17 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
    }
    pFVar10 = ::operator_new(0x50);
    if (pFVar10 != (FStack *)0x0) {
      pFVar10->_padding_ = 0;
      pFVar10->_padding_ = 0;
      *(undefined4 *)&pFVar10->_padding_ = 0x3f800000;
      pFVar10->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
      (pFVar10->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->Tabs).ArrayNum = 0;
      (pFVar10->Tabs).ArrayMax = 0;
      pFVar10->bHideTabWell = false;
      (pFVar10->ForegroundTabId).TabType.ComparisonIndex = 0;
      (pFVar10->ForegroundTabId).TabType.Number = 0;
      (pFVar10->ForegroundTabId).InstanceId = -1;
      (pFVar10->ForegroundTabId).Flags = SaveLayout;
      (pFVar10->ExtensionId).ComparisonIndex = 0;
      (pFVar10->ExtensionId).Number = 0;
      pFVar16 = pFVar10;
    }
    local_148.Object = pFVar16;
    TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
              (&local_e8,&local_148);
    pFVar8 = SDockTab::GetLayoutIdentifier(param_3->Object,&local_48);
    local_b8.TabType = pFVar8->TabType;
    local_b8.InstanceId = pFVar8->InstanceId;
    local_b8.Flags = pFVar8->Flags;
    local_b8._13_3_ = *(undefined3 *)&pFVar8->field_0xd;
    pTVar11 = FTabManager::FStack::AddTab(local_e8.Object,&local_98,&local_b8,OpenedTab);
    local_f8.Object = (FLayoutNode *)pTVar11->Object;
    local_f8.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTabManager::FArea::Split(pFVar1,&local_a8,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    FTabManager::RestoreArea((FTabManager *)this,&local_178,&local_120,&local_188,false,Never,false)
    ;
    if (local_178.Object != (SDockingArea *)0x0) {
      if ((local_188.Object == (SWindow *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_02 = local_188.Object;
      if ((local_178.Object == (SDockingArea *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&(local_178.Object)->_padding_,&local_88);
      pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
      local_158.Object = pTVar12->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_158.SharedReferenceCount.ReferenceController = pTVar2;
      SWindow::SetContent(this_02,&local_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if ((local_178.Object == (SDockingArea *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar13 = (**(code **)((local_178.Object)->_padding_ + 0x268))(local_178.Object,&local_140);
      iVar17 = *(int *)(lVar13 + 8);
      DestructItems<TSharedRef<SDockTab,1>,int>(local_140,local_138);
      if (local_140 != (TSharedRef<SDockTab,1> *)0x0) {
        FMemory::Free(local_140);
      }
      if (0 < iVar17) {
        if ((local_178.Object == (SDockingArea *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar14 = (longlong *)
                  (**(code **)((local_178.Object)->_padding_ + 0x268))(local_178.Object,&local_130);
        if (((int)plVar14[1] < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = (TReferenceControllerBase<1> *)((undefined8 *)*plVar14)[1];
        this_01 = *(SDockTab **)*plVar14;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        DestructItems<TSharedRef<SDockTab,1>,int>(local_130,local_128);
        if (local_130 != (TSharedRef<SDockTab,1> *)0x0) {
          FMemory::Free(local_130);
        }
        if (this_01 == (SDockTab *)0x0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewlyOpenedTab.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\TabManager.cpp"
                              ,0xec2,L"");
          if (bVar18) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar18) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        this_03 = SDockTab::GetParent(this_01,&local_68);
        this_04 = TSharedPtr<SDockingTabWell,1>::operator->(this_03);
        this_05 = SDockingTabWell::GetParentDockTabStack(this_04,&local_78);
        this_06 = TSharedPtr<SDockingTabStack,1>::operator->(this_05);
        SDockingTabStack::OpenTab(this_06,param_3,-1,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        if ((this_01 == (SDockTab *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        SDockTab::RequestCloseTab(this_01);
        pFVar8 = SDockTab::GetLayoutIdentifier(param_3->Object,&local_38);
        uVar4 = *(undefined8 *)&pFVar8->InstanceId;
        *(FName *)((longlong)&this->_padding_ + 4) = pFVar8->TabType;
        *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar4;
        local_d8.Object = param_3->Object;
        local_d8.SharedReferenceCount.ReferenceController =
             (param_3->SharedReferenceCount).ReferenceController;
        if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        TMulticastDelegate<void___cdecl(TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>::
        Broadcast(&this->OnTabOpened,&local_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  return;
}

// SetParentWindow @ 142785fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FProxyTabmanager::SetParentWindow(FProxyTabmanager *this,TSharedRef<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->ParentWindow).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->ParentWindow).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->ParentWindow).WeakReferenceCount.ReferenceController;
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
    (this->ParentWindow).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

