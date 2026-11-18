// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 84

// ~SDockingTabStack @ 142702300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::~SDockingTabStack(SDockingTabStack *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActionList).SharedReferenceCount.ReferenceController);
  FCurveSequence::~FCurveSequence(&this->ShowHideTabWell);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OverlayManagement).ContentAreaOverlay.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentSlot).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TitleBarContent).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabWell).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->Tabs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AddSidebarTab @ 14270b1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::AddSidebarTab(SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1)

{
  SDockTab *this_00;
  TSharedPtr<SDockingTabWell,1> local_18;
  
  local_18.Object = (this->TabWell).Object;
  this_00 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->TabWell).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SDockTab::SetParent(this_00,&local_18);
  return;
}

// AddTabWidget @ 14270c7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::AddTabWidget
          (SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SDockingTabWell::AddTab((this->TabWell).Object,param_1,param_2,param_3);
  bVar2 = FCurveSequence::IsInReverse(&this->ShowHideTabWell);
  if (bVar2) {
    if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((1 < (((this->TabWell).Object)->Tabs).Children.ArrayNum) &&
       (bVar2 = FCurveSequence::IsInReverse(&this->ShowHideTabWell), bVar2)) {
      pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
      FCurveSequence::Play(&this->ShowHideTabWell,pTVar3,false,0.0,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  HideCross(this);
  (**(code **)(this->_padding_ + 0x260))(this,&local_28);
  if (local_28 != 0) {
    if ((local_28 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined1 *)(local_28 + 0x330) = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// BindTabCommands @ 14270e970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::BindTabCommands(SDockingTabStack *this)

{
  TSharedPtr<FUICommandList,1> *this_00;
  code *pcVar1;
  bool bVar2;
  FUICommandList *pFVar3;
  FTabCommands *pFVar4;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  TRawPtrProxy<FUICommandList> local_res8;
  uint uStack_14c;
  TSharedPtr<FUICommandInfo_const_,1> local_148;
  TSharedPtr<FUICommandInfo_const_,1> local_138;
  TSharedPtr<FUICommandInfo_const_,1> local_128;
  code *local_118;
  longlong lStack_110;
  code *local_108;
  longlong lStack_100;
  code *local_f8;
  longlong lStack_f0;
  code *local_e8;
  longlong lStack_e0;
  code *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  code *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_b8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_a0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_88;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_70;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_58;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_40;
  
  this_00 = &this->ActionList;
  if (this_00->Object != (FUICommandList *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ActionList.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                       ,0x5a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = ::operator_new(0x140);
  if (pFVar3 == (FUICommandList *)0x0) {
    local_res8.Object = (FUICommandList *)0x0;
  }
  else {
    local_res8.Object = FUICommandList::FUICommandList(pFVar3);
    if ((((local_res8.Object != (FUICommandList *)0x0) && ((local_res8.Object)->_padding_ != 0)) &&
        ((local_res8.Object)->_padding_ != 0)) && (0 < *(int *)((local_res8.Object)->_padding_ + 8))
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  TSharedPtr<FUICommandList,1>::operator=<FUICommandList>(this_00,&local_res8);
  pFVar4 = TCommands<FTabCommands>::Get();
  if (this_00->Object == (FUICommandList *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = this_00->Object;
  lStack_110 = (ulonglong)uStack_14c << 0x20;
  local_118 = CanExecuteCloseMajorTabCommand;
  pTVar5 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                     (&local_b8,this,(pmf_c11321c4 *)&local_118);
  lStack_100 = (ulonglong)uStack_14c << 0x20;
  local_108 = ExecuteCloseMajorTabCommand;
  pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                     (&local_a0,this,(pmf_4841918d *)&local_108);
  local_138.SharedReferenceCount.ReferenceController =
       (pFVar4->CloseMajorTab).SharedReferenceCount.ReferenceController;
  local_138.Object = (pFVar4->CloseMajorTab).Object;
  if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FUICommandList::MapAction(pFVar3,&local_138,pTVar6,pTVar5,RepeatDisabled);
  if (this_00->Object == (FUICommandList *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = this_00->Object;
  lStack_f0 = (ulonglong)uStack_14c << 0x20;
  local_f8 = CanExecuteCloseMinorTabCommand;
  pTVar5 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                     (&local_88,this,(pmf_c11321c4 *)&local_f8);
  lStack_e0 = (ulonglong)uStack_14c << 0x20;
  local_e8 = ExecuteCloseMinorTabCommand;
  pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                     (&local_70,this,(pmf_4841918d *)&local_e8);
  local_148.SharedReferenceCount.ReferenceController =
       (pFVar4->CloseMinorTab).SharedReferenceCount.ReferenceController;
  local_148.Object = (pFVar4->CloseMinorTab).Object;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FUICommandList::MapAction(pFVar3,&local_148,pTVar6,pTVar5,RepeatDisabled);
  if (this_00->Object == (FUICommandList *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = this_00->Object;
  local_148.Object = (FUICommandInfo *)CanExecuteCloseFocusedTabCommand;
  local_148.SharedReferenceCount.ReferenceController =
       local_148.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_d8 = CanExecuteCloseFocusedTabCommand;
  pTStack_d0 = local_148.SharedReferenceCount.ReferenceController;
  pTVar5 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                     (&local_58,this,(pmf_c11321c4 *)&local_d8);
  local_148.SharedReferenceCount.ReferenceController =
       local_148.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_148.Object = (FUICommandInfo *)ExecuteCloseFocusedTabCommand;
  local_c8 = ExecuteCloseFocusedTabCommand;
  pTStack_c0 = local_148.SharedReferenceCount.ReferenceController;
  pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                     (&local_40,this,(pmf_4841918d *)&local_c8);
  local_128.SharedReferenceCount.ReferenceController =
       (pFVar4->CloseFocusedTab).SharedReferenceCount.ReferenceController;
  local_128.Object = (pFVar4->CloseFocusedTab).Object;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FUICommandList::MapAction(pFVar3,&local_128,pTVar6,pTVar5,RepeatDisabled);
  return;
}

// BringToFront @ 14270f0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::BringToFront(SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1)

{
  SDockingTabWell *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SDockTab,1> local_18;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = param_1->Object;
  this_00 = (this->TabWell).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SDockingTabWell::BringTabToFront(this_00,&local_18);
  return;
}

// CanCloseAllButForegroundTab @ 14270f5e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::CanCloseAllButForegroundTab(SDockingTabStack *this)

{
  int iVar1;
  SDockingTabWell *pSVar2;
  SDockTab *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ETabRole EVar6;
  uint uVar7;
  TSharedRef<SDockTab,1> *pTVar8;
  TSlotlessChildren<SDockTab> *pTVar9;
  SDockTab *this_01;
  TReferenceControllerBase<1> *pTVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar13;
  ForAnyElementType local_48;
  int local_40;
  int local_3c [9];
  TReferenceControllerBase<1> *pTVar12;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pSVar2 = (this->TabWell).Object;
  this_01 = (pSVar2->TabBeingDraggedPtr).Object;
  if (this_01 == (SDockTab *)0x0) {
    if (((pSVar2->Tabs).Children.ArrayNum < 1) || (pSVar2->ForegroundTabIndex < 0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar13 = pTVar10;
      goto LAB_14270f85e;
    }
    pTVar8 = TSlotlessChildren<SDockTab>::operator[](&pSVar2->Tabs,pSVar2->ForegroundTabIndex);
    pTVar13 = (pTVar8->SharedReferenceCount).ReferenceController;
    this_01 = pTVar8->Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3c[3] = 0;
    local_3c[4] = 0;
    local_3c[1] = 0;
    local_3c[2] = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (this_01 == (SDockTab *)0x0) goto LAB_14270f85e;
  }
  else {
    pTVar13 = (pSVar2->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  EVar6 = SDockTab::GetVisualTabRole(this_01);
  if ((EVar6 == DocumentTab) || (EVar6 == MajorTab)) {
    if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (1 < (((this->TabWell).Object)->Tabs).Children.ArrayNum) {
      pTVar9 = GetTabs(this);
      local_48.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pTVar9->Children).ArrayNum;
      pTVar8 = (TSharedRef<SDockTab,1> *)(pTVar9->Children).AllocatorInstance.Data;
      local_40 = iVar1;
      if (iVar1 == 0) {
        local_3c[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,0,&local_48,iVar1,local_3c);
        ConstructItems<TSharedRef<SDockTab,1>,TSharedRef<SDockTab,1>,int>
                  (local_48.Data,pTVar8,iVar1);
      }
      pTVar12 = pTVar10;
      if (0 < local_40) {
        do {
          uVar11 = (uint)pTVar12;
          uVar7 = 0;
          if ((int)uVar11 < local_40) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pTVar12 = *(TReferenceControllerBase<1> **)
                     (local_48.Data + (longlong)&(pTVar10->SharedReferenceCount).field_0x0);
          this_00 = *(SDockTab **)(local_48.Data + (longlong)&pTVar10->_padding_);
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (((this_01 == (SDockTab *)0x0) || (this_01 != this_00)) &&
             (bVar4 = SDockTab::CanCloseTab(this_00), bVar4)) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar12);
            DestructItems<TSharedRef<SDockTab,1>,int>
                      ((TSharedRef<SDockTab,1> *)local_48.Data,local_40);
            if ((TSharedRef<SDockTab,1> *)local_48.Data != (TSharedRef<SDockTab,1> *)0x0) {
              FMemory::Free(local_48.Data);
            }
            bVar4 = true;
            goto LAB_14270f860;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
          pTVar10 = pTVar10 + 1;
          pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < local_40);
      }
      DestructItems<TSharedRef<SDockTab,1>,int>((TSharedRef<SDockTab,1> *)local_48.Data,local_40);
      if ((TSharedRef<SDockTab,1> *)local_48.Data != (TSharedRef<SDockTab,1> *)0x0) {
        FMemory::Free(local_48.Data);
      }
    }
  }
LAB_14270f85e:
  bVar4 = false;
LAB_14270f860:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return bVar4;
}

// CanCloseForegroundTab @ 14270f8a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::CanCloseForegroundTab(SDockingTabStack *this)

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<SDockTab,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SDockTab *this_00;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pSVar1 = (this->TabWell).Object;
  this_00 = (pSVar1->TabBeingDraggedPtr).Object;
  if (this_00 == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar5 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
      pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
      this_00 = pTVar5->Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (this_00 != (SDockTab *)0x0) goto LAB_14270f93e;
    }
  }
  else {
    pTVar6 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_14270f93e:
    bVar3 = SDockTab::CanCloseTab(this_00);
    if (bVar3) {
      bVar3 = true;
      goto LAB_14270f95b;
    }
  }
  bVar3 = false;
LAB_14270f95b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar3;
}

// CanCloseTabsInDirectionOfForegroundTab @ 14270fdf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingTabStack::CanCloseTabsInDirectionOfForegroundTab
          (SDockingTabStack *this,ECloseTabsDirection param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ETabRole EVar5;
  uint uVar6;
  TSharedRef<SDockTab,1> *pTVar7;
  SDockingTabWell *pSVar8;
  int iVar9;
  uint uVar10;
  SDockTab *pSVar12;
  longlong lVar13;
  TReferenceControllerBase<1> *pTVar14;
  ForAnyElementType local_58;
  int local_50;
  int local_4c [9];
  int iVar11;
  
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pSVar8 = (this->TabWell).Object;
  pSVar12 = (pSVar8->TabBeingDraggedPtr).Object;
  if (pSVar12 == (SDockTab *)0x0) {
    if (((pSVar8->Tabs).Children.ArrayNum < 1) || (pSVar8->ForegroundTabIndex < 0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_1427100af;
    }
    pTVar7 = TSlotlessChildren<SDockTab>::operator[](&pSVar8->Tabs,pSVar8->ForegroundTabIndex);
    pTVar14 = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar12 = pTVar7->Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4c[3] = 0;
    local_4c[4] = 0;
    local_4c[1] = 0;
    local_4c[2] = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pSVar12 == (SDockTab *)0x0) goto LAB_1427100af;
  }
  else {
    pTVar14 = (pSVar8->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  EVar5 = SDockTab::GetVisualTabRole(pSVar12);
  if ((EVar5 == DocumentTab) || (EVar5 == MajorTab)) {
    if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pSVar8 = (this->TabWell).Object;
    local_58.Data = (FScriptContainerElement *)0x0;
    iVar11 = (pSVar8->Tabs).Children.ArrayNum;
    pTVar7 = (TSharedRef<SDockTab,1> *)(pSVar8->Tabs).Children.AllocatorInstance.Data;
    local_50 = iVar11;
    if (iVar11 == 0) {
      local_4c[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar11,0,&local_58,iVar11,local_4c);
      ConstructItems<TSharedRef<SDockTab,1>,TSharedRef<SDockTab,1>,int>(local_58.Data,pTVar7,iVar11)
      ;
      pSVar8 = (this->TabWell).Object;
    }
    iVar11 = -1;
    if (param_1 == Left) {
      iVar9 = -1;
    }
    else {
      iVar9 = 1;
    }
    if ((pSVar8 == (SDockingTabWell *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pSVar8 = (this->TabWell).Object;
    if (0 < (pSVar8->Tabs).Children.ArrayNum) {
      iVar11 = pSVar8->ForegroundTabIndex;
    }
    uVar10 = iVar11 + iVar9;
    if (-1 < (int)uVar10) {
      lVar13 = (longlong)(int)uVar10 << 4;
      do {
        if (local_50 <= (int)uVar10) break;
        uVar6 = 0;
        if ((int)uVar10 < local_50) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pTVar1 = *(TReferenceControllerBase<1> **)(local_58.Data + lVar13 + 8);
        pSVar12 = *(SDockTab **)(local_58.Data + lVar13);
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar3 = SDockTab::CanCloseTab(pSVar12);
        if (bVar3) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          DestructItems<TSharedRef<SDockTab,1>,int>
                    ((TSharedRef<SDockTab,1> *)local_58.Data,local_50);
          if ((TSharedRef<SDockTab,1> *)local_58.Data != (TSharedRef<SDockTab,1> *)0x0) {
            FMemory::Free(local_58.Data);
          }
          bVar3 = true;
          goto LAB_1427100b1;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        lVar13 = lVar13 + (longlong)iVar9 * 0x10;
        uVar10 = uVar10 + iVar9;
      } while (-1 < (int)uVar10);
    }
    DestructItems<TSharedRef<SDockTab,1>,int>((TSharedRef<SDockTab,1> *)local_58.Data,local_50);
    if ((TSharedRef<SDockTab,1> *)local_58.Data != (TSharedRef<SDockTab,1> *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
LAB_1427100af:
  bVar3 = false;
LAB_1427100b1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return bVar3;
}

// CanExecuteCloseFocusedTabCommand @ 1427104f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::CanExecuteCloseFocusedTabCommand(SDockingTabStack *this)

{
  bool bVar1;
  
  bVar1 = CanExecuteCloseMinorTabCommand(this);
  if (!bVar1) {
    bVar1 = CanExecuteCloseMajorTabCommand(this);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// CanExecuteCloseMajorTabCommand @ 142710530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::CanExecuteCloseMajorTabCommand(SDockingTabStack *this)

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ETabRole EVar5;
  TSharedRef<SDockTab,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  SDockTab *this_00;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pSVar1 = (this->TabWell).Object;
  this_00 = (pSVar1->TabBeingDraggedPtr).Object;
  if (this_00 == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar6 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
      pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
      this_00 = pTVar6->Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (this_00 != (SDockTab *)0x0) goto LAB_1427105ce;
    }
  }
  else {
    pTVar7 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_1427105ce:
    FGlobalTabmanager::Get();
    EVar5 = SDockTab::GetVisualTabRole(this_00);
    if (EVar5 == MajorTab) {
      bVar3 = true;
      goto LAB_1427105f0;
    }
  }
  bVar3 = false;
LAB_1427105f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return bVar3;
}

// CanExecuteCloseMinorTabCommand @ 142710610

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::CanExecuteCloseMinorTabCommand(SDockingTabStack *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FGlobalTabmanager *pFVar2;
  SDockTab *this_00;
  SWindow *pSVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  TSharedRef<FGlobalTabmanager,1> *pTVar9;
  TSharedPtr<SWindow,1> *pTVar10;
  SWindow *pSVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedPtr<SWindow,1> local_28;
  
  (**(code **)(this->_padding_ + 0x260))(this,&local_38);
  if (local_38 != 0) {
    pTVar9 = FGlobalTabmanager::Get();
    pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar9->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar2 == (FGlobalTabmanager *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pTVar12 = (pFVar2->ActiveTabPtr).WeakReferenceCount.ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar12->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142710693;
        }
        LOCK();
        aVar8 = pTVar12->SharedReferenceCount;
        bVar6 = aVar5 == aVar8;
        if (bVar6) {
          pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar8 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar8;
      } while (!bVar6);
      this_00 = (pFVar2->ActiveTabPtr).Object;
      if (this_00 != (SDockTab *)0x0) {
        if ((local_38 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if (((*(longlong *)(local_38 + 0x300) == 0) || (*(longlong *)(local_38 + 0x308) == 0)) ||
           (*(int *)(*(longlong *)(local_38 + 0x308) + 8) < 1)) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          pSVar11 = (SWindow *)0x0;
        }
        else {
          pSVar11 = (SWindow *)0x0;
          pTVar13 = *(TReferenceControllerBase<1> **)(local_38 + 0x308);
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            aVar5 = pTVar13->SharedReferenceCount;
            do {
              if (aVar5 == (atomic<int>)0x0) {
                pTVar13 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_142710765;
              }
              LOCK();
              aVar8 = pTVar13->SharedReferenceCount;
              bVar6 = aVar5 == aVar8;
              if (bVar6) {
                pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
                aVar8 = aVar5;
              }
              UNLOCK();
              aVar5 = aVar8;
            } while (!bVar6);
            pSVar11 = *(SWindow **)(local_38 + 0x300);
          }
        }
LAB_142710765:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pTVar10 = SDockTab::GetParentWindow(this_00,&local_28);
        pSVar3 = pTVar10->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        if (pSVar3 == pSVar11) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          return true;
        }
      }
    }
LAB_142710693:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return false;
}

// CanHideTabWell @ 1427107d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::CanHideTabWell(SDockingTabStack *this)

{
  FGlobalTabmanager *pFVar1;
  SDockTab *pSVar2;
  code *pcVar3;
  bool bVar4;
  atomic<int> aVar5;
  undefined1 uVar6;
  bool bVar7;
  ETabRole EVar8;
  atomic<int> aVar9;
  int iVar10;
  undefined8 *puVar11;
  TSharedRef<FGlobalTabmanager,1> *pTVar12;
  longlong *plVar13;
  longlong lVar14;
  TReferenceControllerBase<1> **ppTVar15;
  TSlotlessChildren<SDockTab> *this_00;
  TSharedRef<SDockTab,1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  bool bVar22;
  bool bVar23;
  uint uStackX_c;
  TReferenceControllerBase<1> *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedRef<SDockTab,1> *local_68;
  int local_60;
  TSharedRef<SDockTab,1> *local_58;
  int local_50;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TReferenceControllerBase<1> *local_30;
  
  pTVar19 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  pTVar18 = pTVar21;
  pTVar17 = pTVar19;
  pTVar20 = pTVar21;
  if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
LAB_142710825:
    bVar22 = false;
    pTVar19 = pTVar17;
  }
  else {
    aVar5 = pTVar19->SharedReferenceCount;
    do {
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      pTVar17 = pTVar21;
      pTVar20 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142710825;
      LOCK();
      aVar9 = pTVar19->SharedReferenceCount;
      bVar22 = aVar5 == aVar9;
      if (bVar22) {
        pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar9 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar9;
    } while (!bVar22);
    pTVar20 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar17 = pTVar19;
    if (pTVar20 == (TReferenceControllerBase<1> *)0x0) goto LAB_142710825;
    lVar14 = (**(code **)(pTVar20->_padding_ + 0x268))(pTVar20,&local_68);
    pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000001;
    if (*(int *)(lVar14 + 8) == 0) goto LAB_142710825;
    bVar22 = true;
  }
  if ((pTVar18 != (TReferenceControllerBase<1> *)0x0) &&
     (DestructItems<TSharedRef<SDockTab,1>,int>(local_68,local_60),
     local_68 != (TSharedRef<SDockTab,1> *)0x0)) {
    FMemory::Free(local_68);
  }
  if (!bVar22) {
    bVar22 = false;
    goto LAB_142710b49;
  }
  if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar22)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  puVar11 = (undefined8 *)(**(code **)(pTVar20->_padding_ + 0x268))(pTVar20,&local_58);
  if ((*(int *)(puVar11 + 1) < 1) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  plVar13 = (longlong *)*puVar11;
  pTVar12 = FGlobalTabmanager::Get();
  pFVar1 = pTVar12->Object;
  pTVar18 = (pFVar1->ActiveTabPtr).WeakReferenceCount.ReferenceController;
  pTVar17 = pTVar18;
  if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
LAB_142710915:
    bVar22 = false;
    pTVar18 = pTVar17;
  }
  else {
    aVar5 = pTVar18->SharedReferenceCount;
    do {
      pTVar17 = pTVar21;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142710915;
      LOCK();
      aVar9 = pTVar18->SharedReferenceCount;
      bVar22 = aVar5 == aVar9;
      if (bVar22) {
        pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar9 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar9;
    } while (!bVar22);
    pSVar2 = (pFVar1->ActiveTabPtr).Object;
    pTVar17 = pTVar18;
    if ((pSVar2 == (SDockTab *)0x0) || (pSVar2 != (SDockTab *)*plVar13)) goto LAB_142710915;
    bVar22 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  DestructItems<TSharedRef<SDockTab,1>,int>(local_58,local_50);
  if (local_58 != (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_58);
  }
  if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  plVar13 = (longlong *)(**(code **)(pTVar20->_padding_ + 0x260))(pTVar20);
  if ((*plVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  lVar14 = *plVar13;
  if (((*(longlong *)(lVar14 + 0x300) == 0) || (*(longlong *)(lVar14 + 0x308) == 0)) ||
     (*(int *)(*(longlong *)(lVar14 + 0x308) + 8) < 1)) {
    bVar4 = false;
    bVar7 = true;
    local_40 = (TReferenceControllerBase<1> *)0x0;
    ppTVar15 = &local_48;
    pTVar21 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_70 = *(TReferenceControllerBase<1> **)(lVar14 + 0x308);
    bVar4 = true;
    bVar7 = false;
    local_78 = (TReferenceControllerBase<1> *)0x0;
    if (local_70 == (TReferenceControllerBase<1> *)0x0) {
LAB_142710a08:
      ppTVar15 = &local_78;
    }
    else {
      aVar5 = local_70->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          local_70 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142710a08;
        }
        LOCK();
        aVar9 = local_70->SharedReferenceCount;
        bVar23 = aVar5 == aVar9;
        if (bVar23) {
          local_70->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar9 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar9;
      } while (!bVar23);
      pTVar21 = *(TReferenceControllerBase<1> **)(lVar14 + 0x300);
      ppTVar15 = &local_78;
      local_78 = pTVar21;
    }
  }
  pTVar20 = ppTVar15[1];
  ppTVar15[1] = (TReferenceControllerBase<1> *)0x0;
  *ppTVar15 = (TReferenceControllerBase<1> *)0x0;
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  bVar7 = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  iVar10 = (**(code **)(this->_padding_ + 0x270))(this);
  if (iVar10 == 1) {
    FGlobalTabmanager::Get();
    this_00 = GetTabs(this);
    pTVar16 = TSlotlessChildren<SDockTab>::operator[](this_00,0);
    pTVar20 = (pTVar16->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar16->Object;
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    if (((pSVar2 != (SDockTab *)0x0) &&
        (EVar8 = SDockTab::GetVisualTabRole(pSVar2), EVar8 == MajorTab)) ||
       ((bVar22 && (pTVar21 != (TReferenceControllerBase<1> *)0x0)))) goto LAB_142710b2c;
    bVar22 = true;
  }
  else {
    pTVar20 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142710b2c:
    bVar22 = false;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  }
LAB_142710b49:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  return bVar22;
}

// CanMoveForegroundTabToSidebar @ 142710ed0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::CanMoveForegroundTabToSidebar(SDockingTabStack *this)

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<SDockTab,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<SDockTab,1> local_38;
  undefined8 local_28;
  undefined8 local_20;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pSVar1 = (this->TabWell).Object;
  local_38.Object = (pSVar1->TabBeingDraggedPtr).Object;
  if (local_38.Object == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
LAB_142710ffb:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return false;
    }
    pTVar5 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
    pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
    local_38.Object = pTVar5->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_20 = 0;
    local_28 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_38.Object == (SDockTab *)0x0) goto LAB_142710ffb;
LAB_142710f95:
    local_38.SharedReferenceCount.ReferenceController = pTVar6;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) goto LAB_142710fd3;
  }
  else {
    pTVar6 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) goto LAB_142710f95;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  LOCK();
  pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
  UNLOCK();
  local_38.SharedReferenceCount.ReferenceController = pTVar6;
  if ((local_38.Object == (SDockTab *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_142710fd3:
  bVar3 = CanMoveTabToSideBar(this,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar3;
}

// CanMoveTabToSideBar @ 142711020

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingTabStack::CanMoveTabToSideBar(SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1)

{
  code *pcVar1;
  ETabRole EVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  FTabId local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  SDockTab::GetLayoutIdentifier(param_1->Object,&local_28);
  bVar3 = false;
  if (local_28.InstanceId == -1) {
    EVar2 = SDockTab::GetVisualTabRole(param_1->Object);
    bVar3 = false;
    if (EVar2 != MajorTab) {
      plVar6 = (longlong *)(**(code **)(this->_padding_ + 600))(this,local_18);
      if (*plVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      bVar3 = true;
      iVar5 = (**(code **)(*(longlong *)*plVar6 + 0x270))();
      if (1 < iVar5) {
        bVar7 = true;
        goto LAB_1427110b8;
      }
    }
  }
  bVar7 = false;
LAB_1427110b8:
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar7;
}

// CleanUpNodes @ 142712b80

/* WARNING: Enum "Type": Some values do not have unique names */

ECleanupRetVal __thiscall SDockingTabStack::CleanUpNodes(SDockingTabStack *this)

{
  code *pcVar1;
  bool bVar2;
  ECleanupRetVal EVar3;
  TAttribute<EVisibility> local_28;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  if (0 < (((this->TabWell).Object)->Tabs).Children.ArrayNum) {
    return VisibleTabsUnderNode;
  }
  if (0 < (this->Tabs).ArrayNum) {
    local_28.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_28);
    return HistoryTabsUnderNode;
  }
  return NoTabsUnderNode;
}

// ClearReservedSpace @ 142712db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::ClearReservedSpace(SDockingTabStack *this)

{
  undefined1 *this_00;
  FSlot *pFVar1;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->bShowingTitleBarArea = false;
  local_40[0x10] = true;
  this_00 = &this->TitleBarSlot->field_0x28;
  local_18 = 0;
  local_40._0_4_ = 0.0;
  local_40._4_4_ = 0.0;
  local_40._8_4_ = 0.0;
  local_40._12_4_ = 0.0;
  pFVar1 = this->TitleBarSlot;
  if (this_00 == (undefined1 *)0x0) {
    pFVar1 = (FSlot *)0x0;
  }
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
            *)this_00,(ISlateAttributeContainer *)&pFVar1->field_0x20,
           (TAttribute<FMargin> *)local_40,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// CloseAllButForegroundTab @ 1427136a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::CloseAllButForegroundTab(SDockingTabStack *this,ETabsToClose param_1)

{
  SDockingTabWell *pSVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ETabRole EVar5;
  uint uVar6;
  TSharedRef<SDockTab,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  SDockTab *pSVar12;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar1 = (this->TabWell).Object;
  pSVar12 = (pSVar1->TabBeingDraggedPtr).Object;
  pTVar11 = pTVar10;
  if (pSVar12 == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar8 = pTVar10;
      goto LAB_1427138e9;
    }
    pTVar7 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
    pTVar8 = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar12 = pTVar7->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pSVar12 == (SDockTab *)0x0) goto LAB_1427138e9;
  }
  else {
    pTVar8 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  while( true ) {
    if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar1 = (this->TabWell).Object;
    if ((pSVar1->Tabs).Children.ArrayNum < 2) break;
    if ((pSVar1 == (SDockingTabWell *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar1 = (this->TabWell).Object;
    uVar9 = (uint)pTVar10;
    if ((pSVar1->Tabs).Children.ArrayNum <= (int)uVar9) break;
    if ((pSVar1 == (SDockingTabWell *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar1 = (this->TabWell).Object;
    uVar6 = 0;
    if ((int)uVar9 < (pSVar1->Tabs).Children.ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (pSVar1->Tabs).Children.AllocatorInstance.Data;
    EVar5 = SDockTab::GetVisualTabRole
                      (*(SDockTab **)((longlong)&pTVar11->_padding_ + (longlong)pFVar2));
    if (param_1 == CloseAllTabs) {
LAB_1427138b1:
      bVar4 = true;
    }
    else {
      if (param_1 == CloseDocumentTabs) {
        bVar4 = EVar5 == DocumentTab;
LAB_1427138ab:
        if (bVar4) goto LAB_1427138b1;
      }
      else if (param_1 == CloseDocumentAndMajorTabs) {
        if (EVar5 == DocumentTab) goto LAB_1427138b1;
        bVar4 = EVar5 == MajorTab;
        goto LAB_1427138ab;
      }
      bVar4 = false;
    }
    if ((((pSVar12 != (SDockTab *)0x0) &&
         (pSVar12 == *(SDockTab **)((longlong)&pTVar11->_padding_ + (longlong)pFVar2))) || (!bVar4))
       || (bVar4 = SDockTab::RequestCloseTab
                             (*(SDockTab **)((longlong)&pTVar11->_padding_ + (longlong)pFVar2)),
          !bVar4)) {
      pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)(uVar9 + 1);
      pTVar11 = pTVar11 + 1;
    }
  }
LAB_1427138e9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// CloseForegroundTab @ 142713cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::CloseForegroundTab(SDockingTabStack *this)

{
  SDockingTabWell *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SDockTab,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SDockTab *this_00;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (this->TabWell).Object;
  this_00 = (pSVar1->TabBeingDraggedPtr).Object;
  if (this_00 != (SDockTab *)0x0) {
    pTVar2 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SDockTab::RequestCloseTab(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return;
    }
LAB_142713d66:
    SDockTab::RequestCloseTab(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    return;
  }
  if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar5 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
    pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
    this_00 = pTVar5->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (this_00 != (SDockTab *)0x0) goto LAB_142713d66;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// ClosePersistentTab @ 142714590

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SDockingTabStack::ClosePersistentTab(SDockingTabStack *this,FTabId *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  
  uVar3 = param_1->InstanceId;
  pFVar1 = (FName *)(this->Tabs).AllocatorInstance.Data;
  iVar6 = (this->Tabs).ArrayNum;
  pFVar8 = pFVar1;
  while( true ) {
    if (pFVar8 == pFVar1 + (longlong)iVar6 * 4) {
      return -1;
    }
    if ((((pFVar8[2].ComparisonIndex.Value & 5) != 0) && (*pFVar8 == param_1->TabType)) &&
       ((uVar3 == 0xffffffff || (uVar3 == pFVar8[1].ComparisonIndex.Value)))) break;
    pFVar8 = pFVar8 + 4;
  }
  uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar1 >> 5);
  if (uVar7 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar7 < iVar6) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    *(undefined4 *)((this->Tabs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 0x10) = 2;
  }
  return uVar7;
}

// CloseTabsInDirectionFromForegroundTab @ 142714680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::CloseTabsInDirectionFromForegroundTab
          (SDockingTabStack *this,ETabsToClose param_1,ECloseTabsDirection param_2)

{
  SDockingTabWell *pSVar1;
  SDockTab *pSVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ETabRole EVar6;
  uint uVar7;
  TSharedRef<SDockTab,1> *pTVar8;
  int iVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  int iVar12;
  longlong lVar13;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar1 = (this->TabWell).Object;
  if ((pSVar1->TabBeingDraggedPtr).Object == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_1427148f1;
    }
    pTVar8 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
    pTVar11 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar8->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pSVar2 == (SDockTab *)0x0) goto LAB_1427148f1;
  }
  else {
    pTVar11 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar1 = (this->TabWell).Object;
  iVar12 = -1;
  if ((pSVar1->Tabs).Children.ArrayNum < 1) {
    iVar9 = -1;
  }
  else {
    iVar9 = pSVar1->ForegroundTabIndex;
  }
  if (param_2 != Left) {
    iVar12 = 1;
  }
  uVar10 = iVar12 + iVar9;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10 << 4;
    do {
      if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar1 = (this->TabWell).Object;
      if ((pSVar1->Tabs).Children.ArrayNum <= (int)uVar10) break;
      if ((pSVar1 == (SDockingTabWell *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar1 = (this->TabWell).Object;
      uVar7 = 0;
      if ((int)uVar10 < (pSVar1->Tabs).Children.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pSVar1->Tabs).Children.AllocatorInstance.Data;
      EVar6 = SDockTab::GetVisualTabRole(*(SDockTab **)(pFVar3 + lVar13));
      if (param_1 == CloseAllTabs) {
LAB_1427148bf:
        bVar5 = SDockTab::RequestCloseTab(*(SDockTab **)(pFVar3 + lVar13));
        if ((!bVar5) || (param_2 == Left)) goto LAB_1427148d6;
      }
      else {
        if (param_1 == CloseDocumentTabs) {
          if (EVar6 == DocumentTab) goto LAB_1427148bf;
        }
        else if ((param_1 == CloseDocumentAndMajorTabs) &&
                ((EVar6 == DocumentTab || (EVar6 == MajorTab)))) goto LAB_1427148bf;
LAB_1427148d6:
        uVar10 = uVar10 + iVar12;
        lVar13 = lVar13 + (longlong)iVar12 * 0x10;
      }
    } while (-1 < (int)uVar10);
  }
LAB_1427148f1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// Construct @ 1427188f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014271a3ed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::Construct
          (SDockingTabStack *this,FArguments *param_1,TSharedRef<FTabManager::FStack,1> *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FTab *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  SDockingTabStack *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  SWidget *pSVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  double dVar16;
  FCurveSequence *pFVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  FArguments *pFVar20;
  FSlot *pFVar21;
  FSizeParam *pFVar22;
  FSlotArguments *pFVar23;
  FArguments *pFVar24;
  FSlot *pFVar25;
  FSlotArguments *pFVar26;
  FArguments *pFVar27;
  TSharedRef<SSpacer,1> *pTVar28;
  FArguments *pFVar29;
  TSharedRef<SWidget,1> *pTVar30;
  TSharedRef<SDockingTabWell,1> *pTVar31;
  TSharedRef<SVerticalBox,1> *pTVar32;
  TSharedRef<SHorizontalBox,1> *pTVar33;
  FArguments *pFVar34;
  TSharedRef<SOverlay,1> *pTVar35;
  FSlot *this_00;
  FArguments *pFVar36;
  undefined8 *puVar37;
  ulong64 uVar38;
  FSlotArguments *pFVar39;
  FArguments *pFVar40;
  TSharedRef<SImage,1> *pTVar41;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar42;
  TSharedRef<SBorder,1> *pTVar43;
  TSharedRef<SWidget_const_,1> *pTVar44;
  FArguments *pFVar45;
  FText *pFVar46;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<STextBlock,1> *pTVar47;
  FSlotArguments *pFVar48;
  FArguments *pFVar49;
  TAttribute<FMargin> *pTVar50;
  TAttribute<FText> *pTVar51;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *this_02;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SButton,1> *pTVar52;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *pTVar53;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_04;
  FDockingStackOptionalContent *pFVar54;
  TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *pTVar55;
  FSlotArguments *pFVar56;
  FSlotArguments *pFVar57;
  TReferenceControllerBase<1> *pTVar58;
  SWidget *pSVar59;
  FSharedReferencer<1> FVar60;
  SWidget *local_res8;
  FArguments *local_res10;
  FArguments *local_res18;
  FArguments *local_res20;
  T0RequiredArgs local_3b48;
  T0RequiredArgs local_3b47;
  T0RequiredArgs local_3b46;
  T0RequiredArgs local_3b45;
  T0RequiredArgs local_3b44;
  T0RequiredArgs local_3b43;
  T0RequiredArgs local_3b42;
  T0RequiredArgs local_3b41;
  T0RequiredArgs local_3b40;
  T0RequiredArgs local_3b3f [7];
  TSharedRef<SWidget,1> local_3b38;
  SVerticalBox *local_3b28;
  TReferenceControllerBase<1> *pTStack_3b20;
  TSharedRef<SWidget,1> local_3b18;
  STextBlock *local_3b08;
  undefined8 uStack_3b00;
  FLLMScope local_3af8;
  FLLMScope local_3af4;
  FLLMScope local_3af0;
  FLLMScope local_3aec;
  FLLMScope local_3ae8;
  FLLMScope local_3ae4;
  FLLMScope local_3ae0 [2];
  code *local_3ad8;
  FSharedReferencer<1> FStack_3ad0;
  uchar local_3ac8;
  undefined1 local_3ac7;
  undefined1 local_3ac0 [8];
  ForAnyElementType FStack_3ab8;
  ulonglong local_3ab0;
  uchar local_3aa8;
  undefined1 local_3aa7;
  undefined1 local_3aa0 [8];
  ForAnyElementType FStack_3a98;
  ulonglong local_3a90;
  SDockingTabStack *local_3a88;
  FSharedReferencer<1> local_3a80;
  bool local_3a78;
  undefined1 local_3a70 [8];
  ForAnyElementType FStack_3a68;
  ulonglong local_3a60;
  float local_3a58 [2];
  FMemScope local_3a50;
  FName local_3a48;
  FMemScope local_3a40;
  FName local_3a38;
  FButtonStyle *local_3a30;
  SVerticalBox *local_3a28;
  FSharedReferencer<1> local_3a20;
  SHorizontalBox *local_3a18;
  FSharedReferencer<1> local_3a10;
  SOverlay *local_3a08;
  FSharedReferencer<1> local_3a00;
  TSharedPtr<SDockingTabStack,1> local_39f8;
  TSharedRef<SWidget,1> local_39e8;
  TSharedRef<SWidget,1> local_39d8;
  double local_39c8;
  double dStack_39c0;
  undefined1 local_39b8;
  undefined1 local_39b0 [8];
  ForAnyElementType FStack_39a8;
  ulonglong local_39a0;
  undefined8 local_3998;
  FSharedReferencer<1> local_3990;
  FSlotArguments *local_3988;
  FMemScope local_3980;
  FName local_3978;
  FMemScope local_3970;
  FName local_3968;
  FMemScope local_3960;
  TReferenceControllerBase<1> *local_3958;
  FSlot *local_3950;
  FSlot *local_3948;
  FSlot *local_3940;
  FSlotArguments *local_3938;
  FMemScope local_3930;
  undefined4 local_3928 [2];
  undefined4 local_3920 [2];
  undefined4 local_3918 [2];
  undefined4 local_3910 [2];
  FSlotArguments *local_3908;
  FName local_3900;
  FSlotArguments *local_38f8;
  FArguments *local_38f0;
  FSlotArguments *local_38e8;
  FSlotArguments *local_38e0;
  FName local_38d8;
  FName local_38d0;
  FArguments *local_38c8;
  FMemScope local_38c0;
  FSlot *local_38b8;
  TAttribute<EVisibility> local_38b0;
  TAttribute<float> local_3890;
  TAttribute<float> local_3870;
  TAttribute<EVisibility> local_3850;
  TSlateDecl<SDockingTabWell,RequiredArgs::T0RequiredArgs> local_3830;
  undefined8 local_3818;
  undefined8 uStack_3810;
  undefined1 local_3808;
  undefined1 local_3800 [8];
  void *pvStack_37f8;
  undefined8 local_37f0;
  TSharedRef<SWidget,1> local_37e8;
  TSharedRef<SWidget,1> local_37d8;
  TSharedRef<SWidget,1> local_37c8;
  TSharedRef<SWidget,1> local_37b8;
  TSharedRef<SWidget,1> local_37a8;
  FDestructionSentinel local_3798;
  FDestructionSentinel local_3780;
  FDestructionSentinel local_3768;
  FDestructionSentinel local_3750;
  FDestructionSentinel local_3738;
  undefined1 *local_3720;
  FDestructionSentinel local_3718;
  undefined1 *local_3700;
  FDestructionSentinel local_36f8;
  longlong *local_36e0;
  TAttribute<FText> local_36d8;
  TVector2<double>_u_0 local_36a8;
  undefined1 local_3698;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> local_3690;
  code *local_3678;
  TReferenceControllerBase<1> *pTStack_3670;
  TSharedRef<SVerticalBox,1> local_3668;
  TSharedRef<SOverlay,1> local_3658;
  TSharedRef<SButton,1> local_3648;
  TSharedRef<SSpacer,1> local_3638;
  FText local_3628;
  TSharedRef<SBorder,1> local_3618;
  TSharedRef<STextBlock,1> local_3608;
  FText local_35f8;
  TSharedRef<SBorder,1> local_35e8;
  TSharedRef<SVerticalBox,1> local_35d8;
  TSharedRef<SImage,1> local_35c8;
  TSharedRef<SWidget_const_,1> local_35b8;
  TSharedRef<SWidget_const_,1> local_35a8;
  TSharedRef<SWidget,1> local_3598;
  code *local_3588;
  TReferenceControllerBase<1> *pTStack_3580;
  STextBlock *local_3578;
  TReferenceControllerBase<1> *pTStack_3570;
  code *local_3568;
  TReferenceControllerBase<1> *pTStack_3560;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_3558;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3540;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3528;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_3510;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_34f8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_34e0;
  code *local_34c8;
  TReferenceControllerBase<1> *pTStack_34c0;
  code *local_34b8;
  longlong lStack_34b0;
  TSharedRef<SWidget,1> local_34a8;
  FName local_3498 [2];
  code *local_3488;
  longlong lStack_3480;
  code *local_3478;
  longlong lStack_3470;
  code *local_3468;
  longlong lStack_3460;
  code *local_3458;
  longlong lStack_3450;
  SDockingTabWell *local_3448;
  TReferenceControllerBase<1> *pTStack_3440;
  TSharedRef<SSpacer,1> local_3438;
  TSharedRef<SDockingTabWell,1> local_3428;
  TSharedRef<SVerticalBox,1> local_3418;
  TSharedRef<SOverlay,1> local_3408;
  TSharedRef<SHorizontalBox,1> local_33f8;
  undefined1 local_33e8 [16];
  undefined1 local_33d8 [32];
  undefined1 local_33b8 [24];
  undefined1 local_33a0 [16];
  undefined1 local_3390 [32];
  undefined1 local_3370 [24];
  undefined1 local_3358 [16];
  undefined1 local_3348 [32];
  undefined1 local_3328 [24];
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> local_3310;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_32f0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_32d8;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_32c0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_32a8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_3290;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3278;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3260;
  undefined1 local_3248 [56];
  void *local_3210;
  undefined8 *local_31e8;
  SDockingTabWell *local_31e0;
  FSharedReferencer<1> local_31d8 [4];
  undefined1 local_31b8 [40];
  FSlotArgumentsMixin local_3190;
  undefined8 *local_3100;
  SSpacer *local_30f8;
  FSharedReferencer<1> local_30f0 [4];
  undefined1 local_30d0 [40];
  FSlotArgumentsMixin local_30a8;
  FSlot *local_3018 [2];
  TReferenceControllerBase<1> *local_3008;
  undefined1 local_2fe8 [40];
  FSlotArgumentsMixin local_2fc0;
  FDockingStackOptionalContent local_2f30;
  undefined8 *local_2f00 [2];
  TReferenceControllerBase<1> *local_2ef0;
  undefined1 local_2ed0 [40];
  FSlotArgumentsMixin local_2ea8;
  undefined8 *local_2e18 [2];
  TReferenceControllerBase<1> *local_2e08;
  undefined1 local_2de8 [40];
  FSlotArgumentsMixin local_2dc0;
  TAttribute<FMargin> local_2d30;
  TAttribute<FText> local_2d00;
  FSlotArguments local_2cd0;
  FSlotArguments local_2c70;
  FCurveSequence local_2c10;
  FSlot *local_2ba0 [29];
  FSlotArguments local_2ab8;
  FSlotArguments local_29d0;
  FArguments local_28e8;
  FArguments local_26e0;
  FArguments local_24d8;
  undefined1 local_22d0 [528];
  undefined1 local_20c0 [24];
  FSlotArguments local_20a8;
  FArguments local_1fc0;
  FArguments local_1d98;
  FArguments local_1b90;
  FArguments local_1988;
  FArguments local_1780;
  FArguments local_1558;
  FArguments local_12b0;
  FArguments local_ed0;
  FArguments local_af0;
  FArguments local_5b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14271890f;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  local_res8 = (SWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  BindTabCommands(this);
  pTVar4 = &this->Tabs;
  pTVar55 = &param_2->Object->Tabs;
  if (pTVar4 != pTVar55) {
    iVar5 = (param_2->Object->Tabs).ArrayNum;
    piVar1 = &(this->Tabs).ArrayMax;
    pFVar6 = (FTab *)(pTVar55->AllocatorInstance).Data;
    (this->Tabs).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,iVar5,*piVar1,&pTVar4->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FTabManager::FTab,FTabManager::FTab,int>
                ((pTVar4->AllocatorInstance).Data,pFVar6,iVar5);
    }
  }
  pFVar26 = (FSlotArguments *)0x0;
  *(int *)&this->_padding_ = (int)param_2->Object->_padding_;
  (**(code **)(this->_padding_ + 0x2a0))(this);
  fVar15 = __real_3e19999a;
  this->bShowingTitleBarArea = false;
  this->bIsDocumentArea = param_1->_IsDocumentArea;
  this->InlineContentAreaLeft = (FSlot *)0x0;
  this->InlineContentAreaRight = (FSlot *)0x0;
  this->TitleBarSlot = (FSlot *)0x0;
  pFVar17 = FCurveSequence::FCurveSequence(&local_2c10,0.0,fVar15,Linear);
  FCurveSequence::operator=(&this->ShowHideTabWell,pFVar17);
  FCurveSequence::~FCurveSequence(&local_2c10);
  if (param_2->Object->bHideTabWell == false) {
    FCurveSequence::JumpToEnd(&this->ShowHideTabWell);
  }
  else {
    FCurveSequence::JumpToStart(&this->ShowHideTabWell);
  }
  pIVar18 = FAppStyle::Get();
  pFVar19 = ::FName::FName(local_3498,"Docking.UnhideTabwellButton");
  local_3a30 = (FButtonStyle *)
               (**(code **)((longlong)*pIVar18 + 0xa0))(pIVar18,FButtonStyle::TypeName,*pFVar19,0,1)
  ;
  if (local_3a30 == (FButtonStyle *)0x0) {
    local_3a30 = FButtonStyle::GetDefault();
  }
  local_38c8 = SOverlay::FArguments::FArguments(&local_24d8);
  local_3938 = SOverlay::Slot((FSlotArguments *)local_3248,0);
  pFVar20 = SHorizontalBox::FArguments::FArguments(&local_26e0);
  local_3aa8 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_3aa7 = 1;
  local_3a90 = 0;
  local_3aa0 = (undefined1  [8])0x0;
  FStack_3a98.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar20->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar20->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar20->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3aa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3aa0,
             (FWriteAccessScope *)&local_3768);
  if (((int)local_3a90 != 0) && (FStack_3a98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a98,0,0,0x10);
    local_3a90 = local_3a90 & 0xffffffff00000000;
  }
  if (local_3768.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3768.Accessor,&local_3768);
  }
  if (FStack_3a98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3aa0);
  pFVar21 = ::operator_new(0x58);
  local_3988 = pFVar26;
  if (pFVar21 != (FSlot *)0x0) {
    *(undefined8 *)pFVar21 = 0;
    *(undefined8 *)&pFVar21->field_0x8 = 0;
    *(undefined8 *)&pFVar21->field_0x10 = 0;
    *(undefined8 *)&pFVar21->field_0x18 = 0;
    *(undefined8 *)&pFVar21->field_0x20 = 0;
    *(undefined8 *)&pFVar21->field_0x28 = 0;
    *(undefined8 *)&pFVar21->field_0x30 = 0;
    *(undefined8 *)&pFVar21->field_0x38 = 0;
    *(undefined8 *)&pFVar21->field_0x40 = 0;
    *(undefined8 *)&pFVar21->field_0x48 = 0;
    *(undefined8 *)&pFVar21->field_0x50 = 0;
    local_3988 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar21);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_3018,(FSlot *)&local_3988);
  pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_33e8);
  TOptional<FSizeParam>::operator=(&local_2fc0._SizeParam,pFVar22);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_33b8);
  if ((void *)local_33b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_33b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_33b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_33d8);
  if ((void *)local_33d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_33d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_33d8);
  this->InlineContentAreaLeft = local_3018[0];
  local_38f0 = SHorizontalBox::FArguments::operator+(pFVar20,(FSlotArguments *)local_3018);
  pFVar21 = ::operator_new(0x58);
  local_3908 = pFVar26;
  if (pFVar21 != (FSlot *)0x0) {
    *(undefined8 *)pFVar21 = 0;
    *(undefined8 *)&pFVar21->field_0x8 = 0;
    *(undefined8 *)&pFVar21->field_0x10 = 0;
    *(undefined8 *)&pFVar21->field_0x18 = 0;
    *(undefined8 *)&pFVar21->field_0x20 = 0;
    *(undefined8 *)&pFVar21->field_0x28 = 0;
    *(undefined8 *)&pFVar21->field_0x30 = 0;
    *(undefined8 *)&pFVar21->field_0x38 = 0;
    *(undefined8 *)&pFVar21->field_0x40 = 0;
    *(undefined8 *)&pFVar21->field_0x48 = 0;
    *(undefined8 *)&pFVar21->field_0x50 = 0;
    local_3908 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar21);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_2e18,(FSlot *)&local_3908);
  local_3890.Value = 1.0;
  local_3890.Getter._16_8_ = 0;
  local_3890.bIsSet = true;
  local_3890.Getter._0_8_ = 0;
  local_3890.Getter._8_8_ = 0;
  pFVar23 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_2e18,&local_3890);
  if (local_3928 != (undefined4 *)&pFVar23->field_0x50) {
    *(undefined4 *)&pFVar23->field_0x50 = 3;
    pFVar23->field_0x54 = 1;
  }
  pFVar56 = pFVar26;
  if (pFVar23 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar56 = pFVar23;
  }
  local_38e0 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar56->field_0x18,0.0,0.0,0.0,0.0);
  pFVar24 = SVerticalBox::FArguments::FArguments(&local_28e8);
  local_3ac8 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_3ac7 = 1;
  local_3ab0 = 0;
  local_3ac0 = (undefined1  [8])0x0;
  FStack_3ab8.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar24->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar24->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar24->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3ac0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3ac0,
             (FWriteAccessScope *)&local_3750);
  if (((int)local_3ab0 != 0) && (FStack_3ab8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3ab8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3ab8,0,0,0x10);
    local_3ab0 = local_3ab0 & 0xffffffff00000000;
  }
  if (local_3750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3750.Accessor,&local_3750);
  }
  if (FStack_3ab8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3ab8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3ac0);
  pFVar25 = ::operator_new(0x58);
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    pFVar26 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar25);
  }
  local_38e8 = pFVar26;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_3100,(FSlot *)&local_38e8);
  pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_33a0);
  TOptional<FSizeParam>::operator=(&local_30a8._SizeParam,pFVar22);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3370);
  if ((void *)local_3370._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3370._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3370);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3390);
  if ((void *)local_3390._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3390._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3390);
  pFVar27 = SSpacer::FArguments::FArguments((FArguments *)local_22d0);
  uStack_3b00 = (TReferenceControllerBase<1> *)((ulonglong)uStack_3b00._4_4_ << 0x20);
  local_3b08 = (STextBlock *)GetMaximizeSpacerVisibility;
  local_3458 = GetMaximizeSpacerVisibility;
  lStack_3450 = (longlong)uStack_3b00;
  TAttribute<EVisibility>::Bind<SDockingTabStack>
            ((TAttribute<EVisibility> *)&pFVar27->_padding_,this,(pmf_395bb40a *)&local_3458);
  dVar16 = _UNK_15076bd28;
  local_39b8 = 1;
  local_39a0 = 0;
  local_39c8 = ___xmm_40240000000000000000000000000000;
  dStack_39c0 = _UNK_15076bd28;
  local_39b0 = (undefined1  [8])0x0;
  FStack_39a8.Data = (FScriptContainerElement *)0x0;
  (pFVar27->_Size).Value.field0_0x0._s_0.X = ___xmm_40240000000000000000000000000000;
  (pFVar27->_Size).Value.field0_0x0._s_0.Y = dVar16;
  (pFVar27->_Size).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Size).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_39b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_39b0,
             (FWriteAccessScope *)&local_3780);
  if (((int)local_39a0 != 0) && (FStack_39a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_39a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_39a8,0,0,0x10);
    local_39a0 = local_39a0 & 0xffffffff00000000;
  }
  if (local_3780.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3780.Accessor,&local_3780);
  }
  if (FStack_39a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_39a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_39b0);
  FLLMScope::FLLMScope(&local_3af8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_38d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_38c0,&local_38d8,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_3510,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
             ,0x74,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_38c0);
  FLLMScope::~FLLMScope(&local_3af8);
  pTVar28 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3510,&local_3438,pFVar27);
  local_30f8 = pTVar28->Object;
  local_3990.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
  if (local_3990.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3990.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3990.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3990.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3990.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3998 = 0;
  local_3958 = local_3990.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_30f0,&local_3990);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3990.ReferenceController);
  pFVar24 = SVerticalBox::FArguments::operator+(pFVar24,(FSlotArguments *)&local_3100);
  pFVar25 = ::operator_new(0x58);
  local_38b8 = (FSlot *)0x0;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_38b8 = SVerticalBox::FSlot::FSlot(pFVar25);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_31e8,(FSlot *)&local_38b8);
  pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3358);
  TOptional<FSizeParam>::operator=(&local_3190._SizeParam,pFVar22);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3328);
  if ((void *)local_3328._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3328._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3328);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3348);
  if ((void *)local_3348._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3348._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3348);
  pFVar29 = SDockingTabWell::FArguments::FArguments(&local_1fc0);
  pTVar30 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3b38);
  pTVar7 = (pTVar30->SharedReferenceCount).ReferenceController;
  pSVar8 = (SDockingTabStack *)pTVar30->Object;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_3b38.SharedReferenceCount.ReferenceController._4_4_,
                        local_3b38.SharedReferenceCount.ReferenceController._0_4_));
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_3b38.SharedReferenceCount.ReferenceController._4_4_,
                        local_3b38.SharedReferenceCount.ReferenceController._0_4_));
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a60 = 0;
  local_3a78 = true;
  local_3a70 = (undefined1  [8])0x0;
  FStack_3a68.Data = (FScriptContainerElement *)0x0;
  local_3a88 = pSVar8;
  local_3a80.ReferenceController = pTVar7;
  if (&pFVar29->_ParentStackNode != (TAttribute<TSharedPtr<SDockingTabStack,1>_> *)&local_3a88) {
    (pFVar29->_ParentStackNode).Value.Object = pSVar8;
    local_3a88 = (SDockingTabStack *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar29->_ParentStackNode).Value.SharedReferenceCount,&local_3a80);
  }
  (pFVar29->_ParentStackNode).bIsSet = local_3a78;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_ParentStackNode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a70,
             (FWriteAccessScope *)&local_3798);
  if (((int)local_3a60 != 0) && (FStack_3a68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a68,0,0,0x10);
    local_3a60 = local_3a60 & 0xffffffff00000000;
  }
  if (local_3798.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3798.Accessor,&local_3798);
  }
  if (FStack_3a68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a80.ReferenceController);
  FLLMScope::FLLMScope(&local_3af4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_38d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3980,&local_38d0,true);
  TSlateDecl<SDockingTabWell,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockingTabWell,RequiredArgs::T0RequiredArgs>
            (&local_3830,"SDockingTabWell",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
             ,0x7c,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope(&local_3980);
  FLLMScope::~FLLMScope(&local_3af4);
  if (local_3830._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3830._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3830._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_3448 = (this->TabWell).Object;
  pTStack_3440 = (this->TabWell).SharedReferenceCount.ReferenceController;
  (this->TabWell).Object = local_3830._Widget.Object;
  (this->TabWell).SharedReferenceCount.ReferenceController =
       local_3830._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3440);
  pTVar31 = TSlateDecl<SDockingTabWell,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3830,&local_3428,pFVar29);
  pTVar9 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_31e0 = pTVar31->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3ad8 = (code *)0x0;
  FStack_3ad0.ReferenceController = pTVar9;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_31d8,&FStack_3ad0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3ad0.ReferenceController);
  pFVar24 = SVerticalBox::FArguments::operator+(pFVar24,(FSlotArguments *)&local_31e8);
  FLLMScope::FLLMScope(&local_3af0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3978 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3970,&local_3978,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_3528,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
             ,0x6f,(T0RequiredArgs *)&local_res18);
  FMemScope::~FMemScope(&local_3970);
  FLLMScope::~FLLMScope(&local_3af0);
  pTVar32 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3528,&local_3418,pFVar24);
  pFVar26 = local_38e0;
  pTVar10 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_3a28 = pTVar32->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a20.ReferenceController = pTVar10;
  if ((SVerticalBox **)&local_38e0->field_0x8 != &local_3a28) {
    *(SVerticalBox **)&local_38e0->field_0x8 = local_3a28;
    local_3a28 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_38e0->field_0x10,&local_3a20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a20.ReferenceController);
  pFVar20 = SHorizontalBox::FArguments::operator+(local_38f0,pFVar26);
  pFVar21 = ::operator_new(0x58);
  local_38f8 = (FSlotArguments *)0x0;
  if (pFVar21 != (FSlot *)0x0) {
    *(undefined8 *)pFVar21 = 0;
    *(undefined8 *)&pFVar21->field_0x8 = 0;
    *(undefined8 *)&pFVar21->field_0x10 = 0;
    *(undefined8 *)&pFVar21->field_0x18 = 0;
    *(undefined8 *)&pFVar21->field_0x20 = 0;
    *(undefined8 *)&pFVar21->field_0x28 = 0;
    *(undefined8 *)&pFVar21->field_0x30 = 0;
    *(undefined8 *)&pFVar21->field_0x38 = 0;
    *(undefined8 *)&pFVar21->field_0x40 = 0;
    *(undefined8 *)&pFVar21->field_0x48 = 0;
    *(undefined8 *)&pFVar21->field_0x50 = 0;
    local_38f8 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar21);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_2f00,(FSlot *)&local_38f8);
  pFVar26 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_2f00);
  fVar15 = __real_40a00000;
  this->InlineContentAreaRight = *(FSlot **)pFVar26;
  pFVar26 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar26->field_0x18,fVar15,0.0,0.0,0.0);
  if (local_3920 != (undefined4 *)&pFVar26->field_0x50) {
    *(undefined4 *)&pFVar26->field_0x50 = 2;
    pFVar26->field_0x54 = 1;
  }
  pFVar23 = (FSlotArguments *)0x0;
  if (pFVar26 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar23 = pFVar26;
  }
  pFVar20 = SHorizontalBox::FArguments::operator+(pFVar20,pFVar23);
  FLLMScope::FLLMScope(&local_3aec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3900 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3930,&local_3900,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_3540,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
             ,99,(T0RequiredArgs *)&local_res20);
  FMemScope::~FMemScope(&local_3930);
  FLLMScope::~FLLMScope(&local_3aec);
  pTVar33 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3540,&local_33f8,pFVar20);
  pFVar48 = local_3938;
  pTVar58 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_3a18 = pTVar33->Object;
  if (pTVar58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar58->SharedReferenceCount = (atomic<int>)((int)pTVar58->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar58->SharedReferenceCount = (atomic<int>)((int)pTVar58->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a10.ReferenceController = pTVar58;
  if ((SHorizontalBox **)&local_3938->_padding_ != &local_3a18) {
    local_3938->_padding_ = (longlong)local_3a18;
    local_3a18 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_3938->_padding_,&local_3a10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a10.ReferenceController);
  pFVar34 = SOverlay::FArguments::operator+(local_38c8,pFVar48);
  FLLMScope::FLLMScope(&local_3ae8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3968 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3960,&local_3968,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_3558,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
             ,0x60,&local_3b48);
  FMemScope::~FMemScope(&local_3960);
  FLLMScope::~FLLMScope(&local_3ae8);
  pTVar35 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3558,&local_3408,pFVar34);
  local_3a00.ReferenceController = (pTVar35->SharedReferenceCount).ReferenceController;
  local_3a08 = pTVar35->Object;
  if (local_3a00.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3a00.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3a00.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar25 = (FSlot *)0x0;
  if (&this->TitleBarContent != (TSharedPtr<SWidget,1> *)&local_3a08) {
    (this->TitleBarContent).Object = (SWidget *)local_3a08;
    local_3a08 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TitleBarContent).SharedReferenceCount,&local_3a00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a00.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3408.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3558._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3540._Widget.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2ea8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ed0);
  if ((void *)local_2ed0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2ed0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ed0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ef0);
  if (local_2f00[0] != (undefined8 *)0x0) {
    (**(code **)*local_2f00[0])(local_2f00[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3418.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3528._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3428.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3830._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  TAttribute<TSharedPtr<SDockingTabStack,1>_>::~TAttribute<TSharedPtr<SDockingTabStack,1>_>
            (&local_1fc0._ParentStackNode);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1fc0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3190);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_31b8);
  if ((void *)local_31b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_31b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_31b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_31d8[0].ReferenceController);
  if (local_31e8 != (undefined8 *)0x0) {
    (**(code **)*local_31e8)(local_31e8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3958);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3438.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3510._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20c0);
  if ((void *)local_20c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20c0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_22d0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_30a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30d0);
  if ((void *)local_30d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_30d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30f0[0].ReferenceController);
  if (local_3100 != (undefined8 *)0x0) {
    (**(code **)*local_3100)(local_3100,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_28e8._Slots.AllocatorInstance.Data,local_28e8._Slots.ArrayNum);
  if ((FSlotArguments *)local_28e8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_28e8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_28e8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2dc0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2de8);
  if ((void *)local_2de8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2de8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2de8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e08);
  if (local_2e18[0] != (undefined8 *)0x0) {
    (**(code **)*local_2e18[0])(local_2e18[0],1);
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2fc0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fe8);
  if ((void *)local_2fe8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2fe8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2fe8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3008);
  if (local_3018[0] != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_3018[0])(local_3018[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_26e0._Slots.AllocatorInstance.Data,local_26e0._Slots.ArrayNum);
  if ((FSlotArguments *)local_26e0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_26e0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_26e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3248 + 0x30));
  if (local_3210 != (void *)0x0) {
    FMemory::Free(local_3210);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_3248 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3248._16_8_);
  if ((undefined8 *)local_3248._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_3248._0_8_)(local_3248._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_24d8._Slots.AllocatorInstance.Data,local_24d8._Slots.ArrayNum);
  if ((FSlotArguments *)local_24d8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_24d8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_24d8);
  pFVar24 = SVerticalBox::FArguments::FArguments(&local_1988);
  local_38b0.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
  local_38b0.bIsSet = true;
  local_38b0.Getter._0_8_ = 0;
  local_38b0.Getter._8_8_ = 0;
  local_38b0.Getter._16_8_ = 0;
  local_res10 = (FArguments *)
                TSlateBaseNamedArgs<SVerticalBox>::Visibility
                          ((TSlateBaseNamedArgs<SVerticalBox> *)pFVar24,&local_38b0);
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
    pFVar25 = SVerticalBox::FSlot::FSlot(this_00);
  }
  local_3950 = pFVar25;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_29d0,(FSlot *)&local_3950);
  local_res8 = (SWidget *)SVerticalBox::FSlot::FSlotArguments::AutoHeight(&local_29d0);
  pFVar36 = SBorder::FArguments::FArguments(&local_ed0);
  local_3b38.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_3b38.Object = (SWidget *)GetTabWellVisibility;
  lStack_3460 = (ulonglong)local_3b38.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_3468 = GetTabWellVisibility;
  TAttribute<EVisibility>::Bind<SDockingTabStack>
            ((TAttribute<EVisibility> *)&pFVar36->_padding_,this,(pmf_395bb40a *)&local_3468);
  local_3b38.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_3b38.Object = (SWidget *)GetTabWellScale;
  lStack_3470 = (ulonglong)local_3b38.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_3478 = GetTabWellScale;
  TAttribute<UE::Math::TVector2<double>_>::Bind<SDockingTabStack>
            (&pFVar36->_DesiredSizeScale,this,(pmf_b068b66d *)&local_3478);
  local_3b38.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_3b38.Object = (SWidget *)GetTabStackBorderImage;
  lStack_3480 = (ulonglong)local_3b38.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_3488 = GetTabStackBorderImage;
  TAttribute<FSlateBrush_const_*>::Bind<SDockingTabStack>
            (&pFVar36->_BorderImage,this,(pmf_be916642 *)&local_3488);
  pFVar36->_VAlign = VAlign_Bottom;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar36->_OnMouseButtonDown,
             (FWriteAccessScope *)&local_3738);
  local_3720 = &(pFVar36->_OnMouseButtonDown).field_0x8;
  puVar37 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3720);
  pSVar59 = local_res8;
  if (puVar37 != (undefined8 *)0x0) {
    local_3ad8 = TabWellRightClicked;
    FStack_3ad0.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_39d8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar30 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_34a8);
    pSVar59 = (SWidget *)(pTVar30->SharedReferenceCount).ReferenceController;
    pSVar11 = pTVar30->Object;
    if (pSVar59 != (SWidget *)0x0) {
      LOCK();
      *(int *)&pSVar59->_padding_ = (int)pSVar59->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar59->_padding_ = (int)pSVar59->_padding_ + 1;
      UNLOCK();
    }
    *puVar37 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar38 = FDelegateHandle::GenerateNewID();
    puVar37[2] = uVar38;
    *puVar37 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSDockingTabStack___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar37[3] = pSVar11;
    puVar37[4] = pSVar59;
    if (pSVar59 != (SWidget *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pSVar59->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    bVar14 = true;
    bVar13 = true;
    bVar12 = true;
    puVar37[5] = local_3ad8;
    puVar37[6] = FStack_3ad0.ReferenceController;
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar59);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar59);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_34a8.SharedReferenceCount.ReferenceController);
  }
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  if (local_3738.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3738.Accessor,&local_3738);
  }
  pFVar36 = SBorder::FArguments::Padding(pFVar36,0.0);
  pFVar24 = SVerticalBox::FArguments::FArguments(&local_1b90);
  local_3850.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
  local_3850.bIsSet = true;
  local_3850.Getter._16_8_ = 0;
  local_3850.Getter._0_8_ = 0;
  local_3850.Getter._8_8_ = 0;
  pFVar24 = TSlateBaseNamedArgs<SVerticalBox>::Visibility
                      ((TSlateBaseNamedArgs<SVerticalBox> *)pFVar24,&local_3850);
  pFVar25 = ::operator_new(0x58);
  local_3948 = (FSlot *)0x0;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_3948 = SVerticalBox::FSlot::FSlot(pFVar25);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_2ba0,(FSlot *)&local_3948);
  this->TitleBarSlot = local_2ba0[0];
  pFVar39 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_2ba0);
  pFVar24 = SVerticalBox::FArguments::operator+(pFVar24,pFVar39);
  pFVar25 = ::operator_new(0x58);
  local_3940 = (FSlot *)0x0;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_3940 = SVerticalBox::FSlot::FSlot(pFVar25);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_2ab8,(FSlot *)&local_3940);
  pFVar39 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(&local_2ab8);
  pFVar40 = SImage::FArguments::FArguments(&local_1558);
  local_3b38.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_3b38.Object = (SWidget *)GetTabWellBrush;
  lStack_34b0 = (ulonglong)local_3b38.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_34b8 = GetTabWellBrush;
  TAttribute<FSlateBrush_const_*>::Bind<SDockingTabStack>
            (&pFVar40->_Image,this,(pmf_be916642 *)&local_34b8);
  FLLMScope::FLLMScope(&local_3ae4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3a48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3a50,&local_3a48,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_34e0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
             ,0xa3,&local_3b47);
  FMemScope::~FMemScope(&local_3a50);
  FLLMScope::~FLLMScope(&local_3ae4);
  pTVar41 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_34e0,&local_35c8,pFVar40);
  local_37d8.Object = (SWidget *)pTVar41->Object;
  local_3a48 = (FName)(pTVar41->SharedReferenceCount).ReferenceController;
  if (local_3a48 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3a48 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3a48 + 8) + 1);
    UNLOCK();
  }
  local_37d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_3a48;
  pFVar39 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar39,&local_37d8);
  pFVar24 = SVerticalBox::FArguments::operator+(pFVar24,pFVar39);
  FLLMScope::FLLMScope(local_3ae0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3a38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3a40,&local_3a38,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_34f8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
             ,0x99,&local_3b46);
  FMemScope::~FMemScope(&local_3a40);
  FLLMScope::~FLLMScope(local_3ae0);
  pTVar32 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_34f8,&local_35d8,pFVar24);
  pTVar7 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_3b28 = pTVar32->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar36->_Content).Widget.Object = (SWidget *)local_3b28;
  (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  pTStack_3b20 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar42 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_32d8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                       ,0x91,&local_3b45);
  pTVar43 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_35e8,pFVar36);
  local_39e8.Object = (SWidget *)pTVar43->Object;
  local_3a50 = (FMemScope)(pTVar43->SharedReferenceCount).ReferenceController;
  if (local_3a50 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3a50 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3a50 + 8) + 1);
    UNLOCK();
  }
  local_39e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_3a50;
  pFVar39 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_res8,&local_39e8);
  local_3a38 = (FName)SVerticalBox::FArguments::operator+((FArguments *)local_res10,pFVar39);
  pFVar39 = SVerticalBox::Slot(&local_20a8);
  local_3870.Value = 1.0;
  local_3870.bIsSet = true;
  local_3870.Getter._0_8_ = 0;
  local_3870.Getter._8_8_ = 0;
  local_3870.Getter._16_8_ = 0;
  local_3a40 = (FMemScope)SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar39,&local_3870);
  local_res18 = SOverlay::FArguments::FArguments(&local_1d98);
  local_res10 = (FArguments *)SOverlay::Slot(&local_2c70,0);
  pFVar36 = SBorder::FArguments::FArguments(&local_12b0);
  local_39e8.SharedReferenceCount.ReferenceController =
       local_39e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_39e8.Object = (SWidget *)GetContentAreaBrush;
  local_34c8 = GetContentAreaBrush;
  pTStack_34c0 = local_39e8.SharedReferenceCount.ReferenceController;
  TAttribute<FSlateBrush_const_*>::Bind<SDockingTabStack>
            (&pFVar36->_BorderImage,this,(pmf_be916642 *)&local_34c8);
  (pFVar36->_Padding).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar36->_Padding).Getter,
             (FWriteAccessScope *)&local_3718);
  local_3700 = &(pFVar36->_Padding).Getter.field_0x8;
  puVar37 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3700);
  pSVar59 = local_res8;
  if (puVar37 != (undefined8 *)0x0) {
    local_3b28 = (SVerticalBox *)GetContentPadding;
    pTStack_3b20 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_39d8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar44 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_35a8);
    pSVar59 = (SWidget *)(pTVar44->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar44->Object;
    if (pSVar59 != (SWidget *)0x0) {
      LOCK();
      *(int *)&pSVar59->_padding_ = (int)pSVar59->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar59->_padding_ = (int)pSVar59->_padding_ + 1;
      UNLOCK();
    }
    bVar12 = true;
    bVar14 = true;
    bVar13 = true;
    *puVar37 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar38 = FDelegateHandle::GenerateNewID();
    puVar37[2] = uVar38;
    *puVar37 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSDockingTabStack___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar37[3] = local_res8;
    puVar37[4] = pSVar59;
    if (pSVar59 != (SWidget *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pSVar59->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    puVar37[5] = local_3b28;
    puVar37[6] = pTStack_3b20;
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar59);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar59);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35a8.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  if (local_3718.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3718.Accessor,&local_3718);
  }
  *(undefined1 *)((longlong)&pFVar36->_padding_ + 2) = 1;
  *(undefined1 *)((longlong)&pFVar36->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar36->_padding_,
             (FWriteAccessScope *)&local_36f8);
  local_36e0 = &pFVar36->_padding_;
  puVar37 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_36e0);
  pSVar59 = local_res8;
  if (puVar37 != (undefined8 *)0x0) {
    local_3b28 = (SVerticalBox *)IsContentEnabled;
    pTStack_3b20 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_39d8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar44 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_35b8);
    pSVar59 = (SWidget *)(pTVar44->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar44->Object;
    if (pSVar59 != (SWidget *)0x0) {
      LOCK();
      *(int *)&pSVar59->_padding_ = (int)pSVar59->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pSVar59->_padding_ = (int)pSVar59->_padding_ + 1;
      UNLOCK();
    }
    bVar12 = true;
    bVar13 = true;
    *puVar37 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar38 = FDelegateHandle::GenerateNewID();
    puVar37[2] = uVar38;
    *puVar37 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSDockingTabStack___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar37[3] = local_res8;
    puVar37[4] = pSVar59;
    if (pSVar59 != (SWidget *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&pSVar59->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    puVar37[5] = local_3b28;
    puVar37[6] = pTStack_3b20;
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar59);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35b8.SharedReferenceCount.ReferenceController);
  }
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  if (local_36f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_36f8.Accessor,&local_36f8);
  }
  pFVar45 = STextBlock::FArguments::FArguments(&local_5b0);
  pFVar46 = FText::AsLocalizable_Advanced_LocText
                      (&local_35f8,L"DockTabStack",L"EmptyTabMessage",L"Empty Tab!");
  FText::FText(&local_36d8.Value,pFVar46);
  local_36d8.bIsSet = true;
  local_36d8.Getter._16_8_ = 0;
  local_36d8.Getter._0_8_ = 0;
  local_36d8.Getter._8_8_ = 0;
  pFVar45 = STextBlock::FArguments::Text(pFVar45,&local_36d8);
  this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_32f0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                       ,0xb8,&local_3b44);
  pTVar47 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_3608,pFVar45);
  pTVar9 = (pTVar47->SharedReferenceCount).ReferenceController;
  local_3b08 = pTVar47->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar36->_Content).Widget.Object = (SWidget *)local_3b08;
  (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  uStack_3b00 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  pTVar42 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_3260,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                       ,0xb2,&local_3b43);
  pTVar42 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::Expose<SBorder>
                      (pTVar42,&this->ContentSlot);
  pTVar43 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_3618,pFVar36);
  pTVar10 = (pTVar43->SharedReferenceCount).ReferenceController;
  local_3b18.Object = (SWidget *)pTVar43->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b18.SharedReferenceCount.ReferenceController = pTVar10;
  pFVar48 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_res10,&local_3b18);
  local_res20 = SOverlay::FArguments::operator+(local_res18,pFVar48);
  pFVar48 = SOverlay::Slot(&local_2cd0,0);
  local_3808 = 1;
  local_37f0 = 0;
  local_3818 = 0;
  uStack_3810 = 0;
  *(undefined1 *)&pFVar48->_padding_ = 1;
  local_3800 = (undefined1  [8])0x0;
  pvStack_37f8 = (void *)0x0;
  pFVar48->_padding_ = 0;
  pFVar48->_padding_ = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar48->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3800);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3800);
  if (pvStack_37f8 != (void *)0x0) {
    FMemory::Free(pvStack_37f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3800);
  plVar3 = &pFVar48->_padding_;
  if ((longlong *)local_3918 != plVar3) {
    *(undefined4 *)plVar3 = 1;
    *(undefined1 *)((longlong)&pFVar48->_padding_ + 4) = 1;
  }
  pFVar57 = (FSlotArguments *)0x0;
  if (plVar3 != (longlong *)0x0) {
    pFVar57 = pFVar48;
  }
  if ((longlong *)local_3910 != &pFVar57->_padding_) {
    *(undefined4 *)&pFVar57->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar57->_padding_ + 4) = 1;
  }
  local_res18 = (FArguments *)(FSlotArguments *)0x0;
  if (pFVar57 != (FSlotArguments *)0xffffffffffffffb8) {
    local_res18 = (FArguments *)pFVar57;
  }
  pFVar49 = SButton::FArguments::FArguments(&local_af0);
  pFVar49->_ButtonStyle = local_3a30;
  local_res10 = pFVar49;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar49->_OnClicked,
             &local_3310.WriteScope);
  local_3310.Allocation = (FDelegateAllocation *)&(pFVar49->_OnClicked).field_0x8;
  local_res8 = UE::Core::Private::DelegateAllocate(0x38,local_3310.Allocation);
  if (local_res8 == (SWidget *)0x0) {
    pTVar58 = (TReferenceControllerBase<1> *)0x0;
    FVar60.ReferenceController = local_39f8.SharedReferenceCount.ReferenceController;
  }
  else {
    local_3b08 = (STextBlock *)UnhideTabWell;
    uStack_3b00 = (TReferenceControllerBase<1> *)
                  ((ulonglong)local_39d8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar30 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3598);
    pTVar58 = (pTVar30->SharedReferenceCount).ReferenceController;
    local_39f8.Object = (SDockingTabStack *)pTVar30->Object;
    if (pTVar58 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar58->SharedReferenceCount = (atomic<int>)((int)pTVar58->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar58->SharedReferenceCount = (atomic<int>)((int)pTVar58->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3578 = local_3b08;
    pTStack_3570 = uStack_3b00;
    local_39f8.SharedReferenceCount.ReferenceController = pTVar58;
    TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
    ::
    TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,FReply___cdecl(void),FDefaultDelegateUserPolicy><>
              ((TBaseSPMethodDelegateInstance<0,SDockingTabStack,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *)local_res8,&local_39f8,(pmf_f04d0e71 *)&local_3578);
    bVar14 = true;
    bVar13 = true;
    bVar12 = true;
    FVar60.ReferenceController = pTVar58;
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar60.ReferenceController);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar58);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3598.SharedReferenceCount.ReferenceController);
  }
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
  ~TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>(&local_3310);
  local_3a58[0] = 0.0;
  pTVar50 = TAttribute<FMargin>::TAttribute<FMargin><float>(&local_2d30,local_3a58);
  pFVar49 = SButton::FArguments::ContentPadding(local_res10,pTVar50);
  local_3b18.Object = (SWidget *)GetUnhideButtonVisibility;
  local_3b18.SharedReferenceCount.ReferenceController =
       local_3b18.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3588 = GetUnhideButtonVisibility;
  pTStack_3580 = local_3b18.SharedReferenceCount.ReferenceController;
  pFVar49 = TSlateBaseNamedArgs<SButton>::Visibility<SDockingTabStack>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar49,this,(pmf_395bb40a *)&local_3588);
  local_3b18.SharedReferenceCount.ReferenceController =
       local_3b18.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3b18.Object = (SWidget *)GetUnhideTabWellButtonScale;
  local_3568 = GetUnhideTabWellButtonScale;
  pTStack_3560 = local_3b18.SharedReferenceCount.ReferenceController;
  pFVar49 = SButton::FArguments::DesiredSizeScale<SDockingTabStack>
                      (pFVar49,this,(pmf_b068b66d *)&local_3568);
  local_3b18.SharedReferenceCount.ReferenceController =
       local_3b18.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3b18.Object = (SWidget *)GetUnhideTabWellButtonOpacity;
  local_3678 = GetUnhideTabWellButtonOpacity;
  pTStack_3670 = local_3b18.SharedReferenceCount.ReferenceController;
  pFVar49 = SButton::FArguments::ButtonColorAndOpacity<SDockingTabStack>
                      (pFVar49,this,(pmf_b5c187c3 *)&local_3678);
  pFVar46 = FText::AsLocalizable_Advanced_LocText
                      (&local_3628,L"DockTabStack",L"UnhideTabWellToolTip",L"Show Tabs");
  pTVar51 = TAttribute<FText>::TAttribute<FText>(&local_2d00,pFVar46);
  pFVar49 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar49,pTVar51);
  pFVar27 = SSpacer::FArguments::FArguments(&local_1780);
  local_3698 = 1;
  local_36a8._s_0.X = (double)*(float *)&(local_3a30->Normal).ImageSize;
  local_3690._16_8_ = 0;
  local_36a8._s_0.Y = (double)*(float *)&(local_3a30->Normal).ImageSize.field_0x4;
  local_3690._0_8_ = 0;
  local_3690._8_8_ = 0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>(&local_3690);
  pFVar27 = SSpacer::FArguments::Size
                      (pFVar27,(TAttribute<UE::Math::TVector2<double>_> *)&local_36a8._s_0);
  this_02 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                      (&local_32c0,"SSpacer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                       ,0xcd,&local_3b42);
  pTVar28 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_3638,pFVar27);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpacer>(&local_37e8,pTVar28);
  pFVar49 = SButton::FArguments::operator[](pFVar49,&local_37e8);
  this_03 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3278,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                       ,0xc3,&local_3b41);
  pTVar52 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_3648,pFVar49);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_37b8,pTVar52);
  pFVar48 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_res18,&local_37b8);
  pFVar34 = SOverlay::FArguments::operator+(local_res20,pFVar48);
  pTVar53 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_3290,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                       ,0xad,&local_3b40);
  pTVar53 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::Expose<SOverlay>
                      (pTVar53,&(this->OverlayManagement).ContentAreaOverlay);
  pTVar35 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar53,&local_3658,pFVar34);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_37a8,pTVar35);
  pFVar39 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3a40,&local_37a8);
  pFVar24 = SVerticalBox::FArguments::operator+((FArguments *)local_3a38,pFVar39);
  this_04 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_32a8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                       ,0x8a,local_3b3f);
  pTVar32 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_3668,pFVar24);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_37c8,pTVar32);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_37c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3668.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3658.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3290._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3648.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3278._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3638.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32c0._Widget.SharedReferenceCount.ReferenceController);
  SSpacer::FArguments::~FArguments(&local_1780);
  FText::~FText(&local_3628);
  SButton::FArguments::~FArguments(&local_af0);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2cd0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3618.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3260._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3608.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32f0._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_35f8);
  STextBlock::FArguments::~FArguments(&local_5b0);
  SBorder::FArguments::~FArguments(&local_12b0);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2c70);
  SOverlay::FArguments::~FArguments(&local_1d98);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_20a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3a50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_34f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3a48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_34e0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1558);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2ab8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_2ba0);
  SVerticalBox::FArguments::~FArguments(&local_1b90);
  SBorder::FArguments::~FArguments(&local_ed0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_29d0);
  SVerticalBox::FArguments::~FArguments(&local_1988);
  if (this->bIsDocumentArea != false) {
    pFVar54 = FDockingStackOptionalContent::FDockingStackOptionalContent(&local_2f30);
    pTVar30 = SDocumentAreaWidget::MakeDocumentAreaWidget(&local_39d8);
    SetNodeContent(this,pTVar30,pFVar54);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_39d8.SharedReferenceCount.ReferenceController._4_4_,
                        local_39d8.SharedReferenceCount.ReferenceController._0_4_));
    FDockingStackOptionalContent::~FDockingStackOptionalContent(&local_2f30);
  }
  return;
}

