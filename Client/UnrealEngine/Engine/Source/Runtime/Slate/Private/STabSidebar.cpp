// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 30

// ~STabSidebar @ 142702870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::~STabSidebar(STabSidebar *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  TSharedRef<STabDrawer,1> *pTVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TSharedRef<SDockTab,1> local_38;
  undefined8 local_28 [2];
  
  this->_padding_ = (longlong)&___7STabSidebar__6B_;
  if (&this->PendingTabToOpen != (TWeakPtr<SDockTab,1> *)local_28) {
    pTVar4 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
    (this->PendingTabToOpen).Object = (SDockTab *)0x0;
    (this->PendingTabToOpen).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  this->bAnimatePendingTabOpen = false;
  iVar3 = (this->OpenedDrawers).ArrayNum;
  pTVar6 = (TSharedRef<STabDrawer,1> *)(this->OpenedDrawers).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = iVar3;
  if (iVar3 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&local_48,iVar3,&local_3c);
    ConstructItems<TSharedRef<STabDrawer,1>,TSharedRef<STabDrawer,1>,int>
              (local_48.Data,pTVar6,iVar3);
  }
  iVar3 = local_40;
  pTVar6 = (TSharedRef<STabDrawer,1> *)(local_48.Data + (longlong)local_40 * 0x10);
  FVar7.Data = local_48.Data;
  while( true ) {
    if (local_40 != iVar3) {
      `TCheckedPointerIterator<TSharedRef<STabDrawer,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((TSharedRef<STabDrawer,1> *)FVar7.Data == pTVar6) break;
    TSharedPtr<SDockTab,1>::ToSharedRef
              (&((TSharedRef<STabDrawer,1> *)FVar7.Data)->Object->ForTab,&local_38);
    RemoveDrawer(this,&local_38);
    FVar7.Data = FVar7.Data + 0x10;
  }
  DestructItems<TSharedRef<STabDrawer,1>,int>((TSharedRef<STabDrawer,1> *)local_48.Data,local_40);
  if ((TSharedRef<STabDrawer,1> *)local_48.Data != (TSharedRef<STabDrawer,1> *)0x0) {
    FMemory::Free(local_48.Data);
  }
  pTVar4 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
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
  DestructItems<TSharedRef<STabDrawer,1>,int>
            ((TSharedRef<STabDrawer,1> *)(this->OpenedDrawers).AllocatorInstance.Data,
             (this->OpenedDrawers).ArrayNum);
  pFVar5 = (this->OpenedDrawers).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DrawersOverlay).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OpenPendingDrawerTimerHandle).SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>,int>
            ((TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_> *)
             (this->Tabs).AllocatorInstance.Data,(this->Tabs).ArrayNum);
  pFVar5 = (this->Tabs).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabBox).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142703cd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`STabSidebar::FindOpenedDrawer'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<STabDrawer,1> *param_1)

{
  STabDrawer *pSVar1;
  SDockTab *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDockTab *pSVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  
  pSVar1 = param_1->Object;
  if ((pSVar1->ForTab).Object == (SDockTab *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pSVar2 = (pSVar1->ForTab).Object;
  pTVar3 = (pSVar1->ForTab).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SDockTab *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pSVar4 = (SDockTab *)**(longlong **)this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return pSVar4 == pSVar2;
}

// AddTab @ 14270ba00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::AddTab(STabSidebar *this,TSharedRef<SDockTab,1> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  SWidget *pSVar3;
  SDockTab *pSVar4;
  SVerticalBox *pSVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  bool bVar11;
  STabDrawerButton *pSVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  FArguments *this_00;
  undefined8 *puVar16;
  TSharedRef<SWidget,1> *pTVar17;
  ulong64 uVar18;
  FArguments *pFVar19;
  TSharedPtr<SDockingTabStack,1> *pTVar20;
  FSlateApplication *pFVar21;
  SDockingTabStack *pSVar22;
  FGeometry *pFVar23;
  FGeometry *pFVar24;
  TSharedPtr<SDockTab,1> *pTVar25;
  FSlot *this_01;
  FSlotArguments *pFVar26;
  atomic<int> *paVar27;
  FSlotArguments *pFVar28;
  longlong lVar29;
  float fVar30;
  FArguments *local_res10;
  FName local_res18;
  FMemScope local_res20;
  SWidget *local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  TSharedRef<STabDrawerButton,1> local_578;
  float local_568;
  undefined1 local_564;
  undefined1 local_560 [8];
  void *pvStack_558;
  undefined8 local_550;
  STabDrawerButton *local_548;
  FSharedReferencer<1> FStack_540;
  undefined4 local_538 [2];
  FDeprecateSlateVector2D local_530;
  FDeprecateSlateVector2D local_528;
  FSlotArguments *local_520;
  TSharedPtr<SDockTab,1> local_518;
  TAttribute<EVisibility> local_508;
  TAttribute<float> local_4e8;
  TSharedPtr<SDockTab,1> local_4c8;
  TSharedRef<SDockTab,1> local_4b8;
  T2RequiredArgs<TSharedRef<SDockTab,1>_&,ESidebarLocation_&> local_4a8;
  SWidget *local_498;
  TReferenceControllerBase<1> *local_490;
  TSharedRef<SDockTab,1> local_488;
  TSharedRef<SDockTab,1> local_478;
  TSharedRef<SDockTab,1> local_468;
  FDestructionSentinel local_458;
  undefined1 *local_440;
  FDestructionSentinel local_438;
  undefined1 *local_420;
  TSharedRef<SWidget,1> local_418;
  TSharedRef<SWidget,1> local_408;
  code *local_3f8;
  longlong lStack_3f0;
  TSharedPtr<SDockingTabStack,1> local_3e8;
  TSharedRef<SWidget,1> local_3d8;
  TSharedPtr<SDockingTabStack,1> local_3c8;
  TSharedPtr<SDockingTabStack,1> local_3b8;
  undefined1 local_3a8 [8];
  TReferenceControllerBase<1> *local_3a0;
  undefined **local_390;
  undefined8 *local_388 [2];
  TReferenceControllerBase<1> *local_378;
  undefined1 local_358 [40];
  FSlotArgumentsMixin local_330;
  TPanelChildren<SBoxPanel::FSlot> *local_2a0;
  int local_298;
  undefined1 local_290 [504];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [48];
  
  local_res10 = (FArguments *)((ulonglong)local_res10 & 0xffffffff00000000);
  local_4c8.Object = param_1->Object;
  bVar11 = false;
  bVar10 = false;
  bVar14 = false;
  local_4c8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_4c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar13 = ContainsTab(this,&local_4c8);
  if (!bVar13) {
    local_508.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
    local_508.Getter._16_8_ = 0;
    local_508.bIsSet = true;
    local_508.Getter._0_8_ = 0;
    local_508.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_508);
    this_00 = STabDrawerButton::FArguments::FArguments((FArguments *)local_290);
    local_res10 = this_00;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->_OnDrawerButtonPressed,(FWriteAccessScope *)&local_458);
    local_440 = &(this_00->_OnDrawerButtonPressed).field_0x8;
    puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_440);
    pFVar19 = local_res10;
    if (puVar16 != (undefined8 *)0x0) {
      uStack_57c = local_518.SharedReferenceCount.ReferenceController._4_4_;
      local_588 = (SWidget *)OnTabDrawerButtonPressed;
      uStack_580 = 0;
      pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_418);
      pFVar19 = (FArguments *)(pTVar17->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar17->Object;
      if (pFVar19 != (FArguments *)0x0) {
        LOCK();
        *(int *)&pFVar19->_padding_ = (int)pFVar19->_padding_ + 1;
        UNLOCK();
        LOCK();
        *(int *)&pFVar19->_padding_ = (int)pFVar19->_padding_ + 1;
        UNLOCK();
      }
      *puVar16 = &
                 ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar18;
      *puVar16 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSTabSidebar___00__A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar16[3] = pSVar3;
      puVar16[4] = pFVar19;
      if (pFVar19 != (FArguments *)0x0) {
        LOCK();
        puVar1 = (undefined1 *)((longlong)&pFVar19->_padding_ + 4);
        *(int *)puVar1 = *(int *)puVar1 + 1;
        UNLOCK();
      }
      bVar11 = true;
      bVar10 = true;
      bVar14 = true;
      puVar16[5] = local_588;
      puVar16[6] = CONCAT44(uStack_57c,uStack_580);
    }
    if (bVar14) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar19);
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar19);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_418.SharedReferenceCount.ReferenceController);
    }
    bVar11 = false;
    bVar10 = false;
    bVar14 = false;
    if (local_458.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_00->_OnDrawerPinButtonToggled,(FWriteAccessScope *)&local_438);
    local_420 = &(this_00->_OnDrawerPinButtonToggled).field_0x8;
    puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_420);
    pFVar19 = local_res10;
    if (puVar16 != (undefined8 *)0x0) {
      uStack_57c = local_518.SharedReferenceCount.ReferenceController._4_4_;
      local_588 = (SWidget *)OnTabDrawerPinButtonToggled;
      uStack_580 = 0;
      pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_408);
      pFVar19 = (FArguments *)(pTVar17->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar17->Object;
      if (pFVar19 != (FArguments *)0x0) {
        LOCK();
        *(int *)&pFVar19->_padding_ = (int)pFVar19->_padding_ + 1;
        UNLOCK();
        LOCK();
        *(int *)&pFVar19->_padding_ = (int)pFVar19->_padding_ + 1;
        UNLOCK();
      }
      bVar11 = true;
      bVar10 = true;
      bVar14 = true;
      *puVar16 = &
                 ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar18;
      *puVar16 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSTabSidebar___00__A6AXV__TSharedRef_VSDockTab___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar16[3] = pSVar3;
      puVar16[4] = pFVar19;
      if (pFVar19 != (FArguments *)0x0) {
        LOCK();
        puVar1 = (undefined1 *)((longlong)&pFVar19->_padding_ + 4);
        *(int *)puVar1 = *(int *)puVar1 + 1;
        UNLOCK();
      }
      puVar16[5] = local_588;
      puVar16[6] = CONCAT44(uStack_57c,uStack_580);
      this_00 = local_res10;
    }
    if (bVar14) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar19);
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar19);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_408.SharedReferenceCount.ReferenceController);
    }
    if (local_438.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_438.Accessor,&local_438);
    }
    local_4b8.Object = param_1->Object;
    local_4b8.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_4b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_578.Object = (STabDrawerButton *)OnGetTabDrawerContextMenuWidget;
    local_578.SharedReferenceCount.ReferenceController._0_4_ = 0;
    lStack_3f0 = (ulonglong)local_578.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_3f8 = OnGetTabDrawerContextMenuWidget;
    pFVar19 = STabDrawerButton::FArguments::
              OnGetContextMenuContent<STabSidebar,TSharedRef<SDockTab,1>_>
                        (this_00,this,(pmf_eed87ded *)&local_3f8,&local_4b8);
    local_4a8.Arg1 = &this->Location;
    local_4a8.Arg0 = param_1;
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,
               true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STabDrawerButton,RequiredArgs::T2RequiredArgs<TSharedRef<SDockTab,1>_&,enum_ESidebarLocation_&>_>
    ::
    TSlateDecl<STabDrawerButton,RequiredArgs::T2RequiredArgs<TSharedRef<SDockTab,1>_&,enum_ESidebarLocation_&>_>
              (local_3a8,"STabDrawerButton",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
               ,0x1bb,&local_4a8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res10);
    TSlateDecl<STabDrawerButton,RequiredArgs::T2RequiredArgs<TSharedRef<SDockTab,1>_&,enum_ESidebarLocation_&>_>
    ::operator<<=(local_3a8,&local_578,pFVar19);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    if ((void *)local_68._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
    if ((void *)local_80._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_80._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
    if ((void *)local_98._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_290);
    pTVar20 = SDockTab::GetParentDockTabStack(param_1->Object,&local_3e8);
    if ((pTVar20->Object == (SDockingTabStack *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar30 = SDockingTabStack::GetTabSidebarSizeCoefficient(pTVar20->Object,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e8.SharedReferenceCount.ReferenceController);
    if (fVar30 == 0.0) {
      pFVar21 = FSlateApplication::Get();
      pcVar8 = *(code **)(*(longlong *)pFVar21 + 0x28);
      pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3d8);
      local_498 = pTVar17->Object;
      local_490 = (pTVar17->SharedReferenceCount).ReferenceController;
      if (local_490 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_490->SharedReferenceCount = (atomic<int>)((int)local_490->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar8)(pFVar21,&local_588,&local_498);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3d8.SharedReferenceCount.ReferenceController);
      if (local_588 != (SWidget *)0x0) {
        pTVar20 = SDockTab::GetParentDockTabStack(param_1->Object,&local_3c8);
        pSVar22 = TSharedPtr<SDockingTabStack,1>::operator->(pTVar20);
        pFVar23 = SWidget::GetPaintSpaceGeometry((SWidget *)pSVar22);
        if ((local_588 == (SWidget *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar24 = SWidget::GetPaintSpaceGeometry(local_588);
        local_528 = pFVar24->Size;
        local_530 = pFVar23->Size;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3c8.SharedReferenceCount.ReferenceController);
        pTVar20 = SDockTab::GetParentDockTabStack(param_1->Object,&local_3b8);
        pSVar22 = TSharedPtr<SDockingTabStack,1>::operator->(pTVar20);
        SDockingTabStack::SetTabSidebarSizeCoefficient
                  (pSVar22,param_1,(float)local_530._0_4_ / (float)local_528._0_4_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3b8.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_57c,uStack_580));
    }
    pTVar25 = FindFirstPinnedTab(this,&local_518);
    pSVar4 = pTVar25->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_518.SharedReferenceCount.ReferenceController._4_4_,
                        local_518.SharedReferenceCount.ReferenceController._0_4_));
    if (pSVar4 != (SDockTab *)0x0) {
      local_488.Object = param_1->Object;
      local_488.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_488.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_488.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_488.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SetTabPinned(&local_488,false);
    }
    if (((this->TabBox).Object == (SVerticalBox *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pSVar5 = (this->TabBox).Object;
    this_01 = ::operator_new(0x58);
    local_520 = (FSlotArguments *)0x0;
    if (this_01 != (FSlot *)0x0) {
      *(undefined8 *)this_01 = 0;
      *(undefined8 *)&this_01->field_0x8 = 0;
      *(undefined8 *)&this_01->field_0x10 = 0;
      *(undefined8 *)&this_01->field_0x18 = 0;
      *(undefined8 *)&this_01->field_0x20 = 0;
      *(undefined8 *)&this_01->field_0x28 = 0;
      *(undefined8 *)&this_01->field_0x30 = 0;
      *(undefined8 *)&this_01->field_0x38 = 0;
      *(undefined8 *)&this_01->field_0x40 = 0;
      *(undefined8 *)&this_01->field_0x48 = 0;
      *(undefined8 *)&this_01->field_0x50 = 0;
      local_520 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(this_01);
    }
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_388,(FSlot *)&local_520);
    local_2a0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar5->field_0x218;
    local_298 = -1;
    local_390 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
    local_4e8.Getter._16_8_ = 0;
    local_4e8.Value = 1.0;
    local_4e8.bIsSet = true;
    local_4e8.Getter._0_8_ = 0;
    local_4e8.Getter._8_8_ = 0;
    pFVar26 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                        ((FSlotArguments *)local_388,&local_4e8);
    local_564 = 1;
    local_568 = (float)FDockingConstants::MaxMinorTabSize.field0_0x0._s_0.X;
    local_550 = 0;
    local_560 = (undefined1  [8])0x0;
    pvStack_558 = (void *)0x0;
    *(float *)&pFVar26->field_0xc8 = local_568;
    pFVar26->field_0xcc = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar26->field_0xd0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_560);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_560);
    if (pvStack_558 != (void *)0x0) {
      FMemory::Free(pvStack_558);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_560);
    pSVar12 = local_578.Object;
    puVar1 = &pFVar26->field_0x48;
    if (local_538 != (undefined4 *)puVar1) {
      *(undefined4 *)puVar1 = 1;
      pFVar26->field_0x4c = 1;
    }
    pFVar28 = (FSlotArguments *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      pFVar28 = pFVar26;
    }
    pTVar9 = (TReferenceControllerBase<1> *)
             CONCAT44(local_578.SharedReferenceCount.ReferenceController._4_4_,
                      local_578.SharedReferenceCount.ReferenceController._0_4_);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      paVar27 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar27 = &pTVar9->SharedReferenceCount;
      LOCK();
      *paVar27 = (atomic<int>)((int)*paVar27 + 1);
      UNLOCK();
    }
    FStack_540.ReferenceController =
         (TReferenceControllerBase<1> *)
         CONCAT44(local_578.SharedReferenceCount.ReferenceController._4_4_,
                  local_578.SharedReferenceCount.ReferenceController._0_4_);
    local_548 = local_578.Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar27 = (atomic<int>)((int)*paVar27 + 1);
      UNLOCK();
    }
    if ((STabDrawerButton **)&pFVar28->field_0x8 != &local_548) {
      *(STabDrawerButton **)&pFVar28->field_0x8 = local_578.Object;
      local_548 = (STabDrawerButton *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar28->field_0x10,&FStack_540);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_540.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    local_390 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
    if (local_388[0] != (undefined8 *)0x0) {
      if (local_298 == -1) {
        TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_2a0,(FSlotArguments *)local_388);
      }
      else {
        TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                  (local_2a0,(FSlotArguments *)local_388,local_298);
      }
    }
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_330);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_358);
    if ((void *)local_358._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_358._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_358);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378);
    if (local_388[0] != (undefined8 *)0x0) {
      (**(code **)*local_388[0])(local_388[0],1);
    }
    iVar15 = (this->Tabs).ArrayNum;
    piVar2 = &(this->Tabs).ArrayMax;
    if (iVar15 == *piVar2) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(this->Tabs).AllocatorInstance,piVar2);
    }
    pFVar6 = (this->Tabs).AllocatorInstance.Data;
    (this->Tabs).ArrayNum = iVar15 + 1;
    lVar29 = (longlong)iVar15 * 0x20;
    *(SDockTab **)(pFVar6 + lVar29) = param_1->Object;
    pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar6 + lVar29 + 8) = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(STabDrawerButton **)(pFVar6 + lVar29 + 0x10) = pSVar12;
    *(TReferenceControllerBase<1> **)(pFVar6 + lVar29 + 0x18) = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_478.Object = param_1->Object;
    local_478.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_478.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_478.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_478.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar14 = IsTabPinned(&local_478);
    if (bVar14) {
      local_468.Object = param_1->Object;
      local_468.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OpenDrawerNextFrame(this,&local_468,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CloseDrawerInternal @ 142713990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::CloseDrawerInternal(STabSidebar *this,TSharedRef<SDockTab,1> *param_1)

{
  TSharedPtr<FActiveTimerHandle,1> *pTVar1;
  FGlobalTabmanager *pFVar2;
  SDockTab *pSVar3;
  SOverlay *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  STabDrawer *this_01;
  bool bVar6;
  FThrottleRequest FVar7;
  atomic<int> aVar8;
  FSlateThrottleManager *this_02;
  undefined4 extraout_var;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar9;
  TSharedRef<FActiveTimerHandle,1> *pTVar10;
  TSharedRef<FGlobalTabmanager,1> *pTVar11;
  SDockTab *pSVar12;
  SDockTab *pSVar13;
  TSharedPtr<STabDrawer,1> local_b8;
  FActiveTimerHandle *local_a8;
  FSharedReferencer<1> local_a0;
  TSharedRef<STabDrawer,1> local_98;
  code *local_88;
  undefined8 uStack_80;
  TSharedRef<SDockTab,1> local_78;
  TSharedRef<FActiveTimerHandle,1> local_68;
  TSharedPtr<SDockTab,1> local_58;
  TSharedRef<SWidget,1> local_48;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_38;
  
  local_78.Object = param_1->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindOpenedDrawer(this,&local_b8,&local_78);
  this_01 = local_b8.Object;
  if (local_b8.Object != (STabDrawer *)0x0) {
    if ((local_b8.Object == (STabDrawer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar6 = FCurveSequence::IsForward(&this_01->OpenCloseAnimation);
    if (bVar6) {
      FCurveSequence::Reverse(&this_01->OpenCloseAnimation);
    }
    pTVar1 = &this_01->OpenCloseTimer;
    pSVar13 = (SDockTab *)0x0;
    if (pTVar1->Object == (FActiveTimerHandle *)0x0) {
      this_02 = FSlateThrottleManager::Get();
      FVar7 = FSlateThrottleManager::EnterResponsiveMode(this_02);
      uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
      (this_01->AnimationThrottle).Index = *(int *)CONCAT44(extraout_var,FVar7.Index);
      local_88 = STabDrawer::UpdateAnimation;
      pTVar9 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
               ::CreateSP<STabDrawer>(&local_38,this_01,(pmf_9082d6d0 *)&local_88);
      pTVar10 = SWidget::RegisterActiveTimer((SWidget *)this_01,&local_68,0.0,pTVar9);
      local_a0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
      local_a8 = pTVar10->Object;
      if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<FActiveTimerHandle,1> *)&local_a8) {
        pTVar1->Object = local_a8;
        local_a8 = (FActiveTimerHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this_01->OpenCloseTimer).SharedReferenceCount,&local_a0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    pTVar11 = FGlobalTabmanager::Get();
    pFVar2 = pTVar11->Object;
    pSVar3 = (SDockTab *)(pFVar2->ActiveTabPtr).WeakReferenceCount.ReferenceController;
    pSVar12 = pSVar3;
    if (pSVar3 != (SDockTab *)0x0) {
      aVar5 = *(atomic<int> *)&pSVar3->_padding_;
      do {
        pSVar12 = pSVar13;
        if (aVar5 == (atomic<int>)0x0) goto LAB_142713b25;
        LOCK();
        aVar8 = *(atomic<int> *)&pSVar3->_padding_;
        bVar6 = aVar5 == aVar8;
        if (bVar6) {
          *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar8 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar8;
      } while (!bVar6);
      pSVar13 = (pFVar2->ActiveTabPtr).Object;
      pSVar12 = pSVar3;
    }
LAB_142713b25:
    pSVar3 = (this_01->ForTab).Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar12);
    if (pSVar13 == pSVar3) {
      local_58.Object = (SDockTab *)0x0;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar11 = FGlobalTabmanager::Get();
      FGlobalTabmanager::SetActiveTab(pTVar11->Object,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    local_98.Object = local_b8.Object;
    local_98.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_b8.Object == (STabDrawer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((this->DrawersOverlay).Object == (SOverlay *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (this->DrawersOverlay).Object;
    local_48.Object = (SWidget *)local_98.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = SOverlay::RemoveSlot(this_00,&local_48);
    if ((!bVar6) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_388637335618583745>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                           ,0x33f,"bRemoveSuccessful"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TArray<TSharedRef<STabDrawer,1>,TSizedDefaultAllocator<32>_>::Remove
              (&this->OpenedDrawers,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SummonPinnedTabIfNothingOpened(this);
  UpdateDrawerAppearance(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Construct @ 142720830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabSidebar::Construct(STabSidebar *this,FArguments *param_1,TSharedRef<SOverlay,1> *param_2)

{
  undefined1 *this_00;
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMemScope FVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar6;
  FArguments *pFVar7;
  ISlateStyle *pIVar8;
  FName *pFVar9;
  FArguments *pFVar10;
  TSharedRef<SVerticalBox,1> *pTVar11;
  TSharedRef<SBorder,1> *pTVar12;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_708;
  TReferenceControllerBase<1> *pTStack_700;
  FSlateBrush *local_6f8;
  undefined1 local_6f0;
  undefined1 local_6e8 [8];
  ForAnyElementType FStack_6e0;
  ulonglong local_6d8;
  SOverlay *local_6d0;
  FSharedReferencer<1> local_6c8;
  SVerticalBox *local_6c0;
  FSharedReferencer<1> local_6b8;
  bool local_6b0;
  TAttribute<FMargin> local_6a8;
  FName local_678;
  TSharedRef<SBorder,1> local_670;
  TSharedRef<SVerticalBox,1> local_660;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_650;
  FArguments local_638;
  FArguments local_430;
  
  this->Location = param_1->_Location;
  local_6c8.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_6d0 = param_2->Object;
  if (local_6c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_6c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->DrawersOverlay != (TSharedPtr<SOverlay,1> *)&local_6d0) {
    (this->DrawersOverlay).Object = local_6d0;
    local_6d0 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DrawersOverlay).SharedReferenceCount,&local_6c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c8.ReferenceController);
  local_6a8.Value.Right = __real_40000000;
  if ((this->Location == Left) ||
     (local_6a8.Value.Right = 0.0, local_6a8.Value.Left = __real_40000000, this->Location != Right))
  {
    local_6a8.Value.Left = 0.0;
  }
  local_6a8.Getter._16_8_ = 0;
  local_6a8.Value.Top = 0.0;
  local_6a8.Value.Bottom = 0.0;
  local_6a8.bIsSet = true;
  local_6a8.Getter._0_8_ = 0;
  local_6a8.Getter._8_8_ = 0;
  pTVar6 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                     ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                       *)&this->_padding_,&local_6a8);
  pFVar7 = SBorder::FArguments::FArguments(&local_430);
  pFVar7 = SBorder::FArguments::Padding(pFVar7,0.0);
  pIVar8 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x50);
  pFVar9 = ::FName::FName(&local_678,"Docking.Sidebar.Background");
  local_6f8 = (FSlateBrush *)(*pcVar1)(pIVar8,*pFVar9);
  local_6f0 = 1;
  local_6d8 = 0;
  local_6e8 = (undefined1  [8])0x0;
  FStack_6e0.Data = (FScriptContainerElement *)0x0;
  (pFVar7->_BorderImage).Value = local_6f8;
  (pFVar7->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6e8,
             (FWriteAccessScope *)&local_6c0);
  if (((int)local_6d8 != 0) && (FStack_6e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6e0,0,0,0x10);
    local_6d8 = local_6d8 & 0xffffffff00000000;
  }
  if (local_6b0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_6b8.ReferenceController,
               (FDestructionSentinel *)&local_6c0);
  }
  if (FStack_6e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6e8);
  pFVar10 = SVerticalBox::FArguments::FArguments(&local_638);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_708,&local_res20,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)&local_6c0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
             ,0x1a9,local_res8);
  FMemScope::~FMemScope(&local_708);
  FLLMScope::~FLLMScope(local_res18);
  if (local_6b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6b8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_6b8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (this->TabBox).SharedReferenceCount.ReferenceController;
  (this->TabBox).Object = local_6c0;
  (this->TabBox).SharedReferenceCount.ReferenceController = local_6b8.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar11 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)&local_6c0,
                       &local_660,pFVar10);
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_708 = (FMemScope)pTVar11->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_Content).Widget.Object = (SWidget *)local_708;
  (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_700 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_708,&local_res20,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_650,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
             ,0x1a5,local_res10);
  FMemScope::~FMemScope(&local_708);
  FLLMScope::~FLLMScope(local_res18);
  pTVar12 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_650,&local_670,pFVar7);
  this_00 = &pTVar6->field_0x20;
  pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
  FVar4 = (FMemScope)pTVar12->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&pTVar6->field_0x38;
  pTVar6->field_0x30 = FVar4.Inner.bActive;
  *(int3 *)&pTVar6->field_0x31 = FVar4._1_3_;
  *(int *)&pTVar6->field_0x34 = FVar4.PrevTag;
  *(TReferenceControllerBase<1> **)&pTVar6->field_0x38 = pTVar3;
  local_708 = FVar4;
  pTStack_700 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_670.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_650._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b8.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_638._Slots.AllocatorInstance.Data,local_638._Slots.ArrayNum);
  if ((FSlotArguments *)local_638._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_638._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_638);
  SBorder::FArguments::~FArguments(&local_430);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ContainsTab @ 142721760

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall STabSidebar::ContainsTab(STabSidebar *this,TSharedPtr<SDockTab,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_> *pTVar2;
  <lambda_1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Tab.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Tab.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar2 = TArray<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>,TSizedDefaultAllocator<32>_>
           ::FindByPredicate<_STabSidebar::ContainsTab_::__l2::<lambda_1>_>(&this->Tabs,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pTVar2 != (TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_> *)0x0;
}

// FindFirstPinnedTab @ 142735af0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
STabSidebar::FindFirstPinnedTab(STabSidebar *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockTab *pSVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  TSharedRef<SDockTab,1> local_18;
  
  pFVar4 = (this->Tabs).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)(this->Tabs).ArrayNum * 0x20;
  do {
    if (pFVar4 == pFVar5) {
      __return_storage_ptr__->Object = (SDockTab *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
LAB_142735b60:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    local_18.Object = *(SDockTab **)pFVar4;
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = IsTabPinned(&local_18);
    if (bVar3) {
      pTVar1 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
      pSVar2 = *(SDockTab **)pFVar4;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->Object = pSVar2;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      goto LAB_142735b60;
    }
    pFVar4 = pFVar4 + 0x20;
  } while( true );
}

// FindOpenedDrawer @ 142735eb0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<STabDrawer,1> * __thiscall
STabSidebar::FindOpenedDrawer
          (STabSidebar *this,TSharedPtr<STabDrawer,1> *__return_storage_ptr__,
          TSharedRef<SDockTab,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  STabDrawer *pSVar2;
  bool bVar3;
  TSharedRef<STabDrawer,1> *pTVar4;
  TSharedRef<STabDrawer,1> *pTVar5;
  TSharedRef<SDockTab,1> *local_res8;
  
  pTVar4 = (TSharedRef<STabDrawer,1> *)(this->OpenedDrawers).AllocatorInstance.Data;
  pTVar5 = pTVar4 + (this->OpenedDrawers).ArrayNum;
  local_res8 = param_1;
  do {
    if (pTVar4 == pTVar5) {
LAB_142735f0a:
      __return_storage_ptr__->Object = (STabDrawer *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
LAB_142735f19:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return __return_storage_ptr__;
    }
    bVar3 = `STabSidebar::FindOpenedDrawer'::__l2::<lambda_1>::operator()(&local_res8,pTVar4);
    if (bVar3) {
      if (pTVar4 != (TSharedRef<STabDrawer,1> *)0x0) {
        pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
        pSVar2 = pTVar4->Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        __return_storage_ptr__->Object = pSVar2;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
        goto LAB_142735f19;
      }
      goto LAB_142735f0a;
    }
    pTVar4 = pTVar4 + 1;
  } while( true );
}

// GetAllTabIds @ 14273a380

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FTabId,TSizedDefaultAllocator<32>_> * __thiscall
STabSidebar::GetAllTabIds
          (STabSidebar *this,TArray<FTabId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDockTab *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FTabId *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FTabId *pFVar10;
  TArray<FTabId,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  FTabId local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = (this->Tabs).ArrayNum;
  uVar9 = (ulonglong)(int)local_res10;
  pFVar12 = (this->Tabs).AllocatorInstance.Data;
  pFVar13 = pFVar12 + uVar9 * 0x20;
  while( true ) {
    if ((this->Tabs).ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar13) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    this_00 = *(SDockTab **)pFVar12;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar12 + 0x18);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10 = SDockTab::GetLayoutIdentifier(this_00,&local_48);
    pFVar4 = (FTabId *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar10) && (pFVar10 < pFVar4 + __return_storage_ptr__->ArrayMax)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<FTabId,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar11;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == __return_storage_ptr__->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    FVar6 = *(FName *)&pFVar10->InstanceId;
    pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10);
    *pFVar1 = pFVar10->TabType;
    pFVar1[1] = FVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    uVar9 = (ulonglong)local_res10;
    pFVar12 = pFVar12 + 0x20;
  }
  return __return_storage_ptr__;
}

// GetAllTabs @ 14273a500

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> * __thiscall
STabSidebar::GetAllTabs
          (STabSidebar *this,
          TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_38;
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *local_20;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = (this->Tabs).ArrayNum;
  pFVar7 = (this->Tabs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Tabs).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    local_38 = *(undefined8 *)pFVar7;
    local_30 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = *(undefined8 *)(pFVar7 + 0x10);
    local_20 = *(TReferenceControllerBase<1> **)(pFVar7 + 0x18);
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    *(undefined8 *)pFVar6 = local_38;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_30;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    pFVar7 = pFVar7 + 0x20;
  }
  return __return_storage_ptr__;
}

// GetForegroundTab @ 14273e860

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
STabSidebar::GetForegroundTab(STabSidebar *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__)

{
  longlong lVar1;
  SDockTab *pSVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TSharedPtr<SDockTab,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  <lambda_1> local_res8;
  
  uVar5 = TArray<TSharedRef<STabDrawer,1>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_STabSidebar::GetForegroundTab_::__l2::<lambda_1>_>
                    (&this->OpenedDrawers,local_res8,(this->OpenedDrawers).ArrayNum);
  if (uVar5 == 0xffffffff) {
    __return_storage_ptr__->Object = (SDockTab *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar6 = 0;
    if ((int)uVar5 < (this->OpenedDrawers).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    lVar1 = *(longlong *)
             ((this->OpenedDrawers).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10);
    if (*(longlong *)(lVar1 + 0x338) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pSVar2 = *(SDockTab **)(lVar1 + 0x338);
    pTVar8 = *(TReferenceControllerBase<1> **)(lVar1 + 0x340);
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar2 == (SDockTab *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// OnCloseTab @ 142761240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::OnCloseTab(STabSidebar *this,TSharedRef<SDockTab,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SDockingTabStack,1> *pTVar3;
  TSharedRef<SDockTab,1> local_28;
  TSharedPtr<SDockingTabStack,1> local_18;
  
  bVar2 = SDockTab::RequestCloseTab(param_1->Object);
  if (bVar2) {
    local_28.Object = param_1->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    RemoveTab(this,&local_28);
    pTVar3 = SDockTab::GetParentDockTabStack(param_1->Object,&local_18);
    if (pTVar3->Object == (SDockingTabStack *)0x0) {
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
    SDockingTabStack::OnTabClosed(pTVar3->Object,param_1,TabRemoval_Closed);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnGetTabDrawerContextMenuWidget @ 142763fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
STabSidebar::OnGetTabDrawerContextMenuWidget
          (STabSidebar *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SDockTab,1> *param_1)

{
  ISlateStyle *pIVar1;
  FText *pFVar2;
  FName *pFVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar4;
  FUIAction *pFVar5;
  FSlateIcon *pFVar6;
  FName local_res10;
  undefined8 local_res18;
  code *local_468;
  TReferenceControllerBase<1> *pTStack_460;
  bool local_458;
  undefined1 local_448 [8];
  undefined1 local_440 [8];
  ForAnyElementType FStack_438;
  ulonglong local_430;
  code *local_428;
  TReferenceControllerBase<1> *pTStack_420;
  bool local_418;
  undefined1 local_408 [24];
  undefined1 local_3f0 [8];
  ForAnyElementType FStack_3e8;
  ulonglong local_3e0;
  undefined1 local_3d8 [8];
  undefined1 local_3d0 [8];
  ForAnyElementType FStack_3c8;
  ulonglong local_3c0;
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [8];
  ForAnyElementType FStack_3a8;
  ulonglong local_3a0;
  undefined1 local_398 [8];
  undefined1 local_390 [8];
  ForAnyElementType FStack_388;
  ulonglong local_380;
  undefined1 local_378 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_370;
  ForAnyElementType FStack_368;
  ulonglong local_360;
  int local_358;
  bool local_354;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_350;
  ForAnyElementType FStack_348;
  ulonglong local_340;
  undefined1 local_338 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_330;
  ForAnyElementType FStack_328;
  ulonglong local_320;
  bool local_317;
  bool local_315;
  bool local_310;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_308;
  ForAnyElementType FStack_300;
  ulonglong local_2f8;
  undefined1 local_2f0 [24];
  undefined1 local_2d8 [8];
  ForAnyElementType FStack_2d0;
  ulonglong local_2c8;
  undefined1 local_2c0 [24];
  undefined1 local_2a8 [8];
  ForAnyElementType FStack_2a0;
  ulonglong local_298;
  undefined1 local_290 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_288;
  ForAnyElementType FStack_280;
  ulonglong local_278;
  TSharedPtr<FExtender,1> local_268;
  undefined1 local_258 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  FText local_228;
  FMenuBuilder local_218;
  FUIAction local_90;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pIVar1 = FAppStyle::Get();
  local_res18 = 0;
  local_268.Object = (FExtender *)0x0;
  local_268.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_428 = (code *)0x0;
  pTStack_420 = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_218,Menu,true,
             (TSharedPtr<FUICommandList_const_,1> *)&local_428,false,&local_268,pIVar1,(FName)0x0,
             (FName)0x0);
  local_218.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_218.CurrentSectionExtensionHook.Number = 0;
  local_218._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_218.CurrentSectionHeadingText);
  local_218.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_218.CurrentSectionVisibility.bIsSet = false;
  local_218.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_218.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_218.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_218.CurrentSectionResizeParams,0,200);
  local_218.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_218.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_218.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_218.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_218.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_218.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_218.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_218.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_218.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_218.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_218.CurrentSectionResizeParams.bIsSet = false;
  local_218.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_218.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_218.bSectionNeedsToBeApplied = false;
  local_218.bSearchable = true;
  local_218.bRecursivelySearchable = true;
  local_218.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_218);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  memset(local_3d8,0,200);
  local_358 = 0;
  local_3c0 = 0;
  local_3a0 = 0;
  local_380 = 0;
  local_360 = 0;
  local_340 = 0;
  local_320 = 0;
  local_2f8 = 0;
  local_278 = 0;
  local_3d0 = (undefined1  [8])0x0;
  FStack_3c8.Data = (FScriptContainerElement *)0x0;
  local_3b8[0] = false;
  local_3b8[1] = false;
  local_3b0 = (undefined1  [8])0x0;
  FStack_3a8.Data = (FScriptContainerElement *)0x0;
  local_398[0] = false;
  local_398[1] = false;
  local_390 = (undefined1  [8])0x0;
  FStack_388.Data = (FScriptContainerElement *)0x0;
  local_378[0] = false;
  local_378[1] = false;
  local_370.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_354 = false;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  local_338[0] = Preferred;
  local_338[1] = false;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  local_317 = false;
  local_315 = false;
  local_310 = false;
  local_308.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_300.Data = (FScriptContainerElement *)0x0;
  local_290[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_290[1] = false;
  local_288.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_280.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_428,L"TabSidebar",L"RestoreOptions",L"Options");
  FText::FText((FText *)local_258,pFVar2);
  local_258[0x10] = true;
  local_230 = 0;
  local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_238.Data = (FScriptContainerElement *)0x0;
  pFVar3 = ::FName::FName(&local_res10,"RestoreOptions");
  FMenuBuilder::BeginSection
            (&local_218,*pFVar3,(TAttribute<FText> *)local_258,(TAttribute<EVisibility> *)local_290,
             (TAttribute<FMenuEntryResizeParams> *)local_3d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_240,(FWriteAccessScope *)&local_468);
  if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_238.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
    local_230 = local_230 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_238.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
  if ((FName)local_258._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
  }
  if ((FUICommandList *)local_428 != (FUICommandList *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_428 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_288,(FWriteAccessScope *)&local_468);
  if (((int)local_278 != 0) && (FStack_280.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_280.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_280,0,0,0x10);
    local_278 = local_278 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_280.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_288.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_308,(FWriteAccessScope *)&local_468);
  if (((int)local_2f8 != 0) && (FStack_300.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_300.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_300,0,0,0x10);
    local_2f8 = local_2f8 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_300.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_308.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_330,(FWriteAccessScope *)&local_468);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_350,(FWriteAccessScope *)&local_468);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_370,(FWriteAccessScope *)&local_468);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_370.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_390,
             (FWriteAccessScope *)&local_468);
  if (((int)local_380 != 0) && (FStack_388.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_388.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_388,0,0,0x10);
    local_380 = local_380 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_388.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_388.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_390);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b0,
             (FWriteAccessScope *)&local_468);
  if (((int)local_3a0 != 0) && (FStack_3a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a8,0,0,0x10);
    local_3a0 = local_3a0 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d0,
             (FWriteAccessScope *)&local_468);
  if (((int)local_3c0 != 0) && (FStack_3c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c8,0,0,0x10);
    local_3c0 = local_3c0 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d0);
  local_448[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_448[1] = false;
  local_430 = 0;
  local_440 = (undefined1  [8])0x0;
  FStack_438.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_408);
  local_268.SharedReferenceCount.ReferenceController =
       local_268.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_408[0x10] = false;
  local_268.Object = (FExtender *)OnRestoreTab;
  local_428 = OnRestoreTab;
  pTStack_420 = local_268.SharedReferenceCount.ReferenceController;
  local_3e0 = 0;
  local_3f0 = (undefined1  [8])0x0;
  FStack_3e8.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res18 = 0;
  pTVar4 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<STabSidebar,TSharedRef<SDockTab,1>_&>
                     ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_290,this,
                      (pmf_b6cffbf9 *)&local_428,param_1);
  pFVar5 = FUIAction::FUIAction(&local_90,pTVar4,RepeatDisabled);
  pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_258);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_468,L"TabSidebar",L"HideTabWellTooltip",
                      L"Moves this tab out of the sidebar and back to a full tab where it previously was before it was added to the sidebar."
                     );
  FText::FText((FText *)local_2c0,pFVar2);
  local_2c0[0x10] = true;
  local_298 = 0;
  local_2a8 = (undefined1  [8])0x0;
  FStack_2a0.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_228,L"TabSidebar",L"AutoHideTab",L"Undock from Sidebar");
  FText::FText((FText *)local_2f0,pFVar2);
  local_2f0[0x10] = true;
  local_2c8 = 0;
  local_2d8 = (undefined1  [8])0x0;
  FStack_2d0.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_218,(TAttribute<FText> *)local_2f0,
             (TAttribute<FText> *)local_2c0,pFVar6,pFVar5,(FName)0x0,Button,(FName)0x0,
             (TAttribute<FText> *)local_408,(TAttribute<EVisibility> *)local_448);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2d8,
             (FWriteAccessScope *)&local_428);
  if (((int)local_2c8 != 0) && (FStack_2d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d0,0,0,0x10);
    local_2c8 = local_2c8 & 0xffffffff00000000;
  }
  if (local_418 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_420,(FDestructionSentinel *)&local_428);
  }
  if (FStack_2d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2d8);
  if ((ITextData *)local_2f0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2f0._0_8_ + 0x10))();
  }
  if (local_228.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
             (FWriteAccessScope *)&local_428);
  if (((int)local_298 != 0) && (FStack_2a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a0,0,0,0x10);
    local_298 = local_298 & 0xffffffff00000000;
  }
  if (local_418 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_420,(FDestructionSentinel *)&local_428);
  }
  if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a8);
  if ((ITextData *)local_2c0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2c0._0_8_ + 0x10))();
  }
  if ((ITextData *)local_468 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_468 + 0x10))();
  }
  FUIAction::~FUIAction(&local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f0,
             (FWriteAccessScope *)&local_428);
  if (((int)local_3e0 != 0) && (FStack_3e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e8,0,0,0x10);
    local_3e0 = local_3e0 & 0xffffffff00000000;
  }
  if (local_418 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_420,(FDestructionSentinel *)&local_428);
  }
  if (FStack_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  if ((ITextData *)local_408._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_408._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_440,
             (FWriteAccessScope *)&local_428);
  if (((int)local_430 != 0) && (FStack_438.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_438.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_438,0,0,0x10);
    local_430 = local_430 & 0xffffffff00000000;
  }
  if (local_418 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_420,(FDestructionSentinel *)&local_428);
  }
  if (FStack_438.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_438.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_440);
  FMenuBuilder::EndSection(&local_218);
  memset(local_3d8,0,200);
  local_358 = 0;
  local_3c0 = 0;
  local_3a0 = 0;
  local_380 = 0;
  local_360 = 0;
  local_340 = 0;
  local_320 = 0;
  local_2f8 = 0;
  local_430 = 0;
  local_3d0 = (undefined1  [8])0x0;
  FStack_3c8.Data = (FScriptContainerElement *)0x0;
  local_3b8[0] = false;
  local_3b8[1] = false;
  local_3b0 = (undefined1  [8])0x0;
  FStack_3a8.Data = (FScriptContainerElement *)0x0;
  local_398[0] = false;
  local_398[1] = false;
  local_390 = (undefined1  [8])0x0;
  FStack_388.Data = (FScriptContainerElement *)0x0;
  local_378[0] = false;
  local_378[1] = false;
  local_370.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_354 = false;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  local_338[0] = Preferred;
  local_338[1] = false;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  local_317 = false;
  local_315 = false;
  local_310 = false;
  local_308.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_300.Data = (FScriptContainerElement *)0x0;
  local_448[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_448[1] = false;
  local_440 = (undefined1  [8])0x0;
  FStack_438.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_408);
  local_408[0x10] = false;
  local_3e0 = 0;
  local_3f0 = (undefined1  [8])0x0;
  FStack_3e8.Data = (FScriptContainerElement *)0x0;
  pFVar3 = ::FName::FName(&local_res10,"CloseOptions");
  FMenuBuilder::BeginSection
            (&local_218,*pFVar3,(TAttribute<FText> *)local_408,(TAttribute<EVisibility> *)local_448,
             (TAttribute<FMenuEntryResizeParams> *)local_3d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f0,
             (FWriteAccessScope *)&local_468);
  if (((int)local_3e0 != 0) && (FStack_3e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e8,0,0,0x10);
    local_3e0 = local_3e0 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  if ((ITextData *)local_408._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_408._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_440,
             (FWriteAccessScope *)&local_468);
  if (((int)local_430 != 0) && (FStack_438.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_438.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_438,0,0,0x10);
    local_430 = local_430 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_438.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_438.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_440);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_308,(FWriteAccessScope *)&local_468);
  if (((int)local_2f8 != 0) && (FStack_300.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_300.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_300,0,0,0x10);
    local_2f8 = local_2f8 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_300.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_308.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_330,(FWriteAccessScope *)&local_468);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_350,(FWriteAccessScope *)&local_468);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_370,(FWriteAccessScope *)&local_468);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_458 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_460,(FDestructionSentinel *)&local_468);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_370.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_390);
  if (FStack_388.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_388.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_390);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b0);
  if (FStack_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0);
  if (FStack_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d0);
  local_448[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_448[1] = false;
  local_430 = 0;
  local_440 = (undefined1  [8])0x0;
  FStack_438.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_2f0);
  local_268.SharedReferenceCount.ReferenceController =
       local_268.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2f0[0x10] = false;
  local_268.Object = (FExtender *)OnCloseTab;
  local_468 = OnCloseTab;
  pTStack_460 = local_268.SharedReferenceCount.ReferenceController;
  local_2c8 = 0;
  local_2d8 = (undefined1  [8])0x0;
  FStack_2d0.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res18 = 0;
  pTVar4 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<STabSidebar,TSharedRef<SDockTab,1>_&>
                     ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_290,this,
                      (pmf_b6cffbf9 *)&local_468,param_1);
  pFVar5 = FUIAction::FUIAction(&local_90,pTVar4,RepeatDisabled);
  pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_258);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_428,L"TabSidebar",L"CloseTabTooltip",
                      L"Close this tab, removing it from the sidebar and its parent tab well.");
  FText::FText((FText *)local_2c0,pFVar2);
  local_2c0[0x10] = true;
  local_298 = 0;
  local_2a8 = (undefined1  [8])0x0;
  FStack_2a0.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_228,L"TabSidebar",L"CloseTab",L"Close Tab");
  FText::FText((FText *)local_408,pFVar2);
  local_408[0x10] = true;
  local_3e0 = 0;
  local_3f0 = (undefined1  [8])0x0;
  FStack_3e8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_218,(TAttribute<FText> *)local_408,
             (TAttribute<FText> *)local_2c0,pFVar6,pFVar5,(FName)0x0,Button,(FName)0x0,
             (TAttribute<FText> *)local_2f0,(TAttribute<EVisibility> *)local_448);
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
  if (local_228.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a8);
  if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a8);
  if ((ITextData *)local_2c0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2c0._0_8_ + 0x10))();
  }
  if ((FUICommandList *)local_428 != (FUICommandList *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_428 + 0x10))();
  }
  FUIAction::~FUIAction(&local_90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2d8);
  if (FStack_2d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2d8);
  if ((ITextData *)local_2f0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2f0._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_440);
  if (FStack_438.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_438.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_440);
  FMenuBuilder::EndSection(&local_218);
  FMenuBuilder::MakeWidget
            (&local_218,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_218);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnOpenPendingDrawerTimer @ 142767310

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
STabSidebar::OnOpenPendingDrawerTimer(STabSidebar *this,double param_1,float param_2)

{
  atomic<int> *paVar1;
  TWeakPtr<SDockTab,1> *pTVar2;
  atomic<int> aVar3;
  SDockTab *pSVar4;
  code *pcVar5;
  EActiveTimerReturnType EVar6;
  bool bVar7;
  atomic<int> aVar8;
  FGeometry *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  float local_res8;
  float fStackX_c;
  TSharedRef<SDockTab,1> local_48;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  longlong local_28 [2];
  
  pTVar2 = &this->PendingTabToOpen;
  pTVar10 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142767354;
      }
      LOCK();
      aVar8 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar8;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar11);
    pSVar4 = pTVar2->Object;
    if (pSVar4 != (SDockTab *)0x0) {
      if (((this->DrawersOverlay).Object == (SOverlay *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        EVar6 = (*pcVar5)();
        return EVar6;
      }
      pFVar9 = SWidget::GetTickSpaceGeometry((SWidget *)(this->DrawersOverlay).Object);
      local_res8 = SUB84(pFVar9->Size,0);
      if ((local_res8 == 0.0) && (fStackX_c = SUB84(pFVar9->Size,4), fStackX_c == 0.0)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        return Continue;
      }
      bVar11 = this->bAnimatePendingTabOpen;
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      local_48.Object = pSVar4;
      local_48.SharedReferenceCount.ReferenceController = pTVar10;
      if ((pSVar4 == (SDockTab *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        EVar6 = (*pcVar5)();
        return EVar6;
      }
      OpenDrawerInternal(this,&local_48,bVar11);
    }
  }
LAB_142767354:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->OpenPendingDrawerTimerHandle != (TSharedPtr<FActiveTimerHandle,1> *)&local_38) {
    (this->OpenPendingDrawerTimerHandle).Object = (FActiveTimerHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OpenPendingDrawerTimerHandle).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  if (pTVar2 != (TWeakPtr<SDockTab,1> *)local_28) {
    pTVar10 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
    pTVar2->Object = (SDockTab *)0x0;
    (this->PendingTabToOpen).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar10->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
      }
    }
  }
  this->bAnimatePendingTabOpen = false;
  return Stop;
}

// OnRestoreTab @ 14276a450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::OnRestoreTab(STabSidebar *this,TSharedRef<SDockTab,1> *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
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
  RestoreTab(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTabDrawerButtonPressed @ 14276a720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabSidebar::OnTabDrawerButtonPressed(STabSidebar *this,TSharedRef<SDockTab,1> *param_1)

{
  bool bVar1;
  TSharedRef<SDockTab,1> local_18;
  
  bVar1 = SDockTab::IsActive(param_1->Object);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (bVar1) {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar1 = IsTabPinned(&local_18);
    if (!bVar1) {
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
      CloseDrawerInternal(this,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
  }
  else {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    OpenDrawerInternal(this,&local_18,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTabDrawerClosed @ 14276a7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::OnTabDrawerClosed(STabSidebar *this,TSharedRef<STabDrawer,1> *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  TSharedPtr<SDockTab,1>::ToSharedRef(&param_1->Object->ForTab,&local_18);
  RemoveDrawer(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTabDrawerFocusLost @ 14276a830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabSidebar::OnTabDrawerFocusLost(STabSidebar *this,TSharedRef<STabDrawer,1> *param_1)

{
  STabDrawer *pSVar1;
  SDockTab *pSVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TSharedPtr<SDockTab,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_14;
  TSharedRef<SDockTab,1> local_48;
  TSharedPtr<SDockTab,1> local_38;
  TSharedRef<SDockTab,1> local_28;
  
  bVar4 = false;
  bVar6 = false;
  TSharedPtr<SDockTab,1>::ToSharedRef(&param_1->Object->ForTab,&local_48);
  bVar5 = IsTabPinned(&local_48);
  if (bVar5) {
    pSVar1 = param_1->Object;
    if ((pSVar1->ForTab).Object == (SDockTab *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (pSVar1->ForTab).Object;
    pTVar8 = (pSVar1->ForTab).SharedReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar2 == (SDockTab *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar7 = GetForegroundTab(this,&local_38);
    if ((pTVar7->Object != (SDockTab *)0x0) && (pTVar7->Object == pSVar2)) {
      bVar5 = true;
      bVar4 = true;
      bVar6 = true;
      goto LAB_14276a91e;
    }
    bVar4 = true;
    bVar6 = true;
  }
  else {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_14 << 0x20);
  }
  bVar5 = false;
LAB_14276a91e:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (!bVar5) {
    TSharedPtr<SDockTab,1>::ToSharedRef(&param_1->Object->ForTab,&local_28);
    CloseDrawerInternal(this,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTabDrawerPinButtonToggled @ 14276a990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabSidebar::OnTabDrawerPinButtonToggled
          (STabSidebar *this,TSharedRef<SDockTab,1> *param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [8];
  TSharedRef<SDockTab,1> local_28;
  
  iVar1 = (this->Tabs).ArrayNum;
  pFVar3 = (this->Tabs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Tabs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar3 == pFVar4) break;
    local_28.Object = *(SDockTab **)pFVar3;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar3 + 8);
    bVar2 = false;
    if (local_28.Object == param_1->Object) {
      bVar2 = param_2;
    }
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SetTabPinned(&local_28,bVar2);
    pFVar3 = pFVar3 + 0x20;
  }
  if (param_2) {
    local_28.Object = param_1->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    OpenDrawerInternal(this,&local_28,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTargetDrawerSizeChanged @ 14276c690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabSidebar::OnTargetDrawerSizeChanged
          (STabSidebar *this,TSharedRef<STabDrawer,1> *param_1,float param_2)

{
  STabDrawer *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDockTab *this_00;
  SDockingTabStack *pSVar3;
  code *pcVar4;
  bool bVar5;
  FGeometry *pFVar6;
  TSharedPtr<SDockingTabStack,1> *pTVar7;
  FTabId *pFVar8;
  FName *pFVar9;
  FName *pFVar10;
  float local_res8;
  TSharedPtr<SDockingTabStack,1> local_68;
  FTabId local_58;
  FName local_48;
  undefined8 uStack_40;
  
  pSVar1 = param_1->Object;
  if (((pSVar1->ForTab).Object == (SDockTab *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = (pSVar1->ForTab).SharedReferenceCount.ReferenceController;
  this_00 = (pSVar1->ForTab).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (SDockTab *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->DrawersOverlay).Object == (SOverlay *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = SWidget::GetPaintSpaceGeometry((SWidget *)(this->DrawersOverlay).Object);
  local_res8 = SUB84(pFVar6->Size,0);
  pTVar7 = SDockTab::GetParentDockTabStack(this_00,&local_68);
  if ((pTVar7->Object == (SDockingTabStack *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar3 = pTVar7->Object;
  pFVar8 = SDockTab::GetLayoutIdentifier(this_00,&local_58);
  local_48 = pFVar8->TabType;
  uStack_40._0_4_ = pFVar8->InstanceId;
  uStack_40._4_1_ = pFVar8->Flags;
  uStack_40._5_3_ = *(undefined3 *)&pFVar8->field_0xd;
  pFVar9 = (FName *)(pSVar3->Tabs).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(pSVar3->Tabs).ArrayNum * 4;
  do {
    if (pFVar9 == pFVar10) {
LAB_14276c815:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    if ((((pFVar9[2].ComparisonIndex.Value & 7) != 0) && (*pFVar9 == local_48)) &&
       (((undefined4)uStack_40 == 0xffffffff ||
        ((undefined4)uStack_40 == pFVar9[1].ComparisonIndex.Value)))) {
      pFVar9[3].ComparisonIndex.Value = (uint)(param_2 / local_res8);
      goto LAB_14276c815;
    }
    pFVar9 = pFVar9 + 4;
  } while( true );
}

// OpenDrawerInternal @ 14276d030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabSidebar::OpenDrawerInternal(STabSidebar *this,TSharedRef<SDockTab,1> *param_1,bool param_2)

{
  atomic<int> *paVar1;
  longlong *plVar2;
  int *piVar3;
  TSharedPtr<FActiveTimerHandle,1> *pTVar4;
  TArray<TSharedRef<STabDrawer,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  atomic<int> aVar6;
  STabDrawer *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDockTab *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  SDockTab *pSVar11;
  TReferenceControllerBase<1> *pTVar12;
  SWidget *pSVar13;
  TSharedRef<STabDrawer,1> *pTVar14;
  code *pcVar15;
  bool bVar16;
  bool bVar17;
  FSharedReferencer<1> FVar18;
  FDeprecateSlateVector2D FVar19;
  bool bVar20;
  FThrottleRequest FVar21;
  int iVar22;
  TSharedPtr<STabDrawer,1> *pTVar23;
  FGeometry *pFVar24;
  TSharedPtr<SDockingTabStack,1> *pTVar25;
  FArguments *pFVar26;
  undefined8 *puVar27;
  TSharedRef<SWidget,1> *pTVar28;
  ulong64 uVar29;
  FScopedWidgetSlotArguments *pFVar30;
  FSlateThrottleManager *this_00;
  undefined4 extraout_var;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar31;
  TSharedRef<FActiveTimerHandle,1> *pTVar32;
  FSlateApplication *this_01;
  undefined4 uVar33;
  FScriptContainerElement *pFVar34;
  FScriptContainerElement *pFVar35;
  FScopedWidgetSlotArguments *pFVar36;
  FMemScope FVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStackY_6a8 [32];
  ETabDrawerOpenDirection local_658;
  char local_657;
  undefined4 local_654 [3];
  FName local_648;
  undefined4 uStack_640;
  uint uStack_63c;
  TSharedRef<STabDrawer,1> local_638;
  undefined8 local_628;
  float fStack_620;
  uint uStack_61c;
  FDeprecateSlateVector2D local_618;
  STabDrawer *local_610;
  FSharedReferencer<1> local_608;
  FMemScope local_600;
  FActiveTimerHandle *local_5f8;
  FSharedReferencer<1> local_5f0;
  TWeakPtr<SWidget,1> local_5e8;
  undefined1 local_5d8 [16];
  TSharedRef<SDockTab,1> *local_5c8;
  code *local_5c0;
  longlong lStack_5b8;
  undefined1 local_5b0;
  undefined1 local_5a8 [8];
  void *pvStack_5a0;
  undefined8 local_598;
  TSharedRef<SDockTab,1> local_590;
  TSharedPtr<SWidget,1> local_578;
  TSharedRef<FActiveTimerHandle,1> local_568;
  T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,ETabDrawerOpenDirection_&&>
  local_558;
  FDestructionSentinel local_540;
  undefined1 *local_528;
  code *local_518;
  longlong lStack_510;
  code *local_508;
  longlong lStack_500;
  TSharedRef<SWidget,1> local_4f8;
  SWidget *local_4e8;
  TReferenceControllerBase<1> *pTStack_4e0;
  TSharedRef<SWidget,1> local_4d8;
  TSharedRef<SWidget,1> local_4c8;
  code *local_4b8;
  longlong lStack_4b0;
  TSharedPtr<STabDrawer,1> local_4a8;
  TSharedPtr<SDockingTabStack,1> local_498;
  undefined1 local_488 [8];
  TReferenceControllerBase<1> *local_480;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  FDeprecateSlateVector2D local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  FDeprecateSlateVector2D local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0 [2];
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_3d0;
  undefined1 local_3b8 [536];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [40];
  FScopedWidgetSlotArguments local_148;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  local_654[0] = 0;
  local_590.Object = param_1->Object;
  local_590.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_590.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_590.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_590.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_657 = param_2;
  local_5c8 = param_1;
  pTVar23 = FindOpenedDrawer(this,&local_4a8,&local_590);
  pSVar7 = pTVar23->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a8.SharedReferenceCount.ReferenceController);
  if (pSVar7 == (STabDrawer *)0x0) {
    if (&this->PendingTabToOpen != (TWeakPtr<SDockTab,1> *)local_3e0) {
      pTVar8 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
      (this->PendingTabToOpen).Object = (SDockTab *)0x0;
      (this->PendingTabToOpen).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar8->WeakReferenceCount;
        aVar6 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar6 == (atomic<int>)0x1) {
          (**(code **)(pTVar8->_padding_ + 8))();
        }
      }
    }
    this->bAnimatePendingTabOpen = false;
    if (((this->DrawersOverlay).Object == (SOverlay *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar24 = SWidget::GetTickSpaceGeometry((SWidget *)(this->DrawersOverlay).Object);
    local_418 = pFVar24->Size;
    uStack_410 = *(undefined8 *)&pFVar24->Scale;
    local_408 = *(undefined8 *)((longlong)&(pFVar24->AbsolutePosition).field0_0x0 + 4);
    uStack_400 = *(undefined8 *)((longlong)&(pFVar24->Position).field0_0x0 + 4);
    local_3f8 = *(undefined8 *)((pFVar24->AccumulatedRenderTransform).M.M[0] + 1);
    uStack_3f0 = *(undefined8 *)((pFVar24->AccumulatedRenderTransform).M.M[1] + 1);
    local_3e8 = *(undefined8 *)
                 ((longlong)&(pFVar24->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    pFVar24 = SWidget::GetTickSpaceGeometry((SWidget *)this);
    fVar39 = __real_3f000000;
    local_450 = pFVar24->Size;
    uStack_448 = *(undefined8 *)&pFVar24->Scale;
    local_440 = *(undefined8 *)((longlong)&(pFVar24->AbsolutePosition).field0_0x0 + 4);
    uStack_438 = *(undefined8 *)((longlong)&(pFVar24->Position).field0_0x0 + 4);
    local_430 = *(undefined8 *)((pFVar24->AccumulatedRenderTransform).M.M[0] + 1);
    uStack_428 = *(undefined8 *)((pFVar24->AccumulatedRenderTransform).M.M[1] + 1);
    local_420 = *(undefined8 *)
                 ((longlong)&(pFVar24->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    local_618._0_4_ = local_450._0_4_;
    fVar41 = (float)local_618._0_4_ - __real_40800000;
    fStack_620 = fVar41;
    if ((this->Location == Right) || (fStack_620 = 0.0, fVar40 = fVar41, this->Location != Left)) {
      fVar40 = 0.0;
    }
    local_618 = local_418;
    FVar19 = local_618;
    local_618._0_4_ = local_418._0_4_;
    local_628 = (code *)CONCAT44(0xc1000000,fVar40);
    fVar40 = (float)local_618._0_4_ - (fVar40 + fStack_620);
    uStack_61c = 0xc1000000;
    fVar42 = fVar40 * __real_3f000000;
    local_618 = FVar19;
    pTVar25 = SDockTab::GetParentDockTabStack(param_1->Object,&local_498);
    if ((pTVar25->Object == (SDockingTabStack *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    fVar38 = SDockingTabStack::GetTabSidebarSizeCoefficient(pTVar25->Object,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_498.SharedReferenceCount.ReferenceController);
    pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
    if (fVar39 <= fVar38) {
      fVar38 = fVar39;
    }
    pSVar9 = param_1->Object;
    if (fVar38 <= 0.0) {
      fVar38 = 0.0;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar34 = (this->Tabs).AllocatorInstance.Data;
    pFVar35 = pFVar34 + (longlong)(this->Tabs).ArrayNum * 0x20;
    for (; pFVar34 != pFVar35; pFVar34 = pFVar34 + 0x20) {
      pTVar10 = *(TReferenceControllerBase<1> **)(pFVar34 + 8);
      pSVar11 = *(SDockTab **)pFVar34;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar12 = *(TReferenceControllerBase<1> **)(pFVar34 + 0x18);
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      if (pSVar11 == pSVar9) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        if (pFVar34 == (FScriptContainerElement *)0x0) goto LAB_14276d334;
        local_5e8.WeakReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar34 + 0x18);
        local_5e8.Object = *(SWidget **)(pFVar34 + 0x10);
        if (local_5e8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_5e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_5e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        local_468 = 0;
        local_470 = 0;
        goto LAB_14276d34d;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14276d334:
    local_458 = 0;
    local_5e8.Object = (SWidget *)0x0;
    local_5e8.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_460 = 0;
LAB_14276d34d:
    bVar17 = false;
    bVar16 = false;
    bVar20 = false;
    pFVar26 = STabDrawer::FArguments::FArguments((FArguments *)local_3b8);
    uStack_640 = 0;
    pFVar26->_MinDrawerSize = fVar41;
    pFVar26->_TargetDrawerSize = fVar38 * fVar40;
    pFVar26->_MaxDrawerSize = fVar42;
    local_648 = (FName)OnTabDrawerFocusLost;
    lStack_510 = (ulonglong)uStack_63c << 0x20;
    local_518 = OnTabDrawerFocusLost;
    TDelegateRegistration<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>::
    BindSP<STabSidebar>((TDelegateRegistration<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>
                         *)&pFVar26->_OnDrawerFocusLost,this,(pmf_0d76e53d *)&local_518);
    uStack_640 = 0;
    local_648 = (FName)OnTabDrawerClosed;
    lStack_500 = (ulonglong)uStack_63c << 0x20;
    local_508 = OnTabDrawerClosed;
    TDelegateRegistration<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>::
    BindSP<STabSidebar>((TDelegateRegistration<void___cdecl(TSharedRef<STabDrawer,1>),FDefaultDelegateUserPolicy>
                         *)&pFVar26->_OnDrawerClosed,this,(pmf_0d76e53d *)&local_508);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar26->_OnTargetDrawerSizeChanged,(FWriteAccessScope *)&local_540);
    local_528 = &(pFVar26->_OnTargetDrawerSizeChanged).field_0x8;
    puVar27 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_528);
    FVar37 = local_600;
    if (puVar27 != (undefined8 *)0x0) {
      uStack_63c = local_568.SharedReferenceCount.ReferenceController._4_4_;
      local_648 = (FName)OnTargetDrawerSizeChanged;
      uStack_640 = 0;
      pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4f8);
      FVar37 = (FMemScope)(pTVar28->SharedReferenceCount).ReferenceController;
      pSVar13 = pTVar28->Object;
      if (FVar37 != (FMemScope)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FVar37 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar37 + 8) + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)((longlong)FVar37 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar37 + 8) + 1);
        UNLOCK();
      }
      bVar17 = true;
      bVar16 = true;
      bVar20 = true;
      *puVar27 = &
                 ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSTabDrawer___00__M_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar29 = FDelegateHandle::GenerateNewID();
      puVar27[2] = uVar29;
      *puVar27 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSTabSidebar___00__A6AXV__TSharedRef_VSTabDrawer___00__M_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar27[3] = pSVar13;
      *(FMemScope *)(puVar27 + 4) = FVar37;
      if (FVar37 != (FMemScope)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FVar37 + 0xc) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar37 + 0xc) + 1);
        UNLOCK();
      }
      *(FName *)(puVar27 + 5) = local_648;
      puVar27[6] = CONCAT44(uStack_63c,uStack_640);
    }
    if (bVar20) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar37);
    }
    if (bVar16) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar37);
    }
    if (bVar17) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4f8.SharedReferenceCount.ReferenceController);
    }
    if (local_540.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_540.Accessor,&local_540);
    }
    param_1 = local_5c8;
    pTVar28 = SDockTab::GetContent(local_5c8->Object,&local_4d8);
    pTVar8 = (pTVar28->SharedReferenceCount).ReferenceController;
    pSVar13 = pTVar28->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4e8 = (pFVar26->_Content).Widget.Object;
    pTStack_4e0 = (pFVar26->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar26->_Content).Widget.Object = pSVar13;
    (pFVar26->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4e0)
    ;
    local_658 = this->Location != Left;
    local_558.Arg1 = &local_5e8;
    local_558.Arg2 = &local_658;
    local_558.Arg0 = param_1;
    FLLMScope::FLLMScope
              ((FLLMScope *)local_654,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
    ;
    local_648 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_600,&local_648,true);
    TSlateDecl<STabDrawer,RequiredArgs::T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,enum_ETabDrawerOpenDirection_&&>_>
    ::
    TSlateDecl<STabDrawer,RequiredArgs::T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,enum_ETabDrawerOpenDirection_&&>_>
              (local_488,"STabDrawer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
               ,0x318,&local_558);
    FMemScope::~FMemScope(&local_600);
    FLLMScope::~FLLMScope((FLLMScope *)local_654);
    TSlateDecl<STabDrawer,RequiredArgs::T3RequiredArgs<TSharedRef<SDockTab,1>_&,TWeakPtr<SWidget,1>_const_&,enum_ETabDrawerOpenDirection_&&>_>
    ::operator<<=(local_488,&local_638,pFVar26);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_480);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d8.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_170);
    if ((void *)local_170._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_170._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_170);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_188);
    if ((void *)local_188._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_188._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_188);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0);
    if ((void *)local_1a0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1a0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_3b8._512_8_);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_3b8);
    if (((this->DrawersOverlay).Object == (SOverlay *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar30 = SOverlay::AddSlot((this->DrawersOverlay).Object,&local_148,-1);
    lStack_5b8 = CONCAT44(uStack_61c,fStack_620);
    local_5b0 = 1;
    local_598 = 0;
    local_5c0 = local_628;
    local_5a8 = (undefined1  [8])0x0;
    pvStack_5a0 = (void *)0x0;
    pFVar30->_padding_ = (longlong)local_628;
    pFVar30->_padding_ = lStack_5b8;
    *(undefined1 *)&pFVar30->_padding_ = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar30->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a8);
    pFVar36 = (FScopedWidgetSlotArguments *)0x0;
    if (&pFVar30->_padding_ != (longlong *)0x0) {
      pFVar36 = pFVar30;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a8);
    if (pvStack_5a0 != (void *)0x0) {
      FMemory::Free(pvStack_5a0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5a8);
    FVar18.ReferenceController = local_638.SharedReferenceCount.ReferenceController;
    plVar2 = &pFVar36->_padding_;
    uVar33 = 3;
    if (this->Location == Left) {
      uVar33 = 1;
    }
    if ((longlong *)local_5d8 != plVar2) {
      *(undefined4 *)plVar2 = uVar33;
      *(undefined1 *)((longlong)&pFVar36->_padding_ + 4) = 1;
    }
    pFVar30 = (FScopedWidgetSlotArguments *)0x0;
    if (plVar2 != (longlong *)0x0) {
      pFVar30 = pFVar36;
    }
    local_610 = local_638.Object;
    local_608.ReferenceController = local_638.SharedReferenceCount.ReferenceController;
    if (local_638.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((STabDrawer **)&pFVar30->_padding_ != &local_610) {
      pFVar30->_padding_ = (longlong)local_638.Object;
      local_610 = (STabDrawer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar30->_padding_,&local_608);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_608.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar18.ReferenceController);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_148);
    pSVar7 = local_638.Object;
    if (local_657 == '\0') {
      fVar39 = (local_638.Object)->TargetDrawerSize;
      if ((local_638.Object)->TargetDrawerSize <= (local_638.Object)->MinDrawerSize) {
        fVar39 = (local_638.Object)->MinDrawerSize;
      }
      (local_638.Object)->CurrentSize = fVar39;
      FCurveSequence::JumpToEnd(&(local_638.Object)->OpenCloseAnimation);
    }
    else {
      bVar20 = FCurveSequence::IsPlaying(&(local_638.Object)->OpenCloseAnimation);
      if (bVar20) {
        fVar39 = FCurveSequence::GetSequenceTime(&pSVar7->OpenCloseAnimation);
      }
      else {
        fVar39 = 0.0;
      }
      pTVar28 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&pSVar7->_padding_,&local_4c8);
      FCurveSequence::Play(&pSVar7->OpenCloseAnimation,pTVar28,false,fVar39,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4c8.SharedReferenceCount.ReferenceController);
      pTVar4 = &pSVar7->OpenCloseTimer;
      if (pTVar4->Object == (FActiveTimerHandle *)0x0) {
        this_00 = FSlateThrottleManager::Get();
        FVar21 = FSlateThrottleManager::EnterResponsiveMode(this_00);
        fStack_620 = 0.0;
        local_628 = STabDrawer::UpdateAnimation;
        lStack_4b0 = (ulonglong)uStack_61c << 0x20;
        (pSVar7->AnimationThrottle).Index = *(int *)CONCAT44(extraout_var,FVar21.Index);
        local_4b8 = STabDrawer::UpdateAnimation;
        pTVar31 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                  ::CreateSP<STabDrawer>(&local_3d0,pSVar7,(pmf_9082d6d0 *)&local_4b8);
        pTVar32 = SWidget::RegisterActiveTimer((SWidget *)pSVar7,&local_568,0.0,pTVar31);
        local_5f0.ReferenceController = (pTVar32->SharedReferenceCount).ReferenceController;
        local_5f8 = pTVar32->Object;
        if (local_5f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_5f0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_5f0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar4 != (TSharedPtr<FActiveTimerHandle,1> *)&local_5f8) {
          pTVar4->Object = local_5f8;
          local_5f8 = (FActiveTimerHandle *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pSVar7->OpenCloseTimer).SharedReferenceCount,&local_5f0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5f0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_568.SharedReferenceCount.ReferenceController._4_4_,
                            local_568.SharedReferenceCount.ReferenceController._0_4_));
      }
    }
    pTVar5 = &this->OpenedDrawers;
    pTVar14 = (TSharedRef<STabDrawer,1> *)(pTVar5->AllocatorInstance).Data;
    if (((pTVar14 <= &local_638) && (&local_638 < pTVar14 + (this->OpenedDrawers).ArrayMax)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar22 = (this->OpenedDrawers).ArrayNum;
    piVar3 = &(this->OpenedDrawers).ArrayMax;
    if (iVar22 == *piVar3) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar5->AllocatorInstance,piVar3);
    }
    (this->OpenedDrawers).ArrayNum = iVar22 + 1;
    pFVar34 = (pTVar5->AllocatorInstance).Data;
    *(STabDrawer **)(pFVar34 + (longlong)iVar22 * 0x10) = local_638.Object;
    *(TReferenceControllerBase<1> **)(pFVar34 + (longlong)iVar22 * 0x10 + 8) =
         local_638.SharedReferenceCount.ReferenceController;
    if (local_638.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_01 = FSlateApplication::Get();
    local_578.Object = (SWidget *)local_638.Object;
    local_578.SharedReferenceCount.ReferenceController =
         local_638.SharedReferenceCount.ReferenceController;
    if (local_638.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::SetKeyboardFocus(this_01,&local_578,SetDirectly);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_578.SharedReferenceCount.ReferenceController);
    SDockTab::OnTabDrawerOpened(param_1->Object);
    UpdateDrawerAppearance(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_638.SharedReferenceCount.ReferenceController);
    if (local_5e8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_5e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar6 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)((local_5e8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_5e8.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenDrawerNextFrame @ 14276db00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STabSidebar::OpenDrawerNextFrame(STabSidebar *this,TSharedRef<SDockTab,1> *param_1,bool param_2)

{
  atomic<int> *paVar1;
  TSharedPtr<FActiveTimerHandle,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  TSharedRef<SWidget,1> *pTVar11;
  ulong64 uVar12;
  TSharedRef<FActiveTimerHandle,1> *pTVar13;
  TReferenceControllerBase<1> *local_res8;
  FActiveTimerHandle *local_b8;
  FSharedReferencer<1> local_b0;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TSharedRef<SWidget,1> local_98;
  TSharedRef<FActiveTimerHandle,1> local_88;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  (this->PendingTabToOpen).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (this->PendingTabToOpen).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->PendingTabToOpen).WeakReferenceCount.ReferenceController = pTVar4;
  }
  pTVar2 = &this->OpenPendingDrawerTimerHandle;
  this->bAnimatePendingTabOpen = param_2;
  if (pTVar2->Object == (FActiveTimerHandle *)0x0) {
    local_78 = (undefined1  [8])0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_60);
    local_48 = &local_70;
    puVar10 = UE::Core::Private::DelegateAllocate(0x38,&local_70);
    if (puVar10 != (undefined8 *)0x0) {
      uStack_9c = local_88.SharedReferenceCount.ReferenceController._4_4_;
      local_a8 = OnOpenPendingDrawerTimer;
      uStack_a0 = 0;
      pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_98);
      local_res8 = (pTVar11->SharedReferenceCount).ReferenceController;
      pSVar6 = pTVar11->Object;
      if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar12;
      *puVar10 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSTabSidebar___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar10[3] = pSVar6;
      puVar10[4] = local_res8;
      if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res8->WeakReferenceCount = (atomic<int>)((int)local_res8->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      puVar10[5] = local_a8;
      puVar10[6] = CONCAT44(uStack_9c,uStack_a0);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res8);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res8);
    }
    if (bVar9) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    pTVar13 = SWidget::RegisterActiveTimer
                        ((SWidget *)this,&local_88,0.0,
                         (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                          *)local_78);
    local_b0.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
    local_b8 = pTVar13->Object;
    if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar2 != (TSharedPtr<FActiveTimerHandle,1> *)&local_b8) {
      pTVar2->Object = local_b8;
      local_b8 = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OpenPendingDrawerTimerHandle).SharedReferenceCount,&local_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                        local_88.SharedReferenceCount.ReferenceController._0_4_));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveAllDrawers @ 14277b0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::RemoveAllDrawers(STabSidebar *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForAnyElementType FVar5;
  TSharedRef<STabDrawer,1> *pTVar6;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  TSharedRef<SDockTab,1> local_28;
  undefined8 local_18 [2];
  
  if (&this->PendingTabToOpen != (TWeakPtr<SDockTab,1> *)local_18) {
    pTVar4 = (this->PendingTabToOpen).WeakReferenceCount.ReferenceController;
    (this->PendingTabToOpen).Object = (SDockTab *)0x0;
    (this->PendingTabToOpen).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  this->bAnimatePendingTabOpen = false;
  iVar3 = (this->OpenedDrawers).ArrayNum;
  pTVar6 = (TSharedRef<STabDrawer,1> *)(this->OpenedDrawers).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = iVar3;
  if (iVar3 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&local_38,iVar3,&local_2c);
    ConstructItems<TSharedRef<STabDrawer,1>,TSharedRef<STabDrawer,1>,int>
              (local_38.Data,pTVar6,iVar3);
  }
  iVar3 = local_30;
  pTVar6 = (TSharedRef<STabDrawer,1> *)(local_38.Data + (longlong)local_30 * 0x10);
  FVar5.Data = local_38.Data;
  while( true ) {
    if (local_30 != iVar3) {
      `TCheckedPointerIterator<TSharedRef<STabDrawer,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((TSharedRef<STabDrawer,1> *)FVar5.Data == pTVar6) break;
    TSharedPtr<SDockTab,1>::ToSharedRef
              (&((TSharedRef<STabDrawer,1> *)FVar5.Data)->Object->ForTab,&local_28);
    RemoveDrawer(this,&local_28);
    FVar5.Data = FVar5.Data + 0x10;
  }
  DestructItems<TSharedRef<STabDrawer,1>,int>((TSharedRef<STabDrawer,1> *)local_38.Data,local_30);
  if ((TSharedRef<STabDrawer,1> *)local_38.Data != (TSharedRef<STabDrawer,1> *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// RemoveDrawer @ 14277c260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::RemoveDrawer(STabSidebar *this,TSharedRef<SDockTab,1> *param_1)

{
  SOverlay *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<STabDrawer,1> local_48;
  TSharedRef<STabDrawer,1> local_38;
  TSharedRef<SDockTab,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindOpenedDrawer(this,&local_48,&local_28);
  if (local_48.Object != (STabDrawer *)0x0) {
    if ((local_48.Object == (STabDrawer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.Object = local_48.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_48.Object == (STabDrawer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((this->DrawersOverlay).Object == (SOverlay *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (this->DrawersOverlay).Object;
    local_18.Object = (SWidget *)local_38.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = SOverlay::RemoveSlot(this_00,&local_18);
    if ((!bVar2) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_388637335618583883>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\STabSidebar.cpp"
                           ,0x2b5,"bRemoveSuccessful"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TArray<TSharedRef<STabDrawer,1>,TSizedDefaultAllocator<32>_>::Remove
              (&this->OpenedDrawers,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SDockTab::OnTabDrawerClosed(param_1->Object);
  UpdateDrawerAppearance(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveTab @ 14277ce70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall STabSidebar::RemoveTab(STabSidebar *this,TSharedRef<SDockTab,1> *param_1)

{
  int *piVar1;
  TArray<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  SDockTab *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SDockTab *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  SBoxPanel *this_00;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  TSharedRef<SWidget,1> local_88;
  TSharedRef<SDockTab,1> local_78;
  TSharedRef<SDockTab,1> local_68;
  TAttribute<EVisibility> local_58;
  
  pTVar13 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = &this->Tabs;
  pSVar3 = param_1->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar17 = (pTVar2->AllocatorInstance).Data;
  iVar12 = (this->Tabs).ArrayNum;
  pFVar15 = pFVar17;
  do {
    if (pFVar15 == pFVar17 + (longlong)iVar12 * 0x20) {
      uVar14 = 0xffffffff;
LAB_14277cf25:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_14277cf2a:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return uVar14 != 0xffffffff;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar15 + 8);
    pSVar5 = *(SDockTab **)pFVar15;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(pFVar15 + 0x18);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pSVar5 == pSVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      uVar14 = (uint)((longlong)pFVar15 - (longlong)pFVar17 >> 5);
      if (uVar14 == 0xffffffff) goto LAB_14277cf2a;
      uVar16 = ~uVar14 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar14 < (this->Tabs).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      pFVar17 = (pTVar2->AllocatorInstance).Data;
      lVar18 = (longlong)(int)uVar14 * 0x20;
      pTVar13 = *(TReferenceControllerBase<1> **)(pFVar17 + lVar18 + 8);
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar17 + lVar18 + 0x18);
      pSVar7 = *(SWidget **)(pFVar17 + lVar18 + 0x10);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar11 = 0;
      if ((int)uVar14 < (this->Tabs).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      pFVar17 = (pTVar2->AllocatorInstance).Data + lVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar17 + 0x18));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar17 + 8));
      iVar12 = (this->Tabs).ArrayNum + ~uVar14;
      if (iVar12 != 0) {
        memmove(pFVar17,pFVar17 + 0x20,(longlong)iVar12 << 5);
      }
      piVar1 = &(this->Tabs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&pTVar2->AllocatorInstance,(this->Tabs).ArrayNum,&(this->Tabs).ArrayMax);
      if (((this->TabBox).Object == (SVerticalBox *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      this_00 = (SBoxPanel *)(this->TabBox).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_88.Object = pSVar7;
      local_88.SharedReferenceCount.ReferenceController = pTVar4;
      SBoxPanel::RemoveSlot(this_00,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      local_78.Object = param_1->Object;
      local_78.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      RemoveDrawer(this,&local_78);
      SummonPinnedTabIfNothingOpened(this);
      local_68.Object = param_1->Object;
      local_68.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SetTabPinned(&local_68,false);
      if ((this->Tabs).ArrayNum == 0) {
        local_58.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
        local_58.bIsSet = true;
        local_58.Getter._16_8_ = 0;
        local_58.Getter._0_8_ = 0;
        local_58.Getter._8_8_ = 0;
        SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_58);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      goto LAB_14277cf25;
    }
    pFVar15 = pFVar15 + 0x20;
  } while( true );
}

// RestoreTab @ 142781a50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall STabSidebar::RestoreTab(STabSidebar *this,TSharedRef<SDockTab,1> *param_1)

{
  int iVar1;
  SDockingTabStack *this_00;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  TSharedPtr<SDockingTabStack,1> *pTVar8;
  FTabId *pFVar9;
  longlong lVar10;
  uint uVar11;
  FName *pFVar12;
  TSharedRef<SDockTab,1> local_68;
  TSharedRef<SDockTab,1> local_58;
  TSharedPtr<SDockingTabStack,1> local_48;
  FTabId local_38;
  FName local_28;
  undefined8 uStack_20;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar5 = RemoveTab(this,&local_58);
  if (!bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  pTVar8 = SDockTab::GetParentDockTabStack(param_1->Object,&local_48);
  if ((pTVar8->Object == (SDockingTabStack *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  this_00 = pTVar8->Object;
  local_68.Object = param_1->Object;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar9 = SDockTab::GetLayoutIdentifier(local_68.Object,&local_38);
  pFVar2 = (FName *)(this_00->Tabs).AllocatorInstance.Data;
  iVar1 = (this_00->Tabs).ArrayNum;
  local_28 = pFVar9->TabType;
  uStack_20._0_4_ = pFVar9->InstanceId;
  uStack_20._4_1_ = pFVar9->Flags;
  uStack_20._5_3_ = *(undefined3 *)&pFVar9->field_0xd;
  pFVar12 = pFVar2;
  do {
    if (pFVar12 == pFVar2 + (longlong)iVar1 * 4) {
LAB_142781be8:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
    if ((((pFVar12[2].ComparisonIndex.Value & 4) != 0) && (*pFVar12 == local_28)) &&
       (((undefined4)uStack_20 == 0xffffffff ||
        ((undefined4)uStack_20 == pFVar12[1].ComparisonIndex.Value)))) {
      uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar2 >> 5);
      if (uVar11 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar11 < iVar1) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (this_00->Tabs).AllocatorInstance.Data;
        lVar10 = (longlong)(int)uVar11 * 0x20;
        *(undefined4 *)(pFVar3 + lVar10 + 0x18) = 0;
        *(undefined4 *)(pFVar3 + lVar10 + 0x10) = 2;
        pFVar3[lVar10 + 0x14] = (FScriptContainerElement)0x2;
        SDockingTabStack::OpenTab(this_00,&local_68,-1,false);
      }
      goto LAB_142781be8;
    }
    pFVar12 = pFVar12 + 4;
  } while( true );
}

// SetOffset @ 1427856d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::SetOffset(STabSidebar *this,float param_1)

{
  TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
            ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)
             &this->_padding_,0.0,param_1 + __real_40800000,0.0,0.0);
  return;
}

// SummonPinnedTabIfNothingOpened @ 14278c3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::SummonPinnedTabIfNothingOpened(STabSidebar *this)

{
  SDockTab *pSVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<SDockTab,1> *pTVar4;
  TSharedPtr<SDockTab,1> local_38;
  TSharedRef<SDockTab,1> local_28;
  TSharedPtr<SDockTab,1> local_18;
  
  pTVar4 = GetForegroundTab(this,&local_18);
  pSVar1 = pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pSVar1 == (SDockTab *)0x0) {
    FindFirstPinnedTab(this,&local_38);
    if (local_38.Object != (SDockTab *)0x0) {
      if (local_38.Object == (SDockTab *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_28.Object = local_38.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
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
      OpenDrawerInternal(this,&local_28,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// TryOpenSidebarDrawer @ 14278ecc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall STabSidebar::TryOpenSidebarDrawer(STabSidebar *this,TSharedRef<SDockTab,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDockTab *pSVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  SDockTab *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TSharedRef<SDockTab,1> local_48;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = (this->Tabs).AllocatorInstance.Data;
  iVar1 = (this->Tabs).ArrayNum;
  pFVar8 = pFVar4;
  do {
    if (pFVar8 == pFVar4 + (longlong)iVar1 * 0x20) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14278ed60:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    pSVar6 = *(SDockTab **)pFVar8;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = *(TReferenceControllerBase<1> **)(pFVar8 + 0x18);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (pSVar6 == pSVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if ((int)((longlong)pFVar8 - (longlong)pFVar4 >> 5) != -1) {
        local_48.Object = param_1->Object;
        local_48.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        OpenDrawerNextFrame(this,&local_48,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return true;
      }
      goto LAB_14278ed60;
    }
    pFVar8 = pFVar8 + 0x20;
  } while( true );
}

// UpdateDrawerAppearance @ 142791680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STabSidebar::UpdateDrawerAppearance(STabSidebar *this)

{
  int iVar1;
  longlong lVar2;
  SDockTab *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  STabDrawerButton *this_00;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FSharedReferencer<1> local_50;
  SDockTab *local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<SDockTab,1> local_38 [2];
  
  iVar1 = (this->OpenedDrawers).ArrayNum;
  local_48 = (SDockTab *)0x0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (0 < iVar1) {
    uVar8 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar8 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)
             ((this->OpenedDrawers).AllocatorInstance.Data +
             (longlong)(this->OpenedDrawers).ArrayNum * 0x10 + -0x10);
    if (*(longlong *)(lVar2 + 0x338) == 0) {
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
    pSVar3 = *(SDockTab **)(lVar2 + 0x338);
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 0x340);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar3 == (SDockTab *)0x0) {
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
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50.ReferenceController = pTVar4;
    local_48 = pSVar3;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  FVar6.ReferenceController = FStack_40.ReferenceController;
  pSVar3 = local_48;
  iVar1 = (this->Tabs).ArrayNum;
  pFVar9 = (this->Tabs).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Tabs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<TSharedRef<SDockTab,1>,TSharedRef<STabDrawerButton,1>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    this_00 = *(STabDrawerButton **)(pFVar9 + 0x10);
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38[0].Object = pSVar3;
    local_38[0].SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
    STabDrawerButton::UpdateAppearance(this_00,local_38);
    pFVar9 = pFVar9 + 0x20;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return;
}