// CreateNewTabStackBySplitting @ 14272a4b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockingTabStack,1> * __thiscall
SDockingTabStack::CreateNewTabStackBySplitting
          (SDockingTabStack *this,TSharedRef<SDockingTabStack,1> *__return_storage_ptr__,
          RelativeDirection param_1)

{
  SDockingTabStack *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDockingNode *pSVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<SDockingTabStack,1> *pTVar7;
  FArguments *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  SDockingSplitter *this_00;
  bool bVar11;
  FLLMScope local_res8 [2];
  undefined8 local_res10;
  TRawPtrProxy<FTabManager::FStack> local_res20;
  TSharedRef<SDockingNode,1> local_2a8;
  FName local_298;
  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> local_290;
  FMemScope local_288;
  TSharedRef<SDockingNode,1> local_280;
  TSharedRef<FTabManager::FStack,1> local_270;
  TSharedRef<SWidget,1> local_260;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  local_250;
  FArguments local_238;
  
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  this_00 = (SDockingSplitter *)0x0;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14272a504;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    this_00 = (SDockingSplitter *)this->_padding_;
    if (this_00 != (SDockingSplitter *)0x0) goto LAB_14272a52a;
  }
LAB_14272a504:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ParentNode.IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                      ,0x3c3,L"");
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedRef<SDockingTabStack,1> *)(*pcVar4)();
    return pTVar7;
  }
LAB_14272a52a:
  pFVar8 = FArguments::FArguments(&local_238);
  local_res20.Object = ::operator_new(0x50);
  if (local_res20.Object == (FStack *)0x0) {
    local_res20.Object = (FStack *)0x0;
  }
  else {
    *(undefined4 *)&(local_res20.Object)->_padding_ = 0x3f800000;
    (local_res20.Object)->_padding_ = 0;
    (local_res20.Object)->_padding_ = 0;
    (local_res20.Object)->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    ((local_res20.Object)->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_res20.Object)->Tabs).ArrayNum = 0;
    ((local_res20.Object)->Tabs).ArrayMax = 0;
    (local_res20.Object)->bHideTabWell = false;
    ((local_res20.Object)->ForegroundTabId).TabType.ComparisonIndex = 0;
    ((local_res20.Object)->ForegroundTabId).TabType.Number = 0;
    ((local_res20.Object)->ForegroundTabId).InstanceId = -1;
    ((local_res20.Object)->ForegroundTabId).Flags = SaveLayout;
    ((local_res20.Object)->ExtensionId).ComparisonIndex = 0;
    ((local_res20.Object)->ExtensionId).Number = 0;
    local_res10 = 0;
  }
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_270,&local_res20);
  local_290.Arg0 = &local_270;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_298 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_288,&local_298,true);
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>::
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
            (&local_250,"SDockingTabStack",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
             ,0x3c5,&local_290);
  FMemScope::~FMemScope(&local_288);
  FLLMScope::~FLLMScope(local_res8);
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>::
  operator<<=(&local_250,__return_storage_ptr__,pFVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_238);
  pSVar1 = __return_storage_ptr__->Object;
  *(int *)&pSVar1->_padding_ = (int)this->_padding_;
  (**(code **)(pSVar1->_padding_ + 0x2a0))();
  if ((this_00 == (SDockingSplitter *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedRef<SDockingTabStack,1> *)(*pcVar4)();
    return pTVar7;
  }
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_260);
  pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar3 = (SDockingNode *)pTVar9->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_260.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_260.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_280.Object = (SDockingNode *)__return_storage_ptr__->Object;
  local_280.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_280.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a8.Object = pSVar3;
  local_2a8.SharedReferenceCount.ReferenceController = pTVar2;
  SDockingSplitter::PlaceNode(this_00,&local_280,param_1,&local_2a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// ExecuteCloseFocusedTabCommand @ 1427317c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::ExecuteCloseFocusedTabCommand(SDockingTabStack *this)

{
  bool bVar1;
  
  bVar1 = CanExecuteCloseMinorTabCommand(this);
  if (bVar1) {
    ExecuteCloseMinorTabCommand(this);
    return;
  }
  ExecuteCloseMajorTabCommand(this);
  return;
}

// ExecuteCloseMajorTabCommand @ 1427317f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::ExecuteCloseMajorTabCommand(SDockingTabStack *this)

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SDockTab,1> *pTVar4;
  SDockTab *pSVar5;
  SDockTab *this_00;
  
  pSVar5 = (SDockTab *)0x0;
  bVar3 = CanExecuteCloseMajorTabCommand(this);
  if (bVar3) {
    if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar1 = (this->TabWell).Object;
    this_00 = (pSVar1->TabBeingDraggedPtr).Object;
    if (this_00 == (SDockTab *)0x0) {
      if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        this_00 = pSVar5;
      }
      else {
        pTVar4 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
        pSVar5 = (SDockTab *)(pTVar4->SharedReferenceCount).ReferenceController;
        this_00 = pTVar4->Object;
        if (pSVar5 != (SDockTab *)0x0) {
          LOCK();
          *(atomic<int> *)&pSVar5->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar5->_padding_ + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      if ((this_00 == (SDockTab *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      pSVar5 = (SDockTab *)(pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
      if (pSVar5 != (SDockTab *)0x0) {
        LOCK();
        *(int *)&pSVar5->_padding_ = (int)pSVar5->_padding_ + 1;
        UNLOCK();
      }
    }
    SDockTab::RequestCloseTab(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar5);
  }
  return;
}

// ExecuteCloseMinorTabCommand @ 142731930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::ExecuteCloseMinorTabCommand(SDockingTabStack *this)

{
  FGlobalTabmanager *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  TSharedRef<FGlobalTabmanager,1> *pTVar6;
  SDockTab *pSVar7;
  SDockTab *pSVar8;
  SDockTab *this_00;
  
  bVar4 = CanExecuteCloseMinorTabCommand(this);
  if (!bVar4) {
    return;
  }
  pTVar6 = FGlobalTabmanager::Get();
  this_00 = (SDockTab *)0x0;
  pFVar1 = pTVar6->Object;
  pSVar8 = (SDockTab *)(pFVar1->ActiveTabPtr).WeakReferenceCount.ReferenceController;
  pSVar7 = pSVar8;
  if (pSVar8 != (SDockTab *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142731975;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar8->_padding_;
      bVar4 = aVar3 == aVar5;
      if (bVar4) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar4);
    this_00 = (pFVar1->ActiveTabPtr).Object;
    pSVar7 = pSVar8;
    if (this_00 != (SDockTab *)0x0) goto LAB_14273199b;
  }
LAB_142731975:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar8 = pSVar7;
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14273199b:
  SDockTab::RequestCloseTab(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return;
}

// GatherPersistentLayout @ 142738ac0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabManager::FLayoutNode,1> * __thiscall
SDockingTabStack::GatherPersistentLayout
          (SDockingTabStack *this,TSharedPtr<FTabManager::FLayoutNode,1> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  SDockingTabWell *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  FLayoutNode *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  TSharedPtr<FTabManager::FLayoutNode,1> *pTVar12;
  FStack *pFVar13;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar14;
  TSharedRef<SDockTab,1> *pTVar15;
  FTabId *pFVar16;
  FStack *pFVar17;
  longlong lVar18;
  uint uVar19;
  SDockTab *this_00;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar23;
  TRawPtrProxy<FTabManager::FStack> local_res20;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  TSharedRef<FTabManager::FStack,1> local_c8;
  TSharedRef<FTabManager::FLayoutNode,1> local_b8;
  TSharedRef<FTabManager::FLayoutNode,1> local_a8;
  undefined8 local_98;
  undefined8 local_90;
  TSharedRef<FTabManager::FLayoutNode,1> local_88;
  undefined8 local_78;
  undefined8 local_70;
  TSharedRef<FTabManager::FLayoutNode,1> local_68;
  FTabId local_58;
  FStack *pFVar22;
  
  pFVar17 = (FStack *)0x0;
  if ((this->Tabs).ArrayNum < 1) {
    __return_storage_ptr__->Object = (FLayoutNode *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar8)();
    return pTVar12;
  }
  pSVar3 = (this->TabWell).Object;
  local_d8.Data = (FScriptContainerElement *)0x0;
  iVar11 = (pSVar3->Tabs).Children.ArrayNum;
  pTVar15 = (TSharedRef<SDockTab,1> *)(pSVar3->Tabs).Children.AllocatorInstance.Data;
  local_d0 = iVar11;
  if (iVar11 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_d8,iVar11,&local_cc);
    ConstructItems<TSharedRef<SDockTab,1>,TSharedRef<SDockTab,1>,int>(local_d8.Data,pTVar15,iVar11);
  }
  pFVar13 = pFVar17;
  pFVar22 = pFVar17;
  if (0 < local_d0) {
    do {
      uVar21 = (uint)pFVar22;
      uVar19 = 0;
      if ((int)uVar21 < local_d0) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar8)();
        return pTVar12;
      }
      SDockTab::PersistVisualState(*(SDockTab **)(local_d8.Data + (longlong)pFVar13));
      pFVar13 = (FStack *)&pFVar13->_padding_;
      pFVar22 = (FStack *)(ulonglong)(uVar21 + 1);
    } while ((int)(uVar21 + 1) < local_d0);
  }
  DestructItems<TSharedRef<SDockTab,1>,int>((TSharedRef<SDockTab,1> *)local_d8.Data,local_d0);
  if ((TSharedRef<SDockTab,1> *)local_d8.Data != (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  pFVar13 = ::operator_new(0x50);
  local_res20.Object = pFVar17;
  if (pFVar13 != (FStack *)0x0) {
    *(undefined8 *)&pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 0;
    *(undefined4 *)&pFVar13->_padding_ = 0x3f800000;
    pFVar13->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    (pFVar13->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->Tabs).ArrayNum = 0;
    (pFVar13->Tabs).ArrayMax = 0;
    pFVar13->bHideTabWell = false;
    (pFVar13->ForegroundTabId).TabType.ComparisonIndex = 0;
    (pFVar13->ForegroundTabId).TabType.Number = 0;
    (pFVar13->ForegroundTabId).InstanceId = -1;
    (pFVar13->ForegroundTabId).Flags = SaveLayout;
    (pFVar13->ExtensionId).ComparisonIndex = 0;
    (pFVar13->ExtensionId).Number = 0;
    local_res20.Object = pFVar13;
  }
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_c8,&local_res20);
  *(int *)&(local_c8.Object)->_padding_ = (int)this->_padding_;
  pTVar14 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&(local_c8.Object)->_padding_,
                       &local_b8);
  pTVar4 = (pTVar14->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar14->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  bVar10 = FCurveSequence::IsInReverse(&this->ShowHideTabWell);
  *(bool *)&pFVar5[1]._padding_ = bVar10;
  pTVar14 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar5->_padding_,&local_a8);
  pTVar6 = (pTVar14->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar14->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar8)();
    return pTVar12;
  }
  pSVar3 = (this->TabWell).Object;
  this_00 = (pSVar3->TabBeingDraggedPtr).Object;
  if (this_00 == (SDockTab *)0x0) {
    if ((0 < (pSVar3->Tabs).Children.ArrayNum) && (-1 < pSVar3->ForegroundTabIndex)) {
      pTVar15 = TSlotlessChildren<SDockTab>::operator[](&pSVar3->Tabs,pSVar3->ForegroundTabIndex);
      pFVar13 = (FStack *)(pTVar15->SharedReferenceCount).ReferenceController;
      this_00 = pTVar15->Object;
      if (pFVar13 != (FStack *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar13->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar13->_padding_ + 1);
        UNLOCK();
      }
      local_90 = 0;
      local_98 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (this_00 == (SDockTab *)0x0) goto LAB_142738df7;
      goto LAB_142738daa;
    }
    local_70 = 0;
    local_78 = 0;
    pFVar13 = pFVar17;
  }
  else {
    pFVar13 = (FStack *)(pSVar3->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pFVar13 != (FStack *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar13->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar13->_padding_ + 1);
      UNLOCK();
    }
LAB_142738daa:
    pFVar16 = SDockTab::GetLayoutIdentifier(this_00,&local_58);
    uVar9 = *(undefined8 *)&pFVar16->InstanceId;
    *(FName *)((longlong)&pFVar5[1]._padding_ + 4) = pFVar16->TabType;
    *(undefined8 *)&pFVar5[1].field_0x1c = uVar9;
    pTVar14 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                        ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar5->_padding_,&local_88
                        );
    pFVar17 = (FStack *)(pTVar14->SharedReferenceCount).ReferenceController;
    if (pFVar17 != (FStack *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar17->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar17->_padding_ + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar17);
LAB_142738df7:
  uVar19 = 0;
  if (0 < (this->Tabs).ArrayNum) {
    lVar23 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar19 < (this->Tabs).ArrayNum) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar8)();
        return pTVar12;
      }
      if (*(int *)((this->Tabs).AllocatorInstance.Data + lVar23 + 8) == -1) {
        uVar21 = 0;
        if ((int)uVar19 < (this->Tabs).ArrayNum) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar8)();
          return pTVar12;
        }
        pFVar20 = (this->Tabs).AllocatorInstance.Data + lVar23;
        if ((((FScriptContainerElement *)pFVar5[1]._padding_ <= pFVar20) &&
            (pFVar20 < (FScriptContainerElement *)pFVar5[1]._padding_ +
                       (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) * 0x20)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar8)();
          return pTVar12;
        }
        iVar11 = (int)pFVar5[1]._padding_;
        piVar1 = (int *)((longlong)&pFVar5[1]._padding_ + 4);
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x420,(ForAnyElementType *)(pFVar5 + 1),piVar1);
        }
        lVar7 = pFVar5[1]._padding_;
        *(int *)&pFVar5[1]._padding_ = iVar11 + 1;
        uVar9 = *(undefined8 *)(pFVar20 + 8);
        lVar18 = (longlong)iVar11 * 0x20;
        *(undefined8 *)(lVar18 + lVar7) = *(undefined8 *)pFVar20;
        ((undefined8 *)(lVar18 + lVar7))[1] = uVar9;
        *(undefined4 *)(lVar18 + 0x10 + lVar7) = *(undefined4 *)(pFVar20 + 0x10);
        *(FScriptContainerElement *)(lVar18 + 0x14 + lVar7) = pFVar20[0x14];
        *(undefined4 *)(lVar18 + 0x18 + lVar7) = *(undefined4 *)(pFVar20 + 0x18);
        FVar2 = pFVar20[0x1c];
        *(undefined1 *)(lVar18 + 0x1e + lVar7) = 0;
        *(FScriptContainerElement *)(lVar18 + 0x1c + lVar7) = FVar2;
        FVar2 = pFVar20[0x1e];
        *(FScriptContainerElement *)(lVar18 + 0x1e + lVar7) = FVar2;
        if (FVar2 != (FScriptContainerElement)0x0) {
          *(FScriptContainerElement *)(lVar18 + 0x1d + lVar7) = pFVar20[0x1d];
        }
        pTVar14 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                            ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar5->_padding_,
                             &local_68);
        pTVar4 = (pTVar14->SharedReferenceCount).ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      uVar19 = uVar19 + 1;
      lVar23 = lVar23 + 0x20;
    } while ((int)uVar19 < (this->Tabs).ArrayNum);
  }
  __return_storage_ptr__->Object = pFVar5;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// GetAllChildTabs @ 142739ff0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> * __thiscall
SDockingTabStack::GetAllChildTabs
          (SDockingTabStack *this,
          TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  TSlotlessChildren<SDockTab>::AsArrayCopy(&((this->TabWell).Object)->Tabs,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetContentAreaBrush @ 14273c830

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SDockingTabStack::GetContentAreaBrush(SDockingTabStack *this)

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  bool bVar3;
  FSlateBrush *pFVar4;
  TSharedRef<SDockTab,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SDockTab *this_00;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateBrush *)(*pcVar2)();
      return pFVar4;
    }
  }
  pSVar1 = (this->TabWell).Object;
  this_00 = (pSVar1->TabBeingDraggedPtr).Object;
  if (this_00 == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar5 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
      pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
      this_00 = pTVar5->Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (this_00 != (SDockTab *)0x0) goto LAB_14273c8d6;
    }
    pFVar4 = FStyleDefaults::GetNoBrush();
  }
  else {
    pTVar6 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      pFVar4 = SDockTab::GetContentAreaBrush(this_00);
      goto LAB_14273c8ee;
    }
LAB_14273c8d6:
    pFVar4 = SDockTab::GetContentAreaBrush(this_00);
  }
LAB_14273c8ee:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return pFVar4;
}

// GetContentPadding @ 14273c910

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
SDockingTabStack::GetContentPadding(SDockingTabStack *this,FMargin *__return_storage_ptr__)

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  FMargin *pFVar7;
  TSharedRef<SDockTab,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SDockTab *this_00;
  FMargin local_28;
  FMargin local_18;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMargin *)(*pcVar2)();
      return pFVar7;
    }
  }
  pSVar1 = (this->TabWell).Object;
  this_00 = (pSVar1->TabBeingDraggedPtr).Object;
  if (this_00 == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar8 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
      pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
      this_00 = pTVar8->Object;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (this_00 != (SDockTab *)0x0) goto LAB_14273c9c3;
    }
    pFVar7 = &local_28;
    local_28.Left = 0.0;
    local_28.Top = 0.0;
    local_28.Right = 0.0;
    local_28.Bottom = 0.0;
  }
  else {
    pTVar9 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      pFVar7 = SDockTab::GetContentPadding(this_00,&local_18);
      goto LAB_14273c9e8;
    }
LAB_14273c9c3:
    pFVar7 = SDockTab::GetContentPadding(this_00,&local_18);
  }
LAB_14273c9e8:
  fVar3 = pFVar7->Top;
  fVar4 = pFVar7->Right;
  fVar5 = pFVar7->Bottom;
  __return_storage_ptr__->Left = pFVar7->Left;
  __return_storage_ptr__->Top = fVar3;
  __return_storage_ptr__->Right = fVar4;
  __return_storage_ptr__->Bottom = fVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// GetIncrementFromCloseTabsDirection @ 14273edf0

int __cdecl SDockingTabStack::GetIncrementFromCloseTabsDirection(ECloseTabsDirection param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1 == Left) {
    iVar1 = -1;
  }
  return iVar1;
}

// GetMaximizeSpacerVisibility @ 14273fec0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SDockingTabStack::GetMaximizeSpacerVisibility(SDockingTabStack *this)

{
  TEnumAsByte<EVisibility::Private> *in_RDX;
  
  in_RDX->Value = (uchar)EVisibility::Collapsed.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetNodeType @ 142740740

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall SDockingTabStack::GetNodeType(SDockingTabStack *this)

{
  return DockTabStack;
}

// GetNumTabs @ 142740820

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SDockingTabStack::GetNumTabs(SDockingTabStack *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->TabWell).Object != (SDockingTabWell *)0x0) {
    return (((this->TabWell).Object)->Tabs).Children.ArrayNum;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return (((this->TabWell).Object)->Tabs).Children.ArrayNum;
}

// GetSizeRule @ 142743d50

/* WARNING: Enum "Type": Some values do not have unique names */

ESizeRule __thiscall SDockingTabStack::GetSizeRule(SDockingTabStack *this)

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ESizeRule EVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar4 = (**(code **)(this->_padding_ + 0x270))();
  if (iVar4 < 1) {
LAB_142743e3d:
    EVar5 = FractionOfParent;
  }
  else {
    uVar7 = 0;
    if (0 < iVar4) {
      lVar9 = 0;
      lVar8 = 0;
      do {
        if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
        }
        pSVar1 = (this->TabWell).Object;
        uVar6 = 0;
        if ((int)uVar7 < (pSVar1->Tabs).Children.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
        }
        bVar3 = SDockTab::ShouldAutosize
                          (*(SDockTab **)((pSVar1->Tabs).Children.AllocatorInstance.Data + lVar8));
        if (!bVar3) goto LAB_142743e3d;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar9 < iVar4);
    }
    EVar5 = SizeToContent;
  }
  return EVar5;
}

// GetTabSidebarSizeCoefficient @ 1427449c0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SDockingTabStack::GetTabSidebarSizeCoefficient
          (SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1)

{
  undefined4 uVar1;
  FTabId *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  FTabId local_38 [3];
  
  pFVar2 = SDockTab::GetLayoutIdentifier(param_1->Object,local_38);
  uVar1 = pFVar2->InstanceId;
  pFVar3 = (FName *)(this->Tabs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)(this->Tabs).ArrayNum * 4;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return 0.0;
    }
    if ((((pFVar3[2].ComparisonIndex.Value & 7) != 0) && (*pFVar3 == pFVar2->TabType)) &&
       ((uVar1 == 0xffffffff || (uVar1 == pFVar3[1].ComparisonIndex.Value)))) break;
    pFVar3 = pFVar3 + 4;
  }
  return (float)pFVar3[3].ComparisonIndex.Value;
}

// GetTabStackBorderImage @ 142744a40

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SDockingTabStack::GetTabStackBorderImage(SDockingTabStack *this)

{
  code *pcVar1;
  FSlateBrush *pFVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  int *piVar5;
  FName local_res8;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = FAppStyle::Get();
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
      pFVar4 = ::FName::FName(&local_res8,"Brushes.Title");
      MajorTabBackgroundBrush = (FSlateBrush *)(*pcVar1)(pIVar3,*pFVar4,0,0);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pIVar3 = FAppStyle::Get();
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
      pFVar4 = ::FName::FName(&local_res8,"Brushes.Background");
      MinorTabBackgroundBrush = (FSlateBrush *)(*pcVar1)(pIVar3,*pFVar4,0,0);
      _Init_thread_footer(&::_TSS1);
    }
  }
  pFVar2 = MinorTabBackgroundBrush;
  if (this->bShowingTitleBarArea != false) {
    pFVar2 = MajorTabBackgroundBrush;
  }
  return pFVar2;
}

// GetTabStackGeometry @ 142744b80

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometry * __thiscall
SDockingTabStack::GetTabStackGeometry(SDockingTabStack *this,FGeometry *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FGeometry *pFVar6;
  
  pFVar6 = SWidget::GetTickSpaceGeometry((SWidget *)this);
  uVar1 = *(undefined8 *)&pFVar6->Scale;
  uVar2 = *(undefined8 *)((longlong)&(pFVar6->AbsolutePosition).field0_0x0 + 4);
  uVar3 = *(undefined8 *)((longlong)&(pFVar6->Position).field0_0x0 + 4);
  __return_storage_ptr__->Size = pFVar6->Size;
  *(undefined8 *)&__return_storage_ptr__->Scale = uVar1;
  uVar4 = *(undefined8 *)((pFVar6->AccumulatedRenderTransform).M.M[0] + 1);
  uVar5 = *(undefined8 *)((pFVar6->AccumulatedRenderTransform).M.M[1] + 1);
  *(undefined8 *)((longlong)&(__return_storage_ptr__->AbsolutePosition).field0_0x0 + 4) = uVar2;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 4) = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(pFVar6->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] + 1) = uVar4;
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[1] + 1) = uVar5;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 + 4) = uVar1;
  return __return_storage_ptr__;
}

// GetTabWellBrush @ 142744c00

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SDockingTabStack::GetTabWellBrush(SDockingTabStack *this)

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  bool bVar3;
  FSlateBrush *pFVar4;
  TSharedRef<SDockTab,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SDockTab *this_00;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateBrush *)(*pcVar2)();
      return pFVar4;
    }
  }
  pSVar1 = (this->TabWell).Object;
  this_00 = (pSVar1->TabBeingDraggedPtr).Object;
  if (this_00 == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar5 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
      pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
      this_00 = pTVar5->Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (this_00 != (SDockTab *)0x0) goto LAB_142744ca6;
    }
    pFVar4 = FStyleDefaults::GetNoBrush();
  }
  else {
    pTVar6 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      pFVar4 = SDockTab::GetTabWellBrush(this_00);
      goto LAB_142744cbe;
    }
LAB_142744ca6:
    pFVar4 = SDockTab::GetTabWellBrush(this_00);
  }
LAB_142744cbe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return pFVar4;
}

// GetTabWellScale @ 142744ce0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SDockingTabStack::GetTabWellScale(SDockingTabStack *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = FCurveSequence::GetLerp(&this->ShowHideTabWell);
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// GetTabWellVisibility @ 142744d20

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SDockingTabStack::GetTabWellVisibility(SDockingTabStack *this)

{
  EVisibility EVar1;
  bool bVar2;
  uchar *in_RDX;
  
  bVar2 = FCurveSequence::IsPlaying(&this->ShowHideTabWell);
  if (!bVar2) {
    bVar2 = FCurveSequence::IsInReverse(&this->ShowHideTabWell);
    if (bVar2) {
      bVar2 = false;
      goto LAB_142744d55;
    }
  }
  bVar2 = true;
LAB_142744d55:
  EVar1.Value.Value = EVisibility::SelfHitTestInvisible.Value.Value;
  if (!bVar2) {
    EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetTabs @ 142744d80

/* WARNING: Enum "Type": Some values do not have unique names */

TSlotlessChildren<SDockTab> * __thiscall SDockingTabStack::GetTabs(SDockingTabStack *this)

{
  code *pcVar1;
  bool bVar2;
  TSlotlessChildren<SDockTab> *pTVar3;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSlotlessChildren<SDockTab> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &((this->TabWell).Object)->Tabs;
}

// GetUnhideButtonVisibility @ 142745a80

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SDockingTabStack::GetUnhideButtonVisibility(SDockingTabStack *this)

{
  EVisibility EVar1;
  bool bVar2;
  uchar *in_RDX;
  
  bVar2 = FCurveSequence::IsPlaying(&this->ShowHideTabWell);
  if (!bVar2) {
    bVar2 = FCurveSequence::IsInReverse(&this->ShowHideTabWell);
    if (!bVar2) {
      bVar2 = false;
      goto LAB_142745ab5;
    }
  }
  bVar2 = true;
LAB_142745ab5:
  EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  if (bVar2) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetUnhideTabWellButtonOpacity @ 142745ae0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SDockingTabStack::GetUnhideTabWellButtonOpacity
          (SDockingTabStack *this,FSlateColor *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar2 = FCurveSequence::GetLerp(&this->ShowHideTabWell);
  fVar1 = __real_3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar1 - fVar2;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// GetUnhideTabWellButtonScale @ 142745b30

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SDockingTabStack::GetUnhideTabWellButtonScale
          (SDockingTabStack *this,TVector2<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = FCurveSequence::GetLerp(&this->ShowHideTabWell);
  uVar1 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y;
  dVar3 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y * __real_4020000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X * __real_4020000000000000 -
       UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X) * (double)fVar2 +
       UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar3 - (double)uVar1) * (double)fVar2 + (double)uVar1;
  return __return_storage_ptr__;
}

// GetWindowZoneOverride @ 1427464e0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall SDockingTabStack::GetWindowZoneOverride(SDockingTabStack *this)

{
  return TitleBar;
}

// HasTab @ 142748a60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::HasTab(SDockingTabStack *this,FTabMatcher *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  FName *pFVar3;
  undefined4 uVar4;
  FName *pFVar5;
  uint uStack_20;
  uint local_18;
  char cStack_14;
  
  uVar4 = (param_1->TabIdToMatch).InstanceId;
  pFVar3 = (FName *)(this->Tabs).AllocatorInstance.Data;
  uVar1 = param_1->RequiredTabState;
  uVar2 = param_1->TreatIndexNoneAsWildcard;
  if (pFVar3 != pFVar3 + (longlong)(this->Tabs).ArrayNum * 4) {
    pFVar5 = pFVar3;
    do {
      if ((((pFVar5[2].ComparisonIndex.Value & uVar1) != 0) &&
          (*pFVar5 == (param_1->TabIdToMatch).TabType)) &&
         (((uVar2 != '\0' && (uVar4 == 0xffffffff)) || (uVar4 == pFVar5[1].ComparisonIndex.Value))))
      {
        return (int)((longlong)pFVar5 - (longlong)pFVar3 >> 5) != -1;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar3 + (longlong)(this->Tabs).ArrayNum * 4);
  }
  return false;
}

// HideCross @ 142748bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::HideCross(SDockingTabStack *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->OverlayManagement).bShowingCross != false) {
    if ((this->OverlayManagement).ContentAreaOverlay.Object == (SOverlay *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SOverlay::RemoveSlot((this->OverlayManagement).ContentAreaOverlay.Object,-1);
    (this->OverlayManagement).bShowingCross = false;
  }
  return;
}

// IsContentEnabled @ 14274cd60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::IsContentEnabled(SDockingTabStack *this)

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  TSharedRef<SDockTab,1> *pTVar6;
  TOptional<ETabReadOnlyBehavior> TVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDockTab *this_00;
  TSharedRef<FTabManager,1> local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  FTabId local_18;
  
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 600))(this,local_28);
  if (*plVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  SDockingArea::GetTabManager((SDockingArea *)*plVar5,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((local_38.Object)->bReadOnly != false) {
    if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pSVar1 = (this->TabWell).Object;
    this_00 = (pSVar1->TabBeingDraggedPtr).Object;
    if (this_00 != (SDockTab *)0x0) {
      pTVar8 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
LAB_14274ce6e:
      SDockTab::GetLayoutIdentifier(this_00,&local_18);
      TVar7 = FTabManager::GetTabReadOnlyBehavior(local_38.Object,(FTabId *)&stack0x00000008);
      if (*(char *)((longlong)TVar7 + 4) == '\x01') {
        bVar3 = *(int *)TVar7 == 2;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      }
      else {
        bVar3 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      }
      goto LAB_14274cec3;
    }
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar6 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
      pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
      this_00 = pTVar6->Object;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (this_00 != (SDockTab *)0x0) goto LAB_14274ce6e;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  bVar3 = true;
LAB_14274cec3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// IsShowingLiveTabs @ 14274e100

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::IsShowingLiveTabs(SDockingTabStack *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return 0 < (((this->TabWell).Object)->Tabs).Children.ArrayNum;
}

// IsTabAllowedInSidebar @ 14274e240

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingTabStack::IsTabAllowedInSidebar(SDockingTabStack *this,TSharedPtr<SDockTab,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ETabRole EVar4;
  SDockTab *this_00;
  FTabId *pFVar5;
  TSharedPtr<FTabManager,1> local_38;
  FTabId local_28;
  FTabId local_18;
  
  if (param_1->Object == (SDockTab *)0x0) {
LAB_14274e376:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  SDockTab::GetTabManagerPtr(param_1->Object,&local_38);
  if (local_38.Object == (FTabManager *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    goto LAB_14274e376;
  }
  if (param_1->Object == (SDockTab *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = SDockTab::IsTabLocked(param_1->Object);
  if (!bVar2) {
    if (param_1->Object == (SDockTab *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    EVar4 = SDockTab::GetVisualTabRole(param_1->Object);
    if (EVar4 != MajorTab) {
      if (local_38.Object == (FTabManager *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      this_00 = TSharedPtr<SDockTab,1>::operator->(param_1);
      pFVar5 = SDockTab::GetLayoutIdentifier(this_00,&local_18);
      local_28.TabType = pFVar5->TabType;
      local_28.InstanceId = pFVar5->InstanceId;
      local_28.Flags = pFVar5->Flags;
      local_28._13_3_ = *(undefined3 *)&pFVar5->field_0xd;
      bVar2 = FTabManager::IsTabAllowedInSidebar(local_38.Object,&local_28);
      if (bVar2) {
        bVar2 = true;
        goto LAB_14274e34b;
      }
    }
  }
  bVar2 = false;
LAB_14274e34b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar2;
}

// IsTabLocked @ 14274e4f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingTabStack::IsTabLocked(SDockingTabStack *this,TSharedRef<SDockTab_const_,1> *param_1)

{
  undefined4 uVar1;
  FTabId *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  FTabId local_38 [3];
  
  pFVar2 = SDockTab::GetLayoutIdentifier(param_1->Object,local_38);
  uVar1 = pFVar2->InstanceId;
  pFVar3 = (FName *)(this->Tabs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)(this->Tabs).ArrayNum * 4;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return false;
    }
    if ((((pFVar3[2].ComparisonIndex.Value & 7) != 0) && (*pFVar3 == pFVar2->TabType)) &&
       ((uVar1 == 0xffffffff || (uVar1 == pFVar3[1].ComparisonIndex.Value)))) break;
    pFVar3 = pFVar3 + 4;
  }
  if (*(char *)((longlong)&pFVar3[3].Number + 2) == '\0') {
    return false;
  }
  return (bool)*(undefined1 *)((longlong)&pFVar3[3].Number + 1);
}

// IsTabPinnedInSidebar @ 14274e660

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingTabStack::IsTabPinnedInSidebar(SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1)

{
  undefined4 uVar1;
  FTabId *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  FTabId local_38 [3];
  
  pFVar2 = SDockTab::GetLayoutIdentifier(param_1->Object,local_38);
  uVar1 = pFVar2->InstanceId;
  pFVar3 = (FName *)(this->Tabs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)(this->Tabs).ArrayNum * 4;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return false;
    }
    if ((((pFVar3[2].ComparisonIndex.Value & 7) != 0) && (*pFVar3 == pFVar2->TabType)) &&
       ((uVar1 == 0xffffffff || (uVar1 == pFVar3[1].ComparisonIndex.Value)))) break;
    pFVar3 = pFVar3 + 4;
  }
  return (bool)(char)pFVar3[3].Number;
}

// IsTabWellHidden @ 14274e840

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::IsTabWellHidden(SDockingTabStack *this)

{
  bool bVar1;
  
  bVar1 = FCurveSequence::IsInReverse(&this->ShowHideTabWell);
  return bVar1;
}

// MakeContextMenu @ 142752ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SDockingTabStack::MakeContextMenu
          (SDockingTabStack *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SWidget *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ETabRole EVar6;
  ISlateStyle *pIVar7;
  FText *pFVar8;
  FName *pFVar9;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar10;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar11;
  FUIAction *pFVar12;
  FSlateIcon *pFVar13;
  SDockingTabWell *pSVar14;
  TSharedPtr<SDockTab,1> *this_00;
  SDockTab *pSVar15;
  FTabManager *this_01;
  FTabId *pFVar16;
  TAttribute<FText> *pTVar17;
  undefined8 *puVar18;
  TSharedRef<SWidget,1> *pTVar19;
  ulong64 uVar20;
  TReferenceControllerBase<1> *pTVar21;
  FName local_res8;
  TReferenceControllerBase<1> *local_res10;
  FName local_res18;
  undefined8 local_res20;
  undefined1 local_4b8 [16];
  undefined4 local_4a8;
  TSharedPtr<SDockTab,1> local_498;
  undefined1 local_488 [8];
  undefined1 local_480 [8];
  ForAnyElementType FStack_478;
  ulonglong local_470;
  undefined1 local_468 [24];
  undefined1 local_450 [8];
  ForAnyElementType FStack_448;
  ulonglong local_440;
  undefined1 local_438 [24];
  undefined1 local_420 [8];
  ForAnyElementType FStack_418;
  ulonglong local_410;
  undefined1 local_408 [24];
  undefined1 local_3f0 [8];
  ForAnyElementType FStack_3e8;
  ulonglong local_3e0;
  undefined1 local_3d8 [16];
  code *local_3c8;
  TReferenceControllerBase<1> *pTStack_3c0;
  bool local_3b8;
  undefined1 *local_3b0;
  code *local_3a8;
  TReferenceControllerBase<1> *pTStack_3a0;
  bool local_398;
  FTabId local_388;
  undefined1 local_378 [8];
  undefined1 local_370 [8];
  ForAnyElementType FStack_368;
  ulonglong local_360;
  undefined1 local_358 [8];
  undefined1 local_350 [8];
  ForAnyElementType FStack_348;
  ulonglong local_340;
  undefined1 local_338 [8];
  undefined1 local_330 [8];
  ForAnyElementType FStack_328;
  ulonglong local_320;
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  ForAnyElementType FStack_308;
  ulonglong local_300;
  int local_2f8;
  bool local_2f4;
  undefined1 local_2f0 [8];
  ForAnyElementType FStack_2e8;
  ulonglong local_2e0;
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [8];
  ForAnyElementType FStack_2c8;
  ulonglong local_2c0;
  bool local_2b7;
  bool local_2b5;
  bool local_2b0;
  undefined1 local_2a8 [8];
  ForAnyElementType FStack_2a0;
  ulonglong local_298;
  undefined1 local_290 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_288;
  ForAnyElementType FStack_280;
  ulonglong local_278;
  undefined1 local_270 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_258;
  ForAnyElementType FStack_250;
  ulonglong local_248;
  FMenuBuilder local_240;
  FUIAction local_b8;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  pIVar7 = FAppStyle::Get();
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_3c8 = (code *)0x0;
  pTStack_3c0 = (TReferenceControllerBase<1> *)0x0;
  local_498.Object = (SDockTab *)0x0;
  local_498.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_240,Menu,true,
             (TSharedPtr<FUICommandList_const_,1> *)&local_498,false,
             (TSharedPtr<FExtender,1> *)&local_3c8,pIVar7,(FName)0x0,(FName)0x0);
  local_240.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_240.CurrentSectionExtensionHook.Number = 0;
  local_240._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_240.CurrentSectionHeadingText);
  local_240.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_240.CurrentSectionVisibility.bIsSet = false;
  local_240.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_240.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_240.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_240.CurrentSectionResizeParams,0,200);
  local_240.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_240.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_240.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_240.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_240.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_240.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_240.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_240.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_240.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_240.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_240.CurrentSectionResizeParams.bIsSet = false;
  local_240.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_240.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_240.bSectionNeedsToBeApplied = false;
  local_240.bSearchable = true;
  local_240.bRecursivelySearchable = true;
  local_240.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_240);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  memset(local_378,0,200);
  local_2f8 = 0;
  local_360 = 0;
  local_340 = 0;
  local_320 = 0;
  local_300 = 0;
  local_2e0 = 0;
  local_2c0 = 0;
  local_298 = 0;
  local_278 = 0;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_358[0] = false;
  local_358[1] = false;
  local_350 = (undefined1  [8])0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  local_338[0] = false;
  local_338[1] = false;
  local_330 = (undefined1  [8])0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  local_318[0] = false;
  local_318[1] = false;
  local_310 = (undefined1  [8])0x0;
  FStack_308.Data = (FScriptContainerElement *)0x0;
  local_2f4 = false;
  local_2f0 = (undefined1  [8])0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  local_2d8[0] = Preferred;
  local_2d8[1] = false;
  local_2d0 = (undefined1  [8])0x0;
  FStack_2c8.Data = (FScriptContainerElement *)0x0;
  local_2b7 = false;
  local_2b5 = false;
  local_2b0 = false;
  local_2a8 = (undefined1  [8])0x0;
  FStack_2a0.Data = (FScriptContainerElement *)0x0;
  local_290[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_290[1] = false;
  local_288.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_280.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_3c8,L"DockTabStack",L"TabOptionsHeading",L"Options");
  FText::FText((FText *)local_270,pFVar8);
  local_270[0x10] = true;
  local_248 = 0;
  local_258.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_250.Data = (FScriptContainerElement *)0x0;
  pFVar9 = ::FName::FName(&local_res8,"DockingTabStackOptions");
  FMenuBuilder::BeginSection
            (&local_240,*pFVar9,(TAttribute<FText> *)local_270,(TAttribute<EVisibility> *)local_290,
             (TAttribute<FMenuEntryResizeParams> *)local_378);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_258,(FWriteAccessScope *)local_4b8);
  if (((int)local_248 != 0) && (FStack_250.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_250.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_250,0,0,0x10);
    local_248 = local_248 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_250.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_258.AccessDetector);
  if ((FName)local_270._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_270._0_8_ + 0x10))();
  }
  if ((ITextData *)local_3c8 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3c8 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_288,(FWriteAccessScope *)local_4b8);
  if (((int)local_278 != 0) && (FStack_280.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_280.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_280,0,0,0x10);
    local_278 = local_278 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_280.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_288.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_298 != 0) && (FStack_2a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a0,0,0,0x10);
    local_298 = local_298 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2d0,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_2c0 != 0) && (FStack_2c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c8,0,0,0x10);
    local_2c0 = local_2c0 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f0,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_310,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_308.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
    local_300 = local_300 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_308.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_330,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_330);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_350,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_350);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_370,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  local_488[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_488[1] = false;
  local_470 = 0;
  local_480 = (undefined1  [8])0x0;
  FStack_478.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_468);
  local_498.SharedReferenceCount.ReferenceController =
       local_498.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_468[0x10] = false;
  local_498.Object = (SDockTab *)CanHideTabWell;
  local_3c8 = CanHideTabWell;
  pTStack_3c0 = local_498.SharedReferenceCount.ReferenceController;
  local_450 = (undefined1  [8])0x0;
  FStack_448.Data = (FScriptContainerElement *)0x0;
  local_440 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pTVar10 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                      ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_3a8,this,
                       (pmf_fbcfad3b *)&local_3c8);
  local_498.SharedReferenceCount.ReferenceController =
       local_498.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_498.Object = (SDockTab *)ToggleTabWellVisibility;
  local_3c8 = ToggleTabWellVisibility;
  pTStack_3c0 = local_498.SharedReferenceCount.ReferenceController;
  pTVar11 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_290,this,
                       (pmf_4841918d *)&local_3c8);
  pFVar12 = FUIAction::FUIAction(&local_b8,pTVar11,pTVar10,RepeatDisabled);
  pFVar13 = FSlateIcon::FSlateIcon((FSlateIcon *)local_270);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_3d8,L"DockTabStack",L"CollapseTabWellTooltip",
                      L"Collapses the tabs headers to save room.");
  FText::FText((FText *)local_438,pFVar8);
  local_438[0x10] = true;
  local_410 = 0;
  local_420 = (undefined1  [8])0x0;
  FStack_418.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_388,L"DockTabStack",L"CollapseTabWell",L"Hide Tabs");
  FText::FText((FText *)local_408,pFVar8);
  local_408[0x10] = true;
  local_3e0 = 0;
  local_3f0 = (undefined1  [8])0x0;
  FStack_3e8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_240,(TAttribute<FText> *)local_408,
             (TAttribute<FText> *)local_438,pFVar13,pFVar12,(FName)0x0,Button,(FName)0x0,
             (TAttribute<FText> *)local_468,(TAttribute<EVisibility> *)local_488);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f0,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_3e0 != 0) && (FStack_3e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e8,0,0,0x10);
    local_3e0 = local_3e0 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  if ((ITextData *)local_408._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_408._0_8_ + 0x10))();
  }
  if (local_388.TabType != (FName)0x0) {
    (**(code **)(*(longlong *)local_388.TabType + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_420,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_410 != 0) && (FStack_418.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_418.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_418,0,0,0x10);
    local_410 = local_410 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_420);
  if ((ITextData *)local_438._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_438._0_8_ + 0x10))();
  }
  if ((FName)local_3d8._0_8_ != (FName)0x0) {
    (**(code **)(*(longlong *)local_3d8._0_8_ + 0x10))();
  }
  FUIAction::~FUIAction(&local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_450,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_440 != 0) && (FStack_448.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_448.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_448,0,0,0x10);
    local_440 = local_440 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_448.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_450);
  if ((ITextData *)local_468._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_468._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_480,
             (FWriteAccessScope *)local_4b8);
  if (((int)local_470 != 0) && (FStack_478.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_478.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_478,0,0,0x10);
    local_470 = local_470 & 0xffffffff00000000;
  }
  if (local_4a8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_4b8._8_8_,(FDestructionSentinel *)local_4b8);
  }
  if (FStack_478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  pSVar14 = TSharedPtr<SDockingTabWell,1>::operator->(&this->TabWell);
  this_00 = SDockingTabWell::GetForegroundTab(pSVar14,(TSharedPtr<SDockTab,1> *)&local_3a8);
  if (this_00->Object != (SDockTab *)0x0) {
    SDockTab::GetTabManagerPtr(this_00->Object,(TSharedPtr<FTabManager,1> *)&local_498);
    if (local_498.Object != (SDockTab *)0x0) {
      pSVar15 = TSharedPtr<SDockTab,1>::operator->(this_00);
      bVar5 = SDockTab::IsTabLocked(pSVar15);
      if (bVar5) {
LAB_142753771:
        bVar5 = false;
      }
      else {
        pSVar15 = TSharedPtr<SDockTab,1>::operator->(this_00);
        EVar6 = SDockTab::GetVisualTabRole(pSVar15);
        if (EVar6 == MajorTab) goto LAB_142753771;
        this_01 = TSharedPtr<FTabManager,1>::operator->((TSharedPtr<FTabManager,1> *)&local_498);
        pSVar15 = TSharedPtr<SDockTab,1>::operator->(this_00);
        pFVar16 = SDockTab::GetLayoutIdentifier(pSVar15,&local_388);
        local_3d8._0_8_ = pFVar16->TabType;
        local_3d8._8_8_ = *(undefined8 *)&pFVar16->InstanceId;
        bVar5 = FTabManager::IsTabAllowedInSidebar(this_01,(FTabId *)local_3d8);
        if (!bVar5) goto LAB_142753771;
        bVar5 = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_498.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this_00->SharedReferenceCount).ReferenceController);
      if (bVar5) {
        local_488[0] = (TEnumAsByte<EVisibility::Private>)0x19;
        local_488[1] = false;
        local_470 = 0;
        local_480 = (undefined1  [8])0x0;
        FStack_478.Data = (FScriptContainerElement *)0x0;
        pTVar17 = TAttribute<FText>::TAttribute<FText>((TAttribute<FText> *)local_408);
        local_498.SharedReferenceCount.ReferenceController =
             local_498.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
        local_498.Object = (SDockTab *)CanMoveForegroundTabToSidebar;
        local_3d8._0_8_ = CanMoveForegroundTabToSidebar;
        local_3d8._8_8_ = local_498.SharedReferenceCount.ReferenceController;
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
        pTVar10 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateSP<SDockingTabStack>
                            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_290,
                             this,(pmf_fbcfad3b *)local_3d8);
        local_498.SharedReferenceCount.ReferenceController =
             local_498.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
        local_498.Object = (SDockTab *)MoveForegroundTabToSidebar;
        local_3d8._0_8_ = MoveForegroundTabToSidebar;
        local_3d8._8_8_ = local_498.SharedReferenceCount.ReferenceController;
        pTVar11 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateSP<SDockingTabStack>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_4b8,
                             this,(pmf_4841918d *)local_3d8);
        pFVar12 = FUIAction::FUIAction(&local_b8,pTVar11,pTVar10,RepeatDisabled);
        pFVar13 = FSlateIcon::FSlateIcon((FSlateIcon *)local_270);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_3c8,L"DockTabStack",L"MoveToSidebarTooltip",
                            L"Moves this tab to a sidebar drawer on the side of the window closest to the tab.\nThe tab can be opened from the drawer and will automatically close again when clicking off it."
                           );
        TAttribute<FText>::TAttribute<FText>((TAttribute<FText> *)local_438,pFVar8);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_388,L"DockTabStack",L"MoveToSidebar",L"Dock to Sidebar")
        ;
        TAttribute<FText>::TAttribute<FText>((TAttribute<FText> *)local_468,pFVar8);
        FBaseMenuBuilder::AddMenuEntry
                  ((FBaseMenuBuilder *)&local_240,(TAttribute<FText> *)local_468,
                   (TAttribute<FText> *)local_438,pFVar13,pFVar12,(FName)0x0,Button,(FName)0x0,
                   pTVar17,(TAttribute<EVisibility> *)local_488);
        TAttribute<FText>::~TAttribute<FText>((TAttribute<FText> *)local_468);
        FText::~FText((FText *)&local_388);
        TAttribute<FText>::~TAttribute<FText>((TAttribute<FText> *)local_438);
        FText::~FText((FText *)&local_3c8);
        FUIAction::~FUIAction(&local_b8);
        TAttribute<FText>::~TAttribute<FText>((TAttribute<FText> *)local_408);
        TAttribute<EVisibility>::~TAttribute<EVisibility>((TAttribute<EVisibility> *)local_488);
      }
      goto LAB_142753931;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_498.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this_00->SharedReferenceCount).ReferenceController);
LAB_142753931:
  FMenuBuilder::EndSection(&local_240);
  memset(local_378,0,200);
  local_2f8 = 0;
  local_360 = 0;
  local_340 = 0;
  local_320 = 0;
  local_300 = 0;
  local_2e0 = 0;
  local_2c0 = 0;
  local_298 = 0;
  local_470 = 0;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_358[0] = false;
  local_358[1] = false;
  local_350 = (undefined1  [8])0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  local_338[0] = false;
  local_338[1] = false;
  local_330 = (undefined1  [8])0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  local_318[0] = false;
  local_318[1] = false;
  local_310 = (undefined1  [8])0x0;
  FStack_308.Data = (FScriptContainerElement *)0x0;
  local_2f4 = false;
  local_2f0 = (undefined1  [8])0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  local_2d8[0] = Preferred;
  local_2d8[1] = false;
  local_2d0 = (undefined1  [8])0x0;
  FStack_2c8.Data = (FScriptContainerElement *)0x0;
  local_2b7 = false;
  local_2b5 = false;
  local_2b0 = false;
  local_2a8 = (undefined1  [8])0x0;
  FStack_2a0.Data = (FScriptContainerElement *)0x0;
  local_488[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_488[1] = false;
  local_480 = (undefined1  [8])0x0;
  FStack_478.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_468);
  local_468[0x10] = false;
  local_440 = 0;
  local_450 = (undefined1  [8])0x0;
  FStack_448.Data = (FScriptContainerElement *)0x0;
  pFVar9 = ::FName::FName(&local_res8,"DockingTabStackCloseTabs");
  FMenuBuilder::BeginSection
            (&local_240,*pFVar9,(TAttribute<FText> *)local_468,(TAttribute<EVisibility> *)local_488,
             (TAttribute<FMenuEntryResizeParams> *)local_378);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_450);
  if (FStack_448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_448.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_450);
  if ((ITextData *)local_468._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_468._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_480);
  if (FStack_478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a8);
  if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2d0);
  if (FStack_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f0);
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
  if (FStack_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_308.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_330);
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_330);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_350);
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_350);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  local_488[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_488[1] = false;
  local_470 = 0;
  local_480 = (undefined1  [8])0x0;
  FStack_478.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_408);
  local_498.SharedReferenceCount.ReferenceController =
       local_498.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_408[0x10] = false;
  local_498.Object = (SDockTab *)CanCloseForegroundTab;
  local_3d8._0_8_ = CanCloseForegroundTab;
  local_3d8._8_8_ = local_498.SharedReferenceCount.ReferenceController;
  local_3f0 = (undefined1  [8])0x0;
  FStack_3e8.Data = (FScriptContainerElement *)0x0;
  local_3e0 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pTVar10 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                      ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_290,this,
                       (pmf_fbcfad3b *)local_3d8);
  local_498.SharedReferenceCount.ReferenceController =
       local_498.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_498.Object = (SDockTab *)CloseForegroundTab;
  local_3d8._0_8_ = CloseForegroundTab;
  local_3d8._8_8_ = local_498.SharedReferenceCount.ReferenceController;
  pTVar11 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_4b8,this,
                       (pmf_4841918d *)local_3d8);
  pFVar12 = FUIAction::FUIAction(&local_b8,pTVar11,pTVar10,RepeatDisabled);
  pFVar13 = FSlateIcon::FSlateIcon((FSlateIcon *)local_270);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_3c8,L"DockTabStack",L"CloseTabTooltil",L"Close this tab.");
  FText::FText((FText *)local_438,pFVar8);
  local_438[0x10] = true;
  local_410 = 0;
  local_420 = (undefined1  [8])0x0;
  FStack_418.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_388,L"DockTabStack",L"CloseTab",L"Close");
  FText::FText((FText *)local_468,pFVar8);
  local_468[0x10] = true;
  local_440 = 0;
  local_450 = (undefined1  [8])0x0;
  FStack_448.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_240,(TAttribute<FText> *)local_468,
             (TAttribute<FText> *)local_438,pFVar13,pFVar12,(FName)0x0,Button,(FName)0x0,
             (TAttribute<FText> *)local_408,(TAttribute<EVisibility> *)local_488);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_450);
  if (FStack_448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_448.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_450);
  if ((ITextData *)local_468._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_468._0_8_ + 0x10))();
  }
  if (local_388.TabType != (FName)0x0) {
    (**(code **)(*(longlong *)local_388.TabType + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
  if (FStack_418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_420);
  if ((ITextData *)local_438._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_438._0_8_ + 0x10))();
  }
  if ((ITextData *)local_3c8 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3c8 + 0x10))();
  }
  FUIAction::~FUIAction(&local_b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  if (FStack_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  if ((ITextData *)local_408._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_408._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_480);
  if (FStack_478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  local_res8.ComparisonIndex.Value._0_1_ = 1;
  local_470 = 0;
  local_488[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_488[1] = false;
  local_480 = (undefined1  [8])0x0;
  FStack_478.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_408);
  pTStack_3c0 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_3c0 & 0xffffffff00000000);
  local_408[0x10] = false;
  local_3c8 = CanCloseTabsInDirectionOfForegroundTab;
  local_3d8._0_8_ = CanCloseTabsInDirectionOfForegroundTab;
  local_3d8._8_8_ = pTStack_3c0;
  local_3e0 = 0;
  local_3f0 = (undefined1  [8])0x0;
  FStack_3e8.Data = (FScriptContainerElement *)0x0;
  local_res20 = 0;
  local_498.Object = (SDockTab *)0x0;
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffffffffff00);
  pTVar10 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SDockingTabStack,enum_SDockingTabStack::ECloseTabsDirection>
                      ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_290,this,
                       (pmf_3239f95e *)local_3d8,(ECloseTabsDirection *)&local_res18);
  pTStack_3c0 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_3c0 & 0xffffffff00000000);
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffffffffff00);
  local_3c8 = CloseTabsInDirectionFromForegroundTab;
  local_3d8._0_8_ = CloseTabsInDirectionFromForegroundTab;
  local_3d8._8_8_ = pTStack_3c0;
  pTVar11 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SDockingTabStack,enum_SDockingTabStack::ETabsToClose_const_&,enum_SDockingTabStack::ECloseTabsDirection>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_4b8,this,
                       (pmf_50bcfc86 *)local_3d8,(ETabsToClose *)&local_res8,
                       (ECloseTabsDirection *)&local_res18);
  pFVar12 = FUIAction::FUIAction(&local_b8,pTVar11,pTVar10,RepeatDisabled);
  pFVar13 = FSlateIcon::FSlateIcon((FSlateIcon *)local_270);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_3a8,L"DockTabStack",L"CloseTabsToTheLeftTooltip",
                      L"Closes all tabs to the left of the active tab.");
  FText::FText((FText *)local_438,pFVar8);
  local_438[0x10] = true;
  local_410 = 0;
  local_420 = (undefined1  [8])0x0;
  FStack_418.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_388,L"DockTabStack",L"CloseTabsToTheLeft",
                      L"Close Tabs to the Left");
  FText::FText((FText *)local_468,pFVar8);
  local_468[0x10] = true;
  local_440 = 0;
  local_450 = (undefined1  [8])0x0;
  FStack_448.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_240,(TAttribute<FText> *)local_468,
             (TAttribute<FText> *)local_438,pFVar13,pFVar12,(FName)0x0,Button,(FName)0x0,
             (TAttribute<FText> *)local_408,(TAttribute<EVisibility> *)local_488);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_450);
  if (FStack_448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_448.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_450);
  if ((ITextData *)local_468._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_468._0_8_ + 0x10))();
  }
  if (local_388.TabType != (FName)0x0) {
    (**(code **)(*(longlong *)local_388.TabType + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
  if (FStack_418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_420);
  if ((ITextData *)local_438._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_438._0_8_ + 0x10))();
  }
  if ((SDockTab *)local_3a8 != (SDockTab *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3a8 + 0x10))();
  }
  FUIAction::~FUIAction(&local_b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  if (FStack_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  if ((ITextData *)local_408._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_408._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_480);
  if (FStack_478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  local_488[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_488[1] = false;
  local_470 = 0;
  local_480 = (undefined1  [8])0x0;
  FStack_478.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_408);
  local_3c8 = CanCloseTabsInDirectionOfForegroundTab;
  pTStack_3c0 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_3c0 & 0xffffffff00000000);
  local_3e0 = 0;
  local_408[0x10] = false;
  local_3f0 = (undefined1  [8])0x0;
  FStack_3e8.Data = (FScriptContainerElement *)0x0;
  local_res20 = 0;
  local_498.Object = (SDockTab *)0x0;
  local_res18.ComparisonIndex.Value._0_1_ = 1;
  local_3a8 = CanCloseTabsInDirectionOfForegroundTab;
  pTStack_3a0 = pTStack_3c0;
  pTVar10 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SDockingTabStack,enum_SDockingTabStack::ECloseTabsDirection>
                      ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_290,this,
                       (pmf_3239f95e *)&local_3a8,(ECloseTabsDirection *)&local_res18);
  pTStack_3c0 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_3c0 & 0xffffffff00000000);
  local_res18.ComparisonIndex.Value._0_1_ = 1;
  local_3c8 = CloseTabsInDirectionFromForegroundTab;
  local_3a8 = CloseTabsInDirectionFromForegroundTab;
  pTStack_3a0 = pTStack_3c0;
  pTVar11 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SDockingTabStack,enum_SDockingTabStack::ETabsToClose_const_&,enum_SDockingTabStack::ECloseTabsDirection>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_4b8,this,
                       (pmf_50bcfc86 *)&local_3a8,(ETabsToClose *)&local_res8,
                       (ECloseTabsDirection *)&local_res18);
  pFVar12 = FUIAction::FUIAction(&local_b8,pTVar11,pTVar10,RepeatDisabled);
  pFVar13 = FSlateIcon::FSlateIcon((FSlateIcon *)local_270);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_388,L"DockTabStack",L"CloseTabsToTheRightTooltip",
                      L"Closes all tabs to the right of the active tab.");
  FText::FText((FText *)local_438,pFVar8);
  local_438[0x10] = true;
  local_410 = 0;
  local_420 = (undefined1  [8])0x0;
  FStack_418.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_3d8,L"DockTabStack",L"CloseTabsToTheRight",
                      L"Close Tabs to the Right");
  FText::FText((FText *)local_468,pFVar8);
  local_468[0x10] = true;
  local_440 = 0;
  local_450 = (undefined1  [8])0x0;
  FStack_448.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_240,(TAttribute<FText> *)local_468,
             (TAttribute<FText> *)local_438,pFVar13,pFVar12,(FName)0x0,Button,(FName)0x0,
             (TAttribute<FText> *)local_408,(TAttribute<EVisibility> *)local_488);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_450);
  if (FStack_448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_448.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_450);
  if ((ITextData *)local_468._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_468._0_8_ + 0x10))();
  }
  if ((FName)local_3d8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3d8._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
  if (FStack_418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_420);
  if ((ITextData *)local_438._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_438._0_8_ + 0x10))();
  }
  if (local_388.TabType != (FName)0x0) {
    (**(code **)(*(longlong *)local_388.TabType + 0x10))();
  }
  FUIAction::~FUIAction(&local_b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  if (FStack_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  if ((ITextData *)local_408._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_408._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_480);
  if (FStack_478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  local_488[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_488[1] = false;
  local_470 = 0;
  local_480 = (undefined1  [8])0x0;
  FStack_478.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_408);
  pTStack_3c0 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_3c0 & 0xffffffff00000000);
  local_408[0x10] = false;
  local_3c8 = CanCloseAllButForegroundTab;
  local_3a8 = CanCloseAllButForegroundTab;
  pTStack_3a0 = pTStack_3c0;
  local_3f0 = (undefined1  [8])0x0;
  FStack_3e8.Data = (FScriptContainerElement *)0x0;
  local_3e0 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pTVar10 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SDockingTabStack>
                      ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_290,this,
                       (pmf_fbcfad3b *)&local_3a8);
  local_4b8._0_8_ = (atomic<unsigned___int64>)0x0;
  local_4b8._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
  local_4a8._0_1_ = false;
  local_4a8._1_3_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
             (FWriteAccessScope *)&local_3c8);
  local_3b0 = local_4b8 + 8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_4b8 + 8));
  pTVar21 = local_res10;
  if (puVar18 != (undefined8 *)0x0) {
    local_498.Object = (SDockTab *)CloseAllButForegroundTab;
    local_498.SharedReferenceCount.ReferenceController = pTStack_3a0 & 0xffffffff00000000;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_3a8);
    pTVar21 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar19->Object;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4ETabsToClose_SDockingTabStack____6B_
    ;
    *(undefined1 *)(puVar18 + 1) = 1;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSDockingTabStack___00__A6AXXZUFDefaultDelegateUserPolicy__W4ETabsToClose_1___6B_
    ;
    puVar18[3] = pSVar1;
    puVar18[4] = pTVar21;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar18[5] = local_498.Object;
    puVar18[6] = local_498.SharedReferenceCount.ReferenceController;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3a0)
    ;
  }
  if (local_3b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_3c0,(FDestructionSentinel *)&local_3c8);
  }
  pFVar12 = FUIAction::FUIAction
                      (&local_b8,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_4b8,pTVar10
                       ,RepeatDisabled);
  pFVar13 = FSlateIcon::FSlateIcon((FSlateIcon *)local_270);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_388,L"DockTabStack",L"CloseOtherTabsTooltil",
                      L"Closes all tabs except for the active tab.");
  FText::FText((FText *)local_438,pFVar8);
  local_438[0x10] = true;
  local_410 = 0;
  local_420 = (undefined1  [8])0x0;
  FStack_418.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_3d8,L"DockTabStack",L"CloseOtherTabs",L"Close Other Tabs");
  FText::FText((FText *)local_468,pFVar8);
  local_468[0x10] = true;
  local_440 = 0;
  local_450 = (undefined1  [8])0x0;
  FStack_448.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_240,(TAttribute<FText> *)local_468,
             (TAttribute<FText> *)local_438,pFVar13,pFVar12,local_res18,Button,local_res8,
             (TAttribute<FText> *)local_408,(TAttribute<EVisibility> *)local_488);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_450,
             (FWriteAccessScope *)&local_3a8);
  if (((int)local_440 != 0) && (FStack_448.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_448.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_448,0,0,0x10);
    local_440 = local_440 & 0xffffffff00000000;
  }
  if (local_398 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_3a0,(FDestructionSentinel *)&local_3a8);
  }
  if (FStack_448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_448.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_450);
  if ((ITextData *)local_468._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_468._0_8_ + 0x10))();
  }
  if ((FName)local_3d8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3d8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_420,
             (FWriteAccessScope *)&local_3a8);
  if (((int)local_410 != 0) && (FStack_418.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_418.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_418,0,0,0x10);
    local_410 = local_410 & 0xffffffff00000000;
  }
  if (local_398 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_3a0,(FDestructionSentinel *)&local_3a8);
  }
  if (FStack_418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_420);
  if ((ITextData *)local_438._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_438._0_8_ + 0x10))();
  }
  if (local_388.TabType != (FName)0x0) {
    (**(code **)(*(longlong *)local_388.TabType + 0x10))();
  }
  FUIAction::~FUIAction(&local_b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  if (FStack_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  if ((ITextData *)local_408._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_408._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_480);
  if (FStack_478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  FMenuBuilder::EndSection(&local_240);
  pSVar14 = TSharedPtr<SDockingTabWell,1>::operator->(&this->TabWell);
  SDockingTabWell::GetForegroundTab(pSVar14,&local_498);
  if (local_498.Object != (SDockTab *)0x0) {
    pSVar15 = TSharedPtr<SDockTab,1>::operator->(&local_498);
    SDockTab::ExtendContextMenu(pSVar15,&local_240);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_498.SharedReferenceCount.ReferenceController);
  FMenuBuilder::MakeWidget
            (&local_240,(TSharedRef<SWidget,1> *)local_res10,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_240);
  return (TSharedRef<SWidget,1> *)local_res10;
}

// MoveForegroundTabToSidebar @ 14275c710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::MoveForegroundTabToSidebar(SDockingTabStack *this)

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SDockTab,1> *pTVar4;
  FSharedReferencer<1> FVar5;
  SDockTab *pSVar6;
  TSharedRef<SDockTab,1> local_38;
  undefined8 local_28;
  undefined8 local_20;
  
  FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
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
  pSVar1 = (this->TabWell).Object;
  pSVar6 = (pSVar1->TabBeingDraggedPtr).Object;
  if (pSVar6 == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_14275c832;
    }
    pTVar4 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
    FVar5.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar4->Object;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_20 = 0;
    local_28 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pSVar6 == (SDockTab *)0x0) goto LAB_14275c832;
LAB_14275c7d5:
    local_38.Object = pSVar6;
    local_38.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) goto LAB_14275c7e4;
  }
  else {
    FVar5.ReferenceController =
         (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14275c7d5;
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_38.Object = pSVar6;
LAB_14275c7e4:
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_38.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
  }
  FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.Object == (SDockTab *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  MoveTabToSidebar(this,&local_38);
LAB_14275c832:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// MoveTabToSidebar @ 14275c860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::MoveTabToSidebar(SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1)

{
  FName *pFVar1;
  SDockingArea *this_00;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  FTabId *pFVar6;
  longlong *plVar7;
  uint uVar8;
  FName *pFVar9;
  TSharedRef<SDockTab,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FTabId local_48;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  pFVar6 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_48);
  pFVar1 = (FName *)(this->Tabs).AllocatorInstance.Data;
  local_38 = (pFVar6->TabType).ComparisonIndex.Value;
  uStack_34 = (pFVar6->TabType).Number;
  uStack_30 = pFVar6->InstanceId;
  uStack_2c = *(undefined4 *)&pFVar6->Flags;
  pFVar9 = pFVar1;
  do {
    if (pFVar9 == pFVar1 + (longlong)(this->Tabs).ArrayNum * 4) {
LAB_14275caa3:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    if ((((pFVar9[2].ComparisonIndex.Value & 1) != 0) && (*pFVar9 == pFVar6->TabType)) &&
       ((uStack_30 == 0xffffffff || (uStack_30 == pFVar9[1].ComparisonIndex.Value)))) {
      uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar1 >> 5);
      if (uVar8 != 0xffffffff) {
        plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x260))(this,local_58);
        if ((*plVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_68.Object = param_1->Object;
        this_00 = (SDockingArea *)*plVar7;
        local_68.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FVar4 = (FScriptContainerElement)SDockingArea::AddTabToSidebar(this_00,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
        if (FVar4 != (FScriptContainerElement)0x2) {
          uVar5 = 0;
          if ((int)uVar8 < (this->Tabs).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)((this->Tabs).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20 + 0x10)
               = 4;
          uVar5 = 0;
          if ((int)uVar8 < (this->Tabs).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (this->Tabs).AllocatorInstance.Data[(longlong)(int)uVar8 * 0x20 + 0x14] = FVar4;
          if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          SDockingTabWell::RemoveAndDestroyTab((this->TabWell).Object,param_1,TabRemoval_Sidebar);
        }
      }
      goto LAB_14275caa3;
    }
    pFVar9 = pFVar9 + 4;
  } while( true );
}

// OnDragLeave @ 1427623a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::OnDragLeave(SDockingTabStack *this,FDragDropEvent *param_1)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  FString *pFVar5;
  
  pFVar1 = (param_1->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar5 = FDockingDragOperation::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1,pFVar5);
    if (cVar4 != '\0') {
      pTVar3 = (param_1->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_1->Content).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar1 == (FDragDropOperation *)0x0) {
        return;
      }
      HideCross(this);
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// OnDragOver @ 142762bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabStack::OnDragOver
          (SDockingTabStack *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  FDockingDragOperation *this_00;
  TReferenceControllerBase<1> *pTVar3;
  SDockingNode *pSVar4;
  SOverlay *pSVar5;
  FDeprecateSlateVector2D FVar6;
  char cVar7;
  bool bVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FReply *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 auStack_118 [32];
  FDeprecateSlateVector2D local_f8;
  TSharedRef<SDockingNode,1> local_f0;
  TVector2<float>_u_0 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  TSharedRef<SWidget,1> local_c8;
  TSharedRef<SWidget,1> local_b8;
  FSlateRotatedRect local_a8;
  FGeometry local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar1 = (param_2->Content).Object;
  local_f8 = (FDeprecateSlateVector2D)param_1;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_142762dc4:
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FDockingDragOperation::GetTypeId();
    cVar7 = (*pcVar2)(pFVar1);
    if (cVar7 == '\0') goto LAB_142762dc4;
    pTVar11 = (param_2->Content).SharedReferenceCount.ReferenceController;
    this_00 = (FDockingDragOperation *)(param_2->Content).Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FDockingDragOperation *)0x0) {
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_c8);
      pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar4 = (SDockingNode *)pTVar9->Object;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f0.Object = pSVar4;
      local_f0.SharedReferenceCount.ReferenceController = pTVar3;
      bVar8 = FDockingDragOperation::CanDockInNode(this_00,&local_f0,DockingViaTarget);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (bVar8) {
        if ((this->OverlayManagement).ContentAreaOverlay.Object == (SOverlay *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FReply *)(*pcVar2)();
            return pFVar10;
          }
        }
        pTVar3 = (this->OverlayManagement).ContentAreaOverlay.SharedReferenceCount.
                 ReferenceController;
        pSVar5 = (this->OverlayManagement).ContentAreaOverlay.Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pSVar5 == (SOverlay *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FReply *)(*pcVar2)();
            return pFVar10;
          }
        }
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8.Object = (SWidget *)pSVar5;
        local_b8.SharedReferenceCount.ReferenceController = pTVar3;
        SWidget::FindChildGeometry((SWidget *)this,&local_90,(FGeometry *)local_f8,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        local_f8 = local_90.Size;
        FVar6 = local_f8;
        local_f8._0_4_ = local_90.Size._0_4_;
        local_f8._4_4_ = local_90.Size._4_4_;
        local_d8 = local_f8._0_4_;
        local_cc = local_f8._4_4_;
        local_e0 = (TVector2<float>_u_0)0x0;
        local_d4 = 0;
        local_f8 = FVar6;
        TransformRect<TTransform2<float>_>
                  (&local_a8,&local_90.AccumulatedRenderTransform,
                   (FSlateRotatedRect *)&local_e0._s_0);
        bVar8 = FSlateRotatedRect::IsUnderLocation
                          (&local_a8,(FDeprecateVector2DParameter)param_2->_padding_);
        if (bVar8) {
          ShowCross(this);
          bVar8 = true;
        }
        else {
          HideCross(this);
          bVar8 = true;
        }
        goto LAB_142762dc8;
      }
    }
  }
  bVar8 = false;
LAB_142762dc8:
  FReply::FReply(__return_storage_ptr__,bVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// OnDrop @ 142763870

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabStack::OnDrop
          (SDockingTabStack *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FDockingDragOperation::GetTypeId();
    cVar4 = (*pcVar2)();
    if (cVar4 != '\0') {
      pTVar3 = (param_2->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_2->Content).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar1 != (FDragDropOperation *)0x0) {
        HideCross(this);
      }
      goto LAB_1427638e9;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_1427638e9:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnFocusChanging @ 142763de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::OnFocusChanging
          (SDockingTabStack *this,FWeakWidgetPath *param_1,FWidgetPath *param_2,FFocusEvent *param_3
          )

{
  SDockingTabWell *pSVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SDockTab,1> *pTVar4;
  TSharedRef<FGlobalTabmanager,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SDockTab *this_00;
  TSharedPtr<SDockTab,1> local_18;
  
  if ((this->TabWell).Object == (SDockingTabWell *)0x0) {
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
  pSVar1 = (this->TabWell).Object;
  this_00 = (pSVar1->TabBeingDraggedPtr).Object;
  if (this_00 == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_142763ed5;
    }
    pTVar4 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    this_00 = pTVar4->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = this_00;
    local_18.SharedReferenceCount.ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (this_00 == (SDockTab *)0x0) goto LAB_142763ed5;
  }
  else {
    pTVar6 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    local_18.Object = this_00;
    local_18.SharedReferenceCount.ReferenceController = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  bVar3 = FWidgetPath::ContainsWidget(param_2,(SWidget *)this);
  if (bVar3) {
    pTVar5 = FGlobalTabmanager::Get();
    FGlobalTabmanager::SetActiveTab(pTVar5->Object,&local_18);
    SDockTab::ActivateInParent(this_00,SetDirectly);
  }
LAB_142763ed5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// OnKeyDown @ 142765990

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabStack::OnKeyDown
          (SDockingTabStack *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FUICommandList *this_00;
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FReply *pFVar4;
  FKey local_28;
  
  if ((this->ActionList).Object == (FUICommandList *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar1)();
      return pFVar4;
    }
  }
  lVar2 = param_2->_padding_;
  this_00 = (this->ActionList).Object;
  bVar3 = *(bool *)((longlong)&param_2->_padding_ + 2);
  local_28.KeyName = (param_2->Key).KeyName;
  local_28.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar3 = FUICommandList::ConditionalProcessCommandBindings
                    (this_00,&local_28,(lVar2 & 0xc) != 0,(lVar2 & 0x30) != 0,(lVar2 & 3) != 0,
                     (lVar2 & 0xc0) != 0,bVar3);
  if (bVar3) {
    FReply::FReply(__return_storage_ptr__,true);
  }
  else {
    SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  }
  return __return_storage_ptr__;
}

// OnLastTabRemoved @ 142765a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::OnLastTabRemoved(SDockingTabStack *this)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_48;
  FDockingStackOptionalContent local_38;
  
  local_38.ContentLeft.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (this->bIsDocumentArea == false) {
    local_38.ContentLeft.Object = SNullWidget::NullWidget.Object;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.ContentRight.Object = SNullWidget::NullWidget.Object;
    local_38.ContentRight.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.TitleBarContentRight.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    local_38.TitleBarContentRight.Object = SNullWidget::NullWidget.Object;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SetNodeContent(this,&SNullWidget::NullWidget,&local_38);
  }
  else {
    local_38.ContentLeft.Object = SNullWidget::NullWidget.Object;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.ContentRight.Object = SNullWidget::NullWidget.Object;
    local_38.ContentRight.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.TitleBarContentRight.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    local_38.TitleBarContentRight.Object = SNullWidget::NullWidget.Object;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = SDocumentAreaWidget::MakeDocumentAreaWidget(&local_48);
    SetNodeContent(this,pTVar1,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.TitleBarContentRight.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ContentRight.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ContentLeft.SharedReferenceCount.ReferenceController);
  return;
}

// OnMouseButtonDown @ 142765f00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabStack::OnMouseButtonDown
          (SDockingTabStack *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  SDockingTabWell *pSVar1;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *pTVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  FReply *pFVar8;
  TSharedRef<SDockTab,1> *pTVar9;
  TSharedRef<FGlobalTabmanager,1> *pTVar10;
  int iVar11;
  SDockTab *this_00;
  TReferenceControllerBase<1> *pTVar12;
  ForElementType<FSetElementId> FVar13;
  TSharedPtr<SDockTab,1> local_28;
  
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FReply *)(*pcVar3)();
    return pFVar8;
  }
  pSVar1 = (this->TabWell).Object;
  this_00 = (pSVar1->TabBeingDraggedPtr).Object;
  if (this_00 == (SDockTab *)0x0) {
    if (((pSVar1->Tabs).Children.ArrayNum < 1) || (pSVar1->ForegroundTabIndex < 0)) {
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      this_00 = (SDockTab *)0x0;
    }
    else {
      pTVar9 = TSlotlessChildren<SDockTab>::operator[](&pSVar1->Tabs,pSVar1->ForegroundTabIndex);
      pTVar12 = (pTVar9->SharedReferenceCount).ReferenceController;
      this_00 = pTVar9->Object;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    local_28.Object = this_00;
    local_28.SharedReferenceCount.ReferenceController = pTVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar12 = (pSVar1->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    local_28.Object = this_00;
    local_28.SharedReferenceCount.ReferenceController = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  FVar4 = EKeys::LeftMouseButton.KeyName;
  pTVar2 = param_2->PressedButtons;
  uVar7 = ::GetTypeHash(EKeys::LeftMouseButton.KeyName.ComparisonIndex.Value);
  FVar5 = EKeys::RightMouseButton.KeyName;
  if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
    FVar13 = (pTVar2->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&pTVar2->Hash;
    }
    iVar11 = *(int *)((longlong)FVar13 +
                     (ulonglong)(pTVar2->HashSize - 1U & uVar7 + FVar4.Number) * 4);
    if (iVar11 != -1) {
      do {
        if (*(FName *)((longlong)iVar11 * 0x20 + *(longlong *)&pTVar2->Elements) ==
            EKeys::LeftMouseButton.KeyName) goto LAB_142766144;
        iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + *(longlong *)&pTVar2->Elements);
      } while (iVar11 != -1);
    }
  }
  pTVar2 = param_2->PressedButtons;
  uVar7 = ::GetTypeHash(EKeys::RightMouseButton.KeyName.ComparisonIndex.Value);
  FVar4 = EKeys::MiddleMouseButton.KeyName;
  if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
    FVar13 = (pTVar2->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&pTVar2->Hash;
    }
    iVar11 = *(int *)((longlong)FVar13 +
                     (ulonglong)(pTVar2->HashSize - 1U & uVar7 + FVar5.Number) * 4);
    if (iVar11 != -1) {
      do {
        if (*(FName *)((longlong)iVar11 * 0x20 + *(longlong *)&pTVar2->Elements) ==
            EKeys::RightMouseButton.KeyName) goto LAB_142766144;
        iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + *(longlong *)&pTVar2->Elements);
      } while (iVar11 != -1);
    }
  }
  pTVar2 = param_2->PressedButtons;
  uVar7 = ::GetTypeHash(EKeys::MiddleMouseButton.KeyName.ComparisonIndex.Value);
  if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
    FVar13 = (pTVar2->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&pTVar2->Hash;
    }
    iVar11 = *(int *)((longlong)FVar13 +
                     (ulonglong)(pTVar2->HashSize - 1U & uVar7 + FVar4.Number) * 4);
    if (iVar11 != -1) {
      do {
        if (*(FName *)((longlong)iVar11 * 0x20 + *(longlong *)&pTVar2->Elements) ==
            EKeys::MiddleMouseButton.KeyName) goto LAB_142766144;
        iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + *(longlong *)&pTVar2->Elements);
      } while (iVar11 != -1);
    }
  }
LAB_142766116:
  bVar6 = false;
LAB_142766118:
  FReply::FReply(__return_storage_ptr__,bVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return __return_storage_ptr__;
LAB_142766144:
  if ((this_00 != (SDockTab *)0x0) && (bVar6 = SDockTab::IsActive(this_00), !bVar6)) {
    pTVar10 = FGlobalTabmanager::Get();
    FGlobalTabmanager::SetActiveTab(pTVar10->Object,&local_28);
    bVar6 = true;
    goto LAB_142766118;
  }
  goto LAB_142766116;
}

// OnResized @ 14276a3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::OnResized(SDockingTabStack *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FTabManager,1> *pTVar3;
  SDockingArea *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<FTabManager,1> local_18;
  
  (**(code **)(this->_padding_ + 0x260))(this,&local_28);
  if (local_28 != (SDockingArea *)0x0) {
    if ((local_28 == (SDockingArea *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar3 = SDockingArea::GetTabManager(local_28,&local_18);
    FTabManager::RequestSavePersistentLayout(pTVar3->Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// OnTabClosed @ 14276a4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::OnTabClosed
          (SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1,ELayoutModification param_2)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FName *pFVar7;
  FTabId local_18;
  
  SDockTab::GetLayoutIdentifier(param_1->Object,&local_18);
  if (local_18.InstanceId == -1) {
    if (param_2 != TabRemoval_Sidebar) {
      pFVar2 = (FName *)(this->Tabs).AllocatorInstance.Data;
      iVar1 = (this->Tabs).ArrayNum;
      pFVar7 = pFVar2;
      if (pFVar2 != pFVar2 + (longlong)iVar1 * 4) {
        while (((pFVar7[2].ComparisonIndex.Value & 5) == 0 || (*pFVar7 != local_18.TabType))) {
          pFVar7 = pFVar7 + 4;
          if (pFVar7 == pFVar2 + (longlong)iVar1 * 4) {
            return;
          }
        }
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 5);
        if (uVar6 != 0xffffffff) {
          uVar5 = 0;
          if ((int)uVar6 < iVar1) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)((this->Tabs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20 + 0x10)
               = 2;
          return;
        }
      }
    }
  }
  else {
    RemovePersistentTab(this,&local_18);
  }
  return;
}

// OnTabRemoved @ 14276bde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::OnTabRemoved(SDockingTabStack *this,FTabId *param_1)

{
  int *piVar1;
  TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  
  uVar7 = param_1->InstanceId;
  pTVar2 = &this->Tabs;
  pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
  iVar10 = (this->Tabs).ArrayNum;
  pFVar12 = pFVar4;
  if (pFVar4 != pFVar4 + (longlong)iVar10 * 4) {
    while ((((pFVar12[2].ComparisonIndex.Value & 7) == 0 || (*pFVar12 != param_1->TabType)) ||
           ((uVar7 != 0xffffffff && (uVar7 != pFVar12[1].ComparisonIndex.Value))))) {
      pFVar12 = pFVar12 + 4;
      if (pFVar12 == pFVar4 + (longlong)iVar10 * 4) {
        return;
      }
    }
    uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 5);
    if (uVar11 != 0xffffffff) {
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar3 = (this->Tabs).ArrayNum;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      iVar10 = iVar3 + ~uVar11;
      if (1 < iVar10) {
        iVar10 = 1;
      }
      if (iVar10 != 0) {
        memmove(pFVar5 + (longlong)(int)uVar11 * 0x20,pFVar5 + (longlong)(iVar3 - iVar10) * 0x20,
                (longlong)iVar10 << 5);
      }
      piVar1 = &(this->Tabs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,&pTVar2->AllocatorInstance,(this->Tabs).ArrayNum,&(this->Tabs).ArrayMax);
    }
  }
  return;
}

// OnUserAttemptingDock @ 14276cd20

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabStack::OnUserAttemptingDock
          (SDockingTabStack *this,FReply *__return_storage_ptr__,RelativeDirection param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  SDockingTabStack *this_00;
  char cVar3;
  bool bVar4;
  TSharedRef<SDockingTabStack,1> *pTVar5;
  FReply *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<SDockTab,1> local_38;
  TSharedRef<SDockingTabStack,1> local_28;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_14276ce63:
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FDockingDragOperation::GetTypeId();
    cVar3 = (*pcVar2)(pFVar1);
    if (cVar3 == '\0') goto LAB_14276ce63;
    pTVar7 = (param_2->Content).SharedReferenceCount.ReferenceController;
    pFVar1 = (param_2->Content).Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FDragDropOperation *)0x0) {
      pTVar5 = CreateNewTabStackBySplitting(this,&local_28,param_1);
      local_38.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar1[1]._padding_;
      local_38.Object = (SDockTab *)pFVar1[1]._padding_;
      this_00 = pTVar5->Object;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_38.Object == (SDockTab *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar2)();
          return pFVar6;
        }
      }
      if (local_38.Object == (SDockTab *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar2)();
          return pFVar6;
        }
      }
      OpenTab(this_00,&local_38,-1,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      HideCross(this);
      bVar4 = true;
      goto LAB_14276ce67;
    }
  }
  bVar4 = false;
LAB_14276ce67:
  FReply::FReply(__return_storage_ptr__,bVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// OpenPersistentTab @ 14276dfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
SDockingTabStack::OpenPersistentTab(SDockingTabStack *this,FTabId *param_1,int param_2)

{
  int *piVar1;
  TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *this_00;
  FName *pFVar2;
  TSharedRef<SDockTab,1> *pTVar3;
  code *pcVar4;
  FName *pFVar5;
  bool bVar6;
  int iVar7;
  TSlotlessChildren<SDockTab> *pTVar8;
  FTabId *pFVar9;
  undefined4 uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  FName *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  FName local_d8;
  FName FStack_d0;
  undefined4 local_c8;
  FScriptContainerElement local_c4;
  undefined4 local_c0;
  FScriptContainerElement local_bc;
  FScriptContainerElement local_bb;
  FScriptContainerElement local_ba;
  FName local_b8;
  FName FStack_b0;
  undefined4 local_a8;
  FScriptContainerElement local_a4;
  undefined4 local_a0;
  FScriptContainerElement local_9c;
  FScriptContainerElement local_9b;
  FScriptContainerElement local_9a;
  undefined1 local_98 [16];
  Type local_88;
  FScriptContainerElement local_84;
  float local_80;
  FScriptContainerElement local_7c;
  FScriptContainerElement local_7b;
  FScriptContainerElement local_7a;
  FName local_78;
  undefined8 uStack_70;
  FName local_60;
  undefined8 uStack_58;
  FTabId local_48;
  
  local_78 = param_1->TabType;
  uStack_70._0_4_ = param_1->InstanceId;
  uStack_70._4_1_ = param_1->Flags;
  uStack_70._5_3_ = *(undefined3 *)&param_1->field_0xd;
  this_00 = &this->Tabs;
  pFVar2 = (FName *)(this_00->AllocatorInstance).Data;
  uVar18 = 0xffffffff;
  for (pFVar17 = pFVar2; pFVar5 = pFVar2, pFVar17 != pFVar2 + (longlong)(this->Tabs).ArrayNum * 4;
      pFVar17 = pFVar17 + 4) {
    if ((((pFVar17[2].ComparisonIndex.Value & 6) != 0) && (*pFVar17 == local_78)) &&
       (((undefined4)uStack_70 == 0xffffffff ||
        ((undefined4)uStack_70 == pFVar17[1].ComparisonIndex.Value)))) {
      uVar16 = (uint)((longlong)pFVar17 - (longlong)pFVar2 >> 5);
      if (uVar16 == 0xffffffff) goto joined_r0x00014276e051;
      goto LAB_14276e1d7;
    }
  }
  uVar16 = 0xffffffff;
joined_r0x00014276e051:
  do {
    local_60 = local_78;
    uStack_58 = uStack_70;
    if (pFVar5 == pFVar2 + (longlong)(this->Tabs).ArrayNum * 4) goto LAB_14276e1d7;
    if ((((pFVar5[2].ComparisonIndex.Value & 1) != 0) && (*pFVar5 == local_78)) &&
       ((undefined4)uStack_70 == pFVar5[1].ComparisonIndex.Value)) {
      uVar13 = (uint)((longlong)pFVar5 - (longlong)pFVar2 >> 5);
      if (uVar13 != 0xffffffff) {
        pTVar8 = GetTabs(this);
        local_e8.Data = (FScriptContainerElement *)0x0;
        iVar7 = (pTVar8->Children).ArrayNum;
        pTVar3 = (TSharedRef<SDockTab,1> *)(pTVar8->Children).AllocatorInstance.Data;
        local_e0 = iVar7;
        if (iVar7 == 0) {
          local_dc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar7,0,&local_e8,iVar7,&local_dc);
          ConstructItems<TSharedRef<SDockTab,1>,TSharedRef<SDockTab,1>,int>
                    (local_e8.Data,pTVar3,iVar7);
        }
        uVar19 = 0;
        uVar15 = uVar19;
        uVar14 = uVar13;
        if (0 < local_e0) break;
        goto LAB_14276e1b1;
      }
      goto LAB_14276e1d7;
    }
    pFVar5 = pFVar5 + 4;
  } while( true );
  while( true ) {
    uVar15 = (ulonglong)(uVar20 + 1);
    uVar19 = uVar19 + 0x10;
    uVar14 = uVar13;
    if (local_e0 <= (int)(uVar20 + 1)) break;
    uVar20 = (uint)uVar15;
    uVar14 = 0;
    if ((int)uVar20 < local_e0) {
      uVar14 = ~uVar20 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    pFVar9 = SDockTab::GetLayoutIdentifier(*(SDockTab **)(local_e8.Data + uVar19),&local_48);
    if ((param_1->TabType == pFVar9->TabType) &&
       (((uVar14 = uVar16, param_1->InstanceId == -1 || (pFVar9->InstanceId == -1)) ||
        (param_1->InstanceId == pFVar9->InstanceId)))) break;
  }
LAB_14276e1b1:
  uVar16 = uVar14;
  DestructItems<TSharedRef<SDockTab,1>,int>((TSharedRef<SDockTab,1> *)local_e8.Data,local_e0);
  if ((TSharedRef<SDockTab,1> *)local_e8.Data != (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_e8.Data);
  }
LAB_14276e1d7:
  uVar15 = 0;
  if (param_2 == -1) {
    if (uVar16 == 0xffffffff) {
      local_d8 = param_1->TabType;
      FStack_d0 = *(FName *)&param_1->InstanceId;
      pFVar2 = (FName *)(this_00->AllocatorInstance).Data;
      local_c8 = 1;
      local_c4 = (FScriptContainerElement)0x2;
      local_c0 = 0;
      local_bc = (FScriptContainerElement)0x0;
      local_ba = (FScriptContainerElement)0x0;
      if (((pFVar2 <= &local_d8) && (&local_d8 < pFVar2 + (longlong)(this->Tabs).ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar7 = (this->Tabs).ArrayNum;
      piVar1 = &(this->Tabs).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x420,&this_00->AllocatorInstance,piVar1);
      }
      pFVar12 = (this_00->AllocatorInstance).Data;
      (this->Tabs).ArrayNum = iVar7 + 1;
      lVar11 = (longlong)iVar7 * 0x20;
      *(FName *)(pFVar12 + lVar11) = local_d8;
      ((FName *)(pFVar12 + lVar11))[1] = FStack_d0;
      *(undefined4 *)(pFVar12 + lVar11 + 0x10) = local_c8;
      pFVar12[lVar11 + 0x14] = local_c4;
      *(undefined4 *)(pFVar12 + lVar11 + 0x18) = local_c0;
      pFVar12[lVar11 + 0x1e] = (FScriptContainerElement)0x0;
      pFVar12[lVar11 + 0x1c] = local_bc;
      pFVar12[lVar11 + 0x1e] = local_ba;
      if (local_ba != (FScriptContainerElement)0x0) {
        pFVar12[lVar11 + 0x1d] = local_bb;
      }
      param_2 = (this->Tabs).ArrayNum - 1;
    }
    else {
      uVar18 = 0;
      if ((int)uVar16 < (this->Tabs).ArrayNum) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      pFVar12 = (this_00->AllocatorInstance).Data;
      uVar10 = 4;
      if (pFVar12[(longlong)(int)uVar16 * 0x20 + 0x14] == (FScriptContainerElement)0x2) {
        uVar10 = 1;
      }
      *(undefined4 *)(pFVar12 + (longlong)(int)uVar16 * 0x20 + 0x10) = uVar10;
      param_2 = uVar16;
    }
  }
  else {
    uVar13 = (this->Tabs).ArrayNum;
    uVar19 = uVar15;
    uVar21 = uVar15;
    if (0 < (int)uVar13) {
      do {
        bVar6 = uVar18 == 0xffffffff;
        if (!bVar6) goto LAB_14276e41d;
        uVar14 = (uint)uVar15;
        uVar13 = 0;
        if ((int)uVar14 < (this->Tabs).ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if (*(int *)((this_00->AllocatorInstance).Data + uVar21 + 0x10) == 1) {
          if ((int)uVar19 == param_2) {
            uVar18 = uVar14;
          }
          uVar19 = (ulonglong)((int)uVar19 + 1);
        }
        uVar13 = (this->Tabs).ArrayNum;
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar21 = uVar21 + 0x20;
      } while ((int)(uVar14 + 1) < (int)uVar13);
    }
    bVar6 = uVar18 == 0xffffffff;
LAB_14276e41d:
    if (!bVar6) {
      uVar13 = uVar18;
    }
    if (uVar16 == 0xffffffff) {
      pFVar2 = (FName *)(this_00->AllocatorInstance).Data;
      local_a4 = (FScriptContainerElement)0x2;
      local_a0 = 0;
      local_b8 = param_1->TabType;
      FStack_b0 = *(FName *)&param_1->InstanceId;
      local_9c = (FScriptContainerElement)0x0;
      local_a8 = 1;
      local_9a = (FScriptContainerElement)0x0;
      if (((pFVar2 <= &local_b8) && (&local_b8 < pFVar2 + (longlong)(this->Tabs).ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar7 = (this->Tabs).ArrayNum;
      piVar1 = &(this->Tabs).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x420,&this_00->AllocatorInstance,piVar1);
      }
      pFVar12 = (this_00->AllocatorInstance).Data;
      (this->Tabs).ArrayNum = iVar7 + 1;
      lVar11 = (longlong)(int)uVar13 * 0x20;
      pFVar12 = pFVar12 + lVar11;
      memmove(pFVar12 + 0x20,pFVar12,(longlong)(int)(iVar7 - uVar13) << 5);
      pFVar12 = (this_00->AllocatorInstance).Data;
      *(FName *)(pFVar12 + lVar11) = local_b8;
      ((FName *)(pFVar12 + lVar11))[1] = FStack_b0;
      *(undefined4 *)(pFVar12 + lVar11 + 0x10) = local_a8;
      pFVar12[lVar11 + 0x14] = local_a4;
      *(undefined4 *)(pFVar12 + lVar11 + 0x18) = local_a0;
      pFVar12[lVar11 + 0x1e] = (FScriptContainerElement)0x0;
      pFVar12[lVar11 + 0x1c] = local_9c;
      pFVar12[lVar11 + 0x1e] = local_9a;
      if (local_9a != (FScriptContainerElement)0x0) {
        pFVar12[lVar11 + 0x1d] = local_9b;
      }
    }
    else {
      uVar18 = 0;
      if ((int)uVar16 < (this->Tabs).ArrayNum) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      pFVar12 = (this_00->AllocatorInstance).Data;
      lVar11 = (longlong)(int)uVar16 * 0x20;
      local_98._0_8_ = *(FName *)(pFVar12 + lVar11);
      local_98._8_8_ = ((FName *)(pFVar12 + lVar11))[1];
      local_84 = pFVar12[lVar11 + 0x14];
      local_80 = *(float *)(pFVar12 + lVar11 + 0x18);
      local_7c = pFVar12[lVar11 + 0x1c];
      local_7a = pFVar12[lVar11 + 0x1e];
      if (local_7a != (FScriptContainerElement)0x0) {
        local_7b = pFVar12[lVar11 + 0x1d];
      }
      TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,uVar16,Default);
      if ((int)uVar16 <= (int)uVar13) {
        uVar13 = uVar13 - 1;
      }
      local_88 = OpenedTab;
      TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::Insert(this_00,(FTab *)local_98,uVar13)
      ;
    }
  }
  return param_2;
}

// OpenTab @ 14276e630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::OpenTab
          (SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1,int param_2,bool param_3)

{
  char cVar1;
  uint uVar2;
  SDockTab *pSVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FTabId *pFVar7;
  longlong *plVar8;
  TSharedRef<FTabManager,1> *pTVar9;
  FName *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName *pFVar12;
  FSidebarTabLists local_a8;
  TSharedPtr<FTabManager,1> local_88;
  FTabId local_78;
  TSharedPtr<SDockingTabWell,1> local_68;
  TSharedRef<FTabManager,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  FTabId local_28;
  
  pFVar7 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_28);
  iVar6 = OpenPersistentTab(this,pFVar7,param_2);
  pSVar3 = param_1->Object;
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x260))(this,local_48);
  if ((*plVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar9 = SDockingArea::GetTabManager((SDockingArea *)*plVar8,&local_58);
  local_88.Object = pTVar9->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SDockTab::SetTabManager(pSVar3,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  SDockTab::GetLayoutIdentifier(param_1->Object,&local_78);
  pFVar10 = (FName *)(this->Tabs).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)(this->Tabs).ArrayNum * 4;
  while( true ) {
    if (pFVar10 == pFVar12) {
      return;
    }
    if ((*pFVar10 == local_78.TabType) &&
       (((uVar2 = pFVar10[1].ComparisonIndex.Value, uVar2 == 0xffffffff ||
         (local_78.InstanceId == 0xffffffff)) || (uVar2 == local_78.InstanceId)))) break;
    pFVar10 = pFVar10 + 4;
  }
  if (pFVar10[2].ComparisonIndex.Value != 4) {
    AddTabWidget(this,param_1,iVar6,param_3);
    (**(code **)(this->_padding_ + 0x298))(this);
    if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SDockingTabWell::RefreshParentContent((this->TabWell).Object);
    return;
  }
  cVar1 = (char)pFVar10[2].Number;
  local_a8.LeftSidebarTabs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.LeftSidebarTabs.ArrayNum = 0;
  local_a8.LeftSidebarTabs.ArrayMax = 0;
  local_a8.RightSidebarTabs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.RightSidebarTabs.ArrayNum = 0;
  local_a8.RightSidebarTabs.ArrayMax = 0;
  if (cVar1 == '\0') {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&local_a8,&local_a8.LeftSidebarTabs.ArrayMax);
    local_a8.LeftSidebarTabs.ArrayNum = iVar6 + 1;
    *(SDockTab **)&local_a8.LeftSidebarTabs.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0
         = param_1->Object;
    pTVar11 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)
     (local_a8.LeftSidebarTabs.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) = pTVar11;
    goto LAB_14276e89b;
  }
  iVar6 = 0;
  if (cVar1 == '\x01') {
LAB_14276e7fe:
    if (param_1 < (TSharedRef<SDockTab,1> *)
                  (local_a8.RightSidebarTabs.AllocatorInstance.Data +
                  (longlong)local_a8.RightSidebarTabs.ArrayMax * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = local_a8.RightSidebarTabs.ArrayNum;
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6116648614849675564>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                       ,300,"TabInfo->SidebarLocation == ESidebarLocation::Right");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = local_a8.RightSidebarTabs.ArrayNum;
    if (local_a8.RightSidebarTabs.AllocatorInstance.Data <= param_1) goto LAB_14276e7fe;
  }
  if (iVar6 == local_a8.RightSidebarTabs.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_a8.RightSidebarTabs.AllocatorInstance,
                       &local_a8.RightSidebarTabs.ArrayMax);
  }
  local_a8.RightSidebarTabs.ArrayNum = iVar6 + 1;
  *(SDockTab **)&local_a8.RightSidebarTabs.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0
       = param_1->Object;
  pTVar11 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)
   (local_a8.RightSidebarTabs.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) = pTVar11;
LAB_14276e89b:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Object = (this->TabWell).Object;
  pSVar3 = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (this->TabWell).SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SDockTab::SetParent(pSVar3,&local_68);
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x260))(this,local_38);
  if ((*plVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SDockingArea::AddSidebarTabsFromRestoredLayout((SDockingArea *)*plVar8,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  DestructItems<TSharedRef<SDockTab,1>,int>
            ((TSharedRef<SDockTab,1> *)local_a8.RightSidebarTabs.AllocatorInstance.Data,
             local_a8.RightSidebarTabs.ArrayNum);
  if ((TSharedRef<SDockTab,1> *)local_a8.RightSidebarTabs.AllocatorInstance.Data !=
      (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_a8.RightSidebarTabs.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<SDockTab,1>,int>
            ((TSharedRef<SDockTab,1> *)local_a8.LeftSidebarTabs.AllocatorInstance.Data,
             local_a8.LeftSidebarTabs.ArrayNum);
  if ((TSharedRef<SDockTab,1> *)local_a8.LeftSidebarTabs.AllocatorInstance.Data ==
      (TSharedRef<SDockTab,1> *)0x0) {
    return;
  }
  FMemory::Free(local_a8.LeftSidebarTabs.AllocatorInstance.Data);
  return;
}

// RemoveClosedTabsWithName @ 14277c090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::RemoveClosedTabsWithName(SDockingTabStack *this,FName param_1)

{
  int *piVar1;
  TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = 0;
  if (0 < (this->Tabs).ArrayNum) {
    pTVar2 = &this->Tabs;
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Tabs).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if ((*(int *)(pFVar4 + lVar10 + 0x10) == 2) && (*(FName *)(pFVar4 + lVar10) == param_1)) {
        uVar7 = 0;
        if ((int)uVar9 < (this->Tabs).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = (this->Tabs).ArrayNum;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        iVar8 = ~uVar9 + iVar3;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar9 * 0x20,pFVar4 + (longlong)(iVar3 - iVar8) * 0x20,
                  (longlong)iVar8 << 5);
        }
        piVar1 = &(this->Tabs).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,4,&pTVar2->AllocatorInstance,(this->Tabs).ArrayNum,&(this->Tabs).ArrayMax);
      }
      else {
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x20;
      }
    } while ((int)uVar9 < (this->Tabs).ArrayNum);
  }
  return;
}

// RemovePersistentTab @ 14277cd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::RemovePersistentTab(SDockingTabStack *this,FTabId *param_1)

{
  int *piVar1;
  TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  
  uVar7 = param_1->InstanceId;
  pTVar2 = &this->Tabs;
  pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
  iVar10 = (this->Tabs).ArrayNum;
  pFVar12 = pFVar4;
  if (pFVar4 != pFVar4 + (longlong)iVar10 * 4) {
    while ((((pFVar12[2].ComparisonIndex.Value & 7) == 0 || (*pFVar12 != param_1->TabType)) ||
           ((uVar7 != 0xffffffff && (uVar7 != pFVar12[1].ComparisonIndex.Value))))) {
      pFVar12 = pFVar12 + 4;
      if (pFVar12 == pFVar4 + (longlong)iVar10 * 4) {
        return;
      }
    }
    uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 5);
    if (uVar11 != 0xffffffff) {
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar3 = (this->Tabs).ArrayNum;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      iVar10 = iVar3 + ~uVar11;
      if (1 < iVar10) {
        iVar10 = 1;
      }
      if (iVar10 != 0) {
        memmove(pFVar5 + (longlong)(int)uVar11 * 0x20,pFVar5 + (longlong)(iVar3 - iVar10) * 0x20,
                (longlong)iVar10 << 5);
      }
      piVar1 = &(this->Tabs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,&pTVar2->AllocatorInstance,(this->Tabs).ArrayNum,&(this->Tabs).ArrayMax);
    }
  }
  return;
}

// ReserveSpaceForWindowChrome @ 14277de70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::ReserveSpaceForWindowChrome
          (SDockingTabStack *this,EChromeElement param_1,bool param_2,bool param_3)

{
  undefined1 *this_00;
  FSlot *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *pFVar4;
  longlong lVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  FSlot *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  undefined1 local_a8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  ForAnyElementType FStack_88;
  ulonglong local_80;
  undefined1 local_78 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  ForAnyElementType FStack_58;
  ulonglong local_50;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar4 = FSlateApplication::Get();
    lVar5 = (**(code **)(*(longlong *)pFVar4 + 0x48))(pFVar4);
    local_res8 = (float)*(undefined8 *)(lVar5 + 0x20);
    LeftPaddingForIcon = local_res8;
    _Init_thread_footer(&::_TSS0);
  }
  fVar9 = __real_40a00000;
  if (param_2) {
    if (!param_3) {
      fVar9 = 0.0;
    }
    fVar7 = LeftPaddingForIcon + __real_41400000;
    fVar8 = 0.0;
    fVar10 = __real_41c80000;
  }
  else {
    fVar7 = __real_41c80000;
    fVar8 = __real_43000000;
    fVar10 = __real_40000000;
    if (!param_3) {
      fVar9 = 0.0;
    }
  }
  pFVar1 = this->TitleBarSlot;
  this->bShowingTitleBarArea = true;
  this_00 = &pFVar1->field_0x28;
  if (param_1 == Icon) {
    local_78[0x10] = true;
    local_78._0_4_ = *(float *)this_00 + fVar7;
    local_78._4_4_ = *(float *)&pFVar1->field_0x2c + fVar9;
    local_50 = 0;
    pFVar6 = pFVar1;
    if (this_00 == (undefined1 *)0x0) {
      pFVar6 = (FSlot *)0x0;
    }
    local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_58.Data = (FScriptContainerElement *)0x0;
    local_78._8_4_ = *(float *)&pFVar1->field_0x30;
    local_78._12_4_ = *(float *)&pFVar1->field_0x34;
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)this_00,(ISlateAttributeContainer *)&pFVar6->field_0x20,
             (TAttribute<FMargin> *)local_78,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_60,(FWriteAccessScope *)&local_30);
    if (((int)local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_58.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
      local_50 = local_50 & 0xffffffff00000000;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
    this_01 = &local_60;
  }
  else {
    if (param_1 != Controls) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6116648614849676219>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
                         ,0x3bb,"false");
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_a8[0x10] = true;
    local_a8._0_4_ = *(float *)this_00 + __real_41000000;
    local_a8._4_4_ = *(float *)&pFVar1->field_0x2c + fVar10;
    local_80 = 0;
    pFVar6 = pFVar1;
    if (this_00 == (undefined1 *)0x0) {
      pFVar6 = (FSlot *)0x0;
    }
    local_a8._8_4_ = *(float *)&pFVar1->field_0x30 + fVar8;
    local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_88.Data = (FScriptContainerElement *)0x0;
    local_a8._12_4_ = *(float *)&pFVar1->field_0x34;
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)this_00,(ISlateAttributeContainer *)&pFVar6->field_0x20,
             (TAttribute<FMargin> *)local_a8,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_90,(FWriteAccessScope *)&local_48);
    if (((int)local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_88.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
      local_80 = local_80 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data);
    }
    this_01 = &local_90;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_01->AccessDetector);
  return;
}

// RestoreTabFromSidebar @ 142781d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::RestoreTabFromSidebar(SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1)

{
  int iVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FTabId *pFVar7;
  longlong lVar8;
  uint uVar9;
  FName *pFVar10;
  FTabId local_38;
  FName local_28;
  undefined8 uStack_20;
  
  pFVar7 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_38);
  pFVar2 = (FName *)(this->Tabs).AllocatorInstance.Data;
  iVar1 = (this->Tabs).ArrayNum;
  local_28 = pFVar7->TabType;
  uStack_20._0_4_ = pFVar7->InstanceId;
  uStack_20._4_1_ = pFVar7->Flags;
  uStack_20._5_3_ = *(undefined3 *)&pFVar7->field_0xd;
  pFVar10 = pFVar2;
  do {
    if (pFVar10 == pFVar2 + (longlong)iVar1 * 4) {
LAB_142781e44:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    if ((((pFVar10[2].ComparisonIndex.Value & 4) != 0) && (*pFVar10 == local_28)) &&
       (((undefined4)uStack_20 == 0xffffffff ||
        ((undefined4)uStack_20 == pFVar10[1].ComparisonIndex.Value)))) {
      uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar2 >> 5);
      if (uVar9 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar9 < iVar1) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Tabs).AllocatorInstance.Data;
        lVar8 = (longlong)(int)uVar9 * 0x20;
        *(undefined4 *)(pFVar3 + lVar8 + 0x18) = 0;
        *(undefined4 *)(pFVar3 + lVar8 + 0x10) = 2;
        pFVar3[lVar8 + 0x14] = (FScriptContainerElement)0x2;
        OpenTab(this,param_1,-1,false);
      }
      goto LAB_142781e44;
    }
    pFVar10 = pFVar10 + 4;
  } while( true );
}

// SetNodeContent @ 142785300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::SetNodeContent
          (SDockingTabStack *this,TSharedRef<SWidget,1> *param_1,
          FDockingStackOptionalContent *param_2)

{
  SBorder *pSVar1;
  FSlot *pFVar2;
  SWidget *pSVar3;
  SDockingTabWell *pSVar4;
  IWindowTitleBar *pIVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TSharedRef<SDockTab,1> *pTVar9;
  undefined8 *puVar10;
  SDockTab *pSVar11;
  TReferenceControllerBase<1> *pTVar12;
  SDockTab *pSVar13;
  SDockTab *this_00;
  TSharedPtr<SWindow,1> local_b8;
  SWidget *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined8 local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  TReferenceControllerBase<1> *local_80;
  SWidget *local_78;
  TReferenceControllerBase<1> *local_70;
  SWidget *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  SWidget *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  this_00 = (SDockTab *)0x0;
  if (((this->ContentSlot).Object == (SBorder *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar1 = (this->ContentSlot).Object;
  pcVar6 = *(code **)(pSVar1->_padding_ + 0x248);
  local_a8 = param_1->Object;
  local_a0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar6)(pSVar1,&local_a8);
  pFVar2 = this->InlineContentAreaLeft;
  FSlotBase::DetatchParentFromContent((FSlotBase *)pFVar2);
  pTVar12 = (param_2->ContentLeft).SharedReferenceCount.ReferenceController;
  pSVar3 = (param_2->ContentLeft).Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = ((TSharedRef<SWidget,1> *)&pFVar2->field_0x10)->Object;
  pTStack_60 = ((FSharedReferencer<1> *)&pFVar2->field_0x18)->ReferenceController;
  ((TSharedRef<SWidget,1> *)&pFVar2->field_0x10)->Object = pSVar3;
  ((FSharedReferencer<1> *)&pFVar2->field_0x18)->ReferenceController = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)pFVar2);
  pFVar2 = this->InlineContentAreaRight;
  FSlotBase::DetatchParentFromContent((FSlotBase *)pFVar2);
  pTVar12 = (param_2->ContentRight).SharedReferenceCount.ReferenceController;
  pSVar3 = (param_2->ContentRight).Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = ((TSharedRef<SWidget,1> *)&pFVar2->field_0x10)->Object;
  pTStack_50 = ((FSharedReferencer<1> *)&pFVar2->field_0x18)->ReferenceController;
  ((TSharedRef<SWidget,1> *)&pFVar2->field_0x10)->Object = pSVar3;
  ((FSharedReferencer<1> *)&pFVar2->field_0x18)->ReferenceController = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)pFVar2);
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar4 = (this->TabWell).Object;
  if ((pSVar4->TabBeingDraggedPtr).Object == (SDockTab *)0x0) {
    if (((pSVar4->Tabs).Children.ArrayNum < 1) || (pSVar4->ForegroundTabIndex < 0)) {
      local_38 = 0;
      local_30 = 0;
      pSVar11 = this_00;
      pSVar13 = this_00;
    }
    else {
      pTVar9 = TSlotlessChildren<SDockTab>::operator[](&pSVar4->Tabs,pSVar4->ForegroundTabIndex);
      pSVar11 = (SDockTab *)(pTVar9->SharedReferenceCount).ReferenceController;
      pSVar13 = pTVar9->Object;
      if (pSVar11 != (SDockTab *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar11->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar11->_padding_ + 1);
        UNLOCK();
      }
      local_40 = 0;
      local_48 = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
    if (pSVar13 == (SDockTab *)0x0) {
      return;
    }
  }
  else {
    pTVar12 = (pSVar4->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (((this->TabWell).Object == (SDockingTabWell *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar4 = (this->TabWell).Object;
  pSVar11 = (pSVar4->TabBeingDraggedPtr).Object;
  if (pSVar11 == (SDockTab *)0x0) {
    if (((pSVar4->Tabs).Children.ArrayNum < 1) || (pSVar4->ForegroundTabIndex < 0)) {
      local_90 = (TReferenceControllerBase<1> *)0x0;
      puVar10 = &local_98;
      bVar7 = false;
      bVar8 = true;
    }
    else {
      pTVar9 = TSlotlessChildren<SDockTab>::operator[](&pSVar4->Tabs,pSVar4->ForegroundTabIndex);
      local_80 = (pTVar9->SharedReferenceCount).ReferenceController;
      this_00 = pTVar9->Object;
      if (local_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar10 = &local_88;
      bVar7 = true;
      bVar8 = false;
    }
    *puVar10 = 0;
    pTVar12 = (TReferenceControllerBase<1> *)puVar10[1];
    puVar10[1] = 0;
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    }
    if ((this_00 == (SDockTab *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pTVar12 = (pSVar4->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    this_00 = pSVar11;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SDockTab::GetParentWindow(this_00,&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (local_b8.Object != (SWindow *)0x0) {
    if ((local_b8.Object == (SWindow *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar12 = ((local_b8.Object)->TitleBar).SharedReferenceCount.ReferenceController;
    pIVar5 = ((local_b8.Object)->TitleBar).Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar5 == (IWindowTitleBar *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = *(code **)((longlong)*pIVar5 + 0x10);
    local_78 = (param_2->TitleBarContentRight).Object;
    local_70 = (param_2->TitleBarContentRight).SharedReferenceCount.ReferenceController;
    if (local_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar6)(pIVar5,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// SetParentNode @ 142785e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::SetParentNode(SDockingTabStack *this,TSharedRef<SDockingSplitter,1> *param_1)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDockingSplitter *pSVar4;
  longlong *plVar5;
  FSlot *this_00;
  SWidget *pSVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->_padding_ = (longlong)pSVar4;
  if (pTVar3 != (TReferenceControllerBase<1> *)this->_padding_) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar5 = (longlong *)this->_padding_;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    this->_padding_ = (longlong)pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this_00 = this->TitleBarSlot;
  if ((this->TitleBarContent).Object == (SWidget *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar3 = (this->TitleBarContent).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->TitleBarContent).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SWidget *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  pTVar8 = ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController;
  ((TSharedRef<SWidget,1> *)&this_00->field_0x10)->Object = pSVar6;
  ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController = pTVar3;
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTabLocked @ 142787100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::SetTabLocked
          (SDockingTabStack *this,TSharedRef<SDockTab_const_,1> *param_1,TOptional<bool> param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  FTabId *pFVar3;
  FName *pFVar4;
  FName *pFVar5;
  undefined6 in_register_00000082;
  undefined1 *puVar6;
  FTabId local_38 [3];
  
  puVar6 = (undefined1 *)CONCAT62(in_register_00000082,param_2);
  pFVar3 = SDockTab::GetLayoutIdentifier(param_1->Object,local_38);
  uVar2 = pFVar3->InstanceId;
  pFVar4 = (FName *)(this->Tabs).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)(this->Tabs).ArrayNum * 4;
  if (pFVar4 != pFVar5) {
    while ((((pFVar4[2].ComparisonIndex.Value & 7) == 0 || (*pFVar4 != pFVar3->TabType)) ||
           ((uVar2 != 0xffffffff && (uVar2 != pFVar4[1].ComparisonIndex.Value))))) {
      pFVar4 = pFVar4 + 4;
      if (pFVar4 == pFVar5) {
        return;
      }
    }
    puVar1 = (undefined1 *)((longlong)&pFVar4[3].Number + 1);
    if (puVar6 != puVar1) {
      if (puVar6[1] != '\0') {
        *puVar1 = *puVar6;
        *(undefined1 *)((longlong)&pFVar4[3].Number + 2) = 1;
        return;
      }
      if (*(char *)((longlong)&pFVar4[3].Number + 2) != '\0') {
        *(undefined1 *)((longlong)&pFVar4[3].Number + 2) = 0;
      }
    }
  }
  return;
}

// SetTabPinnedInSidebar @ 1427872a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::SetTabPinnedInSidebar
          (SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1,bool param_2)

{
  undefined4 uVar1;
  FTabId *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  FTabId local_38 [3];
  
  pFVar2 = SDockTab::GetLayoutIdentifier(param_1->Object,local_38);
  uVar1 = pFVar2->InstanceId;
  pFVar3 = (FName *)(this->Tabs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)(this->Tabs).ArrayNum * 4;
  if (pFVar3 != pFVar4) {
    while ((((pFVar3[2].ComparisonIndex.Value & 7) == 0 || (*pFVar3 != pFVar2->TabType)) ||
           ((uVar1 != 0xffffffff && (uVar1 != pFVar3[1].ComparisonIndex.Value))))) {
      pFVar3 = pFVar3 + 4;
      if (pFVar3 == pFVar4) {
        return;
      }
    }
    *(bool *)&pFVar3[3].Number = param_2;
  }
  return;
}

// SetTabSidebarSizeCoefficient @ 142787330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabStack::SetTabSidebarSizeCoefficient
          (SDockingTabStack *this,TSharedRef<SDockTab,1> *param_1,float param_2)

{
  undefined4 uVar1;
  FTabId *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  FTabId local_48 [4];
  
  pFVar2 = SDockTab::GetLayoutIdentifier(param_1->Object,local_48);
  uVar1 = pFVar2->InstanceId;
  pFVar3 = (FName *)(this->Tabs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)(this->Tabs).ArrayNum * 4;
  if (pFVar3 != pFVar4) {
    while ((((pFVar3[2].ComparisonIndex.Value & 7) == 0 || (*pFVar3 != pFVar2->TabType)) ||
           ((uVar1 != 0xffffffff && (uVar1 != pFVar3[1].ComparisonIndex.Value))))) {
      pFVar3 = pFVar3 + 4;
      if (pFVar3 == pFVar4) {
        return;
      }
    }
    pFVar3[3].ComparisonIndex.Value = (uint)param_2;
  }
  return;
}

// SetTabWellHidden @ 1427873c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::SetTabWellHidden(SDockingTabStack *this,bool param_1)

{
  bool bVar1;
  TSharedRef<SWidget,1> *pTVar2;
  TSharedRef<SWidget,1> local_18;
  
  if (param_1) {
    bVar1 = FCurveSequence::IsInReverse(&this->ShowHideTabWell);
    if (bVar1) {
      return;
    }
    pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    FCurveSequence::PlayReverse(&this->ShowHideTabWell,pTVar2,false,0.0,true);
  }
  else {
    bVar1 = FCurveSequence::IsInReverse(&this->ShowHideTabWell);
    if (!bVar1) {
      return;
    }
    pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    FCurveSequence::Play(&this->ShowHideTabWell,pTVar2,false,0.0,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ShowCross @ 14278a1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::ShowCross(SDockingTabStack *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FScopedWidgetSlotArguments *pFVar5;
  FArguments *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TSharedRef<SDockingCross,1> *pTVar8;
  FScopedWidgetSlotArguments *pFVar9;
  undefined1 auStackY_378 [32];
  FLLMScope local_348 [2];
  SDockingCross *local_340;
  FSharedReferencer<1> local_338;
  undefined4 local_330 [2];
  undefined4 local_328 [2];
  FName local_320;
  T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&> local_318;
  FMemScope local_310;
  TSharedRef<SDockingTabStack,1> local_308;
  undefined1 local_2f8 [8];
  TReferenceControllerBase<1> *local_2f0;
  TSharedRef<SWidget,1> local_2e8;
  TSharedRef<SDockingCross,1> local_2d8;
  TSlateDecl<SDockingCross,RequiredArgs::T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>_>
  local_2c8;
  FSlateBaseNamedArgs local_2b0;
  FScopedWidgetSlotArguments local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  if ((this->OverlayManagement).bShowingCross == false) {
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x260))(this,local_2f8);
    if (*plVar4 == 0) {
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
    *(undefined1 *)(*plVar4 + 0x330) = 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2f0);
    (this->OverlayManagement).bShowingCross = true;
    if ((this->OverlayManagement).ContentAreaOverlay.Object == (SOverlay *)0x0) {
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
    pFVar5 = SOverlay::AddSlot((this->OverlayManagement).ContentAreaOverlay.Object,&local_b8,-1);
    plVar4 = &pFVar5->_padding_;
    if ((longlong *)local_330 != plVar4) {
      *(undefined4 *)plVar4 = 0;
      *(undefined1 *)((longlong)&pFVar5->_padding_ + 4) = 1;
    }
    pFVar9 = (FScopedWidgetSlotArguments *)0x0;
    if (plVar4 != (longlong *)0x0) {
      pFVar9 = pFVar5;
    }
    if ((longlong *)local_328 != &pFVar9->_padding_) {
      *(undefined4 *)&pFVar9->_padding_ = 0;
      *(undefined1 *)((longlong)&pFVar9->_padding_ + 4) = 1;
    }
    pFVar5 = (FScopedWidgetSlotArguments *)0x0;
    if (pFVar9 != (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
      pFVar5 = pFVar9;
    }
    pFVar6 = SDockingCross::FArguments::FArguments((FArguments *)&local_2b0);
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2e8);
    local_308.Object = (SDockingTabStack *)pTVar7->Object;
    local_308.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e8.SharedReferenceCount.ReferenceController);
    local_318.Arg0 = &local_308;
    FLLMScope::FLLMScope(local_348,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_320 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_310,&local_320,true);
    TSlateDecl<SDockingCross,RequiredArgs::T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>_>::
    TSlateDecl<SDockingCross,RequiredArgs::T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>_>
              (&local_2c8,"SDockingCross",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
               ,0x309,&local_318);
    FMemScope::~FMemScope(&local_310);
    FLLMScope::~FLLMScope(local_348);
    pTVar8 = TSlateDecl<SDockingCross,RequiredArgs::T1RequiredArgs<TSharedRef<SDockingTabStack,1>_&&>_>
             ::operator<<=(&local_2c8,&local_2d8,pFVar6);
    pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_340 = pTVar8->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_338.ReferenceController = pTVar1;
    if ((SDockingCross **)&pFVar5->_padding_ != &local_340) {
      pFVar5->_padding_ = (longlong)local_340;
      local_340 = (SDockingCross *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar5->_padding_,&local_338);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_338.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_2b0);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_b8);
  }
  return;
}

// SupportsKeyboardFocus @ 14278c4b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingTabStack::SupportsKeyboardFocus(SDockingTabStack *this)

{
  return true;
}

// TabWellRightClicked @ 14278c8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabStack::TabWellRightClicked
          (SDockingTabStack *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetPath *pFVar3;
  FSlateApplication *this_00;
  FSlateApplication *pFVar4;
  FDeprecateVector2DParameter *pFVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ForElementType<FArrangedWidget> FVar8;
  bool bVar9;
  undefined1 auStackY_508 [32];
  undefined1 local_4a8;
  undefined1 local_4a7;
  FPopupTransitionEffect local_4a4;
  TVector2<float>_u_0 local_4a0;
  FDeprecateVector2DParameter local_498;
  undefined1 local_490 [8];
  TSharedPtr<IMenu,1> local_488;
  TSharedRef<SWidget,1> local_478;
  TSharedRef<SWidget,1> local_468;
  FWidgetPath local_458;
  FWidgetPath local_2f8;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_508;
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar9 = FVar1 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar9) {
    if ((FWidgetPath *)param_2->_padding_ == (FWidgetPath *)0x0) {
      pFVar3 = FWidgetPath::FWidgetPath(&local_198);
      FWidgetPath::FWidgetPath(&local_458,pFVar3);
      if (local_198.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar8 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
      if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar8 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar8,local_198.Widgets.Array.ArrayNum);
      local_2f8.Widgets.Array.AllocatorInstance.SecondaryData =
           local_198.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    else {
      pFVar3 = FWidgetPath::FWidgetPath(&local_2f8,(FWidgetPath *)param_2->_padding_);
      FWidgetPath::FWidgetPath(&local_458,pFVar3);
      if (local_2f8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_2f8.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f8.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar8 = (ForElementType<FArrangedWidget>)&local_2f8.Widgets.Array;
      if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar8 = local_2f8.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar8,local_2f8.Widgets.Array.ArrayNum);
    }
    if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_2f8.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    this_00 = FSlateApplication::Get();
    local_4a7 = 0;
    local_4a0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_4a4.SlideDirection = ContextMenu;
    pFVar4 = FSlateApplication::Get();
    pFVar5 = (FDeprecateVector2DParameter *)
             (**(code **)(*(longlong *)pFVar4 + 0x68))(pFVar4,local_490);
    local_498 = *pFVar5;
    pTVar6 = MakeContextMenu(this,&local_468);
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_478);
    FSlateApplication::PushMenu
              (this_00,&local_488,pTVar7,&local_458,pTVar6,&local_498,&local_4a4,true,
               (FDeprecateVector2DParameter *)&local_4a0._s_0,SUB82(&local_4a8,0),true,-1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_488.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_478.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468.SharedReferenceCount.ReferenceController);
    FReply::FReply(__return_storage_ptr__,true);
    if (local_458.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_458.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_458.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar8 = (ForElementType<FArrangedWidget>)&local_458.Widgets.Array;
    if (local_458.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar8 = local_458.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar8,local_458.Widgets.Array.ArrayNum);
    if (local_458.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_458.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// ToggleTabWellVisibility @ 14278e3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabStack::ToggleTabWellVisibility(SDockingTabStack *this)

{
  FCurveSequence::Reverse(&this->ShowHideTabWell);
  return;
}

// UnhideTabWell @ 14278fea0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabStack::UnhideTabWell(SDockingTabStack *this,FReply *__return_storage_ptr__)

{
  bool bVar1;
  TSharedRef<SWidget,1> *pTVar2;
  TSharedRef<SWidget,1> local_18;
  
  bVar1 = FCurveSequence::IsInReverse(&this->ShowHideTabWell);
  if (bVar1) {
    pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    FCurveSequence::Play(&this->ShowHideTabWell,pTVar2,false,0.0,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

